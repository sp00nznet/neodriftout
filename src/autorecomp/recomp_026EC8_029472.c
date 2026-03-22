/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $026EC8 - $029472 */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

/* $026EC8-$026ED4  (3 instructions, 12 bytes) */
void jt_026EC8(void) {
    M68K_OR8(g_m68k.d[1], 0xf);
    M68K_OR8(g_m68k.d[1], 0x5);
    M68K_OR8(g_m68k.d[1], 0x5);
    /* WARNING: function did not end with RTS */
}

/* $026ED6-$026EDE  (2 instructions, 8 bytes) */
void jt_026ED6(void) {
    M68K_OR8(g_m68k.d[2], 0xf);
    M68K_OR8(g_m68k.d[5], 0x2);
    /* WARNING: function did not end with RTS */
}

/* $027060-$02712E  (40 instructions, 206 bytes) */
void jt_027060(void) {
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[7] + 0x37393830 + (int16_t)(uint16_t)g_m68k.d[3] * 8)); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[1] + 0x32 + (int32_t)g_m68k.d[3]))); M68K_TST16((uint16_t)g_m68k.d[4]);
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[3] + 0x34 + (int32_t)g_m68k.d[3]))); M68K_TST16((uint16_t)g_m68k.d[4]);
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[5] + 0x36 + (int32_t)g_m68k.d[3]))); M68K_TST16((uint16_t)g_m68k.d[4]);
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[7] + 0x38 + (int32_t)g_m68k.d[3]))); M68K_TST16((uint16_t)g_m68k.d[4]);
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x39303931))); M68K_TST16((uint16_t)g_m68k.d[4]);
    { uint16_t _mv = (uint16_t)(/* UNHANDLED_READ: ([$39343935, a2, d3.l], $aaaaaaaa) */ 0); g_m68k.a[4] -= 2; bus_write16(g_m68k.a[4], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[7] + 0x39393030 + (int32_t)g_m68k.d[3])); g_m68k.a[4] -= 2; bus_write16(g_m68k.a[4], _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[2] + 0x33 + (int16_t)(uint16_t)g_m68k.d[3]))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[5] + 0x37 + (int16_t)(uint16_t)g_m68k.d[3]))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x003130))); M68K_TST16((uint16_t)g_m68k.d[0]);
    { uint16_t _mv = (uint16_t)(/* UNHANDLED_READ: ([$31353137, a2, d3.w], $aaaaaaaa) */ 0); g_m68k.a[0] -= 2; bus_write16(g_m68k.a[0], _mv); M68K_TST16(_mv); }
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[0] + 0x32 + (int16_t)(uint16_t)g_m68k.d[3]))); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[3] + 0x35 + (int16_t)(uint16_t)g_m68k.d[3]))); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[7] + 0x38 + (int16_t)(uint16_t)g_m68k.d[3]))); M68K_TST16((uint16_t)g_m68k.d[1]);
    { uint16_t _mv = (uint16_t)(/* UNHANDLED_READ: ([$33333335, a0, d3.w * 2], $3337) */ 0); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(0x003430)); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[2] + 0x33 + (int16_t)(uint16_t)g_m68k.d[3]))); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[5] + 0x37 + (int16_t)(uint16_t)g_m68k.d[3]))); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x003530))); M68K_TST16((uint16_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(/* UNHANDLED_READ: ([$35353537, a2, d3.w * 4], $aaaaaaaa) */ 0); g_m68k.a[2] -= 2; bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[0] + 0x32 + (int16_t)(uint16_t)g_m68k.d[3]))); M68K_TST16((uint16_t)g_m68k.d[3]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[3] + 0x35 + (int16_t)(uint16_t)g_m68k.d[3]))); M68K_TST16((uint16_t)g_m68k.d[3]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[7] + 0x38 + (int16_t)(uint16_t)g_m68k.d[3]))); M68K_TST16((uint16_t)g_m68k.d[3]);
    { uint16_t _mv = (uint16_t)(/* UNHANDLED_READ: ([$37333735, a0, d3.w * 8], $3737) */ 0); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(0x003830)); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[2] + 0x33 + (int32_t)g_m68k.d[3]))); M68K_TST16((uint16_t)g_m68k.d[4]);
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[5] + 0x37 + (int32_t)g_m68k.d[3]))); M68K_TST16((uint16_t)g_m68k.d[4]);
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x003930))); M68K_TST16((uint16_t)g_m68k.d[4]);
    { uint16_t _mv = (uint16_t)(/* UNHANDLED_READ: ([$39353937, a2, d3.l], $aaaaaaaa) */ 0); g_m68k.a[4] -= 2; bus_write16(g_m68k.a[4], _mv); M68K_TST16(_mv); }
    M68K_OR8(g_m68k.d[2], 0x2e);
    M68K_OR8(g_m68k.d[2], 0x42);
    M68K_OR8(g_m68k.d[2], 0x56);
    M68K_OR8(g_m68k.d[2], 0x6a);
    M68K_OR8(g_m68k.d[2], 0x7e);
    M68K_OR8(g_m68k.d[2], 0x92);
    M68K_OR8(g_m68k.d[2], 0xa6);
    M68K_OR8(g_m68k.d[2], 0xba);
    M68K_OR8(g_m68k.d[2], 0xce);
    M68K_OR8(g_m68k.d[2], 0xe2);
    /* WARNING: function did not end with RTS */
}

