/*
 * vram_dma.c — VRAM, palette, and sprite upload routines.
 *
 * These functions handle transferring data from Work RAM to the Neo Geo's
 * VRAM (via the LSPC port at $3C0000-$3C0004), palette RAM ($400000),
 * and sprite control blocks (SCB1-4 in VRAM).
 *
 * The original code uses heavily unrolled loops for speed — writing to
 * the VRAM port requires minimum timing gaps between accesses (the NOPs
 * in the original serve this purpose). In our recompilation, we use
 * simple loops since we're writing to the bus abstraction layer, not
 * real hardware.
 *
 * Key architectural pattern: Double-buffered rendering. The game
 * maintains two copies of VRAM data, sprite tables, etc. in Work RAM.
 * One buffer is being written to by game logic while the other is
 * uploaded to hardware during VBlank. The swap flag at $102532 (VRAM)
 * or the pointer swap in sprite upload controls which buffer is active.
 *
 * Source ROM: drift_p1.rom (213-p1.p1)
 */

#include <neogeorecomp/neogeorecomp.h>

/*
 * VRAM DMA Sub — $011C68
 *
 * Unrolled 32-word copy from RAM (a4) to VRAM data port (a2 = $3C0002).
 * The caller has already set REG_VRAMADDR and REG_VRAMMOD.
 *
 * IMPORTANT: The original code is 32 consecutive `move.w (a4)+, (a2)`
 * instructions. Callers sometimes jump INTO THE MIDDLE of this function
 * to copy fewer words. The sprite table upload ($012188) does this by
 * computing an entry point: `lea $11CA8, a5; suba.w count*2, a5; jsr (a5)`.
 * $11CA8 is the address of the RTS at the end.
 *
 * For the recomp, we implement the full 32-word copy. The computed-jump
 * variant is handled by func_011C68_partial() which takes a word count.
 *
 * Original: 32x move.w (a4)+, (a2) ; rts
 */
void func_011C68(void) {
    /* a2 = VRAM port ($3C0002), a4 = source data in RAM */
    uint32_t src = g_m68k.a[4];   /* a4 */
    uint32_t dst = g_m68k.a[2];   /* a2 = $3C0002 */

    for (int i = 0; i < 32; i++) {
        uint16_t val = bus_read16(src);
        bus_write16(dst, val);    /* Write to VRAM data port */
        src += 2;
    }
    g_m68k.a[4] = src;  /* a4 has been incremented by (a4)+ */
}

/*
 * Helper for computed-jump into $011C68.
 * Copies 'count' words from (a4) to (a2), advancing a4.
 * Used internally by sprite_table_upload.
 */
static void vram_dma_partial(int count) {
    uint32_t src = g_m68k.a[4];
    uint32_t dst = g_m68k.a[2];

    for (int i = 0; i < count; i++) {
        uint16_t val = bus_read16(src);
        bus_write16(dst, val);
        src += 2;
    }
    g_m68k.a[4] = src;
}

/*
 * VRAM Block Fill — $011CAA (128 words) / $011DAA (64 words)
 *
 * Fills VRAM with a constant value from d0. Writes d0 to the VRAM
 * data port (a2) repeatedly. Original uses NOPs between writes for
 * VRAM timing compliance.
 *
 * $011CAA: 128 writes (move.w d0,(a2); nop) x128; rts
 * $011DAA: 64 writes (entry point halfway through same block)
 *
 * Original: 128x (move.w d0, (a2); nop) ; rts at $011EAA
 */
void func_011CAA(void) {
    uint16_t val = (uint16_t)g_m68k.d[0];
    uint32_t dst = g_m68k.a[2];

    for (int i = 0; i < 128; i++) {
        bus_write16(dst, val);
    }
}

void func_011DAA(void) {
    uint16_t val = (uint16_t)g_m68k.d[0];
    uint32_t dst = g_m68k.a[2];

    for (int i = 0; i < 64; i++) {
        bus_write16(dst, val);
    }
}

/*
 * Palette Entry Copy — $011B96
 *
 * Copies 32 bytes (one Neo Geo palette = 16 colors x 2 bytes) from
 * source (a4) to destination (a5). Uses 8x move.l for speed (32 bytes).
 *
 * Original: 8x move.l (a4)+, (a5)+ ; rts
 */
