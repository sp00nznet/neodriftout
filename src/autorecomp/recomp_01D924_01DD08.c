/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $01D924 - $01DD08 */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

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

/* $01DB40-$01DB54  (9 instructions, 20 bytes) */
void jt_01DB40(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_LSL32(g_m68k.d[0], 0x4);
    /* TODO $01DB46: dc.w $4300  [43 00] */
    M68K_LSL32(g_m68k.d[5], 0x4);
    /* TODO $01DB4A: dc.w $4300  [43 00] */
    M68K_LSL8(g_m68k.d[2], 0x1);
    /* TODO $01DB4E: dc.w $4300  [43 00] */
    M68K_LSL8(g_m68k.d[4], 0x1);
    /* TODO $01DB52: dc.w $4300  [43 00] */
    /* WARNING: function did not end with RTS */
}

/* $01DB54-$01DB68  (9 instructions, 20 bytes) */
void jt_01DB54(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    /* TODO $01DB58: roxr.l d1, d5  [E2 B5] */
    /* TODO $01DB5A: dc.w $4300  [43 00] */
    M68K_LSL8(g_m68k.d[5], 0x1);
    /* TODO $01DB5E: dc.w $4300  [43 00] */
    M68K_LSL32(g_m68k.d[1], 0x4);
    /* TODO $01DB62: dc.w $4300  [43 00] */
    M68K_LSL32(g_m68k.d[6], 0x4);
    /* TODO $01DB66: dc.w $4300  [43 00] */
    /* WARNING: function did not end with RTS */
}

/* $01DB68-$01DB6C  (1 instructions, 4 bytes) */
void jt_01DB68(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    /* WARNING: function did not end with RTS */
}

/* $01DB7C-$01DB90  (9 instructions, 20 bytes) */
void jt_01DB7C(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    /* TODO $01DB80: roxr.l d1, d5  [E2 B5] */
    /* TODO $01DB82: dc.w $4300  [43 00] */
    M68K_LSL8(g_m68k.d[5], 0x1);
    /* TODO $01DB86: dc.w $4300  [43 00] */
    /* TODO $01DB88: roxl.l #$4, d0  [E9 90] */
    /* TODO $01DB8A: dc.w $4300  [43 00] */
    M68K_ROL32(g_m68k.d[0], 0x4);
    /* TODO $01DB8E: dc.w $4300  [43 00] */
    /* WARNING: function did not end with RTS */
}

/* $01DB90-$01DBA0  (7 instructions, 16 bytes) */
void jt_01DB90(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_LSL8(g_m68k.d[4], 0x1);
    /* TODO $01DB96: dc.w $4300  [43 00] */
    M68K_LSL8(g_m68k.d[6], 0x1);
    /* TODO $01DB9A: dc.w $4300  [43 00] */
    /* TODO $01DB9C: roxr.l d1, d6  [E2 B6] */
    /* TODO $01DB9E: dc.w $4300  [43 00] */
    /* WARNING: function did not end with RTS */
}

/* $01DBA4-$01DBB8  (9 instructions, 20 bytes) */
void jt_01DBA4(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    /* TODO $01DBA8: roxl.l #$4, d1  [E9 91] */
    /* TODO $01DBAA: dc.w $4300  [43 00] */
    M68K_ROL32(g_m68k.d[1], 0x4);
    /* TODO $01DBAE: dc.w $4300  [43 00] */
    /* TODO $01DBB0: roxl.l #$4, d2  [E9 92] */
    /* TODO $01DBB2: dc.w $4300  [43 00] */
    M68K_ROL32(g_m68k.d[2], 0x4);
    /* TODO $01DBB6: dc.w $4300  [43 00] */
    /* WARNING: function did not end with RTS */
}

/* $01DBB8-$01DBCC  (9 instructions, 20 bytes) */
void jt_01DBB8(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    /* TODO $01DBBC: roxr.l d1, d3  [E2 B3] */
    /* TODO $01DBBE: dc.w $4300  [43 00] */
    M68K_LSL8(g_m68k.d[1], 0x1);
    /* TODO $01DBC2: dc.w $4300  [43 00] */
    /* TODO $01DBC4: roxr.l d1, d4  [E2 B4] */
    /* TODO $01DBC6: dc.w $4300  [43 00] */
    M68K_LSL32(g_m68k.d[5], 0x4);
    /* TODO $01DBCA: dc.w $4300  [43 00] */
    /* WARNING: function did not end with RTS */
}

/* $01DBCC-$01DBE0  (9 instructions, 20 bytes) */
void jt_01DBCC(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    /* TODO $01DBD0: roxr.l d1, d3  [E2 B3] */
    /* TODO $01DBD2: dc.w $4300  [43 00] */
    M68K_ROL32(g_m68k.d[3], 0x4);
    /* TODO $01DBD6: dc.w $4300  [43 00] */
    /* TODO $01DBD8: roxr.l d1, d4  [E2 B4] */
    /* TODO $01DBDA: dc.w $4300  [43 00] */
    M68K_ROL32(g_m68k.d[4], 0x4);
    /* TODO $01DBDE: dc.w $4300  [43 00] */
    /* WARNING: function did not end with RTS */
}

