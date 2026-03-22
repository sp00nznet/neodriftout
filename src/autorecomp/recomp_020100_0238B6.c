/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $020100 - $0238B6 */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

/* $020100-$02013E  (28 instructions, 62 bytes) */
void jt_020100(void) {
    M68K_BTST(g_m68k.d[4], g_m68k.d[2]);
    M68K_SUB8(g_m68k.d[4], 0x3);
    { uint8_t _mv = (uint8_t)(_postinc8(5)); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(3))); M68K_TST8((uint8_t)g_m68k.d[6]);
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(2))); M68K_TST8((uint8_t)g_m68k.d[5]);
    M68K_SUB32(g_m68k.d[5], _postinc32(2));
    { uint32_t _ea = g_m68k.a[4]; uint32_t _tmp = bus_read32(_ea); M68K_SUB32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    M68K_SUB32(g_m68k.d[6], _postinc32(5));
    M68K_SUB32(g_m68k.d[7], _postinc32(7));
    M68K_OR32(g_m68k.d[0], g_m68k.d[4]);
    M68K_OR32(g_m68k.d[2], g_m68k.d[5]);
    /* TODO $02011A: dc.w $8585  [85 85] */
    M68K_OR32(g_m68k.d[3], g_m68k.d[7]);
    /* TODO $02011E: dc.w $8787  [87 87] */
    M68K_BTST(g_m68k.d[6], g_m68k.d[3]);
    M68K_BTST(g_m68k.d[5], g_m68k.d[2]);
    M68K_BTST(g_m68k.d[4], g_m68k.d[2]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, 0x1d); bus_write8(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(_postinc8(5)); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(3))); M68K_TST8((uint8_t)g_m68k.d[6]);
    { uint8_t _mv = (uint8_t)(_postinc8(3)); /* UNHANDLED_WRITE: (a1.l * 2) = _mv */ M68K_TST8(_mv); }
    { uint32_t _ea = g_m68k.a[5]; uint32_t _tmp = bus_read32(_ea); M68K_SUB32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    M68K_SUB32(g_m68k.d[7], _postinc32(7));
    M68K_OR32(g_m68k.d[0], g_m68k.d[1]);
    /* TODO $020138: dc.w $8585  [85 85] */
    M68K_OR32(g_m68k.d[3], g_m68k.d[6]);
    M68K_OR32(g_m68k.d[3], g_m68k.d[7]);
    /* WARNING: function did not end with RTS */
}

/* $02072A-$02072E  (1 instructions, 4 bytes) */
void jt_02072A(void) {
    M68K_EOR8(g_m68k.d[0], 0x3);
    /* WARNING: function did not end with RTS */
}

/* $0207AA-$0207BC  (5 instructions, 18 bytes) */
void jt_0207AA(void) {
    M68K_EOR8(g_m68k.d[0], 0x3);
    M68K_OR8(g_m68k.d[4], 0x0);
    M68K_BTST(g_m68k.d[0], g_m68k.d[1]);
    M68K_SUB8(g_m68k.d[1], 0x5);
    M68K_ADD8(g_m68k.d[0], 0xff);
    /* WARNING: function did not end with RTS */
}

/* $02082A-$02083C  (5 instructions, 18 bytes) */
void jt_02082A(void) {
    M68K_SUB8(g_m68k.d[1], 0x5);
    M68K_OR8(g_m68k.d[5], 0x0);
    M68K_BTST(g_m68k.d[0], g_m68k.d[1]);
    M68K_SUB8(g_m68k.d[1], 0x5);
    M68K_ADD8(g_m68k.d[5], 0xff);
    /* WARNING: function did not end with RTS */
}

/* $0208AA-$0208BC  (5 instructions, 18 bytes) */
void jt_0208AA(void) {
    M68K_SUB8(g_m68k.d[1], 0x5);
    M68K_OR8(g_m68k.d[1], 0x0);
    M68K_BTST(g_m68k.d[0], g_m68k.d[1]);
    M68K_SUB8(g_m68k.d[1], 0x5);
    M68K_ADD8(g_m68k.d[1], 0xff);
    /* WARNING: function did not end with RTS */
}