/* $02712E-$027142  (8 instructions, 20 bytes) */
void jt_02712E(void) {
    M68K_OR8(g_m68k.d[2], 0x4);
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[2], g_m68k.d[1]);
    M68K_OR8(g_m68k.d[2], bus_read8(g_m68k.a[0]));
    M68K_OR8(g_m68k.d[2], bus_read8(g_m68k.a[1]));
    M68K_OR8(g_m68k.d[2], _predec8(0));
    M68K_OR8(g_m68k.d[2], _predec8(1));
    M68K_OR8(g_m68k.d[2], bus_read8(g_m68k.a[0] + 0x31 + (int16_t)(uint16_t)g_m68k.a[0]));
    /* WARNING: function did not end with RTS */
}

/* $027142-$027156  (8 instructions, 20 bytes) */
void jt_027142(void) {
    M68K_OR8(g_m68k.d[2], 0x4);
    M68K_OR8(g_m68k.d[2], g_m68k.d[2]);
    M68K_OR8(g_m68k.d[2], g_m68k.d[3]);
    M68K_OR8(g_m68k.d[2], bus_read8(g_m68k.a[2]));
    M68K_OR8(g_m68k.d[2], bus_read8(g_m68k.a[3]));
    M68K_OR8(g_m68k.d[2], _predec8(2));
    M68K_OR8(g_m68k.d[2], _predec8(3));
    M68K_OR8(g_m68k.d[2], bus_read8(g_m68k.a[2] + 0x33 + (int16_t)(uint16_t)g_m68k.a[0]));
    /* WARNING: function did not end with RTS */
}

/* $027156-$02716A  (8 instructions, 20 bytes) */
void jt_027156(void) {
    M68K_OR8(g_m68k.d[2], 0x4);
    M68K_OR8(g_m68k.d[2], g_m68k.d[4]);
    M68K_OR8(g_m68k.d[2], g_m68k.d[5]);
    M68K_OR8(g_m68k.d[2], bus_read8(g_m68k.a[4]));
    M68K_OR8(g_m68k.d[2], bus_read8(g_m68k.a[5]));
    M68K_OR8(g_m68k.d[2], _predec8(4));
    M68K_OR8(g_m68k.d[2], _predec8(5));
    M68K_OR8(g_m68k.d[2], bus_read8(g_m68k.a[4] + 0x35 + (int16_t)(uint16_t)g_m68k.a[0]));
    /* WARNING: function did not end with RTS */
}

/* $02716A-$02717E  (8 instructions, 20 bytes) */
void jt_02716A(void) {
    M68K_OR8(g_m68k.d[2], 0x4);
    M68K_OR8(g_m68k.d[2], g_m68k.d[6]);
    M68K_OR8(g_m68k.d[2], g_m68k.d[7]);
    M68K_OR8(g_m68k.d[2], bus_read8(g_m68k.a[6]));
    M68K_OR8(g_m68k.d[2], bus_read8(g_m68k.a[7]));
    M68K_OR8(g_m68k.d[2], _predec8(6));
    M68K_OR8(g_m68k.d[2], _predec8(7));
    M68K_OR8(g_m68k.d[2], bus_read8(g_m68k.a[6] + 0x37 + (int16_t)(uint16_t)g_m68k.a[0]));
    /* WARNING: function did not end with RTS */
}

/* $02717E-$027182  (1 instructions, 4 bytes) */
void jt_02717E(void) {
    M68K_OR8(g_m68k.d[2], 0x4);
    /* WARNING: function did not end with RTS */
}

