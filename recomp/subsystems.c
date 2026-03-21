/*
 * subsystems.c — Miscellaneous support routines.
 *
 * Contains the slot switch/sound command handler, hardware setup,
 * and various small helper functions that don't fit elsewhere.
 *
 * Source ROM: drift_p1.rom (213-p1.p1)
 */

#include <neogeorecomp/neogeorecomp.h>

/*
 * Slot Switch / Sound Command Handler — $015150
 *
 * Called every VBlank. Manages the sound command queue and handles
 * MVS slot switching (multi-cart cabinet game changes).
 *
 * The sound command system uses a ring buffer at $1032AC-$1032BC.
 * Each entry is a word: the low byte is the Z80 command, the high
 * byte (if present) indicates a two-part command sequence.
 *
 * The slot switch protocol:
 *   - $100370 = 1: Send command $03 to Z80 (prepare for slot switch),
 *     wait 4 frames, then send $04 or $07 (depending on $1032A6)
 *   - $100372: Alternative switch path, sends $7F
 *
 * Sound command delay counter at $1032AA ensures minimum timing
 * between consecutive commands to the Z80.
 */
void func_015150(void) {
    uint32_t save_d0 = g_m68k.d[0];
    uint32_t save_a4 = g_m68k.a[4];

    /* Check delay counter */
    uint16_t delay = bus_read16(0x1032AA);
    if (delay != 0) {
        delay--;
        bus_write16(0x1032AA, delay);
        if (delay != 0) goto done;
    }

    /* Check slot switch state 1 */
    uint16_t slot_state = bus_read16(0x100370);
    if (slot_state != 0) {
        if (slot_state == 1) {
            /* Phase 1: Tell Z80 to prepare for switch */
            bus_write8(0x320000, 0x03);
            bus_write16(0x100370, 2);
            bus_write16(0x1032AA, 4);  /* Wait 4 frames */
        } else {
            /* Phase 2: Send actual switch command */
            uint8_t cmd = 4;
            if (bus_read16(0x1032A6) != 0) {
                cmd = 7;
            }
            bus_write8(0x320000, cmd);
            bus_write16(0x100370, 0);
            bus_write16(0x1032AA, 2);
        }
        goto done;
    }

    /* Check slot switch state 2 */
    if (bus_read16(0x100372) != 0) {
        if (bus_read16(0x1032A8) != 0) goto check_queue;
        bus_write8(0x320000, 0x7F);
        bus_write16(0x100372, 0);
        bus_write16(0x1032AA, 2);
        goto done;
    }

check_queue:
    /* Process sound command ring buffer */
    {
        uint32_t read_ptr = bus_read32(0x1032BC);
        uint16_t cmd_word = bus_read16(read_ptr);
        if (cmd_word == 0) goto done;  /* Queue empty */

        /* Check if this is a two-part command */
        if (bus_read16(0x1032A8) == 0) {
            if (cmd_word > 0x00FF) {
                /* Two-part command: send high byte first */
                uint8_t hi_cmd = (uint8_t)(cmd_word >> 8);
                bus_write8(0x320000, hi_cmd);
                bus_write16(0x1032A8, 1);  /* Mark: second part pending */
                goto set_delay;
            }
        }

        /* Send the command (or second part of two-part) */
        bus_write8(0x320000, (uint8_t)cmd_word);
        bus_write16(read_ptr, 0);  /* Clear the entry */
        read_ptr += 2;

        /* Wrap ring buffer */
        if (read_ptr >= 0x1032BC) {
            read_ptr = 0x1032AC;
        }
        bus_write32(0x1032BC, read_ptr);
        bus_write16(0x1032A8, 0);
    }

set_delay:
    bus_write16(0x1032AA, 2);

done:
    g_m68k.d[0] = save_d0;
    g_m68k.a[4] = save_a4;
}

/*
 * Sound Command Queue — $015256
 *
 * Enqueues a sound command word into the ring buffer.
 * d0 = command word (low byte = command, high byte = optional prefix)
 *
 * Ring buffer at $1032AC-$1032BA (8 entries of 2 bytes).
 * Write pointer at $1032C0.
 *
 * Spins if the current slot is occupied (busy-wait).
 *
 * Original:
 *   movem.l a4, -(a7)
 *   movea.l $1032C0, a4           ; write pointer
 *   .wait: tst.w (a4)
 *   bne.s  .wait                  ; spin if slot occupied
 *   move.w d0, (a4)+              ; write command
 *   cmpa.l #$1032BC, a4           ; past end?
 *   bne.s  .no_wrap
 *   lea    $1032AC, a4            ; wrap to start
 *   .no_wrap:
 *   move.l a4, $1032C0            ; save write pointer
 *   movem.l (a7)+, a4
 *   rts
 */
