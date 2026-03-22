#!/usr/bin/env python3
"""
Neo Geo ROM Analyzer — M68K disassembly + function discovery.

Adapted from the CPS1 SF2 analyzer (sp00nznet/sf2/tools/analyze_rom.py).
Handles Neo Geo P ROM byte-swapping and half-swapped mapping.

Usage:
    python tools/analyze_rom.py roms/drift_p1.rom [--output functions.json] [--stats]
"""

import struct
import json
import sys
import os
from collections import defaultdict
from capstone import Cs, CS_ARCH_M68K, CS_MODE_M68K_000


class NeoGeoROM:
    """Represents a Neo Geo P ROM with proper byte/bank mapping."""

    def __init__(self, path):
        with open(path, 'rb') as f:
            raw = f.read()

        # Neo Geo P ROMs are byteswapped
        swapped = bytearray(len(raw))
        for i in range(0, len(raw), 2):
            swapped[i] = raw[i + 1]
            swapped[i + 1] = raw[i]

        # For 2 MB ROMs, mapping is reversed:
        #   File offset $100000-$1FFFFF = 68k $000000-$0FFFFF (fixed bank)
        #   File offset $000000-$0FFFFF = 68k $200000-$2FFFFF (port zone)
        if len(swapped) == 0x200000:
            self.data = bytearray(len(swapped))
            self.data[0:0x100000] = swapped[0x100000:0x200000]
            self.data[0x100000:0x200000] = swapped[0:0x100000]
        else:
            self.data = swapped

        self.size = len(self.data)
        self._parse_vectors()

        # Explicit entry point seeds for functions the analyzer may miss
        # (reachable only via computed jumps, PC-relative from unanalyzed
        # code, or indirect call patterns)
        self.explicit_seeds = [
            0x000AA8,  # BIOS config reader (PC-relative from $966)
            0x000B34,  # Gameplay dispatcher (JMP from state handlers)
            0x000C5C,  # Sub-state 0 common path after sound setup
            0x000D32,  # Sub-state 1 exit (branch target in $CC6)
            0x001602,  # Called from $002336 fall-through path
            0x002FB4,  # Called from game setup path
            0x003070,  # Called from $002336 (game init)
            0x0028C6,  # Called from game init
            0x0028EC,  # Called from game init
            0x0133A0,  # VRAM-related init sub
            0x003018,  # Called every frame from game loop
            0x011028,  # Called from init path
            0x013330,  # Called from VRAM path
            0x001034,  # Region 0 (Japan) handler from $1004 dispatch
            0x001076,  # Input state update (PC-relative from $B34)
            0x00109E,  # Cleanup sub (PC-relative)
            0x0010B0,  # Store to $10042C (PC-relative)
            0x0010B8,  # PRNG advance (PC-relative from $B34)
            0x0122C4,  # Sprite commit continuation (push-return from $01229E)
            0x011C88,  # Mid-point of unrolled VRAM copy (computed jump target)
            0x012384,  # VRAM commit sub-dispatch
            0x013166,  # VRAM buffer write sub
            0x013246,  # VRAM buffer write sub
            0x0132D4,  # VRAM buffer write sub
            0x0131EA,  # VRAM write sub (from $01229E dispatch)
            0x013292,  # VRAM write sub (from $01229E dispatch)
        ]

    def _parse_vectors(self):
        self.initial_sp = struct.unpack('>I', self.data[0x00:0x04])[0]
        self.initial_pc = struct.unpack('>I', self.data[0x04:0x08])[0]

        self.vectors = {}
        vector_names = {
            2: 'bus_error', 3: 'address_error', 4: 'illegal_insn',
            5: 'div_zero', 6: 'chk', 7: 'trapv',
            8: 'privilege_violation', 9: 'trace',
            25: 'irq1_vblank', 26: 'irq2_timer', 27: 'irq3_reset',
        }
        for idx, name in vector_names.items():
            addr = struct.unpack('>I', self.data[idx * 4:(idx + 1) * 4])[0]
            if addr != 0 and addr != 0xFFFFFFFF and addr < self.size and (addr & 1) == 0:
                self.vectors[name] = addr

        # Neo Geo BIOS dispatch JMP table at $0122+
        for i, name in enumerate(['user', 'player_start', 'demo_end', 'coin_sound']):
            offset = 0x122 + i * 8
            opcode = struct.unpack('>H', self.data[offset:offset + 2])[0]
            if opcode == 0x4EF9:  # JMP abs.l
                target = struct.unpack('>I', self.data[offset + 2:offset + 6])[0]
                if 0 < target < self.size:
                    self.vectors[f'bios_{name}'] = target

    def read8(self, addr):
        if addr < self.size:
            return self.data[addr]
        return 0

    def read16(self, addr):
        if addr + 1 < self.size:
            return struct.unpack('>H', self.data[addr:addr + 2])[0]
        return 0

    def read32(self, addr):
        if addr + 3 < self.size:
            return struct.unpack('>I', self.data[addr:addr + 4])[0]
        return 0

    def print_info(self):
        print(f"ROM size:    {self.size} bytes ({self.size // 1024} KB)")
        print(f"Entry PC:    ${self.initial_pc:06X} (BIOS entry)")
        print(f"Initial SSP: ${self.initial_sp:08X}")
        print(f"Vectors:")
        for name, addr in sorted(self.vectors.items(), key=lambda x: x[1]):
            print(f"  {name:<24s} ${addr:06X}")


