/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $0A6B1E - $0A8222 */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

/* $0A6B1E-$0A6B32  (8 instructions, 20 bytes) */
void jt_0A6B1E(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(g_m68k.d[0]));
    /* TODO $0A6B24: dc.w $4300  [43 00] */
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(g_m68k.a[2]));
    /* TODO $0A6B28: dc.w $4300  [43 00] */
    M68K_CMP16(g_m68k.d[6], _predec16(3));
    /* TODO $0A6B2C: dc.w $4300  [43 00] */
    M68K_CMP16(g_m68k.d[6], bus_read16(g_m68k.a[7] + 0x4300));
    /* WARNING: function did not end with RTS */
}

/* $0A6B32-$0A6B3A  (2 instructions, 8 bytes) */
void jt_0A6B32(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_AND32(g_m68k.d[0], bus_read32(g_m68k.a[6] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 2));
    /* WARNING: function did not end with RTS */
}

/* $0A6B46-$0A6B5A  (8 instructions, 20 bytes) */
void jt_0A6B46(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_CMP16(g_m68k.d[6], _predec16(0));
    /* TODO $0A6B4C: dc.w $4300  [43 00] */
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(g_m68k.d[5]));
    /* TODO $0A6B50: dc.w $4300  [43 00] */
    M68K_CMP16(g_m68k.d[6], _predec16(1));
    /* TODO $0A6B54: dc.w $4300  [43 00] */
    M68K_AND32(g_m68k.d[0], bus_read32(g_m68k.a[2] + 0x4300));
    /* WARNING: function did not end with RTS */
}

/* $0A6B5A-$0A6B6E  (9 instructions, 20 bytes) */
void jt_0A6B5A(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_CMP16(g_m68k.d[6], _predec16(0));
    /* TODO $0A6B60: dc.w $4300  [43 00] */
    M68K_MULU(g_m68k.d[0], g_m68k.d[0]);
    /* TODO $0A6B64: dc.w $4300  [43 00] */
    M68K_CMP16(g_m68k.d[6], _predec16(1));
    /* TODO $0A6B68: dc.w $4300  [43 00] */
    M68K_MULU(g_m68k.d[0], g_m68k.d[1]);
    /* TODO $0A6B6C: dc.w $4300  [43 00] */
    /* WARNING: function did not end with RTS */
}

/* $0A6B6E-$0A6B82  (6 instructions, 20 bytes) */
void jt_0A6B6E(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_AND32(g_m68k.d[0], bus_read32(0x004300));
    M68K_MULU(g_m68k.d[0], g_m68k.d[2]);
    /* TODO $0A6B78: dc.w $4300  [43 00] */
    M68K_AND32(g_m68k.d[0], bus_read32(0x4300C0C3));
    /* TODO $0A6B80: dc.w $4300  [43 00] */
    /* WARNING: function did not end with RTS */
}

/* $0A6B82-$0A6B96  (8 instructions, 20 bytes) */
void jt_0A6B82(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_AND32(g_m68k.d[0], bus_read32(0xaae88));
    M68K_MULU(g_m68k.d[0], g_m68k.d[4]);
    /* TODO $0A6B8C: dc.w $4300  [43 00] */
    M68K_AND32(g_m68k.d[0], _predec32(0));
    /* TODO $0A6B90: dc.w $4300  [43 00] */
    M68K_MULU(g_m68k.d[0], g_m68k.d[5]);
    /* TODO $0A6B94: dc.w $4300  [43 00] */
    /* WARNING: function did not end with RTS */
}

/* $0A6B96-$0A6BAA  (8 instructions, 20 bytes) */
void jt_0A6B96(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_AND32(g_m68k.d[0], bus_read32(0xaae9c));
    M68K_MULU(g_m68k.d[0], bus_read16(g_m68k.a[1]));
    /* TODO $0A6BA0: dc.w $4300  [43 00] */
    M68K_AND32(g_m68k.d[0], _predec32(0));
    /* TODO $0A6BA4: dc.w $4300  [43 00] */
    M68K_MULU(g_m68k.d[0], bus_read16(g_m68k.a[2]));
    /* TODO $0A6BA8: dc.w $4300  [43 00] */
    /* WARNING: function did not end with RTS */
}

/* $0A6BAA-$0A6BBE  (9 instructions, 20 bytes) */
void jt_0A6BAA(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_MULU(g_m68k.d[0], g_m68k.d[6]);
    /* TODO $0A6BB0: dc.w $4300  [43 00] */
    M68K_MULU(g_m68k.d[0], bus_read16(g_m68k.a[3]));
    /* TODO $0A6BB4: dc.w $4300  [43 00] */
    M68K_MULU(g_m68k.d[0], g_m68k.d[7]);
    /* TODO $0A6BB8: dc.w $4300  [43 00] */
    M68K_MULU(g_m68k.d[0], bus_read16(g_m68k.a[4]));
    /* TODO $0A6BBC: dc.w $4300  [43 00] */
    /* WARNING: function did not end with RTS */
}

/* $0A6BBE-$0A6BC2  (1 instructions, 4 bytes) */
void jt_0A6BBE(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    /* WARNING: function did not end with RTS */
}

/* $0A6BD2-$0A6BD6  (1 instructions, 4 bytes) */
void jt_0A6BD2(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    /* WARNING: function did not end with RTS */
}