void func_011B96(void) {
    uint32_t src = g_m68k.a[4];
    uint32_t dst = g_m68k.a[5];

    for (int i = 0; i < 8; i++) {
        uint32_t val = bus_read32(src);
        bus_write32(dst, val);
        src += 4;
        dst += 4;
    }
    g_m68k.a[4] = src;
    g_m68k.a[5] = dst;
}

/*
 * VRAM Upload Main — $013646
 *
 * Called from VBlank handler. Uploads sprite control block data from
 * the active Work RAM buffer to VRAM:
 *   - SCB2 (shrink) at VRAM $8020, from buffer+$02
 *   - SCB4 (X pos)  at VRAM $8420, from buffer+$C2
 *   - SCB3 (Y pos)  at VRAM $8220, from buffer+$42
 *
 * Uses double-buffered pointers at $1025D2 (read) and $1025D6 (write).
 * When the swap flag ($102532) is set, the buffers are exchanged.
 *
 * Original:
 *   move.w sr, -(a7)
 *   ori.w  #$700, sr              ; mask all interrupts
 *   movem.l a2-a5, -(a7)
 *   lea    $1025D6, a2            ; write pointer storage
 *   lea    $1025D2, a3            ; read pointer storage
 *   movea.l (a2), a4              ; a4 = write buffer
 *   movea.l (a3), a5              ; a5 = read buffer
 *   tst.w  $102532                ; swap flag?
 *   beq    .no_swap
 *   clr.w  $102532
 *   exg    a4, a5                 ; swap buffers
 *   move.l a4, (a2)
 *   move.l a5, (a3)
 *   .no_swap:
 *   lea    $3C0002, a2            ; VRAM data port
 *   move.w #1, $2(a2)             ; REG_VRAMMOD = 1 (sequential)
 *   lea    $2(a5), a4             ; source = read buffer + 2
 *   move.w #$8020, -$2(a2)       ; REG_VRAMADDR = $8020 (SCB2 sprite 0)
 *   jsr    $11C68                 ; copy 32 words to VRAM
 *   lea    $C2(a5), a4            ; source = read buffer + $C2
 *   move.w #$8420, -$2(a2)       ; REG_VRAMADDR = $8420 (SCB4 sprite 0)
 *   jsr    $11C68                 ; copy 32 words
 *   lea    $42(a5), a4            ; source = read buffer + $42
 *   move.w #$8220, -$2(a2)       ; REG_VRAMADDR = $8220 (SCB3 sprite 0)
 *   jsr    $11C68                 ; copy 32 words
 *   movem.l (a7)+, a2-a5
 *   move.w (a7)+, sr
 *   rts
 */
void func_013646(void) {
    uint32_t save_a2 = g_m68k.a[2], save_a3 = g_m68k.a[3];
    uint32_t save_a4 = g_m68k.a[4], save_a5 = g_m68k.a[5];

    /* Load double-buffer pointers */
    uint32_t write_ptr = bus_read32(0x1025D6);
    uint32_t read_ptr  = bus_read32(0x1025D2);

    /* Check swap flag */
    if (bus_read16(0x102532) != 0) {
        bus_write16(0x102532, 0);
        /* Swap pointers */
        uint32_t tmp = write_ptr;
        write_ptr = read_ptr;
        read_ptr = tmp;
        bus_write32(0x1025D6, write_ptr);
        bus_write32(0x1025D2, read_ptr);
    }

    /* a2 = VRAM data port, a5 = read buffer */
    g_m68k.a[2] = 0x3C0002;

    /* Set VRAM modulo to 1 (sequential access) */
    bus_write16(0x3C0004, 0x0001);

    /* Upload SCB2 (sprite shrink coefficients) */
    bus_write16(0x3C0000, 0x8020);  /* VRAM addr = SCB2 + offset for sprite 0 */
    g_m68k.a[4] = read_ptr + 0x02;
    func_011C68();

    /* Upload SCB4 (sprite X positions) */
    bus_write16(0x3C0000, 0x8420);
    g_m68k.a[4] = read_ptr + 0xC2;
    func_011C68();

    /* Upload SCB3 (sprite Y positions + height + sticky) */
    bus_write16(0x3C0000, 0x8220);
    g_m68k.a[4] = read_ptr + 0x42;
    func_011C68();

    g_m68k.a[2] = save_a2; g_m68k.a[3] = save_a3;
    g_m68k.a[4] = save_a4; g_m68k.a[5] = save_a5;
}