/* $027192-$027196  (1 instructions, 4 bytes) */
void jt_027192(void) {
    M68K_OR8(g_m68k.d[2], 0x4);
    /* WARNING: function did not end with RTS */
}

/* $0271A6-$0271AA  (1 instructions, 4 bytes) */
void jt_0271A6(void) {
    M68K_OR8(g_m68k.d[2], 0x4);
    /* WARNING: function did not end with RTS */
}

/* $0271BA-$0271BE  (1 instructions, 4 bytes) */
void jt_0271BA(void) {
    M68K_OR8(g_m68k.d[2], 0x4);
    /* WARNING: function did not end with RTS */
}

/* $0271CE-$0271E2  (8 instructions, 20 bytes) */
void jt_0271CE(void) {
    M68K_OR8(g_m68k.d[2], 0x4);
    M68K_OR16(g_m68k.d[2], g_m68k.d[0]);
    M68K_OR16(g_m68k.d[2], g_m68k.d[1]);
    M68K_OR16(g_m68k.d[2], bus_read16(g_m68k.a[0]));
    M68K_OR16(g_m68k.d[2], bus_read16(g_m68k.a[1]));
    M68K_OR16(g_m68k.d[2], _predec16(0));
    M68K_OR16(g_m68k.d[2], _predec16(1));
    M68K_OR16(g_m68k.d[2], bus_read16(g_m68k.a[0] + 0x71 + (int16_t)(uint16_t)g_m68k.a[0]));
    /* WARNING: function did not end with RTS */
}

/* $0271E2-$02721E  (18 instructions, 60 bytes) */
void jt_0271E2(void) {
    M68K_OR8(g_m68k.d[2], 0x4);
    M68K_OR16(g_m68k.d[2], g_m68k.d[2]);
    M68K_OR16(g_m68k.d[2], g_m68k.d[3]);
    M68K_OR16(g_m68k.d[2], bus_read16(g_m68k.a[2]));
    M68K_OR16(g_m68k.d[2], bus_read16(g_m68k.a[3]));
    M68K_OR16(g_m68k.d[2], _predec16(2));
    M68K_OR16(g_m68k.d[2], _predec16(3));
    M68K_OR16(g_m68k.d[2], bus_read16(g_m68k.a[2] + 0x73 + (int16_t)(uint16_t)g_m68k.a[0]));
    M68K_OR8(g_m68k.d[2], 0x1e);
    M68K_OR8(g_m68k.d[2], 0x2a);
    M68K_OR8(g_m68k.d[2], 0x36);
    M68K_OR8(g_m68k.d[2], 0x42);
    M68K_OR8(g_m68k.d[2], 0x4e);
    M68K_OR8(g_m68k.d[2], 0x5a);
    M68K_OR8(g_m68k.d[2], 0x66);
    M68K_OR8(g_m68k.d[2], 0x72);
    M68K_OR8(g_m68k.d[2], 0x7e);
    M68K_OR8(g_m68k.d[2], 0x8a);
    /* WARNING: function did not end with RTS */
}

/* $02721E-$02722A  (5 instructions, 12 bytes) */
void jt_02721E(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_OR16(g_m68k.d[2], g_m68k.d[4]);
    M68K_OR16(g_m68k.d[2], g_m68k.d[5]);
    M68K_OR16(g_m68k.d[2], bus_read16(g_m68k.a[4]));
    M68K_OR16(g_m68k.d[2], bus_read16(g_m68k.a[5]));
    /* WARNING: function did not end with RTS */
}

/* $02722A-$027236  (5 instructions, 12 bytes) */
void jt_02722A(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_OR16(g_m68k.d[2], g_m68k.d[6]);
    M68K_OR16(g_m68k.d[2], g_m68k.d[7]);
    M68K_OR16(g_m68k.d[2], bus_read16(g_m68k.a[6]));
    M68K_OR16(g_m68k.d[2], bus_read16(g_m68k.a[7]));
    /* WARNING: function did not end with RTS */
}

/* $027236-$02723A  (1 instructions, 4 bytes) */
void jt_027236(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    /* WARNING: function did not end with RTS */
}

/* $027242-$027246  (1 instructions, 4 bytes) */
void jt_027242(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    /* WARNING: function did not end with RTS */
}

/* $02724E-$027252  (1 instructions, 4 bytes) */
void jt_02724E(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    /* WARNING: function did not end with RTS */
}