/* $0A6BE6-$0A6BFA  (6 instructions, 20 bytes) */
void jt_0A6BE6(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULU(g_m68k.d[0], _postinc16(1));
    /* TODO $0A6BF0: dc.w $4300  [43 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0A6BFA-$0A6BFE  (1 instructions, 4 bytes) */
void jt_0A6BFA(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    /* WARNING: function did not end with RTS */
}

/* $0A6C0E-$0A6C12  (1 instructions, 4 bytes) */
void jt_0A6C0E(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    /* WARNING: function did not end with RTS */
}

/* $0A6C22-$0A6C26  (1 instructions, 4 bytes) */
void jt_0A6C22(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    /* WARNING: function did not end with RTS */
}

/* $0A6C36-$0A6C4A  (9 instructions, 20 bytes) */
void jt_0A6C36(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_MULU(g_m68k.d[0], _postinc16(7));
    /* TODO $0A6C3C: dc.w $4300  [43 00] */
    M68K_MULU(g_m68k.d[0], _predec16(2));
    /* TODO $0A6C40: dc.w $4300  [43 00] */
    M68K_MULU(g_m68k.d[0], _predec16(0));
    /* TODO $0A6C44: dc.w $4300  [43 00] */
    M68K_MULU(g_m68k.d[0], _predec16(3));
    /* TODO $0A6C48: dc.w $4300  [43 00] */
    /* WARNING: function did not end with RTS */
}

/* $0A6C4A-$0A6C5E  (9 instructions, 20 bytes) */
void jt_0A6C4A(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_CMP16(g_m68k.d[6], _postinc16(2));
    /* TODO $0A6C50: dc.w $4300  [43 00] */
    M68K_CMP16(g_m68k.d[6], _predec16(6));
    /* TODO $0A6C54: dc.w $4300  [43 00] */
    M68K_CMP16(g_m68k.d[6], _postinc16(3));
    /* TODO $0A6C58: dc.w $4300  [43 00] */
    M68K_CMP16(g_m68k.d[6], _predec16(7));
    /* TODO $0A6C5C: dc.w $4300  [43 00] */
    /* WARNING: function did not end with RTS */
}

/* $0A6C5E-$0A6C72  (7 instructions, 20 bytes) */
void jt_0A6C5E(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_CMP16(g_m68k.d[6], _postinc16(4));
    /* TODO $0A6C64: dc.w $4300  [43 00] */
    M68K_CMP16(g_m68k.d[6], bus_read16(g_m68k.a[0] + 0x4300));
    M68K_CMP16(g_m68k.d[6], _postinc16(5));
    /* TODO $0A6C6C: dc.w $4300  [43 00] */
    M68K_CMP16(g_m68k.d[6], bus_read16(g_m68k.a[1] + 0x4300));
    /* WARNING: function did not end with RTS */
}

/* $0A6C72-$0A6C86  (7 instructions, 20 bytes) */
void jt_0A6C72(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_CMP16(g_m68k.d[6], _postinc16(6));
    /* TODO $0A6C78: dc.w $4300  [43 00] */
    M68K_CMP16(g_m68k.d[6], bus_read16(g_m68k.a[2] + 0x4300));
    M68K_CMP16(g_m68k.d[6], _postinc16(7));
    /* TODO $0A6C80: dc.w $4300  [43 00] */
    M68K_CMP16(g_m68k.d[6], bus_read16(g_m68k.a[3] + 0x4300));
    /* WARNING: function did not end with RTS */
}

/* $0A6C86-$0A6C9A  (7 instructions, 20 bytes) */
void jt_0A6C86(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_CMP16(g_m68k.d[6], _predec16(0));
    /* TODO $0A6C8C: dc.w $4300  [43 00] */
    M68K_CMP16(g_m68k.d[6], bus_read16(g_m68k.a[4] + 0x4300));
    M68K_CMP16(g_m68k.d[6], _predec16(1));
    /* TODO $0A6C94: dc.w $4300  [43 00] */
    M68K_CMP16(g_m68k.d[6], bus_read16(g_m68k.a[5] + 0x4300));
    /* WARNING: function did not end with RTS */
}

/* $0A6C9A-$0A6CAE  (7 instructions, 20 bytes) */
void jt_0A6C9A(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_CMP16(g_m68k.d[6], _predec16(2));
    /* TODO $0A6CA0: dc.w $4300  [43 00] */
    M68K_CMP16(g_m68k.d[6], bus_read16(g_m68k.a[6] + 0x4300));
    M68K_CMP16(g_m68k.d[6], _predec16(3));
    /* TODO $0A6CA8: dc.w $4300  [43 00] */
    M68K_CMP16(g_m68k.d[6], bus_read16(g_m68k.a[7] + 0x4300));
    /* WARNING: function did not end with RTS */
}

/* $0A6CAE-$0A6CC2  (7 instructions, 20 bytes) */
void jt_0A6CAE(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_CMP16(g_m68k.d[6], _predec16(4));
    /* TODO $0A6CB4: dc.w $4300  [43 00] */
    M68K_CMP16(g_m68k.d[6], bus_read16(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 2));
    M68K_CMP16(g_m68k.d[6], _predec16(5));
    /* TODO $0A6CBC: dc.w $4300  [43 00] */
    M68K_CMP16(g_m68k.d[6], bus_read16(g_m68k.a[7] + 0x4300));
    /* WARNING: function did not end with RTS */
}

/* $0A6CC2-$0A6CCA  (3 instructions, 8 bytes) */
void jt_0A6CC2(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_MULU(g_m68k.d[0], _predec16(1));
    /* TODO $0A6CC8: dc.w $4300  [43 00] */
    /* WARNING: function did not end with RTS */
}

/* $0A6CD6-$0A6CEA  (7 instructions, 20 bytes) */
void jt_0A6CD6(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_MULU(g_m68k.d[0], _predec16(5));
    /* TODO $0A6CDC: dc.w $4300  [43 00] */
    M68K_MULU(g_m68k.d[0], bus_read16(g_m68k.a[3] + 0x4300));
    M68K_CMP32(g_m68k.d[6], bus_read32(0xaafe4));
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(g_m68k.d[4]));
    /* TODO $0A6CE8: dc.w $4300  [43 00] */
    /* WARNING: function did not end with RTS */
}

