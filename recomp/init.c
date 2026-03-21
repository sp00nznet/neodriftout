/*
 * init.c — Initialization routines that populate VRAM, palette, and sprite
 * data structures during State 0 (game boot) and state transitions.
 *
 * These functions set up the in-RAM data structures that the VBlank
 * rendering pipeline then uploads to hardware. Without these, the
 * double buffers are empty and nothing appears on screen.
 *
 * The init sequence from State 0 ($000706):
 *   1. $0009A2 — clear low Work RAM (already in subsystems.c)
 *   2. $0010D0 — build tile descriptor table, load region-specific tile data
 *   3. $0011FC — build sprite descriptor table, load region-specific sprite data
 *   4. $001112 — palette setup: look up palettes for each tile descriptor
 *   5. $001278 — sprite setup: look up palettes for each sprite descriptor
 *   6. $0150FA — clear slot switch state (already in subsystems.c)
 *
 * Source ROM: drift_p1.rom (213-p1.p1)
 */

#include <neogeorecomp/neogeorecomp.h>

/*
 * Load Initial Tile Data — $0010D0
 *
 * Builds a table of 11 pointers at $100002-$10002D, each pointing to
 * a 12-byte tile descriptor starting at $10002E. Then loads region-
 * specific tile configuration data from ROM.
 *
 * The region byte at $10FD83 selects which ROM data table to use
 * (Japan=0, USA=1, Europe=2). A pointer table at $1E97E contains
 * addresses of the region-specific data.
 *
 * Original:
 *   lea    $10002E, a0            ; tile descriptor area
 *   lea    $100002, a1            ; pointer table
 *   move.w #$A, d7               ; 11 entries
 *   .build: move.l a0, (a1)+     ; store pointer
 *   lea    $C(a0), a0            ; advance by 12 bytes
 *   dbra   d7, .build
 *   lea    $1E97E, a0            ; region table base in ROM
 *   moveq  #0, d0
 *   move.b $10FD83, d0           ; region code
 *   add.w  d0, d0 ; *4
 *   add.w  d0, d0
 *   movea.l (a0, d0.w), a0       ; a0 = region-specific data
 *   lea    $10002E, a1           ; destination
 *   move.w #$41, d7              ; 66 words
 *   .copy: move.w (a0)+, (a1)+
 *   dbra   d7, .copy
 *   rts
 */
void func_0010D0(void) {
    /* Build pointer table: 11 entries at $100002, each 12 bytes apart starting at $10002E */
    uint32_t desc_base = 0x10002E;
    uint32_t ptr_base = 0x100002;
    for (int i = 0; i <= 0x0A; i++) {
        bus_write32(ptr_base, desc_base);
        ptr_base += 4;
        desc_base += 0x0C;
    }

    /* Look up region-specific data from ROM table at $1E97E */
    uint8_t region = bus_read8(0x10FD83);
    uint32_t table_addr = 0x01E97E + (uint32_t)region * 4;
    uint32_t data_addr = bus_read32(table_addr);

    /* Copy 66 words (132 bytes) of tile config data */
    uint32_t dst = 0x10002E;
    for (int i = 0; i <= 0x41; i++) {
        uint16_t val = bus_read16(data_addr);
        bus_write16(dst, val);
        data_addr += 2;
        dst += 2;
    }
}

/*
 * Additional Tile Setup — $0011FC
 *
 * Builds a two-level descriptor table for sprite groups.
 * Level 1: 7 pointers at $1000B2, each pointing to a 24-byte block at $1000CE.
 * Level 2: Within each block, 6 pointers to 12-byte descriptors at $100176.
 *
 * Then loads region-specific sprite group data from ROM table at $1EA0E.
 * This is a complex nested loop that populates the entire sprite
 * configuration hierarchy.
 *
 * Original has three nested loops:
 *   1. Build 7 pointers at $1000B2 (24-byte stride from $1000CE)
 *   2. For each, build 6 sub-pointers (12-byte stride from $100176)
 *   3. Copy region-specific config data into the sub-descriptors
 */
