/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $0240C4 - $027196 */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

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

/* $024AF4-$024B0C  (6 instructions, 24 bytes) */
void jt_024AF4(void) {
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[7] + 0x3f5c, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[7] + 0x3f5c, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[7] + 0x3f5c, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[7] + 0x3f5c, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[7] + 0x3f5c, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[7] + 0x3f5c, _mv); M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $024B74-$024B8C  (6 instructions, 24 bytes) */
void jt_024B74(void) {
    g_m68k.d[6] = bus_read32(g_m68k.a[0] + 0x2c28); M68K_TST32((uint32_t)g_m68k.d[6]);
    g_m68k.d[6] = bus_read32(g_m68k.a[0] + 0x2c28); M68K_TST32((uint32_t)g_m68k.d[6]);
    g_m68k.d[6] = bus_read32(g_m68k.a[0] + 0x2c28); M68K_TST32((uint32_t)g_m68k.d[6]);
    g_m68k.d[6] = bus_read32(g_m68k.a[0] + 0x2c28); M68K_TST32((uint32_t)g_m68k.d[6]);
    g_m68k.d[6] = bus_read32(g_m68k.a[0] + 0x2c28); M68K_TST32((uint32_t)g_m68k.d[6]);
    g_m68k.d[6] = bus_read32(g_m68k.a[0] + 0x2c28); M68K_TST32((uint32_t)g_m68k.d[6]);
    /* WARNING: function did not end with RTS */
}

/* $024BF4-$024C3C  (18 instructions, 72 bytes) */
void jt_024BF4(void) {
    M68K_OR8(g_m68k.d[2], 0x3c);
    M68K_OR8(g_m68k.d[2], 0x3c);
    M68K_OR8(g_m68k.d[2], 0xbc);
    M68K_OR8(g_m68k.d[2], 0xbc);
    M68K_OR8(g_m68k.d[2], 0xbc);
    M68K_OR8(g_m68k.d[2], 0x3c);
    M68K_OR8(g_m68k.d[2], 0x3c);
    M68K_OR8(g_m68k.d[2], 0x3c);
    M68K_OR8(g_m68k.d[2], 0x3c);
    M68K_OR8(g_m68k.d[2], 0x3c);
    M68K_OR8(g_m68k.d[2], 0xbc);
    M68K_OR8(g_m68k.d[2], 0xbc);
    M68K_OR8(g_m68k.d[2], 0xbc);
    M68K_OR8(g_m68k.d[2], 0x3c);
    M68K_OR8(g_m68k.d[2], 0x3c);
    M68K_OR8(g_m68k.d[2], 0x3c);
    M68K_OR8(g_m68k.d[2], 0x3c);
    M68K_OR8(g_m68k.d[2], 0x3c);
    /* WARNING: function did not end with RTS */
}

