/*
 * Neo Drift Out: New Technology — Static Recompilation Entry Point
 *
 * This file initializes the Neo Geo runtime, loads the Neo Drift Out ROM
 * set, registers all recompiled functions, and starts execution.
 *
 * ROM files required (place in --rom-path directory):
 *   213-p1.p1    68000 program code (2 MB)
 *   213-s1.s1    Fix layer tiles (128 KB)
 *   213-c1.c1    Sprite tiles (4 MB each)
 *   213-c2.c2
 *   213-m1.m1    Z80 audio program (128 KB)
 *   213-v1.v1    ADPCM samples (2 MB each)
 *   213-v2.v2
 *   sp-s2.sp1    Neo Geo BIOS
 *   sfix.sfix    BIOS fix tiles
 *   000-lo.lo    BIOS lookup table
 */

#include <neogeorecomp/neogeorecomp.h>
#include <stdio.h>
#include <string.h>

/* ----- Forward declarations for recompiled functions ----- */

/* vectors.c — Interrupt handlers */
extern void func_00022C(void);  /* VBlank handler (IRQ1) */
extern void func_00023E(void);  /* VBlank game handler */
extern void func_0002AA(void);  /* Timer handler (IRQ2) */
extern void func_0002C2(void);  /* Cold reset handler (IRQ3) */
extern void func_0002CA(void);  /* TRAP handler */

/* main_loop.c — USER subroutine and helpers */
extern void func_000200(void);  /* Clear frame counters */
extern void func_00020E(void);  /* Setup frame sync */
extern void func_00068C(void);  /* USER subroutine (main frame handler) */
extern void func_0009BC(void);  /* Set frame delays */
extern void func_0009F4(void);  /* Set input mode */
extern void func_000A04(void);  /* Clear work RAM ($100374-$103610) */
extern void func_000FE8(void);  /* Check game active */

/* states.c — Game state handlers */
extern void func_000706(void);  /* State 0: Init/Logo */
extern void func_00073E(void);  /* State 1: Title Screen */
extern void func_000744(void);  /* State 2: Demo Play */
extern void func_000756(void);  /* State 3: Car Select */

/* vram_dma.c — VRAM, palette, and sprite upload */
extern void func_011C68(void);  /* VRAM DMA: 32-word copy to VRAM port */
extern void func_011CAA(void);  /* VRAM fill: 128 words with d0 */
extern void func_011DAA(void);  /* VRAM fill: 64 words with d0 */
extern void func_011B96(void);  /* Palette entry copy (32 bytes) */
extern void func_013646(void);  /* VRAM upload main (SCB2/3/4) */
extern void func_0136BA(void);  /* Timer IRQ VRAM sub */
extern void func_011F3E(void);  /* Palette DMA (ring buffer -> hardware) */
extern void func_012188(void);  /* Sprite table upload */
extern void func_011EEE(void);  /* Palette prep (init ring buffer) */
extern void func_0120E0(void);  /* Sprite prep (clear VRAM, init buffers) */
extern void func_0133FA(void);  /* VRAM prep (init double buffers) */

/* subsystems.c — Sound, hardware setup, misc */
extern void func_015150(void);  /* Slot switch / sound command handler */
extern void func_015256(void);  /* Sound command queue enqueue */
extern void func_0009A2(void);  /* Hardware setup (clear low Work RAM) */
extern void func_000A26(void);  /* Fix layer setup */
extern void func_0150FA(void);  /* Sound init */
extern void func_014BA8(void);  /* Clear sound counter */
extern void func_010F96(void);  /* Copy ROM data to Work RAM */
extern void func_0009D6(void);  /* Set sound bank/mode */

/* init.c — State 0 data initialization */
extern void func_0010D0(void);  /* Load initial tile data */
extern void func_0011FC(void);  /* Additional tile setup */
extern void func_001112(void);  /* Palette setup */
extern void func_001278(void);  /* Sprite setup */
extern void func_00D70C(void);  /* Region code lookup */
extern void func_007D98(void);  /* Palette search */
extern void func_007AC4(void);  /* Sprite palette search */
extern void func_000A5A(void);  /* Fix layer tile write (19 words) */
extern void func_011A02(void);  /* String copy */
extern void func_000966(void);  /* Demo/game setup */
extern void func_015108(void);  /* Sound system init */
extern void func_000AA8(void);  /* Read BIOS config */

