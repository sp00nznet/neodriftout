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
#include <stdio.h>

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
 * $011C88 — Partial VRAM DMA copy (16 words)
 *
 * This is a computed jump target into the middle of the 32-word
 * unrolled copy at $011C68. The sprite table upload calculates
 * the entry point based on sprite count: $011CA8 - count*2.
 *
 * $011C88 = $011CA8 - 16*2 = copy last 16 words
 * Each instruction is `move.w (a4)+, (a2)` (2 bytes)
 */
void func_011C88(void) {
    uint32_t src = g_m68k.a[4];
    uint32_t dst = g_m68k.a[2];
    for (int i = 0; i < 16; i++) {
        uint16_t val = bus_read16(src);
        bus_write16(dst, val);
        src += 2;
    }
    g_m68k.a[4] = src;
}

/*
 * $011C78 — Partial VRAM DMA copy (24 words)
 * $011C78 = $011CA8 - 24*2
 */
void func_011C78(void) {
    uint32_t src = g_m68k.a[4];
    uint32_t dst = g_m68k.a[2];
    for (int i = 0; i < 24; i++) {
        bus_write16(dst, bus_read16(src));
        src += 2;
    }
    g_m68k.a[4] = src;
}

/*
 * $011C98 — Partial VRAM DMA copy (8 words)
 * Same pattern as $011C88 but copies only 8 words.
 * $011C98 = $011CA8 - 8*2 = entry for 8-word copy.
 */
void func_011C98(void) {
    uint32_t src = g_m68k.a[4];
    uint32_t dst = g_m68k.a[2];
    for (int i = 0; i < 8; i++) {
        bus_write16(dst, bus_read16(src));
        src += 2;
    }
    g_m68k.a[4] = src;
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

    /* Save SCB1 attribute words (palettes) before $0133A0 overwrites them.
     * $013546 writes correct palette data to VRAM, but $0133A0 overwrites
     * the SCB1 odd words without the palette field. */
    const uint16_t *vram = video_get_vram_ptr();
    uint16_t saved_palettes[64];
    for (int i = 0; i < 64; i++) {
        saved_palettes[i] = vram[(32 + i) * 64 + 1];  /* SCB1 odd word for sprites 32-95 */
    }

    /* Phase 1: Dispatch to VRAM scroll/tilemap write */
    uint16_t spr_count = bus_read16(0x1020A0);
    if (spr_count == 0) {
        func_table_call(0x0133A0);
    } else if (spr_count <= 8) {
        func_table_call(0x013362);
    } else {
        func_table_call(0x013330);
    }

    /* Restore palette bits that $0133A0 may have cleared */
    {
        uint16_t *vw = (uint16_t *)video_get_vram_ptr();
        for (int i = 0; i < 64; i++) {
            uint16_t cur = vw[(32 + i) * 64 + 1];
            uint8_t old_pal = saved_palettes[i] & 0xFF;
            if ((cur & 0xFF) == 0 && old_pal != 0) {
                vw[(32 + i) * 64 + 1] = (cur & 0xFF00) | old_pal;
            }
        }
    }

    /* Phase 2 ($0122C4): Wait for previous sprite upload to drain */
    while (bus_read16(0x102224) != 0) {
        /* bus_read16 hook yields to VBlank automatically */
    }

    /* Phase 3: Build sprite upload data from attribute table */
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | 0x0080;  /* 128 slots */
    g_m68k.a[1] = bus_read32(0x10222A);
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | bus_read16(g_m68k.a[1]);
    g_m68k.d[5] = 0x102230;
    g_m68k.d[6] = 0x102330;
    g_m68k.d[7] = 0x102430;
    g_m68k.a[3] = 0x1020A4;
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | bus_read16(0x1020A2);

    int16_t d1 = (int16_t)(uint16_t)g_m68k.d[1] - 1;
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | (uint16_t)d1;

    if (d1 >= 0) {
        for (; d1 >= 0; d1--) {
            g_m68k.a[0] = bus_read32(g_m68k.a[3] + 2);
            uint16_t obj_h = bus_read16(g_m68k.a[0] + 0x0C);
            int16_t d3_val = (int16_t)(uint16_t)g_m68k.d[3];
            d3_val -= (int16_t)obj_h;
            g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | (uint16_t)d3_val;

            if (d3_val < 0) {
                d3_val += (int16_t)obj_h;
                g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | (uint16_t)d3_val;
                break;
            }

            func_table_call(0x012384);
            func_table_call(0x013166);
            func_table_call(0x013246);
            func_table_call(0x0132D4);

            g_m68k.a[3] += 6;
            g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | (uint16_t)d1;
        }
    }

    /* Phase 4: Compute copy count and upload */
    int16_t d3_s = (int16_t)(uint16_t)g_m68k.d[3];
    d3_s = -d3_s;
    d3_s += 0x80;
    uint16_t copy_count = (uint16_t)d3_s;
    bus_write16(0x10222E, copy_count);

    /* Computed jump into unrolled copy: $11CA8 - d3*2 */
    if (copy_count > 32) copy_count = 32;

    /* Upload shrink data from $102230 */
    g_m68k.a[2] = 0x3C0002;
    bus_write16(0x3C0000, bus_read16(g_m68k.a[1] + 2));
    bus_write16(0x3C0004, 0x0001);
    g_m68k.a[4] = 0x102230;
    for (uint16_t w = 0; w < copy_count; w++) {
        bus_write16(0x3C0002, bus_read16(g_m68k.a[4]));
        g_m68k.a[4] += 2;
    }

    /* Upload Y/position data from $102430 */
    bus_write16(0x3C0000, bus_read16(g_m68k.a[1] + 6));
    bus_write16(0x3C0004, 0x0001);
    g_m68k.a[4] = 0x102430;
    for (uint16_t w = 0; w < copy_count; w++) {
        bus_write16(0x3C0002, bus_read16(g_m68k.a[4]));
        g_m68k.a[4] += 2;
    }

    /* Signal sprite upload ready + VRAM buffer swap */
    bus_write16(0x102224, bus_read16(0x102224) + 1);
    bus_write16(0x102532, 1);  /* Trigger VRAM double-buffer swap */

    for (int i = 0; i < 8; i++) g_m68k.d[i] = save_d[i];
    for (int i = 0; i < 7; i++) g_m68k.a[i] = save_a[i];
}