/*
 * Timer IRQ VRAM Sub — $0136BA
 *
 * Called from the timer interrupt handler. Performs a mid-frame VRAM
 * update — likely for scanline-based scroll position changes in the
 * isometric track rendering.
 *
 * Reads the current raster line from REG_LSPCMODE, waits for the
 * right scanline, then uploads SCB3 data from a different offset
 * in the active VRAM buffer.
 *
 * Original:
 *   movem.l d0-d1/a1-a2/a4, -(a7)
 *   lea    $3C0002, a2
 *   lea    $1025CE, a1            ; scroll offset table
 *   movea.l $1025D2, a4           ; active read buffer
 *   move.w (a4), d0               ; base scroll value
 *   sub.w  (a1), d0               ; subtract offset
 *   .scanwait:
 *   move.w $4(a2), d1             ; read REG_LSPCMODE (has raster line)
 *   bclr   #15, d1                ; clear high bit
 *   beq    .done                  ; if bit was 0, skip wait
 *   lsr.w  #7, d1                 ; extract scanline number
 *   cmp.w  d0, d1                 ; reached target scanline?
 *   bcs    .scanwait              ; no — keep waiting
 *   .done:
 *   move.w #1, $2(a2)             ; VRAM modulo = 1
 *   move.w #$8220, -$2(a2)       ; VRAM addr = SCB3
 *   lea    $82(a4), a4            ; source = buffer + $82
 *   jsr    $11C68                 ; copy 32 words
 *   movem.l (a7)+, d0-d1/a1-a2/a4
 *   rts
 */
void func_0136BA(void) {
    uint32_t save_d0 = g_m68k.d[0], save_d1 = g_m68k.d[1];
    uint32_t save_a1 = g_m68k.a[1], save_a2 = g_m68k.a[2];
    uint32_t save_a4 = g_m68k.a[4];

    g_m68k.a[2] = 0x3C0002;
    g_m68k.a[1] = 0x1025CE;

    uint32_t read_buf = bus_read32(0x1025D2);
    g_m68k.a[4] = read_buf;

    uint16_t base_scroll = bus_read16(read_buf);
    uint16_t offset = bus_read16(0x1025CE);
    uint16_t d0_val = base_scroll - offset;

    /*
     * Scanline wait loop — on real hardware this waits for the raster
     * to reach a specific line before updating VRAM mid-frame.
     * In the recomp, we skip the wait (no raster timing needed)
     * and just do the upload immediately.
     */

    /* Set VRAM modulo = 1, addr = $8220 (SCB3) */
    bus_write16(0x3C0004, 0x0001);
    bus_write16(0x3C0000, 0x8220);

    /* Copy 32 words from buffer+$82 to SCB3 */
    g_m68k.a[4] = read_buf + 0x82;
    g_m68k.a[2] = 0x3C0002;
    func_011C68();

    g_m68k.d[0] = save_d0; g_m68k.d[1] = save_d1;
    g_m68k.a[1] = save_a1; g_m68k.a[2] = save_a2;
    g_m68k.a[4] = save_a4;
}

/*
 * Palette DMA — $011F3E
 *
 * Processes the palette update ring buffer. The game writes palette
 * changes to a ring buffer at $101700-$101B14. Each entry is 36 bytes:
 *   - Long: destination address in palette RAM (0 = empty slot)
 *   - 32 bytes: palette data (16 colors)
 *
 * This function walks the ring buffer starting from the read pointer
 * ($101B18), copying each non-empty entry to its destination using
 * the 32-byte copy at $011B96, then advancing the pointer.
 *
 * At the end, clears $400000 (palette 0, color 0 = always transparent black).
 *
 * Original:
 *   movem.l d0/d2/a4-a5, -(a7)
 *   movea.l $101B18, a4           ; current read position
 *   move.l  #$101B14, d2          ; ring buffer end
 *   .loop:
 *   move.l  (a4), d0              ; read destination pointer
 *   beq     .done                 ; 0 = empty, stop
 *   clr.l   (a4)+                 ; clear the entry
 *   movea.l d0, a5                ; a5 = destination
 *   jsr     $11B96                ; copy 32 bytes (a4)+ -> (a5)+
 *   cmpa.l  d2, a4                ; reached end of ring?
 *   bne     .loop
 *   lea     $101700, a4           ; wrap to start
 *   bra     .loop
 *   .done:
 *   move.l  a4, $101B18           ; save read position
 *   clr.w   $400000               ; clear reference color (transparent black)
 *   movem.l (a7)+, d0/d2/a4-a5
 *   rts
 */
