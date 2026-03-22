/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $09A060 - $09B74C */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

/* $09A060-$09A07C  (13 instructions, 28 bytes) */
void jt_09A060(void) {
    M68K_OR8(g_m68k.d[1], 0x6);
    M68K_CMP32(g_m68k.d[6], g_m68k.d[1]);
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    M68K_CMP32(g_m68k.d[6], g_m68k.d[6]);
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    M68K_CMP32(g_m68k.d[6], g_m68k.a[4]);
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    M68K_CMP32(g_m68k.d[6], g_m68k.d[1]);
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    M68K_CMP32(g_m68k.d[6], g_m68k.d[1]);
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    M68K_CMP32(g_m68k.d[6], _predec32(6));
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $09A07C-$09A0A0  (9 instructions, 36 bytes) */
void jt_09A07C(void) {
    M68K_OR8(g_m68k.d[1], 0x8);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $09A0A0-$09A0C8  (13 instructions, 40 bytes) */
void jt_09A0A0(void) {
    M68K_OR8(g_m68k.d[6], 0x5);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(bus_read16(g_m68k.a[1])));
    /* TODO $09A0B2: sbcd.b d0, d1  [83 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(bus_read16(g_m68k.a[1])));
    /* TODO $09A0C2: sbcd.b d0, d1  [83 00] */
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(_postinc16(4)));
    /* TODO $09A0C6: sbcd.b d0, d1  [83 00] */
    /* WARNING: function did not end with RTS */
}

/* $09A0C8-$09A11C  (35 instructions, 84 bytes) */
void jt_09A0C8(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(bus_read16(g_m68k.a[1])));
    /* TODO $09A0D2: sbcd.b d0, d1  [83 00] */
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(bus_read16(g_m68k.a[6])));
    /* TODO $09A0D6: sbcd.b d0, d1  [83 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(g_m68k.a[6]));
    /* TODO $09A0E2: sbcd.b d0, d1  [83 00] */
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(bus_read16(g_m68k.a[2])));
    /* TODO $09A0E6: sbcd.b d0, d1  [83 00] */
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(bus_read16(g_m68k.a[7])));
    /* TODO $09A0EA: sbcd.b d0, d1  [83 00] */
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(_postinc16(5)));
    /* TODO $09A0EE: sbcd.b d0, d1  [83 00] */
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(_predec16(2)));
    /* TODO $09A0F2: sbcd.b d0, d1  [83 00] */
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(g_m68k.a[7]));
    /* TODO $09A0F6: sbcd.b d0, d1  [83 00] */
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(bus_read16(g_m68k.a[3])));
    /* TODO $09A0FA: sbcd.b d0, d1  [83 00] */
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(_postinc16(0)));
    /* TODO $09A0FE: sbcd.b d0, d1  [83 00] */
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(_postinc16(6)));
    /* TODO $09A102: sbcd.b d0, d1  [83 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(bus_read16(g_m68k.a[4])));
    /* TODO $09A10E: sbcd.b d0, d1  [83 00] */
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(_postinc16(1)));
    /* TODO $09A112: sbcd.b d0, d1  [83 00] */
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(_postinc16(7)));
    /* TODO $09A116: sbcd.b d0, d1  [83 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $09A11C-$09A198  (48 instructions, 124 bytes) */
void jt_09A11C(void) {
    M68K_OR8(g_m68k.d[6], 0x5);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(bus_read16(g_m68k.a[4])));
    /* TODO $09A126: sbcd.b d1, d1  [83 01] */
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(_postinc16(2)));
    /* TODO $09A12A: sbcd.b d0, d1  [83 00] */
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(_predec16(0)));
    /* TODO $09A12E: sbcd.b d0, d1  [83 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(g_m68k.a[7]));
    /* TODO $09A136: sbcd.b d1, d1  [83 01] */
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(bus_read16(g_m68k.a[3])));
    /* TODO $09A13A: sbcd.b d1, d1  [83 01] */
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(_postinc16(0)));
    /* TODO $09A13E: sbcd.b d1, d1  [83 01] */
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(_postinc16(6)));
    /* TODO $09A142: sbcd.b d1, d1  [83 01] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(bus_read16(g_m68k.a[0])));
    /* TODO $09A14A: sbcd.b d0, d1  [83 00] */
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(bus_read16(g_m68k.a[5])));
    /* TODO $09A14E: sbcd.b d0, d1  [83 00] */
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(_postinc16(3)));
    /* TODO $09A152: sbcd.b d0, d1  [83 00] */
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(_predec16(1)));
    /* TODO $09A156: sbcd.b d0, d1  [83 00] */
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(_predec16(3)));
    /* TODO $09A15A: sbcd.b d0, d1  [83 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(bus_read16(g_m68k.a[1])));
    /* TODO $09A162: sbcd.b d1, d1  [83 01] */
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(bus_read16(g_m68k.a[6])));
    /* TODO $09A166: sbcd.b d1, d1  [83 01] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(bus_read16(g_m68k.a[1])));
    /* TODO $09A17A: sbcd.b d1, d1  [83 01] */
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(_postinc16(4)));
    /* TODO $09A17E: sbcd.b d1, d1  [83 01] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(bus_read16(g_m68k.a[1])));
    /* TODO $09A192: sbcd.b d1, d1  [83 01] */
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $09A198-$09A1AC  (9 instructions, 20 bytes) */
void jt_09A198(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(_predec16(4)));
    /* TODO $09A19E: sbcd.b d0, d1  [83 00] */
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(_predec16(0)));
    /* TODO $09A1A2: sbcd.b d0, d1  [83 00] */
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(_postinc16(0)));
    /* TODO $09A1A6: sbcd.b d1, d1  [83 01] */
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(_postinc16(6)));
    /* TODO $09A1AA: sbcd.b d1, d1  [83 01] */
    /* WARNING: function did not end with RTS */
}

