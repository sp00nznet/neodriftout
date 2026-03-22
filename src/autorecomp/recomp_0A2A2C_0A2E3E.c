/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $0A2A2C - $0A2E3E */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

/* $0A2A2C-$0A2A3C  (4 instructions, 16 bytes) */
void jt_0A2A2C(void) {
    M68K_OR8(g_m68k.d[3], 0x1);
    M68K_ADD16(g_m68k.d[5], bus_read16(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 2));
    M68K_ADD16(g_m68k.d[5], bus_read16(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 2));
    M68K_ADD16(g_m68k.d[5], bus_read16(g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 2));
    /* WARNING: function did not end with RTS */
}

/* $0A2A3C-$0A2A44  (2 instructions, 8 bytes) */
void jt_0A2A3C(void) {
    M68K_OR8(g_m68k.d[3], 0x1);
    M68K_ADD16(g_m68k.d[5], bus_read16(g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 2));
    /* WARNING: function did not end with RTS */
}

/* $0A2A4C-$0A2A54  (2 instructions, 8 bytes) */
void jt_0A2A4C(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_ADD16(g_m68k.d[5], bus_read16(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 2));
    /* WARNING: function did not end with RTS */
}

/* $0A2A54-$0A2A5C  (3 instructions, 8 bytes) */
void jt_0A2A54(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_ADD16(g_m68k.d[5], _predec16(3));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $0A2A5C-$0A2A64  (2 instructions, 8 bytes) */
void jt_0A2A5C(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_ADD16(g_m68k.d[5], bus_read16(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 2));
    /* WARNING: function did not end with RTS */
}

/* $0A2A64-$0A2A6C  (2 instructions, 8 bytes) */
void jt_0A2A64(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_ADD16(g_m68k.d[5], bus_read16(g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 2));
    /* WARNING: function did not end with RTS */
}

/* $0A2A6C-$0A2A74  (2 instructions, 8 bytes) */
void jt_0A2A6C(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_ADD16(g_m68k.d[5], bus_read16(g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 2));
    /* WARNING: function did not end with RTS */
}

/* $0A2A74-$0A2A7C  (2 instructions, 8 bytes) */
void jt_0A2A74(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_ADD16(g_m68k.d[5], bus_read16(g_m68k.a[6] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 2));
    /* WARNING: function did not end with RTS */
}

/* $0A2A7C-$0A2A84  (2 instructions, 8 bytes) */
void jt_0A2A7C(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_ADD16(g_m68k.d[5], bus_read16(g_m68k.a[7] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 2));
    /* WARNING: function did not end with RTS */
}

/* $0A2A84-$0A2A8C  (2 instructions, 8 bytes) */
void jt_0A2A84(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_ADD16(g_m68k.d[5], bus_read16(0x004200));
    /* WARNING: function did not end with RTS */
}

/* $0A2A8C-$0A2A96  (2 instructions, 10 bytes) */
void jt_0A2A8C(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_ADD16(g_m68k.d[5], bus_read16(0x42000001));
    /* WARNING: function did not end with RTS */
}

/* $0A2A94-$0A2A9C  (4 instructions, 8 bytes) */
void jt_0A2A94(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_OR8(g_m68k.d[1], 0x7a);
    M68K_ADD16(g_m68k.d[5], bus_read16(0xa6c9a));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $0A2A9C-$0A2AA4  (2 instructions, 8 bytes) */
void jt_0A2A9C(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_ADD16(g_m68k.d[5], bus_read16(0xa2aa2 + (int16_t)(uint16_t)g_m68k.d[4] * 2));
    /* WARNING: function did not end with RTS */
}

/* $0A2AA4-$0A2AAC  (2 instructions, 8 bytes) */
void jt_0A2AA4(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_ADD16(g_m68k.d[5], 0x4200);
    /* WARNING: function did not end with RTS */
}

/* $0A2AAC-$0A2AB4  (2 instructions, 8 bytes) */
void jt_0A2AAC(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0A2B8A-$0A2BB6  (21 instructions, 44 bytes) */
void jt_0A2B8A(void) {
    M68K_OR8(g_m68k.d[5], 0x2);
    M68K_CMP16(g_m68k.d[6], g_m68k.d[6]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP16(g_m68k.d[6], bus_read16(g_m68k.a[0]));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP16(g_m68k.d[6], g_m68k.d[7]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP16(g_m68k.d[6], bus_read16(g_m68k.a[1]));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP16(g_m68k.d[6], g_m68k.a[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP16(g_m68k.d[6], bus_read16(g_m68k.a[2]));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP16(g_m68k.d[6], g_m68k.a[1]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP16(g_m68k.d[6], bus_read16(g_m68k.a[3]));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP16(g_m68k.d[6], g_m68k.a[2]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP16(g_m68k.d[6], bus_read16(g_m68k.a[4]));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $0A2BB6-$0A2BE2  (21 instructions, 44 bytes) */
void jt_0A2BB6(void) {
    M68K_OR8(g_m68k.d[5], 0x2);
    M68K_CMP16(g_m68k.d[6], g_m68k.a[3]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP16(g_m68k.d[6], bus_read16(g_m68k.a[5]));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP16(g_m68k.d[6], g_m68k.a[4]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP16(g_m68k.d[6], bus_read16(g_m68k.a[6]));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP16(g_m68k.d[6], g_m68k.a[5]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP16(g_m68k.d[6], bus_read16(g_m68k.a[7]));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP16(g_m68k.d[6], g_m68k.a[6]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP16(g_m68k.d[6], _postinc16(0));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP16(g_m68k.d[6], g_m68k.a[7]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP16(g_m68k.d[6], _postinc16(1));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $0A2C26-$0A2C3A  (9 instructions, 20 bytes) */
void jt_0A2C26(void) {
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

/* $0A2C3A-$0A2C4E  (7 instructions, 20 bytes) */
void jt_0A2C3A(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_CMP16(g_m68k.d[6], _postinc16(4));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP16(g_m68k.d[6], bus_read16(g_m68k.a[0] + 0x4200));
    M68K_CMP16(g_m68k.d[6], _postinc16(5));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP16(g_m68k.d[6], bus_read16(g_m68k.a[1] + 0x4200));
    /* WARNING: function did not end with RTS */
}

/* $0A2C4E-$0A2C62  (7 instructions, 20 bytes) */
void jt_0A2C4E(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_CMP16(g_m68k.d[6], _postinc16(6));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP16(g_m68k.d[6], bus_read16(g_m68k.a[2] + 0x4200));
    M68K_CMP16(g_m68k.d[6], _postinc16(7));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP16(g_m68k.d[6], bus_read16(g_m68k.a[3] + 0x4200));
    /* WARNING: function did not end with RTS */
}

/* $0A2C62-$0A2C76  (7 instructions, 20 bytes) */
void jt_0A2C62(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_CMP16(g_m68k.d[6], _predec16(0));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP16(g_m68k.d[6], bus_read16(g_m68k.a[4] + 0x4200));
    M68K_CMP16(g_m68k.d[6], _predec16(1));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP16(g_m68k.d[6], bus_read16(g_m68k.a[5] + 0x4200));
    /* WARNING: function did not end with RTS */
}

/* $0A2C76-$0A2C8A  (7 instructions, 20 bytes) */
void jt_0A2C76(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_CMP16(g_m68k.d[6], _predec16(2));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP16(g_m68k.d[6], bus_read16(g_m68k.a[6] + 0x4200));
    M68K_CMP16(g_m68k.d[6], _predec16(3));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP16(g_m68k.d[6], bus_read16(g_m68k.a[7] + 0x4200));
    /* WARNING: function did not end with RTS */
}

/* $0A2C8A-$0A2C9E  (7 instructions, 20 bytes) */
void jt_0A2C8A(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_CMP16(g_m68k.d[6], _predec16(4));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP16(g_m68k.d[6], bus_read16(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 2));
    M68K_CMP16(g_m68k.d[6], _predec16(5));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP16(g_m68k.d[6], bus_read16(g_m68k.a[7] + 0x4200));
    /* WARNING: function did not end with RTS */
}

/* $0A2CCA-$0A2CD2  (3 instructions, 8 bytes) */
void jt_0A2CCA(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_CMP32(g_m68k.d[6], g_m68k.a[7]);
    /* TODO $0A2CD0: dc.w $4300  [43 00] */
    /* WARNING: function did not end with RTS */
}

/* $0A2CD2-$0A2CDA  (3 instructions, 8 bytes) */
void jt_0A2CD2(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_CMP32(g_m68k.d[6], bus_read32(g_m68k.a[0]));
    /* TODO $0A2CD8: dc.w $4300  [43 00] */
    /* WARNING: function did not end with RTS */
}

/* $0A2CDA-$0A2CE2  (3 instructions, 8 bytes) */
void jt_0A2CDA(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_CMP32(g_m68k.d[6], bus_read32(g_m68k.a[1]));
    /* TODO $0A2CE0: dc.w $4300  [43 00] */
    /* WARNING: function did not end with RTS */
}

/* $0A2CE2-$0A2CEA  (3 instructions, 8 bytes) */
void jt_0A2CE2(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_CMP32(g_m68k.d[6], bus_read32(g_m68k.a[2]));
    /* TODO $0A2CE8: dc.w $4300  [43 00] */
    /* WARNING: function did not end with RTS */
}

/* $0A2CEA-$0A2CF2  (3 instructions, 8 bytes) */
void jt_0A2CEA(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_CMP32(g_m68k.d[6], bus_read32(g_m68k.a[3]));
    /* TODO $0A2CF0: dc.w $4300  [43 00] */
    /* WARNING: function did not end with RTS */
}

/* $0A2CF2-$0A2CFA  (3 instructions, 8 bytes) */
void jt_0A2CF2(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_CMP32(g_m68k.d[6], bus_read32(g_m68k.a[4]));
    /* TODO $0A2CF8: dc.w $4300  [43 00] */
    /* WARNING: function did not end with RTS */
}

/* $0A2CFA-$0A2D02  (3 instructions, 8 bytes) */
void jt_0A2CFA(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_CMP32(g_m68k.d[6], bus_read32(g_m68k.a[5]));
    /* TODO $0A2D00: dc.w $4300  [43 00] */
    /* WARNING: function did not end with RTS */
}

/* $0A2D02-$0A2D0A  (3 instructions, 8 bytes) */
void jt_0A2D02(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_CMP32(g_m68k.d[6], bus_read32(g_m68k.a[6]));
    /* TODO $0A2D08: dc.w $4300  [43 00] */
    /* WARNING: function did not end with RTS */
}

/* $0A2D0A-$0A2D12  (3 instructions, 8 bytes) */
void jt_0A2D0A(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_CMP32(g_m68k.d[6], bus_read32(g_m68k.a[7]));
    /* TODO $0A2D10: dc.w $4300  [43 00] */
    /* WARNING: function did not end with RTS */
}

/* $0A2D12-$0A2D1A  (3 instructions, 8 bytes) */
void jt_0A2D12(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_CMP32(g_m68k.d[6], _postinc32(0));
    /* TODO $0A2D18: dc.w $4300  [43 00] */
    /* WARNING: function did not end with RTS */
}

/* $0A2D1A-$0A2D22  (3 instructions, 8 bytes) */
void jt_0A2D1A(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    /* TODO $0A2D1E: abcd.b -(a1), -(a0)  [C1 09] */
    /* TODO $0A2D20: dc.w $4300  [43 00] */
    /* WARNING: function did not end with RTS */
}

/* $0A2D22-$0A2D2A  (3 instructions, 8 bytes) */
void jt_0A2D22(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    /* TODO $0A2D26: abcd.b -(a5), -(a0)  [C1 0D] */
    /* TODO $0A2D28: dc.w $4300  [43 00] */
    /* WARNING: function did not end with RTS */
}

/* $0A2D2A-$0A2D32  (3 instructions, 8 bytes) */
void jt_0A2D2A(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_CMP32(g_m68k.d[6], g_m68k.a[7]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $0A2D32-$0A2D3A  (3 instructions, 8 bytes) */
void jt_0A2D32(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_CMP32(g_m68k.d[6], bus_read32(g_m68k.a[0]));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $0A2D3A-$0A2D42  (3 instructions, 8 bytes) */
void jt_0A2D3A(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_CMP32(g_m68k.d[6], bus_read32(g_m68k.a[1]));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $0A2D42-$0A2D4A  (3 instructions, 8 bytes) */
void jt_0A2D42(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_CMP32(g_m68k.d[6], bus_read32(g_m68k.a[2]));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $0A2D4A-$0A2D52  (3 instructions, 8 bytes) */
void jt_0A2D4A(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_CMP32(g_m68k.d[6], bus_read32(g_m68k.a[3]));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $0A2D52-$0A2D5A  (3 instructions, 8 bytes) */
void jt_0A2D52(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_CMP32(g_m68k.d[6], bus_read32(g_m68k.a[4]));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $0A2D5A-$0A2D62  (3 instructions, 8 bytes) */
void jt_0A2D5A(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_CMP32(g_m68k.d[6], bus_read32(g_m68k.a[5]));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $0A2D62-$0A2D6A  (3 instructions, 8 bytes) */
void jt_0A2D62(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_CMP32(g_m68k.d[6], bus_read32(g_m68k.a[6]));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $0A2D6A-$0A2D72  (3 instructions, 8 bytes) */
void jt_0A2D6A(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_CMP32(g_m68k.d[6], bus_read32(g_m68k.a[7]));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $0A2D72-$0A2D7A  (3 instructions, 8 bytes) */
void jt_0A2D72(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_CMP32(g_m68k.d[6], _postinc32(0));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $0A2D7A-$0A2D82  (3 instructions, 8 bytes) */
void jt_0A2D7A(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    /* TODO $0A2D7E: abcd.b -(a1), -(a0)  [C1 09] */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $0A2D82-$0A2D8A  (3 instructions, 8 bytes) */
void jt_0A2D82(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    /* TODO $0A2D86: abcd.b -(a5), -(a0)  [C1 0D] */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $0A2E02-$0A2E16  (8 instructions, 20 bytes) */
void jt_0A2E02(void) {
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

/* $0A2E16-$0A2E2A  (6 instructions, 20 bytes) */
void jt_0A2E16(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_CMP32(g_m68k.d[6], bus_read32(0x004200));
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(g_m68k.d[1]));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP32(g_m68k.d[6], bus_read32(0x4200BCC2));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $0A2E2A-$0A2E3E  (8 instructions, 20 bytes) */
void jt_0A2E2A(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_CMP16(g_m68k.d[6], _predec16(2));
    M68K_NEG8(g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(g_m68k.d[3]));
    M68K_NEG8(g_m68k.d[0]);
    M68K_CMP32(g_m68k.d[6], bus_read32(0xa7238));
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(g_m68k.d[4]));
    M68K_NEG8(g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}