/* helpers.c — Utility functions */
extern void func_001004(void);  /* Region sub-dispatch */
extern void func_001340(void);  /* Clear animation state */
extern void func_0013B4(void);  /* Animation timer setup */
extern void func_0013E6(void);  /* Animation timer tick 1 */
extern void func_0014A6(void);  /* Animation timer tick 2 */
extern void func_00148A(void);  /* Animation timer setup 2 */
extern void func_0014E8(void);  /* Frame timing init */
extern void func_0015B6(void);  /* Frame timing reset */
extern void func_0014F6(void);  /* Input / frame rate management */
extern void func_0015D0(void);  /* Frame timing apply */
extern void func_002336(void);  /* Check game over flag */
extern void func_00D704(void);  /* Store to $1014FC */

/* gameplay.c — Gameplay dispatcher and sub-states */
extern void func_000B34(void);  /* Main gameplay dispatcher */
extern void func_000BFA(void);  /* Sub-state 0: initial setup */
extern void func_000CC6(void);  /* Sub-state 1: title/intro anim */
extern void func_000D34(void);  /* Sub-state 2: stage intro */
extern void func_000D82(void);  /* Sub-state 3: pre-race countdown */
extern void func_000D9A(void);  /* Sub-state 4: RACING */
extern void func_000DC8(void);  /* Sub-state 5: checkpoint */
extern void func_000DF6(void);  /* Sub-state 6: lap complete */
extern void func_000E20(void);  /* Sub-state 7: stage transition */
extern void func_000E38(void);  /* Sub-state 8: results intro */
extern void func_000E6E(void);  /* Sub-state 9: results display */
extern void func_000E9C(void);  /* Sub-state 10: post-stage */
extern void func_000EC8(void);  /* Sub-state 11: ranking */
extern void func_000EE0(void);  /* Sub-state 12: car select */
extern void func_000EFC(void);  /* Sub-state 13: car->race transition */
extern void func_000F28(void);  /* Sub-state 14: continue setup */
extern void func_000F3E(void);  /* Sub-state 15: continue countdown */
extern void func_000F64(void);  /* Sub-state 16: continue accepted */
extern void func_000F7C(void);  /* Sub-state 17: continue transition */
extern void func_000F98(void);  /* Sub-state 18: return to title */
extern void func_000FB0(void);  /* Sub-state 19: return to title final */

/* ----- ROM Path Helpers ----- */

static char s_rom_path[512] = ".";

static void make_path(char *buf, size_t size, const char *filename) {
    snprintf(buf, size, "%s/%s", s_rom_path, filename);
}

/* ----- ROM Loading ----- */

static int load_roms(void) {
    char path[512];
    int rc;

    /* P ROM — 68k program code */
    make_path(path, sizeof(path), "213-p1.p1");
    rc = bus_load_prom(path, NULL);
    if (rc != 0) return rc;

    /* BIOS */
    make_path(path, sizeof(path), "sp-s2.sp1");
    rc = bus_load_bios(path);
    if (rc != 0) {
        fprintf(stderr, "[neodriftout] BIOS not found, continuing without BIOS\n");
    }

    /* S ROM — fix layer tiles */
    make_path(path, sizeof(path), "213-s1.s1");
    rc = video_load_srom(path);
    if (rc != 0) return rc;

    /* SFIX — BIOS fix tiles */
    make_path(path, sizeof(path), "sfix.sfix");
    video_load_sfix(path);

    /* C ROMs — sprite tiles (1 pair: c1/c2) */
    char c1[512], c2[512];
    make_path(c1, sizeof(c1), "213-c1.c1");
    make_path(c2, sizeof(c2), "213-c2.c2");
    const char *crom_paths[] = { c1, c2 };
    rc = video_load_crom(crom_paths, 2);
    if (rc != 0) return rc;

    /* M ROM — Z80 audio program */
    make_path(path, sizeof(path), "213-m1.m1");
    rc = z80_load_mrom(path);
    if (rc != 0) return rc;

    /* V ROMs — ADPCM audio samples */
    char v1[512], v2[512];
    make_path(v1, sizeof(v1), "213-v1.v1");
    make_path(v2, sizeof(v2), "213-v2.v2");
    const char *vrom_paths[] = { v1, v2 };
    rc = ym2610_load_vrom(vrom_paths, 2);
    if (rc != 0) return rc;

    return 0;
}