/* $09A1AC-$09A1D4  (14 instructions, 40 bytes) */
void jt_09A1AC(void) {
    M68K_OR8(g_m68k.d[6], 0x7);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(_predec16(5)));
    M68K_SUBX8(g_m68k.d[4], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(0x9900));
    /* TODO $09A1BC: cmpm.b (a2)+, (a6)+  [BD 0A] */
    M68K_SUBX8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    M68K_SUBX8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    M68K_SUBX8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[3] + 0 + (int32_t)g_m68k.a[1]); uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(bus_read16(g_m68k.a[7] + (-0x6700))));
    /* WARNING: function did not end with RTS */
}

/* $09A258-$09A2B8  (33 instructions, 96 bytes) */
void jt_09A258(void) {
    M68K_OR8(g_m68k.d[6], 0x8);
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(bus_read16(g_m68k.a[0] + (-0x6800))));
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(bus_read16(g_m68k.a[4] + 0 + (int32_t)g_m68k.a[1])));
    M68K_EOR8(g_m68k.d[2], g_m68k.d[6]);
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[3] + (-0x6800)); uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(bus_read16(g_m68k.a[1] + (-0x6800))));
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(bus_read16(g_m68k.a[5] + 0 + (int32_t)g_m68k.a[1])));
    M68K_EOR8(g_m68k.d[3], g_m68k.d[6]);
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[4] + (-0x6800)); uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[4] + 0 + (int32_t)g_m68k.a[1]); uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(bus_read16(g_m68k.a[2] + (-0x6800))));
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(bus_read16(g_m68k.a[6] + 0 + (int32_t)g_m68k.a[1])));
    M68K_EOR8(g_m68k.d[4], g_m68k.d[6]);
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[5] + (-0x6800)); uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[5] + 0 + (int32_t)g_m68k.a[1]); uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $09A31C-$09A35C  (22 instructions, 64 bytes) */
void jt_09A31C(void) {
    M68K_OR8(g_m68k.d[4], 0x8);
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(bus_read16(g_m68k.a[6] + (-0x6800))));
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(bus_read16(0x93b26)));
    /* TODO $09A328: cmpm.b (a0)+, (a6)+  [BD 08] */
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[1] + 0 + (int32_t)g_m68k.a[1]); uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x9800BD3E; uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(bus_read16(0x9a346 + (int32_t)g_m68k.a[1])));
    /* TODO $09A348: cmpm.b (a1)+, (a6)+  [BD 09] */
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[5]; uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[2] + 0 + (int32_t)g_m68k.a[1]); uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $09A3A0-$09A404  (43 instructions, 100 bytes) */
void jt_09A3A0(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $09A3B8: cmpm.w (a0)+, (a6)+  [BD 48] */
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[0]; uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_EOR16(g_m68k.d[1], g_m68k.d[6]);
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    /* TODO $09A3C8: cmpm.w (a1)+, (a6)+  [BD 49] */
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[1]; uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[0]; uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    M68K_EOR16(g_m68k.d[2], g_m68k.d[6]);
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    /* TODO $09A3D8: cmpm.w (a2)+, (a6)+  [BD 4A] */
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[2]; uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[1]; uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    M68K_EOR16(g_m68k.d[3], g_m68k.d[6]);
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    /* TODO $09A3E8: cmpm.w (a3)+, (a6)+  [BD 4B] */
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[3]; uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[2]; uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    M68K_EOR16(g_m68k.d[4], g_m68k.d[6]);
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    /* TODO $09A3F8: cmpm.w (a4)+, (a6)+  [BD 4C] */
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[4]; uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[3]; uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $09A404-$09A448  (29 instructions, 68 bytes) */
void jt_09A404(void) {
    M68K_OR8(g_m68k.d[4], 0x4);
    M68K_EOR16(g_m68k.d[5], g_m68k.d[6]);
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    /* TODO $09A40C: cmpm.w (a5)+, (a6)+  [BD 4D] */
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[5]; uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[4]; uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    M68K_EOR16(g_m68k.d[6], g_m68k.d[6]);
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    /* TODO $09A41C: cmpm.w (a6)+, (a6)+  [BD 4E] */
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[5]; uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    M68K_EOR16(g_m68k.d[7], g_m68k.d[6]);
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    /* TODO $09A42C: cmpm.w (a7)+, (a6)+  [BD 4F] */
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[7]; uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $09A448-$09A4B8  (42 instructions, 112 bytes) */
void jt_09A448(void) {
    M68K_OR8(g_m68k.d[6], 0x8);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[6]; uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[6] + (-0x6800)); uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[7] + 0 + (int32_t)g_m68k.a[1]); uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    M68K_EOR32(g_m68k.d[0], g_m68k.d[6]);
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    /* TODO $09A460: cmpm.l (a1)+, (a6)+  [BD 89] */
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[7]; uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[7]; uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[7] + (-0x6800)); uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    { uint32_t _ea = 0x009800; uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    M68K_EOR32(g_m68k.d[1], g_m68k.d[6]);
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    /* TODO $09A480: cmpm.l (a2)+, (a6)+  [BD 8A] */
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[1]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[0]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[0]; uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[0] + (-0x6800)); uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[0] + 0 + (int32_t)g_m68k.a[1]); uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    { uint32_t _ea = 0x9800BD82; uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    /* TODO $09A4A0: cmpm.l (a3)+, (a6)+  [BD 8B] */
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[2]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[1]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[1]; uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[1] + (-0x6800)); uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[1] + 0 + (int32_t)g_m68k.a[1]); uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $09A50C-$09A51C  (5 instructions, 16 bytes) */
void jt_09A50C(void) {
    M68K_OR8(g_m68k.d[3], 0x8);
    { uint32_t _ea = g_m68k.a[4]; uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[4] + (-0x6800)); uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[4] + 0 + (int32_t)g_m68k.a[1]); uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $09A570-$09A5A8  (17 instructions, 56 bytes) */
