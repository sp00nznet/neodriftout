/*
 * helpers.c — Small utility functions called from the gameplay
 * dispatcher and other subsystems.
 *
 * These are mostly state management, timer, and flag manipulation
 * routines that don't fit neatly into another category.
 *
 * Source ROM: drift_p1.rom (213-p1.p1)
 */

#include <neogeorecomp/neogeorecomp.h>

/*
 * Sub $001004 — Region-specific sub-dispatch
 *
 * Clears $10042A, reads region code from $10FD83, then calls a
 * region-specific function via a PC-relative jump table at $102E.
 * Stores the result in $100428.
 *
 * This likely handles region-specific timing or difficulty adjustments.
 */
void func_001004(void) {
    bus_write16(0x10042A, 0);

    uint32_t save_d0 = g_m68k.d[0];

    uint8_t region = bus_read8(0x10FD83);
    /* The PC-relative table at $102E contains offsets.
     * We read the offset and call the target function. */
    uint32_t table = 0x00102E;
    uint16_t offset = bus_read16(table + (uint32_t)region * 2);
    uint32_t target = table + offset;

    func_table_call(target);

    bus_write16(0x100428, (uint16_t)g_m68k.d[0]);

    g_m68k.d[0] = save_d0;
}

/*
 * Sub $001340 — Clear animation state and run timers
 *
 * Clears the animation active flag at $100432, then runs the
 * animation timer update routines.
 */
void func_001340(void) {
    bus_write16(0x100432, 0);
    func_table_call(0x0013E6);
    func_table_call(0x0014A6);
}

/*
 * Sub $0013B4 — Animation timer setup
 *
 * Copies animation script data from ROM at $13DA to two timer
 * structures at $100434 and $100440 using the string copy routine.
 */
void func_0013B4(void) {
    g_m68k.a[0] = 0x0013DA;
    g_m68k.a[1] = 0x100434;
    func_table_call(0x011A02);

    g_m68k.a[0] = 0x0013DA;
    g_m68k.a[1] = 0x100440;
    func_table_call(0x011A02);
}

/*
 * Sub $0013E6 — Animation timer tick (type 1)
 *
 * Checks the animation active flag at $100432. If set, returns
 * immediately (the animation system is paused). Otherwise falls
 * through to process the timer — but the disassembly shows it
 * just returns when the flag is 0 too (beq -> next instruction).
 *
 * This is a guard function — the actual timer logic follows at
 * $0013F0 but only runs when $100432 != 0.
 *
 * UPDATE: Looking more carefully, beq jumps to $13F0 which is
 * the NEXT instruction — so when flag == 0, execution continues
 * past the rts into the timer processing code. When flag != 0,
 * it returns early.
 */
void func_0013E6(void) {
    if (bus_read16(0x100432) != 0) {
        return;  /* Animation paused — skip timer */
    }
    /* When flag is 0, the original code falls through to $13F0.
     * That code is the actual animation timer processor.
     * TODO: disassemble and implement $13F0+ */
}

/*
 * Sub $0014A6 — Animation timer tick (type 2)
 *
 * Same guard pattern as $0013E6 but for a different timer.
 */
void func_0014A6(void) {
    if (bus_read16(0x100432) != 0) {
        return;
    }
    /* Fall-through timer processing at $14B0.
     * TODO: implement $14B0+ */
}

/*
 * Sub $00148A — Animation timer setup (type 2)
 *
 * Copies animation script data from ROM at $149E to timer
 * structure at $10044C.
 */
void func_00148A(void) {
    g_m68k.a[0] = 0x00149E;
    g_m68k.a[1] = 0x10044C;
    func_table_call(0x011A02);
}

/*
 * Sub $0014E8 — Frame timing init
 *
 * Clears the frame timing mode at $100458, then calls the
 * frame timing setup at $0015B6.
 */
void func_0014E8(void) {
    bus_write16(0x100458, 0);
    func_table_call(0x0015B6);
}