/* $01DBE0-$01DBF4  (9 instructions, 20 bytes) */
void jt_01DBE0(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    /* TODO $01DBE4: roxl.l #$4, d3  [E9 93] */
    /* TODO $01DBE6: dc.w $4300  [43 00] */
    M68K_ROL32(g_m68k.d[5], 0x4);
    /* TODO $01DBEA: dc.w $4300  [43 00] */
    /* TODO $01DBEC: roxl.l #$4, d4  [E9 94] */
    /* TODO $01DBEE: dc.w $4300  [43 00] */
    M68K_ROL32(g_m68k.d[6], 0x4);
    /* TODO $01DBF2: dc.w $4300  [43 00] */
    /* WARNING: function did not end with RTS */
}

/* $01DBF4-$01DC08  (9 instructions, 20 bytes) */
void jt_01DBF4(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    /* TODO $01DBF8: roxl.l #$4, d5  [E9 95] */
    /* TODO $01DBFA: dc.w $4300  [43 00] */
    M68K_ROL32(g_m68k.d[7], 0x4);
    /* TODO $01DBFE: dc.w $4300  [43 00] */
    M68K_ROL16(g_m68k.d[3], g_m68k.d[4]);
    /* TODO $01DC02: dc.w $4300  [43 00] */
    M68K_LSL32(g_m68k.d[0], g_m68k.d[4]);
    /* TODO $01DC06: dc.w $4300  [43 00] */
    /* WARNING: function did not end with RTS */
}

/* $01DC08-$01DC1C  (9 instructions, 20 bytes) */
void jt_01DC08(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    /* TODO $01DC0C: roxl.l #$4, d5  [E9 95] */
    /* TODO $01DC0E: dc.w $4300  [43 00] */
    M68K_LSL32(g_m68k.d[4], g_m68k.d[4]);
    /* TODO $01DC12: dc.w $4300  [43 00] */
    M68K_ROL16(g_m68k.d[3], g_m68k.d[4]);
    /* TODO $01DC16: dc.w $4300  [43 00] */
    M68K_LSL32(g_m68k.d[5], g_m68k.d[4]);
    /* TODO $01DC1A: dc.w $4300  [43 00] */
    /* WARNING: function did not end with RTS */
}

/* $01DC1C-$01DC30  (9 instructions, 20 bytes) */
void jt_01DC1C(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_LSL32(g_m68k.d[1], g_m68k.d[4]);
    /* TODO $01DC22: dc.w $4300  [43 00] */
    M68K_LSL32(g_m68k.d[6], g_m68k.d[4]);
    /* TODO $01DC26: dc.w $4300  [43 00] */
    M68K_LSL32(g_m68k.d[2], g_m68k.d[4]);
    /* TODO $01DC2A: dc.w $4300  [43 00] */
    M68K_LSL32(g_m68k.d[7], g_m68k.d[4]);
    /* TODO $01DC2E: dc.w $4300  [43 00] */
    /* WARNING: function did not end with RTS */
}

/* $01DC30-$01DC44  (9 instructions, 20 bytes) */
void jt_01DC30(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_LSL32(g_m68k.d[3], g_m68k.d[4]);
    /* TODO $01DC36: dc.w $4300  [43 00] */
    /* TODO $01DC38: roxl.l d4, d0  [E9 B0] */
    /* TODO $01DC3A: dc.w $4300  [43 00] */
    M68K_LSL32(g_m68k.d[4], g_m68k.d[4]);
    /* TODO $01DC3E: dc.w $4300  [43 00] */
    /* TODO $01DC40: roxl.l d4, d1  [E9 B1] */
    /* TODO $01DC42: dc.w $4300  [43 00] */
    /* WARNING: function did not end with RTS */
}

/* $01DC44-$01DC58  (9 instructions, 20 bytes) */
void jt_01DC44(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_LSL32(g_m68k.d[5], g_m68k.d[4]);
    /* TODO $01DC4A: dc.w $4300  [43 00] */
    /* TODO $01DC4C: roxl.l d4, d2  [E9 B2] */
    /* TODO $01DC4E: dc.w $4300  [43 00] */
    M68K_LSL32(g_m68k.d[6], g_m68k.d[4]);
    /* TODO $01DC52: dc.w $4300  [43 00] */
    /* TODO $01DC54: roxl.l d4, d3  [E9 B3] */
    /* TODO $01DC56: dc.w $4300  [43 00] */
    /* WARNING: function did not end with RTS */
}

