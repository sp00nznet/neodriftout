/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $023820 - $024A9E */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

/* $023820-$023852  (14 instructions, 50 bytes) */
void jt_023820(void) {
    M68K_OR8(g_m68k.d[2], 0x0);
    M68K_OR8(g_m68k.d[2], 0x80);
    M68K_OR8(g_m68k.d[0], 0x80);
    M68K_OR8(g_m68k.d[0], 0x80);
    M68K_OR8(g_m68k.d[0], 0x80);
    M68K_OR8(g_m68k.d[0], 0xa0);
    M68K_OR8(g_m68k.d[0], 0x80);
    M68K_OR8(g_m68k.d[0], 0xa0);
    M68K_OR8(g_m68k.d[0], 0x80);
    M68K_OR8(g_m68k.d[0], 0xe0);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[7], _mv); M68K_TST16(_mv); }
    /* TODO $02384A: dc.w $f2c0  [F2 C0] */
    /* TODO $02384C: dc.w $f2c0  [F2 C0] */
    M68K_OR8(g_m68k.d[2], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $023852-$023884  (14 instructions, 50 bytes) */
void jt_023852(void) {
    M68K_OR8(g_m68k.d[4], 0x1);
    M68K_OR8(g_m68k.d[4], 0x80);
    M68K_OR8(g_m68k.d[0], 0x80);
    M68K_OR8(g_m68k.d[0], 0x80);
    M68K_OR8(g_m68k.d[0], 0x80);
    M68K_OR8(g_m68k.d[0], 0xa0);
    M68K_OR8(g_m68k.d[0], 0x80);
    M68K_OR8(g_m68k.d[0], 0xa0);
    M68K_OR8(g_m68k.d[0], 0x80);
    M68K_OR8(g_m68k.d[0], 0xe0);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[7], _mv); M68K_TST16(_mv); }
    /* TODO $02387C: dc.w $f2c0  [F2 C0] */
    /* TODO $02387E: dc.w $f2c0  [F2 C0] */
    M68K_OR8(g_m68k.d[4], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $023884-$0238B6  (14 instructions, 50 bytes) */
void jt_023884(void) {
    M68K_OR8(g_m68k.d[2], 0x0);
    M68K_OR8(g_m68k.d[2], 0x80);
    M68K_OR8(g_m68k.d[0], 0x80);
    M68K_OR8(g_m68k.d[0], 0x80);
    M68K_OR8(g_m68k.d[0], 0x80);
    M68K_OR8(g_m68k.d[0], 0xa0);
    M68K_OR8(g_m68k.d[0], 0x80);
    M68K_OR8(g_m68k.d[0], 0xa0);
    M68K_OR8(g_m68k.d[0], 0x80);
    M68K_OR8(g_m68k.d[0], 0xe0);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[7], _mv); M68K_TST16(_mv); }
    /* TODO $0238AE: dc.w $f2c0  [F2 C0] */
    /* TODO $0238B0: dc.w $f2c0  [F2 C0] */
    M68K_OR8(g_m68k.d[2], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0238B6-$0238C2  (3 instructions, 12 bytes) */
void jt_0238B6(void) {
    M68K_OR8(g_m68k.d[2], 0xc2);
    M68K_OR8(g_m68k.d[2], 0xf2);
    M68K_OR8(g_m68k.d[2], 0x22);
    /* WARNING: function did not end with RTS */
}

/* $0238C2-$0238CE  (3 instructions, 12 bytes) */
void jt_0238C2(void) {
    M68K_OR8(g_m68k.d[2], 0xce);
    M68K_OR8(g_m68k.d[2], 0xda);
    M68K_OR8(g_m68k.d[2], 0xe6);
    /* WARNING: function did not end with RTS */
}

/* $0238CE-$0238DC  (3 instructions, 14 bytes) */
void jt_0238CE(void) {
    { uint32_t _ea = (g_m68k.a[0] + 0x2 + (int16_t)(uint16_t)g_m68k.d[0]); uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x20); bus_write8(_ea, _tmp); }
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[4] + 0x2 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST16((uint16_t)g_m68k.d[5]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[4] + 0x30 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST16((uint16_t)g_m68k.d[6]);
    /* WARNING: function did not end with RTS */
}

/* $0238DA-$0238E8  (4 instructions, 14 bytes) */
void jt_0238DA(void) {
    { uint32_t _ea = (g_m68k.a[0] + 0x2 + (int16_t)(uint16_t)g_m68k.d[0]); uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x20); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x2); bus_write8(_ea, _tmp); }
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[4] + 0x2 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST16((uint16_t)g_m68k.d[5]);
    g_m68k.a[7] = (uint32_t)(int32_t)(int16_t)(uint16_t)(0x30);
    /* WARNING: function did not end with RTS */
}

/* $0238E6-$0238F2  (4 instructions, 12 bytes) */
void jt_0238E6(void) {
    { uint32_t _ea = (g_m68k.a[0] + 0x2 + (int16_t)(uint16_t)g_m68k.d[0]); uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x20); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x2); bus_write8(_ea, _tmp); }
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[4] + 0x2 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST16((uint16_t)g_m68k.d[5]);
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(m68k_get_sr()));
    /* WARNING: function did not end with RTS */
}

/* $0238F2-$0238FE  (3 instructions, 12 bytes) */
void jt_0238F2(void) {
    M68K_OR8(g_m68k.d[2], 0xfe);
    M68K_OR8(g_m68k.d[2], 0xa);
    M68K_OR8(g_m68k.d[2], 0x16);
    /* WARNING: function did not end with RTS */
}

/* $0238FE-$023908  (2 instructions, 10 bytes) */
void jt_0238FE(void) {
    { uint32_t _ea = (g_m68k.a[0] + 0x2 + (int16_t)(uint16_t)g_m68k.d[0]); uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x20); bus_write8(_ea, _tmp); }
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[4] + 0x2 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST16((uint16_t)g_m68k.d[5]);
    /* WARNING: function did not end with RTS */
}