void func_011F3E(void) {
    uint32_t save_d0 = g_m68k.d[0], save_d2 = g_m68k.d[2];
    uint32_t save_a4 = g_m68k.a[4], save_a5 = g_m68k.a[5];

    uint32_t read_pos = bus_read32(0x101B18);
    uint32_t ring_end = 0x101B14;

    while (1) {
        uint32_t dest = bus_read32(read_pos);
        if (dest == 0) break;  /* Empty slot = done */

        /* Clear the entry */
        bus_write32(read_pos, 0);
        read_pos += 4;

        /* Copy 32 bytes (one palette) from ring buffer to destination */
        g_m68k.a[4] = read_pos;
        g_m68k.a[5] = dest;
        func_011B96();
        read_pos = g_m68k.a[4];  /* a4 advanced by 32 bytes */

        /* Wrap ring buffer */
        if (read_pos >= ring_end) {
            read_pos = 0x101700;
        }
    }

    /* Save updated read position */
    bus_write32(0x101B18, read_pos);

    /* Clear palette 0, color 0 (always transparent black) */
    bus_write16(0x400000, 0);

    g_m68k.d[0] = save_d0; g_m68k.d[2] = save_d2;
    g_m68k.a[4] = save_a4; g_m68k.a[5] = save_a5;
}

/*
 * Sprite Table Upload — $012188
 *
 * Uploads the active sprite table buffer to VRAM's SCB1 area.
 * Uses double-buffered buffers at $102226 and $10222A.
 *
 * The tricky part: it computes a jump into the MIDDLE of the
 * unrolled copy function at $011C68/$011CA8 based on the sprite
 * count at $10222E. This is the classic 68k "Duff's device" pattern.
 *
 * Buffer layout at (a0)/(a1):
 *   +$00: sprite count / control word
 *   +$04: VRAM address for upload
 *
 * Original flow:
 *   1. Check flag at $102224, exit if 0
 *   2. Clear flag
 *   3. Swap buffer pointers (a4=$102226, a5=$10222A)
 *   4. Read sprite count from $10222E, compute entry point
 *      into unrolled copy: a5 = $11CA8 - (count * 2)
 *   5. With interrupts masked:
 *      a. Set VRAM addr from new buffer's +$04
 *      b. Set VRAM modulo = 1
 *      c. JSR (a5) — copy sprite data to VRAM (variable count)
 *   6. Then clear old buffer:
 *      a. Set VRAM addr from old buffer's +$04
 *      b. Set VRAM modulo = 1
 *      c. JSR $11CAA — fill 128 words with 0
 */