# Import the M68KAnalyzer from the CPS1 tools (identical 68k analysis logic)
# We duplicate it here so this tool is self-contained.

class M68KAnalyzer:
    CALL_MNEMONICS = {'bsr', 'jsr'}
    UNCONDITIONAL_ENDS = {'bra', 'jmp', 'rts', 'rte', 'rtr'}
    BIT_MNEMONICS = {'btst', 'bset', 'bclr', 'bchg'}

    def __init__(self, rom):
        self.rom = rom
        self.cs = Cs(CS_ARCH_M68K, CS_MODE_M68K_000)
        self.cs.detail = True
        self.visited = set()
        self.instructions = {}
        self.functions = {}
        self.call_graph = defaultdict(set)
        self.xrefs_to = defaultdict(set)
        self.labels = {}
        self.jump_tables = {}

    def analyze(self):
        entry_points = set()
        entry_points.add(self.rom.initial_pc)
        for name, addr in self.rom.vectors.items():
            entry_points.add(addr)
            self.labels[addr] = f"vec_{name}"
        self.labels[self.rom.initial_pc] = "entry_point"

        # Explicit seeds for functions only reachable via PC-relative
        # calls or indirect jumps that the analyzer can't auto-discover.
        # These are identified during manual analysis of the game code.
        explicit_seeds = getattr(self.rom, 'explicit_seeds', [])
        for addr in explicit_seeds:
            if 0x200 <= addr < self.rom.size and not (addr & 1):
                entry_points.add(addr)
                if addr not in self.labels:
                    self.labels[addr] = f"sub_{addr:06X}"

        jt_targets = self._scan_jump_tables()
        entry_points.update(jt_targets)

        # Filter to game code only (not BIOS at $C00000+)
        entry_points = {a for a in entry_points if a < self.rom.size}

        print(f"\nStarting analysis from {len(entry_points)} entry points "
              f"(vectors + {len(jt_targets)} jump table targets)...")

        all_func_entries = set(entry_points)
        work = list(entry_points)
        while work:
            new_work = []
            for addr in work:
                if addr in self.visited or addr >= self.rom.size or addr < 0x200:
                    continue
                if addr & 1:
                    continue
                new_targets = self._disassemble_block(addr)
                for target, is_call in new_targets:
                    if target not in self.visited and 0x200 <= target < self.rom.size and not (target & 1):
                        new_work.append(target)
                        if is_call:
                            all_func_entries.add(target)
            work = new_work

        more_targets = self._scan_address_loads()
        if more_targets:
            print(f"  Found {len(more_targets)} additional targets from address loads")
            work = list(more_targets - self.visited)
            all_func_entries.update(more_targets)
            while work:
                new_work = []
                for addr in work:
                    if addr in self.visited or addr >= self.rom.size or addr < 0x200 or (addr & 1):
                        continue
                    new_targets = self._disassemble_block(addr)
                    for target, is_call in new_targets:
                        if target not in self.visited and 0x200 <= target < self.rom.size and not (target & 1):
                            new_work.append(target)
                            if is_call:
                                all_func_entries.add(target)
                work = new_work

        # Post-analysis: scan all disassembled JSR/BSR instructions for
        # targets we may have missed (especially PC-relative calls where
        # capstone resolves the target but the analyzer didn't follow it)
        pc_rel_targets = set()
        for addr, (mnemonic, op_str, size, raw) in self.instructions.items():
            if mnemonic in ('jsr', 'bsr'):
                # Try to extract absolute target from the op_str
                target = None
                op_clean = op_str.replace('.l', '').replace('.w', '').strip()
                if op_clean.startswith('$'):
                    try:
                        target = int(op_clean[1:], 16) & 0xFFFFFF
                    except ValueError:
                        pass
                # Also try capstone's resolved address for PC-relative
                if target is None and '(pc' in op_str.lower():
                    # Parse "$xxxx(pc)" format
                    import re
                    m = re.match(r'\$([0-9a-fA-F]+)\(pc', op_str)
                    if m:
                        target = int(m.group(1), 16) & 0xFFFFFF
                if target and 0x200 <= target < self.rom.size and not (target & 1):
                    if target not in all_func_entries:
                        pc_rel_targets.add(target)
                        all_func_entries.add(target)
                        if target not in self.labels:
                            self.labels[target] = f"sub_{target:06X}"

        if pc_rel_targets:
            print(f"  Found {len(pc_rel_targets)} additional call targets from PC-relative JSR/BSR")
            work = list(pc_rel_targets - self.visited)
            while work:
                new_work = []
                for addr in work:
                    if addr in self.visited or addr >= self.rom.size or addr < 0x200 or (addr & 1):
                        continue
                    new_targets = self._disassemble_block(addr)
                    for target, is_call in new_targets:
                        if target not in self.visited and 0x200 <= target < self.rom.size and not (target & 1):
                            new_work.append(target)
                            if is_call:
                                all_func_entries.add(target)
                work = new_work

        self._build_functions(all_func_entries)
        print(f"Disassembled {len(self.instructions)} instructions")
        print(f"Found {len(self.functions)} functions")

    def _scan_jump_tables(self):
        targets = set()
        rom = self.rom
        i = 0x200
        while i < rom.size - 12:
            addrs = []
            j = i
            while j < rom.size - 3:
                val = struct.unpack('>I', rom.data[j:j + 4])[0]
                if 0x200 <= val < rom.size and (val & 1) == 0:
                    addrs.append(val)
                    j += 4
                else:
                    break
            if len(addrs) >= 3:
                self.jump_tables[i] = addrs
                for a in addrs:
                    targets.add(a)
                    if a not in self.labels:
                        self.labels[a] = f"jt_{a:06X}"
                i = j
            else:
                i += 2
        print(f"Found {len(self.jump_tables)} jump tables with {len(targets)} unique targets")
        return targets

    def _scan_address_loads(self):
        targets = set()
        for addr, (mnemonic, op_str, size, raw) in self.instructions.items():
            if mnemonic in ('lea', 'pea'):
                target = self._parse_absolute_addr(op_str)
                if target and 0x200 <= target < self.rom.size and not (target & 1):
                    targets.add(target)
            elif mnemonic == 'move.l' and '#$' in op_str:
                try:
                    imm_str = op_str.split('#$')[1].split(',')[0].strip()
                    val = int(imm_str, 16)
                    if 0x200 <= val < self.rom.size and not (val & 1):
                        targets.add(val)
                except (ValueError, IndexError):
                    pass
        return targets - self.visited

    def _parse_absolute_addr(self, op_str):
        for part in op_str.replace('(', '').replace(')', '').replace('.l', '').replace('.w', '').split(','):
            part = part.strip()
            if part.startswith('$'):
                try:
                    return int(part[1:], 16)
                except ValueError:
                    pass
        return None

    def _disassemble_block(self, start_addr):
        targets = []
        addr = start_addr
        for _ in range(10000):
            if addr >= self.rom.size or addr in self.visited or (addr & 1):
                break
            self.visited.add(addr)
            code = bytes(self.rom.data[addr:min(addr + 10, self.rom.size)])
            insns = list(self.cs.disasm(code, addr, count=1))
            if not insns:
                break
            insn = insns[0]
            mnemonic = insn.mnemonic.lower()
            op_str = insn.op_str
            self.instructions[addr] = (mnemonic, op_str, insn.size, code[:insn.size])

            if mnemonic in self.CALL_MNEMONICS:
                target = self._extract_branch_target(insn, addr)
                if target is not None and target < 0xC00000:  # Skip BIOS calls
                    self.xrefs_to[target].add(addr)
                    self.call_graph[start_addr].add(target)
                    targets.append((target, True))
                    if target not in self.labels:
                        self.labels[target] = f"sub_{target:06X}"
                addr += insn.size
                continue
            elif mnemonic in ('bra', 'jmp'):
                target = self._extract_branch_target(insn, addr)
                if target is not None:
                    self.xrefs_to[target].add(addr)
                    targets.append((target, False))
                break
            elif mnemonic in ('rts', 'rte', 'rtr'):
                break
            elif mnemonic.startswith('b') and mnemonic not in self.BIT_MNEMONICS:
                target = self._extract_branch_target(insn, addr)
                if target is not None:
                    self.xrefs_to[target].add(addr)
                    targets.append((target, False))
                    if target not in self.labels:
                        self.labels[target] = f"loc_{target:06X}"
                addr += insn.size
                continue
            elif mnemonic.startswith('db'):
                target = self._extract_branch_target(insn, addr)
                if target is not None:
                    self.xrefs_to[target].add(addr)
                    targets.append((target, False))
                    if target not in self.labels:
                        self.labels[target] = f"loc_{target:06X}"
                addr += insn.size
                continue
            else:
                addr += insn.size
        return targets

    def _extract_branch_target(self, insn, addr):
        op_str = insn.op_str.strip()
        if ',' in op_str and insn.mnemonic.lower().startswith('db'):
            target_part = op_str.split(',', 1)[1].strip()
            if target_part.startswith('$'):
                try: return int(target_part[1:], 16) & 0xFFFFFF
                except ValueError: pass
        if op_str.startswith('$'):
            try: return int(op_str[1:], 16) & 0xFFFFFF
            except ValueError: pass
        if '(' in op_str and '$' in op_str:
            inner = op_str.replace('(', '').replace(')', '').replace('.l', '').replace('.w', '').strip()
            if inner.startswith('$'):
                try: return int(inner[1:], 16) & 0xFFFFFF
                except ValueError: pass
        if insn.operands:
            op = insn.operands[0]
            if hasattr(op, 'imm'):
                return op.imm & 0xFFFFFF
            if hasattr(op, 'mem') and hasattr(op.mem, 'disp'):
                if op.mem.base == 0:
                    return op.mem.disp & 0xFFFFFF
        return None

    def _build_functions(self, func_entries):
        all_addrs = sorted(self.instructions.keys())
        if not all_addrs:
            return
        sorted_entries = sorted(func_entries & set(all_addrs))
        for i, entry in enumerate(sorted_entries):
            next_entry = sorted_entries[i + 1] if i + 1 < len(sorted_entries) else self.rom.size
            insn_addrs = [a for a in all_addrs if entry <= a < next_entry]
            if not insn_addrs:
                continue
            end_addr = insn_addrs[-1]
            last_mnem = self.instructions[end_addr][0]
            last_size = self.instructions[end_addr][2]
            name = self.labels.get(entry, f"sub_{entry:06X}")
            self.functions[entry] = {
                'name': name,
                'start': entry,
                'end': end_addr + last_size,
                'size': (end_addr + last_size) - entry,
                'insn_count': len(insn_addrs),
                'insn_addrs': insn_addrs,
                'calls': sorted(self.call_graph.get(entry, set())),
                'has_return': last_mnem in ('rts', 'rte', 'rtr'),
            }

    def export_json(self, path):
        output = {
            'rom': {
                'size': self.rom.size,
                'entry_pc': f"0x{self.rom.initial_pc:06X}",
                'initial_sp': f"0x{self.rom.initial_sp:08X}",
            },
            'vectors': {name: f"0x{addr:06X}" for name, addr in self.rom.vectors.items()},
            'stats': {
                'total_instructions': len(self.instructions),
                'total_functions': len(self.functions),
                'code_coverage_bytes': sum(self.instructions[a][2] for a in self.instructions),
            },
            'functions': {},
        }
        for addr in sorted(self.functions.keys()):
            func = self.functions[addr]
            output['functions'][f"0x{addr:06X}"] = {
                'name': func['name'],
                'start': f"0x{func['start']:06X}",
                'end': f"0x{func['end']:06X}",
                'size': func['size'],
                'insn_count': func['insn_count'],
                'calls': [f"0x{c:06X}" for c in func['calls']],
                'has_return': func['has_return'],
            }
        with open(path, 'w') as f:
            json.dump(output, f, indent=2)
        print(f"\nExported {len(self.functions)} functions to {path}")