/* $02390A-$023916  (3 instructions, 12 bytes) */
void jt_02390A(void) {
    { uint32_t _ea = (g_m68k.a[0] + 0x2 + (int16_t)(uint16_t)g_m68k.d[0]); uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x20); bus_write8(_ea, _tmp); }
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[4] + 0x2 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST16((uint16_t)g_m68k.d[5]);
    m68k_set_sr(bus_read16(g_m68k.a[4]));
    /* WARNING: function did not end with RTS */
}

/* $023916-$023922  (3 instructions, 12 bytes) */
void jt_023916(void) {
    { uint32_t _ea = (g_m68k.a[0] + 0x2 + (int16_t)(uint16_t)g_m68k.d[0]); uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x20); bus_write8(_ea, _tmp); }
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[4] + 0x2 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST16((uint16_t)g_m68k.d[5]);
    { uint32_t _ea = g_m68k.a[4]; uint32_t _tmp = bus_read32(_ea); M68K_NOT32(_tmp); bus_write32(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $023922-$02392E  (3 instructions, 12 bytes) */
void jt_023922(void) {
    M68K_OR8(g_m68k.d[2], 0x2e);
    M68K_OR8(g_m68k.d[2], 0x3a);
    M68K_OR8(g_m68k.d[2], 0x46);
    /* WARNING: function did not end with RTS */
}

/* $02392E-$023938  (2 instructions, 10 bytes) */
void jt_02392E(void) {
    { uint32_t _ea = (g_m68k.a[0] + 0x2 + (int16_t)(uint16_t)g_m68k.d[0]); uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x20); bus_write8(_ea, _tmp); }
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[4] + 0x2 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST16((uint16_t)g_m68k.d[5]);
    /* WARNING: function did not end with RTS */
}

/* $02393A-$023948  (3 instructions, 14 bytes) */
void jt_02393A(void) {
    { uint32_t _ea = (g_m68k.a[0] + 0x2 + (int16_t)(uint16_t)g_m68k.d[0]); uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x20); bus_write8(_ea, _tmp); }
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[4] + 0x2 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST16((uint16_t)g_m68k.d[5]);
    M68K_TST8(bus_read8(g_m68k.a[4] + 0x30));
    /* WARNING: function did not end with RTS */
}

/* $023946-$023954  (4 instructions, 14 bytes) */
void jt_023946(void) {
    { uint32_t _ea = (g_m68k.a[0] + 0x2 + (int16_t)(uint16_t)g_m68k.d[0]); uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x20); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x2); bus_write8(_ea, _tmp); }
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[4] + 0x2 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST16((uint16_t)g_m68k.d[5]);
    g_m68k.a[5] = (g_m68k.a[4] + 0x2 + (int16_t)(uint16_t)g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $023952-$023994  (32 instructions, 66 bytes) */
void jt_023952(void) {
    M68K_OR8(g_m68k.d[2], 0x92);
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[2])); bus_write16(g_m68k.a[4] + 0x2 + (int16_t)(uint16_t)g_m68k.d[0], _mv); M68K_TST16(_mv); }
    M68K_OR8(g_m68k.d[2], 0x92);
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[2])); bus_write16(g_m68k.a[4] + 0x2 + (int16_t)(uint16_t)g_m68k.d[0], _mv); M68K_TST16(_mv); }
    M68K_OR8(g_m68k.d[2], 0x92);
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[2])); bus_write16(g_m68k.a[4] + 0x2 + (int16_t)(uint16_t)g_m68k.d[0], _mv); M68K_TST16(_mv); }
    M68K_OR8(g_m68k.d[2], 0x92);
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[2])); bus_write16(g_m68k.a[4] + 0x2 + (int16_t)(uint16_t)g_m68k.d[0], _mv); M68K_TST16(_mv); }
    M68K_OR8(g_m68k.d[2], 0x92);
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[2])); bus_write16(g_m68k.a[4] + 0x2 + (int16_t)(uint16_t)g_m68k.d[0], _mv); M68K_TST16(_mv); }
    M68K_OR8(g_m68k.d[2], 0x92);
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[2])); bus_write16(g_m68k.a[4] + 0x2 + (int16_t)(uint16_t)g_m68k.d[0], _mv); M68K_TST16(_mv); }
    M68K_OR8(g_m68k.d[2], 0x92);
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[2])); bus_write16(g_m68k.a[4] + 0x2 + (int16_t)(uint16_t)g_m68k.d[0], _mv); M68K_TST16(_mv); }
    M68K_OR8(g_m68k.d[2], 0x92);
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[2])); bus_write16(g_m68k.a[4] + 0x2 + (int16_t)(uint16_t)g_m68k.d[0], _mv); M68K_TST16(_mv); }
    M68K_OR8(g_m68k.d[2], 0x92);
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[2])); bus_write16(g_m68k.a[4] + 0x2 + (int16_t)(uint16_t)g_m68k.d[0], _mv); M68K_TST16(_mv); }
    M68K_OR8(g_m68k.d[2], 0x92);
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[2])); bus_write16(g_m68k.a[4] + 0x2 + (int16_t)(uint16_t)g_m68k.d[0], _mv); M68K_TST16(_mv); }
    M68K_OR8(g_m68k.d[2], 0x92);
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[2])); bus_write16(g_m68k.a[4] + 0x2 + (int16_t)(uint16_t)g_m68k.d[0], _mv); M68K_TST16(_mv); }
    M68K_OR8(g_m68k.d[2], 0x92);
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[2])); bus_write16(g_m68k.a[4] + 0x2 + (int16_t)(uint16_t)g_m68k.d[0], _mv); M68K_TST16(_mv); }
    M68K_OR8(g_m68k.d[2], 0x92);
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[2])); bus_write16(g_m68k.a[4] + 0x2 + (int16_t)(uint16_t)g_m68k.d[0], _mv); M68K_TST16(_mv); }
    M68K_OR8(g_m68k.d[2], 0x92);
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[2])); bus_write16(g_m68k.a[4] + 0x2 + (int16_t)(uint16_t)g_m68k.d[0], _mv); M68K_TST16(_mv); }
    M68K_OR8(g_m68k.d[2], 0x92);
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[2])); bus_write16(g_m68k.a[4] + 0x2 + (int16_t)(uint16_t)g_m68k.d[0], _mv); M68K_TST16(_mv); }
    M68K_OR8(g_m68k.d[2], 0x92);
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[2])); bus_write16(g_m68k.a[4] + 0x2 + (int16_t)(uint16_t)g_m68k.d[0], _mv); M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $023992-$02399E  (4 instructions, 12 bytes) */
void jt_023992(void) {
    M68K_OR8(g_m68k.d[2], 0x9e);
    { uint16_t _mv = (uint16_t)(_postinc16(6)); bus_write16(g_m68k.a[4] + 0x2 + (int16_t)(uint16_t)g_m68k.d[0], _mv); M68K_TST16(_mv); }
    M68K_OR8(g_m68k.d[2], 0xd0);
    M68K_OR8(g_m68k.d[2], 0x2);
    /* WARNING: function did not end with RTS */
}

