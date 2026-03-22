/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $076AC4 - $077484 */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

/* $076AC4-$076AE4  (10 instructions, 32 bytes) */
void jt_076AC4(void) {
    /* TODO $076AC4: dc.w $ff30  [FF 30] */
    { uint32_t _ea = (g_m68k.a[0] + 0 + (int32_t)g_m68k.a[0]); uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $076ACA: dc.w $8740  [87 40] */
    /* TODO $076ACC: sbcd -(a0), -(a4), #$8209  [89 08 82 09] */
    /* TODO $076AD0: dc.w $8540  [85 40] */
    /* TODO $076AD2: sbcd -(a0), -(a4), #$8509  [89 08 85 09] */
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    /* TODO $076AD8: sbcd -(a0), -(a4), #$8709  [89 08 87 09] */
    /* TODO $076ADC: sbcd -(a0), -(a4), #$8709  [89 08 87 09] */
    /* TODO $076AE0: sbcd -(a0), -(a4), #$8709  [89 08 87 09] */
    /* WARNING: function did not end with RTS */
}

/* $076AE8-$076AF2  (3 instructions, 10 bytes) */
void jt_076AE8(void) {
    /* TODO $076AE8: dc.w $ff30  [FF 30] */
    { uint32_t _ea = (g_m68k.a[0] + 0x40 + (int16_t)(uint16_t)g_m68k.a[3]); uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $076AEE: sbcd -(a1), -(a0), #$8f40  [81 09 8F 40] */
    /* WARNING: function did not end with RTS */
}

/* $076BCA-$076BDC  (9 instructions, 18 bytes) */
void jt_076BCA(void) {
    /* TODO $076BCA: dc.w $8d40  [8D 40] */
    /* TODO $076BCC: sbcd.b d6, d1  [83 06] */
    M68K_OR16(g_m68k.d[5], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[3], g_m68k.d[6]);
    /* TODO $076BD2: dc.w $8740  [87 40] */
    /* TODO $076BD4: sbcd.b d6, d4  [89 06] */
    M68K_OR16(g_m68k.d[2], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[6], g_m68k.d[6]);
    /* TODO $076BDA: dc.w $8140  [81 40] */
    /* WARNING: function did not end with RTS */
}

/* $076C2A-$076C40  (11 instructions, 22 bytes) */
void jt_076C2A(void) {
    M68K_SUB8(g_m68k.d[0], _postinc8(0));
    /* TODO $076C2C: dc.w $8940  [89 40] */
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[6], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[2], _postinc8(1));
    /* TODO $076C34: dc.w $8f40  [8F 40] */
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_CMP16(g_m68k.d[0], g_m68k.d[0]);
    /* TODO $076C3A: dc.w $ff20  [FF 20] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $076C40-$076C64  (18 instructions, 36 bytes) */
void jt_076C40(void) {
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
    /* TODO $076C54: dc.w $8540  [85 40] */
    M68K_OR8(g_m68k.d[1], _postinc8(1));
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $076C5A: dc.w $8740  [87 40] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $076C5E: dc.w $ff20  [FF 20] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $076C74-$076C7C  (4 instructions, 8 bytes) */
void jt_076C74(void) {
    /* TODO $076C74: dc.w $f018  [F0 18] */
    /* TODO $076C76: dc.w $ff20  [FF 20] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $076C7C-$076C84  (4 instructions, 8 bytes) */
void jt_076C7C(void) {
    /* TODO $076C7C: dc.w $f018  [F0 18] */
    /* TODO $076C7E: dc.w $ff20  [FF 20] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $076C94-$076CBA  (19 instructions, 38 bytes) */
void jt_076C94(void) {
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
    /* TODO $076CAE: dc.w $8540  [85 40] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $076CB2: dc.w $8740  [87 40] */
    /* TODO $076CB4: dc.w $ff20  [FF 20] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $076CBA-$076CCE  (10 instructions, 20 bytes) */
void jt_076CBA(void) {
    M68K_SUB8(g_m68k.d[0], _postinc8(0));
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* TODO $076CBE: dc.w $8940  [89 40] */
    M68K_OR8(g_m68k.d[2], bus_read8(g_m68k.a[7]));
    M68K_OR16(g_m68k.d[6], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_EOR16(g_m68k.d[0], g_m68k.d[7]);
    /* TODO $076CC8: dc.w $ff20  [FF 20] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $076CCE-$076CD6  (4 instructions, 8 bytes) */
void jt_076CCE(void) {
    /* TODO $076CCE: dc.w $ff10  [FF 10] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $076CD2: dc.w $f011  [F0 11] */
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $076CD6-$076D26  (24 instructions, 80 bytes) */
void jt_076CD6(void) {
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
    /* TODO $076CFC: dc.w $8140  [81 40] */
    { uint32_t _ea = 0x008611; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $076D02: dc.w $8140  [81 40] */
    { uint32_t _ea = 0x008511; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    { uint32_t _ea = 0x008511; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    { uint32_t _ea = 0x008511; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    { uint32_t _ea = 0x008411; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $076D1A: dc.w $8340  [83 40] */
    { uint32_t _ea = 0x008411; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $076D20: dc.w $8340  [83 40] */
    { uint32_t _ea = 0x008000; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $076D26-$076D28  (1 instructions, 2 bytes) */
void jt_076D26(void) {
    /* TODO $076D26: dc.w $ff11  [FF 11] */
    /* WARNING: function did not end with RTS */
}

/* $076D2E-$076D90  (33 instructions, 98 bytes) */
void jt_076D2E(void) {
    M68K_OR8(g_m68k.d[2], bus_read8(g_m68k.a[1]));
    /* TODO $076D30: dc.w $8340  [83 40] */
    { uint32_t _ea = 0x008311; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[2], g_m68k.d[0]);
    { uint32_t _ea = 0x008311; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[2], g_m68k.d[0]);
    { uint32_t _ea = 0x008311; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[2], g_m68k.d[0]);
    { uint32_t _ea = 0x008211; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $076D48: dc.w $8540  [85 40] */
    { uint32_t _ea = 0x008211; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $076D4E: dc.w $8540  [85 40] */
    { uint32_t _ea = 0x008211; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $076D54: dc.w $8540  [85 40] */
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

/* $076D90-$076DE0  (24 instructions, 80 bytes) */
void jt_076D90(void) {
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

/* $076DE8-$076E4A  (33 instructions, 98 bytes) */
void jt_076DE8(void) {
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
    /* TODO $076E28: sbcd.b d0, d0  [81 00] */
    { uint32_t _ea = 0x008640; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $076E2E: sbcd.b d0, d0  [81 00] */
    { uint32_t _ea = 0x008640; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $076E34: sbcd.b d0, d0  [81 00] */
    { uint32_t _ea = 0x008640; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $076E3A: sbcd.b d0, d0  [81 00] */
    { uint32_t _ea = 0x008640; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $076E40: sbcd.b d0, d0  [81 00] */
    { uint32_t _ea = 0x008640; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $076E46: sbcd.b d0, d0  [81 00] */
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $076E56-$076E5E  (4 instructions, 8 bytes) */
void jt_076E56(void) {
    /* TODO $076E56: dc.w $ff10  [FF 10] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $076E5A: dc.w $f011  [F0 11] */
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $076E5E-$076EAE  (24 instructions, 80 bytes) */
void jt_076E5E(void) {
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
    /* TODO $076E84: dc.w $8140  [81 40] */
    { uint32_t _ea = 0x008611; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $076E8A: dc.w $8140  [81 40] */
    { uint32_t _ea = 0x008511; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    { uint32_t _ea = 0x008511; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    { uint32_t _ea = 0x008511; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    { uint32_t _ea = 0x008411; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $076EA2: dc.w $8340  [83 40] */
    { uint32_t _ea = 0x008411; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $076EA8: dc.w $8340  [83 40] */
    { uint32_t _ea = 0x008000; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $076EAE-$076EB0  (1 instructions, 2 bytes) */
void jt_076EAE(void) {
    /* TODO $076EAE: dc.w $ff11  [FF 11] */
    /* WARNING: function did not end with RTS */
}

/* $076EB6-$076F18  (33 instructions, 98 bytes) */
void jt_076EB6(void) {
    M68K_OR8(g_m68k.d[2], bus_read8(g_m68k.a[1]));
    /* TODO $076EB8: dc.w $8340  [83 40] */
    { uint32_t _ea = 0x008311; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[2], g_m68k.d[0]);
    { uint32_t _ea = 0x008311; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[2], g_m68k.d[0]);
    { uint32_t _ea = 0x008311; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[2], g_m68k.d[0]);
    { uint32_t _ea = 0x008211; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $076ED0: dc.w $8540  [85 40] */
    { uint32_t _ea = 0x008211; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $076ED6: dc.w $8540  [85 40] */
    { uint32_t _ea = 0x008211; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $076EDC: dc.w $8540  [85 40] */
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

/* $076F18-$076F68  (24 instructions, 80 bytes) */
void jt_076F18(void) {
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

/* $076F70-$076FD2  (33 instructions, 98 bytes) */
void jt_076F70(void) {
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
    /* TODO $076FB0: sbcd.b d0, d0  [81 00] */
    { uint32_t _ea = 0x008640; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $076FB6: sbcd.b d0, d0  [81 00] */
    { uint32_t _ea = 0x008640; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $076FBC: sbcd.b d0, d0  [81 00] */
    { uint32_t _ea = 0x008640; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $076FC2: sbcd.b d0, d0  [81 00] */
    { uint32_t _ea = 0x008640; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $076FC8: sbcd.b d0, d0  [81 00] */
    { uint32_t _ea = 0x008640; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $076FCE: sbcd.b d0, d0  [81 00] */
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $076FEA-$077000  (10 instructions, 22 bytes) */
void jt_076FEA(void) {
    M68K_SUB8(g_m68k.d[0], _postinc8(0));
    /* TODO $076FEC: dc.w $8940  [89 40] */
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[6], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[2], _postinc8(1));
    /* TODO $076FF4: dc.w $8f40  [8F 40] */
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_CMP16(g_m68k.d[0], g_m68k.d[0]);
    /* TODO $076FFA: dc.w $ff30  [FF 30] */
    { uint32_t _ea = (g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.a[0]); uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $077000-$077028  (19 instructions, 40 bytes) */
void jt_077000(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[1], _postinc8(1));
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $077018: dc.w $8540  [85 40] */
    M68K_OR8(g_m68k.d[1], _postinc8(1));
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $07701E: dc.w $8740  [87 40] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $077022: dc.w $ff30  [FF 30] */
    { uint32_t _ea = (g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.a[0]); uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $077038-$077040  (3 instructions, 8 bytes) */
void jt_077038(void) {
    /* TODO $077038: dc.w $f018  [F0 18] */
    /* TODO $07703A: dc.w $ff30  [FF 30] */
    { uint32_t _ea = (g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.a[0]); uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $077040-$077048  (3 instructions, 8 bytes) */
void jt_077040(void) {
    /* TODO $077040: dc.w $f018  [F0 18] */
    /* TODO $077042: dc.w $ff30  [FF 30] */
    { uint32_t _ea = (g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.a[0]); uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $077058-$07707A  (16 instructions, 34 bytes) */
void jt_077058(void) {
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
    /* TODO $07706E: dc.w $8540  [85 40] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $077072: dc.w $8740  [87 40] */
    /* TODO $077074: dc.w $ff30  [FF 30] */
    { uint32_t _ea = (g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.a[0]); uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $07707A-$07708E  (9 instructions, 20 bytes) */
void jt_07707A(void) {
    M68K_SUB8(g_m68k.d[0], _postinc8(0));
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* TODO $07707E: dc.w $8940  [89 40] */
    M68K_OR8(g_m68k.d[2], bus_read8(g_m68k.a[7]));
    M68K_OR16(g_m68k.d[6], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_EOR16(g_m68k.d[0], g_m68k.d[7]);
    /* TODO $077088: dc.w $ff30  [FF 30] */
    { uint32_t _ea = (g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.a[0]); uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $07709E-$0770AC  (7 instructions, 14 bytes) */
void jt_07709E(void) {
    M68K_SUB8(g_m68k.d[0], _postinc8(0));
    /* TODO $0770A0: dc.w $8940  [89 40] */
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[6], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[2], _postinc8(1));
    /* TODO $0770A8: dc.w $8f40  [8F 40] */
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0770C2-$0770EE  (19 instructions, 44 bytes) */
void jt_0770C2(void) {
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
    /* TODO $0770D6: dc.w $8540  [85 40] */
    M68K_OR8(g_m68k.d[1], _postinc8(1));
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $0770DC: dc.w $8740  [87 40] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_CMP16(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[0] + 0x40 + (int32_t)g_m68k.a[0]));
    { uint32_t _ea = /* UNHANDLED_ADDR: (a0, invalid.w) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    M68K_AND8(g_m68k.d[0], bus_read8(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.a[0]));
    /* WARNING: function did not end with RTS */
}

/* $0770FE-$077100  (1 instructions, 2 bytes) */
void jt_0770FE(void) {
    /* TODO $0770FE: dc.w $f018  [F0 18] */
    /* WARNING: function did not end with RTS */
}

/* $077100-$077106  (2 instructions, 6 bytes) */
void jt_077100(void) {
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_AND8(g_m68k.d[0], bus_read8(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.a[0]));
    /* WARNING: function did not end with RTS */
}

/* $077106-$07710E  (3 instructions, 8 bytes) */
void jt_077106(void) {
    /* TODO $077106: dc.w $f018  [F0 18] */
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_AND8(g_m68k.d[0], bus_read8(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.a[0]));
    /* WARNING: function did not end with RTS */
}

/* $07711E-$077142  (16 instructions, 36 bytes) */
void jt_07711E(void) {
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
    /* TODO $077134: dc.w $8540  [85 40] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _t = g_m68k.d[2]; g_m68k.d[2] = g_m68k.d[0]; g_m68k.d[0] = _t; }
    M68K_OR8(g_m68k.d[1], /* UNHANDLED_READ: (a0, invalid.w) */ 0);
    { uint32_t _ea = (g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.a[0]); uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $077142-$077160  (12 instructions, 30 bytes) */
void jt_077142(void) {
    M68K_SUB8(g_m68k.d[0], _postinc8(0));
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* TODO $077146: dc.w $8940  [89 40] */
    M68K_OR8(g_m68k.d[2], bus_read8(g_m68k.a[7]));
    M68K_OR16(g_m68k.d[6], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_EOR16(g_m68k.d[0], g_m68k.d[4]);
    M68K_OR8(g_m68k.d[3], /* UNHANDLED_READ: (a0, invalid.w) */ 0);
    { uint32_t _ea = (g_m68k.a[0] + 0x40 + (int16_t)(uint16_t)g_m68k.a[0]); uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[6], /* UNHANDLED_READ: (a0, invalid.w) */ 0);
    /* TODO $07715C: roxl.b d7, d0  [EF 30] */
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $077170-$0771B0  (17 instructions, 64 bytes) */
void jt_077170(void) {
    M68K_SUB8(g_m68k.d[0], _postinc8(0));
    M68K_OR8(g_m68k.d[5], bus_read8(g_m68k.a[0] + 0x41 + (int16_t)(uint16_t)g_m68k.a[0]));
    M68K_OR8(g_m68k.d[4], bus_read8(g_m68k.a[0] + 0x41 + (int32_t)g_m68k.a[0]));
    M68K_OR8(g_m68k.d[4], bus_read8(g_m68k.a[0] + 0x41 + (int32_t)g_m68k.a[0]));
    { uint32_t _ea = /* UNHANDLED_ADDR: ([a0]) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = /* UNHANDLED_ADDR: ([a0]) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = /* UNHANDLED_ADDR: ([a0]) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = /* UNHANDLED_ADDR: ([a0]) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = /* UNHANDLED_ADDR: ([a0]) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = /* UNHANDLED_ADDR: ([a0]) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = /* UNHANDLED_ADDR: ([a0]) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = /* UNHANDLED_ADDR: ([a0]) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[3], bus_read8(g_m68k.a[0] + 0x41 + (int32_t)g_m68k.a[0]));
    M68K_OR8(g_m68k.d[3], bus_read8(g_m68k.a[0] + 0x41 + (int32_t)g_m68k.a[0]));
    M68K_OR8(g_m68k.d[3], bus_read8(g_m68k.a[0] + 0x41 + (int32_t)g_m68k.a[0]));
    M68K_OR8(g_m68k.d[3], bus_read8(g_m68k.a[0] + 0x41 + (int32_t)g_m68k.a[0]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0771B0-$0771B2  (1 instructions, 2 bytes) */
void jt_0771B0(void) {
    M68K_SUB8(g_m68k.d[0], _postinc8(0));
    /* WARNING: function did not end with RTS */
}

/* $0771C8-$0771E4  (8 instructions, 28 bytes) */
void jt_0771C8(void) {
    M68K_SUB8(g_m68k.d[0], _postinc8(0));
    M68K_ASR16(g_m68k.d[0], 0x8);
    M68K_OR8(g_m68k.d[6], bus_read8(g_m68k.a[0] + 0x40 + (int16_t)(uint16_t)g_m68k.a[0]));
    { uint32_t _ea = /* UNHANDLED_ADDR: (a0, invalid.w) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = /* UNHANDLED_ADDR: (a0, invalid.w) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = /* UNHANDLED_ADDR: (a0, invalid.w) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = /* UNHANDLED_ADDR: (a0, invalid.w) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    M68K_AND8(g_m68k.d[0], bus_read8(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.a[0]));
    /* WARNING: function did not end with RTS */
}

/* $0771E4-$0771E6  (1 instructions, 2 bytes) */
void jt_0771E4(void) {
    M68K_SUB8(g_m68k.d[0], _postinc8(0));
    /* WARNING: function did not end with RTS */
}

/* $077208-$07720C  (2 instructions, 4 bytes) */
void jt_077208(void) {
    M68K_ASR16(g_m68k.d[0], 0x8);
    /* TODO $07720A: dc.w $ff30  [FF 30] */
    /* WARNING: function did not end with RTS */
}

/* $077210-$077214  (2 instructions, 4 bytes) */
void jt_077210(void) {
    M68K_ASR16(g_m68k.d[0], 0x8);
    /* TODO $077212: dc.w $ff30  [FF 30] */
    /* WARNING: function did not end with RTS */
}

/* $077218-$077228  (8 instructions, 16 bytes) */
void jt_077218(void) {
    /* TODO $077218: dc.w $ff20  [FF 20] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_EOR16(g_m68k.d[0], g_m68k.d[7]);
    /* TODO $07721E: sbcd.b d7, d0  [81 07] */
    M68K_OR16(g_m68k.d[6], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[2], g_m68k.d[7]);
    /* TODO $077224: dc.w $8940  [89 40] */
    /* TODO $077226: sbcd.b d7, d3  [87 07] */
    /* WARNING: function did not end with RTS */
}

/* $07722C-$07724E  (12 instructions, 34 bytes) */
void jt_07722C(void) {
    /* TODO $07722C: dc.w $ff20  [FF 20] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $077230: dc.w $8740  [87 40] */
    /* TODO $077232: sbcd -(a0), -(a4), #$8540  [89 08 85 40] */
    M68K_OR8(g_m68k.d[1], g_m68k.d[7]);
    /* TODO $077238: sbcd -(a0), -(a4), #$8240  [89 08 82 40] */
    /* TODO $07723C: sbcd.b d7, d2  [85 07] */
    /* TODO $07723E: sbcd -(a0), -(a4), #$8707  [89 08 87 07] */
    /* TODO $077242: sbcd -(a0), -(a4), #$8707  [89 08 87 07] */
    /* TODO $077246: sbcd -(a0), -(a4), #$8707  [89 08 87 07] */
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_SUBX8(_tmp, _predec8(0)); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $07725E-$077266  (4 instructions, 8 bytes) */
void jt_07725E(void) {
    /* TODO $07725E: dc.w $ff20  [FF 20] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $077262: dc.w $f008  [F0 08] */
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $077266-$07726E  (4 instructions, 8 bytes) */
void jt_077266(void) {
    /* TODO $077266: dc.w $ff20  [FF 20] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $07726A: dc.w $f008  [F0 08] */
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $07727E-$07729E  (10 instructions, 32 bytes) */
void jt_07727E(void) {
    /* TODO $07727E: dc.w $ff20  [FF 20] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $077282: sbcd -(a0), -(a4), #$8740  [89 08 87 40] */
    /* TODO $077286: sbcd -(a0), -(a4), #$8209  [89 08 82 09] */
    /* TODO $07728A: dc.w $8540  [85 40] */
    /* TODO $07728C: sbcd -(a0), -(a4), #$8509  [89 08 85 09] */
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    /* TODO $077292: sbcd -(a0), -(a4), #$8709  [89 08 87 09] */
    /* TODO $077296: sbcd -(a0), -(a4), #$8709  [89 08 87 09] */
    /* TODO $07729A: sbcd -(a0), -(a4), #$8709  [89 08 87 09] */
    /* WARNING: function did not end with RTS */
}

/* $0772A2-$0772AC  (4 instructions, 10 bytes) */
void jt_0772A2(void) {
    /* TODO $0772A2: dc.w $ff20  [FF 20] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_CMP16(g_m68k.d[0], g_m68k.d[0]);
    /* TODO $0772A8: sbcd -(a1), -(a0), #$8f40  [81 09 8F 40] */
    /* WARNING: function did not end with RTS */
}

/* $0772D8-$07731A  (17 instructions, 66 bytes) */
void jt_0772D8(void) {
    M68K_OR16(g_m68k.d[6], g_m68k.d[0]);
    M68K_OR16(g_m68k.d[2], 0x8c40);
    M68K_OR16(g_m68k.d[2], 0x8c40);
    M68K_OR16(g_m68k.d[2], 0x8c40);
    M68K_OR16(g_m68k.d[2], 0x8c40);
    M68K_OR16(g_m68k.d[2], 0x8c40);
    M68K_OR16(g_m68k.d[2], 0x8c20);
    M68K_OR16(g_m68k.d[2], 0x8c20);
    M68K_OR16(g_m68k.d[2], 0x8c20);
    M68K_OR16(g_m68k.d[2], 0x8c20);
    M68K_OR16(g_m68k.d[2], 0x8c20);
    M68K_OR16(g_m68k.d[2], 0x8c20);
    M68K_OR16(g_m68k.d[2], 0x8c20);
    M68K_OR16(g_m68k.d[2], 0x8c20);
    M68K_OR16(g_m68k.d[2], 0x8c20);
    M68K_OR16(g_m68k.d[2], 0x8c20);
    M68K_OR16(g_m68k.d[2], 0x8000);
    /* WARNING: function did not end with RTS */
}

/* $07735C-$07739E  (17 instructions, 66 bytes) */
void jt_07735C(void) {
    M68K_OR8(g_m68k.d[6], _predec8(0));
    M68K_OR16(g_m68k.d[2], 0x8c20);
    M68K_OR16(g_m68k.d[2], 0x8c20);
    M68K_OR16(g_m68k.d[2], 0x8c20);
    M68K_OR16(g_m68k.d[2], 0x8c20);
    M68K_OR16(g_m68k.d[2], 0x8c20);
    M68K_OR16(g_m68k.d[2], 0x8c20);
    M68K_OR16(g_m68k.d[2], 0x8c20);
    M68K_OR16(g_m68k.d[2], 0x8c20);
    M68K_OR16(g_m68k.d[2], 0x8c20);
    M68K_OR16(g_m68k.d[2], 0x8c40);
    M68K_OR16(g_m68k.d[2], 0x8c40);
    M68K_OR16(g_m68k.d[2], 0x8c40);
    M68K_OR16(g_m68k.d[2], 0x8c40);
    M68K_OR16(g_m68k.d[2], 0x8c40);
    M68K_OR16(g_m68k.d[2], 0x8c40);
    M68K_OR16(g_m68k.d[2], 0x8000);
    /* WARNING: function did not end with RTS */
}

/* $077400-$077402  (1 instructions, 2 bytes) */
void jt_077400(void) {
    M68K_OR16(g_m68k.d[6], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $077442-$077484  (17 instructions, 66 bytes) */
void jt_077442(void) {
    M68K_OR16(g_m68k.d[2], 0x8c40);
    M68K_OR16(g_m68k.d[2], 0x8c40);
    M68K_OR16(g_m68k.d[2], 0x8c40);
    M68K_OR16(g_m68k.d[2], 0x8c40);
    M68K_OR16(g_m68k.d[2], 0x8c40);
    M68K_OR16(g_m68k.d[2], 0x8c40);
    M68K_OR16(g_m68k.d[2], 0x8c30);
    M68K_OR16(g_m68k.d[2], 0x8c30);
    M68K_OR16(g_m68k.d[2], 0x8c30);
    M68K_OR16(g_m68k.d[2], 0x8c30);
    M68K_OR16(g_m68k.d[2], 0x8c30);
    M68K_OR16(g_m68k.d[2], 0x8c30);
    M68K_OR16(g_m68k.d[2], 0x8c30);
    M68K_OR16(g_m68k.d[2], 0x8c30);
    M68K_OR16(g_m68k.d[2], 0x8c30);
    M68K_OR16(g_m68k.d[2], 0x8c30);
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}
