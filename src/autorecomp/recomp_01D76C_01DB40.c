/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $01D76C - $01DB40 */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

/* $01D76C-$01D780  (9 instructions, 20 bytes) */
void jt_01D76C(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_ROL16(g_m68k.d[2], g_m68k.d[4]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_LSL32(g_m68k.d[6], 0x4);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_ROL16(g_m68k.d[3], g_m68k.d[4]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_LSL32(g_m68k.d[7], 0x4);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $01D780-$01D794  (8 instructions, 20 bytes) */
void jt_01D780(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    /* TODO $01D784: roxr.l d1, d3  [E2 B3] */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_LSL8(g_m68k.d[3], 0x1);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_LSL32(g_m68k.d[0], 0x4);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $01D794-$01D7A8  (9 instructions, 20 bytes) */
void jt_01D794(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_ROL16(g_m68k.d[4], g_m68k.d[4]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_LSL32(g_m68k.d[1], 0x4);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_ROL16(g_m68k.d[5], g_m68k.d[4]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_LSL32(g_m68k.d[2], 0x4);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $01D7A8-$01D7BC  (9 instructions, 20 bytes) */
void jt_01D7A8(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_ROL16(g_m68k.d[6], g_m68k.d[4]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_LSL32(g_m68k.d[3], 0x4);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_ROL16(g_m68k.d[7], g_m68k.d[4]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_LSL32(g_m68k.d[4], 0x4);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $01D7BC-$01D7D0  (9 instructions, 20 bytes) */
void jt_01D7BC(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_LSL32(g_m68k.d[0], 0x4);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_LSL32(g_m68k.d[5], 0x4);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_LSL8(g_m68k.d[2], 0x1);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_LSL8(g_m68k.d[4], 0x1);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $01D7D0-$01D7E4  (9 instructions, 20 bytes) */
void jt_01D7D0(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    /* TODO $01D7D4: roxr.l d1, d5  [E2 B5] */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_LSL8(g_m68k.d[5], 0x1);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_LSL32(g_m68k.d[1], 0x4);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_LSL32(g_m68k.d[6], 0x4);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $01D7E4-$01D7E8  (1 instructions, 4 bytes) */
void jt_01D7E4(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    /* WARNING: function did not end with RTS */
}

/* $01D7F8-$01D80C  (9 instructions, 20 bytes) */
void jt_01D7F8(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    /* TODO $01D7FC: roxr.l d1, d5  [E2 B5] */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_LSL8(g_m68k.d[5], 0x1);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* TODO $01D804: roxl.l #$4, d0  [E9 90] */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_ROL32(g_m68k.d[0], 0x4);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $01D80C-$01D81C  (7 instructions, 16 bytes) */
void jt_01D80C(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_LSL8(g_m68k.d[4], 0x1);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_LSL8(g_m68k.d[6], 0x1);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* TODO $01D818: roxr.l d1, d6  [E2 B6] */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $01D820-$01D834  (9 instructions, 20 bytes) */
void jt_01D820(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    /* TODO $01D824: roxl.l #$4, d1  [E9 91] */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_ROL32(g_m68k.d[1], 0x4);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* TODO $01D82C: roxl.l #$4, d2  [E9 92] */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_ROL32(g_m68k.d[2], 0x4);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $01D834-$01D848  (9 instructions, 20 bytes) */
void jt_01D834(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    /* TODO $01D838: roxr.l d1, d3  [E2 B3] */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_LSL8(g_m68k.d[1], 0x1);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* TODO $01D840: roxr.l d1, d4  [E2 B4] */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_LSL32(g_m68k.d[5], 0x4);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $01D848-$01D858  (7 instructions, 16 bytes) */
void jt_01D848(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    /* TODO $01D84C: roxr.l d1, d3  [E2 B3] */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_ROL32(g_m68k.d[3], 0x4);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* TODO $01D854: roxr.l d1, d4  [E2 B4] */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $01D858-$01D85C  (2 instructions, 4 bytes) */
void jt_01D858(void) {
    M68K_ROL32(g_m68k.d[4], 0x4);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $01D85C-$01D870  (9 instructions, 20 bytes) */
void jt_01D85C(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    /* TODO $01D860: roxl.l #$4, d3  [E9 93] */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_ROL32(g_m68k.d[5], 0x4);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* TODO $01D868: roxl.l #$4, d4  [E9 94] */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_ROL32(g_m68k.d[6], 0x4);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $01D870-$01D884  (9 instructions, 20 bytes) */
void jt_01D870(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    /* TODO $01D874: roxl.l #$4, d5  [E9 95] */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_ROL32(g_m68k.d[7], 0x4);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_ROL16(g_m68k.d[3], g_m68k.d[4]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_LSL32(g_m68k.d[0], g_m68k.d[4]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $01D884-$01D898  (9 instructions, 20 bytes) */
void jt_01D884(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    /* TODO $01D888: roxl.l #$4, d5  [E9 95] */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_LSL32(g_m68k.d[4], g_m68k.d[4]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_ROL16(g_m68k.d[3], g_m68k.d[4]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_LSL32(g_m68k.d[5], g_m68k.d[4]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $01D898-$01D8AC  (9 instructions, 20 bytes) */
void jt_01D898(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_LSL32(g_m68k.d[1], g_m68k.d[4]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_LSL32(g_m68k.d[6], g_m68k.d[4]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_LSL32(g_m68k.d[2], g_m68k.d[4]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_LSL32(g_m68k.d[7], g_m68k.d[4]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $01D8AC-$01D8C0  (9 instructions, 20 bytes) */
void jt_01D8AC(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_LSL32(g_m68k.d[3], g_m68k.d[4]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* TODO $01D8B4: roxl.l d4, d0  [E9 B0] */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_LSL32(g_m68k.d[4], g_m68k.d[4]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* TODO $01D8BC: roxl.l d4, d1  [E9 B1] */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $01D8C0-$01D8D4  (9 instructions, 20 bytes) */
void jt_01D8C0(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_LSL32(g_m68k.d[5], g_m68k.d[4]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* TODO $01D8C8: roxl.l d4, d2  [E9 B2] */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_LSL32(g_m68k.d[6], g_m68k.d[4]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* TODO $01D8D0: roxl.l d4, d3  [E9 B3] */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $01D8D4-$01D8E8  (6 instructions, 20 bytes) */
void jt_01D8D4(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $01D8DC: roxl.l d4, d4  [E9 B4] */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $01D8E8-$01D8FC  (7 instructions, 20 bytes) */
void jt_01D8E8(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_LSL32(g_m68k.d[7], g_m68k.d[4]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* TODO $01D8F0: roxl.l d4, d5  [E9 B5] */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $01D8FC-$01D910  (9 instructions, 20 bytes) */
void jt_01D8FC(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_LSL32(g_m68k.d[0], g_m68k.d[4]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* TODO $01D904: roxl.l d4, d6  [E9 B6] */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_LSL32(g_m68k.d[1], g_m68k.d[4]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* TODO $01D90C: roxl.l d4, d7  [E9 B7] */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $01D910-$01D924  (9 instructions, 20 bytes) */
void jt_01D910(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_LSL32(g_m68k.d[2], g_m68k.d[4]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_ROL32(g_m68k.d[0], g_m68k.d[4]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_LSL32(g_m68k.d[3], g_m68k.d[4]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_ROL32(g_m68k.d[1], g_m68k.d[4]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $01D924-$01D938  (9 instructions, 20 bytes) */
void jt_01D924(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_ROL32(g_m68k.d[2], g_m68k.d[4]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_ROL32(g_m68k.d[5], g_m68k.d[4]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_ROL32(g_m68k.d[3], g_m68k.d[4]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_ROL32(g_m68k.d[6], g_m68k.d[4]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $01D938-$01D94C  (9 instructions, 20 bytes) */
void jt_01D938(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_LSR32(g_m68k.d[5], g_m68k.d[1]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_ROR32(g_m68k.d[1], g_m68k.d[1]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_LSR32(g_m68k.d[6], g_m68k.d[1]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_ROR32(g_m68k.d[2], g_m68k.d[1]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $01D94C-$01D960  (9 instructions, 20 bytes) */
void jt_01D94C(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_LSR32(g_m68k.d[7], g_m68k.d[1]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_ROR32(g_m68k.d[3], g_m68k.d[1]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* TODO $01D958: roxr.l d1, d0  [E2 B0] */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_ROR32(g_m68k.d[4], g_m68k.d[1]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $01D960-$01D974  (9 instructions, 20 bytes) */
void jt_01D960(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    /* TODO $01D964: roxr.l d1, d1  [E2 B1] */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_ROR32(g_m68k.d[5], g_m68k.d[1]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* TODO $01D96C: roxr.l d1, d2  [E2 B2] */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_ROR32(g_m68k.d[6], g_m68k.d[1]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $01D974-$01D984  (7 instructions, 16 bytes) */
void jt_01D974(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    /* TODO $01D978: roxr.l d1, d3  [E2 B3] */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_ROR32(g_m68k.d[7], g_m68k.d[1]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* TODO $01D980: roxr.l d1, d4  [E2 B4] */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $01D988-$01D990  (3 instructions, 8 bytes) */
void jt_01D988(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    /* TODO $01D98C: roxr.l d1, d5  [E2 B5] */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $01D99C-$01D9A4  (3 instructions, 8 bytes) */
void jt_01D99C(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    /* TODO $01D9A0: roxr.l d1, d7  [E2 B7] */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $01D9B0-$01D9C4  (9 instructions, 20 bytes) */
void jt_01D9B0(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_ROL32(g_m68k.d[4], g_m68k.d[4]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_ROL32(g_m68k.d[1], 0x4);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_LSL32(g_m68k.d[2], g_m68k.d[4]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_ROL32(g_m68k.d[7], g_m68k.d[4]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $01D9C4-$01D9D0  (5 instructions, 12 bytes) */
void jt_01D9C4(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    /* TODO $01D9C8: dc.w $e9c0  [E9 C0] */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* TODO $01D9CC: dc.w $e9c6  [E9 C6] */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $01D9D8-$01D9E8  (7 instructions, 16 bytes) */
void jt_01D9D8(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_LSL8(g_m68k.d[4], 0x1);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* TODO $01D9E0: dc.w $e9c7  [E9 C7] */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* TODO $01D9E4: dc.w $e9c1  [E9 C1] */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $01D9EC-$01D9F4  (3 instructions, 8 bytes) */
void jt_01D9EC(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    /* TODO $01D9F0: dc.w $e9c2  [E9 C2] */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $01DA00-$01DA08  (3 instructions, 8 bytes) */
void jt_01DA00(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    /* TODO $01DA04: dc.w $e9c4  [E9 C4] */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $01DA14-$01DA1C  (2 instructions, 8 bytes) */
void jt_01DA14(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $01DA28-$01DA2C  (1 instructions, 4 bytes) */
void jt_01DA28(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    /* WARNING: function did not end with RTS */
}

/* $01DA3C-$01DA48  (5 instructions, 12 bytes) */
void jt_01DA3C(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    /* TODO $01DA40: roxr.l d1, d5  [E2 B5] */
    /* TODO $01DA42: dc.w $4300  [43 00] */
    M68K_LSL8(g_m68k.d[7], 0x1);
    /* TODO $01DA46: dc.w $4300  [43 00] */
    /* WARNING: function did not end with RTS */
}

/* $01DA50-$01DA54  (1 instructions, 4 bytes) */
void jt_01DA50(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    /* WARNING: function did not end with RTS */
}

/* $01DA64-$01DA78  (9 instructions, 20 bytes) */
void jt_01DA64(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_LSL8(g_m68k.d[1], 0x1);
    /* TODO $01DA6A: dc.w $4300  [43 00] */
    M68K_LSL8(g_m68k.d[3], 0x1);
    /* TODO $01DA6E: dc.w $4300  [43 00] */
    M68K_LSL8(g_m68k.d[2], 0x1);
    /* TODO $01DA72: dc.w $4300  [43 00] */
    M68K_LSL8(g_m68k.d[4], 0x1);
    /* TODO $01DA76: dc.w $4300  [43 00] */
    /* WARNING: function did not end with RTS */
}

/* $01DA78-$01DA8C  (9 instructions, 20 bytes) */
void jt_01DA78(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    /* TODO $01DA7C: roxr.l d1, d5  [E2 B5] */
    /* TODO $01DA7E: dc.w $4300  [43 00] */
    M68K_LSL8(g_m68k.d[7], 0x1);
    /* TODO $01DA82: dc.w $4300  [43 00] */
    M68K_LSL8(g_m68k.d[3], 0x1);
    /* TODO $01DA86: dc.w $4300  [43 00] */
    M68K_LSL8(g_m68k.d[5], 0x1);
    /* TODO $01DA8A: dc.w $4300  [43 00] */
    /* WARNING: function did not end with RTS */
}

/* $01DA8C-$01DAA0  (9 instructions, 20 bytes) */
void jt_01DA8C(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    /* TODO $01DA90: roxr.l d1, d5  [E2 B5] */
    /* TODO $01DA92: dc.w $4300  [43 00] */
    M68K_LSL8(g_m68k.d[5], 0x1);
    /* TODO $01DA96: dc.w $4300  [43 00] */
    M68K_LSL8(g_m68k.d[3], 0x1);
    /* TODO $01DA9A: dc.w $4300  [43 00] */
    M68K_LSL8(g_m68k.d[0], 0x3);
    /* TODO $01DA9E: dc.w $4300  [43 00] */
    /* WARNING: function did not end with RTS */
}

/* $01DAA0-$01DAB4  (9 instructions, 20 bytes) */
void jt_01DAA0(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    /* TODO $01DAA4: roxl.w d4, d2  [E9 72] */
    /* TODO $01DAA6: dc.w $4300  [43 00] */
    /* TODO $01DAA8: roxl.w d4, d6  [E9 76] */
    /* TODO $01DAAA: dc.w $4300  [43 00] */
    /* TODO $01DAAC: roxl.w d4, d3  [E9 73] */
    /* TODO $01DAAE: dc.w $4300  [43 00] */
    /* TODO $01DAB0: roxl.w d4, d7  [E9 77] */
    /* TODO $01DAB2: dc.w $4300  [43 00] */
    /* WARNING: function did not end with RTS */
}

/* $01DAB4-$01DAC8  (9 instructions, 20 bytes) */
void jt_01DAB4(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    /* TODO $01DAB8: roxl.w d4, d4  [E9 74] */
    /* TODO $01DABA: dc.w $4300  [43 00] */
    M68K_LSL8(g_m68k.d[5], 0x1);
    /* TODO $01DABE: dc.w $4300  [43 00] */
    /* TODO $01DAC0: roxl.w d4, d5  [E9 75] */
    /* TODO $01DAC2: dc.w $4300  [43 00] */
    M68K_LSL8(g_m68k.d[6], 0x1);
    /* TODO $01DAC6: dc.w $4300  [43 00] */
    /* WARNING: function did not end with RTS */
}

/* $01DAC8-$01DADC  (9 instructions, 20 bytes) */
void jt_01DAC8(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_ROL16(g_m68k.d[0], g_m68k.d[4]);
    /* TODO $01DACE: dc.w $4300  [43 00] */
    M68K_LSL32(g_m68k.d[2], 0x4);
    /* TODO $01DAD2: dc.w $4300  [43 00] */
    M68K_ROL16(g_m68k.d[1], g_m68k.d[4]);
    /* TODO $01DAD6: dc.w $4300  [43 00] */
    M68K_LSL32(g_m68k.d[3], 0x4);
    /* TODO $01DADA: dc.w $4300  [43 00] */
    /* WARNING: function did not end with RTS */
}

/* $01DADC-$01DAF0  (8 instructions, 20 bytes) */
void jt_01DADC(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_LSL32(g_m68k.d[4], 0x4);
    /* TODO $01DAE6: dc.w $4300  [43 00] */
    /* TODO $01DAE8: roxr.l d1, d4  [E2 B4] */
    /* TODO $01DAEA: dc.w $4300  [43 00] */
    M68K_LSL32(g_m68k.d[5], 0x4);
    /* TODO $01DAEE: dc.w $4300  [43 00] */
    /* WARNING: function did not end with RTS */
}

/* $01DAF0-$01DB04  (9 instructions, 20 bytes) */
void jt_01DAF0(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_ROL16(g_m68k.d[2], g_m68k.d[4]);
    /* TODO $01DAF6: dc.w $4300  [43 00] */
    M68K_LSL32(g_m68k.d[6], 0x4);
    /* TODO $01DAFA: dc.w $4300  [43 00] */
    M68K_ROL16(g_m68k.d[3], g_m68k.d[4]);
    /* TODO $01DAFE: dc.w $4300  [43 00] */
    M68K_LSL32(g_m68k.d[7], 0x4);
    /* TODO $01DB02: dc.w $4300  [43 00] */
    /* WARNING: function did not end with RTS */
}

/* $01DB04-$01DB18  (8 instructions, 20 bytes) */
void jt_01DB04(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    /* TODO $01DB08: roxr.l d1, d3  [E2 B3] */
    /* TODO $01DB0A: dc.w $4300  [43 00] */
    M68K_LSL8(g_m68k.d[3], 0x1);
    /* TODO $01DB0E: dc.w $4300  [43 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_LSL32(g_m68k.d[0], 0x4);
    /* TODO $01DB16: dc.w $4300  [43 00] */
    /* WARNING: function did not end with RTS */
}

/* $01DB18-$01DB2C  (9 instructions, 20 bytes) */
void jt_01DB18(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_ROL16(g_m68k.d[4], g_m68k.d[4]);
    /* TODO $01DB1E: dc.w $4300  [43 00] */
    M68K_LSL32(g_m68k.d[1], 0x4);
    /* TODO $01DB22: dc.w $4300  [43 00] */
    M68K_ROL16(g_m68k.d[5], g_m68k.d[4]);
    /* TODO $01DB26: dc.w $4300  [43 00] */
    M68K_LSL32(g_m68k.d[2], 0x4);
    /* TODO $01DB2A: dc.w $4300  [43 00] */
    /* WARNING: function did not end with RTS */
}

/* $01DB2C-$01DB40  (9 instructions, 20 bytes) */
void jt_01DB2C(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_ROL16(g_m68k.d[6], g_m68k.d[4]);
    /* TODO $01DB32: dc.w $4300  [43 00] */
    M68K_LSL32(g_m68k.d[3], 0x4);
    /* TODO $01DB36: dc.w $4300  [43 00] */
    M68K_ROL16(g_m68k.d[7], g_m68k.d[4]);
    /* TODO $01DB3A: dc.w $4300  [43 00] */
    M68K_LSL32(g_m68k.d[4], 0x4);
    /* TODO $01DB3E: dc.w $4300  [43 00] */
    /* WARNING: function did not end with RTS */
}
