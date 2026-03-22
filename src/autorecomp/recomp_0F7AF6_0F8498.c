/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $0F7AF6 - $0F8498 */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

/* $0F7AF6-$0F7AFA  (2 instructions, 4 bytes) */
void jt_0F7AF6(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0F7AF8: dc.w $8540  [85 40] */
    /* WARNING: function did not end with RTS */
}

/* $0F7B4A-$0F7B4C  (1 instructions, 2 bytes) */
void jt_0F7B4A(void) {
    M68K_ASR16(g_m68k.d[0], 0x8);
    /* WARNING: function did not end with RTS */
}

/* $0F7B52-$0F7B54  (1 instructions, 2 bytes) */
void jt_0F7B52(void) {
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F7C7A-$0F7C82  (4 instructions, 8 bytes) */
void jt_0F7C7A(void) {
    /* TODO $0F7C7A: dc.w $ff16  [FF 16] */
    /* TODO $0F7C7C: dc.w $ff16  [FF 16] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[6]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F7C82-$0F7C9A  (12 instructions, 24 bytes) */
void jt_0F7C82(void) {
    /* TODO $0F7C82: dc.w $ff16  [FF 16] */
    M68K_AND8(g_m68k.d[0], bus_read8(g_m68k.a[6]));
    /* TODO $0F7C86: dc.w $8140  [81 40] */
    M68K_OR8(g_m68k.d[6], bus_read8(g_m68k.a[6]));
    M68K_OR16(g_m68k.d[2], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $0F7C8E: dc.w $8740  [87 40] */
    M68K_OR8(g_m68k.d[3], bus_read8(g_m68k.a[6]));
    M68K_OR16(g_m68k.d[5], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    /* TODO $0F7C96: dc.w $8d40  [8D 40] */
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F7C9A-$0F7CA2  (4 instructions, 8 bytes) */
void jt_0F7C9A(void) {
    /* TODO $0F7C9A: dc.w $ff16  [FF 16] */
    /* TODO $0F7C9C: dc.w $ff16  [FF 16] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[6]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F7CA2-$0F7CAA  (4 instructions, 8 bytes) */
void jt_0F7CA2(void) {
    /* TODO $0F7CA2: dc.w $ff16  [FF 16] */
    /* TODO $0F7CA4: dc.w $ff16  [FF 16] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[6]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F7CAA-$0F7CBC  (9 instructions, 18 bytes) */
void jt_0F7CAA(void) {
    /* TODO $0F7CAA: roxr.b #$7, d6  [EE 16] */
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    /* TODO $0F7CB0: dc.w $8540  [85 40] */
    M68K_OR8(g_m68k.d[4], bus_read8(g_m68k.a[6]));
    M68K_OR16(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    /* TODO $0F7CB8: dc.w $8b40  [8B 40] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[6]));
    /* WARNING: function did not end with RTS */
}

/* $0F7CCE-$0F7CE0  (9 instructions, 18 bytes) */
void jt_0F7CCE(void) {
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    /* TODO $0F7CD0: dc.w $8340  [83 40] */
    M68K_OR8(g_m68k.d[5], bus_read8(g_m68k.a[6]));
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* TODO $0F7CD8: dc.w $8940  [89 40] */
    M68K_OR8(g_m68k.d[2], bus_read8(g_m68k.a[6]));
    M68K_OR16(g_m68k.d[6], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0F7D2E-$0F7D36  (4 instructions, 8 bytes) */
void jt_0F7D2E(void) {
    /* TODO $0F7D2E: dc.w $ff16  [FF 16] */
    /* TODO $0F7D30: dc.w $ff16  [FF 16] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[6]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F7D36-$0F7D4E  (12 instructions, 24 bytes) */
void jt_0F7D36(void) {
    /* TODO $0F7D36: dc.w $ff16  [FF 16] */
    M68K_AND8(g_m68k.d[0], bus_read8(g_m68k.a[6]));
    /* TODO $0F7D3A: dc.w $8140  [81 40] */
    M68K_OR8(g_m68k.d[6], bus_read8(g_m68k.a[6]));
    M68K_OR16(g_m68k.d[2], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $0F7D42: dc.w $8740  [87 40] */
    M68K_OR8(g_m68k.d[3], bus_read8(g_m68k.a[6]));
    M68K_OR16(g_m68k.d[5], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    /* TODO $0F7D4A: dc.w $8d40  [8D 40] */
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F7D4E-$0F7D56  (4 instructions, 8 bytes) */
void jt_0F7D4E(void) {
    /* TODO $0F7D4E: dc.w $ff16  [FF 16] */
    /* TODO $0F7D50: dc.w $ff16  [FF 16] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[6]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F7D56-$0F7D5E  (4 instructions, 8 bytes) */
void jt_0F7D56(void) {
    /* TODO $0F7D56: dc.w $ff16  [FF 16] */
    /* TODO $0F7D58: dc.w $ff16  [FF 16] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[6]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F7D5E-$0F7D70  (9 instructions, 18 bytes) */
void jt_0F7D5E(void) {
    /* TODO $0F7D5E: roxr.b #$7, d6  [EE 16] */
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    /* TODO $0F7D64: dc.w $8540  [85 40] */
    M68K_OR8(g_m68k.d[4], bus_read8(g_m68k.a[6]));
    M68K_OR16(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    /* TODO $0F7D6C: dc.w $8b40  [8B 40] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[6]));
    /* WARNING: function did not end with RTS */
}

/* $0F7D82-$0F7D94  (9 instructions, 18 bytes) */
void jt_0F7D82(void) {
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    /* TODO $0F7D84: dc.w $8340  [83 40] */
    M68K_OR8(g_m68k.d[5], bus_read8(g_m68k.a[6]));
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* TODO $0F7D8C: dc.w $8940  [89 40] */
    M68K_OR8(g_m68k.d[2], bus_read8(g_m68k.a[6]));
    M68K_OR16(g_m68k.d[6], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0F7DE2-$0F7DE4  (1 instructions, 2 bytes) */
void jt_0F7DE2(void) {
    M68K_OR16(g_m68k.d[2], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F7EBE-$0F7EDA  (14 instructions, 28 bytes) */
void jt_0F7EBE(void) {
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[5], g_m68k.d[4]);
    /* TODO $0F7EC2: dc.w $8540  [85 40] */
    /* TODO $0F7EC4: sbcd.b d4, d5  [8B 04] */
    M68K_OR16(g_m68k.d[2], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[6], g_m68k.d[4]);
    /* TODO $0F7ECA: dc.w $8340  [83 40] */
    /* TODO $0F7ECC: sbcd.b d4, d6  [8D 04] */
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[7], g_m68k.d[4]);
    /* TODO $0F7ED2: dc.w $8140  [81 40] */
    /* TODO $0F7ED4: sbcd.b d4, d6  [8D 04] */
    /* TODO $0F7ED6: sbcd.b d3, d0  [81 03] */
    /* TODO $0F7ED8: sbcd.b d4, d0  [81 04] */
    /* WARNING: function did not end with RTS */
}

/* $0F7F84-$0F7FA0  (10 instructions, 28 bytes) */
void jt_0F7F84(void) {
    /* TODO $0F7F84: sbcd -(a0), -(a5), #$830c  [8B 08 83 0C] */
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    /* TODO $0F7F8A: sbcd -(a0), -(a5), #$840c  [8B 08 84 0C] */
    /* TODO $0F7F8E: dc.w $8140  [81 40] */
    /* TODO $0F7F90: sbcd -(a0), -(a5), #$840c  [8B 08 84 0C] */
    /* TODO $0F7F94: dc.w $8140  [81 40] */
    /* TODO $0F7F96: sbcd -(a0), -(a5), #$850c  [8B 08 85 0C] */
    /* TODO $0F7F9A: dc.w $ff10  [FF 10] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F7FA0-$0F7FA2  (1 instructions, 2 bytes) */
void jt_0F7FA0(void) {
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F80CE-$0F80D6  (3 instructions, 8 bytes) */
void jt_0F80CE(void) {
    /* TODO $0F80CE: dc.w $ff16  [FF 16] */
    M68K_AND8(g_m68k.d[0], bus_read8(g_m68k.a[6]));
    /* TODO $0F80D2: sbcd -(a6), -(a0), #$8c16  [81 0E 8C 16] */
    /* WARNING: function did not end with RTS */
}

/* $0F80E6-$0F80E8  (1 instructions, 2 bytes) */
void jt_0F80E6(void) {
    /* TODO $0F80E6: roxr.b #$7, d6  [EE 16] */
    /* WARNING: function did not end with RTS */
}

/* $0F810C-$0F811E  (9 instructions, 18 bytes) */
void jt_0F810C(void) {
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    /* TODO $0F810E: dc.w $8340  [83 40] */
    M68K_OR8(g_m68k.d[5], bus_read8(g_m68k.a[6]));
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* TODO $0F8116: dc.w $8940  [89 40] */
    M68K_OR8(g_m68k.d[2], bus_read8(g_m68k.a[6]));
    M68K_OR16(g_m68k.d[6], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0F8134-$0F8136  (1 instructions, 2 bytes) */
void jt_0F8134(void) {
    M68K_SUBX16(g_m68k.d[7], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F818C-$0F818E  (1 instructions, 2 bytes) */
void jt_0F818C(void) {
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F81D2-$0F81E4  (9 instructions, 18 bytes) */
void jt_0F81D2(void) {
    /* TODO $0F81D2: dc.w $8d40  [8D 40] */
    /* TODO $0F81D4: sbcd.b d6, d1  [83 06] */
    M68K_OR16(g_m68k.d[5], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[3], g_m68k.d[6]);
    /* TODO $0F81DA: dc.w $8740  [87 40] */
    /* TODO $0F81DC: sbcd.b d6, d4  [89 06] */
    M68K_OR16(g_m68k.d[2], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[6], g_m68k.d[6]);
    /* TODO $0F81E2: dc.w $8140  [81 40] */
    /* WARNING: function did not end with RTS */
}

/* $0F81EA-$0F8202  (12 instructions, 24 bytes) */
void jt_0F81EA(void) {
    /* TODO $0F81EA: dc.w $ff16  [FF 16] */
    M68K_AND8(g_m68k.d[0], bus_read8(g_m68k.a[6]));
    /* TODO $0F81EE: dc.w $8140  [81 40] */
    M68K_OR8(g_m68k.d[6], bus_read8(g_m68k.a[6]));
    M68K_OR16(g_m68k.d[2], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $0F81F6: dc.w $8740  [87 40] */
    M68K_OR8(g_m68k.d[3], bus_read8(g_m68k.a[6]));
    M68K_OR16(g_m68k.d[5], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    /* TODO $0F81FE: dc.w $8d40  [8D 40] */
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F8202-$0F8214  (9 instructions, 18 bytes) */
void jt_0F8202(void) {
    /* TODO $0F8202: roxr.b #$7, d6  [EE 16] */
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    /* TODO $0F8208: dc.w $8540  [85 40] */
    M68K_OR8(g_m68k.d[4], bus_read8(g_m68k.a[6]));
    M68K_OR16(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    /* TODO $0F8210: dc.w $8b40  [8B 40] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[6]));
    /* WARNING: function did not end with RTS */
}

/* $0F8226-$0F8228  (1 instructions, 2 bytes) */
void jt_0F8226(void) {
    M68K_SUBX16(g_m68k.d[7], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F823E-$0F8240  (1 instructions, 2 bytes) */
void jt_0F823E(void) {
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F8246-$0F8248  (1 instructions, 2 bytes) */
void jt_0F8246(void) {
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0F82F2-$0F82F4  (1 instructions, 2 bytes) */
void jt_0F82F2(void) {
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F8338-$0F834A  (9 instructions, 18 bytes) */
void jt_0F8338(void) {
    /* TODO $0F8338: dc.w $8d40  [8D 40] */
    /* TODO $0F833A: sbcd.b d6, d1  [83 06] */
    M68K_OR16(g_m68k.d[5], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[3], g_m68k.d[6]);
    /* TODO $0F8340: dc.w $8740  [87 40] */
    /* TODO $0F8342: sbcd.b d6, d4  [89 06] */
    M68K_OR16(g_m68k.d[2], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[6], g_m68k.d[6]);
    /* TODO $0F8348: dc.w $8140  [81 40] */
    /* WARNING: function did not end with RTS */
}

/* $0F8350-$0F8358  (4 instructions, 8 bytes) */
void jt_0F8350(void) {
    /* TODO $0F8350: dc.w $ff14  [FF 14] */
    /* TODO $0F8352: dc.w $ff14  [FF 14] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[4]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F8358-$0F8360  (4 instructions, 8 bytes) */
void jt_0F8358(void) {
    /* TODO $0F8358: dc.w $ff14  [FF 14] */
    /* TODO $0F835A: dc.w $ff14  [FF 14] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[4]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F8360-$0F8368  (4 instructions, 8 bytes) */
void jt_0F8360(void) {
    /* TODO $0F8360: dc.w $ff14  [FF 14] */
    /* TODO $0F8362: dc.w $ff14  [FF 14] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[4]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F8368-$0F8380  (12 instructions, 24 bytes) */
void jt_0F8368(void) {
    /* TODO $0F8368: dc.w $ff14  [FF 14] */
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    /* TODO $0F8370: dc.w $8340  [83 40] */
    M68K_OR8(g_m68k.d[6], bus_read8(g_m68k.a[4]));
    M68K_OR16(g_m68k.d[2], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    /* TODO $0F8378: dc.w $8540  [85 40] */
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $0F837C: dc.w $8740  [87 40] */
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F8380-$0F8388  (4 instructions, 8 bytes) */
void jt_0F8380(void) {
    /* TODO $0F8380: dc.w $ff16  [FF 16] */
    /* TODO $0F8382: dc.w $ff16  [FF 16] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[6]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F8388-$0F8390  (4 instructions, 8 bytes) */
void jt_0F8388(void) {
    /* TODO $0F8388: dc.w $ff16  [FF 16] */
    /* TODO $0F838A: dc.w $ff16  [FF 16] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[6]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F8390-$0F8396  (3 instructions, 6 bytes) */
void jt_0F8390(void) {
    /* TODO $0F8390: roxr.b #$8, d6  [E0 16] */
    M68K_SUB8(g_m68k.d[7], _postinc8(0));
    { uint32_t _t = g_m68k.d[7]; g_m68k.d[7] = g_m68k.d[0]; g_m68k.d[0] = _t; }
    /* WARNING: function did not end with RTS */
}

/* $0F83DE-$0F8402  (18 instructions, 36 bytes) */
void jt_0F83DE(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[7]));
    /* TODO $0F83F4: dc.w $8540  [85 40] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _t = g_m68k.d[2]; g_m68k.d[2] = g_m68k.d[0]; g_m68k.d[0] = _t; }
    M68K_OR8(g_m68k.d[1], _predec8(0));
    /* TODO $0F83FC: dc.w $8b40  [8B 40] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F8402-$0F8420  (15 instructions, 30 bytes) */
void jt_0F8402(void) {
    M68K_SUB8(g_m68k.d[0], _postinc8(0));
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* TODO $0F8406: dc.w $8940  [89 40] */
    M68K_OR8(g_m68k.d[2], bus_read8(g_m68k.a[7]));
    M68K_OR16(g_m68k.d[6], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_EOR16(g_m68k.d[0], g_m68k.d[4]);
    M68K_OR8(g_m68k.d[3], _predec8(0));
    /* TODO $0F8412: dc.w $8740  [87 40] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[2], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[6], _predec8(0));
    /* TODO $0F841A: dc.w $8140  [81 40] */
    M68K_LSL8(g_m68k.d[0], g_m68k.d[7]);
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F8440-$0F8448  (4 instructions, 8 bytes) */
void jt_0F8440(void) {
    /* TODO $0F8440: dc.w $ff16  [FF 16] */
    /* TODO $0F8442: dc.w $ff16  [FF 16] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[6]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F8448-$0F8450  (4 instructions, 8 bytes) */
void jt_0F8448(void) {
    /* TODO $0F8448: dc.w $ff16  [FF 16] */
    /* TODO $0F844A: dc.w $ff16  [FF 16] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[6]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F8450-$0F8458  (4 instructions, 8 bytes) */
void jt_0F8450(void) {
    /* TODO $0F8450: dc.w $ff16  [FF 16] */
    /* TODO $0F8452: dc.w $ff16  [FF 16] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[6]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F8458-$0F8460  (4 instructions, 8 bytes) */
void jt_0F8458(void) {
    /* TODO $0F8458: dc.w $ff16  [FF 16] */
    /* TODO $0F845A: dc.w $ff16  [FF 16] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[6]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F8460-$0F8468  (4 instructions, 8 bytes) */
void jt_0F8460(void) {
    /* TODO $0F8460: dc.w $ff16  [FF 16] */
    /* TODO $0F8462: dc.w $ff16  [FF 16] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[6]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F8468-$0F8470  (4 instructions, 8 bytes) */
void jt_0F8468(void) {
    /* TODO $0F8468: dc.w $ff16  [FF 16] */
    /* TODO $0F846A: dc.w $ff16  [FF 16] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[6]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F8470-$0F8478  (4 instructions, 8 bytes) */
void jt_0F8470(void) {
    /* TODO $0F8470: dc.w $ff16  [FF 16] */
    /* TODO $0F8472: dc.w $ff16  [FF 16] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[6]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F8478-$0F8490  (12 instructions, 24 bytes) */
void jt_0F8478(void) {
    /* TODO $0F8478: dc.w $ff16  [FF 16] */
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    /* TODO $0F8480: dc.w $8540  [85 40] */
    M68K_OR8(g_m68k.d[4], bus_read8(g_m68k.a[6]));
    M68K_OR16(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    /* TODO $0F8488: dc.w $8b40  [8B 40] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[6]));
    M68K_OR16(g_m68k.d[7], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F8490-$0F8498  (4 instructions, 8 bytes) */
void jt_0F8490(void) {
    /* TODO $0F8490: dc.w $ff16  [FF 16] */
    /* TODO $0F8492: dc.w $ff16  [FF 16] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[6]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}