/* $0209FA-$0209FE  (1 instructions, 4 bytes) */
void jt_0209FA(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $020A52-$020A6E  (7 instructions, 28 bytes) */
void jt_020A52(void) {
    M68K_OR8(g_m68k.d[0], 0x1);
    M68K_OR8(g_m68k.d[2], 0x6e);
    M68K_OR8(g_m68k.d[2], 0x9a);
    M68K_OR8(g_m68k.d[2], 0xc6);
    M68K_OR8(g_m68k.d[2], 0xf2);
    M68K_OR8(g_m68k.d[2], 0x1e);
    M68K_OR8(g_m68k.d[2], 0x4a);
    /* WARNING: function did not end with RTS */
}

/* $020A6E-$020A9A  (13 instructions, 44 bytes) */
void jt_020A6E(void) {
    M68K_OR8(g_m68k.d[0], 0x9);
    M68K_BCLR(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x80);
    M68K_OR8(g_m68k.d[0], 0x80);
    M68K_OR8(g_m68k.d[0], 0x80);
    M68K_OR8(g_m68k.d[0], 0xa0);
    M68K_OR8(g_m68k.d[0], 0x80);
    M68K_OR8(g_m68k.d[0], 0xa0);
    M68K_OR8(g_m68k.d[0], 0x80);
    M68K_OR8(g_m68k.d[0], 0xe0);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[7], _mv); M68K_TST16(_mv); }
    /* TODO $020A96: dc.w $f2c0  [F2 C0] */
    /* TODO $020A98: dc.w $f2c0  [F2 C0] */
    /* WARNING: function did not end with RTS */
}

/* $020A9A-$020AC6  (13 instructions, 44 bytes) */
void jt_020A9A(void) {
    M68K_OR8(g_m68k.d[2], 0x0);
    M68K_BCLR(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x80);
    M68K_OR8(g_m68k.d[0], 0x80);
    M68K_OR8(g_m68k.d[0], 0x80);
    M68K_OR8(g_m68k.d[0], 0xa0);
    M68K_OR8(g_m68k.d[0], 0x80);
    M68K_OR8(g_m68k.d[0], 0xa0);
    M68K_OR8(g_m68k.d[0], 0x80);
    M68K_OR8(g_m68k.d[0], 0xe0);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[7], _mv); M68K_TST16(_mv); }
    /* TODO $020AC2: dc.w $f2c0  [F2 C0] */
    /* TODO $020AC4: dc.w $f2c0  [F2 C0] */
    /* WARNING: function did not end with RTS */
}

/* $020AC6-$020AF2  (13 instructions, 44 bytes) */
void jt_020AC6(void) {
    M68K_OR8(g_m68k.d[0], 0x5);
    M68K_BCLR(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x80);
    M68K_OR8(g_m68k.d[0], 0x80);
    M68K_OR8(g_m68k.d[0], 0x80);
    M68K_OR8(g_m68k.d[0], 0xa0);
    M68K_OR8(g_m68k.d[0], 0x80);
    M68K_OR8(g_m68k.d[0], 0xa0);
    M68K_OR8(g_m68k.d[0], 0x80);
    M68K_OR8(g_m68k.d[0], 0xe0);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[7], _mv); M68K_TST16(_mv); }
    /* TODO $020AEE: dc.w $f2c0  [F2 C0] */
    /* TODO $020AF0: dc.w $f2c0  [F2 C0] */
    /* WARNING: function did not end with RTS */
}

/* $020AF2-$020B1E  (13 instructions, 44 bytes) */
void jt_020AF2(void) {
    M68K_OR8(g_m68k.d[2], 0x0);
    M68K_BCLR(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x80);
    M68K_OR8(g_m68k.d[0], 0x80);
    M68K_OR8(g_m68k.d[0], 0x80);
    M68K_OR8(g_m68k.d[0], 0xa0);
    M68K_OR8(g_m68k.d[0], 0x80);
    M68K_OR8(g_m68k.d[0], 0xa0);
    M68K_OR8(g_m68k.d[0], 0x80);
    M68K_OR8(g_m68k.d[0], 0xe0);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[7], _mv); M68K_TST16(_mv); }
    /* TODO $020B1A: dc.w $f2c0  [F2 C0] */
    /* TODO $020B1C: dc.w $f2c0  [F2 C0] */
    /* WARNING: function did not end with RTS */
}