void func_012188(void) {
    uint32_t save_d0 = g_m68k.d[0];
    uint32_t save_a0 = g_m68k.a[0], save_a1 = g_m68k.a[1];
    uint32_t save_a2 = g_m68k.a[2], save_a4 = g_m68k.a[4];
    uint32_t save_a5 = g_m68k.a[5];

    /* Check upload flag */
    if (bus_read16(0x102224) == 0) {
        goto done;
    }
    bus_write16(0x102224, 0);  /* Clear flag */

    {
        /* Swap double buffers */
        uint32_t buf_a = bus_read32(0x102226);
        uint32_t buf_b = bus_read32(0x10222A);
        bus_write32(0x102226, buf_b);  /* a4 ptr = old b */
        bus_write32(0x10222A, buf_a);  /* a5 ptr = old a */

        g_m68k.a[0] = buf_a;  /* a0 = old A (now the "clear" target) */
        g_m68k.a[1] = buf_b;  /* a1 = old B (now the "upload" source) */
        g_m68k.a[2] = 0x3C0002;

        /* Compute how many words to copy from sprite count */
        uint16_t sprite_count = bus_read16(0x10222E);
        int copy_words = sprite_count;
        /* The original: lea $11CA8, a5; suba.w d0, a5
         * $11CA8 is the RTS of the 32-word unrolled copy.
         * Each word copy is 2 bytes of code, so suba.w (count*2)
         * backs up into the unrolled block by 'count' instructions.
         * sprite_count was already doubled (d0 = count*2), so the
         * number of words to copy = sprite_count. */
        if (copy_words > 32) copy_words = 32;

        /* Upload new sprite data from buffer B */
        /* Set VRAM address from buffer B's header */
        uint16_t vram_addr = bus_read16(g_m68k.a[1] + 4);
        bus_write16(0x3C0000, vram_addr);
        bus_write16(0x3C0004, 0x0001);  /* modulo = 1 */

        /* Copy sprite data from $102330 area */
        g_m68k.a[4] = 0x102330;
        vram_dma_partial(copy_words);

        /* Clear old sprite data: set VRAM addr from buffer A's header */
        g_m68k.d[0] = 0;
        uint16_t old_vram_addr = bus_read16(g_m68k.a[0] + 4);
        bus_write16(0x3C0000, old_vram_addr);
        bus_write16(0x3C0004, 0x0001);
        g_m68k.a[2] = 0x3C0002;
        func_011CAA();  /* Fill 128 words with 0 */
    }

done:
    g_m68k.d[0] = save_d0;
    g_m68k.a[0] = save_a0; g_m68k.a[1] = save_a1;
    g_m68k.a[2] = save_a2; g_m68k.a[4] = save_a4;
    g_m68k.a[5] = save_a5;
}

/*
 * Palette Prep — $011EEE
 *
 * Initializes the palette DMA ring buffer system. Called once from
 * the USER routine at startup.
 *
 * Sets up the ring buffer at $101700 with 29 slots of 36 bytes each
 * (29 * 36 = 1044 bytes, $101700 to ~$101B14). Clears all entries
 * and sets both read and write pointers to the start.
 *
 * Also stores $28A52 to $101B1C — this appears to be a function pointer
 * or configuration value for the palette system.
 *
 * Original:
 *   movem.l d1-d2/a5, -(a7)
 *   lea    $101700, a5
 *   move.l a5, $101B14            ; write pointer = start
 *   move.l a5, $101B18            ; read pointer = start
 *   moveq  #$1C, d1              ; 29 entries (0 to 28)
 *   move.w #$24, d2              ; 36 bytes per entry
 *   .loop:
 *   clr.l  (a5)                   ; clear destination pointer
 *   adda.w d2, a5                 ; advance by 36 bytes
 *   dbra   d1, .loop
 *   move.l #$28A52, $101B1C       ; palette config
 *   movem.l (a7)+, d1-d2/a5
 *   rts
 */
void func_011EEE(void) {
    uint32_t buf_start = 0x101700;
    bus_write32(0x101B14, buf_start);
    bus_write32(0x101B18, buf_start);

    uint32_t ptr = buf_start;
    for (int i = 0; i <= 0x1C; i++) {
        bus_write32(ptr, 0);  /* Clear destination pointer */
        ptr += 0x24;          /* 36 bytes per entry */
    }

    bus_write32(0x101B1C, 0x00028A52);
}

/*
 * Sprite Prep — $0120E0
 *
 * Initializes the sprite system. Clears all VRAM sprite data and
 * sets up the double-buffered sprite table pointers.
 *
 * Clears:
 *   - SCB1 at VRAM $0000 (64 words of zero — first sprite tilemap)
 *   - SCB3 at VRAM $8200 and $8240-$82BF (Y pos/height/sticky)
 *   - SCB3 at VRAM $82C0 (additional range)
 *   - SCB1 at VRAM $1000 (128 * 64 words — bulk sprite tilemaps)
 *   - SCB1 at VRAM $3000 (128 * 64 words — more tilemaps)
 *
 * Sets up buffer pointers:
 *   $102226 = $029292 (sprite buffer A)
 *   $10222A = $02929A (sprite buffer B)
 *
 * Clears sprite attribute table at $101B20 (64 entries x 22 bytes).
 */