/* $023A02-$023A0A  (2 instructions, 8 bytes) */
void jt_023A02(void) {
    M68K_BTST(bus_read8((g_m68k.a[1] + (-0x7ff))), g_m68k.d[6]);
    /* TODO $023A06: movep.l $2(a7), d5  [0B 4F 00 02] */
    /* WARNING: function did not end with RTS */
}

/* $023A34-$023A42  (3 instructions, 14 bytes) */
void jt_023A34(void) {
    M68K_OR8(g_m68k.d[0], 0x40);
    M68K_OR16(g_m68k.d[0], 0x80);
    M68K_OR32(g_m68k.d[0], 0xc000c0);
    /* WARNING: function did not end with RTS */
}

/* $023C2C-$023C7C  (22 instructions, 80 bytes) */
void jt_023C2C(void) {
    M68K_BCLR(g_m68k.d[0], g_m68k.d[0]);
    M68K_BCLR(g_m68k.d[0], g_m68k.d[0]);
    M68K_BCLR(g_m68k.d[0], g_m68k.d[0]);
    M68K_BCLR(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[2], 0x7c);
    M68K_OR8(g_m68k.d[2], 0xfc);
    M68K_OR8(g_m68k.d[2], 0xfc);
    M68K_OR8(g_m68k.d[2], 0xfc);
    M68K_OR8(g_m68k.d[2], 0x7c);
    M68K_OR8(g_m68k.d[2], 0xfc);
    M68K_OR8(g_m68k.d[2], 0x7c);
    M68K_OR8(g_m68k.d[2], 0x7c);
    M68K_OR8(g_m68k.d[2], 0x7c);
    M68K_OR8(g_m68k.d[2], 0xfc);
    M68K_OR8(g_m68k.d[2], 0xfc);
    M68K_OR8(g_m68k.d[2], 0xfc);
    M68K_OR8(g_m68k.d[2], 0x7c);
    M68K_OR8(g_m68k.d[2], 0xfc);
    M68K_OR8(g_m68k.d[2], 0x7c);
    M68K_OR8(g_m68k.d[2], 0x7c);
    M68K_OR8(g_m68k.d[2], 0x7c);
    M68K_OR8(g_m68k.d[2], 0x7c);
    /* WARNING: function did not end with RTS */
}

/* $023C7C-$023CAC  (24 instructions, 48 bytes) */
void jt_023C7C(void) {
    /* TODO $023C7C: chk.w (a1)+, d0  [41 99] */
    /* TODO $023C7E: chk.w (a1)+, d0  [41 99] */
    /* TODO $023C80: chk.w (a1)+, d0  [41 99] */
    /* TODO $023C82: chk.w (a1)+, d0  [41 99] */
    /* TODO $023C84: chk.w (a1)+, d0  [41 99] */
    /* TODO $023C86: chk.w (a1)+, d0  [41 99] */
    /* TODO $023C88: chk.w (a1)+, d0  [41 99] */
    /* TODO $023C8A: chk.w (a1)+, d0  [41 99] */
    /* TODO $023C8C: chk.w (a1)+, d0  [41 99] */
    /* TODO $023C8E: chk.w (a1)+, d0  [41 99] */
    /* TODO $023C90: chk.w (a1)+, d0  [41 99] */
    /* TODO $023C92: chk.w (a1)+, d0  [41 99] */
    { uint8_t _mv = (uint8_t)(_postinc8(1)); bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(1)); bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_predec8(6)); bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(1)); bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(1)); bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(1)); bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_predec8(6)); bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(1)); bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(1)); bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(1)); bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_predec8(6)); bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(1)); bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $023CFC-$023D34  (28 instructions, 56 bytes) */
