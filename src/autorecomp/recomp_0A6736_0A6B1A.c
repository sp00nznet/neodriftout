/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $0A6736 - $0A6B1A */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

/* $0A6736-$0A674A  (7 instructions, 20 bytes) */
void jt_0A6736(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_AND32(g_m68k.d[0], _predec32(3));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_AND32(g_m68k.d[0], bus_read32(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 2));
    M68K_AND32(g_m68k.d[0], _predec32(4));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_AND32(g_m68k.d[0], bus_read32(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 2));
    /* WARNING: function did not end with RTS */
}

/* $0A674A-$0A6756  (4 instructions, 12 bytes) */
void jt_0A674A(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_AND32(g_m68k.d[0], _predec32(5));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_AND32(g_m68k.d[0], bus_read32(g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 2));
    /* WARNING: function did not end with RTS */
}

/* $0A675E-$0A6772  (8 instructions, 20 bytes) */
void jt_0A675E(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_CMP16(g_m68k.d[6], _predec16(2));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(g_m68k.d[1]));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_AND32(g_m68k.d[0], _predec32(6));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_AND32(g_m68k.d[0], bus_read32(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 2));
    /* WARNING: function did not end with RTS */
}

/* $0A6772-$0A6788  (5 instructions, 22 bytes) */
void jt_0A6772(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_CMP32(g_m68k.d[6], bus_read32(0xa6778 + (int16_t)(uint16_t)g_m68k.d[4] * 2));
    M68K_AND32(g_m68k.d[0], bus_read32(0xa677c + (int16_t)(uint16_t)g_m68k.d[4] * 2));
    M68K_AND32(g_m68k.d[0], bus_read32(g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 2));
    M68K_AND32(g_m68k.d[0], 0x42000002);
    /* WARNING: function did not end with RTS */
}

/* $0A6786-$0A6796  (7 instructions, 16 bytes) */
void jt_0A6786(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_OR8(g_m68k.d[2], 0x62);
    M68K_CMP16(g_m68k.d[6], _predec16(2));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(g_m68k.d[1]));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_AND32(g_m68k.d[0], bus_read32(g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 2));
    /* WARNING: function did not end with RTS */
}

/* $0A679A-$0A67AE  (8 instructions, 20 bytes) */
void jt_0A679A(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(g_m68k.d[0]));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(g_m68k.a[2]));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP16(g_m68k.d[6], _predec16(3));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP16(g_m68k.d[6], bus_read16(g_m68k.a[7] + 0x4200));
    /* WARNING: function did not end with RTS */
}

/* $0A67AE-$0A67B6  (2 instructions, 8 bytes) */
void jt_0A67AE(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_AND32(g_m68k.d[0], bus_read32(g_m68k.a[6] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 2));
    /* WARNING: function did not end with RTS */
}

/* $0A67C2-$0A67D6  (8 instructions, 20 bytes) */
void jt_0A67C2(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_CMP16(g_m68k.d[6], _predec16(0));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(g_m68k.d[5]));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP16(g_m68k.d[6], _predec16(1));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_AND32(g_m68k.d[0], bus_read32(g_m68k.a[2] + 0x4200));
    /* WARNING: function did not end with RTS */
}