/*
 * Sub-state 1 handler — $000CC6
 *
 * Auto-gen splits this function at $CE4. When $002416 returns 0 and
 * $10041A != 0, the original code falls through to $CE4 which handles
 * the state transition. Our override inlines the continuation.
 */
void func_000CC6(void) {
    func_table_call(0x0014F6);
    func_table_call(0x002416);

    M68K_CMP16(g_m68k.d[0], 0x0);
    if (M68K_CC_NE) return;  /* Still animating */

    /* Animation complete — check $10041A */
    M68K_CMP16(bus_read16(0x10041A), 0x0);
    if (M68K_CC_EQ) {
        /* Timeout — return to BIOS */
        uint8_t flags = bus_read8(0x10FD80);
        bus_write8(0x10FD80, flags & ~0x80);
        func_table_call(0xC00444);
        return;
    }

    /* $10041A != 0: advance to next stage */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | 0x0001;
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | bus_read16(0x1011FC);
    func_table_call(0x0009D6);
    func_table_call(0x001340);

    if (bus_read8(0x10FD82) == 0) {
        /* Standard mode: go to continue screen (sub-state 14) */
        bus_write16(0x101210, 0);
        bus_write16(0x100426, 14);
    } else {
        /* MVS mode: go to stage intro (sub-state 2) */
        bus_write16(0x101210, 0);
        bus_write16(0x100426, 2);
    }
}

/*
 * Sprite allocator — $012202 (with debug logging)
 *
 * Scans the sprite attribute table ($101B20, stride $16, 64 entries)
 * for a free slot (flag word == 0). When found, initializes it with
 * default values and returns the slot address in a0.
 */
void func_012202(void) {
    uint32_t save_d1 = g_m68k.d[1], save_d2 = g_m68k.d[2];

    g_m68k.a[0] = 0x101B20;
    uint16_t stride = 0x16;  /* 22 bytes per entry */

    for (int i = 0; i < 64; i++) {
        uint16_t flag = bus_read16(g_m68k.a[0]);
        if (flag == 0) {
            /* Found free slot — initialize it */
            fprintf(stderr, "[alloc] Sprite slot %d at $%06X\n", i, g_m68k.a[0]);
            fflush(stderr);

            /* Initialize with the EXACT same values as the original ROM code.
             * The original at $012226 writes these 22 bytes: */
            uint32_t base = g_m68k.a[0];
            bus_write16(base + 0, 0x0001);    /* +0: flag = active */
            bus_write16(base + 2, 0x0000);    /* +2: tile base (set by $012256) */
            bus_write16(base + 4, 0x0020);    /* +4: X position (set by $01225C) */
            bus_write16(base + 6, 0x0020);    /* +6: Y position (set by $01225C) */
            bus_write16(base + 8, 0x0100);    /* +8: width in pixels */
            bus_write16(base + 10, 0x0100);   /* +A: height in pixels */
            bus_write16(base + 12, 0x0004);   /* +C: tile columns */
            bus_write16(base + 14, 0x0004);   /* +E: tile rows */
            bus_write32(base + 16, 0x000292A2); /* +10: tile data pointer */
            bus_write16(base + 20, 0x0000);   /* +14: reserved */

            g_m68k.d[1] = save_d1;
            g_m68k.d[2] = save_d2;
            return;
        }
        g_m68k.a[0] += stride;
    }

    /* No free slot — return NULL */
    fprintf(stderr, "[alloc] NO FREE SLOT!\n");
    fflush(stderr);
    g_m68k.a[0] = 0;
    g_m68k.d[1] = save_d1;
    g_m68k.d[2] = save_d2;
}

/*
 * $000CBC — Sub-state advance to 1
 * Branch target: set $100426 = 1 then RTS
 */
void func_000CBC(void) {
    bus_write16(0x100426, 1);
}
