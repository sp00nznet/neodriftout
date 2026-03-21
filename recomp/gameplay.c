/*
 * gameplay.c — Main gameplay dispatcher and all 20 sub-state handlers.
 *
 * The gameplay dispatcher at $000B34 is the core game loop that runs
 * during States 2 (demo) and 3 (car select / play). It:
 *   1. Runs per-frame subsystems (timers, input, animation)
 *   2. Waits for VBlank sync ($100424 flag)
 *   3. Dispatches to the current sub-state handler via jump table
 *   4. Loops back to step 1
 *
 * Sub-state flow (stored at $100426):
 *   0  -> Initial setup, choose music, check start -> 1 or 2
 *   1  -> Title/intro animation -> 2 or 14 (continue) or BIOS
 *   2  -> Stage intro: sound + setup -> 3 or 4
 *   3  -> Pre-race countdown -> 4
 *   4  -> RACING (main gameplay!) -> 5 or 18
 *   5  -> Mid-race checkpoint -> 6 or 18
 *   6  -> Lap/checkpoint complete -> 7
 *   7  -> Stage transition -> 10
 *   8  -> Results display intro -> 9
 *   9  -> Results display -> 0 (return to BIOS)
 *  10  -> Post-stage: check more stages -> 8 or 11
 *  11  -> Ranking/high score entry -> 8
 *  12  -> Car select screen -> 13
 *  13  -> Car select -> race transition -> 2
 *  14  -> Continue screen setup -> 15
 *  15  -> Continue countdown -> 2 or 16
 *  16  -> Continue accepted -> 17
 *  17  -> Continue transition -> 14
 *  18  -> Return to title setup -> 19
 *  19  -> Return to title -> 6
 *
 * Source ROM: drift_p1.rom (213-p1.p1)
 */

#include <neogeorecomp/neogeorecomp.h>

/* Forward declarations for helpers only used in this file */
static void func_000FC8(void);
static void func_001076(void);
static void func_0010B0(void);
static void func_0010B8(void);

/*
 * Gameplay Dispatcher — $000B34
 *
 * This is the main gameplay loop. It never returns until the game
 * session ends (at which point the sub-state handler jumps to BIOS).
 *
 * Inner loop:
 *   1. Run per-frame subsystems
 *   2. Spin-wait for $100424 != 0 (VBlank has rendered a frame)
 *   3. When frame ready: run input check, dispatch to sub-state
 *   4. Clear frame ready flag, loop back
 */
void func_000B34(void) {
    /* Per-frame subsystem calls (run once at entry and on each loop) */
    func_table_call(0x010F96);   /* Copy ROM data to work RAM */
    func_table_call(0x014BA8);   /* Clear sound counter */
    func_table_call(0x001004);   /* Region sub-dispatch */
    func_000FC8();               /* Object system update */
    func_table_call(0x0014E8);   /* Frame timing init */
    func_table_call(0x0013B4);   /* Animation timer setup */
    func_table_call(0x00148A);   /* Animation timer setup 2 */
    func_table_call(0x001340);   /* Clear animation state */
    func_table_call(0x0013E6);   /* Animation timer tick 1 */
    func_table_call(0x0014A6);   /* Animation timer tick 2 */

    /* Main gameplay loop */
    while (1) {
        /* Check if frame has been rendered by VBlank */
        if (bus_read16(0x100424) == 0) {
            /* No frame yet — run the idle tick (PRNG advance) */
            func_0010B8();
            continue;
        }

        /* Frame is ready — run game logic */
        func_001076();  /* Input state update */

        /* Read current sub-state and dispatch */
        uint16_t sub_state = bus_read16(0x100426);

        /* Jump table at $000BAA: 20 entries */
        static const uint32_t sub_state_table[20] = {
            0x000BFA, 0x000CC6, 0x000D34, 0x000D82,
            0x000D9A, 0x000DC8, 0x000DF6, 0x000E20,
            0x000E38, 0x000E6E, 0x000E9C, 0x000EC8,
            0x000EE0, 0x000EFC, 0x000F28, 0x000F3E,
            0x000F64, 0x000F7C, 0x000F98, 0x000FB0,
        };

        if (sub_state < 20) {
            func_table_call(sub_state_table[sub_state]);
        }

        /* Post-dispatch: run animation timers */
        func_table_call(0x0013E6);
        func_table_call(0x0014A6);

        /* Clear frame ready flag — tells VBlank we consumed the frame */
        bus_write16(0x100424, 0);

        /* Loop continues: subsystems run again next iteration */
        /* Note: in the original, the loop jumps back to the $100424 check,
         * not to the subsystem calls. The subsystems only run once at entry.
         * But the animation ticks run every frame. */

        /* Poll platform input to prevent window freeze */
        if (!platform_poll_input()) {
            break;
        }
    }
}