void func_0011FC(void) {
    /* Build level-1 pointer table: 7 entries at $1000B2 */
    uint32_t block_base = 0x1000CE;
    uint32_t ptr1 = 0x1000B2;
    for (int i = 0; i <= 6; i++) {
        bus_write32(ptr1, block_base);
        ptr1 += 4;
        block_base += 0x18;  /* 24 bytes per block */
    }

    /* Build level-2 sub-pointers within each block */
    uint32_t sub_desc = 0x100176;
    ptr1 = 0x1000B2;
    for (int i = 0; i <= 6; i++) {
        uint32_t block = bus_read32(ptr1);
        ptr1 += 4;
        for (int j = 0; j <= 5; j++) {
            bus_write32(block, sub_desc);
            block += 4;
            sub_desc += 0x0C;  /* 12 bytes per sub-descriptor */
        }
    }

    /* Load region-specific data from ROM table at $1EA0E */
    uint8_t region = bus_read8(0x10FD83);
    uint32_t table_addr = 0x01EA0E + (uint32_t)region * 4;
    uint32_t rom_data = bus_read32(table_addr);

    /* Triple-nested copy: 7 groups x 6 sub-groups x 6 words */
    ptr1 = 0x1000B2;
    for (int i = 0; i <= 6; i++) {
        uint32_t group_data = bus_read32(rom_data);
        rom_data += 4;

        uint32_t block_ptr = bus_read32(ptr1);
        ptr1 += 4;

        for (int j = 0; j <= 5; j++) {
            uint32_t sub = bus_read32(block_ptr);
            block_ptr += 4;

            for (int k = 0; k <= 5; k++) {
                uint16_t val = bus_read16(group_data);
                bus_write16(sub, val);
                group_data += 2;
                sub += 2;
            }
        }
    }
}

/*
 * Palette Setup — $001112
 *
 * For each of the 10 tile descriptors (pointers at $100002), looks up
 * the palette index using a search function at $007D98.
 *
 * d2 = region code (from $00D70C lookup)
 * For each descriptor:
 *   d1 = first long of descriptor (color/tile reference)
 *   Call $7D98 to find the matching palette index
 *   Store result at descriptor+8
 *
 * Original:
 *   jsr    $D70C                  ; get region code into d0
 *   move.w d0, d2
 *   lea    $100002, a0
 *   move.w #9, d7
 *   .loop:
 *   movea.l (a0)+, a1
 *   move.l (a1), d1              ; first long of descriptor
 *   jsr    $7D98                 ; palette search
 *   move.w d1, $8(a1)            ; store palette index
 *   dbra   d7, .loop
 *   rts
 */
void func_001112(void) {
    /* Get region code */
    func_table_call(0x00D70C);
    g_m68k.d[2] = g_m68k.d[0];

    uint32_t ptr = 0x100002;
    for (int i = 0; i <= 9; i++) {
        uint32_t desc = bus_read32(ptr);
        ptr += 4;

        g_m68k.d[1] = bus_read32(desc);
        func_table_call(0x007D98);

        bus_write16(desc + 8, (uint16_t)g_m68k.d[1]);
    }
}

/*
 * Sprite Setup — $001278
 *
 * For each sprite group (7 groups x 5 sub-entries), looks up the
 * palette index using $007AC4.
 *
 * Similar pattern to palette setup but with an extra loop level
 * for the sprite group hierarchy.
 *
 * Original:
 *   jsr    $D70C
 *   move.w d0, d2
 *   lea    $1000B2, a0
 *   moveq  #0, d0                ; group counter
 *   .outer:
 *   movea.l (a0)+, a1            ; group pointer
 *   move.w #4, d7                ; 5 sub-entries
 *   .inner:
 *   movea.l (a1)+, a2            ; sub-entry pointer
 *   move.l (a2), d1             ; sprite reference
 *   jsr    $7AC4                 ; sprite palette search
 *   move.w d1, $A(a2)            ; store result
 *   dbra   d7, .inner
 *   addq.w #1, d0
 *   cmpi.w #7, d0
 *   blt    .outer
 *   rts
 */
void func_001278(void) {
    func_table_call(0x00D70C);
    g_m68k.d[2] = g_m68k.d[0];

    uint32_t ptr = 0x1000B2;
    for (int group = 0; group < 7; group++) {
        uint32_t group_ptr = bus_read32(ptr);
        ptr += 4;

        for (int sub = 0; sub <= 4; sub++) {
            uint32_t sub_ptr = bus_read32(group_ptr);
            group_ptr += 4;

            g_m68k.d[0] = (uint32_t)group;
            g_m68k.d[1] = bus_read32(sub_ptr);
            func_table_call(0x007AC4);

            bus_write16(sub_ptr + 0x0A, (uint16_t)g_m68k.d[1]);
        }
    }
}

/*
 * Region Code Lookup — $00D70C
 *
 * Reads the region byte at $10FD83 and returns a region-specific
 * index from a PC-relative lookup table.
 *
 * Table at $D71C: [0, 1, 2, ...] (region codes map to indices)
 *
 * Original:
 *   moveq  #0, d0
 *   move.b $10FD83, d0
 *   add.w  d0, d0
 *   move.w table(pc, d0.w), d0
 *   rts
 */
