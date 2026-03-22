/*
 * Neo Drift Out: New Technology — Static Recompilation Entry Point
 *
 * ROM files expected in --rom-path directory (supports both MAME and
 * alternate naming conventions):
 *   drift_p1.rom OR 213-p1.p1    68000 program code (2 MB)
 *   drift_s1.rom OR 213-s1.s1    Fix layer tiles (128 KB)
 *   drift_c1.rom OR 213-c1.c1    Sprite tiles (4 MB)
 *   drift_c2.rom OR 213-c2.c2    Sprite tiles (4 MB)
 *   drift_m1.rom OR 213-m1.m1    Z80 audio program (128 KB)
 *   drift_v1.rom OR 213-v1.v1    ADPCM samples (2 MB)
 *   drift_v2.rom OR 213-v2.v2    ADPCM samples (2 MB)
 */

#include <neogeorecomp/neogeorecomp.h>
#include <stdio.h>
#include <string.h>

/* Auto-generated: 6,475 functions + recomp_register_all() */
#include "autorecomp/recomp_funcs.h"

/* ----- ROM Path Helpers ----- */

static char s_rom_path[512] = ".";

static void make_path(char *buf, size_t size, const char *filename) {
    snprintf(buf, size, "%s/%s", s_rom_path, filename);
}

/* Try primary filename, fall back to alternate */
static int try_open(const char *primary, const char *alt, char *out, size_t out_size) {
    char path[512];
    make_path(path, sizeof(path), primary);
    FILE *f = fopen(path, "rb");
    if (f) { fclose(f); snprintf(out, out_size, "%s", path); return 0; }
    if (alt) {
        make_path(path, sizeof(path), alt);
        f = fopen(path, "rb");
        if (f) { fclose(f); snprintf(out, out_size, "%s", path); return 0; }
    }
    fprintf(stderr, "[neodriftout] ROM not found: %s", primary);
    if (alt) fprintf(stderr, " or %s", alt);
    fprintf(stderr, "\n");
    return -1;
}

/* ----- BIOS Stub Functions ----- */

/*
 * The Neo Geo BIOS handles startup, eyecatcher (SNK logo), and
 * various system services. Since we're running without a BIOS ROM,
 * we stub out the BIOS calls the game makes.
 */

/* $C00438 — BIOS VBlank handler (when game isn't active) */
static void bios_vblank_default(void) {
    /* Nothing to do — the game hasn't taken over VBlank yet */
}

/* $C00444 — BIOS: return from game to system (eyecatcher, title) */
static void bios_return_to_system(void) {
    /*
     * On real hardware, this returns control to the BIOS which handles
     * the eyecatcher (SNK logo), then calls USER again with the next
     * state. Since we don't have the BIOS, we simulate the state
     * transitions it would make.
     *
     * The BIOS normally:
     *   - After State 0 (init): plays eyecatcher, then sets state=1 (title)
     *   - After State 1 (title): waits for coin/timeout, sets state=2 (demo)
     *   - After State 9 (results): goes back to state=1 (title)
     *
     * We skip the eyecatcher and title, going straight to demo mode.
     * We also need to set the VBlank active flag and other state that
     * the BIOS would establish before re-entering the game.
     */
    uint8_t state = bus_read8(0x10FDAE);
    printf("[BIOS stub] return_to_system called, current state=%d\n", state);

    if (state <= 1) {
        /* Enter demo mode (state 2). The game will run sub-state 0
         * (init + sound setup), then sub-state 1 (title animation).
         * We set $10041A = 1 to simulate a demo timer event so the
         * title animation exits to sub-state 2 (stage intro) instead
         * of looping back to the BIOS. */
        bus_write8(0x10FDAE, 2);

        /* Enable game VBlank handling */
        uint8_t flags = bus_read8(0x10FD80);
        bus_write8(0x10FD80, flags | 0x80);
    }
    /* For other states (like 9 = results), go back to demo */
    else {
        bus_write8(0x10FDAE, 2);
        uint8_t flags = bus_read8(0x10FD80);
        bus_write8(0x10FD80, flags | 0x80);
    }
}

static int s_bios_frame = 0;