void func_0120E0(void) {
    uint32_t save_d0 = g_m68k.d[0], save_d1 = g_m68k.d[1];
    uint32_t save_a2 = g_m68k.a[2];

    g_m68k.a[2] = 0x3C0002;

    /* Set VRAM modulo = 1 */
    bus_write16(0x3C0004, 0x0001);

    /* Clear 64 words at VRAM $0000 (first sprite tilemap) */
    g_m68k.d[0] = 0;
    bus_write16(0x3C0000, 0x0000);
    func_011DAA();  /* 64 words of zero */

    /* Clear SCB3 at $8200 (1 word) */
    bus_write16(0x3C0000, 0x8200);
    bus_write16(0x3C0002, 0);

    /* Clear SCB3 at $8240 (128 words) */
    g_m68k.d[0] = 0;
    bus_write16(0x3C0000, 0x8240);
    func_011CAA();  /* 128 words of zero */

    /* Clear SCB3 at $82C0 (128 words) */
    bus_write16(0x3C0000, 0x82C0);
    func_011CAA();

    /* Clear bulk sprite tilemaps at $1000 (128 iterations of 64 words) */
    g_m68k.d[0] = 0;
    bus_write16(0x3C0000, 0x1000);
    for (int i = 0; i <= 0x7F; i++) {
        g_m68k.a[2] = 0x3C0002;
        func_011DAA();
    }

    /* Clear bulk sprite tilemaps at $3000 */
    bus_write16(0x3C0000, 0x3000);
    for (int i = 0; i <= 0x7F; i++) {
        g_m68k.a[2] = 0x3C0002;
        func_011DAA();
    }

    /* Set up double-buffer pointers */
    bus_write32(0x102226, 0x00029292);  /* Buffer A */
    bus_write32(0x10222A, 0x0002929A);  /* Buffer B */
    bus_write16(0x102224, 0);            /* Clear upload flag */

    /* Clear sprite attribute table at $101B20 (64 entries x 22 bytes) */
    uint32_t attr_ptr = 0x101B20;
    for (int i = 0; i <= 0x3F; i++) {
        bus_write16(attr_ptr, 0);
        attr_ptr += 0x16;  /* 22 bytes per entry */
    }

    bus_write16(0x1020A0, 0);

    g_m68k.d[0] = save_d0; g_m68k.d[1] = save_d1;
    g_m68k.a[2] = save_a2;
}

/*
 * VRAM Prep — $0133FA
 *
 * Initializes the VRAM double-buffer system. Sets up two 258-byte
 * buffers in Work RAM ($1025DA and $1026DC) and clears them.
 * Also initializes the VRAM hardware registers and clears SCB3.
 *
 * Checks LSPC mode bit 3 to determine auto-animation state and
 * sets the scroll offset table pointer at $1025CE accordingly.
 */
void func_0133FA(void) {
    uint32_t save_d[8], save_a[7];
    for (int i = 0; i < 8; i++) save_d[i] = g_m68k.d[i];
    for (int i = 0; i < 7; i++) save_a[i] = g_m68k.a[i];

    bus_write16(0x102530, 0);

    /* Set auto-animation mode to 0 */
    bus_write16(0x3C0006, 0x0000);

    /* Set scroll offset pointer based on LSPC mode bit 3 */
    uint16_t lspc_mode = bus_read16(0x3C0006);
    if (lspc_mode & 0x08) {
        bus_write32(0x1025CE, 0x000296EA);
    } else {
        bus_write32(0x1025CE, 0x000296E2);
    }

    /* Initialize buffer A at $1025DA, set as read buffer */
    uint32_t buf_a = 0x1025DA;
    bus_write32(0x1025D2, buf_a);
    /* Clear 258 bytes */
    for (int i = 0; i < 258; i++) {
        bus_write8(buf_a + i, 0);
    }

    /* Initialize buffer B at $1026DC, set as write buffer */
    uint32_t buf_b = 0x1026DC;
    bus_write32(0x1025D6, buf_b);
    for (int i = 0; i < 258; i++) {
        bus_write8(buf_b + i, 0);
    }

    /* Clear swap flag */
    bus_write16(0x102532, 0);

    /* Set VRAM modulo = 1 */
    bus_write16(0x3C0004, 0x0001);

    /* Clear SCB3 at VRAM $8220 (32 words) */
    bus_write16(0x3C0000, 0x8220);
    for (int i = 0; i < 0x20; i++) {
        bus_write16(0x3C0002, 0);
    }

    for (int i = 0; i < 8; i++) g_m68k.d[i] = save_d[i];
    for (int i = 0; i < 7; i++) g_m68k.a[i] = save_a[i];
}