void jt_09A570(void) {
    M68K_OR8(g_m68k.d[6], 0x5);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[7]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[0] + 0 + (int32_t)g_m68k.a[1]); uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[7]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[0] + (-0x6800)); uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[1] + 0 + (int32_t)g_m68k.a[1]); uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = 0x9800BDC1; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[0]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[1] + (-0x6800)); uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[2] + 0 + (int32_t)g_m68k.a[1]); uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $09A5EC-$09A5FC  (5 instructions, 16 bytes) */
void jt_09A5EC(void) {
    M68K_OR8(g_m68k.d[3], 0x5);
    { uint32_t _ea = g_m68k.a[4]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[5] + (-0x6800)); uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[6] + 0 + (int32_t)g_m68k.a[1]); uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $09A62C-$09A6A8  (38 instructions, 124 bytes) */
void jt_09A62C(void) {
    M68K_OR8(g_m68k.d[6], 0x8);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[6]; uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[6] + (-0x6800)); uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[7] + 0 + (int32_t)g_m68k.a[1]); uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    M68K_EOR32(g_m68k.d[0], g_m68k.d[6]);
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[7]; uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[7]; uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[7] + (-0x6800)); uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    { uint32_t _ea = 0x009800; uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    M68K_EOR32(g_m68k.d[1], g_m68k.d[6]);
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[0]; uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[0] + (-0x6800)); uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[0] + 0 + (int32_t)g_m68k.a[1]); uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    { uint32_t _ea = 0x9800BD82; uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[1]; uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[1] + (-0x6800)); uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[1] + 0 + (int32_t)g_m68k.a[1]); uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $09A6F0-$09A740  (34 instructions, 80 bytes) */
void jt_09A6F0(void) {
    M68K_OR8(g_m68k.d[6], 0x8);
    { uint32_t _ea = g_m68k.a[7]; uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[7]; uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[7] + (-0x6800)); uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    M68K_CMP32(g_m68k.a[6], g_m68k.a[2]);
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[6], g_m68k.a[5]);
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[6], bus_read32(g_m68k.a[0]));
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[6], bus_read32(g_m68k.a[2]));
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[6], bus_read32(g_m68k.a[5]));
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[0]; uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[0] + (-0x6800)); uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[0] + 0 + (int32_t)g_m68k.a[1]); uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    M68K_CMP32(g_m68k.a[6], g_m68k.a[3]);
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[6], g_m68k.a[6]);
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[6], bus_read32(g_m68k.a[1]));
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[6], bus_read32(g_m68k.a[3]));
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[6], bus_read32(g_m68k.a[6]));
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[1]; uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[1] + (-0x6800)); uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[1] + 0 + (int32_t)g_m68k.a[1]); uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $09A7B4-$09A7C4  (5 instructions, 16 bytes) */
void jt_09A7B4(void) {
    M68K_OR8(g_m68k.d[2], 0x8);
    { uint32_t _ea = g_m68k.a[5]; uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[5] + (-0x6800)); uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[5] + 0 + (int32_t)g_m68k.a[1]); uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $09A7F8-$09A854  (33 instructions, 92 bytes) */