/* $C0044A — BIOS VBlank processing (called from game's VBlank handler) */
static void bios_vblank_process(void) {
    s_bios_frame++;

    /* After ~2 seconds, simulate a start press / demo trigger.
     * Set $10041A = 1 HERE (inside VBlank processing, AFTER USER's
     * clr.w $10041A but BEFORE the gameplay dispatcher reads it). */
    if (s_bios_frame >= 120) {
        bus_write16(0x10041A, 1);
    }
    /* The BIOS reads controller inputs into system RAM here.
     * We handle input through the platform layer + io subsystem,
     * so this is mostly a no-op. Just ensure the input bytes
     * at the BIOS locations are updated. */

    /* Read raw input from I/O registers into BIOS RAM locations.
     *
     * The Neo Geo BIOS processes hardware input registers each VBlank
     * and stores processed results in system RAM for the game to read.
     *
     * Key BIOS RAM locations for input:
     *   $10FD94: P1 raw joystick (active low)
     *   $10FD95: P1 edge-detected (newly pressed, active high)
     *   $10FD96: P1 raw (alternate location used by some games)
     *   $10FD97: P2 raw
     *   $10FD98: P1 start/select status
     *   $10FD99: P2 start/select status
     *   $10FD8A-$10FD8F: soft-DIP and player config
     */
    uint8_t p1 = io_read_p1cnt();
    uint8_t p2 = io_read_p2cnt();
    uint8_t status = io_read_status_b();

    /* Store raw input */
    bus_write8(0x10FD94, p1);
    bus_write8(0x10FD96, p1);
    bus_write8(0x10FD97, p2);

    /* Edge detection: active-high bits for newly pressed buttons */
    static uint8_t prev_p1 = 0xFF, prev_p2 = 0xFF;
    static uint8_t prev_status = 0xFF;
    uint8_t p1_edge = ~p1 & prev_p1;
    uint8_t p2_edge = ~p2 & prev_p2;
    uint8_t status_edge = ~status & prev_status;
    bus_write8(0x10FD95, p1_edge);
    bus_write8(0x10FD8E, p1_edge);
    bus_write8(0x10FD8F, p2_edge);
    prev_p1 = p1;
    prev_p2 = p2;

    /* Start/Select from STATUS_B (active low):
     * Bit 1 = P1 Start, Bit 0 = P1 Select
     * Bit 3 = P2 Start, Bit 2 = P2 Select */
    uint8_t p1_start = (~status >> 1) & 1;
    uint8_t p1_select = (~status >> 0) & 1;
    bus_write8(0x10FD8A, p1_start);
    bus_write8(0x10FD8C, p1_start);  /* Credit/coin status */
    bus_write8(0x10FD98, status);     /* Raw status_b for start/select */

    /* If start is pressed, also set $10FE80 (game active flag) */
    if (p1_start) {
        bus_write16(0x10FE80, 1);
    }

    prev_status = status;
}

/* $C004C2 — BIOS: clear fix layer */
static void bios_clear_fix(void) {
    /* Clear the fix layer tilemap in VRAM ($7000-$74FF) */
    bus_write16(0x3C0004, 0x0001);  /* VRAM modulo = 1 */
    bus_write16(0x3C0000, 0x7000);  /* VRAM address = fix layer start */
    for (int i = 0; i < 0x500; i++) {
        bus_write16(0x3C0002, 0x0020);  /* Space tile (empty) */
    }
}

/* $C004C8 — BIOS: process system requests */
static void bios_process_requests(void) {
    /* Handles coin counting, timer updates, etc.
     * For now, just a no-op. */
}

/* $C00450 — BIOS: hardware test / controller detection */
static void bios_hw_test(void) {
    /* Write test result to $10FDB0 */
    bus_write32(0x10FDB0, 0);  /* No special hardware detected */
}

static void register_bios_stubs(void) {
    func_table_register(0xC00438, bios_vblank_default);
    func_table_register(0xC00444, bios_return_to_system);
    func_table_register(0xC0044A, bios_vblank_process);
    func_table_register(0xC004C2, bios_clear_fix);
    func_table_register(0xC004C8, bios_process_requests);
    func_table_register(0xC00450, bios_hw_test);
    printf("[neodriftout] Registered 6 BIOS stubs\n");
}

/* ----- ROM Loading ----- */