/* $02725A-$02725E  (1 instructions, 4 bytes) */
void jt_02725A(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    /* WARNING: function did not end with RTS */
}

/* $027266-$027272  (4 instructions, 12 bytes) */
void jt_027266(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_OR16(g_m68k.d[2], _predec16(4));
    M68K_OR16(g_m68k.d[2], _predec16(5));
    M68K_OR16(g_m68k.d[2], bus_read16(g_m68k.a[4] + 0x75 + (int16_t)(uint16_t)g_m68k.a[0]));
    /* WARNING: function did not end with RTS */
}

/* $027272-$02727E  (4 instructions, 12 bytes) */
void jt_027272(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_OR16(g_m68k.d[2], _predec16(6));
    M68K_OR16(g_m68k.d[2], _predec16(7));
    M68K_OR16(g_m68k.d[2], bus_read16(g_m68k.a[6] + 0x77 + (int16_t)(uint16_t)g_m68k.a[0]));
    /* WARNING: function did not end with RTS */
}

/* $02727E-$02728A  (3 instructions, 12 bytes) */
void jt_02727E(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_OR16(g_m68k.d[2], bus_read16(g_m68k.a[0] + (-0x7b97)));
    M68K_OR16(g_m68k.d[2], bus_read16(0x008479));
    /* WARNING: function did not end with RTS */
}

/* $02728A-$0272FA  (28 instructions, 112 bytes) */
void jt_02728A(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_OR16(g_m68k.d[2], bus_read16(g_m68k.a[2] + (-0x7b95)));
    M68K_OR16(g_m68k.d[2], bus_read16(0x1f70f));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x4);
    /* WARNING: function did not end with RTS */
}

/* $027742-$027752  (6 instructions, 16 bytes) */
void jt_027742(void) {
    M68K_OR8(g_m68k.d[2], 0x3);
    M68K_ADD32(g_m68k.d[2], _predec32(2));
    M68K_ADD32(g_m68k.d[2], _predec32(3));
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[2] + (-0x4d) + (int16_t)(uint16_t)g_m68k.a[5]));
    g_m68k.a[2] += (int16_t)(uint16_t)(g_m68k.d[2]);
    g_m68k.a[2] += (int16_t)(uint16_t)(g_m68k.d[3]);
    /* WARNING: function did not end with RTS */
}

/* $027752-$027762  (6 instructions, 16 bytes) */
void jt_027752(void) {
    M68K_OR8(g_m68k.d[2], 0x3);
    M68K_ADD32(g_m68k.d[2], _predec32(4));
    M68K_ADD32(g_m68k.d[2], _predec32(5));
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[4] + (-0x4b) + (int16_t)(uint16_t)g_m68k.a[5]));
    g_m68k.a[2] += (int16_t)(uint16_t)(g_m68k.d[4]);
    g_m68k.a[2] += (int16_t)(uint16_t)(g_m68k.d[5]);
    /* WARNING: function did not end with RTS */
}

/* $027762-$027772  (6 instructions, 16 bytes) */
void jt_027762(void) {
    M68K_OR8(g_m68k.d[2], 0x3);
    M68K_ADD32(g_m68k.d[2], _predec32(6));
    M68K_ADD32(g_m68k.d[2], _predec32(7));
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[6] + (-0x49) + (int16_t)(uint16_t)g_m68k.a[5]));
    g_m68k.a[2] += (int16_t)(uint16_t)(g_m68k.d[6]);
    g_m68k.a[2] += (int16_t)(uint16_t)(g_m68k.d[7]);
    /* WARNING: function did not end with RTS */
}

/* $027772-$027782  (5 instructions, 16 bytes) */
void jt_027772(void) {
    M68K_OR8(g_m68k.d[2], 0x3);
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[0] + (-0x2b57)));
    M68K_ADD32(g_m68k.d[2], bus_read32(0x00D4B9));
    g_m68k.a[2] += (int16_t)(uint16_t)(g_m68k.a[0]);
    g_m68k.a[2] += (int16_t)(uint16_t)(g_m68k.a[1]);
    /* WARNING: function did not end with RTS */
}

/* $027782-$027792  (5 instructions, 16 bytes) */
void jt_027782(void) {
    M68K_OR8(g_m68k.d[2], 0x3);
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[2] + (-0x2b55)));
    M68K_ADD32(g_m68k.d[2], bus_read32(0x24c47));
    g_m68k.a[2] += (int16_t)(uint16_t)(g_m68k.a[2]);
    g_m68k.a[2] += (int16_t)(uint16_t)(g_m68k.a[3]);
    /* WARNING: function did not end with RTS */
}

