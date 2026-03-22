/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $0713AE - $07214C */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

/* $0713AE-$0713B2  (2 instructions, 4 bytes) */
void jt_0713AE(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0713B0: dc.w $8740  [87 40] */
    /* WARNING: function did not end with RTS */
}

/* $071410-$071412  (1 instructions, 2 bytes) */
void jt_071410(void) {
    M68K_OR16(g_m68k.d[2], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $071482-$0714AA  (20 instructions, 40 bytes) */
void jt_071482(void) {
    /* TODO $071482: dc.w $8d40  [8D 40] */
    /* TODO $071484: sbcd.b d6, d1  [83 06] */
    M68K_OR16(g_m68k.d[5], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[3], g_m68k.d[6]);
    /* TODO $07148A: dc.w $8740  [87 40] */
    /* TODO $07148C: sbcd.b d6, d4  [89 06] */
    /* TODO $07148E: dc.w $8540  [85 40] */
    /* TODO $071490: sbcd.b d6, d5  [8B 06] */
    /* TODO $071492: dc.w $8340  [83 40] */
    /* TODO $071494: sbcd.b d5, d6  [8D 05] */
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[7], g_m68k.d[4]);
    /* TODO $07149A: dc.w $8140  [81 40] */
    /* TODO $07149C: sbcd.b d3, d7  [8F 03] */
    /* TODO $07149E: dc.w $8140  [81 40] */
    /* TODO $0714A0: sbcd.b d2, d7  [8F 02] */
    /* TODO $0714A2: dc.w $8140  [81 40] */
    /* TODO $0714A4: sbcd.b d2, d7  [8F 02] */
    /* TODO $0714A6: dc.w $f001  [F0 01] */
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0714D8-$0714DC  (1 instructions, 4 bytes) */
void jt_0714D8(void) {
    /* TODO $0714D8: sbcd -(a2), -(a1), #$8d40  [83 0A 8D 40] */
    /* WARNING: function did not end with RTS */
}

/* $071500-$071502  (1 instructions, 2 bytes) */
void jt_071500(void) {
    /* TODO $071500: dc.w $8140  [81 40] */
    /* WARNING: function did not end with RTS */
}

/* $07154A-$07155A  (8 instructions, 16 bytes) */
void jt_07154A(void) {
    /* TODO $07154A: dc.w $8940  [89 40] */
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* TODO $07154E: dc.w $8940  [89 40] */
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[5], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[3], _postinc8(6));
    /* TODO $071556: dc.w $8b40  [8B 40] */
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0715A4-$0715A6  (1 instructions, 2 bytes) */
void jt_0715A4(void) {
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $07161A-$071624  (5 instructions, 10 bytes) */
void jt_07161A(void) {
    /* TODO $07161A: dc.w $ff12  [FF 12] */
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[0], bus_read8(g_m68k.a[1]));
    /* TODO $071620: dc.w $f010  [F0 10] */
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $071624-$071628  (2 instructions, 4 bytes) */
void jt_071624(void) {
    M68K_OR8(g_m68k.d[2], bus_read8(g_m68k.a[2]));
    /* TODO $071626: dc.w $8740  [87 40] */
    /* WARNING: function did not end with RTS */
}

/* $071686-$07168E  (4 instructions, 8 bytes) */
void jt_071686(void) {
    /* TODO $071686: dc.w $ff10  [FF 10] */
    /* TODO $071688: dc.w $ff10  [FF 10] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[0]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $07168E-$071692  (2 instructions, 4 bytes) */
void jt_07168E(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $071690: dc.w $8540  [85 40] */
    /* WARNING: function did not end with RTS */
}

/* $07170C-$07170E  (1 instructions, 2 bytes) */
void jt_07170C(void) {
    /* TODO $07170C: dc.w $ff20  [FF 20] */
    /* WARNING: function did not end with RTS */
}

/* $071758-$071772  (11 instructions, 26 bytes) */
void jt_071758(void) {
    M68K_OR16(g_m68k.d[2], g_m68k.d[0]);
    /* TODO $07175A: sbcd.b d6, d0  [81 06] */
    M68K_OR8(g_m68k.d[1], g_m68k.d[7]);
    /* TODO $07175E: sbcd -(a0), -(a4), #$8340  [89 08 83 40] */
    /* TODO $071762: sbcd.b d5, d0  [81 05] */
    /* TODO $071764: sbcd.b d6, d0  [81 06] */
    M68K_OR8(g_m68k.d[1], g_m68k.d[7]);
    /* TODO $071768: sbcd -(a0), -(a4), #$8240  [89 08 82 40] */
    M68K_OR8(g_m68k.d[7], g_m68k.d[4]);
    /* TODO $07176E: dc.w $8140  [81 40] */
    /* TODO $071770: sbcd.b d3, d7  [8F 03] */
    /* WARNING: function did not end with RTS */
}

/* $071778-$07177A  (1 instructions, 2 bytes) */
void jt_071778(void) {
    /* TODO $071778: dc.w $ff30  [FF 30] */
    /* WARNING: function did not end with RTS */
}

/* $0717A2-$0717B4  (5 instructions, 18 bytes) */
void jt_0717A2(void) {
    /* TODO $0717A2: sbcd -(a0), -(a4), #$8209  [89 08 82 09] */
    /* TODO $0717A6: sbcd -(a2), -(a0), #$8440  [81 0A 84 40] */
    /* TODO $0717AA: sbcd -(a0), -(a4), #$8209  [89 08 82 09] */
    /* TODO $0717AE: sbcd -(a2), -(a0), #$810b  [81 0A 81 0B] */
    /* TODO $0717B2: dc.w $8340  [83 40] */
    /* WARNING: function did not end with RTS */
}

/* $0717C2-$0717C4  (1 instructions, 2 bytes) */
void jt_0717C2(void) {
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0718DA-$0718E2  (4 instructions, 8 bytes) */
void jt_0718DA(void) {
    /* TODO $0718DA: dc.w $ff10  [FF 10] */
    /* TODO $0718DC: dc.w $ff10  [FF 10] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[0]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0718E2-$071924  (17 instructions, 66 bytes) */
void jt_0718E2(void) {
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

/* $071924-$07192C  (4 instructions, 8 bytes) */
void jt_071924(void) {
    /* TODO $071924: dc.w $ff10  [FF 10] */
    /* TODO $071926: dc.w $ff10  [FF 10] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[0]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $07192C-$07196E  (17 instructions, 66 bytes) */
void jt_07192C(void) {
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

/* $07196E-$0719B0  (17 instructions, 66 bytes) */
void jt_07196E(void) {
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

/* $0719B8-$0719FA  (17 instructions, 66 bytes) */
void jt_0719B8(void) {
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

/* $071A5E-$071A70  (9 instructions, 18 bytes) */
void jt_071A5E(void) {
    /* TODO $071A5E: dc.w $8d40  [8D 40] */
    /* TODO $071A60: sbcd.b d6, d1  [83 06] */
    M68K_OR16(g_m68k.d[5], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[3], g_m68k.d[6]);
    /* TODO $071A66: dc.w $8740  [87 40] */
    /* TODO $071A68: sbcd.b d6, d4  [89 06] */
    M68K_OR16(g_m68k.d[2], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[6], g_m68k.d[6]);
    /* TODO $071A6E: dc.w $8140  [81 40] */
    /* WARNING: function did not end with RTS */
}

/* $071AD6-$071ADA  (1 instructions, 4 bytes) */
void jt_071AD6(void) {
    /* TODO $071AD6: sbcd -(a2), -(a1), #$8d40  [83 0A 8D 40] */
    /* WARNING: function did not end with RTS */
}

/* $071B00-$071B12  (5 instructions, 18 bytes) */
void jt_071B00(void) {
    /* TODO $071B00: dc.w $8540  [85 40] */
    { uint32_t _ea = (g_m68k.a[2] + 0x40 + (int32_t)g_m68k.a[0]); uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[4], /* UNHANDLED_READ: (a2, invalid.w) */ 0);
    { uint32_t _ea = (g_m68k.a[2] + 0x40 + (int32_t)g_m68k.a[0]); uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[2] + 0x40 + (int16_t)(uint16_t)g_m68k.a[1]));
    /* WARNING: function did not end with RTS */
}

/* $071B2A-$071B46  (7 instructions, 28 bytes) */
void jt_071B2A(void) {
    M68K_AND8(g_m68k.d[0], /* UNHANDLED_READ: (a2, invalid.w) */ 0);
    { uint32_t _ea = (g_m68k.a[2] + 0x40 + (int16_t)(uint16_t)g_m68k.a[0]); uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[6], /* UNHANDLED_READ: (a2, invalid.w) */ 0);
    { uint32_t _ea = (g_m68k.a[2] + 0x40 + (int32_t)g_m68k.a[0]); uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[3], /* UNHANDLED_READ: (a2, invalid.w) */ 0);
    { uint32_t _ea = (g_m68k.a[2] + 0x40 + (int16_t)(uint16_t)g_m68k.a[1]); uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    /* TODO $071B42: sbcd -(a2), -(a0), #$8f40  [81 0A 8F 40] */
    /* WARNING: function did not end with RTS */
}

/* $071B84-$071B88  (1 instructions, 4 bytes) */
void jt_071B84(void) {
    /* TODO $071B84: sbcd -(a7), -(a0), #$8640  [81 0F 86 40] */
    /* WARNING: function did not end with RTS */
}

/* $071BDE-$071BE0  (1 instructions, 2 bytes) */
void jt_071BDE(void) {
    M68K_OR16(g_m68k.d[4], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $071C7E-$071CA4  (19 instructions, 38 bytes) */
void jt_071C7E(void) {
    /* TODO $071C7E: dc.w $f01f  [F0 1F] */
    M68K_SUB8(g_m68k.d[0], _postinc8(6));
    /* TODO $071C82: dc.w $8140  [81 40] */
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    /* TODO $071C86: dc.w $8140  [81 40] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[7], _postinc8(5));
    /* TODO $071C8E: dc.w $8340  [83 40] */
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    /* TODO $071C92: dc.w $8540  [85 40] */
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    /* TODO $071C96: dc.w $8740  [87 40] */
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[5], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[3], _postinc8(2));
    /* TODO $071C9E: dc.w $8d40  [8D 40] */
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $071CB6-$071CB8  (1 instructions, 2 bytes) */
void jt_071CB6(void) {
    M68K_SUB16(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $071CD6-$071CFA  (18 instructions, 36 bytes) */
void jt_071CD6(void) {
    /* TODO $071CD6: dc.w $f011  [F0 11] */
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    /* TODO $071CDA: dc.w $8140  [81 40] */
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    /* TODO $071CDE: dc.w $8140  [81 40] */
    M68K_OR8(g_m68k.d[7], bus_read8(g_m68k.a[3]));
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    /* TODO $071CE6: dc.w $8340  [83 40] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    /* TODO $071CEA: dc.w $8540  [85 40] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $071CEE: dc.w $8740  [87 40] */
    M68K_OR8(g_m68k.d[3], bus_read8(g_m68k.a[6]));
    M68K_OR16(g_m68k.d[5], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    /* TODO $071CF6: dc.w $8d40  [8D 40] */
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $071CFA-$071CFE  (2 instructions, 4 bytes) */
void jt_071CFA(void) {
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $071CFC: dc.w $8540  [85 40] */
    /* WARNING: function did not end with RTS */
}

/* $071D44-$071D46  (1 instructions, 2 bytes) */
void jt_071D44(void) {
    M68K_SUBX16(g_m68k.d[7], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $071E3A-$071E3C  (1 instructions, 2 bytes) */
void jt_071E3A(void) {
    M68K_ADD8(g_m68k.d[0], bus_read8(g_m68k.a[0]));
    /* WARNING: function did not end with RTS */
}

/* $071E62-$071EAE  (22 instructions, 76 bytes) */
void jt_071E62(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $071E64: dc.w $8540  [85 40] */
    M68K_OR8(g_m68k.d[5], bus_read8(0x008110));
    /* TODO $071E6A: dc.w $8540  [85 40] */
    M68K_OR8(g_m68k.d[5], bus_read8(0x008110));
    /* TODO $071E70: dc.w $8540  [85 40] */
    M68K_OR8(g_m68k.d[5], bus_read8(0x008110));
    /* TODO $071E76: dc.w $8540  [85 40] */
    M68K_OR8(g_m68k.d[5], bus_read8(0x008110));
    /* TODO $071E7C: dc.w $8540  [85 40] */
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

/* $071EAE-$071EBA  (3 instructions, 12 bytes) */
void jt_071EAE(void) {
    /* TODO $071EAE: sbcd -(a6), -(a6), #$8340  [8D 0E 83 40] */
    /* TODO $071EB2: sbcd -(a6), -(a6), #$8340  [8D 0E 83 40] */
    /* TODO $071EB6: sbcd -(a6), -(a6), #$8340  [8D 0E 83 40] */
    /* WARNING: function did not end with RTS */
}

/* $071ED6-$071ED8  (1 instructions, 2 bytes) */
void jt_071ED6(void) {
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $071F20-$071F74  (26 instructions, 84 bytes) */
void jt_071F20(void) {
    M68K_OR8(g_m68k.d[5], bus_read8(0x008540));
    /* TODO $071F24: sbcd.b d0, d0  [81 00] */
    M68K_OR8(g_m68k.d[5], bus_read8(0x008540));
    /* TODO $071F2A: sbcd.b d0, d0  [81 00] */
    M68K_OR8(g_m68k.d[5], bus_read8(0x008540));
    /* TODO $071F30: sbcd.b d0, d0  [81 00] */
    M68K_OR8(g_m68k.d[5], bus_read8(0x008540));
    /* TODO $071F36: sbcd.b d0, d0  [81 00] */
    M68K_OR8(g_m68k.d[5], bus_read8(0x008540));
    /* TODO $071F3C: sbcd.b d0, d0  [81 00] */
    M68K_OR8(g_m68k.d[5], bus_read8(0x008540));
    /* TODO $071F42: sbcd.b d0, d0  [81 00] */
    M68K_OR8(g_m68k.d[5], bus_read8(0x008540));
    /* TODO $071F48: sbcd.b d0, d0  [81 00] */
    M68K_OR8(g_m68k.d[5], bus_read8(0x008540));
    /* TODO $071F4E: sbcd.b d0, d0  [81 00] */
    M68K_OR8(g_m68k.d[5], bus_read8(0x008540));
    /* TODO $071F54: sbcd.b d0, d0  [81 00] */
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

/* $071FAC-$071FAE  (1 instructions, 2 bytes) */
void jt_071FAC(void) {
    M68K_ASR16(g_m68k.d[0], 0x8);
    /* WARNING: function did not end with RTS */
}

/* $071FB4-$071FB8  (2 instructions, 4 bytes) */
void jt_071FB4(void) {
    /* TODO $071FB4: dc.w $ff10  [FF 10] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $071FCE-$072022  (26 instructions, 84 bytes) */
void jt_071FCE(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $071FD0: dc.w $8540  [85 40] */
    M68K_OR8(g_m68k.d[5], bus_read8(0x008110));
    /* TODO $071FD6: dc.w $8540  [85 40] */
    M68K_OR8(g_m68k.d[5], bus_read8(0x008110));
    /* TODO $071FDC: dc.w $8540  [85 40] */
    M68K_OR8(g_m68k.d[5], bus_read8(0x008110));
    /* TODO $071FE2: dc.w $8540  [85 40] */
    M68K_OR8(g_m68k.d[5], bus_read8(0x008110));
    /* TODO $071FE8: dc.w $8540  [85 40] */
    M68K_OR8(g_m68k.d[5], bus_read8(0x008110));
    /* TODO $071FEE: dc.w $8540  [85 40] */
    M68K_OR8(g_m68k.d[5], bus_read8(0x008110));
    /* TODO $071FF4: dc.w $8540  [85 40] */
    M68K_OR8(g_m68k.d[5], bus_read8(0x008110));
    /* TODO $071FFA: dc.w $8540  [85 40] */
    M68K_OR8(g_m68k.d[5], bus_read8(0x008110));
    /* TODO $072000: dc.w $8540  [85 40] */
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

/* $072022-$072024  (1 instructions, 2 bytes) */
void jt_072022(void) {
    M68K_ASR16(g_m68k.d[0], 0x8);
    /* WARNING: function did not end with RTS */
}

/* $07202A-$07202C  (1 instructions, 2 bytes) */
void jt_07202A(void) {
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $072046-$072092  (22 instructions, 76 bytes) */
void jt_072046(void) {
    M68K_OR8(g_m68k.d[5], bus_read8(0x008540));
    /* TODO $07204A: sbcd.b d0, d0  [81 00] */
    M68K_OR8(g_m68k.d[5], bus_read8(0x008540));
    /* TODO $072050: sbcd.b d0, d0  [81 00] */
    M68K_OR8(g_m68k.d[5], bus_read8(0x008540));
    /* TODO $072056: sbcd.b d0, d0  [81 00] */
    M68K_OR8(g_m68k.d[5], bus_read8(0x008540));
    /* TODO $07205C: sbcd.b d0, d0  [81 00] */
    M68K_OR8(g_m68k.d[5], bus_read8(0x008540));
    /* TODO $072062: sbcd.b d0, d0  [81 00] */
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

/* $072092-$072094  (1 instructions, 2 bytes) */
void jt_072092(void) {
    M68K_ADD8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $072106-$072128  (17 instructions, 34 bytes) */
void jt_072106(void) {
    /* TODO $072106: dc.w $8340  [83 40] */
    /* TODO $072108: sbcd.b d2, d6  [8D 02] */
    /* TODO $07210A: dc.w $8340  [83 40] */
    /* TODO $07210C: sbcd.b d2, d6  [8D 02] */
    /* TODO $07210E: dc.w $8340  [83 40] */
    /* TODO $072110: sbcd.b d2, d6  [8D 02] */
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[7], g_m68k.d[2]);
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[7], g_m68k.d[2]);
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[7], g_m68k.d[2]);
    /* TODO $07211E: dc.w $8140  [81 40] */
    /* TODO $072120: sbcd.b d2, d7  [8F 02] */
    /* TODO $072122: dc.w $8140  [81 40] */
    /* TODO $072124: sbcd.b d2, d7  [8F 02] */
    /* TODO $072126: dc.w $8140  [81 40] */
    /* WARNING: function did not end with RTS */
}

/* $07212C-$072134  (4 instructions, 8 bytes) */
void jt_07212C(void) {
    /* TODO $07212C: dc.w $ff16  [FF 16] */
    /* TODO $07212E: dc.w $ff16  [FF 16] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[6]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $072134-$07213C  (4 instructions, 8 bytes) */
void jt_072134(void) {
    /* TODO $072134: dc.w $ff16  [FF 16] */
    /* TODO $072136: dc.w $ff16  [FF 16] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[6]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $07213C-$072144  (4 instructions, 8 bytes) */
void jt_07213C(void) {
    /* TODO $07213C: dc.w $ff16  [FF 16] */
    /* TODO $07213E: dc.w $ff16  [FF 16] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[6]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $072144-$07214C  (4 instructions, 8 bytes) */
void jt_072144(void) {
    /* TODO $072144: dc.w $ff16  [FF 16] */
    /* TODO $072146: dc.w $ff16  [FF 16] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[6]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}