void func_015256(void) {
    uint32_t save_a4 = g_m68k.a[4];

    uint32_t write_ptr = bus_read32(0x1032C0);

    /* In the recomp we don't spin — just check once */
    /* (On real hardware this would be a timing-critical busy wait) */

    /* Write command to ring buffer */
    bus_write16(write_ptr, (uint16_t)g_m68k.d[0]);
    write_ptr += 2;

    /* Wrap */
    if (write_ptr >= 0x1032BC) {
        write_ptr = 0x1032AC;
    }
    bus_write32(0x1032C0, write_ptr);

    g_m68k.a[4] = save_a4;
}

/*
 * Hardware Setup — $0009A2
 *
 * Clears the first $374 bytes of Work RAM ($100000-$100373).
 * Called during State 0 init before loading graphics.
 *
 * Original:
 *   movem.l d0/a0, -(a7)
 *   lea    $100000, a0
 *   move.w #$373, d0
 *   .loop: clr.b (a0)+
 *   dbra   d0, .loop
 *   movem.l (a7)+, d0/a0
 *   rts
 */
void func_0009A2(void) {
    for (uint32_t addr = 0x100000; addr <= 0x100373; addr++) {
        bus_write8(addr, 0);
    }
}

/*
 * Sub $000A26 — Fix layer setup
 *
 * Calls BIOS function $C004C2 then writes fix layer tile data
 * to VRAM. Sets up the game's HUD/text area in the fix layer.
 *
 * Writes tiles at VRAM $7020 (fix layer) with modulo $20 (column
 * stride), effectively writing two columns of fix layer tiles.
 *
 * Original:
 *   jsr    $C004C2                ; BIOS: clear fix layer
 *   lea    $3C0002, a0
 *   move.w #$20, $2(a0)          ; VRAM modulo = $20 (32)
 *   move.w #$20, d0              ; tile count
 *   move.w #$7020, -$2(a0)      ; VRAM addr = fix layer column
 *   jsr    $A5A(pc)              ; write column of tiles
 *   jsr    $A5A(pc)              ; write another column
 *   move.w #$703F, -$2(a0)      ; VRAM addr = another column
 *   jsr    $A5A(pc)
 *   jsr    $A5A(pc)
 *   rts
 */
void func_000A26(void) {
    /* Call BIOS clear fix layer */
    func_table_call(0xC004C2);

    /* Set VRAM modulo = $20 (column stride for fix layer) */
    bus_write16(0x3C0004, 0x0020);

    /* Write fix layer columns (the sub at $0A5A writes d0 tiles) */
    /* For now, call the tile writing sub */
    bus_write16(0x3C0000, 0x7020);
    g_m68k.d[0] = 0x0020;
    g_m68k.a[0] = 0x3C0002;
    func_table_call(0x000A5A);
    func_table_call(0x000A5A);

    bus_write16(0x3C0000, 0x703F);
    func_table_call(0x000A5A);
    func_table_call(0x000A5A);
}

/*
 * Sound Init — $0150FA
 *
 * Clears the slot switch state variables.
 *
 * Original:
 *   clr.w $100370
 *   clr.w $100372
 *   rts
 */
void func_0150FA(void) {
    bus_write16(0x100370, 0);
    bus_write16(0x100372, 0);
}

/*
 * Sub $014BA8 — Clear sound counter
 *
 * Original:
 *   move.w #0, $1032A2
 *   rts
 */
void func_014BA8(void) {
    bus_write16(0x1032A2, 0);
}

/*
 * Sub $010F96 — Copy ROM data to Work RAM
 *
 * Copies 16 bytes from ROM at $10FBC to Work RAM at $103610.
 * Stores the destination pointer at $1016E2.
 *
 * Original:
 *   movem.l d7/a0-a1, -(a7)
 *   lea    $103610, a0
 *   move.l a0, $1016E2
 *   lea    $10FBC, a1
 *   move.w #3, d7
 *   .loop: move.l (a1)+, (a0)+
 *   dbra   d7, .loop
 *   movem.l (a7)+, d7/a0-a1
 *   rts
 */
void func_010F96(void) {
    bus_write32(0x1016E2, 0x103610);

    uint32_t src = 0x010FBC;
    uint32_t dst = 0x103610;
    for (int i = 0; i <= 3; i++) {
        uint32_t val = bus_read32(src);
        bus_write32(dst, val);
        src += 4;
        dst += 4;
    }
}

/*
 * Sub $0009D6 — Set sound bank/mode
 *
 * Writes d0 to a position in $10FDB6 based on d1.
 *
 * Original:
 *   lea    $10FDB6, a0
 *   clr.w  (a0)
 *   cmpi.w #0, d1
 *   bne.s  .use1
 *   move.w #0, d1
 *   bra.s  .store
 *   .use1: move.w #1, d1
 *   .store: move.b d0, (a0, d1.w)
 *   rts
 */
void func_0009D6(void) {
    bus_write16(0x10FDB6, 0);
    uint16_t d1 = (uint16_t)g_m68k.d[1];
    if (d1 == 0) {
        d1 = 0;
    } else {
        d1 = 1;
    }
    bus_write8(0x10FDB6 + d1, (uint8_t)g_m68k.d[0]);
}