/* $024C3C-$024C54  (6 instructions, 24 bytes) */
void jt_024C3C(void) {
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[5] + (-0xb) + (int16_t)(uint16_t)g_m68k.d[3])); bus_write16(g_m68k.a[0], _mv); g_m68k.a[0] += 2; M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[5] + (-0xb) + (int16_t)(uint16_t)g_m68k.d[3])); bus_write16(g_m68k.a[0], _mv); g_m68k.a[0] += 2; M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[5] + (-0xb) + (int16_t)(uint16_t)g_m68k.d[3])); bus_write16(g_m68k.a[0], _mv); g_m68k.a[0] += 2; M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[5] + (-0xb) + (int16_t)(uint16_t)g_m68k.d[3])); bus_write16(g_m68k.a[0], _mv); g_m68k.a[0] += 2; M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[5] + (-0xb) + (int16_t)(uint16_t)g_m68k.d[3])); bus_write16(g_m68k.a[0], _mv); g_m68k.a[0] += 2; M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[5] + (-0xb) + (int16_t)(uint16_t)g_m68k.d[3])); bus_write16(g_m68k.a[0], _mv); g_m68k.a[0] += 2; M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $024CBC-$024CEE  (25 instructions, 50 bytes) */
void jt_024CBC(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[4]);
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[4]);
    g_m68k.d[0] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[4]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[4]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[1]);
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[1] -= 1; bus_write8(g_m68k.a[1], _mv); M68K_TST8(_mv); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[0] -= 1; bus_write8(g_m68k.a[0], _mv); M68K_TST8(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $024F88-$025040  (91 instructions, 184 bytes) */
void jt_024F88(void) {
    M68K_OR8(g_m68k.d[0], 0x20);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $025040-$0250E0  (80 instructions, 160 bytes) */
void jt_025040(void) {
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(1); M68K_TST32((uint32_t)g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0250E0-$02526E  (199 instructions, 398 bytes) */
void jt_0250E0(void) {
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(0)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(1); M68K_TST32((uint32_t)g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(0)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    /* WARNING: function did not end with RTS */
}

/* $02526E-$02536E  (128 instructions, 256 bytes) */
void jt_02526E(void) {
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(1); M68K_TST32((uint32_t)g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(0)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(1); M68K_TST32((uint32_t)g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $02536E-$02543A  (102 instructions, 204 bytes) */
void jt_02536E(void) {
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $02543C-$0258E8  (597 instructions, 1196 bytes) */
void jt_02543C(void) {
    M68K_OR8(g_m68k.d[1], 0x20);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(1); M68K_TST32((uint32_t)g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(1); M68K_TST32((uint32_t)g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(0)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(1); M68K_TST32((uint32_t)g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(0)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(1); M68K_TST32((uint32_t)g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(0)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0258E8-$0258EE  (3 instructions, 6 bytes) */
void jt_0258E8(void) {
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0258F0-$025DA2  (600 instructions, 1202 bytes) */
void jt_0258F0(void) {
    M68K_OR8(g_m68k.d[2], 0x20);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(1); M68K_TST32((uint32_t)g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(1); M68K_TST32((uint32_t)g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $025DA4-$026100  (429 instructions, 860 bytes) */
void jt_025DA4(void) {
    M68K_OR8(g_m68k.d[0], 0x20);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(1); M68K_TST32((uint32_t)g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(1); M68K_TST32((uint32_t)g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(1); M68K_TST32((uint32_t)g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(0)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(1); M68K_TST32((uint32_t)g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(0)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(1); M68K_TST32((uint32_t)g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(1); M68K_TST32((uint32_t)g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $026100-$026256  (171 instructions, 342 bytes) */
void jt_026100(void) {
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $026258-$026600  (461 instructions, 936 bytes) */
void jt_026258(void) {
    M68K_OR8(g_m68k.d[1], 0x20);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(0)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(g_m68k.d[1]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    M68K_BTST(g_m68k.d[1], g_m68k.d[0]);
    M68K_BTST(g_m68k.d[1], g_m68k.d[0]);
    M68K_BTST(g_m68k.d[1], g_m68k.d[0]);
    M68K_BTST(g_m68k.d[1], g_m68k.d[0]);
    M68K_BTST(g_m68k.d[1], g_m68k.d[0]);
    M68K_BTST(g_m68k.d[1], g_m68k.d[0]);
    M68K_BTST(g_m68k.d[1], g_m68k.d[0]);
    M68K_BTST(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = g_m68k.d[2]; M68K_TST32((uint32_t)g_m68k.d[1]);
    M68K_AND8(g_m68k.d[2], 0x2);
    M68K_AND8(g_m68k.d[2], 0x2);
    M68K_AND8(g_m68k.d[2], 0x2);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[2]))); M68K_TST8((uint8_t)g_m68k.d[1]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[2]))); M68K_TST8((uint8_t)g_m68k.d[1]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[2]))); M68K_TST8((uint8_t)g_m68k.d[1]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[2]))); M68K_TST8((uint8_t)g_m68k.d[1]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[2]))); M68K_TST8((uint8_t)g_m68k.d[1]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[2]))); M68K_TST8((uint8_t)g_m68k.d[1]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[2]))); M68K_TST8((uint8_t)g_m68k.d[1]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[2]))); M68K_TST8((uint8_t)g_m68k.d[1]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[2]))); M68K_TST8((uint8_t)g_m68k.d[1]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[2]))); M68K_TST8((uint8_t)g_m68k.d[1]);
    M68K_AND8(g_m68k.d[2], 0x2);
    M68K_AND8(g_m68k.d[2], 0x2);
    g_m68k.d[1] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(0)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $026600-$026700  (128 instructions, 256 bytes) */
void jt_026600(void) {
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(0)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(1); M68K_TST32((uint32_t)g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(0)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(1); M68K_TST32((uint32_t)g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $026700-$02670A  (5 instructions, 10 bytes) */
void jt_026700(void) {
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    /* WARNING: function did not end with RTS */
}

/* $02670C-$026BBE  (600 instructions, 1202 bytes) */
void jt_02670C(void) {
    M68K_OR8(g_m68k.d[2], 0x20);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(0)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(1); M68K_TST32((uint32_t)g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(0)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(1); M68K_TST32((uint32_t)g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(0)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(1)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(0)); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[1] = _predec32(2); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $026EA2-$026EA6  (1 instructions, 4 bytes) */
void jt_026EA2(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    /* WARNING: function did not end with RTS */
}

/* $026EA8-$026EB0  (2 instructions, 8 bytes) */
void jt_026EA8(void) {
    M68K_OR8(g_m68k.d[1], 0xa);
    M68K_OR8(g_m68k.d[1], 0xa);
    /* WARNING: function did not end with RTS */
}

/* $026EB2-$026EBA  (2 instructions, 8 bytes) */
void jt_026EB2(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_OR8(g_m68k.d[1], 0xff);
    /* WARNING: function did not end with RTS */
}

/* $026EBA-$026EC6  (3 instructions, 12 bytes) */
void jt_026EBA(void) {
    M68K_OR8(g_m68k.d[1], 0x5);
    M68K_OR8(g_m68k.d[1], 0x5);
    M68K_OR8(g_m68k.d[1], 0x5);
    /* WARNING: function did not end with RTS */
}

/* $026EC8-$026ED4  (3 instructions, 12 bytes) */
void jt_026EC8(void) {
    M68K_OR8(g_m68k.d[1], 0xf);
    M68K_OR8(g_m68k.d[1], 0x5);
    M68K_OR8(g_m68k.d[1], 0x5);
    /* WARNING: function did not end with RTS */
}

/* $026ED6-$026EDE  (2 instructions, 8 bytes) */
void jt_026ED6(void) {
    M68K_OR8(g_m68k.d[2], 0xf);
    M68K_OR8(g_m68k.d[5], 0x2);
    /* WARNING: function did not end with RTS */
}

/* $027060-$02712E  (40 instructions, 206 bytes) */
void jt_027060(void) {
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[7] + 0x37393830 + (int16_t)(uint16_t)g_m68k.d[3] * 8)); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[1] + 0x32 + (int32_t)g_m68k.d[3]))); M68K_TST16((uint16_t)g_m68k.d[4]);
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[3] + 0x34 + (int32_t)g_m68k.d[3]))); M68K_TST16((uint16_t)g_m68k.d[4]);
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[5] + 0x36 + (int32_t)g_m68k.d[3]))); M68K_TST16((uint16_t)g_m68k.d[4]);
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[7] + 0x38 + (int32_t)g_m68k.d[3]))); M68K_TST16((uint16_t)g_m68k.d[4]);
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x39303931))); M68K_TST16((uint16_t)g_m68k.d[4]);
    { uint16_t _mv = (uint16_t)(/* UNHANDLED_READ: ([$39343935, a2, d3.l], $aaaaaaaa) */ 0); g_m68k.a[4] -= 2; bus_write16(g_m68k.a[4], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[7] + 0x39393030 + (int32_t)g_m68k.d[3])); g_m68k.a[4] -= 2; bus_write16(g_m68k.a[4], _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[2] + 0x33 + (int16_t)(uint16_t)g_m68k.d[3]))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[5] + 0x37 + (int16_t)(uint16_t)g_m68k.d[3]))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x003130))); M68K_TST16((uint16_t)g_m68k.d[0]);
    { uint16_t _mv = (uint16_t)(/* UNHANDLED_READ: ([$31353137, a2, d3.w], $aaaaaaaa) */ 0); g_m68k.a[0] -= 2; bus_write16(g_m68k.a[0], _mv); M68K_TST16(_mv); }
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[0] + 0x32 + (int16_t)(uint16_t)g_m68k.d[3]))); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[3] + 0x35 + (int16_t)(uint16_t)g_m68k.d[3]))); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[7] + 0x38 + (int16_t)(uint16_t)g_m68k.d[3]))); M68K_TST16((uint16_t)g_m68k.d[1]);
    { uint16_t _mv = (uint16_t)(/* UNHANDLED_READ: ([$33333335, a0, d3.w * 2], $3337) */ 0); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(0x003430)); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[2] + 0x33 + (int16_t)(uint16_t)g_m68k.d[3]))); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[5] + 0x37 + (int16_t)(uint16_t)g_m68k.d[3]))); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x003530))); M68K_TST16((uint16_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(/* UNHANDLED_READ: ([$35353537, a2, d3.w * 4], $aaaaaaaa) */ 0); g_m68k.a[2] -= 2; bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[0] + 0x32 + (int16_t)(uint16_t)g_m68k.d[3]))); M68K_TST16((uint16_t)g_m68k.d[3]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[3] + 0x35 + (int16_t)(uint16_t)g_m68k.d[3]))); M68K_TST16((uint16_t)g_m68k.d[3]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[7] + 0x38 + (int16_t)(uint16_t)g_m68k.d[3]))); M68K_TST16((uint16_t)g_m68k.d[3]);
    { uint16_t _mv = (uint16_t)(/* UNHANDLED_READ: ([$37333735, a0, d3.w * 8], $3737) */ 0); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(0x003830)); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[2] + 0x33 + (int32_t)g_m68k.d[3]))); M68K_TST16((uint16_t)g_m68k.d[4]);
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[5] + 0x37 + (int32_t)g_m68k.d[3]))); M68K_TST16((uint16_t)g_m68k.d[4]);
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x003930))); M68K_TST16((uint16_t)g_m68k.d[4]);
    { uint16_t _mv = (uint16_t)(/* UNHANDLED_READ: ([$39353937, a2, d3.l], $aaaaaaaa) */ 0); g_m68k.a[4] -= 2; bus_write16(g_m68k.a[4], _mv); M68K_TST16(_mv); }
    M68K_OR8(g_m68k.d[2], 0x2e);
    M68K_OR8(g_m68k.d[2], 0x42);
    M68K_OR8(g_m68k.d[2], 0x56);
    M68K_OR8(g_m68k.d[2], 0x6a);
    M68K_OR8(g_m68k.d[2], 0x7e);
    M68K_OR8(g_m68k.d[2], 0x92);
    M68K_OR8(g_m68k.d[2], 0xa6);
    M68K_OR8(g_m68k.d[2], 0xba);
    M68K_OR8(g_m68k.d[2], 0xce);
    M68K_OR8(g_m68k.d[2], 0xe2);
    /* WARNING: function did not end with RTS */
}