void jt_023CFC(void) {
    M68K_NEGX8(g_m68k.d[0]);
    M68K_NEGX8(g_m68k.d[0]);
    M68K_NEGX8(g_m68k.d[0]);
    M68K_NEGX8(g_m68k.d[0]);
    M68K_NEGX8(g_m68k.d[0]);
    M68K_NEGX8(g_m68k.d[0]);
    M68K_NEGX8(g_m68k.d[0]);
    M68K_NEGX8(g_m68k.d[0]);
    M68K_NEGX8(g_m68k.d[0]);
    M68K_NEGX8(g_m68k.d[0]);
    M68K_NEGX8(g_m68k.d[0]);
    M68K_NEGX8(g_m68k.d[0]);
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[4]);
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[4]);
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[5]);
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[4]);
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[4]);
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[4]);
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[5]);
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[4]);
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[4]);
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[4]);
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[5]);
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[4]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[1]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[0]);
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[4]);
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[0] -= 1; bus_write8(g_m68k.a[0], _mv); M68K_TST8(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $023D6C-$023D7C  (4 instructions, 16 bytes) */
void jt_023D6C(void) {
    M68K_EOR8(g_m68k.d[0], 0x0);
    M68K_CMP8(g_m68k.d[0], 0x0);
    M68K_EOR8(g_m68k.d[0], 0x0);
    M68K_CMP8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $023D7C-$023DC0  (17 instructions, 68 bytes) */
void jt_023D7C(void) {
    { uint16_t _mv = (uint16_t)(_postinc16(1)); /* UNHANDLED_WRITE: ([, d3.l]) = _mv */ M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(1)); /* UNHANDLED_WRITE: ([, d3.l]) = _mv */ M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(1)); /* UNHANDLED_WRITE: ([, d3.l]) = _mv */ M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(1)); /* UNHANDLED_WRITE: ([, d3.l]) = _mv */ M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(1)); /* UNHANDLED_WRITE: ([, d3.l]) = _mv */ M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(1)); /* UNHANDLED_WRITE: ([, d3.l]) = _mv */ M68K_TST16(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(1)); /* UNHANDLED_WRITE: ([, d1.w * 4]) = _mv */ M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_predec8(6)); bus_write8(g_m68k.a[3] + 0x1599, _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(1)); /* UNHANDLED_WRITE: ([, d1.w * 4]) = _mv */ M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_predec8(6)); bus_write8(g_m68k.a[3] + 0x1599, _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(1)); /* UNHANDLED_WRITE: ([, d1.w * 4]) = _mv */ M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_predec8(6)); bus_write8(g_m68k.a[3] + 0x1599, _mv); M68K_TST8(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[3] + 0x66 + (int32_t)g_m68k.d[0]))); M68K_TST8((uint8_t)g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(_postinc8(1)); /* UNHANDLED_WRITE: (a2, invalid.w) = _mv */ M68K_TST8(_mv); }
    M68K_CMP32(_postinc32(1), 0xacc1033);
    { uint32_t _ea = (g_m68k.a[3] + 0 + (int32_t)g_m68k.d[0]); uint8_t _b = 1u << ((g_m68k.d[5]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v & ~ _b); }
    M68K_BTST(g_m68k.d[0], g_m68k.d[4]);
    /* WARNING: function did not end with RTS */
}

/* $023DFC-$023E36  (19 instructions, 58 bytes) */
void jt_023DFC(void) {
    { uint8_t _mv = (uint8_t)(_postinc8(1)); /* UNHANDLED_WRITE: ([, d1.l]) = _mv */ M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(1)); /* UNHANDLED_WRITE: ([, d1.l]) = _mv */ M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(1)); /* UNHANDLED_WRITE: ([, d1.l]) = _mv */ M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(1)); /* UNHANDLED_WRITE: ([, d1.l]) = _mv */ M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(1)); /* UNHANDLED_WRITE: ([, d1.l]) = _mv */ M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(1)); /* UNHANDLED_WRITE: ([, d1.l]) = _mv */ M68K_TST8(_mv); }
    { uint32_t _ea = g_m68k.a[1]; uint8_t _b = 1u << ((g_m68k.d[4]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v & ~ _b); }
    { uint32_t _ea = g_m68k.a[1]; uint8_t _b = 1u << ((g_m68k.d[4]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v & ~ _b); }
    { uint32_t _ea = g_m68k.a[6]; uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, 0x999); bus_write16(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[1]; uint8_t _b = 1u << ((g_m68k.d[4]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v & ~ _b); }
    { uint32_t _ea = g_m68k.a[1]; uint8_t _b = 1u << ((g_m68k.d[4]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v & ~ _b); }
    { uint32_t _ea = g_m68k.a[6]; uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, 0x999); bus_write16(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[1]; uint8_t _b = 1u << ((g_m68k.d[4]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v & ~ _b); }
    { uint32_t _ea = g_m68k.a[1]; uint8_t _b = 1u << ((g_m68k.d[4]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v & ~ _b); }
    { uint32_t _ea = g_m68k.a[6]; uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, 0x999); bus_write16(_ea, _tmp); }
    M68K_BTST(bus_read8((g_m68k.a[3] + 0x66 + (int16_t)(uint16_t)g_m68k.d[0])), g_m68k.d[3]);
    { uint32_t _ea = g_m68k.a[1]; uint8_t _b = 1u << ((g_m68k.d[4]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v & ~ _b); }
    /* TODO $023E32: dc.w $6cc  [06 CC] */
    { uint32_t _ea = g_m68k.a[1]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v & ~ _b); }
    /* WARNING: function did not end with RTS */
}

/* $023E80-$023EC4  (17 instructions, 68 bytes) */
void jt_023E80(void) {
    M68K_OR8(g_m68k.d[2], 0x44);
    M68K_OR8(g_m68k.d[2], 0x44);
    M68K_OR8(g_m68k.d[2], 0x44);
    M68K_OR8(g_m68k.d[2], 0xc4);
    M68K_OR8(g_m68k.d[2], 0x44);
    M68K_OR8(g_m68k.d[2], 0xc4);
    M68K_OR8(g_m68k.d[2], 0xc4);
    M68K_OR8(g_m68k.d[2], 0xc4);
    M68K_OR8(g_m68k.d[2], 0x44);
    M68K_OR8(g_m68k.d[2], 0x44);
    M68K_OR8(g_m68k.d[2], 0x44);
    M68K_OR8(g_m68k.d[2], 0xc4);
    M68K_OR8(g_m68k.d[2], 0x44);
    M68K_OR8(g_m68k.d[2], 0xc4);
    M68K_OR8(g_m68k.d[2], 0xc4);
    M68K_OR8(g_m68k.d[2], 0xc4);
    M68K_OR8(g_m68k.d[2], 0xc4);
    /* WARNING: function did not end with RTS */
}

/* $023EC4-$023EEE  (21 instructions, 42 bytes) */
void jt_023EC4(void) {
    /* TODO $023EC4: chk.w (a1)+, d0  [41 99] */
    /* TODO $023EC6: chk.w (a1)+, d0  [41 99] */
    /* TODO $023EC8: chk.w (a1)+, d0  [41 99] */
    /* TODO $023ECA: chk.w (a1)+, d0  [41 99] */
    /* TODO $023ECC: chk.w (a1)+, d0  [41 99] */
    /* TODO $023ECE: chk.w (a1)+, d0  [41 99] */
    /* TODO $023ED0: chk.w (a1)+, d0  [41 99] */
    /* TODO $023ED2: chk.w (a1)+, d0  [41 99] */
    /* TODO $023ED4: chk.w (a1)+, d0  [41 99] */
    /* TODO $023ED6: chk.w (a1)+, d0  [41 99] */
    /* TODO $023ED8: chk.w (a1)+, d0  [41 99] */
    /* TODO $023EDA: chk.w (a1)+, d0  [41 99] */
    { uint8_t _mv = (uint8_t)(_postinc8(1)); bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(1)); bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_predec8(6)); bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(1)); bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(1)); bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(1)); bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_predec8(6)); bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(1)); bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); bus_write8(g_m68k.a[2], _mv); M68K_TST8(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $023F44-$023F7C  (27 instructions, 56 bytes) */
void jt_023F44(void) {
    M68K_NEGX8(g_m68k.d[0]);
    M68K_NEGX8(g_m68k.d[0]);
    M68K_NEGX8(g_m68k.d[0]);
    M68K_NEGX8(g_m68k.d[0]);
    M68K_NEGX8(g_m68k.d[0]);
    M68K_NEGX8(g_m68k.d[0]);
    M68K_NEGX8(g_m68k.d[0]);
    M68K_NEGX8(g_m68k.d[0]);
    M68K_NEGX8(g_m68k.d[0]);
    M68K_NEGX8(g_m68k.d[0]);
    M68K_NEGX8(g_m68k.d[0]);
    M68K_NEGX8(g_m68k.d[0]);
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[4]);
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[4]);
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[5]);
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[4]);
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[4]);
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[4]);
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[5]);
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[4]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[0]);
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[5]);
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[3] -= 1; bus_write8(g_m68k.a[3], _mv); M68K_TST8(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[0]);
    M68K_CMP8(g_m68k.d[0], 0x0);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    /* WARNING: function did not end with RTS */
}