void func_00D70C(void) {
    uint8_t region = bus_read8(0x10FD83);
    uint32_t table_addr = 0x00D71C + (uint32_t)region * 2;
    g_m68k.d[0] = bus_read16(table_addr);
}

/*
 * Palette Search — $007D98
 *
 * Searches a palette lookup table for a match. The table base is
 * selected by d2 (region index) from a pointer table at $7DC8.
 * Then searches downward through 6 entries comparing d1 against
 * each table entry. Returns the matching index in d1.
 *
 * Uses DBHI (decrement and branch if higher) for the search —
 * finds the first entry where d1 <= table[i].
 *
 * Original:
 *   movem.l d0/d2/a0-a1, -(a7)
 *   lea    $7DC8, a1
 *   add.w  d2, d2 ; *4
 *   add.w  d2, d2
 *   movea.l (a1, d2.w), a1       ; table for this region
 *   move.w #5, d0                ; 6 entries
 *   .search:
 *   move.w d0, d2
 *   add.w  d2, d2 ; *4
 *   add.w  d2, d2
 *   move.l (a1, d2.w), d2        ; table entry
 *   cmp.l  d2, d1                ; compare
 *   dbhi   d0, .search           ; loop while d1 > d2
 *   addq.w #1, d0
 *   move.w d0, d1                ; result = index + 1
 *   movem.l (a7)+, d0/d2/a0-a1
 *   rts
 */
void func_007D98(void) {
    uint32_t save_d0 = g_m68k.d[0], save_d2 = g_m68k.d[2];
    uint32_t save_a0 = g_m68k.a[0], save_a1 = g_m68k.a[1];

    /* Get table pointer for this region */
    uint32_t d2_idx = (uint16_t)g_m68k.d[2];
    uint32_t table_ptr = bus_read32(0x007DC8 + d2_idx * 4);

    /* Search: find first entry where d1 <= table[i] */
    uint32_t d1_val = g_m68k.d[1];
    int16_t d0 = 5;
    while (d0 >= 0) {
        uint32_t entry = bus_read32(table_ptr + (uint32_t)d0 * 4);
        if (d1_val <= entry) break;
        d0--;
    }
    d0++;
    g_m68k.d[1] = (uint32_t)(uint16_t)d0;

    g_m68k.d[0] = save_d0; g_m68k.d[2] = save_d2;
    g_m68k.a[0] = save_a0; g_m68k.a[1] = save_a1;
}

/*
 * Sprite Palette Search — $007AC4
 *
 * Similar to $007D98 but for sprite data. Uses a two-level table:
 * first selects by region (d2) from $7AFC, then by group (d0) from
 * the region table. Searches 5 entries.
 *
 * Original:
 *   movem.l d0/d2/a0-a1, -(a7)
 *   lea    $7AFC, a1
 *   d2*4 -> region table pointer
 *   d0*4 -> group table pointer
 *   search 5 entries comparing d1
 *   result in d1
 */
void func_007AC4(void) {
    uint32_t save_d0 = g_m68k.d[0], save_d2 = g_m68k.d[2];
    uint32_t save_a0 = g_m68k.a[0], save_a1 = g_m68k.a[1];

    uint32_t d2_idx = (uint16_t)g_m68k.d[2];
    uint32_t d0_idx = (uint16_t)g_m68k.d[0];

    /* Two-level table lookup */
    uint32_t region_table = bus_read32(0x007AFC + d2_idx * 4);
    uint32_t group_table = bus_read32(region_table + d0_idx * 4);

    /* Search: find first entry where d1 <= table[i] */
    uint32_t d1_val = g_m68k.d[1];
    int16_t d0 = 4;  /* 5 entries */
    while (d0 >= 0) {
        uint32_t entry = bus_read32(group_table + (uint32_t)d0 * 4);
        if (d1_val <= entry) break;
        d0--;
    }
    d0++;
    g_m68k.d[1] = (uint32_t)(uint16_t)d0;

    g_m68k.d[0] = save_d0; g_m68k.d[2] = save_d2;
    g_m68k.a[0] = save_a0; g_m68k.a[1] = save_a1;
}

/*
 * Fix Layer Tile Write — $000A5A
 *
 * Unrolled loop: writes d0 to (a0) 19 times. Used by fix layer
 * setup ($000A26) to fill columns of fix layer tiles.
 * a0 = VRAM data port ($3C0002), VRAM address and modulo already set.
 *
 * Original: 19x (move.w d0, (a0); nop); rts
 */