/* $02712E-$027142  (8 instructions, 20 bytes) */
void jt_02712E(void) {
    M68K_OR8(g_m68k.d[2], 0x4);
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[2], g_m68k.d[1]);
    M68K_OR8(g_m68k.d[2], bus_read8(g_m68k.a[0]));
    M68K_OR8(g_m68k.d[2], bus_read8(g_m68k.a[1]));
    M68K_OR8(g_m68k.d[2], _predec8(0));
    M68K_OR8(g_m68k.d[2], _predec8(1));
    M68K_OR8(g_m68k.d[2], bus_read8(g_m68k.a[0] + 0x31 + (int16_t)(uint16_t)g_m68k.a[0]));
    /* WARNING: function did not end with RTS */
}

/* $027142-$027156  (8 instructions, 20 bytes) */
void jt_027142(void) {
    M68K_OR8(g_m68k.d[2], 0x4);
    M68K_OR8(g_m68k.d[2], g_m68k.d[2]);
    M68K_OR8(g_m68k.d[2], g_m68k.d[3]);
    M68K_OR8(g_m68k.d[2], bus_read8(g_m68k.a[2]));
    M68K_OR8(g_m68k.d[2], bus_read8(g_m68k.a[3]));
    M68K_OR8(g_m68k.d[2], _predec8(2));
    M68K_OR8(g_m68k.d[2], _predec8(3));
    M68K_OR8(g_m68k.d[2], bus_read8(g_m68k.a[2] + 0x33 + (int16_t)(uint16_t)g_m68k.a[0]));
    /* WARNING: function did not end with RTS */
}