/* $0A6CEA-$0A6CFE  (7 instructions, 20 bytes) */
void jt_0A6CEA(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(g_m68k.d[0]));
    /* TODO $0A6CF0: dc.w $4300  [43 00] */
    M68K_MULU(g_m68k.d[0], bus_read16(g_m68k.a[4] + 0x4300));
    M68K_MULU(g_m68k.d[0], _predec16(6));
    /* TODO $0A6CF8: dc.w $4300  [43 00] */
    M68K_MULU(g_m68k.d[0], bus_read16(g_m68k.a[5] + 0x4300));
    /* WARNING: function did not end with RTS */
}

/* $0A6CFE-$0A6D12  (5 instructions, 20 bytes) */
void jt_0A6CFE(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0A6D12-$0A6D26  (5 instructions, 20 bytes) */
void jt_0A6D12(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0A6D26-$0A6D3A  (5 instructions, 20 bytes) */
void jt_0A6D26(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULU(g_m68k.d[0], bus_read16(g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 2));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND32(g_m68k.d[0], bus_read32(g_m68k.a[5] + 0x4300));
    /* WARNING: function did not end with RTS */
}

/* $0A6D8E-$0A6D9E  (7 instructions, 16 bytes) */
void jt_0A6D8E(void) {
    M68K_OR8(g_m68k.d[3], 0x1);
    M68K_CMP32(g_m68k.d[6], bus_read32(g_m68k.a[0]));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(bus_read16(g_m68k.a[1])));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(bus_read16(g_m68k.a[2])));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $0A6D9E-$0A6DAE  (7 instructions, 16 bytes) */
void jt_0A6D9E(void) {
    M68K_OR8(g_m68k.d[3], 0x1);
    M68K_CMP32(g_m68k.d[6], bus_read32(g_m68k.a[1]));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(_postinc16(4)));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(_postinc16(5)));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $0A6DAE-$0A6DBE  (7 instructions, 16 bytes) */
void jt_0A6DAE(void) {
    M68K_OR8(g_m68k.d[3], 0x1);
    M68K_CMP32(g_m68k.d[6], bus_read32(g_m68k.a[2]));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(_predec16(4)));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(_postinc16(5)));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $0A6DBE-$0A6DCE  (7 instructions, 16 bytes) */
void jt_0A6DBE(void) {
    M68K_OR8(g_m68k.d[3], 0x1);
    M68K_CMP32(g_m68k.d[6], bus_read32(g_m68k.a[3]));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(bus_read16(g_m68k.a[2])));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(bus_read16(g_m68k.a[5])));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $0A6DCE-$0A6DDE  (7 instructions, 16 bytes) */
void jt_0A6DCE(void) {
    M68K_OR8(g_m68k.d[3], 0x1);
    M68K_CMP32(g_m68k.d[6], bus_read32(g_m68k.a[4]));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(bus_read16(g_m68k.a[2])));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(bus_read16(g_m68k.a[5])));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $0A6DDE-$0A6DEE  (7 instructions, 16 bytes) */
void jt_0A6DDE(void) {
    M68K_OR8(g_m68k.d[3], 0x1);
    M68K_CMP32(g_m68k.d[6], bus_read32(g_m68k.a[0]));
    /* TODO $0A6DE4: dc.w $4300  [43 00] */
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(bus_read16(g_m68k.a[1])));
    /* TODO $0A6DE8: dc.w $4300  [43 00] */
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(bus_read16(g_m68k.a[2])));
    /* TODO $0A6DEC: dc.w $4300  [43 00] */
    /* WARNING: function did not end with RTS */
}

/* $0A6DEE-$0A6DFE  (7 instructions, 16 bytes) */
void jt_0A6DEE(void) {
    M68K_OR8(g_m68k.d[3], 0x1);
    M68K_CMP32(g_m68k.d[6], bus_read32(g_m68k.a[1]));
    /* TODO $0A6DF4: dc.w $4300  [43 00] */
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(_postinc16(4)));
    /* TODO $0A6DF8: dc.w $4300  [43 00] */
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(_postinc16(5)));
    /* TODO $0A6DFC: dc.w $4300  [43 00] */
    /* WARNING: function did not end with RTS */
}

/* $0A6DFE-$0A6E0E  (7 instructions, 16 bytes) */
void jt_0A6DFE(void) {
    M68K_OR8(g_m68k.d[3], 0x1);
    M68K_CMP32(g_m68k.d[6], bus_read32(g_m68k.a[2]));
    /* TODO $0A6E04: dc.w $4300  [43 00] */
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(_predec16(4)));
    /* TODO $0A6E08: dc.w $4300  [43 00] */
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(_postinc16(5)));
    /* TODO $0A6E0C: dc.w $4300  [43 00] */
    /* WARNING: function did not end with RTS */
}

/* $0A6E0E-$0A6E1E  (7 instructions, 16 bytes) */
void jt_0A6E0E(void) {
    M68K_OR8(g_m68k.d[3], 0x1);
    M68K_CMP32(g_m68k.d[6], bus_read32(g_m68k.a[3]));
    /* TODO $0A6E14: dc.w $4300  [43 00] */
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(bus_read16(g_m68k.a[2])));
    /* TODO $0A6E18: dc.w $4300  [43 00] */
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(bus_read16(g_m68k.a[5])));
    /* TODO $0A6E1C: dc.w $4300  [43 00] */
    /* WARNING: function did not end with RTS */
}

/* $0A6E1E-$0A6E2E  (7 instructions, 16 bytes) */
void jt_0A6E1E(void) {
    M68K_OR8(g_m68k.d[3], 0x1);
    M68K_CMP32(g_m68k.d[6], bus_read32(g_m68k.a[4]));
    /* TODO $0A6E24: dc.w $4300  [43 00] */
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(bus_read16(g_m68k.a[2])));
    /* TODO $0A6E28: dc.w $4300  [43 00] */
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(bus_read16(g_m68k.a[5])));
    /* TODO $0A6E2C: dc.w $4300  [43 00] */
    /* WARNING: function did not end with RTS */
}