/* ----- Function Registration ----- */

static void register_functions(void) {
    /* --- Interrupt handlers (vectors.c) --- */
    func_table_register(0x00022C, func_00022C);  /* VBlank handler */
    func_table_register(0x00023E, func_00023E);  /* VBlank game handler */
    func_table_register(0x0002AA, func_0002AA);  /* Timer handler */
    func_table_register(0x0002C2, func_0002C2);  /* Cold reset handler */
    func_table_register(0x0002CA, func_0002CA);  /* TRAP handler */

    /* --- Main loop (main_loop.c) --- */
    func_table_register(0x000200, func_000200);  /* Clear frame counters */
    func_table_register(0x00020E, func_00020E);  /* Setup frame sync */
    func_table_register(0x00068C, func_00068C);  /* USER subroutine */
    func_table_register(0x0009BC, func_0009BC);  /* Set frame delays */
    func_table_register(0x0009F4, func_0009F4);  /* Set input mode */
    func_table_register(0x000A04, func_000A04);  /* Clear work RAM */
    func_table_register(0x000FE8, func_000FE8);  /* Check game active */

    /* --- State handlers (states.c) --- */
    func_table_register(0x000706, func_000706);  /* State 0: Init */
    func_table_register(0x00073E, func_00073E);  /* State 1: Title */
    func_table_register(0x000744, func_000744);  /* State 2: Demo */
    func_table_register(0x000756, func_000756);  /* State 3: Car Select */

    /* --- VRAM/Palette/Sprite upload (vram_dma.c) --- */
    func_table_register(0x011C68, func_011C68);  /* VRAM DMA 32-word copy */
    func_table_register(0x011CAA, func_011CAA);  /* VRAM fill 128 words */
    func_table_register(0x011DAA, func_011DAA);  /* VRAM fill 64 words */
    func_table_register(0x011B96, func_011B96);  /* Palette entry copy */
    func_table_register(0x013646, func_013646);  /* VRAM upload main */
    func_table_register(0x0136BA, func_0136BA);  /* Timer IRQ VRAM sub */
    func_table_register(0x011F3E, func_011F3E);  /* Palette DMA */
    func_table_register(0x012188, func_012188);  /* Sprite table upload */
    func_table_register(0x011EEE, func_011EEE);  /* Palette prep */
    func_table_register(0x0120E0, func_0120E0);  /* Sprite prep */
    func_table_register(0x0133FA, func_0133FA);  /* VRAM prep */

    /* --- Subsystems (subsystems.c) --- */
    func_table_register(0x015150, func_015150);  /* Slot switch / sound cmds */
    func_table_register(0x015256, func_015256);  /* Sound cmd queue */
    func_table_register(0x0009A2, func_0009A2);  /* Hardware setup */
    func_table_register(0x000A26, func_000A26);  /* Fix layer setup */
    func_table_register(0x0150FA, func_0150FA);  /* Sound init */
    func_table_register(0x014BA8, func_014BA8);  /* Clear sound counter */
    func_table_register(0x010F96, func_010F96);  /* ROM data copy */
    func_table_register(0x0009D6, func_0009D6);  /* Sound bank/mode */

    /* --- Init routines (init.c) --- */
    func_table_register(0x0010D0, func_0010D0);  /* Load tile data */
    func_table_register(0x0011FC, func_0011FC);  /* Tile setup */
    func_table_register(0x001112, func_001112);  /* Palette setup */
    func_table_register(0x001278, func_001278);  /* Sprite setup */
    func_table_register(0x00D70C, func_00D70C);  /* Region code lookup */
    func_table_register(0x007D98, func_007D98);  /* Palette search */
    func_table_register(0x007AC4, func_007AC4);  /* Sprite palette search */
    func_table_register(0x000A5A, func_000A5A);  /* Fix layer tile write */
    func_table_register(0x011A02, func_011A02);  /* String copy */
    func_table_register(0x000966, func_000966);  /* Demo/game setup */
    func_table_register(0x015108, func_015108);  /* Sound system init */
    func_table_register(0x000AA8, func_000AA8);  /* Read BIOS config */

    /* --- Helpers (helpers.c) --- */
    func_table_register(0x001004, func_001004);  /* Region sub-dispatch */
    func_table_register(0x001340, func_001340);  /* Clear animation state */
    func_table_register(0x0013B4, func_0013B4);  /* Animation timer setup */
    func_table_register(0x0013E6, func_0013E6);  /* Animation timer tick 1 */
    func_table_register(0x0014A6, func_0014A6);  /* Animation timer tick 2 */
    func_table_register(0x00148A, func_00148A);  /* Animation timer setup 2 */
    func_table_register(0x0014E8, func_0014E8);  /* Frame timing init */
    func_table_register(0x0015B6, func_0015B6);  /* Frame timing reset */
    func_table_register(0x0014F6, func_0014F6);  /* Input / frame rate */
    func_table_register(0x0015D0, func_0015D0);  /* Frame timing apply */
    func_table_register(0x002336, func_002336);  /* Check game over */
    func_table_register(0x00D704, func_00D704);  /* Store to $1014FC */

    /* --- Gameplay dispatcher (gameplay.c) --- */
    func_table_register(0x000B34, func_000B34);  /* Main dispatcher */
    func_table_register(0x000BFA, func_000BFA);  /* Sub 0: init setup */
    func_table_register(0x000CC6, func_000CC6);  /* Sub 1: title/intro */
    func_table_register(0x000D34, func_000D34);  /* Sub 2: stage intro */
    func_table_register(0x000D82, func_000D82);  /* Sub 3: countdown */
    func_table_register(0x000D9A, func_000D9A);  /* Sub 4: RACING */
    func_table_register(0x000DC8, func_000DC8);  /* Sub 5: checkpoint */
    func_table_register(0x000DF6, func_000DF6);  /* Sub 6: lap complete */
    func_table_register(0x000E20, func_000E20);  /* Sub 7: stage trans */
    func_table_register(0x000E38, func_000E38);  /* Sub 8: results intro */
    func_table_register(0x000E6E, func_000E6E);  /* Sub 9: results */
    func_table_register(0x000E9C, func_000E9C);  /* Sub 10: post-stage */
    func_table_register(0x000EC8, func_000EC8);  /* Sub 11: ranking */
    func_table_register(0x000EE0, func_000EE0);  /* Sub 12: car select */
    func_table_register(0x000EFC, func_000EFC);  /* Sub 13: car->race */
    func_table_register(0x000F28, func_000F28);  /* Sub 14: continue */
    func_table_register(0x000F3E, func_000F3E);  /* Sub 15: countdown */
    func_table_register(0x000F64, func_000F64);  /* Sub 16: accepted */
    func_table_register(0x000F7C, func_000F7C);  /* Sub 17: transition */
    func_table_register(0x000F98, func_000F98);  /* Sub 18: ret title */
    func_table_register(0x000FB0, func_000FB0);  /* Sub 19: ret final */

    printf("[neodriftout] Registered %u functions\n", func_table_count());
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
        .mvs_mode = true,   /* Neo Drift Out is an MVS title */
        .region = 1,         /* USA */
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

    /* Register recompiled functions */
    register_functions();

    /* Start execution */
    platform_set_title("Neo Drift Out: New Technology [neogeorecomp]");
    neogeo_run();

    return 0;
}
