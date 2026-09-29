# Neo Drift Out: notes

What this title needs from the toolkit, and what the port showed. These notes cover behaviour only. Code addresses and anything else lifted from the ROM are not published (REPO_RULES section 3).

## The set

MAME set `neodrift` (NGH-213), plus the `neogeo` system set. MAME's `driftout` is Taito's *Drift Out*, an unrelated game.

| File | Size | CRC32 | Role |
|---|---|---|---|
| `213-p1.p1` | 2 MB | `e397d798` | 68000 program. The second MB is the fixed `$000000` bank and the first MB is the `$200000` bank; stored byte-swapped |
| `213-s1.s1` | 128 KB | `b76b61bc` | fix layer tiles |
| `213-c1.c1`, `213-c2.c2` | 2 × 4 MB | `3edc8bd3` `46ae5f16` | sprite tiles, one odd/even pair |
| `213-m1.m1` | 128 KB | `200045f1` | Z80 sound driver |
| `213-v1.v1`, `213-v2.v2` | 2 × 2 MB | `a421c076` `233c7dd9` | ADPCM samples |
| `sp-s2.sp1`, `sfix.sfix`, `sm1.sm1`, `000-lo.lo` | | `9036d879` `c2ea0cfd` `94416d67` `5a86cff2` | from `neogeo` |

## The port

The earlier version of this repo hand-lifted parts of the program and ran them on a runtime bent around this game. It hardcoded the USER entry point, poked the BIOS's game-state byte, blocked the game's own writes to BIOS RAM, forced a palette onto sprites whose palette field was zero, and forced full-size shrink onto sprites whose shrink was zero. Those were all symptoms of missing hardware: no real BIOS, no L0 shrink table, sprite attributes arriving through VRAM paths that weren't modelled. On the generic runtime none of them is needed. The game boots through the real MVS BIOS and renders correctly with no game-specific code at all. This repo now holds only the ROM layout (`src/game.c`) and test scripts.

Bring-up took no toolkit changes. The first interpreted run showed the eyecatcher, the car showcase and the full-colour title screen. The first recompiled run raced, with `--verify` reporting 0 mismatches.

## Coverage

Static discovery: 405,519 instructions, 21,014 routines, 22,910 dispatch entries. The profile pass (8,000 attract frames plus the 6-minute soak) adds 144 entry points, all computed jumps. After it, both sessions run with 0 interpreted instructions, and `--verify` checks 46.67M blocks with 0 mismatches.

## Not yet

- **Sound**: the Z80 driver runs, but the YM2610 is silent (neogeorecomp ROADMAP).
- **Stages beyond the first**: the soak script drives practice and Stage 1 only.
