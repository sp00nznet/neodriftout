/*
 * vectors.c — Interrupt handlers and vector table functions.
 *
 * These are the entry points called by the Neo Geo hardware:
 *   - VBlank (IRQ1): Fires every frame (~59.19 Hz). Drives all rendering
 *     and the game's frame synchronization.
 *   - Timer (IRQ2): Used for raster effects. Neo Drift Out uses this
 *     for mid-frame VRAM updates.
 *   - Cold Reset (IRQ3): Jumps to the timer handler.
 *   - TRAP handler: Just returns (RTE). Unused by this game.
 *
 * Source ROM: drift_p1.rom (213-p1.p1)
 */

#include <neogeorecomp/neogeorecomp.h>

/*
 * VBlank Handler — $00022C
 *
 * The first thing this does is check bit 7 of $10FD80 — this is the
 * "game active" flag. If cleared, the BIOS handles the VBlank instead
 * (JMP $C00438). When the game is running, it falls through to the
 * full VBlank game handler at $00023E.
 *
 * Original:
 *   btst.b  #7, $10FD80.l
 *   bne.w   $23E
 *   jmp     $C00438.l       ; BIOS VBlank handler
 */
void func_00022C(void) {
    /* btst.b #7, $10FD80 — test "game active" flag */
    uint8_t val = bus_read8(0x10FD80);
    M68K_BTST(val, 7);

    if (M68K_CC_NE) {
        /* Game is active — run the full game VBlank handler */
        func_table_call(0x00023E);
    } else {
        /* Game not active — let BIOS handle VBlank */
        func_table_call(0xC00438);
    }
    /* RTE is implicit — the runtime handles interrupt return */
}

/*
 * VBlank Game Handler — $00023E
 *
 * The main per-frame handler when the game is running. This does:
 *   1. Save all registers
 *   2. Handle slot switching ($015150)
 *   3. Acknowledge VBlank interrupt (write 4 to REG_IRQACK)
 *   4. Kick the watchdog (write to $300001)
 *   5. Call BIOS VBlank routine ($C0044A)
 *   6. Increment frame counter at $100402
 *   7. Compare with target frame count at $100400
 *   8. If exceeded: upload VRAM ($013646), palette ($011F3E),
 *      sprite table ($012188), then signal frame ready
 *   9. Restore registers, RTE
 *
 * Original:
 *   movem.l d0-d7/a0-a6, -(a7)
 *   jsr     $015150             ; slot switch handler
 *   move.w  #$4, $3C000C.l     ; ack VBlank
 *   move.b  d0, $300001.l      ; kick watchdog
 *   jsr     $C0044A             ; BIOS VBlank
 *   addq.w  #1, $100402.l      ; frame counter++
 *   move.w  $100402.l, d0
 *   cmp.w   $100400.l, d0      ; reached target?
 *   ble.w   $2A4               ; no — skip rendering
 *   clr.w   $100402.l          ; reset frame counter
 *   jsr     $013646             ; VRAM upload
 *   jsr     $011F3E             ; palette DMA
 *   jsr     $012188             ; sprite table upload
 *   addq.w  #1, $100404.l      ; rendered frame counter
 *   cmpi.w  #0, $100424.l      ; check "frame ready" flag
 *   bne.w   $2A4               ; already set — skip
 *   move.w  #1, $100424.l      ; signal: frame rendered
 *   movem.l (a7)+, d0-d7/a0-a6
 *   rte
 */
void func_00023E(void) {
    /* Save all registers (the compiler handles this for us via locals) */
    uint32_t save_d[8], save_a[7];
    for (int i = 0; i < 8; i++) save_d[i] = g_m68k.d[i];
    for (int i = 0; i < 7; i++) save_a[i] = g_m68k.a[i];

    /* jsr $015150 — slot switch handler */
    func_table_call(0x015150);

    /* move.w #$4, $3C000C — acknowledge VBlank interrupt */
    bus_write16(0x3C000C, 0x0004);

    /* move.b d0, $300001 — kick watchdog */
    bus_write8(0x300001, (uint8_t)g_m68k.d[0]);

    /* jsr $C0044A — BIOS VBlank handler */
    func_table_call(0xC0044A);

    /* addq.w #1, $100402 — increment frame counter */
    uint16_t frame_count = bus_read16(0x100402);
    frame_count++;
    bus_write16(0x100402, frame_count);

    /* cmp.w $100400, d0 — compare frame count to target */
    uint16_t frame_target = bus_read16(0x100400);
    M68K_CMP16(frame_count, frame_target);

    /* ble.w $2A4 — skip rendering if not enough frames passed */
    if (!M68K_CC_LE) {
        /* clr.w $100402 — reset frame counter */
        bus_write16(0x100402, 0);

        /* jsr $013646 — VRAM upload (sprite/fix data -> VRAM) */
        func_table_call(0x013646);

        /* jsr $011F3E — palette DMA (RAM palette -> palette hardware) */
        func_table_call(0x011F3E);

        /* jsr $012188 — sprite table upload (SCB data) */
        func_table_call(0x012188);

        /* addq.w #1, $100404 — rendered frame counter */
        uint16_t rendered = bus_read16(0x100404);
        bus_write16(0x100404, rendered + 1);

        /* cmpi.w #0, $100424 / bne $2A4 / move.w #1, $100424 */
        uint16_t frame_ready = bus_read16(0x100424);
        if (frame_ready == 0) {
            bus_write16(0x100424, 1);  /* Signal: frame has been rendered */
        }
    }

    /* Restore all registers */
    for (int i = 0; i < 8; i++) g_m68k.d[i] = save_d[i];
    for (int i = 0; i < 7; i++) g_m68k.a[i] = save_a[i];
    /* RTE */
}

/*
 * Timer Handler (IRQ2) — $0002AA
 *
 * Handles the timer interrupt. Saves all registers, acknowledges the
 * timer IRQ, calls a VRAM DMA subroutine for mid-frame updates
 * (likely scanline effects for the isometric track rendering), then
 * restores registers and returns.
 *
 * Original:
 *   movem.l d0-d7/a0-a6, -(a7)
 *   move.w  #$2, $3C000C.l     ; ack timer IRQ
 *   jsr     $0136BA             ; timer VRAM update
 *   movem.l (a7)+, d0-d7/a0-a6
 *   rte
 */
void func_0002AA(void) {
    uint32_t save_d[8], save_a[7];
    for (int i = 0; i < 8; i++) save_d[i] = g_m68k.d[i];
    for (int i = 0; i < 7; i++) save_a[i] = g_m68k.a[i];

    /* Acknowledge timer interrupt */
    bus_write16(0x3C000C, 0x0002);

    /* Call timer VRAM update subroutine */
    func_table_call(0x0136BA);

    for (int i = 0; i < 8; i++) g_m68k.d[i] = save_d[i];
    for (int i = 0; i < 7; i++) g_m68k.a[i] = save_a[i];
    /* RTE */
}

/*
 * Cold Reset Handler (IRQ3) — $0002C2
 *
 * Just jumps to the timer handler. This is common in Neo Geo games —
 * the reset IRQ is only active after power-on and gets acknowledged
 * by the timer handler's IRQ ack.
 *
 * Original:
 *   jmp $0002AA.l
 */
void func_0002C2(void) {
    func_table_call(0x0002AA);
}

/*
 * TRAP Handler — $0002CA
 *
 * All TRAP vectors ($80-$BF) point here. It's just an RTE —
 * Neo Drift Out doesn't use software traps.
 *
 * Original:
 *   rte
 */
void func_0002CA(void) {
    /* RTE — nothing to do */
}
