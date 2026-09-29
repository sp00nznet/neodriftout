/*
 * main.c — the Neo Drift Out player.
 *
 * Everything hardware-related lives in neogeorecomp. This file hands the
 * runtime the ROM set and the table of recompiled routines that
 * neodrift_recomp generated from the user's own dump at build time (never
 * committed; see README.md). Without that table the runtime interprets.
 */
#include "game.h"

#ifdef NEODRIFT_HAVE_RECOMP
extern const ng_func_entry_t ng_recomp_table[];
extern const size_t ng_recomp_count;
#endif

int main(int argc, char **argv) {
#ifdef NEODRIFT_HAVE_RECOMP
    return ng_main(argc, argv, &k_neodrift, ng_recomp_table, ng_recomp_count);
#else
    return ng_main(argc, argv, &k_neodrift, NULL, 0);
#endif
}