/* $027792-$0277A2  (4 instructions, 16 bytes) */
void jt_027792(void) {
    M68K_OR8(g_m68k.d[2], 0x3);
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[4] + (-0x2b53)));
    M68K_ADD32(g_m68k.d[2], 0xd4bdd4cc);
    g_m68k.a[2] += (int16_t)(uint16_t)(g_m68k.a[5]);
    /* WARNING: function did not end with RTS */
}

/* $0277A2-$0277AA  (2 instructions, 8 bytes) */
void jt_0277A2(void) {
    M68K_OR8(g_m68k.d[2], 0x3);
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[6] + (-0x2b51)));
    /* WARNING: function did not end with RTS */
}

/* $0277B2-$0277C2  (6 instructions, 16 bytes) */
void jt_0277B2(void) {
    M68K_OR8(g_m68k.d[2], 0x3);
    g_m68k.a[2] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[0]));
    g_m68k.a[2] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[1]));
    g_m68k.a[2] += (int16_t)(uint16_t)(_predec16(0));
    g_m68k.a[2] += (int16_t)(uint16_t)(_predec16(1));
    g_m68k.a[2] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[0] + (-0xf) + (int16_t)(uint16_t)g_m68k.a[5]));
    /* WARNING: function did not end with RTS */
}

/* $0277C2-$0277D2  (6 instructions, 16 bytes) */
void jt_0277C2(void) {
    M68K_OR8(g_m68k.d[2], 0x3);
    g_m68k.a[2] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[2]));
    g_m68k.a[2] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[3]));
    g_m68k.a[2] += (int16_t)(uint16_t)(_predec16(2));
    g_m68k.a[2] += (int16_t)(uint16_t)(_predec16(3));
    g_m68k.a[2] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[2] + (-0xd) + (int16_t)(uint16_t)g_m68k.a[5]));
    /* WARNING: function did not end with RTS */
}

/* $0277D2-$0277E2  (6 instructions, 16 bytes) */
void jt_0277D2(void) {
    M68K_OR8(g_m68k.d[2], 0x3);
    g_m68k.a[2] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[4]));
    g_m68k.a[2] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[5]));
    g_m68k.a[2] += (int16_t)(uint16_t)(_predec16(4));
    g_m68k.a[2] += (int16_t)(uint16_t)(_predec16(5));
    g_m68k.a[2] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[4] + (-0xb) + (int16_t)(uint16_t)g_m68k.a[5]));
    /* WARNING: function did not end with RTS */
}

/* $0277E2-$0277FE  (10 instructions, 28 bytes) */
void jt_0277E2(void) {
    M68K_OR8(g_m68k.d[2], 0x3);
    M68K_ADD32(g_m68k.d[2], _predec32(0));
    M68K_ADD32(g_m68k.d[2], _predec32(1));
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[0] + (-0x4f) + (int16_t)(uint16_t)g_m68k.a[5]));
    g_m68k.a[2] += (int16_t)(uint16_t)(g_m68k.d[0]);
    g_m68k.a[2] += (int16_t)(uint16_t)(g_m68k.d[1]);
    M68K_OR8(g_m68k.d[2], 0x2);
    g_m68k.a[2] += (int16_t)(uint16_t)(_predec16(6));
    g_m68k.a[2] += (int16_t)(uint16_t)(_predec16(7));
    g_m68k.a[2] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[6] + (-0x9) + (int16_t)(uint16_t)g_m68k.a[5]));
    /* WARNING: function did not end with RTS */
}