/* $0A67D6-$0A67EA  (9 instructions, 20 bytes) */
void jt_0A67D6(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_CMP16(g_m68k.d[6], _predec16(0));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_MULU(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP16(g_m68k.d[6], _predec16(1));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_MULU(g_m68k.d[0], g_m68k.d[1]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $0A67EA-$0A67FE  (6 instructions, 20 bytes) */
void jt_0A67EA(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_AND32(g_m68k.d[0], bus_read32(0x004200));
    M68K_MULU(g_m68k.d[0], g_m68k.d[2]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_AND32(g_m68k.d[0], bus_read32(0x4200C0C3));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $0A67FE-$0A6812  (8 instructions, 20 bytes) */
void jt_0A67FE(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_AND32(g_m68k.d[0], bus_read32(0xaaa04));
    M68K_MULU(g_m68k.d[0], g_m68k.d[4]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_AND32(g_m68k.d[0], _predec32(0));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_MULU(g_m68k.d[0], g_m68k.d[5]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $0A6812-$0A6826  (8 instructions, 20 bytes) */
void jt_0A6812(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_AND32(g_m68k.d[0], bus_read32(0xaaa18));
    M68K_MULU(g_m68k.d[0], bus_read16(g_m68k.a[1]));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_AND32(g_m68k.d[0], _predec32(0));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_MULU(g_m68k.d[0], bus_read16(g_m68k.a[2]));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $0A6826-$0A683A  (9 instructions, 20 bytes) */
void jt_0A6826(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_MULU(g_m68k.d[0], g_m68k.d[6]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_MULU(g_m68k.d[0], bus_read16(g_m68k.a[3]));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_MULU(g_m68k.d[0], g_m68k.d[7]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_MULU(g_m68k.d[0], bus_read16(g_m68k.a[4]));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $0A683A-$0A683E  (1 instructions, 4 bytes) */
void jt_0A683A(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    /* WARNING: function did not end with RTS */
}

/* $0A684E-$0A6852  (1 instructions, 4 bytes) */
void jt_0A684E(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    /* WARNING: function did not end with RTS */
}

/* $0A6862-$0A6876  (6 instructions, 20 bytes) */
void jt_0A6862(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULU(g_m68k.d[0], _postinc16(1));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0A6876-$0A687A  (1 instructions, 4 bytes) */
void jt_0A6876(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    /* WARNING: function did not end with RTS */
}

/* $0A688A-$0A688E  (1 instructions, 4 bytes) */
void jt_0A688A(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    /* WARNING: function did not end with RTS */
}

/* $0A689E-$0A68A2  (1 instructions, 4 bytes) */
void jt_0A689E(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    /* WARNING: function did not end with RTS */
}

/* $0A68B2-$0A68C6  (9 instructions, 20 bytes) */
void jt_0A68B2(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_MULU(g_m68k.d[0], _postinc16(7));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_MULU(g_m68k.d[0], _predec16(2));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_MULU(g_m68k.d[0], _predec16(0));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_MULU(g_m68k.d[0], _predec16(3));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $0A68C6-$0A68DA  (9 instructions, 20 bytes) */
void jt_0A68C6(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_CMP16(g_m68k.d[6], _postinc16(2));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP16(g_m68k.d[6], _predec16(6));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP16(g_m68k.d[6], _postinc16(3));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP16(g_m68k.d[6], _predec16(7));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $0A68DA-$0A68EE  (7 instructions, 20 bytes) */
void jt_0A68DA(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_CMP16(g_m68k.d[6], _postinc16(4));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP16(g_m68k.d[6], bus_read16(g_m68k.a[0] + 0x4200));
    M68K_CMP16(g_m68k.d[6], _postinc16(5));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP16(g_m68k.d[6], bus_read16(g_m68k.a[1] + 0x4200));
    /* WARNING: function did not end with RTS */
}

/* $0A68EE-$0A6902  (7 instructions, 20 bytes) */
void jt_0A68EE(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_CMP16(g_m68k.d[6], _postinc16(6));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP16(g_m68k.d[6], bus_read16(g_m68k.a[2] + 0x4200));
    M68K_CMP16(g_m68k.d[6], _postinc16(7));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP16(g_m68k.d[6], bus_read16(g_m68k.a[3] + 0x4200));
    /* WARNING: function did not end with RTS */
}

/* $0A6902-$0A6916  (7 instructions, 20 bytes) */
void jt_0A6902(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_CMP16(g_m68k.d[6], _predec16(0));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP16(g_m68k.d[6], bus_read16(g_m68k.a[4] + 0x4200));
    M68K_CMP16(g_m68k.d[6], _predec16(1));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP16(g_m68k.d[6], bus_read16(g_m68k.a[5] + 0x4200));
    /* WARNING: function did not end with RTS */
}

/* $0A6916-$0A692A  (7 instructions, 20 bytes) */
void jt_0A6916(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_CMP16(g_m68k.d[6], _predec16(2));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP16(g_m68k.d[6], bus_read16(g_m68k.a[6] + 0x4200));
    M68K_CMP16(g_m68k.d[6], _predec16(3));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP16(g_m68k.d[6], bus_read16(g_m68k.a[7] + 0x4200));
    /* WARNING: function did not end with RTS */
}

/* $0A692A-$0A693E  (7 instructions, 20 bytes) */
void jt_0A692A(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_CMP16(g_m68k.d[6], _predec16(4));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP16(g_m68k.d[6], bus_read16(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 2));
    M68K_CMP16(g_m68k.d[6], _predec16(5));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP16(g_m68k.d[6], bus_read16(g_m68k.a[7] + 0x4200));
    /* WARNING: function did not end with RTS */
}

/* $0A693E-$0A6946  (3 instructions, 8 bytes) */
void jt_0A693E(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_MULU(g_m68k.d[0], _predec16(1));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $0A6952-$0A6966  (7 instructions, 20 bytes) */
void jt_0A6952(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_MULU(g_m68k.d[0], _predec16(5));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_MULU(g_m68k.d[0], bus_read16(g_m68k.a[3] + 0x4200));
    M68K_CMP32(g_m68k.d[6], bus_read32(0xaab60));
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(g_m68k.d[4]));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $0A6966-$0A697A  (7 instructions, 20 bytes) */
void jt_0A6966(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(g_m68k.d[0]));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_MULU(g_m68k.d[0], bus_read16(g_m68k.a[4] + 0x4200));
    M68K_MULU(g_m68k.d[0], _predec16(6));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_MULU(g_m68k.d[0], bus_read16(g_m68k.a[5] + 0x4200));
    /* WARNING: function did not end with RTS */
}

/* $0A697A-$0A698E  (6 instructions, 20 bytes) */
void jt_0A697A(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_MULU(g_m68k.d[0], _predec16(7));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_MULU(g_m68k.d[0], bus_read16(g_m68k.a[6] + 0x4200));
    M68K_MULU(g_m68k.d[0], bus_read16(g_m68k.a[0] + 0x4200));
    M68K_MULU(g_m68k.d[0], bus_read16(g_m68k.a[7] + 0x4200));
    /* WARNING: function did not end with RTS */
}

/* $0A698E-$0A69A2  (5 instructions, 20 bytes) */
void jt_0A698E(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_MULU(g_m68k.d[0], bus_read16(g_m68k.a[1] + 0x4200));
    M68K_MULU(g_m68k.d[0], bus_read16(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 2));
    M68K_MULU(g_m68k.d[0], bus_read16(g_m68k.a[2] + 0x4200));
    M68K_MULU(g_m68k.d[0], bus_read16(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 2));
    /* WARNING: function did not end with RTS */
}

/* $0A69A2-$0A69B6  (5 instructions, 20 bytes) */
void jt_0A69A2(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULU(g_m68k.d[0], bus_read16(g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 2));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND32(g_m68k.d[0], bus_read32(g_m68k.a[5] + 0x4200));
    /* WARNING: function did not end with RTS */
}

/* $0A69B6-$0A69CA  (6 instructions, 20 bytes) */
void jt_0A69B6(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_CMP32(g_m68k.d[6], bus_read32(0x004300));
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(g_m68k.d[1]));
    /* TODO $0A69C0: dc.w $4300  [43 00] */
    M68K_CMP32(g_m68k.d[6], bus_read32(0x4300BCC2));
    /* TODO $0A69C8: dc.w $4300  [43 00] */
    /* WARNING: function did not end with RTS */
}

/* $0A69CA-$0A69DE  (8 instructions, 20 bytes) */
void jt_0A69CA(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_CMP16(g_m68k.d[6], _predec16(2));
    /* TODO $0A69D0: dc.w $4300  [43 00] */
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(g_m68k.d[3]));
    /* TODO $0A69D4: dc.w $4300  [43 00] */
    M68K_CMP32(g_m68k.d[6], bus_read32(0xaacd8));
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(g_m68k.d[4]));
    /* TODO $0A69DC: dc.w $4300  [43 00] */
    /* WARNING: function did not end with RTS */
}

/* $0A69DE-$0A69F2  (6 instructions, 20 bytes) */
void jt_0A69DE(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_CMP32(g_m68k.d[6], /* UNHANDLED_READ: (a16, d4.w * 2) */ 0);
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(g_m68k.d[5]));
    /* TODO $0A69E8: dc.w $4300  [43 00] */
    M68K_CMP32(g_m68k.d[6], 0x4300bcc6);
    /* TODO $0A69F0: dc.w $4300  [43 00] */
    /* WARNING: function did not end with RTS */
}

/* $0A69F2-$0A69F6  (1 instructions, 4 bytes) */
void jt_0A69F2(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    /* WARNING: function did not end with RTS */
}

/* $0A6A06-$0A6A12  (5 instructions, 12 bytes) */
void jt_0A6A06(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_CMP16(g_m68k.d[6], _predec16(2));
    /* TODO $0A6A0C: dc.w $4300  [43 00] */
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(g_m68k.d[3]));
    /* TODO $0A6A10: dc.w $4300  [43 00] */
    /* WARNING: function did not end with RTS */
}

/* $0A6A1A-$0A6A26  (5 instructions, 12 bytes) */
void jt_0A6A1A(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_CMP16(g_m68k.d[6], _predec16(2));
    /* TODO $0A6A20: dc.w $4300  [43 00] */
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(g_m68k.d[1]));
    /* TODO $0A6A24: dc.w $4300  [43 00] */
    /* WARNING: function did not end with RTS */
}

/* $0A6A2E-$0A6A42  (9 instructions, 20 bytes) */
void jt_0A6A2E(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_AND32(g_m68k.d[0], bus_read32(g_m68k.a[7]));
    /* TODO $0A6A34: dc.w $4300  [43 00] */
    M68K_AND32(g_m68k.d[0], _postinc32(3));
    /* TODO $0A6A38: dc.w $4300  [43 00] */
    M68K_AND32(g_m68k.d[0], _postinc32(0));
    /* TODO $0A6A3C: dc.w $4300  [43 00] */
    M68K_AND32(g_m68k.d[0], _postinc32(4));
    /* TODO $0A6A40: dc.w $4300  [43 00] */
    /* WARNING: function did not end with RTS */
}

/* $0A6A42-$0A6A56  (9 instructions, 20 bytes) */
void jt_0A6A42(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_AND32(g_m68k.d[0], _postinc32(1));
    /* TODO $0A6A48: dc.w $4300  [43 00] */
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(g_m68k.d[1]));
    /* TODO $0A6A4C: dc.w $4300  [43 00] */
    M68K_AND32(g_m68k.d[0], _postinc32(2));
    /* TODO $0A6A50: dc.w $4300  [43 00] */
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(g_m68k.d[2]));
    /* TODO $0A6A54: dc.w $4300  [43 00] */
    /* WARNING: function did not end with RTS */
}

/* $0A6A56-$0A6A6A  (8 instructions, 20 bytes) */
void jt_0A6A56(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_AND32(g_m68k.d[0], _postinc32(5));
    /* TODO $0A6A5C: dc.w $4300  [43 00] */
    M68K_AND32(g_m68k.d[0], _predec32(7));
    /* TODO $0A6A60: dc.w $4300  [43 00] */
    M68K_AND32(g_m68k.d[0], _postinc32(6));
    /* TODO $0A6A64: dc.w $4300  [43 00] */
    M68K_AND32(g_m68k.d[0], bus_read32(g_m68k.a[0] + 0x4300));
    /* WARNING: function did not end with RTS */
}

/* $0A6A6A-$0A6A7E  (6 instructions, 20 bytes) */
void jt_0A6A6A(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND32(g_m68k.d[0], bus_read32(g_m68k.a[1] + 0x4300));
    M68K_CMP16(g_m68k.d[6], _predec16(1));
    /* TODO $0A6A78: dc.w $4300  [43 00] */
    M68K_AND32(g_m68k.d[0], bus_read32(g_m68k.a[2] + 0x4300));
    /* WARNING: function did not end with RTS */
}

/* $0A6A7E-$0A6A92  (7 instructions, 20 bytes) */
void jt_0A6A7E(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_AND32(g_m68k.d[0], _postinc32(7));
    /* TODO $0A6A84: dc.w $4300  [43 00] */
    M68K_AND32(g_m68k.d[0], bus_read32(g_m68k.a[3] + 0x4300));
    M68K_AND32(g_m68k.d[0], _predec32(0));
    /* TODO $0A6A8C: dc.w $4300  [43 00] */
    M68K_AND32(g_m68k.d[0], bus_read32(g_m68k.a[4] + 0x4300));
    /* WARNING: function did not end with RTS */
}

/* $0A6A92-$0A6AA6  (7 instructions, 20 bytes) */
void jt_0A6A92(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_CMP16(g_m68k.d[6], _predec16(0));
    /* TODO $0A6A98: dc.w $4300  [43 00] */
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(g_m68k.d[7]));
    /* TODO $0A6A9C: dc.w $4300  [43 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND32(g_m68k.d[0], bus_read32(g_m68k.a[5] + 0x4300));
    /* WARNING: function did not end with RTS */
}

/* $0A6AA6-$0A6ABA  (7 instructions, 20 bytes) */
void jt_0A6AA6(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_AND32(g_m68k.d[0], _predec32(1));
    /* TODO $0A6AAC: dc.w $4300  [43 00] */
    M68K_AND32(g_m68k.d[0], bus_read32(g_m68k.a[6] + 0x4300));
    M68K_AND32(g_m68k.d[0], _predec32(2));
    /* TODO $0A6AB4: dc.w $4300  [43 00] */
    M68K_AND32(g_m68k.d[0], bus_read32(g_m68k.a[7] + 0x4300));
    /* WARNING: function did not end with RTS */
}

/* $0A6ABA-$0A6ACE  (7 instructions, 20 bytes) */
void jt_0A6ABA(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_AND32(g_m68k.d[0], _predec32(3));
    /* TODO $0A6AC0: dc.w $4300  [43 00] */
    M68K_AND32(g_m68k.d[0], bus_read32(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 2));
    M68K_AND32(g_m68k.d[0], _predec32(4));
    /* TODO $0A6AC8: dc.w $4300  [43 00] */
    M68K_AND32(g_m68k.d[0], bus_read32(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 2));
    /* WARNING: function did not end with RTS */
}

/* $0A6ACE-$0A6ADA  (4 instructions, 12 bytes) */
void jt_0A6ACE(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_AND32(g_m68k.d[0], _predec32(5));
    /* TODO $0A6AD4: dc.w $4300  [43 00] */
    M68K_AND32(g_m68k.d[0], bus_read32(g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 2));
    /* WARNING: function did not end with RTS */
}

/* $0A6AE2-$0A6AF6  (8 instructions, 20 bytes) */
void jt_0A6AE2(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_CMP16(g_m68k.d[6], _predec16(2));
    /* TODO $0A6AE8: dc.w $4300  [43 00] */
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(g_m68k.d[1]));
    /* TODO $0A6AEC: dc.w $4300  [43 00] */
    M68K_AND32(g_m68k.d[0], _predec32(6));
    /* TODO $0A6AF0: dc.w $4300  [43 00] */
    M68K_AND32(g_m68k.d[0], bus_read32(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 2));
    /* WARNING: function did not end with RTS */
}

/* $0A6AF6-$0A6B0C  (5 instructions, 22 bytes) */
void jt_0A6AF6(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_CMP32(g_m68k.d[6], /* UNHANDLED_READ: (a16, d4.w * 2) */ 0);
    M68K_AND32(g_m68k.d[0], /* UNHANDLED_READ: (a16, d4.w * 2) */ 0);
    M68K_AND32(g_m68k.d[0], bus_read32(g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 2));
    M68K_AND32(g_m68k.d[0], 0x43000002);
    /* WARNING: function did not end with RTS */
}

/* $0A6B0A-$0A6B1A  (7 instructions, 16 bytes) */
void jt_0A6B0A(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_OR8(g_m68k.d[2], 0x62);
    M68K_CMP16(g_m68k.d[6], _predec16(2));
    /* TODO $0A6B10: dc.w $4300  [43 00] */
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(g_m68k.d[1]));
    /* TODO $0A6B14: dc.w $4300  [43 00] */
    M68K_AND32(g_m68k.d[0], bus_read32(g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 2));
    /* WARNING: function did not end with RTS */
}
