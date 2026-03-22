/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $0F4F4C - $0F5D3C */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

/* $0F4F4C-$0F4F60  (10 instructions, 20 bytes) */
void jt_0F4F4C(void) {
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* TODO $0F4F4E: dc.w $8940  [89 40] */
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* TODO $0F4F52: dc.w $8940  [89 40] */
    M68K_OR8(g_m68k.d[3], bus_read8(g_m68k.a[2]));
    M68K_OR16(g_m68k.d[5], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    /* TODO $0F4F5A: dc.w $8b40  [8B 40] */
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[5], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F4FA6-$0F4FAE  (4 instructions, 8 bytes) */
void jt_0F4FA6(void) {
    /* TODO $0F4FA6: dc.w $ff10  [FF 10] */
    /* TODO $0F4FA8: dc.w $ff10  [FF 10] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[0]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F4FAE-$0F4FB2  (2 instructions, 4 bytes) */
void jt_0F4FAE(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0F4FB0: dc.w $8740  [87 40] */
    /* WARNING: function did not end with RTS */
}

/* $0F5010-$0F5012  (1 instructions, 2 bytes) */
void jt_0F5010(void) {
    M68K_OR16(g_m68k.d[2], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F5082-$0F50AA  (20 instructions, 40 bytes) */
void jt_0F5082(void) {
    /* TODO $0F5082: dc.w $8d40  [8D 40] */
    /* TODO $0F5084: sbcd.b d6, d1  [83 06] */
    M68K_OR16(g_m68k.d[5], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[3], g_m68k.d[6]);
    /* TODO $0F508A: dc.w $8740  [87 40] */
    /* TODO $0F508C: sbcd.b d6, d4  [89 06] */
    /* TODO $0F508E: dc.w $8540  [85 40] */
    /* TODO $0F5090: sbcd.b d6, d5  [8B 06] */
    /* TODO $0F5092: dc.w $8340  [83 40] */
    /* TODO $0F5094: sbcd.b d5, d6  [8D 05] */
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[7], g_m68k.d[4]);
    /* TODO $0F509A: dc.w $8140  [81 40] */
    /* TODO $0F509C: sbcd.b d3, d7  [8F 03] */
    /* TODO $0F509E: dc.w $8140  [81 40] */
    /* TODO $0F50A0: sbcd.b d2, d7  [8F 02] */
    /* TODO $0F50A2: dc.w $8140  [81 40] */
    /* TODO $0F50A4: sbcd.b d2, d7  [8F 02] */
    /* TODO $0F50A6: dc.w $f001  [F0 01] */
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F50D8-$0F50DC  (1 instructions, 4 bytes) */
void jt_0F50D8(void) {
    /* TODO $0F50D8: sbcd -(a2), -(a1), #$8d40  [83 0A 8D 40] */
    /* WARNING: function did not end with RTS */
}

/* $0F5100-$0F5102  (1 instructions, 2 bytes) */
void jt_0F5100(void) {
    /* TODO $0F5100: dc.w $8140  [81 40] */
    /* WARNING: function did not end with RTS */
}

/* $0F514A-$0F515A  (8 instructions, 16 bytes) */
void jt_0F514A(void) {
    /* TODO $0F514A: dc.w $8940  [89 40] */
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* TODO $0F514E: dc.w $8940  [89 40] */
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[5], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[3], _postinc8(6));
    /* TODO $0F5156: dc.w $8b40  [8B 40] */
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0F51A4-$0F51A6  (1 instructions, 2 bytes) */
void jt_0F51A4(void) {
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0F521A-$0F5224  (5 instructions, 10 bytes) */
void jt_0F521A(void) {
    /* TODO $0F521A: dc.w $ff12  [FF 12] */
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[0], bus_read8(g_m68k.a[1]));
    /* TODO $0F5220: dc.w $f010  [F0 10] */
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F5224-$0F5228  (2 instructions, 4 bytes) */
void jt_0F5224(void) {
    M68K_OR8(g_m68k.d[2], bus_read8(g_m68k.a[2]));
    /* TODO $0F5226: dc.w $8740  [87 40] */
    /* WARNING: function did not end with RTS */
}

/* $0F5286-$0F528E  (4 instructions, 8 bytes) */
void jt_0F5286(void) {
    /* TODO $0F5286: dc.w $ff10  [FF 10] */
    /* TODO $0F5288: dc.w $ff10  [FF 10] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[0]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F528E-$0F5292  (2 instructions, 4 bytes) */
void jt_0F528E(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0F5290: dc.w $8540  [85 40] */
    /* WARNING: function did not end with RTS */
}

/* $0F530C-$0F530E  (1 instructions, 2 bytes) */
void jt_0F530C(void) {
    /* TODO $0F530C: dc.w $ff20  [FF 20] */
    /* WARNING: function did not end with RTS */
}

/* $0F5358-$0F5372  (11 instructions, 26 bytes) */
void jt_0F5358(void) {
    M68K_OR16(g_m68k.d[2], g_m68k.d[0]);
    /* TODO $0F535A: sbcd.b d6, d0  [81 06] */
    M68K_OR8(g_m68k.d[1], g_m68k.d[7]);
    /* TODO $0F535E: sbcd -(a0), -(a4), #$8340  [89 08 83 40] */
    /* TODO $0F5362: sbcd.b d5, d0  [81 05] */
    /* TODO $0F5364: sbcd.b d6, d0  [81 06] */
    M68K_OR8(g_m68k.d[1], g_m68k.d[7]);
    /* TODO $0F5368: sbcd -(a0), -(a4), #$8240  [89 08 82 40] */
    M68K_OR8(g_m68k.d[7], g_m68k.d[4]);
    /* TODO $0F536E: dc.w $8140  [81 40] */
    /* TODO $0F5370: sbcd.b d3, d7  [8F 03] */
    /* WARNING: function did not end with RTS */
}

/* $0F5378-$0F537A  (1 instructions, 2 bytes) */
void jt_0F5378(void) {
    /* TODO $0F5378: dc.w $ff30  [FF 30] */
    /* WARNING: function did not end with RTS */
}

/* $0F53A2-$0F53B4  (5 instructions, 18 bytes) */
void jt_0F53A2(void) {
    /* TODO $0F53A2: sbcd -(a0), -(a4), #$8209  [89 08 82 09] */
    /* TODO $0F53A6: sbcd -(a2), -(a0), #$8440  [81 0A 84 40] */
    /* TODO $0F53AA: sbcd -(a0), -(a4), #$8209  [89 08 82 09] */
    /* TODO $0F53AE: sbcd -(a2), -(a0), #$810b  [81 0A 81 0B] */
    /* TODO $0F53B2: dc.w $8340  [83 40] */
    /* WARNING: function did not end with RTS */
}

/* $0F53C2-$0F53C4  (1 instructions, 2 bytes) */
void jt_0F53C2(void) {
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F54DA-$0F54E2  (4 instructions, 8 bytes) */
void jt_0F54DA(void) {
    /* TODO $0F54DA: dc.w $ff10  [FF 10] */
    /* TODO $0F54DC: dc.w $ff10  [FF 10] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[0]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F54E2-$0F5524  (17 instructions, 66 bytes) */
void jt_0F54E2(void) {
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008000));
    /* WARNING: function did not end with RTS */
}

/* $0F5524-$0F552C  (4 instructions, 8 bytes) */
void jt_0F5524(void) {
    /* TODO $0F5524: dc.w $ff10  [FF 10] */
    /* TODO $0F5526: dc.w $ff10  [FF 10] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[0]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F552C-$0F556E  (17 instructions, 66 bytes) */
void jt_0F552C(void) {
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008000));
    /* WARNING: function did not end with RTS */
}

/* $0F556E-$0F55B0  (17 instructions, 66 bytes) */
void jt_0F556E(void) {
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F55B8-$0F55FA  (17 instructions, 66 bytes) */
void jt_0F55B8(void) {
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F565E-$0F5670  (9 instructions, 18 bytes) */
void jt_0F565E(void) {
    /* TODO $0F565E: dc.w $8d40  [8D 40] */
    /* TODO $0F5660: sbcd.b d6, d1  [83 06] */
    M68K_OR16(g_m68k.d[5], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[3], g_m68k.d[6]);
    /* TODO $0F5666: dc.w $8740  [87 40] */
    /* TODO $0F5668: sbcd.b d6, d4  [89 06] */
    M68K_OR16(g_m68k.d[2], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[6], g_m68k.d[6]);
    /* TODO $0F566E: dc.w $8140  [81 40] */
    /* WARNING: function did not end with RTS */
}

/* $0F56D6-$0F56DA  (1 instructions, 4 bytes) */
void jt_0F56D6(void) {
    /* TODO $0F56D6: sbcd -(a2), -(a1), #$8d40  [83 0A 8D 40] */
    /* WARNING: function did not end with RTS */
}

/* $0F5700-$0F5712  (5 instructions, 18 bytes) */
void jt_0F5700(void) {
    /* TODO $0F5700: dc.w $8540  [85 40] */
    { uint32_t _ea = (g_m68k.a[2] + 0x40 + (int32_t)g_m68k.a[0]); uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[4], /* UNHANDLED_READ: (a2, invalid.w) */ 0);
    { uint32_t _ea = (g_m68k.a[2] + 0x40 + (int32_t)g_m68k.a[0]); uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[2] + 0x40 + (int16_t)(uint16_t)g_m68k.a[1]));
    /* WARNING: function did not end with RTS */
}

/* $0F572A-$0F5746  (7 instructions, 28 bytes) */
void jt_0F572A(void) {
    M68K_AND8(g_m68k.d[0], /* UNHANDLED_READ: (a2, invalid.w) */ 0);
    { uint32_t _ea = (g_m68k.a[2] + 0x40 + (int16_t)(uint16_t)g_m68k.a[0]); uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[6], /* UNHANDLED_READ: (a2, invalid.w) */ 0);
    { uint32_t _ea = (g_m68k.a[2] + 0x40 + (int32_t)g_m68k.a[0]); uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[3], /* UNHANDLED_READ: (a2, invalid.w) */ 0);
    { uint32_t _ea = (g_m68k.a[2] + 0x40 + (int16_t)(uint16_t)g_m68k.a[1]); uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    /* TODO $0F5742: sbcd -(a2), -(a0), #$8f40  [81 0A 8F 40] */
    /* WARNING: function did not end with RTS */
}

/* $0F5784-$0F5788  (1 instructions, 4 bytes) */
void jt_0F5784(void) {
    /* TODO $0F5784: sbcd -(a7), -(a0), #$8640  [81 0F 86 40] */
    /* WARNING: function did not end with RTS */
}

/* $0F57DE-$0F57E0  (1 instructions, 2 bytes) */
void jt_0F57DE(void) {
    M68K_OR16(g_m68k.d[4], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F587E-$0F58A4  (19 instructions, 38 bytes) */
void jt_0F587E(void) {
    /* TODO $0F587E: dc.w $f01f  [F0 1F] */
    M68K_SUB8(g_m68k.d[0], _postinc8(6));
    /* TODO $0F5882: dc.w $8140  [81 40] */
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    /* TODO $0F5886: dc.w $8140  [81 40] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[7], _postinc8(5));
    /* TODO $0F588E: dc.w $8340  [83 40] */
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    /* TODO $0F5892: dc.w $8540  [85 40] */
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    /* TODO $0F5896: dc.w $8740  [87 40] */
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[5], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[3], _postinc8(2));
    /* TODO $0F589E: dc.w $8d40  [8D 40] */
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F58B6-$0F58B8  (1 instructions, 2 bytes) */
void jt_0F58B6(void) {
    M68K_SUB16(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F58D6-$0F58FA  (18 instructions, 36 bytes) */
void jt_0F58D6(void) {
    /* TODO $0F58D6: dc.w $f011  [F0 11] */
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    /* TODO $0F58DA: dc.w $8140  [81 40] */
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    /* TODO $0F58DE: dc.w $8140  [81 40] */
    M68K_OR8(g_m68k.d[7], bus_read8(g_m68k.a[3]));
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    /* TODO $0F58E6: dc.w $8340  [83 40] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    /* TODO $0F58EA: dc.w $8540  [85 40] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $0F58EE: dc.w $8740  [87 40] */
    M68K_OR8(g_m68k.d[3], bus_read8(g_m68k.a[6]));
    M68K_OR16(g_m68k.d[5], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    /* TODO $0F58F6: dc.w $8d40  [8D 40] */
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F58FA-$0F58FE  (2 instructions, 4 bytes) */
void jt_0F58FA(void) {
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0F58FC: dc.w $8540  [85 40] */
    /* WARNING: function did not end with RTS */
}

/* $0F5944-$0F5946  (1 instructions, 2 bytes) */
void jt_0F5944(void) {
    M68K_SUBX16(g_m68k.d[7], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F5A3A-$0F5A3C  (1 instructions, 2 bytes) */
void jt_0F5A3A(void) {
    M68K_ADD8(g_m68k.d[0], bus_read8(g_m68k.a[0]));
    /* WARNING: function did not end with RTS */
}

/* $0F5A62-$0F5AAE  (22 instructions, 76 bytes) */
void jt_0F5A62(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0F5A64: dc.w $8540  [85 40] */
    M68K_OR8(g_m68k.d[5], bus_read8(0x008110));
    /* TODO $0F5A6A: dc.w $8540  [85 40] */
    M68K_OR8(g_m68k.d[5], bus_read8(0x008110));
    /* TODO $0F5A70: dc.w $8540  [85 40] */
    M68K_OR8(g_m68k.d[5], bus_read8(0x008110));
    /* TODO $0F5A76: dc.w $8540  [85 40] */
    M68K_OR8(g_m68k.d[5], bus_read8(0x008110));
    /* TODO $0F5A7C: dc.w $8540  [85 40] */
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008000));
    /* WARNING: function did not end with RTS */
}

/* $0F5AAE-$0F5ABA  (3 instructions, 12 bytes) */
void jt_0F5AAE(void) {
    /* TODO $0F5AAE: sbcd -(a6), -(a6), #$8340  [8D 0E 83 40] */
    /* TODO $0F5AB2: sbcd -(a6), -(a6), #$8340  [8D 0E 83 40] */
    /* TODO $0F5AB6: sbcd -(a6), -(a6), #$8340  [8D 0E 83 40] */
    /* WARNING: function did not end with RTS */
}

/* $0F5AD6-$0F5AD8  (1 instructions, 2 bytes) */
void jt_0F5AD6(void) {
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F5B20-$0F5B74  (26 instructions, 84 bytes) */
void jt_0F5B20(void) {
    M68K_OR8(g_m68k.d[5], bus_read8(0x008540));
    /* TODO $0F5B24: sbcd.b d0, d0  [81 00] */
    M68K_OR8(g_m68k.d[5], bus_read8(0x008540));
    /* TODO $0F5B2A: sbcd.b d0, d0  [81 00] */
    M68K_OR8(g_m68k.d[5], bus_read8(0x008540));
    /* TODO $0F5B30: sbcd.b d0, d0  [81 00] */
    M68K_OR8(g_m68k.d[5], bus_read8(0x008540));
    /* TODO $0F5B36: sbcd.b d0, d0  [81 00] */
    M68K_OR8(g_m68k.d[5], bus_read8(0x008540));
    /* TODO $0F5B3C: sbcd.b d0, d0  [81 00] */
    M68K_OR8(g_m68k.d[5], bus_read8(0x008540));
    /* TODO $0F5B42: sbcd.b d0, d0  [81 00] */
    M68K_OR8(g_m68k.d[5], bus_read8(0x008540));
    /* TODO $0F5B48: sbcd.b d0, d0  [81 00] */
    M68K_OR8(g_m68k.d[5], bus_read8(0x008540));
    /* TODO $0F5B4E: sbcd.b d0, d0  [81 00] */
    M68K_OR8(g_m68k.d[5], bus_read8(0x008540));
    /* TODO $0F5B54: sbcd.b d0, d0  [81 00] */
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F5BAC-$0F5BAE  (1 instructions, 2 bytes) */
void jt_0F5BAC(void) {
    M68K_ASR16(g_m68k.d[0], 0x8);
    /* WARNING: function did not end with RTS */
}

/* $0F5BB4-$0F5BB8  (2 instructions, 4 bytes) */
void jt_0F5BB4(void) {
    /* TODO $0F5BB4: dc.w $ff10  [FF 10] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0F5BCE-$0F5C22  (26 instructions, 84 bytes) */
void jt_0F5BCE(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0F5BD0: dc.w $8540  [85 40] */
    M68K_OR8(g_m68k.d[5], bus_read8(0x008110));
    /* TODO $0F5BD6: dc.w $8540  [85 40] */
    M68K_OR8(g_m68k.d[5], bus_read8(0x008110));
    /* TODO $0F5BDC: dc.w $8540  [85 40] */
    M68K_OR8(g_m68k.d[5], bus_read8(0x008110));
    /* TODO $0F5BE2: dc.w $8540  [85 40] */
    M68K_OR8(g_m68k.d[5], bus_read8(0x008110));
    /* TODO $0F5BE8: dc.w $8540  [85 40] */
    M68K_OR8(g_m68k.d[5], bus_read8(0x008110));
    /* TODO $0F5BEE: dc.w $8540  [85 40] */
    M68K_OR8(g_m68k.d[5], bus_read8(0x008110));
    /* TODO $0F5BF4: dc.w $8540  [85 40] */
    M68K_OR8(g_m68k.d[5], bus_read8(0x008110));
    /* TODO $0F5BFA: dc.w $8540  [85 40] */
    M68K_OR8(g_m68k.d[5], bus_read8(0x008110));
    /* TODO $0F5C00: dc.w $8540  [85 40] */
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008000));
    /* WARNING: function did not end with RTS */
}

/* $0F5C22-$0F5C24  (1 instructions, 2 bytes) */
void jt_0F5C22(void) {
    M68K_ASR16(g_m68k.d[0], 0x8);
    /* WARNING: function did not end with RTS */
}

/* $0F5C2A-$0F5C2C  (1 instructions, 2 bytes) */
void jt_0F5C2A(void) {
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F5C46-$0F5C92  (22 instructions, 76 bytes) */
void jt_0F5C46(void) {
    M68K_OR8(g_m68k.d[5], bus_read8(0x008540));
    /* TODO $0F5C4A: sbcd.b d0, d0  [81 00] */
    M68K_OR8(g_m68k.d[5], bus_read8(0x008540));
    /* TODO $0F5C50: sbcd.b d0, d0  [81 00] */
    M68K_OR8(g_m68k.d[5], bus_read8(0x008540));
    /* TODO $0F5C56: sbcd.b d0, d0  [81 00] */
    M68K_OR8(g_m68k.d[5], bus_read8(0x008540));
    /* TODO $0F5C5C: sbcd.b d0, d0  [81 00] */
    M68K_OR8(g_m68k.d[5], bus_read8(0x008540));
    /* TODO $0F5C62: sbcd.b d0, d0  [81 00] */
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F5C92-$0F5C94  (1 instructions, 2 bytes) */
void jt_0F5C92(void) {
    M68K_ADD8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F5D06-$0F5D28  (17 instructions, 34 bytes) */
void jt_0F5D06(void) {
    /* TODO $0F5D06: dc.w $8340  [83 40] */
    /* TODO $0F5D08: sbcd.b d2, d6  [8D 02] */
    /* TODO $0F5D0A: dc.w $8340  [83 40] */
    /* TODO $0F5D0C: sbcd.b d2, d6  [8D 02] */
    /* TODO $0F5D0E: dc.w $8340  [83 40] */
    /* TODO $0F5D10: sbcd.b d2, d6  [8D 02] */
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[7], g_m68k.d[2]);
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[7], g_m68k.d[2]);
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[7], g_m68k.d[2]);
    /* TODO $0F5D1E: dc.w $8140  [81 40] */
    /* TODO $0F5D20: sbcd.b d2, d7  [8F 02] */
    /* TODO $0F5D22: dc.w $8140  [81 40] */
    /* TODO $0F5D24: sbcd.b d2, d7  [8F 02] */
    /* TODO $0F5D26: dc.w $8140  [81 40] */
    /* WARNING: function did not end with RTS */
}

/* $0F5D2C-$0F5D34  (4 instructions, 8 bytes) */
void jt_0F5D2C(void) {
    /* TODO $0F5D2C: dc.w $ff16  [FF 16] */
    /* TODO $0F5D2E: dc.w $ff16  [FF 16] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[6]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F5D34-$0F5D3C  (4 instructions, 8 bytes) */
void jt_0F5D34(void) {
    /* TODO $0F5D34: dc.w $ff16  [FF 16] */
    /* TODO $0F5D36: dc.w $ff16  [FF 16] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[6]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}