/* $027156-$02716A  (8 instructions, 20 bytes) */
void jt_027156(void) {
    M68K_OR8(g_m68k.d[2], 0x4);
    M68K_OR8(g_m68k.d[2], g_m68k.d[4]);
    M68K_OR8(g_m68k.d[2], g_m68k.d[5]);
    M68K_OR8(g_m68k.d[2], bus_read8(g_m68k.a[4]));
    M68K_OR8(g_m68k.d[2], bus_read8(g_m68k.a[5]));
    M68K_OR8(g_m68k.d[2], _predec8(4));
    M68K_OR8(g_m68k.d[2], _predec8(5));
    M68K_OR8(g_m68k.d[2], bus_read8(g_m68k.a[4] + 0x35 + (int16_t)(uint16_t)g_m68k.a[0]));
    /* WARNING: function did not end with RTS */
}

/* $02716A-$02717E  (8 instructions, 20 bytes) */
void jt_02716A(void) {
    M68K_OR8(g_m68k.d[2], 0x4);
    M68K_OR8(g_m68k.d[2], g_m68k.d[6]);
    M68K_OR8(g_m68k.d[2], g_m68k.d[7]);
    M68K_OR8(g_m68k.d[2], bus_read8(g_m68k.a[6]));
    M68K_OR8(g_m68k.d[2], bus_read8(g_m68k.a[7]));
    M68K_OR8(g_m68k.d[2], _predec8(6));
    M68K_OR8(g_m68k.d[2], _predec8(7));
    M68K_OR8(g_m68k.d[2], bus_read8(g_m68k.a[6] + 0x37 + (int16_t)(uint16_t)g_m68k.a[0]));
    /* WARNING: function did not end with RTS */
}

/* $02717E-$027182  (1 instructions, 4 bytes) */
void jt_02717E(void) {
    M68K_OR8(g_m68k.d[2], 0x4);
    /* WARNING: function did not end with RTS */
}

/* $027192-$027196  (1 instructions, 4 bytes) */
void jt_027192(void) {
    M68K_OR8(g_m68k.d[2], 0x4);
    /* WARNING: function did not end with RTS */
}