/* $01DC58-$01DC6C  (6 instructions, 20 bytes) */
void jt_01DC58(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $01DC60: roxl.l d4, d4  [E9 B4] */
    /* TODO $01DC62: dc.w $4300  [43 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $01DC6C-$01DC80  (7 instructions, 20 bytes) */
void jt_01DC6C(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_LSL32(g_m68k.d[7], g_m68k.d[4]);
    /* TODO $01DC72: dc.w $4300  [43 00] */
    /* TODO $01DC74: roxl.l d4, d5  [E9 B5] */
    /* TODO $01DC76: dc.w $4300  [43 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $01DC80-$01DC94  (9 instructions, 20 bytes) */
void jt_01DC80(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_LSL32(g_m68k.d[0], g_m68k.d[4]);
    /* TODO $01DC86: dc.w $4300  [43 00] */
    /* TODO $01DC88: roxl.l d4, d6  [E9 B6] */
    /* TODO $01DC8A: dc.w $4300  [43 00] */
    M68K_LSL32(g_m68k.d[1], g_m68k.d[4]);
    /* TODO $01DC8E: dc.w $4300  [43 00] */
    /* TODO $01DC90: roxl.l d4, d7  [E9 B7] */
    /* TODO $01DC92: dc.w $4300  [43 00] */
    /* WARNING: function did not end with RTS */
}

/* $01DC94-$01DCA8  (9 instructions, 20 bytes) */
void jt_01DC94(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_LSL32(g_m68k.d[2], g_m68k.d[4]);
    /* TODO $01DC9A: dc.w $4300  [43 00] */
    M68K_ROL32(g_m68k.d[0], g_m68k.d[4]);
    /* TODO $01DC9E: dc.w $4300  [43 00] */
    M68K_LSL32(g_m68k.d[3], g_m68k.d[4]);
    /* TODO $01DCA2: dc.w $4300  [43 00] */
    M68K_ROL32(g_m68k.d[1], g_m68k.d[4]);
    /* TODO $01DCA6: dc.w $4300  [43 00] */
    /* WARNING: function did not end with RTS */
}

/* $01DCA8-$01DCBC  (9 instructions, 20 bytes) */
void jt_01DCA8(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_ROL32(g_m68k.d[2], g_m68k.d[4]);
    /* TODO $01DCAE: dc.w $4300  [43 00] */
    M68K_ROL32(g_m68k.d[5], g_m68k.d[4]);
    /* TODO $01DCB2: dc.w $4300  [43 00] */
    M68K_ROL32(g_m68k.d[3], g_m68k.d[4]);
    /* TODO $01DCB6: dc.w $4300  [43 00] */
    M68K_ROL32(g_m68k.d[6], g_m68k.d[4]);
    /* TODO $01DCBA: dc.w $4300  [43 00] */
    /* WARNING: function did not end with RTS */
}

/* $01DCBC-$01DCD0  (9 instructions, 20 bytes) */
void jt_01DCBC(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_LSR32(g_m68k.d[5], g_m68k.d[1]);
    /* TODO $01DCC2: dc.w $4300  [43 00] */
    M68K_ROR32(g_m68k.d[1], g_m68k.d[1]);
    /* TODO $01DCC6: dc.w $4300  [43 00] */
    M68K_LSR32(g_m68k.d[6], g_m68k.d[1]);
    /* TODO $01DCCA: dc.w $4300  [43 00] */
    M68K_ROR32(g_m68k.d[2], g_m68k.d[1]);
    /* TODO $01DCCE: dc.w $4300  [43 00] */
    /* WARNING: function did not end with RTS */
}

/* $01DCD0-$01DCE4  (9 instructions, 20 bytes) */
void jt_01DCD0(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_LSR32(g_m68k.d[7], g_m68k.d[1]);
    /* TODO $01DCD6: dc.w $4300  [43 00] */
    M68K_ROR32(g_m68k.d[3], g_m68k.d[1]);
    /* TODO $01DCDA: dc.w $4300  [43 00] */
    /* TODO $01DCDC: roxr.l d1, d0  [E2 B0] */
    /* TODO $01DCDE: dc.w $4300  [43 00] */
    M68K_ROR32(g_m68k.d[4], g_m68k.d[1]);
    /* TODO $01DCE2: dc.w $4300  [43 00] */
    /* WARNING: function did not end with RTS */
}

/* $01DCE4-$01DCF8  (9 instructions, 20 bytes) */
void jt_01DCE4(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    /* TODO $01DCE8: roxr.l d1, d1  [E2 B1] */
    /* TODO $01DCEA: dc.w $4300  [43 00] */
    M68K_ROR32(g_m68k.d[5], g_m68k.d[1]);
    /* TODO $01DCEE: dc.w $4300  [43 00] */
    /* TODO $01DCF0: roxr.l d1, d2  [E2 B2] */
    /* TODO $01DCF2: dc.w $4300  [43 00] */
    M68K_ROR32(g_m68k.d[6], g_m68k.d[1]);
    /* TODO $01DCF6: dc.w $4300  [43 00] */
    /* WARNING: function did not end with RTS */
}

/* $01DCF8-$01DD08  (7 instructions, 16 bytes) */
void jt_01DCF8(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    /* TODO $01DCFC: roxr.l d1, d3  [E2 B3] */
    /* TODO $01DCFE: dc.w $4300  [43 00] */
    M68K_ROR32(g_m68k.d[7], g_m68k.d[1]);
    /* TODO $01DD02: dc.w $4300  [43 00] */
    /* TODO $01DD04: roxr.l d1, d4  [E2 B4] */
    /* TODO $01DD06: dc.w $4300  [43 00] */
    /* WARNING: function did not end with RTS */
}