def main():
    import argparse
    parser = argparse.ArgumentParser(description='Neo Geo ROM Analyzer')
    parser.add_argument('rom', help='Path to Neo Geo P ROM file')
    parser.add_argument('--output', '-o', default='functions.json', help='Output JSON path')
    parser.add_argument('--stats', action='store_true', help='Print statistics')
    args = parser.parse_args()

    print("=== Neo Geo ROM Analyzer ===\n")
    rom = NeoGeoROM(args.rom)
    rom.print_info()

    analyzer = M68KAnalyzer(rom)
    analyzer.analyze()

    if args.stats:
        print("\n=== Top 20 Largest Functions ===")
        funcs_by_size = sorted(analyzer.functions.values(), key=lambda f: f['insn_count'], reverse=True)
        for f in funcs_by_size[:20]:
            print(f"  {f['name']:<30s}  ${f['start']:06X}  {f['insn_count']:5d} insns  {f['size']:5d} bytes")
        total_bytes = sum(analyzer.instructions[a][2] for a in analyzer.instructions)
        print(f"\n=== Coverage ===")
        print(f"  Code bytes discovered: {total_bytes} ({total_bytes / 1024:.1f} KB)")
        print(f"  ROM utilization:       {total_bytes * 100 / rom.size:.1f}%")

    analyzer.export_json(args.output)


if __name__ == '__main__':
    main()