/* $027872-$027882  (4 instructions, 16 bytes) */
void jt_027872(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    { uint32_t _ea = g_m68k.a[0]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[3]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[1]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[3]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = /* UNHANDLED_ADDR: ([$20002, a5.w * 8]) */ 0; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[3]); bus_write32(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $02787E-$027890  (4 instructions, 18 bytes) */
void jt_02787E(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    { uint32_t _ea = g_m68k.a[2]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[3]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[3]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = /* UNHANDLED_ADDR: ([$20002, a5.w * 8], $aaaaaaaa) */ 0; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[3]); bus_write32(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $02788A-$02789A  (4 instructions, 16 bytes) */
void jt_02788A(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    { uint32_t _ea = g_m68k.a[4]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[3]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[5]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[3]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = /* UNHANDLED_ADDR: ([$20002], a5.w * 8) */ 0; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[3]); bus_write32(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $027896-$0278A8  (4 instructions, 18 bytes) */
void jt_027896(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    { uint32_t _ea = g_m68k.a[6]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[3]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[7]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[3]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = /* UNHANDLED_ADDR: ([$20002], a5.w * 8, $aaaaaaaa) */ 0; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[3]); bus_write32(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0278A2-$0278B2  (5 instructions, 16 bytes) */
void jt_0278A2(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    { uint32_t _ea = (g_m68k.a[0] + (-0x2857)); uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[3]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[1] + (-0x2848)); uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[3]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = 0x00D7B9; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[3]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = 0x020002; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[3]); bus_write32(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0278AE-$0278B6  (2 instructions, 8 bytes) */
void jt_0278AE(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    { uint32_t _ea = (g_m68k.a[2] + (-0x2855)); uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[3]); bus_write32(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0278BA-$0278C2  (2 instructions, 8 bytes) */
void jt_0278BA(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    { uint32_t _ea = (g_m68k.a[2] + (-0x2855)); uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[3]); bus_write32(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $028858-$02886A  (3 instructions, 18 bytes) */
void jt_028858(void) {
    { uint32_t _ea = g_m68k.a[3]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, 0x6840685); bus_write32(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[4]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, 0x6950686); bus_write32(_ea, _tmp); }
    M68K_ADD32(g_m68k.d[7], 0x6960697);
    /* WARNING: function did not end with RTS */
}

/* $028A52-$028B70  (99 instructions, 286 bytes) */
void sub_028A52(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_BTST(g_m68k.d[1], g_m68k.d[0]);
    M68K_BTST(g_m68k.d[1], g_m68k.d[0]);
    M68K_BTST(g_m68k.d[1], g_m68k.d[0]);
    M68K_BTST(g_m68k.d[1], g_m68k.d[0]);
    M68K_BTST(g_m68k.d[1], g_m68k.d[0]);
    M68K_BTST(g_m68k.d[1], g_m68k.d[0]);
    M68K_BTST(g_m68k.d[1], g_m68k.d[0]);
    M68K_BTST(g_m68k.d[1], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_BTST(g_m68k.d[1], g_m68k.d[0]);
    M68K_BTST(g_m68k.d[1], g_m68k.d[0]);
    M68K_BTST(g_m68k.d[1], g_m68k.d[0]);
    M68K_BTST(g_m68k.d[1], g_m68k.d[0]);
    M68K_BTST(g_m68k.d[1], g_m68k.d[0]);
    M68K_BTST(g_m68k.d[1], g_m68k.d[0]);
    M68K_BTST(g_m68k.d[1], g_m68k.d[0]);
    M68K_BTST(g_m68k.d[1], g_m68k.d[0]);
    M68K_AND8(g_m68k.d[2], 0x2);
    M68K_AND8(g_m68k.d[2], 0x2);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x1);
    M68K_BTST(g_m68k.d[1], g_m68k.d[0]);
    M68K_BTST(g_m68k.d[1], g_m68k.d[0]);
    M68K_BTST(g_m68k.d[1], g_m68k.d[0]);
    M68K_BTST(g_m68k.d[1], g_m68k.d[0]);
    M68K_AND8(g_m68k.d[2], 0x2);
    M68K_AND8(g_m68k.d[2], 0x2);
    M68K_AND8(g_m68k.d[2], 0x3);
    M68K_BTST(g_m68k.d[3], g_m68k.d[1]);
    M68K_BTST(g_m68k.d[3], g_m68k.d[1]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_BTST(g_m68k.d[1], g_m68k.d[0]);
    M68K_BTST(g_m68k.d[1], g_m68k.d[0]);
    M68K_BTST(g_m68k.d[1], g_m68k.d[0]);
    M68K_BTST(g_m68k.d[1], g_m68k.d[0]);
    M68K_AND8(g_m68k.d[2], 0x2);
    M68K_AND8(g_m68k.d[2], 0x2);
    M68K_BTST(g_m68k.d[3], g_m68k.d[1]);
    M68K_BTST(g_m68k.d[3], g_m68k.d[1]);
    M68K_BTST(g_m68k.d[3], g_m68k.d[1]);
    M68K_BTST(g_m68k.d[3], g_m68k.d[1]);
    M68K_SUB8(g_m68k.d[4], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_BTST(g_m68k.d[1], g_m68k.d[0]);
    M68K_BTST(g_m68k.d[1], g_m68k.d[0]);
    M68K_BTST(g_m68k.d[1], g_m68k.d[0]);
    M68K_AND8(g_m68k.d[2], 0x2);
    M68K_AND8(g_m68k.d[2], 0x3);
    M68K_BTST(g_m68k.d[3], g_m68k.d[1]);
    M68K_BTST(g_m68k.d[3], g_m68k.d[1]);
    M68K_BTST(g_m68k.d[4], g_m68k.d[1]);
    M68K_SUB8(g_m68k.d[4], 0x4);
    M68K_SUB8(g_m68k.d[5], 0x5);
    M68K_OR8(g_m68k.d[0], 0x1);
    M68K_BTST(g_m68k.d[1], g_m68k.d[0]);
    M68K_BTST(g_m68k.d[1], g_m68k.d[0]);
    M68K_AND8(g_m68k.d[2], 0x2);
    M68K_AND8(g_m68k.d[2], 0x3);
    M68K_BTST(g_m68k.d[3], g_m68k.d[1]);
    M68K_BTST(g_m68k.d[4], g_m68k.d[1]);
    M68K_SUB8(g_m68k.d[4], 0x4);
    M68K_BTST(g_m68k.d[5], g_m68k.d[2]);
    M68K_BTST(g_m68k.d[5], g_m68k.d[2]);
    M68K_BTST(g_m68k.d[5], g_m68k.d[2]);
    M68K_ADD8(g_m68k.d[6], 0x0);
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_BTST(g_m68k.d[2], g_m68k.d[0]);
    M68K_AND8(g_m68k.d[2], 0x2);
    M68K_BTST(g_m68k.d[3], g_m68k.d[1]);
    M68K_BTST(g_m68k.d[3], g_m68k.d[1]);
    M68K_SUB8(g_m68k.d[4], 0x4);
    M68K_SUB8(g_m68k.d[5], 0x5);
    M68K_BTST(g_m68k.d[5], g_m68k.d[2]);
    M68K_ADD8(g_m68k.d[6], 0x6);
    M68K_BTST(g_m68k.d[7], g_m68k.d[3]);
    M68K_OR8(g_m68k.d[0], 0x1);
    M68K_BTST(g_m68k.d[1], g_m68k.d[0]);
    M68K_AND8(g_m68k.d[2], 0x2);
    M68K_BTST(g_m68k.d[3], g_m68k.d[1]);
    M68K_BTST(g_m68k.d[3], g_m68k.d[1]);
    M68K_SUB8(g_m68k.d[4], 0x4);
    M68K_BTST(g_m68k.d[5], g_m68k.d[2]);
    M68K_BTST(g_m68k.d[5], g_m68k.d[2]);
    M68K_ADD8(g_m68k.d[6], 0x6);
    M68K_BTST(g_m68k.d[7], g_m68k.d[3]);
    M68K_BTST(g_m68k.d[7], g_m68k.d[3]);
    /* WARNING: function did not end with RTS */
}

/* $029080-$0290B2  (24 instructions, 50 bytes) */
void jt_029080(void) {
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[7])); g_m68k.a[3] -= 1; bus_write8(g_m68k.a[3], _mv); M68K_TST8(_mv); }
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(0))); M68K_TST8((uint8_t)g_m68k.d[4]);
    { uint8_t _mv = (uint8_t)(_postinc8(1)); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(2))); M68K_TST8((uint8_t)g_m68k.d[5]);
    { uint8_t _mv = (uint8_t)(_postinc8(3)); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[6]);
    { uint8_t _mv = (uint8_t)(_postinc8(5)); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(6))); M68K_TST8((uint8_t)g_m68k.d[7]);
    { uint8_t _mv = (uint8_t)(_postinc8(7)); g_m68k.a[7] -= 1; bus_write8(g_m68k.a[7], _mv); M68K_TST8(_mv); }
    /* TODO $029092: movep.w $1010(a7), d7  [0F 0F 10 10] */
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[1])); g_m68k.a[0] -= 1; bus_write8(g_m68k.a[0], _mv); M68K_TST8(_mv); }
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[2]))); M68K_TST8((uint8_t)g_m68k.d[1]);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[3])); g_m68k.a[1] -= 1; bus_write8(g_m68k.a[1], _mv); M68K_TST8(_mv); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[4]))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[5])); g_m68k.a[2] -= 1; bus_write8(g_m68k.a[2], _mv); M68K_TST8(_mv); }
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[7]))); M68K_TST8((uint8_t)g_m68k.d[3]);
    { uint8_t _mv = (uint8_t)(_postinc8(0)); g_m68k.a[3] -= 1; bus_write8(g_m68k.a[3], _mv); M68K_TST8(_mv); }
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(1))); M68K_TST8((uint8_t)g_m68k.d[4]);
    { uint8_t _mv = (uint8_t)(_postinc8(2)); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(3))); M68K_TST8((uint8_t)g_m68k.d[5]);
    { uint8_t _mv = (uint8_t)(_postinc8(4)); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(5))); M68K_TST8((uint8_t)g_m68k.d[6]);
    { uint8_t _mv = (uint8_t)(_postinc8(6)); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(7))); M68K_TST8((uint8_t)g_m68k.d[7]);
    /* WARNING: function did not end with RTS */
}

