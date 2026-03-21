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
     * On real hardware this returns control to the BIOS for the
     * eyecatcher animation or title screen. In our recomp, we
     * advance the game state to move past BIOS-managed screens.
     *
     * State 0 (init) calls this after setup -> advance to state 1
     * State 1 (title) calls this immediately -> advance to state 2 (demo)
     * State 9 (results) calls this -> we'd loop back
     */
    uint8_t state = bus_read8(0x10FDAE);
    if (state == 0) {
        /* Init done -> skip to demo mode */
        bus_write8(0x10FDAE, 2);
    } else if (state <= 1) {
        /* Title screen -> go to demo */
        bus_write8(0x10FDAE, 2);
    }
    /* For other states, just return and let the game handle it */
}

/* $C0044A — BIOS VBlank processing (called from game's VBlank handler) */
static void bios_vblank_process(void) {
    /* The BIOS reads controller inputs into system RAM here.
     * We handle input through the platform layer + io subsystem,
     * so this is mostly a no-op. Just ensure the input bytes
     * at the BIOS locations are updated. */

    /* Read raw input from I/O registers into BIOS RAM locations */
    uint8_t p1 = io_read_p1cnt();
    uint8_t p2 = io_read_p2cnt();
    uint8_t status = io_read_status_b();

    /* BIOS stores current + previous input at these locations */
    bus_write8(0x10FD82, 0);       /* System type flags */
    bus_write8(0x10FD83, 0);       /* Region: 0=Japan */
    /* Raw input: $10FD94-$10FD97 */
    bus_write8(0x10FD96, p1);      /* P1 current raw input */
    bus_write8(0x10FD97, p2);      /* P2 current raw input */

    /* Edge-detected (newly pressed) inputs */
    static uint8_t prev_p1 = 0xFF, prev_p2 = 0xFF;
    uint8_t p1_edge = ~p1 & prev_p1;  /* Active low -> active high edges */
    uint8_t p2_edge = ~p2 & prev_p2;
    bus_write8(0x10FD8E, p1_edge);
    bus_write8(0x10FD8F, p2_edge);
    prev_p1 = p1;
    prev_p2 = p2;

    /* Start buttons (from STATUS_B) */
    bus_write8(0x10FD8A, (~status >> 1) & 1);  /* P1 start */
    bus_write8(0x10FD8B, (~status >> 3) & 1);  /* P2 start */
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

    /* Register BIOS stubs first, then game functions */
    register_bios_stubs();
    recomp_register_all();
    printf("[neodriftout] Registered %u total functions\n", func_table_count());

    /* Start execution */
    platform_set_title("Neo Drift Out: New Technology [neogeorecomp]");
    neogeo_run();

    return 0;
}
