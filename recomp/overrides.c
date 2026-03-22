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
 * Sprite/VRAM commit — $01229E
 *
 * The auto-generator doesn't handle this correctly because the original
 * code manually pushes a return address ($0122C4) onto the stack before
 * JSR-ing to the VRAM write function. When that function does RTS, it
 * returns to $0122C4 (the spin-wait + sprite commit code). But in our
 * recomp, RTS returns to the C caller, so $0122C4 never executes.
 *
 * This hand-written version calls the dispatch function, then executes
 * the $0122C4 continuation inline.
 */
void func_01229E(void) {
    uint32_t save_d[8], save_a[7];
    for (int i = 0; i < 8; i++) save_d[i] = g_m68k.d[i];
    for (int i = 0; i < 7; i++) save_a[i] = g_m68k.a[i];

    g_m68k.a[2] = 0x3C0002;

    /* Dispatch to VRAM write function based on sprite count at $1020A0 */
    uint16_t sprite_count = bus_read16(0x1020A0);
    if (sprite_count == 0) {
        func_table_call(0x0133A0);
    } else if (sprite_count <= 8) {
        func_table_call(0x013362);
    } else {
        func_table_call(0x013330);
    }

    /* $0122C4: Wait for sprite upload flag to clear (VBlank drain) */
    while (bus_read16(0x102224) != 0) {
        neogeo_frame_yield();
    }

    /* Now run the continuation code at $0122C4 which commits sprites
     * to the upload buffer. This is complex — call the auto-generated
     * version if it exists, or set the flags directly. */
    func_table_call(0x0122C4);

    /* Force the swap/upload flags so VBlank processes the data */
    bus_write16(0x102532, 1);  /* VRAM buffer swap */
    for (int i = 0; i < 8; i++) g_m68k.d[i] = save_d[i];
    for (int i = 0; i < 7; i++) g_m68k.a[i] = save_a[i];
}

/*
 * $000CBC — Sub-state advance to 1
 * Branch target: set $100426 = 1 then RTS
 */
void func_000CBC(void) {
    bus_write16(0x100426, 1);
}
