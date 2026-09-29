/*
 * game.c - the Neo Drift Out (NGH-213) ROM set, shared by the player and
 * the generator so both load the program identically.
 */
#include "game.h"

/* MAME set "neodrift". Like most 2 MB sets, the P ROM holds the banked
 * half first and the fixed $000000 half second, byte-swapped. */
const ng_game_t k_neodrift = {
    .name = "neodrift",
    .title = "Neo Drift Out - New Technology",
    .prom_size = 0x200000,
    .prom = {
        {"213-p1.p1", 0x100000, 0x000000, 0x100000, 1},
        {"213-p1.p1", 0x000000, 0x100000, 0x100000, 1},
    },
    .crom_size = 0x800000,
    .crom_pairs = {{"213-c1.c1", "213-c2.c2"}},
    .srom = "213-s1.s1",
    .m1 = "213-m1.m1",
    .vrom = {"213-v1.v1", "213-v2.v2"},
};