/* === Sub-state handlers === */

/*
 * Sub-state 0: Initial game/demo setup — $000BFA
 *
 * Determines and queues the initial music track based on system mode
 * and region settings. Sets up timing and checks for game-over conditions.
 */
void func_000BFA(void) {
    bus_write16(0x101210, 1);

    if (bus_read8(0x10FD82) != 0) {
        /* Special system mode */
        if (bus_read16(0x100422) == 1) {
            /* Check flag at $10FE1C */
            if (bus_read8(0x10FE1C) == 0) goto play_stop;
        } else {
            if (bus_read8(0x00D00046) == 0) goto play_stop;
        }
        /* Flag is set — play sound 4 */
        g_m68k.d[0] = 4;
        func_table_call(0x015256);
        goto after_sound;

    play_stop:
        if (bus_read16(0x10040A) == 0) {
            g_m68k.d[0] = 4;
            func_table_call(0x015256);
        } else {
            g_m68k.d[0] = 7;
            func_table_call(0x015256);
        }
        goto after_sound;
    } else {
        /* Standard mode — play sound 7 */
        g_m68k.d[0] = 7;
        func_table_call(0x015256);
    }

after_sound:
    /* Play sound $21 (background music) */
    g_m68k.d[0] = 0x21;
    func_table_call(0x015256);

    /* Store 1 to $D704 */
    g_m68k.d[0] = 1;
    func_table_call(0x00D704);

    /* Reset frame timing */
    func_table_call(0x0015B6);
    func_table_call(0x0014F6);

    /* Check game-over / title return */
    func_table_call(0x002336);
    if ((uint16_t)g_m68k.d[0] != 0) return;

    /* Set sub-state transition */
    g_m68k.d[0] = 0;
    func_0010B0();

    if (bus_read16(0x10041A) != 0) {
        /* Game ending */
        g_m68k.d[0] = 1;
        g_m68k.d[1] = bus_read16(0x1011FC);
        func_table_call(0x0009D6);
        bus_write16(0x101210, 0);
        bus_write16(0x100426, 2);  /* -> sub-state 2 */
    } else {
        bus_write16(0x100426, 1);  /* -> sub-state 1 */
    }
}

/* Sub-state 1: Title/intro animation — $000CC6 */
void func_000CC6(void) {
    func_table_call(0x0014F6);
    func_table_call(0x002416);  /* Title animation */

    if ((uint16_t)g_m68k.d[0] != 0) return;  /* Still animating */

    if (bus_read16(0x10041A) != 0) {
        /* Transition triggered */
        g_m68k.d[0] = 1;
        g_m68k.d[1] = bus_read16(0x1011FC);
        func_table_call(0x0009D6);
        func_table_call(0x001340);

        if (bus_read8(0x10FD82) != 0) {
            bus_write16(0x101210, 0);
            bus_write16(0x100426, 2);   /* -> stage intro */
        } else {
            bus_write16(0x101210, 0);
            bus_write16(0x100426, 14);  /* -> continue screen */
        }
    } else {
        /* Return to BIOS (title screen timeout) */
        uint8_t flags = bus_read8(0x10FD80);
        bus_write8(0x10FD80, flags & ~0x80);
        func_table_call(0xC00444);
    }
}