/* $023FC4-$023FEE  (11 instructions, 42 bytes) */
void jt_023FC4(void) {
    { uint16_t _mv = (uint16_t)(_postinc16(1)); /* UNHANDLED_WRITE: ([, d3.l]) = _mv */ M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(1)); /* UNHANDLED_WRITE: ([, d3.l]) = _mv */ M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(1)); /* UNHANDLED_WRITE: ([, d3.l]) = _mv */ M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(1)); /* UNHANDLED_WRITE: ([, d3.l]) = _mv */ M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(1)); /* UNHANDLED_WRITE: ([, d3.l]) = _mv */ M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(1)); /* UNHANDLED_WRITE: ([, d3.l]) = _mv */ M68K_TST16(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(1)); /* UNHANDLED_WRITE: ([, d1.w * 4]) = _mv */ M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_predec8(6)); bus_write8(g_m68k.a[3] + 0x1599, _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(1)); /* UNHANDLED_WRITE: ([, d1.w * 4]) = _mv */ M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_predec8(6)); bus_write8(g_m68k.a[3] + 0x1599, _mv); M68K_TST8(_mv); }
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[1]);
    /* WARNING: function did not end with RTS */
}

/* $024044-$024068  (11 instructions, 36 bytes) */
void jt_024044(void) {
    { uint8_t _mv = (uint8_t)(_postinc8(1)); /* UNHANDLED_WRITE: ([, d1.l]) = _mv */ M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(1)); /* UNHANDLED_WRITE: ([, d1.l]) = _mv */ M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(1)); /* UNHANDLED_WRITE: ([, d1.l]) = _mv */ M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(1)); /* UNHANDLED_WRITE: ([, d1.l]) = _mv */ M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(1)); /* UNHANDLED_WRITE: ([, d1.l]) = _mv */ M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(1)); /* UNHANDLED_WRITE: ([, d1.l]) = _mv */ M68K_TST8(_mv); }
    { uint32_t _ea = g_m68k.a[1]; uint8_t _b = 1u << ((g_m68k.d[4]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v & ~ _b); }
    { uint32_t _ea = g_m68k.a[1]; uint8_t _b = 1u << ((g_m68k.d[4]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v & ~ _b); }
    { uint32_t _ea = g_m68k.a[6]; uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, 0x999); bus_write16(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[1]; uint8_t _b = 1u << ((g_m68k.d[4]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v & ~ _b); }
    { uint32_t _ea = g_m68k.a[1]; uint8_t _b = 1u << ((g_m68k.d[4]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v & ~ _b); }
    /* WARNING: function did not end with RTS */
}

/* $024068-$02406C  (1 instructions, 4 bytes) */
void jt_024068(void) {
    { uint32_t _ea = g_m68k.a[6]; uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, 0x999); bus_write16(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0240C4-$02410C  (18 instructions, 72 bytes) */
void jt_0240C4(void) {
    M68K_OR8(g_m68k.d[2], 0xc);
    M68K_OR8(g_m68k.d[2], 0x8c);
    M68K_OR8(g_m68k.d[2], 0x8c);
    M68K_OR8(g_m68k.d[2], 0x8c);
    M68K_OR8(g_m68k.d[2], 0xc);
    M68K_OR8(g_m68k.d[2], 0x8c);
    M68K_OR8(g_m68k.d[2], 0xc);
    M68K_OR8(g_m68k.d[2], 0xc);
    M68K_OR8(g_m68k.d[2], 0xc);
    M68K_OR8(g_m68k.d[2], 0x8c);
    M68K_OR8(g_m68k.d[2], 0x8c);
    M68K_OR8(g_m68k.d[2], 0x8c);
    M68K_OR8(g_m68k.d[2], 0xc);
    M68K_OR8(g_m68k.d[2], 0x8c);
    M68K_OR8(g_m68k.d[2], 0xc);
    M68K_OR8(g_m68k.d[2], 0xc);
    M68K_OR8(g_m68k.d[2], 0xc);
    M68K_OR8(g_m68k.d[2], 0xc);
    /* WARNING: function did not end with RTS */
}

/* $02410C-$024124  (12 instructions, 24 bytes) */
void jt_02410C(void) {
    g_m68k.a[0] = bus_read32(g_m68k.a[1]);
    g_m68k.a[0] = bus_read32(g_m68k.a[1]);
    g_m68k.a[0] = bus_read32(g_m68k.a[1]);
    g_m68k.a[0] = bus_read32(g_m68k.a[1]);
    g_m68k.a[0] = bus_read32(g_m68k.a[1]);
    g_m68k.a[0] = bus_read32(g_m68k.a[1]);
    g_m68k.a[0] = bus_read32(g_m68k.a[1]);
    g_m68k.a[0] = bus_read32(g_m68k.a[1]);
    g_m68k.a[0] = bus_read32(g_m68k.a[1]);
    g_m68k.a[0] = bus_read32(g_m68k.a[1]);
    g_m68k.a[0] = bus_read32(g_m68k.a[1]);
    g_m68k.a[0] = bus_read32(g_m68k.a[1]);
    /* WARNING: function did not end with RTS */
}

/* $02418C-$0241BE  (25 instructions, 50 bytes) */
void jt_02418C(void) {
    g_m68k.d[0] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[4]);
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[4]);
    g_m68k.d[0] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[4]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[4]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[1]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[1]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[0] -= 1; bus_write8(g_m68k.a[0], _mv); M68K_TST8(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $02428C-$0242BC  (20 instructions, 48 bytes) */
void jt_02428C(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[0]);
    M68K_CMP8(g_m68k.d[0], 0x0);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[0]);
    M68K_CMP8(g_m68k.d[0], 0x0);
    M68K_EOR8(g_m68k.d[0], 0x0);
    M68K_BTST(g_m68k.d[0], g_m68k.d[5]);
    M68K_BTST(g_m68k.d[0], g_m68k.d[4]);
    M68K_BTST(g_m68k.d[0], g_m68k.d[4]);
    M68K_EOR8(g_m68k.d[0], 0x80);
    /* WARNING: function did not end with RTS */
}

/* $024354-$02437A  (19 instructions, 38 bytes) */
void jt_024354(void) {
    /* TODO $024354: chk.w (a1)+, d0  [41 99] */
    /* TODO $024356: chk.w (a1)+, d0  [41 99] */
    /* TODO $024358: chk.w (a1)+, d0  [41 99] */
    /* TODO $02435A: chk.w (a1)+, d0  [41 99] */
    /* TODO $02435C: chk.w (a1)+, d0  [41 99] */
    /* TODO $02435E: chk.w (a1)+, d0  [41 99] */
    /* TODO $024360: chk.w (a1)+, d0  [41 99] */
    /* TODO $024362: chk.w (a1)+, d0  [41 99] */
    /* TODO $024364: chk.w (a1)+, d0  [41 99] */
    /* TODO $024366: chk.w (a1)+, d0  [41 99] */
    /* TODO $024368: chk.w (a1)+, d0  [41 99] */
    /* TODO $02436A: chk.w (a1)+, d0  [41 99] */
    { uint8_t _mv = (uint8_t)(_postinc8(1)); bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(1)); bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    { uint32_t _mv = (uint32_t)(g_m68k.a[4]); bus_write32(g_m68k.a[0], _mv); g_m68k.a[0] += 4; M68K_TST32(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(1)); bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); bus_write8(g_m68k.a[2], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(1)); bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(1)); bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0243D4-$0243F2  (3 instructions, 30 bytes) */
void jt_0243D4(void) {
    { uint16_t _mv = (uint16_t)(/* UNHANDLED_READ: $3d703d70(a0, invalid.w) */ 0); bus_write16(g_m68k.a[6] + 0x3d70, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(/* UNHANDLED_READ: $3d703d70(a0, invalid.w) */ 0); bus_write16(g_m68k.a[6] + 0x3d70, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(/* UNHANDLED_READ: $170a170a(a0, invalid.w) */ 0); bus_write16(g_m68k.a[6] + 0x1eb8, _mv); M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $024454-$024470  (8 instructions, 28 bytes) */
void jt_024454(void) {
    { uint8_t _mv = (uint8_t)(_postinc8(1)); /* UNHANDLED_WRITE: ([, d1.l]) = _mv */ M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(1)); /* UNHANDLED_WRITE: ([, d1.l]) = _mv */ M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(1)); /* UNHANDLED_WRITE: ([, d1.l]) = _mv */ M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(1)); /* UNHANDLED_WRITE: ([, d1.l]) = _mv */ M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(1)); /* UNHANDLED_WRITE: ([, d1.l]) = _mv */ M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(1)); /* UNHANDLED_WRITE: ([, d1.l]) = _mv */ M68K_TST8(_mv); }
    { uint32_t _ea = g_m68k.a[1]; uint8_t _b = 1u << ((g_m68k.d[4]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v & ~ _b); }
    { uint32_t _ea = g_m68k.a[1]; uint8_t _b = 1u << ((g_m68k.d[4]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v & ~ _b); }
    /* WARNING: function did not end with RTS */
}

/* $02451C-$024542  (19 instructions, 38 bytes) */
void jt_02451C(void) {
    /* TODO $02451C: chk.w (a1)+, d0  [41 99] */
    /* TODO $02451E: chk.w (a1)+, d0  [41 99] */
    /* TODO $024520: chk.w (a1)+, d0  [41 99] */
    /* TODO $024522: chk.w (a1)+, d0  [41 99] */
    /* TODO $024524: chk.w (a1)+, d0  [41 99] */
    /* TODO $024526: chk.w (a1)+, d0  [41 99] */
    /* TODO $024528: chk.w (a1)+, d0  [41 99] */
    /* TODO $02452A: chk.w (a1)+, d0  [41 99] */
    /* TODO $02452C: chk.w (a1)+, d0  [41 99] */
    /* TODO $02452E: chk.w (a1)+, d0  [41 99] */
    /* TODO $024530: chk.w (a1)+, d0  [41 99] */
    /* TODO $024532: chk.w (a1)+, d0  [41 99] */
    { uint8_t _mv = (uint8_t)(_postinc8(1)); bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(1)); bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    { uint32_t _mv = (uint32_t)(g_m68k.a[4]); bus_write32(g_m68k.a[0], _mv); g_m68k.a[0] += 4; M68K_TST32(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(1)); bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); bus_write8(g_m68k.a[2], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(1)); bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(1)); bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $02459C-$0245D4  (13 instructions, 56 bytes) */
void jt_02459C(void) {
    { uint16_t _mv = (uint16_t)(bus_read16(0x003EB8)); bus_write16(g_m68k.a[7], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(0x003EB8)); bus_write16(g_m68k.a[7], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(0x003EB8)); bus_write16(g_m68k.a[7], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(0x003EB8)); bus_write16(g_m68k.a[7], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(0x003EB8)); bus_write16(g_m68k.a[7], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(0x003EB8)); bus_write16(g_m68k.a[7], _mv); M68K_TST16(_mv); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[5]); /* UNHANDLED_WRITE: ([], d1.w * 8) = _mv */ M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(4)); bus_write8(g_m68k.a[7] + 0x1785, _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(1)); /* UNHANDLED_WRITE: ([], d1.w * 8) = _mv */ M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[5]); /* UNHANDLED_WRITE: ([], d1.w * 4, $11a31399) = _mv */ M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(1)); bus_write8(g_m68k.a[1] + (-0x58) + (int16_t)(uint16_t)g_m68k.d[1], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = (g_m68k.a[6] + 0x1221); uint8_t _b = 1u << ((g_m68k.d[7]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v & ~ _b); }
    { uint8_t _mv = (uint8_t)(_postinc8(1)); bus_write8(g_m68k.a[1] + (-0x58) + (int16_t)(uint16_t)g_m68k.d[1], _mv); M68K_TST8(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $02461C-$024638  (8 instructions, 28 bytes) */
void jt_02461C(void) {
    { uint8_t _mv = (uint8_t)(_postinc8(1)); /* UNHANDLED_WRITE: ([, d1.l]) = _mv */ M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(1)); /* UNHANDLED_WRITE: ([, d1.l]) = _mv */ M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(1)); /* UNHANDLED_WRITE: ([, d1.l]) = _mv */ M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(1)); /* UNHANDLED_WRITE: ([, d1.l]) = _mv */ M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(1)); /* UNHANDLED_WRITE: ([, d1.l]) = _mv */ M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(1)); /* UNHANDLED_WRITE: ([, d1.l]) = _mv */ M68K_TST8(_mv); }
    { uint32_t _ea = g_m68k.a[1]; uint8_t _b = 1u << ((g_m68k.d[4]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v & ~ _b); }
    { uint32_t _ea = g_m68k.a[1]; uint8_t _b = 1u << ((g_m68k.d[4]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v & ~ _b); }
    /* WARNING: function did not end with RTS */
}

/* $02469C-$0246E4  (18 instructions, 72 bytes) */
void jt_02469C(void) {
    M68K_OR8(g_m68k.d[2], 0xe4);
    M68K_OR8(g_m68k.d[2], 0xe4);
    M68K_OR8(g_m68k.d[2], 0x64);
    M68K_OR8(g_m68k.d[2], 0x64);
    M68K_OR8(g_m68k.d[2], 0x64);
    M68K_OR8(g_m68k.d[2], 0xe4);
    M68K_OR8(g_m68k.d[2], 0xe4);
    M68K_OR8(g_m68k.d[2], 0xe4);
    M68K_OR8(g_m68k.d[2], 0xe4);
    M68K_OR8(g_m68k.d[2], 0xe4);
    M68K_OR8(g_m68k.d[2], 0x64);
    M68K_OR8(g_m68k.d[2], 0x64);
    M68K_OR8(g_m68k.d[2], 0x64);
    M68K_OR8(g_m68k.d[2], 0xe4);
    M68K_OR8(g_m68k.d[2], 0xe4);
    M68K_OR8(g_m68k.d[2], 0xe4);
    M68K_OR8(g_m68k.d[2], 0xe4);
    M68K_OR8(g_m68k.d[2], 0xe4);
    /* WARNING: function did not end with RTS */
}

/* $0246E4-$02470A  (19 instructions, 38 bytes) */
void jt_0246E4(void) {
    /* TODO $0246E4: chk.w (a1)+, d0  [41 99] */
    /* TODO $0246E6: chk.w (a1)+, d0  [41 99] */
    /* TODO $0246E8: chk.w (a1)+, d0  [41 99] */
    /* TODO $0246EA: chk.w (a1)+, d0  [41 99] */
    /* TODO $0246EC: chk.w (a1)+, d0  [41 99] */
    /* TODO $0246EE: chk.w (a1)+, d0  [41 99] */
    /* TODO $0246F0: chk.w (a1)+, d0  [41 99] */
    /* TODO $0246F2: chk.w (a1)+, d0  [41 99] */
    /* TODO $0246F4: chk.w (a1)+, d0  [41 99] */
    /* TODO $0246F6: chk.w (a1)+, d0  [41 99] */
    /* TODO $0246F8: chk.w (a1)+, d0  [41 99] */
    /* TODO $0246FA: chk.w (a1)+, d0  [41 99] */
    { uint8_t _mv = (uint8_t)(_postinc8(1)); bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(1)); bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    { uint32_t _mv = (uint32_t)(g_m68k.a[4]); bus_write32(g_m68k.a[0], _mv); g_m68k.a[0] += 4; M68K_TST32(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(1)); bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); bus_write8(g_m68k.a[2], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(1)); bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(1)); bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $024764-$02479E  (29 instructions, 58 bytes) */
void jt_024764(void) {
    M68K_NEGX8(g_m68k.d[0]);
    M68K_NEGX8(g_m68k.d[0]);
    M68K_NEGX8(g_m68k.d[0]);
    M68K_NEGX8(g_m68k.d[0]);
    M68K_NEGX8(g_m68k.d[0]);
    M68K_NEGX8(g_m68k.d[0]);
    M68K_NEGX8(g_m68k.d[0]);
    M68K_NEGX8(g_m68k.d[0]);
    M68K_NEGX8(g_m68k.d[0]);
    M68K_NEGX8(g_m68k.d[0]);
    M68K_NEGX8(g_m68k.d[0]);
    M68K_NEGX8(g_m68k.d[0]);
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[4]);
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[4]);
    g_m68k.d[0] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[4]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[4]);
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[4]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[1]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[0] -= 1; bus_write8(g_m68k.a[0], _mv); M68K_TST8(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); bus_write8(g_m68k.a[1], _mv); M68K_TST8(_mv); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[0] -= 1; bus_write8(g_m68k.a[0], _mv); M68K_TST8(_mv); }
    M68K_BTST(g_m68k.d[0], g_m68k.d[7]);
    /* WARNING: function did not end with RTS */
}