/* $020B1E-$020B4A  (13 instructions, 44 bytes) */
void jt_020B1E(void) {
    M68K_OR8(g_m68k.d[4], 0x1);
    M68K_BCLR(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x80);
    M68K_OR8(g_m68k.d[0], 0x80);
    M68K_OR8(g_m68k.d[0], 0x80);
    M68K_OR8(g_m68k.d[0], 0xa0);
    M68K_OR8(g_m68k.d[0], 0x80);
    M68K_OR8(g_m68k.d[0], 0xa0);
    M68K_OR8(g_m68k.d[0], 0x80);
    M68K_OR8(g_m68k.d[0], 0xe0);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[7], _mv); M68K_TST16(_mv); }
    /* TODO $020B46: dc.w $f2c0  [F2 C0] */
    /* TODO $020B48: dc.w $f2c0  [F2 C0] */
    /* WARNING: function did not end with RTS */
}

/* $020B4A-$020B76  (13 instructions, 44 bytes) */
void jt_020B4A(void) {
    M68K_OR8(g_m68k.d[2], 0x0);
    M68K_BCLR(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x80);
    M68K_OR8(g_m68k.d[0], 0x80);
    M68K_OR8(g_m68k.d[0], 0x80);
    M68K_OR8(g_m68k.d[0], 0xa0);
    M68K_OR8(g_m68k.d[0], 0x80);
    M68K_OR8(g_m68k.d[0], 0xa0);
    M68K_OR8(g_m68k.d[0], 0x80);
    M68K_OR8(g_m68k.d[0], 0xe0);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[7], _mv); M68K_TST16(_mv); }
    /* TODO $020B72: dc.w $f2c0  [F2 C0] */
    /* TODO $020B74: dc.w $f2c0  [F2 C0] */
    /* WARNING: function did not end with RTS */
}

/* $020B76-$020B82  (3 instructions, 12 bytes) */
void jt_020B76(void) {
    M68K_OR8(g_m68k.d[2], 0x82);
    M68K_OR8(g_m68k.d[2], 0x8e);
    M68K_OR8(g_m68k.d[2], 0x8e);
    /* WARNING: function did not end with RTS */
}