/*
 * Sub $0015B6 — Frame timing reset
 *
 * Resets the frame timing variables:
 *   $10045A = 0, then XOR with $FFFF = $FFFF (all bits set)
 *   $10045C = 0
 */
void func_0015B6(void) {
    bus_write16(0x10045A, 0);
    /* eori.w #$FFFF, $10045A — XOR with $FFFF = inverts all bits */
    uint16_t val = bus_read16(0x10045A);
    bus_write16(0x10045A, val ^ 0xFFFF);
    bus_write16(0x10045C, 0);
}

/*
 * Sub $0014F6 — Input / frame rate management
 *
 * Complex input handling routine. Reads system flags ($10FD82) and
 * region ($10FD83) to determine the frame timing mode. Calls BIOS
 * function $C00450 (hardware test/status) and interprets the result.
 *
 * Determines a frame rate mode (0-4) based on:
 *   - System type (AES vs MVS)
 *   - Region (Japan has different handling)
 *   - Input device configuration
 *   - Whether the result differs from the previous mode ($100458)
 *
 * If the mode changed, calls $0015B6 to reset timing, then calls
 * $0015D0 to apply the new timing.
 */
void func_0014F6(void) {
    uint16_t d0_result;

    if (bus_read8(0x10FD82) != 0) {
        /* System with special input (e.g., memory card play) */
        uint8_t region = bus_read8(0x10FD83);
        if (region == 1) {
            /* Japan: extended hardware test */
            bus_write32(0x10FDB0, 0x01010000);
            func_table_call(0xC00450);

            uint32_t test_result = bus_read32(0x10FDB0);
            if (test_result == 0) {
                d0_result = 0;
            } else if (bus_read16(0x10FDB0) == 0x100) {
                d0_result = 1;
            } else if (bus_read16(0x10FDB0) == 0x001) {
                d0_result = 2;
            } else {
                d0_result = 3;
            }
        } else {
            /* Non-Japan */
            bus_write32(0x10FDB0, 0x01010000);
            func_table_call(0xC00450);
            if (bus_read32(0x10FDB0) == 0) {
                d0_result = 0;
            } else {
                d0_result = 1;
            }
        }
    } else {
        /* Standard MVS/AES */
        uint16_t frame_val = bus_read16(0x100416);
        if (frame_val == 0) {
            d0_result = 4;
        } else {
            uint16_t lo = frame_val & 0xFF;
            uint16_t hi = frame_val & 0xFF00;
            if (hi == 0) {
                d0_result = 2;
            } else if (lo == 0) {
                d0_result = 1;
            } else {
                d0_result = 3;
            }
        }
    }

    /* Check if mode changed */
    g_m68k.d[0] = d0_result;
    if (d0_result != bus_read16(0x100458)) {
        func_table_call(0x0015B6);
    }
    bus_write16(0x100458, d0_result);

    /* Apply timing — $0015D0 is another guard that checks $100432 */
    func_table_call(0x0015D0);
}

/*
 * Sub $0015D0 — Frame timing apply (guard)
 *
 * Another guard function: returns immediately if $100432 == 0
 * (animation not active).
 */
void func_0015D0(void) {
    if (bus_read16(0x100432) != 0) {
        return;
    }
    /* Fall-through timer code — TODO if needed */
}

/*
 * Sub $002336 — Check "game over" flag
 *
 * Tests $10041A. If nonzero, returns d0 = 0 (game ending).
 * If zero, falls through to additional checks.
 *
 * Note: The disassembly shows this function may not RTS when
 * $10041A == 0 — it falls through to $2346. For now we handle
 * the known case.
 */
void func_002336(void) {
    if (bus_read16(0x10041A) != 0) {
        g_m68k.d[0] = 0;
        return;
    }
    /* Fall-through case at $2346 — additional checks needed
     * TODO: disassemble $2346 */
    g_m68k.d[0] = 0;  /* Default for now */
}

/*
 * Sub $00D704 — Store value to $1014FC
 */
void func_00D704(void) {
    bus_write16(0x1014FC, (uint16_t)g_m68k.d[0]);
}
