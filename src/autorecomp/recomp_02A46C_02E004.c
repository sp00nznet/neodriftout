/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $02A46C - $02E004 */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

/* $02A46C-$02A478  (3 instructions, 12 bytes) */
void jt_02A46C(void) {
    M68K_OR8(g_m68k.d[2], 0xd0);
    M68K_OR8(g_m68k.d[2], 0xc4);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $02A478-$02A480  (2 instructions, 8 bytes) */
void jt_02A478(void) {
    M68K_OR8(g_m68k.d[2], 0x28);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $02A480-$02A490  (4 instructions, 16 bytes) */
void jt_02A480(void) {
    M68K_OR8(g_m68k.d[2], 0xac);
    M68K_OR8(g_m68k.d[2], 0x80);
    M68K_OR8(g_m68k.d[2], 0x44);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $02A490-$02A498  (2 instructions, 8 bytes) */
void jt_02A490(void) {
    M68K_OR8(g_m68k.d[2], 0x10);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $02A498-$02A4A0  (2 instructions, 8 bytes) */
void jt_02A498(void) {
    M68K_OR8(g_m68k.d[2], 0x3c);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $02A4A0-$02A4A8  (2 instructions, 8 bytes) */
void jt_02A4A0(void) {
    M68K_OR8(g_m68k.d[2], 0xd0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $02A4A8-$02A4B0  (2 instructions, 8 bytes) */
void jt_02A4A8(void) {
    M68K_OR8(g_m68k.d[2], 0x14);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $02A4B0-$02A4B8  (2 instructions, 8 bytes) */
void jt_02A4B0(void) {
    M68K_OR8(g_m68k.d[2], 0xa8);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $02A4B8-$02A4C0  (2 instructions, 8 bytes) */
void jt_02A4B8(void) {
    M68K_OR8(g_m68k.d[2], 0xec);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $02A4C0-$02A4C8  (2 instructions, 8 bytes) */
void jt_02A4C0(void) {
    M68K_OR8(g_m68k.d[2], 0x10);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $02A4C8-$02A4D0  (2 instructions, 8 bytes) */
void jt_02A4C8(void) {
    M68K_OR8(g_m68k.d[2], 0xf8);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $02A4D0-$02A506  (14 instructions, 54 bytes) */
void jt_02A4D0(void) {
    M68K_OR8(g_m68k.d[4], 0x1);
    M68K_OR8(g_m68k.d[0], 0x1f);
    { uint8_t _mv = (uint8_t)(_postinc8(7)); g_m68k.a[7] -= 1; bus_write8(g_m68k.a[7], _mv); M68K_TST8(_mv); }
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
    M68K_OR8(g_m68k.d[0], 0x6);
    /* WARNING: function did not end with RTS */
}

/* $02A504-$02A550  (21 instructions, 76 bytes) */
void jt_02A504(void) {
    M68K_OR8(g_m68k.d[6], 0xa);
    /* TODO $02A508: movep.w $b1f(a3), d5  [0B 0B 0B 1F] */
    { uint8_t _mv = (uint8_t)(_postinc8(7)); g_m68k.a[7] -= 1; bus_write8(g_m68k.a[7], _mv); M68K_TST8(_mv); }
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
    M68K_OR8(g_m68k.d[0], 0xf);
    M68K_BTST(g_m68k.d[0], g_m68k.d[4]);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x0); bus_write8(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[2] -= 1; bus_write8(g_m68k.a[2], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x0); bus_write8(_ea, _tmp); }
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[6]);
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x0); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $02A6E8-$02A74C  (37 instructions, 100 bytes) */
void jt_02A6E8(void) {
    M68K_OR8(g_m68k.d[1], 0x2);
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
    { uint8_t _mv = (uint8_t)(_postinc8(7)); g_m68k.a[7] -= 1; bus_write8(g_m68k.a[7], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(7)); g_m68k.a[7] -= 1; bus_write8(g_m68k.a[7], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(7)); g_m68k.a[7] -= 1; bus_write8(g_m68k.a[7], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(7)); g_m68k.a[7] -= 1; bus_write8(g_m68k.a[7], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(7)); g_m68k.a[7] -= 1; bus_write8(g_m68k.a[7], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(7)); g_m68k.a[7] -= 1; bus_write8(g_m68k.a[7], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(7)); g_m68k.a[7] -= 1; bus_write8(g_m68k.a[7], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(7)); g_m68k.a[7] -= 1; bus_write8(g_m68k.a[7], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(7)); g_m68k.a[7] -= 1; bus_write8(g_m68k.a[7], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(7)); g_m68k.a[7] -= 1; bus_write8(g_m68k.a[7], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(7)); g_m68k.a[7] -= 1; bus_write8(g_m68k.a[7], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(7)); g_m68k.a[7] -= 1; bus_write8(g_m68k.a[7], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(7)); g_m68k.a[7] -= 1; bus_write8(g_m68k.a[7], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(7)); g_m68k.a[7] -= 1; bus_write8(g_m68k.a[7], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(7)); g_m68k.a[7] -= 1; bus_write8(g_m68k.a[7], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(7)); g_m68k.a[7] -= 1; bus_write8(g_m68k.a[7], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(7)); g_m68k.a[7] -= 1; bus_write8(g_m68k.a[7], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(7)); g_m68k.a[7] -= 1; bus_write8(g_m68k.a[7], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(7)); g_m68k.a[7] -= 1; bus_write8(g_m68k.a[7], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(7)); g_m68k.a[7] -= 1; bus_write8(g_m68k.a[7], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(7)); g_m68k.a[7] -= 1; bus_write8(g_m68k.a[7], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(7)); g_m68k.a[7] -= 1; bus_write8(g_m68k.a[7], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(7)); g_m68k.a[7] -= 1; bus_write8(g_m68k.a[7], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(7)); g_m68k.a[7] -= 1; bus_write8(g_m68k.a[7], _mv); M68K_TST8(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $02A74C-$02A81E  (67 instructions, 210 bytes) */
void jt_02A74C(void) {
    M68K_OR8(g_m68k.d[5], 0x1);
    M68K_OR8(g_m68k.d[0], 0x1f);
    { uint8_t _mv = (uint8_t)(_postinc8(7)); g_m68k.a[7] -= 1; bus_write8(g_m68k.a[7], _mv); M68K_TST8(_mv); }
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
    M68K_OR8(g_m68k.d[0], 0xfd);
    M68K_OR8(g_m68k.d[1], 0x0);
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
    M68K_OR8(g_m68k.d[0], 0xfe);
    M68K_OR8(g_m68k.d[1], 0x0);
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x1f); bus_write8(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(_postinc8(7)); g_m68k.a[7] -= 1; bus_write8(g_m68k.a[7], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(7)); g_m68k.a[7] -= 1; bus_write8(g_m68k.a[7], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(7)); g_m68k.a[7] -= 1; bus_write8(g_m68k.a[7], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(7)); g_m68k.a[7] -= 1; bus_write8(g_m68k.a[7], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(7)); g_m68k.a[7] -= 1; bus_write8(g_m68k.a[7], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(7)); g_m68k.a[7] -= 1; bus_write8(g_m68k.a[7], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(7)); g_m68k.a[7] -= 1; bus_write8(g_m68k.a[7], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(7)); g_m68k.a[7] -= 1; bus_write8(g_m68k.a[7], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(7)); g_m68k.a[7] -= 1; bus_write8(g_m68k.a[7], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(7)); g_m68k.a[7] -= 1; bus_write8(g_m68k.a[7], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(7)); g_m68k.a[7] -= 1; bus_write8(g_m68k.a[7], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(7)); g_m68k.a[7] -= 1; bus_write8(g_m68k.a[7], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(7)); g_m68k.a[7] -= 1; bus_write8(g_m68k.a[7], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(7)); g_m68k.a[7] -= 1; bus_write8(g_m68k.a[7], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(7)); g_m68k.a[7] -= 1; bus_write8(g_m68k.a[7], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(7)); g_m68k.a[7] -= 1; bus_write8(g_m68k.a[7], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(7)); g_m68k.a[7] -= 1; bus_write8(g_m68k.a[7], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(7)); g_m68k.a[7] -= 1; bus_write8(g_m68k.a[7], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(7)); g_m68k.a[7] -= 1; bus_write8(g_m68k.a[7], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(7)); g_m68k.a[7] -= 1; bus_write8(g_m68k.a[7], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(7)); g_m68k.a[7] -= 1; bus_write8(g_m68k.a[7], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x5); bus_write8(_ea, _tmp); }
    /* TODO $02A7EC: movep.w $91f(a1), d4  [09 09 09 1F] */
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x0); bus_write8(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(_postinc8(7)); g_m68k.a[7] -= 1; bus_write8(g_m68k.a[7], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x0); bus_write8(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(_postinc8(7)); g_m68k.a[7] -= 1; bus_write8(g_m68k.a[7], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x0); bus_write8(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(_postinc8(7)); g_m68k.a[7] -= 1; bus_write8(g_m68k.a[7], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x0); bus_write8(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(_postinc8(7)); g_m68k.a[7] -= 1; bus_write8(g_m68k.a[7], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x0); bus_write8(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(_postinc8(7)); g_m68k.a[7] -= 1; bus_write8(g_m68k.a[7], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x0); bus_write8(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(_postinc8(7)); g_m68k.a[7] -= 1; bus_write8(g_m68k.a[7], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x0); bus_write8(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(_postinc8(7)); g_m68k.a[7] -= 1; bus_write8(g_m68k.a[7], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xc); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $02ACAC-$02ACB2  (1 instructions, 6 bytes) */
void jt_02ACAC(void) {
    { uint32_t _ea = (g_m68k.a[2] + 0x8 + (int32_t)g_m68k.d[0]); uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x1f); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $02B280-$02B284  (1 instructions, 4 bytes) */
void jt_02B280(void) {
    { uint32_t _ea = g_m68k.a[2]; uint16_t _tmp = bus_read16(_ea); M68K_OR16(_tmp, 0x4); bus_write16(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $02B344-$02B348  (1 instructions, 4 bytes) */
void jt_02B344(void) {
    { uint32_t _ea = g_m68k.a[6]; uint16_t _tmp = bus_read16(_ea); M68K_OR16(_tmp, 0x9); bus_write16(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $02C1EC-$02C1F2  (3 instructions, 6 bytes) */
void jt_02C1EC(void) {
    M68K_BTST(g_m68k.d[2], g_m68k.d[6]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[5]))); M68K_TST8((uint8_t)g_m68k.d[1]);
    M68K_BTST(bus_read8(g_m68k.a[0]), g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $02C5EC-$02C5EE  (1 instructions, 2 bytes) */
void jt_02C5EC(void) {
    M68K_BTST(bus_read8(g_m68k.a[0]), g_m68k.d[3]);
    /* WARNING: function did not end with RTS */
}

/* $02DEF4-$02DF00  (3 instructions, 12 bytes) */
void jt_02DEF4(void) {
    M68K_OR8(g_m68k.d[2], 0x54);
    M68K_OR8(g_m68k.d[2], 0x5c);
    M68K_OR8(g_m68k.d[2], 0x64);
    /* WARNING: function did not end with RTS */
}

/* $02DF00-$02DF0C  (3 instructions, 12 bytes) */
void jt_02DF00(void) {
    M68K_OR8(g_m68k.d[2], 0x6c);
    M68K_OR8(g_m68k.d[2], 0x74);
    M68K_OR8(g_m68k.d[2], 0x7c);
    /* WARNING: function did not end with RTS */
}

/* $02DF0C-$02DF18  (3 instructions, 12 bytes) */
void jt_02DF0C(void) {
    M68K_OR8(g_m68k.d[2], 0x84);
    M68K_OR8(g_m68k.d[2], 0x8c);
    M68K_OR8(g_m68k.d[2], 0x94);
    /* WARNING: function did not end with RTS */
}

/* $02DF18-$02DF24  (3 instructions, 12 bytes) */
void jt_02DF18(void) {
    M68K_OR8(g_m68k.d[2], 0x9c);
    M68K_OR8(g_m68k.d[2], 0xa4);
    M68K_OR8(g_m68k.d[2], 0xac);
    /* WARNING: function did not end with RTS */
}

/* $02DF24-$02DF30  (3 instructions, 12 bytes) */
void jt_02DF24(void) {
    M68K_OR8(g_m68k.d[2], 0xb4);
    M68K_OR8(g_m68k.d[2], 0xbc);
    M68K_OR8(g_m68k.d[2], 0xc4);
    /* WARNING: function did not end with RTS */
}

/* $02DF30-$02DF3C  (3 instructions, 12 bytes) */
void jt_02DF30(void) {
    M68K_OR8(g_m68k.d[2], 0xcc);
    M68K_OR8(g_m68k.d[2], 0xd4);
    M68K_OR8(g_m68k.d[2], 0xdc);
    /* WARNING: function did not end with RTS */
}

/* $02DF3C-$02DF48  (3 instructions, 12 bytes) */
void jt_02DF3C(void) {
    M68K_OR8(g_m68k.d[2], 0xe4);
    M68K_OR8(g_m68k.d[2], 0xec);
    M68K_OR8(g_m68k.d[2], 0xf4);
    /* WARNING: function did not end with RTS */
}

/* $02DF48-$02DF54  (3 instructions, 12 bytes) */
void jt_02DF48(void) {
    M68K_OR8(g_m68k.d[2], 0xfc);
    M68K_OR8(g_m68k.d[2], 0x4);
    M68K_OR8(g_m68k.d[2], 0xc);
    /* WARNING: function did not end with RTS */
}

/* $02DF54-$02DF5C  (2 instructions, 8 bytes) */
void jt_02DF54(void) {
    M68K_OR8(g_m68k.d[1], 0x0);
    M68K_OR8(g_m68k.d[2], 0x14);
    /* WARNING: function did not end with RTS */
}

/* $02DF5C-$02DF64  (2 instructions, 8 bytes) */
void jt_02DF5C(void) {
    M68K_OR8(g_m68k.d[1], 0x0);
    M68K_OR8(g_m68k.d[2], 0x14);
    /* WARNING: function did not end with RTS */
}

/* $02DF64-$02DF6C  (2 instructions, 8 bytes) */
void jt_02DF64(void) {
    M68K_OR8(g_m68k.d[1], 0x0);
    M68K_OR8(g_m68k.d[2], 0x14);
    /* WARNING: function did not end with RTS */
}

/* $02DF6C-$02DF74  (2 instructions, 8 bytes) */
void jt_02DF6C(void) {
    M68K_OR8(g_m68k.d[1], 0x0);
    M68K_OR8(g_m68k.d[2], 0xf4);
    /* WARNING: function did not end with RTS */
}

/* $02DF74-$02DF7C  (2 instructions, 8 bytes) */
void jt_02DF74(void) {
    M68K_OR8(g_m68k.d[1], 0x0);
    M68K_OR8(g_m68k.d[2], 0xf4);
    /* WARNING: function did not end with RTS */
}

/* $02DF7C-$02DF84  (2 instructions, 8 bytes) */
void jt_02DF7C(void) {
    M68K_OR8(g_m68k.d[1], 0x0);
    M68K_OR8(g_m68k.d[2], 0xf4);
    /* WARNING: function did not end with RTS */
}

/* $02DF84-$02DF8C  (2 instructions, 8 bytes) */
void jt_02DF84(void) {
    M68K_OR8(g_m68k.d[1], 0x0);
    M68K_OR8(g_m68k.d[2], 0xd4);
    /* WARNING: function did not end with RTS */
}

/* $02DF8C-$02DF94  (2 instructions, 8 bytes) */
void jt_02DF8C(void) {
    M68K_OR8(g_m68k.d[1], 0x0);
    M68K_OR8(g_m68k.d[2], 0xd4);
    /* WARNING: function did not end with RTS */
}

/* $02DF94-$02DF9C  (2 instructions, 8 bytes) */
void jt_02DF94(void) {
    M68K_OR8(g_m68k.d[1], 0x0);
    M68K_OR8(g_m68k.d[2], 0xd4);
    /* WARNING: function did not end with RTS */
}

/* $02DF9C-$02DFA4  (2 instructions, 8 bytes) */
void jt_02DF9C(void) {
    M68K_OR8(g_m68k.d[1], 0x0);
    M68K_OR8(g_m68k.d[2], 0xb4);
    /* WARNING: function did not end with RTS */
}

/* $02DFA4-$02DFAC  (2 instructions, 8 bytes) */
void jt_02DFA4(void) {
    M68K_OR8(g_m68k.d[1], 0x0);
    M68K_OR8(g_m68k.d[2], 0xb4);
    /* WARNING: function did not end with RTS */
}

/* $02DFAC-$02DFB4  (2 instructions, 8 bytes) */
void jt_02DFAC(void) {
    M68K_OR8(g_m68k.d[1], 0x0);
    M68K_OR8(g_m68k.d[2], 0xb4);
    /* WARNING: function did not end with RTS */
}

/* $02DFB4-$02DFBC  (2 instructions, 8 bytes) */
void jt_02DFB4(void) {
    M68K_OR8(g_m68k.d[1], 0x0);
    M68K_OR8(g_m68k.d[2], 0x94);
    /* WARNING: function did not end with RTS */
}

/* $02DFBC-$02DFC4  (2 instructions, 8 bytes) */
void jt_02DFBC(void) {
    M68K_OR8(g_m68k.d[1], 0x0);
    M68K_OR8(g_m68k.d[2], 0x94);
    /* WARNING: function did not end with RTS */
}

/* $02DFC4-$02DFCC  (2 instructions, 8 bytes) */
void jt_02DFC4(void) {
    M68K_OR8(g_m68k.d[1], 0x0);
    M68K_OR8(g_m68k.d[2], 0x94);
    /* WARNING: function did not end with RTS */
}

/* $02DFCC-$02DFD4  (2 instructions, 8 bytes) */
void jt_02DFCC(void) {
    M68K_OR8(g_m68k.d[1], 0x0);
    M68K_OR8(g_m68k.d[2], 0x74);
    /* WARNING: function did not end with RTS */
}

/* $02DFD4-$02DFDC  (2 instructions, 8 bytes) */
void jt_02DFD4(void) {
    M68K_OR8(g_m68k.d[1], 0x0);
    M68K_OR8(g_m68k.d[2], 0x74);
    /* WARNING: function did not end with RTS */
}

/* $02DFDC-$02DFE4  (2 instructions, 8 bytes) */
void jt_02DFDC(void) {
    M68K_OR8(g_m68k.d[1], 0x0);
    M68K_OR8(g_m68k.d[2], 0x74);
    /* WARNING: function did not end with RTS */
}

/* $02DFE4-$02DFEC  (2 instructions, 8 bytes) */
void jt_02DFE4(void) {
    M68K_OR8(g_m68k.d[1], 0x0);
    M68K_OR8(g_m68k.d[2], 0x54);
    /* WARNING: function did not end with RTS */
}

/* $02DFEC-$02DFF4  (2 instructions, 8 bytes) */
void jt_02DFEC(void) {
    M68K_OR8(g_m68k.d[1], 0x0);
    M68K_OR8(g_m68k.d[2], 0x54);
    /* WARNING: function did not end with RTS */
}

/* $02DFF4-$02DFFC  (2 instructions, 8 bytes) */
void jt_02DFF4(void) {
    M68K_OR8(g_m68k.d[1], 0x0);
    M68K_OR8(g_m68k.d[2], 0x54);
    /* WARNING: function did not end with RTS */
}

/* $02DFFC-$02E004  (2 instructions, 8 bytes) */
void jt_02DFFC(void) {
    M68K_OR8(g_m68k.d[1], 0x0);
    M68K_OR8(g_m68k.d[2], 0x34);
    /* WARNING: function did not end with RTS */
}