/* $0247E4-$024800  (8 instructions, 28 bytes) */
void jt_0247E4(void) {
    { uint8_t _mv = (uint8_t)(_postinc8(1)); /* UNHANDLED_WRITE: ([, d1.l]) = _mv */ M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(1)); /* UNHANDLED_WRITE: ([, d1.l]) = _mv */ M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(1)); /* UNHANDLED_WRITE: ([, d1.l]) = _mv */ M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(1)); /* UNHANDLED_WRITE: ([, d1.l]) = _mv */ M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(1)); /* UNHANDLED_WRITE: ([, d1.l]) = _mv */ M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(1)); /* UNHANDLED_WRITE: ([, d1.l]) = _mv */ M68K_TST8(_mv); }
    { uint32_t _ea = g_m68k.a[1]; uint8_t _b = 1u << ((g_m68k.d[4]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v & ~ _b); }
    { uint32_t _ea = g_m68k.a[1]; uint8_t _b = 1u << ((g_m68k.d[4]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v & ~ _b); }
    /* WARNING: function did not end with RTS */
}

/* $0248AC-$0248D6  (16 instructions, 42 bytes) */
void jt_0248AC(void) {
    /* TODO $0248AC: chk.w (a1)+, d0  [41 99] */
    /* TODO $0248AE: chk.w (a1)+, d0  [41 99] */
    /* TODO $0248B0: chk.w (a1)+, d0  [41 99] */
    /* TODO $0248B2: chk.w (a1)+, d0  [41 99] */
    /* TODO $0248B4: chk.w (a1)+, d0  [41 99] */
    /* TODO $0248B6: chk.w (a1)+, d0  [41 99] */
    /* TODO $0248B8: chk.w (a1)+, d0  [41 99] */
    /* TODO $0248BA: chk.w (a1)+, d0  [41 99] */
    /* TODO $0248BC: chk.w (a1)+, d0  [41 99] */
    /* TODO $0248BE: chk.w (a1)+, d0  [41 99] */
    /* TODO $0248C0: chk.w (a1)+, d0  [41 99] */
    /* TODO $0248C2: chk.w (a1)+, d0  [41 99] */
    { uint8_t _mv = (uint8_t)(_postinc8(1)); bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(1)); bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(0x1899168C)); bus_write8(g_m68k.a[6] + (-0x67) + (int32_t)g_m68k.d[1], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(7)); /* UNHANDLED_WRITE: ([, d1.w * 8], $1586) = _mv */ M68K_TST8(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $02492C-$024948  (7 instructions, 28 bytes) */
void jt_02492C(void) {
    { uint16_t _mv = (uint16_t)(bus_read16(0x003EB8)); bus_write16(g_m68k.a[7], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(0x003EB8)); bus_write16(g_m68k.a[7], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(0x003EB8)); bus_write16(g_m68k.a[7], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(0x003EB8)); bus_write16(g_m68k.a[7], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(0x003EB8)); bus_write16(g_m68k.a[7], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(0x003EB8)); bus_write16(g_m68k.a[7], _mv); M68K_TST16(_mv); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[5]); /* UNHANDLED_WRITE: ([], d1.w * 8) = _mv */ M68K_TST8(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0249AC-$0249C4  (6 instructions, 24 bytes) */
void jt_0249AC(void) {
    { uint32_t _mv = (uint32_t)(g_m68k.d[4]); /* UNHANDLED_WRITE: (d2.l * 2) = _mv */ M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(g_m68k.d[4]); /* UNHANDLED_WRITE: (d2.l * 2) = _mv */ M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(g_m68k.d[4]); /* UNHANDLED_WRITE: (d2.l * 2) = _mv */ M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(g_m68k.d[4]); /* UNHANDLED_WRITE: (d2.l * 2) = _mv */ M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(g_m68k.d[4]); /* UNHANDLED_WRITE: (d2.l * 2) = _mv */ M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(g_m68k.d[4]); /* UNHANDLED_WRITE: (d2.l * 2) = _mv */ M68K_TST32(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $024A74-$024A9E  (16 instructions, 42 bytes) */
void jt_024A74(void) {
    /* TODO $024A74: chk.w (a1)+, d0  [41 99] */
    /* TODO $024A76: chk.w (a1)+, d0  [41 99] */
    /* TODO $024A78: chk.w (a1)+, d0  [41 99] */
    /* TODO $024A7A: chk.w (a1)+, d0  [41 99] */
    /* TODO $024A7C: chk.w (a1)+, d0  [41 99] */
    /* TODO $024A7E: chk.w (a1)+, d0  [41 99] */
    /* TODO $024A80: chk.w (a1)+, d0  [41 99] */
    /* TODO $024A82: chk.w (a1)+, d0  [41 99] */
    /* TODO $024A84: chk.w (a1)+, d0  [41 99] */
    /* TODO $024A86: chk.w (a1)+, d0  [41 99] */
    /* TODO $024A88: chk.w (a1)+, d0  [41 99] */
    /* TODO $024A8A: chk.w (a1)+, d0  [41 99] */
    { uint8_t _mv = (uint8_t)(_postinc8(1)); bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(1)); bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(0x1899168C)); bus_write8(g_m68k.a[6] + (-0x67) + (int32_t)g_m68k.d[1], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(7)); /* UNHANDLED_WRITE: ([, d1.w * 8], $1379) = _mv */ M68K_TST8(_mv); }
    /* WARNING: function did not end with RTS */
}