/* Sub-state 2: Stage intro — $000D34 */
void func_000D34(void) {
    g_m68k.d[0] = 4; func_table_call(0x015256);
    g_m68k.d[0] = 7; func_table_call(0x015256);
    g_m68k.d[0] = 0x22; func_table_call(0x015256);

    if (bus_read16(0x100410) == 0) {
        bus_write16(0x100426, 4);  /* Skip countdown -> racing */
    } else {
        func_table_call(0x0169A8);
        func_table_call(0x00620C);
        if ((uint16_t)g_m68k.d[0] == 0) {
            bus_write16(0x100426, 3);  /* -> countdown */
        }
    }
}

/* Sub-state 3: Pre-race countdown — $000D82 */
void func_000D82(void) {
    func_table_call(0x00641A);
    if ((uint16_t)g_m68k.d[0] == 0) {
        bus_write16(0x100426, 4);  /* -> racing */
    }
}

/* Sub-state 4: RACING — $000D9A */
void func_000D9A(void) {
    bus_write16(0x10042E, 0);
    func_table_call(0x01A094);  /* Main race logic */
    if ((uint16_t)g_m68k.d[0] != 0) return;  /* Still racing */

    if ((uint16_t)g_m68k.d[1] == 0) {
        bus_write16(0x100426, 5);   /* -> checkpoint */
    } else {
        bus_write16(0x100426, 18);  /* -> return to title */
    }
}

/* Sub-state 5: Mid-race checkpoint — $000DC8 */
void func_000DC8(void) {
    func_table_call(0x01A118);
    if ((uint16_t)g_m68k.d[0] != 0) return;

    if ((uint16_t)g_m68k.d[1] == 0) {
        bus_write16(0x10042E, 1);
        bus_write16(0x100426, 6);   /* -> lap complete */
    } else {
        bus_write16(0x100426, 18);  /* -> return to title */
    }
}

/* Sub-state 6: Lap/checkpoint complete — $000DF6 */
void func_000DF6(void) {
    g_m68k.d[0] = 1; func_0010B0();
    g_m68k.d[0] = 0; func_table_call(0x00D704);
    func_table_call(0x00B044);
    if ((uint16_t)g_m68k.d[0] == 0) {
        bus_write16(0x100426, 7);  /* -> stage transition */
    }
}

/* Sub-state 7: Stage transition — $000E20 */
void func_000E20(void) {
    func_table_call(0x00B064);
    if ((uint16_t)g_m68k.d[0] == 0) {
        bus_write16(0x100426, 10);  /* -> post-stage */
    }
}

/* Sub-state 8: Results display intro — $000E38 */
void func_000E38(void) {
    g_m68k.d[0] = 4; func_table_call(0x015256);
    g_m68k.d[0] = 7; func_table_call(0x015256);
    g_m68k.d[0] = 0x2B; func_table_call(0x015256);
    func_table_call(0x00994C);
    if ((uint16_t)g_m68k.d[0] == 0) {
        bus_write16(0x100426, 9);  /* -> results display */
    }
}

/* Sub-state 9: Results display — $000E6E */
void func_000E6E(void) {
    func_table_call(0x009A82);
    if ((uint16_t)g_m68k.d[0] != 0) return;

    bus_write16(0x100426, 0);
    g_m68k.d[0] = 0;
    g_m68k.d[1] = bus_read16(0x1011FC);
    func_table_call(0x0009D6);
    func_table_call(0xC00444);  /* Return to BIOS */
}

/* Sub-state 10: Post-stage check — $000E9C */
void func_000E9C(void) {
    func_table_call(0x01A14A);
    if ((uint16_t)g_m68k.d[0] != 0) return;

    func_table_call(0x01696C);
    if ((uint16_t)g_m68k.d[1] == 0) {
        bus_write16(0x100426, 11);  /* -> ranking */
    } else {
        bus_write16(0x100426, 8);   /* -> results */
    }
}

/* Sub-state 11: Ranking/high score — $000EC8 */
void func_000EC8(void) {
    func_table_call(0x01A1CA);
    if ((uint16_t)g_m68k.d[0] == 0) {
        bus_write16(0x100426, 8);  /* -> results */
    }
}

