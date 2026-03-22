/*
 * overrides.c — Hand-written function overrides for auto-generated code
 * that the analyzer/generator produces incorrectly.
 *
 * These typically occur when:
 *   1. Jump table targets fall inside function bodies (splits dbhi loops)
 *   2. Branch targets create false function boundaries mid-instruction
 *
 * Register these AFTER recomp_register_all() to override the auto-gen.
 */

#include <neogeorecomp/neogeorecomp.h>

/*
 * Sub-state 0 standard mode path — $000C52
 *
 * This is the path taken when $10FD82 == 0 (standard MVS/AES mode).
 * The auto-generator incorrectly splits this because $C52 appears in
 * a jump table but is actually a branch target within $000BFA.
 *
 * Original code at $C52:
 *   move.w #7, d0
 *   jsr    $15256       ; queue sound cmd 7
 *   move.w #$21, d0
 *   jsr    $15256       ; queue sound cmd $21 (BGM)
 *   move.w #1, d0
 *   jsr    $D704        ; set value
 *   jsr    $15B6        ; frame timing reset
 *   jsr    $14F6        ; input/frame rate
 *   jsr    $2336        ; check game over
 *   cmpi.w #0, d0
 *   bne    $CC4         ; if d0 != 0, return
 *   move.w #0, d0
 *   jsr    $10B0        ; store d0 to $10042C
 *   cmpi.w #0, $10041A
 *   beq    $CBC         ; if $10041A == 0: sub-state = 1
 *   ... (else: sub-state = 2 with sound change)
 *   $CBC: move.w #1, $100426  ; sub-state = 1
 *   $CC4: rts
 */
void func_000C52(void) {
    /* Queue sound commands */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | 0x0007;
    func_table_call(0x015256);

    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | 0x0021;
    func_table_call(0x015256);

    /* Set D704 value */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | 0x0001;
    func_table_call(0x00D704);

    /* Frame timing */
    func_table_call(0x0015B6);
    func_table_call(0x0014F6);

    /* Check game over */
    func_table_call(0x002336);

    M68K_CMP16(g_m68k.d[0], 0x0);
    if (M68K_CC_NE) return;  /* Still initializing */

    /* Store 0 to $10042C */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | 0x0000;
    func_table_call(0x0010B0);

    /* Check $10041A */
    M68K_CMP16(bus_read16(0x10041A), 0x0);
    if (M68K_CC_EQ) {
        /* First time: advance to sub-state 1 */
        bus_write16(0x100426, 1);
    } else {
        /* Subsequent: set up sound and advance to sub-state 2 */
        g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | 0x0001;
        g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | bus_read16(0x1011FC);
        func_table_call(0x0009D6);
        bus_write16(0x101210, 0);
        bus_write16(0x100426, 2);
    }
}

/*
 * $000CC4 — RTS stub
 * The auto-gen creates a branch to $CC4 which is just an RTS.
 */
void func_000CC4(void) {
    /* Just return — this is the "don't advance sub-state" exit */
}

/*
 * $000CBC — Sub-state advance to 1
 * Branch target: set $100426 = 1 then RTS
 */
void func_000CBC(void) {
    bus_write16(0x100426, 1);
}