/* $020B82-$020B88  (1 instructions, 6 bytes) */
void jt_020B82(void) {
    { uint32_t _ea = (g_m68k.a[0] + 0x2 + (int16_t)(uint16_t)g_m68k.d[0]); uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x20); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $020B8E-$020B94  (1 instructions, 6 bytes) */
void jt_020B8E(void) {
    { uint32_t _ea = (g_m68k.a[0] + 0x2 + (int16_t)(uint16_t)g_m68k.d[0]); uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x20); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $020B9A-$020BDA  (16 instructions, 64 bytes) */
void jt_020B9A(void) {
    M68K_OR8(g_m68k.d[2], 0xda);
    M68K_OR8(g_m68k.d[2], 0xda);
    M68K_OR8(g_m68k.d[2], 0xda);
    M68K_OR8(g_m68k.d[2], 0xda);
    M68K_OR8(g_m68k.d[2], 0xda);
    M68K_OR8(g_m68k.d[2], 0xda);
    M68K_OR8(g_m68k.d[2], 0xda);
    M68K_OR8(g_m68k.d[2], 0xda);
    M68K_OR8(g_m68k.d[2], 0xda);
    M68K_OR8(g_m68k.d[2], 0xda);
    M68K_OR8(g_m68k.d[2], 0xda);
    M68K_OR8(g_m68k.d[2], 0xda);
    M68K_OR8(g_m68k.d[2], 0xda);
    M68K_OR8(g_m68k.d[2], 0xda);
    M68K_OR8(g_m68k.d[2], 0xda);
    M68K_OR8(g_m68k.d[2], 0xda);
    /* WARNING: function did not end with RTS */
}

/* $020BDA-$020BE6  (3 instructions, 12 bytes) */
void jt_020BDA(void) {
    M68K_OR8(g_m68k.d[2], 0xe6);
    M68K_OR8(g_m68k.d[2], 0xee);
    M68K_OR8(g_m68k.d[2], 0xf6);
    /* WARNING: function did not end with RTS */
}

/* $020BFE-$020C0C  (3 instructions, 14 bytes) */
void jt_020BFE(void) {
    M68K_OR8(g_m68k.d[0], 0x40);
    M68K_OR16(g_m68k.d[0], 0x80);
    M68K_OR32(g_m68k.d[0], 0xc000c0);
    /* WARNING: function did not end with RTS */
}

/* $020DFE-$020E46  (18 instructions, 72 bytes) */
void jt_020DFE(void) {
    M68K_OR8(g_m68k.d[2], 0x46);
    M68K_OR8(g_m68k.d[2], 0x46);
    M68K_OR8(g_m68k.d[2], 0x46);
    M68K_OR8(g_m68k.d[2], 0x46);
    M68K_OR8(g_m68k.d[2], 0x46);
    M68K_OR8(g_m68k.d[2], 0x46);
    M68K_OR8(g_m68k.d[2], 0x46);
    M68K_OR8(g_m68k.d[2], 0x46);
    M68K_OR8(g_m68k.d[2], 0x46);
    M68K_OR8(g_m68k.d[2], 0x46);
    M68K_OR8(g_m68k.d[2], 0x46);
    M68K_OR8(g_m68k.d[2], 0x46);
    M68K_OR8(g_m68k.d[2], 0x46);
    M68K_OR8(g_m68k.d[2], 0x46);
    M68K_OR8(g_m68k.d[2], 0x46);
    M68K_OR8(g_m68k.d[2], 0x46);
    M68K_OR8(g_m68k.d[2], 0x46);
    M68K_OR8(g_m68k.d[2], 0x46);
    /* WARNING: function did not end with RTS */
}

/* $020E46-$020E7E  (27 instructions, 56 bytes) */
void jt_020E46(void) {
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

/* $020F0E-$020F46  (28 instructions, 56 bytes) */
void jt_020F0E(void) {
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

/* $021050-$021064  (5 instructions, 20 bytes) */
void jt_021050(void) {
    M68K_OR8(g_m68k.d[2], 0x68);
    M68K_OR8(g_m68k.d[2], 0x6c);
    M68K_OR8(g_m68k.d[2], 0x70);
    M68K_OR8(g_m68k.d[2], 0x74);
    M68K_OR8(g_m68k.d[2], 0x78);
    /* WARNING: function did not end with RTS */
}

/* $021064-$021068  (1 instructions, 4 bytes) */
void jt_021064(void) {
    M68K_AND8(g_m68k.d[5], 0xf);
    /* WARNING: function did not end with RTS */
}

/* $021068-$02106C  (1 instructions, 4 bytes) */
void jt_021068(void) {
    M68K_AND8(g_m68k.d[5], 0xf);
    /* WARNING: function did not end with RTS */
}

/* $021070-$021074  (1 instructions, 4 bytes) */
void jt_021070(void) {
    /* TODO $021070: movep.w $1216(a2), d1  [03 0A 12 16] */
    /* WARNING: function did not end with RTS */
}

/* $0213FC-$021404  (1 instructions, 8 bytes) */
void jt_0213FC(void) {
    { uint32_t _ea = (g_m68k.a[0] + 0x1754); uint32_t _tmp = bus_read32(_ea); M68K_OR32(_tmp, 0x9ff150a); bus_write32(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $022348-$02234E  (2 instructions, 6 bytes) */
void jt_022348(void) {
    { uint32_t _ea = (g_m68k.a[2] + 0x34 + (int16_t)(uint16_t)g_m68k.d[0]); uint16_t _tmp = bus_read16(_ea); M68K_ROL16(_tmp, 1); bus_write16(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[4]; uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* WARNING: function did not end with RTS */
}

/* $02242A-$022432  (2 instructions, 8 bytes) */
void jt_02242A(void) {
    M68K_OR8(g_m68k.d[2], 0x80);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[0] + 0x3 + (int16_t)(uint16_t)g_m68k.d[0], _mv); M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $022430-$02243C  (4 instructions, 12 bytes) */
void jt_022430(void) {
    M68K_OR8(g_m68k.d[3], 0x80);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[7], _mv); M68K_TST16(_mv); }
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); bus_write32(g_m68k.a[1], _mv); M68K_TST32(_mv); }
    M68K_SUB32(g_m68k.d[0], 0x33e80);
    /* WARNING: function did not end with RTS */
}

/* $022438-$02243E  (2 instructions, 6 bytes) */
void jt_022438(void) {
    M68K_OR8(g_m68k.d[3], 0x80);
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); bus_write8(g_m68k.a[1], _mv); M68K_TST8(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $022440-$022448  (2 instructions, 8 bytes) */
void jt_022440(void) {
    M68K_OR8(g_m68k.d[3], 0x80);
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); /* UNHANDLED_WRITE: (a7.w * 2) = _mv */ M68K_TST8(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $022448-$022450  (3 instructions, 8 bytes) */
void jt_022448(void) {
    M68K_OR8(g_m68k.d[3], 0x80);
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); bus_write8(g_m68k.a[0], _mv); M68K_TST8(_mv); }
    M68K_ASR32(g_m68k.d[0], 0x4);
    /* WARNING: function did not end with RTS */
}

/* $022450-$022458  (3 instructions, 8 bytes) */
void jt_022450(void) {
    M68K_OR8(g_m68k.d[3], 0x80);
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); bus_write8(g_m68k.a[0], _mv); M68K_TST8(_mv); }
    M68K_ASR32(g_m68k.d[0], 0x1);
    /* WARNING: function did not end with RTS */
}

/* $022458-$022462  (4 instructions, 10 bytes) */
void jt_022458(void) {
    M68K_OR8(g_m68k.d[4], 0x80);
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); bus_write8(g_m68k.a[1], _mv); M68K_TST8(_mv); }
    M68K_ASR32(g_m68k.d[0], 0x7);
    M68K_ADD32(g_m68k.d[5], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $023038-$02303A  (1 instructions, 2 bytes) */
void jt_023038(void) {
    /* TODO $023038: dc.w $fee2  [FE E2] */
    /* WARNING: function did not end with RTS */
}

/* $023140-$023142  (1 instructions, 2 bytes) */
void jt_023140(void) {
    M68K_BTST(bus_read8(g_m68k.a[6]), g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0232FE-$023306  (3 instructions, 8 bytes) */
void jt_0232FE(void) {
    M68K_EOR8(g_m68k.d[0], 0x0);
    M68K_BTST(g_m68k.d[3], g_m68k.d[0]);
    M68K_BTST(g_m68k.d[1], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0233FE-$023406  (3 instructions, 8 bytes) */
void jt_0233FE(void) {
    M68K_EOR8(g_m68k.d[0], 0x0);
    M68K_BTST(g_m68k.d[3], g_m68k.d[0]);
    M68K_BTST(g_m68k.d[1], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0234BC-$0234BE  (1 instructions, 2 bytes) */
void jt_0234BC(void) {
    M68K_BTST(g_m68k.d[1], g_m68k.d[6]);
    /* WARNING: function did not end with RTS */
}

/* $0234FE-$02351A  (10 instructions, 28 bytes) */
void jt_0234FE(void) {
    M68K_SUB8(g_m68k.d[1], 0x0);
    M68K_BTST(g_m68k.d[5], g_m68k.d[2]);
    M68K_BTST(g_m68k.d[0], g_m68k.d[2]);
    M68K_OR8(g_m68k.d[5], 0x1);
    M68K_AND8(g_m68k.d[0], 0x1);
    M68K_BTST(g_m68k.d[0], g_m68k.d[1]);
    M68K_BTST(g_m68k.d[1], g_m68k.d[1]);
    M68K_SUB8(g_m68k.d[5], 0x1);
    M68K_BTST(g_m68k.d[5], g_m68k.d[2]);
    M68K_BTST(g_m68k.d[0], g_m68k.d[2]);
    /* WARNING: function did not end with RTS */
}

/* $0235FE-$02361A  (10 instructions, 28 bytes) */
void jt_0235FE(void) {
    M68K_SUB8(g_m68k.d[1], 0x0);
    M68K_BTST(g_m68k.d[5], g_m68k.d[2]);
    M68K_BTST(g_m68k.d[0], g_m68k.d[2]);
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_AND8(g_m68k.d[0], 0x1);
    M68K_BTST(g_m68k.d[0], g_m68k.d[1]);
    M68K_BTST(g_m68k.d[1], g_m68k.d[1]);
    M68K_SUB8(g_m68k.d[1], 0x1);
    M68K_BTST(g_m68k.d[5], g_m68k.d[2]);
    M68K_BTST(g_m68k.d[0], g_m68k.d[2]);
    /* WARNING: function did not end with RTS */
}

/* $02370E-$023716  (2 instructions, 8 bytes) */
void jt_02370E(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $02376E-$02378A  (7 instructions, 28 bytes) */
void jt_02376E(void) {
    M68K_OR8(g_m68k.d[2], 0x84);
    M68K_OR8(g_m68k.d[2], 0x8a);
    M68K_OR8(g_m68k.d[2], 0xbc);
    M68K_OR8(g_m68k.d[2], 0xee);
    M68K_OR8(g_m68k.d[2], 0x20);
    M68K_OR8(g_m68k.d[2], 0x52);
    M68K_OR8(g_m68k.d[2], 0x84);
    /* WARNING: function did not end with RTS */
}

/* $02378A-$0237BC  (14 instructions, 50 bytes) */
void jt_02378A(void) {
    M68K_OR8(g_m68k.d[0], 0x9);
    M68K_OR8(g_m68k.d[0], 0x80);
    M68K_OR8(g_m68k.d[0], 0x80);
    M68K_OR8(g_m68k.d[0], 0x80);
    M68K_OR8(g_m68k.d[0], 0x80);
    M68K_OR8(g_m68k.d[0], 0xa0);
    M68K_OR8(g_m68k.d[0], 0x80);
    M68K_OR8(g_m68k.d[0], 0xa0);
    M68K_OR8(g_m68k.d[0], 0x80);
    M68K_OR8(g_m68k.d[0], 0xe0);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[7], _mv); M68K_TST16(_mv); }
    /* TODO $0237B4: dc.w $f2c0  [F2 C0] */
    /* TODO $0237B6: dc.w $f2c0  [F2 C0] */
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0237BC-$0237EE  (14 instructions, 50 bytes) */
void jt_0237BC(void) {
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
    /* TODO $0237E6: dc.w $f2c0  [F2 C0] */
    /* TODO $0237E8: dc.w $f2c0  [F2 C0] */
    M68K_OR8(g_m68k.d[2], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0237EE-$023820  (14 instructions, 50 bytes) */
void jt_0237EE(void) {
    M68K_OR8(g_m68k.d[0], 0x5);
    M68K_OR8(g_m68k.d[0], 0x80);
    M68K_OR8(g_m68k.d[0], 0x80);
    M68K_OR8(g_m68k.d[0], 0x80);
    M68K_OR8(g_m68k.d[0], 0x80);
    M68K_OR8(g_m68k.d[0], 0xa0);
    M68K_OR8(g_m68k.d[0], 0x80);
    M68K_OR8(g_m68k.d[0], 0xa0);
    M68K_OR8(g_m68k.d[0], 0x80);
    M68K_OR8(g_m68k.d[0], 0xe0);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[7], _mv); M68K_TST16(_mv); }
    /* TODO $023818: dc.w $f2c0  [F2 C0] */
    /* TODO $02381A: dc.w $f2c0  [F2 C0] */
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

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