/* Sub-state 12: Car select screen — $000EE0 */
void func_000EE0(void) {
    func_table_call(0x0014F6);
    func_table_call(0x0016DE);  /* Car select logic */
    if ((uint16_t)g_m68k.d[0] == 0) {
        bus_write16(0x100426, 13);  /* -> car select transition */
    }
}

/* Sub-state 13: Car select -> race transition — $000EFC */
void func_000EFC(void) {
    func_table_call(0x0014F6);
    func_table_call(0x00177C);  /* Transition animation */
    if ((uint16_t)g_m68k.d[0] == 0) {
        g_m68k.d[0] = 1;
        g_m68k.d[1] = bus_read16(0x1011FC);
        func_table_call(0x0009D6);
        bus_write16(0x100426, 2);  /* -> stage intro */
    }
}

/* Sub-state 14: Continue screen setup — $000F28 */
void func_000F28(void) {
    func_table_call(0x007E1C);
    if ((uint16_t)g_m68k.d[0] == 0) {
        bus_write16(0x100426, 15);  /* -> continue countdown */
    }
}

/* Sub-state 15: Continue countdown — $000F3E */
void func_000F3E(void) {
    func_table_call(0x007E86);
    if ((uint16_t)g_m68k.d[0] != 0) return;

    if ((uint16_t)g_m68k.d[1] == 0) {
        bus_write16(0x100426, 2);   /* Continue yes -> stage intro */
    } else {
        bus_write16(0x100426, 16);  /* Continue no -> accepted */
    }
}

/* Sub-state 16: Continue accepted — $000F64 */
void func_000F64(void) {
    func_table_call(0x0072BC);
    if ((uint16_t)g_m68k.d[0] == 0) {
        bus_write16(0x100426, 17);  /* -> continue transition */
    }
}

/* Sub-state 17: Continue transition — $000F7C */
void func_000F7C(void) {
    func_table_call(0x007314);
    if ((uint16_t)g_m68k.d[0] == 0) {
        func_table_call(0x00109E);  /* Cleanup sub */
        bus_write16(0x100426, 14);  /* -> continue screen */
    }
}

/* Sub-state 18: Return to title setup — $000F98 */
void func_000F98(void) {
    func_table_call(0x01C876);
    if ((uint16_t)g_m68k.d[0] == 0) {
        bus_write16(0x100426, 19);  /* -> return to title */
    }
}

/* Sub-state 19: Return to title — $000FB0 */
void func_000FB0(void) {
    func_table_call(0x01CA78);
    if ((uint16_t)g_m68k.d[0] == 0) {
        bus_write16(0x100426, 6);  /* -> lap complete (triggers end) */
    }
}

/* === Internal helpers === */

/* Sub $000FC8: Object system update — calls $01690E three times */
static void func_000FC8(void) {
    g_m68k.d[0] = 0x00; func_table_call(0x01690E);
    g_m68k.d[0] = 0x10; func_table_call(0x01690E);
    g_m68k.d[0] = 0x11; func_table_call(0x01690E);
}

/* Sub $001076: Input state update — read from input source pointer */
static void func_001076(void) {
    bus_write16(0x100420, 0);
    uint32_t input_src = bus_read32(0x100412);
    uint16_t current = bus_read16(0x100418);
    uint16_t new_val = bus_read16(input_src);
    if (current != new_val) {
        bus_write16(0x100418, new_val);
        bus_write16(0x100420, 1);  /* Input changed flag */
    }
}

/* Sub $0010B0: Store d0 to $10042C */
static void func_0010B0(void) {
    bus_write16(0x10042C, (uint16_t)g_m68k.d[0]);
}

/* Sub $0010B8: PRNG advance (runs during idle frames) */
static void func_0010B8(void) {
    uint16_t val = bus_read16(0x100430);
    val = (val << 2) | (val >> 14);  /* ROL by 2 */
    val += 0x3711;
    bus_write16(0x100430, val);
}