/* $0A6E4E-$0A6E7A  (14 instructions, 44 bytes) */
void jt_0A6E4E(void) {
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x10); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    g_m68k.a[5] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[1] + 0x4700));
    g_m68k.a[5] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[7] + 0 + (int32_t)g_m68k.d[4]));
    M68K_ADDX8(g_m68k.d[5], g_m68k.d[5]);
    /* TODO $0A6E6C: nbcd.b d0  [48 00] */
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    M68K_NOT8(g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    M68K_NOT8(g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[7] + 0x4700); uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0A7160-$0A7176  (9 instructions, 22 bytes) */
void jt_0A7160(void) {
    M68K_NOT8(g_m68k.d[0]);
    g_m68k.a[5] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 8));
    M68K_ADDX8(g_m68k.d[5], g_m68k.d[2]);
    /* TODO $0A7168: dc.w $4700  [47 00] */
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    /* TODO $0A716C: dc.w $4700  [47 00] */
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    M68K_NOT8(g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[4] + 0x4600); uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0A7352-$0A7366  (8 instructions, 20 bytes) */
void jt_0A7352(void) {
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x10); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[1]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    M68K_TST8(g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[2]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    M68K_TST8(g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    M68K_TST8(g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[0] + 0 + (int32_t)g_m68k.d[4] * 2); uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0A7856-$0A799A  (128 instructions, 324 bytes) */
void jt_0A7856(void) {
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x6); bus_write8(_ea, _tmp); }
    M68K_ADD16(g_m68k.d[6], _postinc16(2));
    /* TODO $0A785C: dc.w $4700  [47 00] */
    M68K_ADD16(g_m68k.d[6], _predec16(0));
    /* TODO $0A7860: dc.w $4700  [47 00] */
    M68K_ADD16(g_m68k.d[6], bus_read16(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 8));
    M68K_ADD32(g_m68k.d[6], g_m68k.d[0]);
    /* TODO $0A7868: dc.w $4100  [41 00] */
    M68K_ADD32(g_m68k.d[6], bus_read32(g_m68k.a[0]));
    /* TODO $0A786C: dc.w $4100  [41 00] */
    M68K_ADD32(g_m68k.d[6], _predec32(0));
    /* TODO $0A7870: dc.w $4100  [41 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_ADD16(g_m68k.d[6], _predec16(1));
    /* TODO $0A7878: dc.w $4700  [47 00] */
    M68K_ADD16(g_m68k.d[6], bus_read16(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 8));
    M68K_ADD32(g_m68k.d[6], g_m68k.d[1]);
    M68K_NOT8(g_m68k.d[0]);
    M68K_ADD32(g_m68k.d[6], bus_read32(g_m68k.a[1]));
    M68K_NOT8(g_m68k.d[0]);
    M68K_ADD32(g_m68k.d[6], _predec32(1));
    M68K_NOT8(g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_ADD16(g_m68k.d[6], _predec16(2));
    /* TODO $0A7890: dc.w $4700  [47 00] */
    M68K_ADD16(g_m68k.d[6], bus_read16(g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 8));
    M68K_ADD32(g_m68k.d[6], g_m68k.d[2]);
    M68K_NOT8(g_m68k.d[0]);
    M68K_ADD32(g_m68k.d[6], bus_read32(g_m68k.a[2]));
    M68K_NOT8(g_m68k.d[0]);
    M68K_ADD32(g_m68k.d[6], _predec32(2));
    M68K_NOT8(g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_ADD16(g_m68k.d[6], _predec16(3));
    /* TODO $0A78A8: dc.w $4700  [47 00] */
    M68K_ADD16(g_m68k.d[6], bus_read16(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 8));
    M68K_ADD32(g_m68k.d[6], g_m68k.d[3]);
    /* TODO $0A78B0: dc.w $4100  [41 00] */
    M68K_ADD32(g_m68k.d[6], bus_read32(g_m68k.a[3]));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_ADD32(g_m68k.d[6], _predec32(3));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_ADD16(g_m68k.d[6], _predec16(4));
    /* TODO $0A78C0: dc.w $4700  [47 00] */
    M68K_ADD16(g_m68k.d[6], bus_read16(g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.d[4]));
    M68K_ADD32(g_m68k.d[6], g_m68k.d[4]);
    /* TODO $0A78C8: dc.w $4100  [41 00] */
    M68K_ADD32(g_m68k.d[6], bus_read32(g_m68k.a[4]));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_ADD32(g_m68k.d[6], _predec32(4));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_ADD16(g_m68k.d[6], _predec16(5));
    M68K_NOT8(g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[6], bus_read16(g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.d[4]));
    M68K_ADD32(g_m68k.d[6], g_m68k.d[5]);
    /* TODO $0A78E0: dc.w $4100  [41 00] */
    M68K_ADD32(g_m68k.d[6], bus_read32(g_m68k.a[5]));
    /* TODO $0A78E4: dc.w $4100  [41 00] */
    M68K_ADD32(g_m68k.d[6], _predec32(5));
    /* TODO $0A78E8: dc.w $4100  [41 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_ADD16(g_m68k.d[6], _predec16(6));
    M68K_NOT8(g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[6], bus_read16(g_m68k.a[6] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 8));
    M68K_ADD32(g_m68k.d[6], g_m68k.d[6]);
    M68K_NOT8(g_m68k.d[0]);
    M68K_ADD32(g_m68k.d[6], bus_read32(g_m68k.a[6]));
    M68K_NOT8(g_m68k.d[0]);
    M68K_ADD32(g_m68k.d[6], _predec32(6));
    M68K_NOT8(g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[6], _postinc16(3));
    M68K_NOT8(g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[6], _predec16(7));
    M68K_NOT8(g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[6], bus_read16(g_m68k.a[7] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 2));
    M68K_ADD32(g_m68k.d[6], g_m68k.d[7]);
    /* TODO $0A7910: dc.w $4300  [43 00] */
    M68K_ADD32(g_m68k.d[6], bus_read32(g_m68k.a[7]));
    /* TODO $0A7914: dc.w $4300  [43 00] */
    M68K_ADD32(g_m68k.d[6], _predec32(7));
    /* TODO $0A7918: dc.w $4500  [45 00] */
    M68K_ADD16(g_m68k.d[6], _postinc16(4));
    M68K_NOT8(g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[6], bus_read16(g_m68k.a[0] + 0x4600));
    M68K_ADD16(g_m68k.d[6], bus_read16(0x004300));
    M68K_ADD32(g_m68k.d[6], g_m68k.a[0]);
    /* TODO $0A7928: dc.w $4300  [43 00] */
    M68K_ADD32(g_m68k.d[6], _postinc32(0));
    /* TODO $0A792C: dc.w $4500  [45 00] */
    M68K_ADD32(g_m68k.d[6], bus_read32(g_m68k.a[0] + 0x4500));
    M68K_ADD16(g_m68k.d[6], _postinc16(5));
    M68K_NOT8(g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[6], bus_read16(g_m68k.a[1] + 0x4600));
    M68K_ADD16(g_m68k.d[6], bus_read16(0x4500DC89));
    /* TODO $0A7940: dc.w $4500  [45 00] */
    M68K_ADD32(g_m68k.d[6], _postinc32(1));
    /* TODO $0A7944: dc.w $4500  [45 00] */
    M68K_ADD32(g_m68k.d[6], bus_read32(g_m68k.a[1] + 0x4500));
    M68K_ADD16(g_m68k.d[6], _postinc16(6));
    /* TODO $0A794C: dc.w $4700  [47 00] */
    M68K_ADD16(g_m68k.d[6], bus_read16(g_m68k.a[2] + 0x4700));
    M68K_ADD16(g_m68k.d[6], bus_read16(0xac054));
    M68K_ADD32(g_m68k.d[6], g_m68k.a[2]);
    /* TODO $0A7958: dc.w $4700  [47 00] */
    M68K_ADD32(g_m68k.d[6], _postinc32(2));
    /* TODO $0A795C: dc.w $4500  [45 00] */
    M68K_ADD32(g_m68k.d[6], bus_read32(g_m68k.a[2] + 0x4500));
    M68K_ADD16(g_m68k.d[6], _postinc16(7));
    /* TODO $0A7964: dc.w $4700  [47 00] */
    M68K_ADD16(g_m68k.d[6], bus_read16(g_m68k.a[3] + 0x4700));
    M68K_ADD16(g_m68k.d[6], /* UNHANDLED_READ: (a16, d4.w * 8) */ 0);
    M68K_ADD32(g_m68k.d[6], g_m68k.a[3]);
    /* TODO $0A7970: dc.w $4700  [47 00] */
    M68K_ADD32(g_m68k.d[6], _postinc32(3));
    /* TODO $0A7974: dc.w $4500  [45 00] */
    M68K_ADD32(g_m68k.d[6], bus_read32(g_m68k.a[3] + 0x4500));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_ADD16(g_m68k.d[6], bus_read16(g_m68k.a[4] + 0x4600));
    M68K_ADD16(g_m68k.d[6], 0x4600);
    M68K_ADD32(g_m68k.d[6], g_m68k.a[4]);
    M68K_NOT8(g_m68k.d[0]);
    M68K_ADD32(g_m68k.d[6], _postinc32(4));
    /* TODO $0A798C: dc.w $4500  [45 00] */
    M68K_ADD32(g_m68k.d[6], bus_read32(g_m68k.a[4] + 0x4500));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_ADD16(g_m68k.d[6], bus_read16(g_m68k.a[5] + 0x4700));
    /* WARNING: function did not end with RTS */
}

/* $0A7A3A-$0A7A6A  (18 instructions, 48 bytes) */
void jt_0A7A3A(void) {
    M68K_OR8(g_m68k.d[4], 0x4);
    M68K_ADD8(g_m68k.d[6], bus_read8(g_m68k.a[7]));
    /* TODO $0A7A40: dc.w $4d00  [4D 00] */
    M68K_ADD8(g_m68k.d[6], _predec8(3));
    /* TODO $0A7A44: dc.w $4d00  [4D 00] */
    M68K_ADD8(g_m68k.d[6], bus_read8(g_m68k.a[7] + 0x4d00));
    M68K_ADD8(g_m68k.d[6], /* UNHANDLED_READ: (a16, d4.l * 4) */ 0);
    M68K_ADD8(g_m68k.d[6], _postinc8(0));
    /* TODO $0A7A50: dc.w $4d00  [4D 00] */
    M68K_ADD8(g_m68k.d[6], _predec8(4));
    /* TODO $0A7A54: dc.w $4d00  [4D 00] */
    M68K_ADD8(g_m68k.d[6], bus_read8(g_m68k.a[0] + 0 + (int32_t)g_m68k.d[4] * 4));
    M68K_ADD8(g_m68k.d[6], 0x0);
    M68K_ADD8(g_m68k.d[6], _postinc8(1));
    /* TODO $0A7A60: dc.w $4d00  [4D 00] */
    M68K_ADD8(g_m68k.d[6], _predec8(5));
    /* TODO $0A7A64: dc.w $4d00  [4D 00] */
    M68K_ADD8(g_m68k.d[6], bus_read8(g_m68k.a[1] + 0 + (int32_t)g_m68k.d[4] * 4));
    /* WARNING: function did not end with RTS */
}

/* $0A7A7E-$0A7A84  (2 instructions, 6 bytes) */
void jt_0A7A7E(void) {
    M68K_OR8(g_m68k.d[4], 0x4);
    M68K_ADD8(g_m68k.d[6], _postinc8(3));
    /* WARNING: function did not end with RTS */
}

/* $0A7AC2-$0A7B06  (24 instructions, 68 bytes) */
void jt_0A7AC2(void) {
    M68K_OR8(g_m68k.d[4], 0x4);
    M68K_ADD8(g_m68k.d[6], _postinc8(7));
    /* TODO $0A7AC8: dc.w $4f00  [4F 00] */
    M68K_ADD8(g_m68k.d[6], bus_read8(g_m68k.a[3] + 0x4f00));
    M68K_ADD8(g_m68k.d[6], bus_read8(g_m68k.a[7] + 0 + (int32_t)g_m68k.d[4] * 8));
    M68K_ADD16(g_m68k.d[6], g_m68k.d[3]);
    /* TODO $0A7AD4: dc.w $4f00  [4F 00] */
    M68K_ADD8(g_m68k.d[6], _predec8(0));
    /* TODO $0A7AD8: dc.w $4f00  [4F 00] */
    M68K_ADD8(g_m68k.d[6], bus_read8(g_m68k.a[4] + 0x4f00));
    M68K_ADD8(g_m68k.d[6], bus_read8(0x004F00));
    M68K_ADD16(g_m68k.d[6], g_m68k.d[4]);
    /* TODO $0A7AE4: dc.w $4f00  [4F 00] */
    M68K_ADD8(g_m68k.d[6], _predec8(1));
    /* TODO $0A7AE8: dc.w $4f00  [4F 00] */
    M68K_ADD8(g_m68k.d[6], bus_read8(g_m68k.a[5] + 0x4f00));
    M68K_ADD8(g_m68k.d[6], bus_read8(0x4F00DC45));
    /* TODO $0A7AF4: dc.w $4f00  [4F 00] */
    M68K_ADD8(g_m68k.d[6], _predec8(2));
    /* TODO $0A7AF8: dc.w $4f00  [4F 00] */
    M68K_ADD8(g_m68k.d[6], bus_read8(g_m68k.a[6] + 0x4f00));
    M68K_ADD8(g_m68k.d[6], bus_read8(0xaca00));
    M68K_ADD16(g_m68k.d[6], g_m68k.d[6]);
    /* TODO $0A7B04: dc.w $4f00  [4F 00] */
    /* WARNING: function did not end with RTS */
}

/* $0A7B06-$0A7B4A  (31 instructions, 68 bytes) */
void jt_0A7B06(void) {
    M68K_OR8(g_m68k.d[4], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_ADD16(g_m68k.d[6], g_m68k.a[1]);
    M68K_ADD8(g_m68k.d[0], 0x8);
    M68K_ADD16(g_m68k.d[6], bus_read16(g_m68k.a[1]));
    M68K_ADD8(g_m68k.d[0], 0x8);
    M68K_ADD16(g_m68k.d[6], bus_read16(g_m68k.a[6]));
    M68K_ADD8(g_m68k.d[0], 0x8);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_ADD16(g_m68k.d[6], g_m68k.a[2]);
    M68K_ADD8(g_m68k.d[0], 0x8);
    M68K_ADD16(g_m68k.d[6], bus_read16(g_m68k.a[2]));
    M68K_ADD8(g_m68k.d[0], 0x8);
    M68K_ADD16(g_m68k.d[6], bus_read16(g_m68k.a[7]));
    M68K_ADD8(g_m68k.d[0], 0x8);
    M68K_ADD16(g_m68k.d[6], g_m68k.d[7]);
    M68K_ADD8(g_m68k.d[0], 0x8);
    M68K_ADD16(g_m68k.d[6], g_m68k.a[3]);
    M68K_ADD8(g_m68k.d[0], 0x8);
    M68K_ADD16(g_m68k.d[6], bus_read16(g_m68k.a[3]));
    M68K_ADD8(g_m68k.d[0], 0x8);
    M68K_ADD16(g_m68k.d[6], _postinc16(0));
    M68K_ADD8(g_m68k.d[0], 0x8);
    M68K_ADD16(g_m68k.d[6], g_m68k.a[0]);
    M68K_ADD8(g_m68k.d[0], 0x8);
    M68K_ADD16(g_m68k.d[6], g_m68k.a[4]);
    M68K_ADD8(g_m68k.d[0], 0x8);
    M68K_ADD16(g_m68k.d[6], bus_read16(g_m68k.a[4]));
    M68K_ADD8(g_m68k.d[0], 0x8);
    M68K_ADD16(g_m68k.d[6], _postinc16(1));
    M68K_ADD8(g_m68k.d[0], 0x8);
    /* WARNING: function did not end with RTS */
}

/* $0A7B4A-$0A7B8E  (28 instructions, 68 bytes) */
void jt_0A7B4A(void) {
    M68K_OR8(g_m68k.d[4], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_ADD16(g_m68k.d[6], g_m68k.a[5]);
    M68K_ADD8(g_m68k.d[0], 0x8);
    M68K_ADD32(g_m68k.d[0], bus_read32(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[5]));
    M68K_ADD16(g_m68k.d[6], bus_read16(g_m68k.a[6]));
    M68K_ADD8(g_m68k.d[0], 0x8);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_ADD16(g_m68k.d[6], g_m68k.a[6]);
    M68K_ADD8(g_m68k.d[0], 0x8);
    M68K_ADD16(g_m68k.d[6], bus_read16(g_m68k.a[5]));
    M68K_ADD8(g_m68k.d[0], 0x8);
    M68K_ADD16(g_m68k.d[6], bus_read16(g_m68k.a[7]));
    M68K_ADD8(g_m68k.d[0], 0x8);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_ADD16(g_m68k.d[6], g_m68k.a[7]);
    M68K_ADD8(g_m68k.d[0], 0x8);
    M68K_ADD16(g_m68k.d[6], bus_read16(g_m68k.a[3]));
    M68K_ADD8(g_m68k.d[0], 0x8);
    M68K_ADD16(g_m68k.d[6], _postinc16(0));
    M68K_ADD8(g_m68k.d[0], 0x8);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_ADD16(g_m68k.d[6], bus_read16(g_m68k.a[0]));
    M68K_ADD8(g_m68k.d[0], 0x8);
    M68K_ADD16(g_m68k.d[6], bus_read16(g_m68k.a[4]));
    M68K_ADD8(g_m68k.d[0], 0x8);
    M68K_ADD16(g_m68k.d[6], _postinc16(1));
    M68K_ADD8(g_m68k.d[0], 0x8);
    /* WARNING: function did not end with RTS */
}

/* $0A7BC4-$0A7BD6  (5 instructions, 18 bytes) */
void jt_0A7BC4(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x6); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_ASR32(g_m68k.d[5], g_m68k.d[7]);
    /* WARNING: function did not end with RTS */
}

/* $0A7D48-$0A7ECC  (167 instructions, 388 bytes) */
void jt_0A7D48(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x6); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $0A7D54: roxl.w #$6, d2  [ED 52] */
    /* TODO $0A7D56: dc.w $4f00  [4F 00] */
    M68K_LSL16(g_m68k.d[2], g_m68k.d[6]);
    /* TODO $0A7D5A: dc.w $4f00  [4F 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $0A7D64: roxl.b d6, d5  [ED 35] */
    /* TODO $0A7D66: dc.w $4f00  [4F 00] */
    M68K_LSL16(g_m68k.d[4], 0x6);
    /* TODO $0A7D6A: dc.w $4f00  [4F 00] */
    /* TODO $0A7D6C: roxl.w #$6, d3  [ED 53] */
    /* TODO $0A7D6E: dc.w $4f00  [4F 00] */
    M68K_LSL16(g_m68k.d[3], g_m68k.d[6]);
    /* TODO $0A7D72: dc.w $4f00  [4F 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $0A7D7C: roxl.b d6, d6  [ED 36] */
    /* TODO $0A7D7E: dc.w $4f00  [4F 00] */
    M68K_LSL16(g_m68k.d[5], 0x6);
    /* TODO $0A7D82: dc.w $4f00  [4F 00] */
    /* TODO $0A7D84: roxl.w #$6, d4  [ED 54] */
    /* TODO $0A7D86: dc.w $4f00  [4F 00] */
    M68K_LSL16(g_m68k.d[4], g_m68k.d[6]);
    /* TODO $0A7D8A: dc.w $4f00  [4F 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $0A7D94: roxl.b d6, d7  [ED 37] */
    /* TODO $0A7D96: dc.w $4f00  [4F 00] */
    M68K_LSL16(g_m68k.d[6], 0x6);
    /* TODO $0A7D9A: dc.w $4f00  [4F 00] */
    /* TODO $0A7D9C: roxl.w #$6, d5  [ED 55] */
    /* TODO $0A7D9E: dc.w $4f00  [4F 00] */
    M68K_LSL16(g_m68k.d[5], g_m68k.d[6]);
    /* TODO $0A7DA2: dc.w $4f00  [4F 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_ROL8(g_m68k.d[0], g_m68k.d[6]);
    /* TODO $0A7DAE: dc.w $4f00  [4F 00] */
    M68K_LSL16(g_m68k.d[7], 0x6);
    /* TODO $0A7DB2: dc.w $4f00  [4F 00] */
    /* TODO $0A7DB4: roxl.w #$6, d6  [ED 56] */
    /* TODO $0A7DB6: dc.w $4f00  [4F 00] */
    M68K_LSL16(g_m68k.d[6], g_m68k.d[6]);
    /* TODO $0A7DBA: dc.w $4f00  [4F 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_ROL8(g_m68k.d[1], g_m68k.d[6]);
    /* TODO $0A7DC6: dc.w $4f00  [4F 00] */
    M68K_LSL16(g_m68k.d[0], 0x6);
    /* TODO $0A7DCA: dc.w $4f00  [4F 00] */
    /* TODO $0A7DCC: roxl.w #$6, d7  [ED 57] */
    /* TODO $0A7DCE: dc.w $4f00  [4F 00] */
    M68K_LSL16(g_m68k.d[7], g_m68k.d[6]);
    /* TODO $0A7DD2: dc.w $4f00  [4F 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_ROL8(g_m68k.d[2], g_m68k.d[6]);
    /* TODO $0A7DDE: dc.w $4f00  [4F 00] */
    M68K_LSL16(g_m68k.d[1], 0x6);
    /* TODO $0A7DE2: dc.w $4f00  [4F 00] */
    M68K_ROL16(g_m68k.d[0], 0x6);
    /* TODO $0A7DE6: dc.w $4f00  [4F 00] */
    M68K_LSL16(g_m68k.d[0], g_m68k.d[6]);
    /* TODO $0A7DEA: dc.w $4f00  [4F 00] */
    /* TODO $0A7DEC: roxl.w d6, d2  [ED 72] */
    /* TODO $0A7DEE: dc.w $4f00  [4F 00] */
    /* TODO $0A7DF0: roxl.w d6, d6  [ED 76] */
    /* TODO $0A7DF2: dc.w $4f00  [4F 00] */
    M68K_ROL8(g_m68k.d[3], g_m68k.d[6]);
    /* TODO $0A7DF6: dc.w $4f00  [4F 00] */
    M68K_LSL16(g_m68k.d[2], 0x6);
    /* TODO $0A7DFA: dc.w $4f00  [4F 00] */
    M68K_ROL16(g_m68k.d[1], 0x6);
    /* TODO $0A7DFE: dc.w $4f00  [4F 00] */
    M68K_LSL16(g_m68k.d[1], g_m68k.d[6]);
    /* TODO $0A7E02: dc.w $4f00  [4F 00] */
    /* TODO $0A7E04: roxl.w d6, d3  [ED 73] */
    /* TODO $0A7E06: dc.w $4f00  [4F 00] */
    /* TODO $0A7E08: roxl.w d6, d7  [ED 77] */
    /* TODO $0A7E0A: dc.w $4f00  [4F 00] */
    M68K_ROL8(g_m68k.d[4], g_m68k.d[6]);
    /* TODO $0A7E0E: dc.w $4f00  [4F 00] */
    M68K_LSL16(g_m68k.d[3], 0x6);
    /* TODO $0A7E12: dc.w $4f00  [4F 00] */
    M68K_ROL16(g_m68k.d[2], 0x6);
    /* TODO $0A7E16: dc.w $4f00  [4F 00] */
    M68K_LSL16(g_m68k.d[2], g_m68k.d[6]);
    /* TODO $0A7E1A: dc.w $4f00  [4F 00] */
    /* TODO $0A7E1C: roxl.w d6, d3  [ED 73] */
    /* TODO $0A7E1E: dc.w $4f00  [4F 00] */
    M68K_ROL16(g_m68k.d[0], g_m68k.d[6]);
    /* TODO $0A7E22: dc.w $4f00  [4F 00] */
    M68K_ROL8(g_m68k.d[5], g_m68k.d[6]);
    /* TODO $0A7E26: dc.w $4f00  [4F 00] */
    M68K_LSL16(g_m68k.d[4], 0x6);
    /* TODO $0A7E2A: dc.w $4f00  [4F 00] */
    M68K_ROL16(g_m68k.d[3], 0x6);
    /* TODO $0A7E2E: dc.w $4f00  [4F 00] */
    M68K_LSL16(g_m68k.d[3], g_m68k.d[6]);
    /* TODO $0A7E32: dc.w $4f00  [4F 00] */
    /* TODO $0A7E34: roxl.w d6, d4  [ED 74] */
    /* TODO $0A7E36: dc.w $4f00  [4F 00] */
    M68K_ROL16(g_m68k.d[1], g_m68k.d[6]);
    /* TODO $0A7E3A: dc.w $4f00  [4F 00] */
    M68K_ROL8(g_m68k.d[6], g_m68k.d[6]);
    /* TODO $0A7E3E: dc.w $4f00  [4F 00] */
    M68K_LSL16(g_m68k.d[5], 0x6);
    /* TODO $0A7E42: dc.w $4f00  [4F 00] */
    M68K_ROL16(g_m68k.d[4], 0x6);
    /* TODO $0A7E46: dc.w $4f00  [4F 00] */
    M68K_LSL16(g_m68k.d[4], g_m68k.d[6]);
    /* TODO $0A7E4A: dc.w $4f00  [4F 00] */
    /* TODO $0A7E4C: roxl.w d6, d5  [ED 75] */
    /* TODO $0A7E4E: dc.w $4f00  [4F 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_ROL8(g_m68k.d[7], g_m68k.d[6]);
    /* TODO $0A7E56: dc.w $4f00  [4F 00] */
    M68K_LSL16(g_m68k.d[6], 0x6);
    /* TODO $0A7E5A: dc.w $4f00  [4F 00] */
    M68K_ROL16(g_m68k.d[5], 0x6);
    /* TODO $0A7E5E: dc.w $4f00  [4F 00] */
    M68K_LSL16(g_m68k.d[5], g_m68k.d[6]);
    /* TODO $0A7E62: dc.w $4f00  [4F 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_LSL16(g_m68k.d[0], 0x6);
    /* TODO $0A7E6E: dc.w $4f00  [4F 00] */
    M68K_LSL16(g_m68k.d[7], 0x6);
    /* TODO $0A7E72: dc.w $4f00  [4F 00] */
    M68K_ROL16(g_m68k.d[6], 0x6);
    /* TODO $0A7E76: dc.w $4f00  [4F 00] */
    M68K_LSL16(g_m68k.d[6], g_m68k.d[6]);
    /* TODO $0A7E7A: dc.w $4f00  [4F 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_LSL16(g_m68k.d[1], 0x6);
    /* TODO $0A7E86: dc.w $4f00  [4F 00] */
    /* TODO $0A7E88: roxl.w #$6, d0  [ED 50] */
    /* TODO $0A7E8A: dc.w $4f00  [4F 00] */
    M68K_ROL16(g_m68k.d[7], 0x6);
    /* TODO $0A7E8E: dc.w $4f00  [4F 00] */
    M68K_LSL16(g_m68k.d[7], g_m68k.d[6]);
    /* TODO $0A7E92: dc.w $4f00  [4F 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_LSL16(g_m68k.d[2], 0x6);
    /* TODO $0A7E9E: dc.w $4f00  [4F 00] */
    /* TODO $0A7EA0: roxl.w #$6, d1  [ED 51] */
    /* TODO $0A7EA2: dc.w $4f00  [4F 00] */
    M68K_LSL16(g_m68k.d[0], g_m68k.d[6]);
    /* TODO $0A7EA6: dc.w $4f00  [4F 00] */
    /* TODO $0A7EA8: roxl.w d6, d0  [ED 70] */
    /* TODO $0A7EAA: dc.w $4f00  [4F 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_LSL16(g_m68k.d[3], 0x6);
    /* TODO $0A7EB6: dc.w $4f00  [4F 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_LSL16(g_m68k.d[1], g_m68k.d[6]);
    /* TODO $0A7EBE: dc.w $4f00  [4F 00] */
    /* TODO $0A7EC0: roxl.w d6, d1  [ED 71] */
    /* TODO $0A7EC2: dc.w $4f00  [4F 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0A7ECC-$0A7ED0  (1 instructions, 4 bytes) */
void jt_0A7ECC(void) {
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x9); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0A821C-$0A8222  (2 instructions, 6 bytes) */
void jt_0A821C(void) {
    M68K_OR8(g_m68k.d[6], 0x2);
    M68K_ASR32(g_m68k.d[0], g_m68k.d[6]);
    /* WARNING: function did not end with RTS */
}
