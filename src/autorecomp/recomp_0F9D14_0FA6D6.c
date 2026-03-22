/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $0F9D14 - $0FA6D6 */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

/* $0F9D14-$0F9D16  (1 instructions, 2 bytes) */
void jt_0F9D14(void) {
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0F9D5A-$0F9D62  (3 instructions, 8 bytes) */
void jt_0F9D5A(void) {
    /* TODO $0F9D5A: dc.w $ff7c  [FF 7C] */
    /* TODO $0F9D5C: dc.w $ff7c  [FF 7C] */
    M68K_OR16(g_m68k.d[1], 0x8000);
    /* WARNING: function did not end with RTS */
}

/* $0F9DA2-$0F9DA4  (1 instructions, 2 bytes) */
void jt_0F9DA2(void) {
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F9DE8-$0F9DFA  (9 instructions, 18 bytes) */
void jt_0F9DE8(void) {
    /* TODO $0F9DE8: dc.w $8d40  [8D 40] */
    /* TODO $0F9DEA: sbcd.b d6, d1  [83 06] */
    M68K_OR16(g_m68k.d[5], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[3], g_m68k.d[6]);
    /* TODO $0F9DF0: dc.w $8740  [87 40] */
    /* TODO $0F9DF2: sbcd.b d6, d4  [89 06] */
    M68K_OR16(g_m68k.d[2], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[6], g_m68k.d[6]);
    /* TODO $0F9DF8: dc.w $8140  [81 40] */
    /* WARNING: function did not end with RTS */
}

/* $0F9E00-$0F9E10  (8 instructions, 16 bytes) */
void jt_0F9E00(void) {
    /* TODO $0F9E00: dc.w $ff20  [FF 20] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_EOR16(g_m68k.d[0], g_m68k.d[7]);
    /* TODO $0F9E06: sbcd.b d7, d0  [81 07] */
    M68K_OR16(g_m68k.d[6], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[2], g_m68k.d[7]);
    /* TODO $0F9E0C: dc.w $8940  [89 40] */
    /* TODO $0F9E0E: sbcd.b d7, d3  [87 07] */
    /* WARNING: function did not end with RTS */
}

/* $0F9E14-$0F9E36  (12 instructions, 34 bytes) */
void jt_0F9E14(void) {
    /* TODO $0F9E14: dc.w $ff20  [FF 20] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0F9E18: dc.w $8740  [87 40] */
    /* TODO $0F9E1A: sbcd -(a0), -(a4), #$8540  [89 08 85 40] */
    M68K_OR8(g_m68k.d[1], g_m68k.d[7]);
    /* TODO $0F9E20: sbcd -(a0), -(a4), #$8240  [89 08 82 40] */
    /* TODO $0F9E24: sbcd.b d7, d2  [85 07] */
    /* TODO $0F9E26: sbcd -(a0), -(a4), #$8707  [89 08 87 07] */
    /* TODO $0F9E2A: sbcd -(a0), -(a4), #$8707  [89 08 87 07] */
    /* TODO $0F9E2E: sbcd -(a0), -(a4), #$8707  [89 08 87 07] */
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_SUBX8(_tmp, _predec8(0)); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F9E46-$0F9E4E  (4 instructions, 8 bytes) */
void jt_0F9E46(void) {
    /* TODO $0F9E46: dc.w $ff20  [FF 20] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0F9E4A: dc.w $f008  [F0 08] */
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F9E4E-$0F9E56  (4 instructions, 8 bytes) */
void jt_0F9E4E(void) {
    /* TODO $0F9E4E: dc.w $ff20  [FF 20] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0F9E52: dc.w $f008  [F0 08] */
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F9E66-$0F9E86  (10 instructions, 32 bytes) */
void jt_0F9E66(void) {
    /* TODO $0F9E66: dc.w $ff20  [FF 20] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0F9E6A: sbcd -(a0), -(a4), #$8740  [89 08 87 40] */
    /* TODO $0F9E6E: sbcd -(a0), -(a4), #$8209  [89 08 82 09] */
    /* TODO $0F9E72: dc.w $8540  [85 40] */
    /* TODO $0F9E74: sbcd -(a0), -(a4), #$8509  [89 08 85 09] */
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    /* TODO $0F9E7A: sbcd -(a0), -(a4), #$8709  [89 08 87 09] */
    /* TODO $0F9E7E: sbcd -(a0), -(a4), #$8709  [89 08 87 09] */
    /* TODO $0F9E82: sbcd -(a0), -(a4), #$8709  [89 08 87 09] */
    /* WARNING: function did not end with RTS */
}

/* $0F9E8A-$0F9E94  (4 instructions, 10 bytes) */
void jt_0F9E8A(void) {
    /* TODO $0F9E8A: dc.w $ff20  [FF 20] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_CMP16(g_m68k.d[0], g_m68k.d[0]);
    /* TODO $0F9E90: sbcd -(a1), -(a0), #$8f40  [81 09 8F 40] */
    /* WARNING: function did not end with RTS */
}

/* $0F9EB0-$0F9EB8  (4 instructions, 8 bytes) */
void jt_0F9EB0(void) {
    /* TODO $0F9EB0: dc.w $ff10  [FF 10] */
    /* TODO $0F9EB2: dc.w $ff10  [FF 10] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[0]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F9EB8-$0F9EFA  (17 instructions, 66 bytes) */
void jt_0F9EB8(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008710; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008710; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008710; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008710; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008710; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008710; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008710; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008710; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008710; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008710; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008710; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008710; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008710; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008710; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008710; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008000; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0F9EFA-$0F9F02  (4 instructions, 8 bytes) */
void jt_0F9EFA(void) {
    /* TODO $0F9EFA: dc.w $ff10  [FF 10] */
    /* TODO $0F9EFC: dc.w $ff10  [FF 10] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[0]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F9F02-$0F9F44  (17 instructions, 66 bytes) */
void jt_0F9F02(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008710; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008710; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008710; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008710; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008710; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008710; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008710; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008710; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008710; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008710; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008710; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008710; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008710; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008710; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008710; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008000; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0F9F44-$0F9F86  (17 instructions, 66 bytes) */
void jt_0F9F44(void) {
    { uint32_t _ea = 0x008700; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008700; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008700; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008700; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008700; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008700; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008700; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008700; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008700; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008700; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008700; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008700; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008700; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008700; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008700; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008700; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F9F8E-$0F9FD0  (17 instructions, 66 bytes) */
void jt_0F9F8E(void) {
    { uint32_t _ea = 0x008700; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008700; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008700; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008700; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008700; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008700; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008700; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008700; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008700; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008700; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008700; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008700; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008700; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008700; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008700; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008700; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F9FD8-$0F9FE0  (4 instructions, 8 bytes) */
void jt_0F9FD8(void) {
    /* TODO $0F9FD8: dc.w $ff10  [FF 10] */
    /* TODO $0F9FDA: dc.w $ff10  [FF 10] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[0]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F9FE0-$0FA022  (17 instructions, 66 bytes) */
void jt_0F9FE0(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008710; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008710; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008710; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008710; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008710; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008710; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008710; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008710; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008710; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008710; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008710; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008710; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008710; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008710; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008710; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008000; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0FA022-$0FA02A  (4 instructions, 8 bytes) */
void jt_0FA022(void) {
    /* TODO $0FA022: dc.w $ff10  [FF 10] */
    /* TODO $0FA024: dc.w $ff10  [FF 10] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[0]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0FA02A-$0FA06C  (17 instructions, 66 bytes) */
void jt_0FA02A(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008710; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008710; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008710; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008710; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008710; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008710; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008710; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008710; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008710; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008710; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008710; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008710; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008710; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008710; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008710; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008000; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0FA06C-$0FA0AE  (17 instructions, 66 bytes) */
void jt_0FA06C(void) {
    { uint32_t _ea = 0x008700; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008700; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008700; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008700; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008700; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008700; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008700; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008700; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008700; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008700; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008700; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008700; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008700; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008700; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008700; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008700; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0FA0B6-$0FA0F8  (17 instructions, 66 bytes) */
void jt_0FA0B6(void) {
    { uint32_t _ea = 0x008700; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008700; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008700; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008700; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008700; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008700; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008700; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008700; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008700; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008700; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008700; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008700; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008700; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008700; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008700; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008700; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0FA100-$0FA110  (7 instructions, 16 bytes) */
void jt_0FA100(void) {
    /* TODO $0FA100: dc.w $ff30  [FF 30] */
    { uint32_t _ea = /* UNHANDLED_ADDR: (a0, invalid.w) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0FA106: sbcd.b d7, d0  [81 07] */
    M68K_OR16(g_m68k.d[6], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[2], g_m68k.d[7]);
    /* TODO $0FA10C: dc.w $8940  [89 40] */
    /* TODO $0FA10E: sbcd.b d7, d3  [87 07] */
    /* WARNING: function did not end with RTS */
}

/* $0FA114-$0FA136  (11 instructions, 34 bytes) */
void jt_0FA114(void) {
    /* TODO $0FA114: dc.w $ff30  [FF 30] */
    { uint32_t _ea = /* UNHANDLED_ADDR: (a0, invalid.w) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0FA11A: sbcd -(a0), -(a4), #$8540  [89 08 85 40] */
    M68K_OR8(g_m68k.d[1], g_m68k.d[7]);
    /* TODO $0FA120: sbcd -(a0), -(a4), #$8240  [89 08 82 40] */
    /* TODO $0FA124: sbcd.b d7, d2  [85 07] */
    /* TODO $0FA126: sbcd -(a0), -(a4), #$8707  [89 08 87 07] */
    /* TODO $0FA12A: sbcd -(a0), -(a4), #$8707  [89 08 87 07] */
    /* TODO $0FA12E: sbcd -(a0), -(a4), #$8707  [89 08 87 07] */
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_SUBX8(_tmp, _predec8(0)); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0FA146-$0FA14E  (3 instructions, 8 bytes) */
void jt_0FA146(void) {
    /* TODO $0FA146: dc.w $ff30  [FF 30] */
    { uint32_t _ea = (g_m68k.a[0] + 0x8 + (int16_t)(uint16_t)g_m68k.a[7]); uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0FA14E-$0FA156  (3 instructions, 8 bytes) */
void jt_0FA14E(void) {
    /* TODO $0FA14E: dc.w $ff30  [FF 30] */
    { uint32_t _ea = (g_m68k.a[0] + 0x8 + (int16_t)(uint16_t)g_m68k.a[7]); uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0FA166-$0FA186  (10 instructions, 32 bytes) */
void jt_0FA166(void) {
    /* TODO $0FA166: dc.w $ff30  [FF 30] */
    { uint32_t _ea = (g_m68k.a[0] + 0 + (int32_t)g_m68k.a[0]); uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0FA16C: dc.w $8740  [87 40] */
    /* TODO $0FA16E: sbcd -(a0), -(a4), #$8209  [89 08 82 09] */
    /* TODO $0FA172: dc.w $8540  [85 40] */
    /* TODO $0FA174: sbcd -(a0), -(a4), #$8509  [89 08 85 09] */
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    /* TODO $0FA17A: sbcd -(a0), -(a4), #$8709  [89 08 87 09] */
    /* TODO $0FA17E: sbcd -(a0), -(a4), #$8709  [89 08 87 09] */
    /* TODO $0FA182: sbcd -(a0), -(a4), #$8709  [89 08 87 09] */
    /* WARNING: function did not end with RTS */
}

/* $0FA18A-$0FA194  (3 instructions, 10 bytes) */
void jt_0FA18A(void) {
    /* TODO $0FA18A: dc.w $ff30  [FF 30] */
    { uint32_t _ea = (g_m68k.a[0] + 0x40 + (int16_t)(uint16_t)g_m68k.a[3]); uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0FA190: sbcd -(a1), -(a0), #$8f40  [81 09 8F 40] */
    /* WARNING: function did not end with RTS */
}

/* $0FA1B0-$0FA1B2  (1 instructions, 2 bytes) */
void jt_0FA1B0(void) {
    /* TODO $0FA1B0: dc.w $ff12  [FF 12] */
    /* WARNING: function did not end with RTS */
}

/* $0FA1D0-$0FA1D4  (2 instructions, 4 bytes) */
void jt_0FA1D0(void) {
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0FA1D2: dc.w $8740  [87 40] */
    /* WARNING: function did not end with RTS */
}

/* $0FA220-$0FA228  (3 instructions, 8 bytes) */
void jt_0FA220(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    /* TODO $0FA222: dc.w $8340  [83 40] */
    /* TODO $0FA224: sbcd -(a6), -(a6), #$8340  [8D 0E 83 40] */
    /* WARNING: function did not end with RTS */
}

/* $0FA246-$0FA248  (1 instructions, 2 bytes) */
void jt_0FA246(void) {
    M68K_OR16(g_m68k.d[4], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0FA322-$0FA32C  (5 instructions, 10 bytes) */
void jt_0FA322(void) {
    M68K_OR16(g_m68k.d[5], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[3], _postinc8(2));
    /* TODO $0FA326: dc.w $8d40  [8D 40] */
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0FA34C-$0FA372  (19 instructions, 38 bytes) */
void jt_0FA34C(void) {
    M68K_CMP8(g_m68k.d[0], _postinc8(4));
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[7], _postinc8(4));
    /* TODO $0FA352: dc.w $8340  [83 40] */
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[2], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[6], _postinc8(4));
    /* TODO $0FA35A: dc.w $8540  [85 40] */
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[5], _postinc8(4));
    /* TODO $0FA362: dc.w $8740  [87 40] */
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[4], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[4], _postinc8(4));
    /* TODO $0FA36A: dc.w $8940  [89 40] */
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* TODO $0FA36E: dc.w $8940  [89 40] */
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0FA3F0-$0FA402  (9 instructions, 18 bytes) */
void jt_0FA3F0(void) {
    /* TODO $0FA3F0: dc.w $8d40  [8D 40] */
    /* TODO $0FA3F2: sbcd.b d6, d1  [83 06] */
    M68K_OR16(g_m68k.d[5], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[3], g_m68k.d[6]);
    /* TODO $0FA3F8: dc.w $8740  [87 40] */
    /* TODO $0FA3FA: sbcd.b d6, d4  [89 06] */
    M68K_OR16(g_m68k.d[2], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[6], g_m68k.d[6]);
    /* TODO $0FA400: dc.w $8140  [81 40] */
    /* WARNING: function did not end with RTS */
}

/* $0FA450-$0FA466  (11 instructions, 22 bytes) */
void jt_0FA450(void) {
    M68K_SUB8(g_m68k.d[0], _postinc8(0));
    /* TODO $0FA452: dc.w $8940  [89 40] */
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[6], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[2], _postinc8(1));
    /* TODO $0FA45A: dc.w $8f40  [8F 40] */
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_CMP16(g_m68k.d[0], g_m68k.d[0]);
    /* TODO $0FA460: dc.w $ff20  [FF 20] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0FA466-$0FA48A  (18 instructions, 36 bytes) */
void jt_0FA466(void) {
    M68K_SUB8(g_m68k.d[0], _postinc8(0));
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $0FA47A: dc.w $8540  [85 40] */
    M68K_OR8(g_m68k.d[1], _postinc8(1));
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $0FA480: dc.w $8740  [87 40] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $0FA484: dc.w $ff20  [FF 20] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0FA49A-$0FA4A2  (4 instructions, 8 bytes) */
void jt_0FA49A(void) {
    /* TODO $0FA49A: dc.w $f018  [F0 18] */
    /* TODO $0FA49C: dc.w $ff20  [FF 20] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0FA4A2-$0FA4AA  (4 instructions, 8 bytes) */
void jt_0FA4A2(void) {
    /* TODO $0FA4A2: dc.w $f018  [F0 18] */
    /* TODO $0FA4A4: dc.w $ff20  [FF 20] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0FA4BA-$0FA4E0  (19 instructions, 38 bytes) */
void jt_0FA4BA(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[7]));
    M68K_OR8(g_m68k.d[7], _postinc8(0));
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
    /* TODO $0FA4D4: dc.w $8540  [85 40] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $0FA4D8: dc.w $8740  [87 40] */
    /* TODO $0FA4DA: dc.w $ff20  [FF 20] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0FA4E0-$0FA4F4  (10 instructions, 20 bytes) */
void jt_0FA4E0(void) {
    M68K_SUB8(g_m68k.d[0], _postinc8(0));
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* TODO $0FA4E4: dc.w $8940  [89 40] */
    M68K_OR8(g_m68k.d[2], bus_read8(g_m68k.a[7]));
    M68K_OR16(g_m68k.d[6], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_EOR16(g_m68k.d[0], g_m68k.d[7]);
    /* TODO $0FA4EE: dc.w $ff20  [FF 20] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0FA4F4-$0FA4FC  (4 instructions, 8 bytes) */
void jt_0FA4F4(void) {
    /* TODO $0FA4F4: dc.w $ff10  [FF 10] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0FA4F8: dc.w $f011  [F0 11] */
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0FA4FC-$0FA54C  (24 instructions, 80 bytes) */
void jt_0FA4FC(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008710; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008710; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008710; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008710; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008710; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008710; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008710; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008710; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008611; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $0FA522: dc.w $8140  [81 40] */
    { uint32_t _ea = 0x008611; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $0FA528: dc.w $8140  [81 40] */
    { uint32_t _ea = 0x008511; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    { uint32_t _ea = 0x008511; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    { uint32_t _ea = 0x008511; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    { uint32_t _ea = 0x008411; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $0FA540: dc.w $8340  [83 40] */
    { uint32_t _ea = 0x008411; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $0FA546: dc.w $8340  [83 40] */
    { uint32_t _ea = 0x008000; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0FA54C-$0FA54E  (1 instructions, 2 bytes) */
void jt_0FA54C(void) {
    /* TODO $0FA54C: dc.w $ff11  [FF 11] */
    /* WARNING: function did not end with RTS */
}

/* $0FA554-$0FA5B6  (33 instructions, 98 bytes) */
void jt_0FA554(void) {
    M68K_OR8(g_m68k.d[2], bus_read8(g_m68k.a[1]));
    /* TODO $0FA556: dc.w $8340  [83 40] */
    { uint32_t _ea = 0x008311; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[2], g_m68k.d[0]);
    { uint32_t _ea = 0x008311; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[2], g_m68k.d[0]);
    { uint32_t _ea = 0x008311; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[2], g_m68k.d[0]);
    { uint32_t _ea = 0x008211; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $0FA56E: dc.w $8540  [85 40] */
    { uint32_t _ea = 0x008211; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $0FA574: dc.w $8540  [85 40] */
    { uint32_t _ea = 0x008211; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $0FA57A: dc.w $8540  [85 40] */
    { uint32_t _ea = 0x008111; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = 0x008111; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = 0x008111; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = 0x008110; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = 0x008110; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = 0x008110; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = 0x008110; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = 0x008110; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = 0x008110; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = 0x008000; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0FA5B6-$0FA606  (24 instructions, 80 bytes) */
void jt_0FA5B6(void) {
    { uint32_t _ea = 0x008700; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008700; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008700; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008700; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008700; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008700; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008700; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008700; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008700; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008140; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[3], _postinc8(7));
    { uint32_t _ea = 0x008140; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[3], _postinc8(7));
    { uint32_t _ea = 0x008240; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008240; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008240; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008340; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[2], _postinc8(7));
    { uint32_t _ea = 0x008340; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[2], _postinc8(7));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0FA60E-$0FA670  (33 instructions, 98 bytes) */
void jt_0FA60E(void) {
    { uint32_t _ea = 0x008340; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[2], _postinc8(7));
    { uint32_t _ea = 0x008440; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008440; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008440; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008540; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[1], _postinc8(7));
    { uint32_t _ea = 0x008540; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[1], _postinc8(7));
    { uint32_t _ea = 0x008540; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[1], _postinc8(7));
    { uint32_t _ea = 0x008640; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008640; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008640; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008640; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $0FA64E: sbcd.b d0, d0  [81 00] */
    { uint32_t _ea = 0x008640; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $0FA654: sbcd.b d0, d0  [81 00] */
    { uint32_t _ea = 0x008640; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $0FA65A: sbcd.b d0, d0  [81 00] */
    { uint32_t _ea = 0x008640; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $0FA660: sbcd.b d0, d0  [81 00] */
    { uint32_t _ea = 0x008640; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $0FA666: sbcd.b d0, d0  [81 00] */
    { uint32_t _ea = 0x008640; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $0FA66C: sbcd.b d0, d0  [81 00] */
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0FA67C-$0FA684  (4 instructions, 8 bytes) */
void jt_0FA67C(void) {
    /* TODO $0FA67C: dc.w $ff10  [FF 10] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0FA680: dc.w $f011  [F0 11] */
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0FA684-$0FA6D4  (24 instructions, 80 bytes) */
void jt_0FA684(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008710; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008710; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008710; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008710; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008710; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008710; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008710; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008710; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008611; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $0FA6AA: dc.w $8140  [81 40] */
    { uint32_t _ea = 0x008611; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $0FA6B0: dc.w $8140  [81 40] */
    { uint32_t _ea = 0x008511; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    { uint32_t _ea = 0x008511; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    { uint32_t _ea = 0x008511; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    { uint32_t _ea = 0x008411; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $0FA6C8: dc.w $8340  [83 40] */
    { uint32_t _ea = 0x008411; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $0FA6CE: dc.w $8340  [83 40] */
    { uint32_t _ea = 0x008000; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0FA6D4-$0FA6D6  (1 instructions, 2 bytes) */
void jt_0FA6D4(void) {
    /* TODO $0FA6D4: dc.w $ff11  [FF 11] */
    /* WARNING: function did not end with RTS */
}