void jt_09A7F8(void) {
    M68K_OR8(g_m68k.d[6], 0x8);
    /* TODO $09A7FC: cmpm.l (a1)+, (a6)+  [BD 89] */
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[7]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[0] + 0 + (int32_t)g_m68k.a[1]); uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $09A81C: cmpm.l (a2)+, (a6)+  [BD 8A] */
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[1]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[0]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[7]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[0] + (-0x6800)); uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[1] + 0 + (int32_t)g_m68k.a[1]); uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = 0x9800BDC1; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    /* TODO $09A83C: cmpm.l (a3)+, (a6)+  [BD 8B] */
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[2]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[1]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[0]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[1] + (-0x6800)); uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[2] + 0 + (int32_t)g_m68k.a[1]); uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $09A8BC-$09A8D8  (12 instructions, 28 bytes) */
void jt_09A8BC(void) {
    M68K_OR8(g_m68k.d[6], 0x8);
    M68K_CMP32(g_m68k.a[6], _postinc32(0));
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[6], _postinc32(3));
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[6], _postinc32(6));
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[6], _predec32(0));
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[6], _predec32(3));
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[6] + 0 + (int32_t)g_m68k.a[1]); uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $09A980-$09A990  (5 instructions, 16 bytes) */
void jt_09A980(void) {
    M68K_OR8(g_m68k.d[2], 0x8);
    { uint32_t _ea = g_m68k.a[5]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[6] + (-0x6800)); uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[7] + 0 + (int32_t)g_m68k.a[1]); uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $09A9C4-$09A9C8  (1 instructions, 4 bytes) */
void jt_09A9C4(void) {
    M68K_OR8(g_m68k.d[6], 0x9);
    /* WARNING: function did not end with RTS */
}

/* $09AAA0-$09AB64  (57 instructions, 196 bytes) */
void jt_09AAA0(void) {
    M68K_OR8(g_m68k.d[6], 0x8);
    M68K_CMP32(g_m68k.d[6], bus_read32(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.a[1]));
    M68K_CMP32(g_m68k.d[6], bus_read32(g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.a[1]));
    M68K_CMP32(g_m68k.d[6], bus_read32(g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.a[1]));
    M68K_CMP32(g_m68k.d[6], bus_read32(0x93bb2));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP32(g_m68k.d[6], bus_read32(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.a[1]));
    M68K_CMP32(g_m68k.d[6], bus_read32(g_m68k.a[6] + 0 + (int16_t)(uint16_t)g_m68k.a[1]));
    M68K_CMP32(g_m68k.d[6], /* UNHANDLED_READ: (a16, a1.w) */ 0);
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(g_m68k.d[0]));
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP32(g_m68k.d[6], bus_read32(g_m68k.a[7] + 0 + (int16_t)(uint16_t)g_m68k.a[1]));
    M68K_CMP32(g_m68k.d[6], 0x9100bcc1);
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(g_m68k.d[6]));
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP32(g_m68k.a[6], bus_read32(g_m68k.a[2] + (-0x6f00)));
    M68K_CMP32(g_m68k.a[6], bus_read32(g_m68k.a[4] + (-0x6f00)));
    M68K_CMP32(g_m68k.a[6], bus_read32(g_m68k.a[7] + (-0x6f00)));
    M68K_CMP32(g_m68k.a[6], bus_read32(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.a[1]));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP32(g_m68k.d[6], _postinc32(4));
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    M68K_CMP32(g_m68k.d[6], _predec32(5));
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    M68K_CMP32(g_m68k.d[6], bus_read32(g_m68k.a[3] + (-0x6f00)));
    M68K_CMP32(g_m68k.d[6], bus_read32(g_m68k.a[6] + (-0x6f00)));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP32(g_m68k.d[6], _postinc32(5));
    /* TODO $09AB56: sbcd.b d0, d7  [8F 00] */
    M68K_CMP32(g_m68k.d[6], g_m68k.d[1]);
    /* TODO $09AB5A: sbcd.b d0, d7  [8F 00] */
    M68K_CMP32(g_m68k.d[6], g_m68k.d[1]);
    /* TODO $09AB5E: sbcd.b d0, d7  [8F 00] */
    M68K_CMP32(g_m68k.d[6], g_m68k.d[1]);
    /* TODO $09AB62: sbcd.b d0, d7  [8F 00] */
    /* WARNING: function did not end with RTS */
}

