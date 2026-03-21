/*
 * main_loop.c — USER subroutine and game state machine.
 *
 * The USER subroutine at $00068C is called by the Neo Geo BIOS once
 * per frame. It handles:
 *   1. Clearing scratch RAM
 *   2. Resetting frame sync counters
 *   3. Setting up input
 *   4. Running per-frame subsystems (palette, sprites, sound prep)
 *   5. Dispatching to the current game state handler via a jump table
 *
 * Game states (stored at $10FDAE):
 *   0: Init / Logo
 *   1: Title Screen (immediate BIOS return)
 *   2: Demo Play
 *   3: Car Select
 *   States 4-19: Sub-states within gameplay (via second jump table in $000B34)
 *
 * Source ROM: drift_p1.rom (213-p1.p1)
 */

#include <neogeorecomp/neogeorecomp.h>

/* ----- Helper functions ----- */

/*
 * Clear frame counters — $000200
 *
 * Zeros out the frame sync counters at $100400 and $100402.
 * Called at the start of each USER frame to reset timing.
 *
 * Original:
 *   clr.w $100400.l
 *   clr.w $100402.l
 *   rts
 */
void func_000200(void) {
    bus_write16(0x100400, 0);
    bus_write16(0x100402, 0);
}

/*
 * Setup frame sync — $00020E
 *
 * Configures the frame synchronization system:
 *   - Clears the "game active" bit 7 of $10FD80 (temporarily)
 *   - Resets frame counter at $100402
 *   - Sets the frame target at $100400 from d0
 *   - Sets the "game active" bit back
 *
 * d0 parameter: frame skip count (0 = every frame, 1 = every other, etc.)
 *
 * Original:
 *   bclr.b  #7, $10FD80.l
 *   clr.w   $100402.l
 *   move.w  d0, $100400.l
 *   bset.b  #7, $10FD80.l
 *   rts
 */
void func_00020E(void) {
    /* Temporarily disable game VBlank handling */
    uint8_t flags = bus_read8(0x10FD80);
    bus_write8(0x10FD80, flags & ~0x80);

    /* Reset frame counter, set target */
    bus_write16(0x100402, 0);
    bus_write16(0x100400, (uint16_t)g_m68k.d[0]);

    /* Re-enable game VBlank handling */
    flags = bus_read8(0x10FD80);
    bus_write8(0x10FD80, flags | 0x80);
}

/*
 * Set input mode — $0009F4
 *
 * Stores d0 to the input mode variable at $10041C.
 *
 * Original:
 *   move.w d0, $10041C.l
 *   rts
 */
void func_0009F4(void) {
    bus_write16(0x10041C, (uint16_t)g_m68k.d[0]);
}

/*
 * Set frame delays — $0009BC
 *
 * Sets both frame delay bytes at $100416 and $100417 to 4.
 * These control timing for the frame sync system.
 *
 * Original:
 *   move.b #4, $100416.l
 *   move.b #4, $100417.l
 *   rts
 */
void func_0009BC(void) {
    bus_write8(0x100416, 4);
    bus_write8(0x100417, 4);
}

/*
 * Clear work RAM — $000A04
 *
 * Zeros out work RAM from $100374 to $103610.
 * This is ~12.7 KB of game-specific working memory.
 *
 * Original:
 *   lea     $100374.l, a0
 *   cmpa.l  #$103610, a0
 *   bls.s   fill
 *   bra.s   done
 *   bra.s   done           ; (unreachable)
 *   fill: move.l #0, (a0)+
 *   bra.s   compare        ; loops back to cmpa
 *   done: rts
 */
void func_000A04(void) {
    for (uint32_t addr = 0x100374; addr < 0x103610; addr += 4) {
        bus_write32(addr, 0);
    }
}

/*
 * Check game active — $000FE8
 *
 * Sets the "game running" flag at $100422 based on the game active
 * flag at $10FE80.
 *
 * Original:
 *   move.w  #1, $100422.l
 *   tst.w   $10FE80.l
 *   bne.w   done
 *   move.w  #0, $100422.l
 *   done: rts
 */
void func_000FE8(void) {
    bus_write16(0x100422, 1);
    M68K_TST16(bus_read16(0x10FE80));
    if (M68K_CC_EQ) {
        bus_write16(0x100422, 0);
    }
}

/*
 * USER Subroutine — $00068C (main frame handler)
 *
 * Called by the BIOS every frame. This is the game's main loop body.
 *
 * Flow:
 *   1. Clear scratch area ($000A04)
 *   2. Reset frame state variables
 *   3. Set input mode to 1
 *   4. Clear frame counters ($000200)
 *   5. Setup frame sync with d0=0 ($00020E)
 *   6. Run subsystems: palette prep, sprite prep, VRAM prep, sound
 *   7. BIOS call ($C004C8 — process system requests)
 *   8. Run more subsystems
 *   9. Set frame timing ($0009BC)
 *   10. Read game state from $10FDAE
 *   11. Dispatch to state handler via jump table at $0006F6
 *
 * Jump table (4 entries at $0006F6):
 *   State 0 -> $000706 (Init/Logo)
 *   State 1 -> $00073E (Title Screen)
 *   State 2 -> $000744 (Demo Play)
 *   State 3 -> $000756 (Car Select)
 */
void func_00068C(void) {
    /* jsr $A04(pc) — clear work RAM */
    func_table_call(0x000A04);

    /* clr.l $10FDB6 */
    bus_write32(0x10FDB6, 0);

    /* move.w #0, $100424 — clear "frame ready" flag */
    bus_write16(0x100424, 0);

    /* clr.w $10041A */
    bus_write16(0x10041A, 0);

    /* move.w #1, d0 / jsr $9F4 — set input mode to 1 */
    g_m68k.d[0] = 1;
    func_table_call(0x0009F4);

    /* jsr $200 — clear frame counters */
    func_table_call(0x000200);

    /* moveq #0, d0 / jsr $20E — setup frame sync (every frame) */
    g_m68k.d[0] = 0;
    func_table_call(0x00020E);

    /* jsr $11EEE — palette preparation subsystem */
    func_table_call(0x011EEE);

    /* jsr $120E0 — sprite preparation subsystem */
    func_table_call(0x0120E0);

    /* jsr $133FA — VRAM preparation subsystem */
    func_table_call(0x0133FA);

    /* jsr $A26 — sub_0A26 */
    func_table_call(0x000A26);

    /* jsr $C004C8 — BIOS: process system requests */
    func_table_call(0xC004C8);

    /* jsr $FE8 — check if game is active */
    func_table_call(0x000FE8);

    /* jsr $9BC(pc) — set frame delays */
    func_table_call(0x0009BC);

    /* Game state dispatch:
     *   moveq #0, d0
     *   move.b $10FDAE, d0    ; load current game state
     *   add.w d0, d0          ; multiply by 4 (longword index)
     *   add.w d0, d0
     *   movea.l table(pc,d0), a0
     *   jmp (a0)
     */
    g_m68k.d[0] = 0;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00) | bus_read8(0x10FDAE);

    /* Jump table at $0006F6: */
    static const uint32_t state_table[] = {
        0x000706,  /* State 0: Init / Logo */
        0x00073E,  /* State 1: Title Screen */
        0x000744,  /* State 2: Demo Play */
        0x000756,  /* State 3: Car Select */
    };

    uint8_t state = (uint8_t)g_m68k.d[0];
    if (state < 4) {
        func_table_call(state_table[state]);
    }
}