void func_000A5A(void) {
    uint16_t val = (uint16_t)g_m68k.d[0];
    uint32_t port = g_m68k.a[0];
    for (int i = 0; i < 19; i++) {
        bus_write16(port, val);
    }
}

/*
 * String Copy — $011A02
 *
 * Copies a null-terminated string from (a0) to (a1).
 * Used by animation timer setup routines.
 *
 * Original:
 *   movem.l a0-a1, -(a7)
 *   .loop: move.b (a0)+, (a1)+
 *   bne.s  .loop
 *   movem.l (a7)+, a0-a1
 *   rts
 */
void func_011A02(void) {
    uint32_t save_a0 = g_m68k.a[0], save_a1 = g_m68k.a[1];

    uint32_t src = g_m68k.a[0];
    uint32_t dst = g_m68k.a[1];
    uint8_t c;
    do {
        c = bus_read8(src++);
        bus_write8(dst++, c);
    } while (c != 0);

    g_m68k.a[0] = save_a0;
    g_m68k.a[1] = save_a1;
}

/*
 * Demo/Game Setup — $000966
 *
 * Called when entering States 2 (demo) and 3 (car select).
 * Disables game VBlank, resets LSPC mode, acknowledges all IRQs,
 * drops to user mode (SR = $2000), sets sub-state flag, re-enables
 * game VBlank, initializes the sound system, and reads BIOS
 * configuration into game variables.
 */
void func_000966(void) {
    /* Disable game VBlank handling */
    uint8_t flags = bus_read8(0x10FD80);
    bus_write8(0x10FD80, flags & ~0x80);

    /* Reset LSPC mode */
    bus_write16(0x3C0006, 0x0000);

    /* Acknowledge all IRQs */
    bus_write16(0x3C000C, 0x0007);

    /* Set SR to $2000 (user mode, no interrupt mask) */
    m68k_set_sr(0x2000);

    /* Set sub-state flag */
    bus_write8(0x10FDAF, 1);

    /* Re-enable game VBlank */
    flags = bus_read8(0x10FD80);
    bus_write8(0x10FD80, flags | 0x80);

    /* Initialize sound system */
    g_m68k.d[0] = 1;
    func_table_call(0x015108);

    /* Read BIOS config into game variables */
    func_table_call(0x000AA8);
}

/*
 * Sound System Init — $015108
 *
 * Initializes the sound command ring buffer and triggers a slot switch.
 * d0 = sound mode flag (stored at $1032A6).
 *
 * Clears the ring buffer at $1032AC (8 entries), sets read/write
 * pointers to start, and sets $100370 = 1 to trigger the slot
 * switch handler to send the initial Z80 commands.
 */
void func_015108(void) {
    bus_write16(0x1032A6, (uint16_t)g_m68k.d[0]);
    bus_write16(0x1032A8, 0);
    bus_write16(0x1032AA, 0);

    uint32_t ring_start = 0x1032AC;
    bus_write32(0x1032BC, ring_start);
    bus_write32(0x1032C0, ring_start);

    for (int i = 0; i <= 7; i++) {
        bus_write16(ring_start + i * 2, 0);
    }

    bus_write16(0x100370, 1);  /* Trigger slot switch init */
}

/*
 * Read BIOS Config — $000AA8
 *
 * Reads BIOS soft-DIP configuration bytes from $10FD8A-$10FD8F
 * and stores them as words at $100406-$100410. Also computes
 * a doubled value and determines the input source pointer.
 */
void func_000AA8(void) {
    /* Read 6 BIOS config bytes and store as words */
    static const uint32_t src_addrs[] = {0x10FD8A, 0x10FD8B, 0x10FD8C, 0x10FD8D, 0x10FD8E, 0x10FD8F};
    static const uint32_t dst_addrs[] = {0x100406, 0x100408, 0x10040A, 0x10040C, 0x10040E, 0x100410};

    for (int i = 0; i < 6; i++) {
        uint8_t val = bus_read8(src_addrs[i]);
        bus_write16(dst_addrs[i], (uint16_t)val);
    }

    /* Double the first value and store at $1011F8 */
    uint16_t first = bus_read16(0x100406);
    bus_write16(0x1011F8, first << 1);

    /* Set input source pointer based on system mode */
    uint8_t sys_flags = bus_read8(0x10FD82);
    if (sys_flags == 0) {
        bus_write32(0x100412, 0x100416);
    } else {
        if (bus_read16(0x10FE80) != 0) {
            /* Further setup for networked/linked play - handle later */
        } else {
            bus_write32(0x100412, 0x00D00034);  /* MVS backup RAM input */
        }
    }
}