/* $09AB64-$09AB7C  (10 instructions, 24 bytes) */
void jt_09AB64(void) {
    M68K_OR8(g_m68k.d[1], 0x5);
    M68K_CMP32(g_m68k.d[6], g_m68k.d[6]);
    /* TODO $09AB6A: sbcd.b d0, d7  [8F 00] */
    M68K_CMP32(g_m68k.a[6], _predec32(6));
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[6], bus_read32(g_m68k.a[0] + (-0x6f00)));
    M68K_CMP32(g_m68k.d[6], g_m68k.d[1]);
    /* TODO $09AB76: sbcd.b d0, d7  [8F 00] */
    M68K_CMP32(g_m68k.d[6], _predec32(6));
    /* TODO $09AB7A: sbcd.b d0, d7  [8F 00] */
    /* WARNING: function did not end with RTS */
}

/* $09AB7C-$09AB9C  (8 instructions, 32 bytes) */
void jt_09AB7C(void) {
    M68K_OR8(g_m68k.d[1], 0x7);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $09AB9C-$09ABB8  (10 instructions, 28 bytes) */
void jt_09AB9C(void) {
    M68K_OR8(g_m68k.d[1], 0x6);
    { uint32_t _ea = g_m68k.a[1]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    /* TODO $09ABA2: sbcd.b d0, d7  [8F 00] */
    { uint32_t _ea = g_m68k.a[2]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    /* TODO $09ABA6: sbcd.b d0, d7  [8F 00] */
    { uint32_t _ea = (g_m68k.a[6] + (-0x7100)); uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = 0x8F00BB9A; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    /* TODO $09ABB2: sbcd.b d0, d7  [8F 00] */
    { uint32_t _ea = g_m68k.a[3]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    /* TODO $09ABB6: sbcd.b d0, d7  [8F 00] */
    /* WARNING: function did not end with RTS */
}

/* $09ABB8-$09ABD4  (10 instructions, 28 bytes) */
void jt_09ABB8(void) {
    M68K_OR8(g_m68k.d[1], 0x6);
    { uint32_t _ea = g_m68k.a[1]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[0], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[2]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[0], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[6] + (-0x7000)); uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = 0x9000BB9A; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[0], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[3]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $09ABD4-$09ABF0  (10 instructions, 28 bytes) */
void jt_09ABD4(void) {
    M68K_OR8(g_m68k.d[1], 0x6);
    { uint32_t _ea = g_m68k.a[1]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[2]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[6] + (-0x6f00)); uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = 0x9100BB9A; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[3]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $09ABF0-$09AC04  (9 instructions, 20 bytes) */
void jt_09ABF0(void) {
    M68K_OR8(g_m68k.d[1], 0x6);
    { uint32_t _ea = g_m68k.a[2]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    /* TODO $09ABF6: sbcd.b d0, d7  [8F 00] */
    { uint32_t _ea = g_m68k.a[3]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    /* TODO $09ABFA: sbcd.b d0, d7  [8F 00] */
    { uint32_t _ea = g_m68k.a[2]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    /* TODO $09ABFE: sbcd.b d0, d7  [8F 00] */
    { uint32_t _ea = g_m68k.a[3]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    /* TODO $09AC02: sbcd.b d0, d7  [8F 00] */
    /* WARNING: function did not end with RTS */
}

/* $09AC0C-$09AC10  (1 instructions, 4 bytes) */
void jt_09AC0C(void) {
    M68K_OR8(g_m68k.d[6], 0x9);
    /* WARNING: function did not end with RTS */
}

/* $09ACE8-$09ADAC  (67 instructions, 196 bytes) */
void jt_09ACE8(void) {
    M68K_OR8(g_m68k.d[6], 0x8);
    M68K_CMP32(g_m68k.d[6], g_m68k.d[0]);
    /* TODO $09ACEE: sbcd.b d0, d7  [8F 00] */
    M68K_CMP32(g_m68k.d[6], g_m68k.d[4]);
    /* TODO $09ACF2: sbcd.b d0, d7  [8F 00] */
    M68K_CMP32(g_m68k.d[6], g_m68k.a[1]);
    /* TODO $09ACF6: sbcd.b d0, d7  [8F 00] */
    M68K_CMP32(g_m68k.d[6], bus_read32(g_m68k.a[0]));
    /* TODO $09ACFA: sbcd.b d0, d7  [8F 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP32(g_m68k.d[6], g_m68k.d[5]);
    /* TODO $09AD12: sbcd.b d0, d7  [8F 00] */
    M68K_CMP32(g_m68k.d[6], g_m68k.a[2]);
    /* TODO $09AD16: sbcd.b d0, d7  [8F 00] */
    M68K_CMP32(g_m68k.d[6], bus_read32(g_m68k.a[1]));
    /* TODO $09AD1A: sbcd.b d0, d7  [8F 00] */
    M68K_CMP32(g_m68k.d[6], _postinc32(1));
    /* TODO $09AD1E: sbcd.b d0, d7  [8F 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP32(g_m68k.d[6], g_m68k.a[3]);
    /* TODO $09AD36: sbcd.b d0, d7  [8F 00] */
    M68K_CMP32(g_m68k.d[6], bus_read32(g_m68k.a[2]));
    /* TODO $09AD3A: sbcd.b d0, d7  [8F 00] */
    M68K_CMP32(g_m68k.d[6], _postinc32(2));
    /* TODO $09AD3E: sbcd.b d0, d7  [8F 00] */
    M68K_CMP32(g_m68k.d[6], _predec32(3));
    /* TODO $09AD42: sbcd.b d0, d7  [8F 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP32(g_m68k.a[6], bus_read32(g_m68k.a[2] + (-0x7100)));
    M68K_CMP32(g_m68k.a[6], bus_read32(g_m68k.a[4] + (-0x7100)));
    M68K_CMP32(g_m68k.a[6], bus_read32(g_m68k.a[7] + (-0x7100)));
    M68K_CMP32(g_m68k.a[6], bus_read32(g_m68k.a[1] + 0 + (int32_t)g_m68k.a[0] * 8));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP32(g_m68k.d[6], _postinc32(4));
    /* TODO $09AD7E: sbcd.b d0, d7  [8F 00] */
    M68K_CMP32(g_m68k.d[6], _predec32(5));
    /* TODO $09AD82: sbcd.b d0, d7  [8F 00] */
    M68K_CMP32(g_m68k.d[6], bus_read32(g_m68k.a[3] + (-0x7100)));
    M68K_CMP32(g_m68k.d[6], bus_read32(g_m68k.a[6] + (-0x7100)));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP32(g_m68k.d[6], _postinc32(5));
    /* TODO $09AD9E: sbcd.b d0, d7  [8F 00] */
    M68K_CMP32(g_m68k.d[6], g_m68k.d[1]);
    /* TODO $09ADA2: sbcd.b d0, d7  [8F 00] */
    M68K_CMP32(g_m68k.d[6], g_m68k.d[1]);
    /* TODO $09ADA6: sbcd.b d0, d7  [8F 00] */
    M68K_CMP32(g_m68k.d[6], g_m68k.d[1]);
    /* TODO $09ADAA: sbcd.b d0, d7  [8F 00] */
    /* WARNING: function did not end with RTS */
}

/* $09ADAC-$09ADC4  (9 instructions, 24 bytes) */
void jt_09ADAC(void) {
    M68K_OR8(g_m68k.d[1], 0x5);
    M68K_CMP32(g_m68k.d[6], g_m68k.d[6]);
    /* TODO $09ADB2: sbcd.b d0, d7  [8F 00] */
    M68K_CMP32(g_m68k.a[6], bus_read32(g_m68k.a[2] + 0 + (int32_t)g_m68k.a[0] * 8));
    M68K_CMP32(g_m68k.a[6], bus_read32(g_m68k.a[3] + 0 + (int32_t)g_m68k.a[0] * 8));
    M68K_CMP32(g_m68k.d[6], g_m68k.d[1]);
    /* TODO $09ADBE: sbcd.b d0, d7  [8F 00] */
    M68K_CMP32(g_m68k.d[6], _predec32(6));
    /* TODO $09ADC2: sbcd.b d0, d7  [8F 00] */
    /* WARNING: function did not end with RTS */
}

/* $09ADC4-$09ADE4  (8 instructions, 32 bytes) */
void jt_09ADC4(void) {
    M68K_OR8(g_m68k.d[1], 0x7);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $09ADE4-$09AE50  (43 instructions, 108 bytes) */
void jt_09ADE4(void) {
    M68K_OR8(g_m68k.d[6], 0x7);
    M68K_CMP32(g_m68k.a[5], g_m68k.d[6]);
    M68K_SUB8(g_m68k.d[0], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[5], g_m68k.a[7]);
    M68K_SUB8(g_m68k.d[0], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[5], _postinc32(1));
    M68K_SUB8(g_m68k.d[0], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[5], _predec32(4));
    M68K_SUB8(g_m68k.d[0], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[5], bus_read32(g_m68k.a[6] + (-0x7000)));
    M68K_CMP32(g_m68k.a[5], bus_read32(0x93dfe));
    M68K_CMP8(g_m68k.d[6], g_m68k.d[6]);
    M68K_SUB8(g_m68k.d[0], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[5], g_m68k.d[7]);
    M68K_SUB8(g_m68k.d[0], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.a[1]); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    M68K_CMP32(g_m68k.a[5], g_m68k.a[2]);
    M68K_SUB8(g_m68k.d[0], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.a[1]); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    M68K_CMP32(g_m68k.a[5], bus_read32(g_m68k.a[7] + (-0x7000)));
    M68K_CMP32(g_m68k.a[5], bus_read32(0x9ae1a + (int16_t)(uint16_t)g_m68k.a[1]));
    M68K_CMP8(g_m68k.d[6], g_m68k.d[7]);
    M68K_SUB8(g_m68k.d[0], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[5], g_m68k.a[0]);
    M68K_SUB8(g_m68k.d[0], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[5], bus_read32(g_m68k.a[0]));
    M68K_SUB8(g_m68k.d[0], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[5], _postinc32(2));
    M68K_SUB8(g_m68k.d[0], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[5], _predec32(5));
    M68K_SUB8(g_m68k.d[0], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[5], bus_read32(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.a[1]));
    M68K_CMP32(g_m68k.a[5], 0x9000bc07);
    M68K_SUB8(g_m68k.d[0], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[5], g_m68k.a[1]);
    M68K_SUB8(g_m68k.d[0], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[5], bus_read32(g_m68k.a[1]));
    M68K_SUB8(g_m68k.d[0], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[5], _postinc32(3));
    M68K_SUB8(g_m68k.d[0], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[5], _predec32(6));
    M68K_SUB8(g_m68k.d[0], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[5], bus_read32(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.a[1]));
    /* WARNING: function did not end with RTS */
}

/* $09AE90-$09AEAC  (8 instructions, 28 bytes) */
void jt_09AE90(void) {
    M68K_OR8(g_m68k.d[6], 0x9);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP32(g_m68k.a[6], 0x9000be03);
    M68K_SUB8(g_m68k.d[0], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[5], bus_read32(g_m68k.a[0] + (-0x7000)));
    M68K_CMP32(g_m68k.a[5], bus_read32(g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.a[1]));
    M68K_CMP8(g_m68k.d[6], g_m68k.d[0]);
    M68K_SUB8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $09AF6C-$09AF74  (2 instructions, 8 bytes) */
void jt_09AF6C(void) {
    M68K_OR8(g_m68k.d[2], 0xa);
    M68K_CMP32(g_m68k.a[6], bus_read32(0x008E00));
    /* WARNING: function did not end with RTS */
}

/* $09AFC0-$09AFF4  (16 instructions, 52 bytes) */
void jt_09AFC0(void) {
    M68K_OR8(g_m68k.d[2], 0x9);
    M68K_CMP32(g_m68k.a[6], bus_read32(0x93dc6));
    M68K_CMP8(g_m68k.d[7], g_m68k.d[1]);
    M68K_OR8(g_m68k.d[7], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP32(g_m68k.a[6], bus_read32(0x9afea + (int32_t)g_m68k.a[0] * 8));
    M68K_CMP8(g_m68k.d[7], g_m68k.d[2]);
    M68K_OR8(g_m68k.d[7], g_m68k.d[0]);
    M68K_CMP8(g_m68k.d[7], g_m68k.d[7]);
    M68K_OR8(g_m68k.d[7], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $09B00C-$09B03C  (14 instructions, 48 bytes) */
void jt_09B00C(void) {
    M68K_OR8(g_m68k.d[6], 0xa);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP8(g_m68k.d[7], _postinc8(4));
    M68K_SUB8(g_m68k.d[1], g_m68k.d[0]);
    M68K_CMP8(g_m68k.d[7], _predec8(2));
    M68K_SUB8(g_m68k.d[1], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $09B100-$09B130  (14 instructions, 48 bytes) */
void jt_09B100(void) {
    M68K_OR8(g_m68k.d[5], 0xa);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP8(g_m68k.d[7], _postinc8(4));
    M68K_SUB8(g_m68k.d[1], g_m68k.d[0]);
    M68K_CMP8(g_m68k.d[7], _predec8(2));
    M68K_SUB8(g_m68k.d[1], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $09B1CC-$09B1D0  (1 instructions, 4 bytes) */
void jt_09B1CC(void) {
    M68K_OR8(g_m68k.d[4], 0xa);
    /* WARNING: function did not end with RTS */
}

/* $09B270-$09B27C  (3 instructions, 12 bytes) */
void jt_09B270(void) {
    M68K_OR8(g_m68k.d[6], 0xa);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $09B364-$09B394  (14 instructions, 48 bytes) */
void jt_09B364(void) {
    M68K_OR8(g_m68k.d[4], 0xa);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP8(g_m68k.d[7], _postinc8(4));
    M68K_SUB8(g_m68k.d[1], g_m68k.d[0]);
    M68K_CMP8(g_m68k.d[7], _predec8(2));
    M68K_SUB8(g_m68k.d[1], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $09B408-$09B410  (3 instructions, 8 bytes) */
void jt_09B408(void) {
    M68K_OR8(g_m68k.d[5], 0xa);
    M68K_CMP8(g_m68k.d[7], bus_read8(g_m68k.a[0]));
    M68K_SUB8(g_m68k.d[1], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $09B4D4-$09B520  (23 instructions, 76 bytes) */
void jt_09B4D4(void) {
    M68K_OR8(g_m68k.d[3], 0x8);
    M68K_CMP16(g_m68k.d[7], _predec16(4));
    M68K_OR8(g_m68k.d[7], g_m68k.d[0]);
    M68K_CMP16(g_m68k.d[7], _predec16(7));
    M68K_OR8(g_m68k.d[7], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP16(g_m68k.d[7], _predec16(5));
    M68K_OR8(g_m68k.d[7], g_m68k.d[0]);
    M68K_CMP16(g_m68k.d[7], bus_read16(g_m68k.a[0] + (-0x7200)));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP16(g_m68k.d[7], _predec16(6));
    M68K_OR8(g_m68k.d[7], g_m68k.d[0]);
    M68K_CMP16(g_m68k.d[7], bus_read16(g_m68k.a[1] + (-0x7200)));
    /* WARNING: function did not end with RTS */
}

/* $09B538-$09B548  (4 instructions, 16 bytes) */
void jt_09B538(void) {
    M68K_OR8(g_m68k.d[2], 0xa);
    M68K_CMP16(g_m68k.d[7], bus_read16(g_m68k.a[2] + (-0x5b00)));
    M68K_CMP16(g_m68k.d[7], bus_read16(g_m68k.a[6] + (-0x5b00)));
    M68K_CMP16(g_m68k.d[7], bus_read16(g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.a[2] * 4));
    /* WARNING: function did not end with RTS */
}

/* $09B58C-$09B59E  (5 instructions, 18 bytes) */
void jt_09B58C(void) {
    M68K_OR8(g_m68k.d[2], 0xa);
    M68K_CMP16(g_m68k.d[7], bus_read16(g_m68k.a[4] + (-0x5b00)));
    M68K_CMP16(g_m68k.d[7], bus_read16(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.a[2] * 4));
    M68K_CMP16(g_m68k.d[7], bus_read16(g_m68k.a[7] + 0 + (int16_t)(uint16_t)g_m68k.a[2] * 4));
    M68K_CMP32(g_m68k.d[7], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $09B5E0-$09B5F2  (4 instructions, 18 bytes) */
void jt_09B5E0(void) {
    M68K_OR8(g_m68k.d[6], 0xa);
    M68K_CMP16(g_m68k.d[7], bus_read16(g_m68k.a[5] + (-0x5b00)));
    M68K_CMP16(g_m68k.d[7], bus_read16(g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.a[2] * 4));
    M68K_CMP16(g_m68k.d[7], bus_read16(0xA500BE82));
    /* WARNING: function did not end with RTS */
}

/* $09B6D4-$09B6E6  (5 instructions, 18 bytes) */
void jt_09B6D4(void) {
    M68K_OR8(g_m68k.d[3], 0x7);
    M68K_CMP16(g_m68k.d[7], bus_read16(g_m68k.a[4] + (-0x5b00)));
    M68K_CMP16(g_m68k.d[7], bus_read16(g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.a[2] * 4));
    M68K_CMP16(g_m68k.d[7], /* UNHANDLED_READ: (a16, a2.w * 4) */ 0);
    M68K_CMP32(g_m68k.d[7], g_m68k.d[6]);
    /* WARNING: function did not end with RTS */
}

/* $09B72C-$09B738  (3 instructions, 12 bytes) */
void jt_09B72C(void) {
    M68K_OR8(g_m68k.d[2], 0x1);
    M68K_CMP32(g_m68k.d[7], bus_read32(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.a[2] * 4));
    M68K_CMP32(g_m68k.d[7], bus_read32(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.a[2] * 4));
    /* WARNING: function did not end with RTS */
}

/* $09B738-$09B74C  (5 instructions, 20 bytes) */
void jt_09B738(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_CMP32(g_m68k.d[7], bus_read32(g_m68k.a[5] + (-0x5b00)));
    M68K_CMP32(g_m68k.d[7], bus_read32(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.a[2] * 4));
    M68K_CMP32(g_m68k.d[7], bus_read32(g_m68k.a[6] + (-0x5b00)));
    M68K_CMP32(g_m68k.d[7], bus_read32(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.a[2] * 4));
    /* WARNING: function did not end with RTS */
}