/* $029240-$02927A  (25 instructions, 58 bytes) */
void jt_029240(void) {
    M68K_BTST(bus_read8(g_m68k.a[0]), g_m68k.d[7]);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[2])); g_m68k.a[0] -= 1; bus_write8(g_m68k.a[0], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[4])); g_m68k.a[1] -= 1; bus_write8(g_m68k.a[1], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[6])); g_m68k.a[2] -= 1; bus_write8(g_m68k.a[2], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(0)); g_m68k.a[3] -= 1; bus_write8(g_m68k.a[3], _mv); M68K_TST8(_mv); }
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(1))); M68K_TST8((uint8_t)g_m68k.d[4]);
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(3))); M68K_TST8((uint8_t)g_m68k.d[5]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(5))); M68K_TST8((uint8_t)g_m68k.d[6]);
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(7))); M68K_TST8((uint8_t)g_m68k.d[7]);
    M68K_BTST(g_m68k.d[2], g_m68k.d[0]);
    M68K_BTST(g_m68k.d[4], g_m68k.d[1]);
    M68K_BTST(g_m68k.d[6], g_m68k.d[2]);
    /* TODO $029258: movep.w $90a(a0), d3  [07 08 09 0A] */
    /* TODO $02925C: movep.w $d0e(a4), d5  [0B 0C 0D 0E] */
    M68K_BTST(bus_read8(g_m68k.a[0]), g_m68k.d[7]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[1]))); M68K_TST8((uint8_t)g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[3]))); M68K_TST8((uint8_t)g_m68k.d[1]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[5]))); M68K_TST8((uint8_t)g_m68k.d[2]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[7]))); M68K_TST8((uint8_t)g_m68k.d[3]);
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(1))); M68K_TST8((uint8_t)g_m68k.d[4]);
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(3))); M68K_TST8((uint8_t)g_m68k.d[5]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(5))); M68K_TST8((uint8_t)g_m68k.d[6]);
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(7))); M68K_TST8((uint8_t)g_m68k.d[7]);
    M68K_OR8(g_m68k.d[1], 0x3);
    M68K_SUB8(g_m68k.d[5], 0x7);
    /* WARNING: function did not end with RTS */
}

/* $029292-$02929A  (4 instructions, 8 bytes) */
void sub_029292(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[0]);
    M68K_OR16(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    M68K_OR16(g_m68k.d[2], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $02929A-$0292A2  (4 instructions, 8 bytes) */
void sub_02929A(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_DIVU(g_m68k.d[0], g_m68k.d[0]);
    M68K_DIVU(g_m68k.d[1], g_m68k.d[0]);
    M68K_DIVU(g_m68k.d[2], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0292A2-$0292BE  (7 instructions, 28 bytes) */
void sub_0292A2(void) {
    M68K_OR8(g_m68k.d[1], 0x0);
    M68K_OR8(g_m68k.d[2], 0x0);
    M68K_OR8(g_m68k.d[3], 0x0);
    M68K_OR8(g_m68k.d[4], 0x0);
    M68K_OR8(g_m68k.d[5], 0x0);
    M68K_OR8(g_m68k.d[6], 0x0);
    M68K_OR8(g_m68k.d[7], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $029400-$02940A  (3 instructions, 10 bytes) */
void jt_029400(void) {
    M68K_BTST(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $02946E-$029472  (1 instructions, 4 bytes) */
void jt_02946E(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}