static int load_roms(void) {
    char path[512];
    int rc;

    /* P ROM — 68k program code (try both naming conventions) */
    if (try_open("drift_p1.rom", "213-p1.p1", path, sizeof(path)) != 0) return -1;
    rc = bus_load_prom(path, NULL);
    if (rc != 0) return rc;

    /* S ROM — fix layer tiles */
    if (try_open("drift_s1.rom", "213-s1.s1", path, sizeof(path)) != 0) return -1;
    rc = video_load_srom(path);
    if (rc != 0) return rc;

    /* C ROMs — sprite tiles (1 pair) */
    char c1[512], c2[512];
    if (try_open("drift_c1.rom", "213-c1.c1", c1, sizeof(c1)) != 0) return -1;
    if (try_open("drift_c2.rom", "213-c2.c2", c2, sizeof(c2)) != 0) return -1;
    const char *crom_paths[] = { c1, c2 };
    rc = video_load_crom(crom_paths, 2);
    if (rc != 0) return rc;

    /* M ROM — Z80 audio program */
    if (try_open("drift_m1.rom", "213-m1.m1", path, sizeof(path)) != 0) return -1;
    rc = z80_load_mrom(path);
    if (rc != 0) return rc;

    /* V ROMs — ADPCM audio samples */
    char v1[512], v2[512];
    if (try_open("drift_v1.rom", "213-v1.v1", v1, sizeof(v1)) != 0) return -1;
    if (try_open("drift_v2.rom", "213-v2.v2", v2, sizeof(v2)) != 0) return -1;
    const char *vrom_paths[] = { v1, v2 };
    rc = ym2610_load_vrom(vrom_paths, 2);
    if (rc != 0) return rc;

    return 0;
}

/* ----- Entry Point ----- */

int main(int argc, char *argv[]) {
    printf("===========================================\n");
    printf("  Neo Drift Out: New Technology\n");
    printf("  Static Recompilation by sp00nznet\n");
    printf("  Runtime: neogeorecomp v%s\n", neogeo_version_string());
    printf("===========================================\n\n");

    /* Parse command line */
    for (int i = 1; i < argc; i++) {
        if (strcmp(argv[i], "--rom-path") == 0 && i + 1 < argc) {
            strncpy(s_rom_path, argv[++i], sizeof(s_rom_path) - 1);
        }
    }

    /* Initialize the Neo Geo runtime */
    int rc = neogeo_init(&(neogeo_config_t){
        .rom_path = s_rom_path,
        .window_scale = 3,
        .fullscreen = false,
        .vsync = true,
        .mvs_mode = true,
        .region = 0,  /* Japan (region 0 — matches default BIOS config) */
    });
    if (rc != 0) {
        fprintf(stderr, "[neodriftout] Runtime initialization failed\n");
        return 1;
    }

    /* Load ROM files */
    rc = load_roms();
    if (rc != 0) {
        fprintf(stderr, "[neodriftout] ROM loading failed\n");
        return 1;
    }

    /* Register BIOS stubs first, then auto-generated game functions */
    register_bios_stubs();
    recomp_register_all();

    /*
     * Override specific auto-generated functions with hand-written versions.
     * The auto-generator can mis-split functions when jump table targets
     * fall inside function bodies (e.g., dbhi search loops). The hand-written
     * versions in recomp/*.c are verified correct.
     */
    extern void func_007AC4(void);  /* Sprite palette search */
    extern void func_007D98(void);  /* Palette search */
    extern void func_000C52(void);  /* Sub-state 0 standard mode path */
    extern void func_000CC4(void);  /* RTS stub at $CC4 */
    extern void func_000CBC(void);  /* Sub-state advance to 1 */
    func_table_register(0x007AC4, func_007AC4);
    func_table_register(0x007D98, func_007D98);
    func_table_register(0x000C52, func_000C52);
    func_table_register(0x000CC4, func_000CC4);
    func_table_register(0x000CBC, func_000CBC);

    extern void func_01229E(void);  /* Sprite/VRAM commit (push-return-addr fix) */
    extern void func_011C88(void);  /* Partial VRAM DMA copy (16 words) */
    extern void func_011C78(void);  /* Partial VRAM DMA copy (24 words) */
    extern void func_011C98(void);  /* Partial VRAM DMA copy (8 words) */
    extern void func_000CC6(void);  /* Sub-state 1 handler (split fix) */
    func_table_register(0x01229E, func_01229E);
    extern void func_012202(void);  /* Sprite allocator (with logging) */
    func_table_register(0x012202, func_012202);
    func_table_register(0x011C78, func_011C78);
    func_table_register(0x011C88, func_011C88);
    func_table_register(0x011C98, func_011C98);
    func_table_register(0x000CC6, func_000CC6);

    printf("[neodriftout] Registered %u total functions (with hand-written overrides)\n",
           func_table_count());

    /* Start execution */
    platform_set_title("Neo Drift Out: New Technology [neogeorecomp]");
    neogeo_run();

    return 0;
}
