/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $110000 - $160074 */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

/* $110000-$110006  (2 instructions, 6 bytes) */
void jt_110000(void) {
    M68K_OR8(g_m68k.d[3], g_m68k.d[1]);
    { uint32_t _ea = (g_m68k.a[1] + 0x1 + (int16_t)(uint16_t)g_m68k.a[0]); uint16_t _tmp = bus_read16(_ea); M68K_NEGX16(_tmp); bus_write16(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $110010-$110012  (1 instructions, 2 bytes) */
void jt_110010(void) {
    /* TODO $110010: sbcd.b d0, d0  [81 00] */
    /* WARNING: function did not end with RTS */
}

/* $110016-$110022  (6 instructions, 12 bytes) */
void jt_110016(void) {
    { uint16_t _mv = (uint16_t)(g_m68k.d[3]); bus_write16(g_m68k.a[5], _mv); M68K_TST16(_mv); }
    /* TODO $110018: sbcd.b d0, d0  [81 00] */
    { uint16_t _mv = (uint16_t)(_predec16(1)); bus_write16(g_m68k.a[5], _mv); g_m68k.a[5] += 2; M68K_TST16(_mv); }
    /* TODO $11001C: sbcd.b d0, d0  [81 00] */
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[1])); bus_write16(g_m68k.a[5], _mv); M68K_TST16(_mv); }
    /* TODO $110020: sbcd.b d0, d0  [81 00] */
    /* WARNING: function did not end with RTS */
}

/* $11003E-$110042  (1 instructions, 4 bytes) */
void jt_11003E(void) {
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[3] + 0x1 + (int16_t)(uint16_t)g_m68k.a[0])); bus_write16(g_m68k.a[7], _mv); g_m68k.a[7] += 2; M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $1100A0-$1100A2  (1 instructions, 2 bytes) */
void jt_1100A0(void) {
    /* TODO $1100A0: sbcd.b d0, d0  [81 00] */
    /* WARNING: function did not end with RTS */
}

/* $117240-$117262  (12 instructions, 34 bytes) */
void jt_117240(void) {
    /* TODO $117240: sbcd.b d0, d0  [81 00] */
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[1])); M68K_TST16((uint16_t)g_m68k.d[5]);
    /* TODO $117244: sbcd.b d0, d0  [81 00] */
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.a[0])); bus_write16(g_m68k.a[4] + 0x3957, _mv); M68K_TST16(_mv); }
    /* TODO $11724C: sbcd.b d0, d0  [81 00] */
    { uint16_t _mv = (uint16_t)(_predec16(7)); bus_write16(g_m68k.a[4] + (-0x7f00), _mv); M68K_TST16(_mv); }
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[5] + (-0x7f00)))); M68K_TST16((uint16_t)g_m68k.d[5]);
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x008100))); M68K_TST16((uint16_t)g_m68k.d[5]);
    g_m68k.a[5] = (uint32_t)(int32_t)(int16_t)(uint16_t)(g_m68k.d[2]);
    /* TODO $11725C: sbcd.b d0, d0  [81 00] */
    g_m68k.a[5] = (uint32_t)(int32_t)(int16_t)(uint16_t)(g_m68k.a[5]);
    /* TODO $117260: sbcd.b d0, d0  [81 00] */
    /* WARNING: function did not end with RTS */
}

/* $119400-$11940E  (4 instructions, 14 bytes) */
void jt_119400(void) {
    /* TODO $119400: sbcd.b d2, d2  [85 02] */
    { uint16_t _mv = (uint16_t)(_predec16(0)); bus_write16(g_m68k.a[5] + (-0x7a00), _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[1] + (-0x7a00))); bus_write16(g_m68k.a[5] + 0x3bc3, _mv); M68K_TST16(_mv); }
    M68K_OR8(g_m68k.d[3], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $11FFF8-$11FFFA  (1 instructions, 2 bytes) */
void jt_11FFF8(void) {
    /* TODO $11FFF8: sbcd.b d0, d2  [85 00] */
    /* WARNING: function did not end with RTS */
}

/* $120008-$12000E  (3 instructions, 6 bytes) */
void jt_120008(void) {
    M68K_OR8(g_m68k.d[3], g_m68k.d[0]);
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[7])); bus_write16(g_m68k.a[7], _mv); M68K_TST16(_mv); }
    M68K_OR8(g_m68k.d[3], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $120014-$12001A  (3 instructions, 6 bytes) */
void jt_120014(void) {
    /* TODO $120014: sbcd.b d0, d0  [81 00] */
    { uint16_t _mv = (uint16_t)(g_m68k.d[3]); bus_write16(g_m68k.a[5], _mv); M68K_TST16(_mv); }
    /* TODO $120018: sbcd.b d0, d0  [81 00] */
    /* WARNING: function did not end with RTS */
}

/* $12005C-$12005E  (1 instructions, 2 bytes) */
void jt_12005C(void) {
    /* TODO $12005C: sbcd.b d0, d0  [81 00] */
    /* WARNING: function did not end with RTS */
}

/* $1200C0-$1200F2  (17 instructions, 50 bytes) */
void jt_1200C0(void) {
    /* TODO $1200C0: sbcd.b d3, d2  [85 03] */
    { uint16_t _mv = (uint16_t)(_predec16(0)); bus_write16(g_m68k.a[5] + (-0x7a00), _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(g_m68k.a[4]); bus_write16(g_m68k.a[7], _mv); M68K_TST16(_mv); }
    M68K_OR8(g_m68k.d[3], g_m68k.d[0]);
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[6])); bus_write16(g_m68k.a[7], _mv); M68K_TST16(_mv); }
    M68K_OR8(g_m68k.d[3], g_m68k.d[0]);
    /* TODO $1200CE: dc.w $4913  [49 13] */
    /* TODO $1200D0: sbcd.b d0, d0  [81 00] */
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[5])); M68K_TST16((uint16_t)g_m68k.d[5]);
    /* TODO $1200D4: sbcd.b d0, d0  [81 00] */
    { uint16_t _mv = (uint16_t)(bus_read16(0x81003956)); bus_write16(g_m68k.a[4] + (-0x7f00), _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_predec16(6)); bus_write16(g_m68k.a[4] + (-0x7f00), _mv); M68K_TST16(_mv); }
    g_m68k.a[5] = (uint32_t)(int32_t)(int16_t)(uint16_t)(g_m68k.a[7]);
    /* TODO $1200E4: sbcd.b d0, d0  [81 00] */
    g_m68k.a[5] = (uint32_t)(int32_t)(int16_t)(uint16_t)(_postinc16(2));
    /* TODO $1200E8: sbcd.b d0, d0  [81 00] */
    { uint32_t _ea = /* UNHANDLED_ADDR: ([a2, a0.w * 4], $4888503) */ 0; uint8_t _b = 1u << ((g_m68k.d[5]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* WARNING: function did not end with RTS */
}

/* $12011E-$120122  (1 instructions, 4 bytes) */
void jt_12011E(void) {
    { uint16_t _mv = (uint16_t)(_predec16(7)); bus_write16(g_m68k.a[4] + (-0x7f00), _mv); M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $120D06-$120E56  (97 instructions, 336 bytes) */
void jt_120D06(void) {
    { uint32_t _ea = (g_m68k.a[5] + (-0x7afe)); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    M68K_CMP32(_predec32(4), 0x85000ca8);
    /* TODO $120D10: sbcd.b d0, d2  [85 00] */
    { uint32_t _ea = /* UNHANDLED_ADDR: ([a0, a0.w * 4], $177) */ 0; uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $120D18: sbcd.b d2, d2  [85 02] */
    { uint32_t _ea = (g_m68k.a[5] + (-0x7afe)); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint16_t _mv = (uint16_t)(_predec16(5)); bus_write16(g_m68k.a[5] + (-0x7afe), _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(/* UNHANDLED_READ: ([a1, a0.w * 4]) */ 0); bus_write16(g_m68k.a[7], _mv); g_m68k.a[7] += 2; M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(g_m68k.a[5]); g_m68k.a[5] -= 2; bus_write16(g_m68k.a[5], _mv); M68K_TST16(_mv); }
    M68K_OR8(g_m68k.d[3], g_m68k.d[0]);
    { uint16_t _mv = (uint16_t)(g_m68k.a[7]); g_m68k.a[5] -= 2; bus_write16(g_m68k.a[5], _mv); M68K_TST16(_mv); }
    M68K_OR8(g_m68k.d[3], g_m68k.d[1]);
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[1] + (-0x79ff))); bus_write16(g_m68k.a[5] + 0x3bc3, _mv); M68K_TST16(_mv); }
    M68K_OR8(g_m68k.d[3], g_m68k.d[0]);
    { uint16_t _mv = (uint16_t)(g_m68k.a[7]); g_m68k.a[5] -= 2; bus_write16(g_m68k.a[5], _mv); M68K_TST16(_mv); }
    M68K_OR8(g_m68k.d[3], g_m68k.d[0]);
    { uint16_t _mv = (uint16_t)(_postinc16(1)); bus_write16(g_m68k.a[5] + (-0x7aff), _mv); M68K_TST16(_mv); }
    { uint32_t _ea = g_m68k.a[2]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $120D40: sbcd.b d2, d2  [85 02] */
    { uint32_t _ea = /* UNHANDLED_ADDR: ([a4, a0.w * 4], $16e) */ 0; uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $120D48: sbcd.b d2, d2  [85 02] */
    { uint32_t _ea = (g_m68k.a[5] + (-0x7afe)); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    M68K_CMP32(bus_read32(g_m68k.a[1] + (-0x7afe)), 0x8500016a);
    { uint32_t _ea = 0x008502; uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = /* UNHANDLED_ADDR: ([a4, a0.w * 4], $169) */ 0; uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $120D60: sbcd.b d2, d2  [85 02] */
    { uint16_t _mv = (uint16_t)(/* UNHANDLED_READ: ([a0, a0.w * 4]) */ 0); bus_write16(g_m68k.a[7], _mv); g_m68k.a[7] += 2; M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(g_m68k.a[7]); g_m68k.a[5] -= 2; bus_write16(g_m68k.a[5], _mv); M68K_TST16(_mv); }
    M68K_OR8(g_m68k.d[3], g_m68k.d[0]);
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[7])); bus_write16(g_m68k.a[5] + (-0x79ff), _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[3] + (-0x79ff))); /* UNHANDLED_WRITE: ([a5]) = _mv */ M68K_TST16(_mv); }
    M68K_OR8(g_m68k.d[3], g_m68k.d[1]);
    { uint16_t _mv = (uint16_t)(g_m68k.a[6]); g_m68k.a[5] -= 2; bus_write16(g_m68k.a[5], _mv); M68K_TST16(_mv); }
    M68K_OR8(g_m68k.d[3], g_m68k.d[0]);
    { uint16_t _mv = (uint16_t)(_postinc16(0)); bus_write16(g_m68k.a[5] + (-0x7aff), _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_predec16(5)); bus_write16(g_m68k.a[5] + (-0x7aff), _mv); M68K_TST16(_mv); }
    { uint32_t _ea = g_m68k.a[1]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $120D84: sbcd.b d2, d2  [85 02] */
    { uint32_t _ea = /* UNHANDLED_ADDR: ([a5, a0.w * 4], $171) */ 0; uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $120D8C: sbcd.b d2, d2  [85 02] */
    { uint32_t _ea = g_m68k.a[1]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $120D90: sbcd.b d2, d2  [85 02] */
    { uint32_t _ea = (g_m68k.a[7] + (-0x7afe)); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = (g_m68k.a[3] + (-0x7afe)); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = g_m68k.a[1]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $120D9C: sbcd.b d2, d2  [85 02] */
    { uint32_t _ea = (g_m68k.a[2] + (-0x7afe)); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[7] + (-0x7aff))); bus_write16(g_m68k.a[7], _mv); g_m68k.a[7] += 2; M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[2] + (-0x7a00))); bus_write16(g_m68k.a[5] + 0x3b69, _mv); M68K_TST16(_mv); }
    M68K_OR8(g_m68k.d[3], g_m68k.d[1]);
    { uint16_t _mv = (uint16_t)(g_m68k.a[6]); bus_write16(g_m68k.a[5] + (-0x79ff), _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[5] -= 2; bus_write16(g_m68k.a[5], _mv); M68K_TST16(_mv); }
    M68K_OR8(g_m68k.d[3], g_m68k.d[1]);
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[5])); bus_write16(g_m68k.a[5] + (-0x7a00), _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[6])); bus_write16(g_m68k.a[5] + (-0x7a00), _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(2)); bus_write16(g_m68k.a[5] + (-0x7aff), _mv); M68K_TST16(_mv); }
    { uint32_t _ea = (g_m68k.a[7] + (-0x7afe)); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = /* UNHANDLED_ADDR: ([a6, a0.w * 4], $172) */ 0; uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $120DCC: sbcd.b d2, d2  [85 02] */
    { uint32_t _ea = (g_m68k.a[4] + (-0x7afe)); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    M68K_CMP32(bus_read32(g_m68k.a[5] + (-0x7afe)), 0x85000176);
    { uint32_t _ea = /* UNHANDLED_ADDR: ([a2, a0.w * 4], $16c) */ 0; uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $120DE0: sbcd.b d2, d2  [85 02] */
    { uint16_t _mv = (uint16_t)(_predec16(5)); bus_write16(g_m68k.a[5] + (-0x7afe), _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(0)); bus_write16(g_m68k.a[5] + (-0x7afe), _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[5] -= 2; bus_write16(g_m68k.a[5], _mv); M68K_TST16(_mv); }
    M68K_OR8(g_m68k.d[3], g_m68k.d[1]);
    { uint16_t _mv = (uint16_t)(g_m68k.a[5]); bus_write16(g_m68k.a[5] + (-0x79ff), _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(g_m68k.a[4]); bus_write16(g_m68k.a[5] + (-0x79ff), _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(g_m68k.a[4]); bus_write16(g_m68k.a[5] + (-0x7a00), _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[1] + (-0x7a00))); bus_write16(g_m68k.a[5] + 0x3b59, _mv); M68K_TST16(_mv); }
    /* TODO $120E00: sbcd.b d1, d2  [85 01] */
    { uint32_t _ea = g_m68k.a[2]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $120E04: sbcd.b d2, d2  [85 02] */
    { uint32_t _ea = /* UNHANDLED_ADDR: ([a7, a0.w * 4], $173) */ 0; uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $120E0C: sbcd.b d2, d2  [85 02] */
    { uint32_t _ea = (g_m68k.a[5] + (-0x7afe)); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    M68K_CMP32(bus_read32(g_m68k.a[6] + (-0x7afe)), 0x85000177);
    { uint32_t _ea = /* UNHANDLED_ADDR: ([a3, a0.w * 4], $16d) */ 0; uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $120E20: sbcd.b d2, d2  [85 02] */
    { uint32_t _ea = (g_m68k.a[1] + (-0x7afe)); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint16_t _mv = (uint16_t)(_postinc16(1)); bus_write16(g_m68k.a[5] + (-0x7afe), _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(g_m68k.a[7]); g_m68k.a[5] -= 2; bus_write16(g_m68k.a[5], _mv); M68K_TST16(_mv); }
    M68K_OR8(g_m68k.d[3], g_m68k.d[1]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[5] -= 2; bus_write16(g_m68k.a[5], _mv); M68K_TST16(_mv); }
    M68K_OR8(g_m68k.d[3], g_m68k.d[1]);
    { uint32_t _ea = (g_m68k.a[5] + (-0x7a00)); uint32_t _tmp = bus_read32(_ea); M68K_NEG32(_tmp); bus_write32(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(g_m68k.a[5]); g_m68k.a[5] -= 2; bus_write16(g_m68k.a[5], _mv); M68K_TST16(_mv); }
    M68K_OR8(g_m68k.d[3], g_m68k.d[1]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[7]); bus_write16(g_m68k.a[5] + (-0x79ff), _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(0)); bus_write16(g_m68k.a[5] + (-0x7aff), _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_predec16(5)); bus_write16(g_m68k.a[5] + (-0x7aff), _mv); M68K_TST16(_mv); }
    { uint32_t _ea = (g_m68k.a[3] + (-0x7afe)); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = g_m68k.a[1]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $120E4C: sbcd.b d2, d2  [85 02] */
    { uint32_t _ea = /* UNHANDLED_ADDR: ([a5, a0.w * 4], $ab9) */ 0; uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $120E54: sbcd.b d1, d2  [85 01] */
    /* WARNING: function did not end with RTS */
}

/* $126000-$126052  (29 instructions, 82 bytes) */
void jt_126000(void) {
    M68K_OR8(g_m68k.d[3], g_m68k.d[0]);
    { uint16_t _mv = (uint16_t)(bus_read16(0x008600)); bus_write16(g_m68k.a[7], _mv); g_m68k.a[7] += 2; M68K_TST16(_mv); }
    { uint32_t _ea = (g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 8); uint16_t _tmp = bus_read16(_ea); M68K_NEGX16(_tmp); bus_write16(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[7] + (-0x7f00))); bus_write16(g_m68k.a[5] + 0x4080, _mv); M68K_TST16(_mv); }
    /* TODO $126010: sbcd.b d0, d0  [81 00] */
    M68K_NEGX32(g_m68k.d[7]);
    /* TODO $126014: sbcd.b d0, d0  [81 00] */
    { uint32_t _ea = g_m68k.a[2]; uint32_t _tmp = bus_read32(_ea); M68K_NEGX32(_tmp); bus_write32(_ea, _tmp); }
    /* TODO $126018: sbcd.b d0, d0  [81 00] */
    { uint32_t _ea = g_m68k.a[1]; uint32_t _tmp = bus_read32(_ea); M68K_NEGX32(_tmp); bus_write32(_ea, _tmp); }
    /* TODO $12601C: sbcd.b d0, d0  [81 00] */
    { uint16_t _mv = (uint16_t)(_postinc16(2)); bus_write16(g_m68k.a[6], _mv); M68K_TST16(_mv); }
    /* TODO $126020: sbcd.b d0, d0  [81 00] */
    { uint32_t _ea = g_m68k.a[3]; uint32_t _tmp = bus_read32(_ea); M68K_NEGX32(_tmp); bus_write32(_ea, _tmp); }
    /* TODO $126024: sbcd.b d0, d0  [81 00] */
    g_m68k.a[6] = (uint32_t)(int32_t)(int16_t)(uint16_t)(bus_read16(g_m68k.a[7] + 0 + (int16_t)(uint16_t)g_m68k.a[0]));
    { uint32_t _ea = (g_m68k.a[2] + (-0x7b00)); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint16_t _mv = (uint16_t)(_predec16(5)); bus_write16(g_m68k.a[5] + (-0x7afd), _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(0)); bus_write16(g_m68k.a[5] + (-0x7afd), _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(g_m68k.a[7]); g_m68k.a[5] -= 2; bus_write16(g_m68k.a[5], _mv); M68K_TST16(_mv); }
    M68K_OR8(g_m68k.d[3], g_m68k.d[0]);
    { uint16_t _mv = (uint16_t)(g_m68k.a[4]); bus_write16(g_m68k.a[5] + (-0x7a00), _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 8)); bus_write16(g_m68k.a[7], _mv); g_m68k.a[7] += 2; M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(0x86004074)); bus_write16(g_m68k.a[7], _mv); g_m68k.a[7] += 2; M68K_TST16(_mv); }
    M68K_OR8(g_m68k.d[3], g_m68k.d[0]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); g_m68k.a[7] -= 2; bus_write16(g_m68k.a[7], _mv); M68K_TST16(_mv); }
    /* TODO $12604C: sbcd.b d0, d0  [81 00] */
    { uint16_t _mv = (uint16_t)(g_m68k.d[4]); g_m68k.a[7] -= 2; bus_write16(g_m68k.a[7], _mv); M68K_TST16(_mv); }
    /* TODO $126050: sbcd.b d0, d0  [81 00] */
    /* WARNING: function did not end with RTS */
}

/* $127260-$12733A  (79 instructions, 218 bytes) */
void jt_127260(void) {
    /* TODO $127260: sbcd.b d0, d0  [81 00] */
    { uint16_t _mv = (uint16_t)(g_m68k.d[4]); bus_write16(g_m68k.a[7], _mv); g_m68k.a[7] += 2; M68K_TST16(_mv); }
    /* TODO $127264: sbcd.b d0, d0  [81 00] */
    { uint16_t _mv = (uint16_t)(g_m68k.a[4]); bus_write16(g_m68k.a[7], _mv); g_m68k.a[7] += 2; M68K_TST16(_mv); }
    /* TODO $127268: sbcd.b d0, d0  [81 00] */
    M68K_OR32(g_m68k.d[0], 0x85020079);
    /* TODO $127270: sbcd.b d0, d2  [85 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v & ~ _b); }
    /* TODO $127274: sbcd.b d0, d2  [85 00] */
    { uint32_t _ea = (g_m68k.a[4] + (-0x7b00)); uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v & ~ _b); }
    { uint32_t _ea = (g_m68k.a[7] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 4); uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v & ~ _b); }
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[5])); M68K_TST16((uint16_t)g_m68k.d[7]);
    /* TODO $127280: sbcd.b d2, d2  [85 02] */
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[7])); bus_write16(g_m68k.a[5] + (-0x7a00), _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(g_m68k.a[3]); bus_write16(g_m68k.a[7], _mv); M68K_TST16(_mv); }
    M68K_OR8(g_m68k.d[3], g_m68k.d[0]);
    { uint16_t _mv = (uint16_t)(g_m68k.a[7]); bus_write16(g_m68k.a[7], _mv); M68K_TST16(_mv); }
    M68K_OR8(g_m68k.d[3], g_m68k.d[0]);
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[6] + 0 + (int16_t)(uint16_t)g_m68k.a[0])); g_m68k.a[5] -= 2; bus_write16(g_m68k.a[5], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_predec16(0)); bus_write16(g_m68k.a[7], _mv); M68K_TST16(_mv); }
    /* TODO $127294: sbcd.b d0, d0  [81 00] */
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[0] + (-0x7f00))); bus_write16(g_m68k.a[7], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.a[0])); bus_write16(g_m68k.a[7], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x8100); bus_write16(g_m68k.a[7], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[5]); bus_write16(g_m68k.a[7], _mv); g_m68k.a[7] += 2; M68K_TST16(_mv); }
    /* TODO $1272A4: sbcd.b d0, d0  [81 00] */
    g_m68k.a[5] = (uint32_t)(int32_t)(int16_t)(uint16_t)(_predec16(7));
    /* TODO $1272A8: sbcd.b d0, d0  [81 00] */
    M68K_OR32(g_m68k.d[1], 0x8502007a);
    /* TODO $1272B0: sbcd.b d0, d2  [85 00] */
    { uint32_t _ea = g_m68k.a[6]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v & ~ _b); }
    /* TODO $1272B4: sbcd.b d0, d2  [85 00] */
    { uint32_t _ea = (g_m68k.a[5] + (-0x7b00)); uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v & ~ _b); }
    { uint32_t _ea = 0x008500; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v & ~ _b); }
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[6])); M68K_TST16((uint16_t)g_m68k.d[7]);
    /* TODO $1272C0: sbcd.b d2, d2  [85 02] */
    { uint16_t _mv = (uint16_t)(_predec16(0)); bus_write16(g_m68k.a[5] + (-0x7a00), _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(g_m68k.a[4]); bus_write16(g_m68k.a[7], _mv); M68K_TST16(_mv); }
    M68K_OR8(g_m68k.d[3], g_m68k.d[0]);
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[6])); bus_write16(g_m68k.a[7], _mv); M68K_TST16(_mv); }
    M68K_OR8(g_m68k.d[3], g_m68k.d[0]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[7]); bus_write16(g_m68k.a[5], _mv); g_m68k.a[5] += 2; M68K_TST16(_mv); }
    /* TODO $1272D0: sbcd.b d0, d0  [81 00] */
    { uint16_t _mv = (uint16_t)(_predec16(1)); bus_write16(g_m68k.a[7], _mv); M68K_TST16(_mv); }
    /* TODO $1272D4: sbcd.b d0, d0  [81 00] */
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[1] + (-0x7f00))); bus_write16(g_m68k.a[7], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.a[0])); bus_write16(g_m68k.a[4] + 0x397f, _mv); M68K_TST16(_mv); }
    /* TODO $1272E0: sbcd.b d0, d0  [81 00] */
    { uint16_t _mv = (uint16_t)(g_m68k.d[6]); bus_write16(g_m68k.a[7], _mv); g_m68k.a[7] += 2; M68K_TST16(_mv); }
    /* TODO $1272E4: sbcd.b d0, d0  [81 00] */
    g_m68k.a[5] = (uint32_t)(int32_t)(int16_t)(uint16_t)(bus_read16(g_m68k.a[0] + (-0x7f00)));
    M68K_OR32(g_m68k.d[2], 0x85020073);
    /* TODO $1272F0: sbcd.b d0, d2  [85 00] */
    { uint32_t _ea = g_m68k.a[7]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v & ~ _b); }
    /* TODO $1272F4: sbcd.b d0, d2  [85 00] */
    { uint32_t _ea = (g_m68k.a[6] + (-0x7b00)); uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v & ~ _b); }
    { uint32_t _ea = 0x85003E07; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v & ~ _b); }
    /* TODO $127300: sbcd.b d2, d2  [85 02] */
    { uint16_t _mv = (uint16_t)(_predec16(1)); bus_write16(g_m68k.a[5] + (-0x7a00), _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(g_m68k.a[5]); bus_write16(g_m68k.a[7], _mv); M68K_TST16(_mv); }
    M68K_OR8(g_m68k.d[3], g_m68k.d[0]);
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[7])); bus_write16(g_m68k.a[7], _mv); M68K_TST16(_mv); }
    M68K_OR8(g_m68k.d[3], g_m68k.d[0]);
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[1])); bus_write16(g_m68k.a[5], _mv); M68K_TST16(_mv); }
    /* TODO $127310: sbcd.b d0, d0  [81 00] */
    { uint16_t _mv = (uint16_t)(_predec16(2)); bus_write16(g_m68k.a[7], _mv); M68K_TST16(_mv); }
    /* TODO $127314: sbcd.b d0, d0  [81 00] */
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[2] + (-0x7f00))); bus_write16(g_m68k.a[7], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.a[0])); bus_write16(g_m68k.a[4] + 0x3980, _mv); M68K_TST16(_mv); }
    /* TODO $127320: sbcd.b d0, d0  [81 00] */
    { uint16_t _mv = (uint16_t)(g_m68k.d[7]); bus_write16(g_m68k.a[7], _mv); g_m68k.a[7] += 2; M68K_TST16(_mv); }
    /* TODO $127324: sbcd.b d0, d0  [81 00] */
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[7], _mv); M68K_TST16(_mv); }
    /* TODO $127328: sbcd.b d0, d0  [81 00] */
    { uint32_t _ea = 0x000074; uint16_t _tmp = bus_read16(_ea); M68K_OR16(_tmp, 0x8502); bus_write16(_ea, _tmp); }
    /* TODO $127330: sbcd.b d0, d2  [85 00] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v & ~ _b); }
    /* TODO $127334: sbcd.b d0, d2  [85 00] */
    { uint32_t _ea = (g_m68k.a[7] + (-0x7b00)); uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v & ~ _b); }
    /* WARNING: function did not end with RTS */
}

/* $129400-$12941A  (6 instructions, 26 bytes) */
void jt_129400(void) {
    /* TODO $129400: sbcd.b d0, d0  [81 00] */
    { uint16_t _mv = (uint16_t)(_predec16(3)); bus_write16(g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 8, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[3] + (-0x7a00))); /* UNHANDLED_WRITE: ([$8600], d3.l, $aaaaaaaa) = _mv */ M68K_TST16(_mv); }
    M68K_OR8(g_m68k.d[3], g_m68k.d[0]);
    { uint16_t _mv = (uint16_t)(0x8500); bus_write16(g_m68k.a[4] + 0x72 + (int16_t)(uint16_t)g_m68k.d[0], _mv); M68K_TST16(_mv); }
    /* TODO $129418: sbcd.b d0, d2  [85 00] */
    /* WARNING: function did not end with RTS */
}

/* $130000-$13000E  (4 instructions, 14 bytes) */
void jt_130000(void) {
    /* TODO $130000: sbcd.b d1, d2  [85 01] */
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[4] + 0x1 + (int16_t)(uint16_t)g_m68k.a[0])); bus_write16(g_m68k.a[7], _mv); g_m68k.a[7] += 2; M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(0x86014074)); bus_write16(g_m68k.a[7], _mv); g_m68k.a[7] += 2; M68K_TST16(_mv); }
    M68K_OR8(g_m68k.d[3], g_m68k.d[1]);
    /* WARNING: function did not end with RTS */
}

/* $130010-$130012  (1 instructions, 2 bytes) */
void jt_130010(void) {
    /* TODO $130010: sbcd.b d0, d0  [81 00] */
    /* WARNING: function did not end with RTS */
}

/* $130014-$130022  (4 instructions, 14 bytes) */
void jt_130014(void) {
    /* TODO $130014: sbcd.b d0, d0  [81 00] */
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.a[0])); bus_write16(g_m68k.a[4] + 0x3980, _mv); M68K_TST16(_mv); }
    /* TODO $13001C: sbcd.b d0, d0  [81 00] */
    g_m68k.a[0] = (uint32_t)(int32_t)(int16_t)bus_read16(g_m68k.a[5]); g_m68k.a[5] += 2; g_m68k.a[7] = (uint32_t)(int32_t)(int16_t)bus_read16(g_m68k.a[5]); g_m68k.a[5] += 2;
    /* WARNING: function did not end with RTS */
}

/* $130024-$130052  (12 instructions, 46 bytes) */
void jt_130024(void) {
    /* TODO $130024: sbcd.b d0, d0  [81 00] */
    { uint32_t _addr = (g_m68k.a[1] + 0x80); g_m68k.a[0] = (uint32_t)(int32_t)(int16_t)bus_read16(_addr); _addr += 2; g_m68k.a[7] = (uint32_t)(int32_t)(int16_t)bus_read16(_addr); _addr += 2; }
    /* TODO $13002C: sbcd.b d2, d2  [85 02] */
    { uint32_t _ea = 0x00007D; uint16_t _tmp = bus_read16(_ea); M68K_OR16(_tmp, 0x8500); bus_write16(_ea, _tmp); }
    /* TODO $130034: sbcd.b d2, d2  [85 02] */
    { uint32_t _ea = (g_m68k.a[5] + 0x6f + (int16_t)(uint16_t)g_m68k.d[0]); uint16_t _tmp = bus_read16(_ea); M68K_OR16(_tmp, 0x8502); bus_write16(_ea, _tmp); }
    /* TODO $13003C: sbcd.b d3, d2  [85 03] */
    { uint16_t _mv = (uint16_t)(bus_read16(0x85023EF3)); bus_write16(g_m68k.a[4] + 0x1 + (int16_t)(uint16_t)g_m68k.a[0], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(0x008601)); bus_write16(g_m68k.a[7], _mv); g_m68k.a[7] += 2; M68K_TST16(_mv); }
    { uint32_t _ea = (g_m68k.a[3] + 0x1 + (int16_t)(uint16_t)g_m68k.a[0]); uint16_t _tmp = bus_read16(_ea); M68K_NEGX16(_tmp); bus_write16(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(g_m68k.a[6]); bus_write16(g_m68k.a[5], _mv); M68K_TST16(_mv); }
    /* TODO $130050: sbcd.b d0, d0  [81 00] */
    /* WARNING: function did not end with RTS */
}

/* $139400-$1396CE  (186 instructions, 718 bytes) */
void jt_139400(void) {
    g_m68k.a[4] -= (int16_t)(uint16_t)(g_m68k.a[0]);
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xce); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xd0); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xd2); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xd8); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xe2); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xe4); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xe6); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xec); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xf2); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xf4); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xf6); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xf8); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xfa); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xfc); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x6); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x10); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x26); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x40); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x42); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x54); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x6a); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x70); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x7e); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x80); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x82); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x84); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x86); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x88); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xfe); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x0); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x9a); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xa4); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xa6); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xa8); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xae); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xb0); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xb2); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xbc); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xbe); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xc4); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xc6); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xc8); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xca); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xcc); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x62); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x64); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xea); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xec); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xee); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xf0); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xf2); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xf4); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x12); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x30); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x32); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x32); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x4e); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x50); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xee); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xf0); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x4e); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x50); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x5a); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x5c); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x5e); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x60); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x62); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x64); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x6a); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x6c); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x6e); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x6e); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x76); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x78); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x5e); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x60); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x76); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x78); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x92); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x94); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x96); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x98); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x9a); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xa0); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xa0); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x92); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x94); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x96); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x8e); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x8e); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x8e); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x8e); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x8e); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x8e); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xa); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xc); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x1a); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x1c); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x1e); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x20); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x20); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xa); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xc); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x1a); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x8e); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x8e); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x8e); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x8e); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x8e); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x8e); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x8e); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x8e); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x8e); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x5c); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x5e); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x60); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x60); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x78); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x78); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x8e); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x6a); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x70); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x7e); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x8e); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x8e); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x3c); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x8e); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x8e); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x8e); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xc0); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xc2); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xc4); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xc4); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xdc); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xdc); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x8e); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xb2); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xbc); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xbe); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x8e); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x8e); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x90); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xd8); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xa8); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x20);
    g_m68k.d[0] = (uint32_t)(int32_t)(int8_t)(0x90); M68K_TST32(g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x20);
    M68K_SUB32(g_m68k.d[0], bus_read32(g_m68k.a[0]));
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x70); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x90); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x3a);
    M68K_SUB16(g_m68k.d[0], bus_read16(g_m68k.a[0]));
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x58); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x58); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x1);
    { uint32_t _ea = g_m68k.a[0]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0x4); bus_write16(_ea, _tmp); }
    M68K_OR8(g_m68k.d[4], 0x40);
    M68K_OR8(g_m68k.d[7], 0x60);
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x60); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_BTST(bus_read8(g_m68k.a[5]), g_m68k.d[0]);
    M68K_SUB32(g_m68k.d[4], g_m68k.d[0]);
    M68K_BTST(bus_read8(g_m68k.a[6]), g_m68k.d[0]);
    /* TODO $13969C: roxr.w d0, d0  [E0 70] */
    M68K_OR8(g_m68k.d[0], 0x18);
    M68K_OR32(g_m68k.d[0], _predec32(0));
    M68K_BTST(bus_read8(g_m68k.a[1]), g_m68k.d[0]);
    M68K_AND32(g_m68k.d[4], bus_read32(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0]));
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[2]; uint16_t _tmp = bus_read16(_ea); M68K_OR16(_tmp, 0xe878); bus_write16(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[2]; uint16_t _tmp = bus_read16(_ea); M68K_OR16(_tmp, 0xc0c0); bus_write16(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x5a);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(_postinc16(0))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x5a);
    M68K_ASR8(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x1);
    M68K_OR8(g_m68k.d[4], bus_read8(g_m68k.a[0] + 0x5a + (int16_t)(uint16_t)g_m68k.d[0]));
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[0] + 0x5a + (int16_t)(uint16_t)g_m68k.d[0])); bus_write16(g_m68k.a[4], _mv); M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $14000E-$140010  (1 instructions, 2 bytes) */
void jt_14000E(void) {
    M68K_SUBX8(g_m68k.d[1], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $140018-$140022  (5 instructions, 10 bytes) */
void jt_140018(void) {
    /* TODO $140018: dc.w $4f17  [4F 17] */
    M68K_SUBX8(g_m68k.d[1], g_m68k.d[0]);
    /* TODO $14001C: dc.w $4f18  [4F 18] */
    M68K_SUBX8(g_m68k.d[1], g_m68k.d[0]);
    /* TODO $140020: dc.w $4f11  [4F 11] */
    /* WARNING: function did not end with RTS */
}

/* $140022-$140028  (2 instructions, 6 bytes) */
void jt_140022(void) {
    M68K_SUBX8(g_m68k.d[1], g_m68k.d[3]);
    /* TODO $140024: dbt d6, $138c26  [50 CE 8C 00] */
    /* WARNING: function did not end with RTS */
}

/* $14003A-$14004C  (8 instructions, 18 bytes) */
void jt_14003A(void) {
    M68K_SUBX8(g_m68k.d[1], g_m68k.d[0]);
    /* TODO $14003C: dc.w $4f15  [4F 15] */
    M68K_SUBX8(g_m68k.d[1], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[4]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0x2); bus_write16(_ea, _tmp); }
    M68K_SUBX8(g_m68k.d[1], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[3]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0x2); bus_write16(_ea, _tmp); }
    M68K_SUBX8(g_m68k.d[1], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.a[1] * 2); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0x2); bus_write16(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $140870-$140874  (2 instructions, 4 bytes) */
void jt_140870(void) {
    { uint32_t _ea = g_m68k.a[1]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, 0x2); bus_write32(_ea, _tmp); }
    M68K_SUBX8(g_m68k.d[1], g_m68k.d[1]);
    /* WARNING: function did not end with RTS */
}

/* $14206A-$142074  (4 instructions, 10 bytes) */
void jt_14206A(void) {
    M68K_SUBX8(g_m68k.d[1], g_m68k.d[1]);
    bus_write8(/* UNHANDLED_ADDR: ([a4, a1.w * 2]) */ 0, M68K_CC_CS ? 0xFF : 0x00);
    M68K_ADD8(g_m68k.d[1], 0x3);
    M68K_SUBX8(g_m68k.d[1], g_m68k.d[1]);
    /* WARNING: function did not end with RTS */
}

/* $14303C-$143040  (1 instructions, 4 bytes) */
void jt_14303C(void) {
    { uint32_t _ea = 0x009300; uint32_t _tmp = bus_read32(_ea); M68K_SUB32(_tmp, 0x4); bus_write32(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $14317C-$143184  (4 instructions, 8 bytes) */
void jt_14317C(void) {
    g_m68k.a[2] += 0x3;
    M68K_SUBX8(g_m68k.d[1], g_m68k.d[1]);
    { uint32_t _ea = g_m68k.a[4]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0x3); bus_write16(_ea, _tmp); }
    M68K_SUBX8(g_m68k.d[1], g_m68k.d[1]);
    /* WARNING: function did not end with RTS */
}

/* $1433FC-$14345C  (38 instructions, 96 bytes) */
void jt_1433FC(void) {
    /* TODO $1433FC: chk.w -$7d00(a1), d6  [4D A9 83 00] */
    /* TODO $143400: chk.w -$7d00(a5), d6  [4D AD 83 00] */
    /* TODO $143404: dc.w $4d30  [4D 30] */
    /* TODO $143406: sbcd.b d0, d1  [83 00] */
    /* TODO $143408: dc.w $4d3a  [4D 3A] */
    /* TODO $14340A: sbcd.b d0, d1  [83 00] */
    /* TODO $14340C: chk.w -$7d00(a1), d6  [4D A9 83 00] */
    /* TODO $143410: chk.w -$7d00(a5), d6  [4D AD 83 00] */
    /* TODO $143414: dc.w $4d30  [4D 30] */
    /* TODO $143416: sbcd.b d0, d1  [83 00] */
    /* TODO $143418: dc.w $4d3a  [4D 3A] */
    /* TODO $14341A: sbcd.b d0, d1  [83 00] */
    /* TODO $14341C: chk.w -$7d00(a1), d6  [4D A9 83 00] */
    /* TODO $143420: chk.w -$7d00(a5), d6  [4D AD 83 00] */
    /* TODO $143424: dc.w $4d2d  [4D 2D] */
    M68K_OR8(g_m68k.d[7], g_m68k.d[0]);
    /* TODO $143428: dc.w $4d31  [4D 31] */
    M68K_OR8(g_m68k.d[7], g_m68k.d[0]);
    /* TODO $14342C: chk.w -(a7), d6  [4D A7] */
    M68K_OR8(g_m68k.d[7], g_m68k.d[0]);
    /* TODO $143430: chk.w -$7200(a2), d6  [4D AA 8E 00] */
    /* TODO $143434: dc.w $4d2d  [4D 2D] */
    M68K_OR8(g_m68k.d[7], g_m68k.d[0]);
    /* TODO $143438: dc.w $4d31  [4D 31] */
    M68K_OR8(g_m68k.d[7], g_m68k.d[0]);
    /* TODO $14343C: chk.w -(a7), d6  [4D A7] */
    M68K_OR8(g_m68k.d[7], g_m68k.d[0]);
    /* TODO $143440: chk.w -$7200(a2), d6  [4D AA 8E 00] */
    M68K_ADD8(g_m68k.d[6], 0x5);
    M68K_OR8(g_m68k.d[7], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, 0x5); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[7], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, 0x5); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[7], g_m68k.d[0]);
    /* TODO $143450: chk.w -$7200(a2), d6  [4D AA 8E 00] */
    /* TODO $143454: dc.w $4d2d  [4D 2D] */
    M68K_OR8(g_m68k.d[7], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[2] + 0 + (int32_t)g_m68k.a[0] * 8); uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, 0x5); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $146850-$14685C  (6 instructions, 12 bytes) */
void jt_146850(void) {
    { uint32_t _ea = g_m68k.a[6]; uint16_t _tmp = bus_read16(_ea); M68K_SUB16(_tmp, 0x4); bus_write16(_ea, _tmp); }
    M68K_SUBX8(g_m68k.d[1], g_m68k.d[3]);
    g_m68k.a[5] -= 0x4;
    M68K_SUBX8(g_m68k.d[1], g_m68k.d[3]);
    M68K_SUB16(g_m68k.d[4], 0x4);
    M68K_SUBX8(g_m68k.d[1], g_m68k.d[3]);
    /* WARNING: function did not end with RTS */
}

/* $146A00-$146A18  (11 instructions, 24 bytes) */
void jt_146A00(void) {
    bus_write8((g_m68k.a[5] + (-0x7efe)), M68K_CC_VC ? 0xFF : 0x00);
    bus_write8(g_m68k.a[5], M68K_CC_VC ? 0xFF : 0x00);
    /* TODO $146A06: sbcd.b d2, d0  [81 02] */
    bus_write8(g_m68k.a[1], M68K_CC_VC ? 0xFF : 0x00);
    M68K_SUBX8(g_m68k.d[1], g_m68k.d[2]);
    { uint32_t _ea = g_m68k.a[7]; uint16_t _tmp = bus_read16(_ea); M68K_SUB16(_tmp, 0x4); bus_write16(_ea, _tmp); }
    M68K_SUBX8(g_m68k.d[1], g_m68k.d[3]);
    { uint32_t _ea = g_m68k.a[1]; uint16_t _tmp = bus_read16(_ea); M68K_SUB16(_tmp, 0x4); bus_write16(_ea, _tmp); }
    M68K_SUBX8(g_m68k.d[1], g_m68k.d[3]);
    M68K_SUB16(g_m68k.d[7], 0x4);
    M68K_SUBX8(g_m68k.d[1], g_m68k.d[3]);
    /* WARNING: function did not end with RTS */
}

/* $146E00-$146E34  (22 instructions, 52 bytes) */
void jt_146E00(void) {
    bus_write8((g_m68k.a[6] + (-0x7efd)), M68K_CC_VC ? 0xFF : 0x00);
    bus_write8(g_m68k.a[6], M68K_CC_VC ? 0xFF : 0x00);
    /* TODO $146E06: sbcd.b d3, d0  [81 03] */
    bus_write8(g_m68k.a[2], M68K_CC_VC ? 0xFF : 0x00);
    /* TODO $146E0A: sbcd.b d3, d0  [81 03] */
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | (M68K_CC_VC ? 0xFFu : 0x00u);
    M68K_SUBX8(g_m68k.d[1], g_m68k.d[3]);
    { uint32_t _ea = /* UNHANDLED_ADDR: ([a6, a1.w * 2], $58aa9303) */ 0; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, 0x4); bus_write32(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[7]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, 0x4); bus_write32(_ea, _tmp); }
    M68K_SUBX8(g_m68k.d[1], g_m68k.d[3]);
    { uint32_t _ea = g_m68k.a[1]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, 0x4); bus_write32(_ea, _tmp); }
    M68K_SUBX8(g_m68k.d[1], g_m68k.d[3]);
    M68K_ADD32(g_m68k.d[3], 0x4);
    M68K_SUBX8(g_m68k.d[1], g_m68k.d[3]);
    M68K_SUB32(g_m68k.d[6], 0x4);
    /* TODO $146E26: sbcd.b d0, d0  [81 00] */
    g_m68k.a[3] -= 0x4;
    /* TODO $146E2A: sbcd.b d0, d0  [81 00] */
    g_m68k.a[7] -= 0x4;
    /* TODO $146E2E: sbcd.b d0, d0  [81 00] */
    { uint32_t _ea = g_m68k.a[1]; uint32_t _tmp = bus_read32(_ea); M68K_SUB32(_tmp, 0x4); bus_write32(_ea, _tmp); }
    /* TODO $146E32: sbcd.b d0, d0  [81 00] */
    /* WARNING: function did not end with RTS */
}

/* $146F00-$146F0C  (4 instructions, 12 bytes) */
void jt_146F00(void) {
    bus_write8((g_m68k.a[2] + (-0x6cfd)), M68K_CC_VC ? 0xFF : 0x00);
    bus_write8(g_m68k.a[2], M68K_CC_VC ? 0xFF : 0x00);
    M68K_SUBX8(g_m68k.d[1], g_m68k.d[3]);
    if (!(M68K_CC_VC)) { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[6]; _cnt--; g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { func_table_call(0x14020D); return; } }
    /* WARNING: function did not end with RTS */
}

/* $1472A0-$1472B8  (8 instructions, 24 bytes) */
void jt_1472A0(void) {
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFFFF00u) | (M68K_CC_GE ? 0xFFu : 0x00u);
    M68K_OR8(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[3] + (-0x7d00)); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0x6); bus_write16(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[7] + (-0x7d00)); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0x6); bus_write16(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0x6); bus_write16(_ea, _tmp); }
    { uint32_t _ea = 0x008300; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0x6); bus_write16(_ea, _tmp); }
    M68K_ADD8(g_m68k.d[5], 0x6);
    /* TODO $1472B6: sbcd.b d0, d1  [83 00] */
    /* WARNING: function did not end with RTS */
}

/* $149400-$1494AC  (69 instructions, 172 bytes) */
void jt_149400(void) {
    /* TODO $149400: chk.w -$7200(a5), d6  [4D AD 8E 00] */
    /* TODO $149404: dc.w $4d30  [4D 30] */
    M68K_OR8(g_m68k.d[7], g_m68k.d[0]);
    /* TODO $149408: dc.w $4d3a  [4D 3A] */
    /* TODO $14940A: sbcd.b d0, d1  [83 00] */
    /* TODO $14940C: chk.w -$7d00(a1), d6  [4D A9 83 00] */
    /* TODO $149410: chk.w -$7d00(a5), d6  [4D AD 83 00] */
    /* TODO $149414: dc.w $4d30  [4D 30] */
    /* TODO $149416: sbcd.b d0, d1  [83 00] */
    /* TODO $149418: dc.w $4d3a  [4D 3A] */
    /* TODO $14941A: sbcd.b d0, d1  [83 00] */
    /* TODO $14941C: chk.w -$7d00(a1), d6  [4D A9 83 00] */
    /* TODO $149420: chk.w -$7d00(a5), d6  [4D AD 83 00] */
    /* TODO $149424: dc.w $4d2d  [4D 2D] */
    /* TODO $149426: sbcd.b d0, d1  [83 00] */
    /* TODO $149428: dc.w $4d31  [4D 31] */
    /* TODO $14942A: sbcd.b d0, d1  [83 00] */
    /* TODO $14942C: chk.w -(a7), d6  [4D A7] */
    /* TODO $14942E: sbcd.b d0, d1  [83 00] */
    /* TODO $149430: chk.w -$7d00(a2), d6  [4D AA 83 00] */
    /* TODO $149434: dc.w $4d2d  [4D 2D] */
    /* TODO $149436: sbcd.b d0, d1  [83 00] */
    /* TODO $149438: dc.w $4d31  [4D 31] */
    /* TODO $14943A: sbcd.b d0, d1  [83 00] */
    /* TODO $14943C: chk.w -(a7), d6  [4D A7] */
    /* TODO $14943E: sbcd.b d0, d1  [83 00] */
    /* TODO $149440: chk.w -$7d00(a2), d6  [4D AA 83 00] */
    /* TODO $149444: dc.w $4d2d  [4D 2D] */
    /* TODO $149446: sbcd.b d0, d1  [83 00] */
    /* TODO $149448: dc.w $4d31  [4D 31] */
    /* TODO $14944A: sbcd.b d0, d1  [83 00] */
    /* TODO $14944C: chk.w -(a7), d6  [4D A7] */
    /* TODO $14944E: sbcd.b d0, d1  [83 00] */
    /* TODO $149450: chk.w -$7d00(a2), d6  [4D AA 83 00] */
    /* TODO $149454: dc.w $4d2d  [4D 2D] */
    /* TODO $149456: sbcd.b d0, d1  [83 00] */
    /* TODO $149458: dc.w $4d31  [4D 31] */
    /* TODO $14945A: sbcd.b d0, d1  [83 00] */
    /* TODO $14945C: chk.w -(a7), d6  [4D A7] */
    /* TODO $14945E: sbcd.b d0, d1  [83 00] */
    /* TODO $149460: chk.w -$7d00(a2), d6  [4D AA 83 00] */
    /* TODO $149464: dc.w $4d2e  [4D 2E] */
    /* TODO $149466: sbcd.b d0, d1  [83 00] */
    /* TODO $149468: dc.w $4d32  [4D 32] */
    /* TODO $14946A: sbcd.b d0, d1  [83 00] */
    /* TODO $14946C: chk.w -$7d00(a0), d6  [4D A8 83 00] */
    /* TODO $149470: chk.w -$7d00(a3), d6  [4D AB 83 00] */
    /* TODO $149474: dc.w $4d2e  [4D 2E] */
    /* TODO $149476: sbcd.b d0, d1  [83 00] */
    /* TODO $149478: dc.w $4d32  [4D 32] */
    /* TODO $14947A: sbcd.b d0, d1  [83 00] */
    /* TODO $14947C: chk.w -$7d00(a0), d6  [4D A8 83 00] */
    /* TODO $149480: chk.w -$7d00(a3), d6  [4D AB 83 00] */
    /* TODO $149484: dc.w $4d2e  [4D 2E] */
    /* TODO $149486: sbcd.b d0, d1  [83 00] */
    /* TODO $149488: dc.w $4d32  [4D 32] */
    /* TODO $14948A: sbcd.b d0, d1  [83 00] */
    /* TODO $14948C: chk.w -$7d00(a0), d6  [4D A8 83 00] */
    /* TODO $149490: chk.w -$7d00(a3), d6  [4D AB 83 00] */
    /* TODO $149494: dc.w $4d2e  [4D 2E] */
    /* TODO $149496: sbcd.b d0, d1  [83 00] */
    /* TODO $149498: dc.w $4d32  [4D 32] */
    /* TODO $14949A: sbcd.b d0, d1  [83 00] */
    /* TODO $14949C: chk.w -$7d00(a0), d6  [4D A8 83 00] */
    /* TODO $1494A0: chk.w -$7d00(a3), d6  [4D AB 83 00] */
    /* TODO $1494A4: dc.w $4d2f  [4D 2F] */
    /* TODO $1494A6: sbcd.b d0, d1  [83 00] */
    /* TODO $1494A8: dc.w $4d39  [4D 39] */
    /* TODO $1494AA: sbcd.b d0, d1  [83 00] */
    /* WARNING: function did not end with RTS */
}

/* $14C830-$14C834  (2 instructions, 4 bytes) */
void jt_14C830(void) {
    { uint32_t _ea = g_m68k.a[1]; uint32_t _tmp = bus_read32(_ea); M68K_SUB32(_tmp, 0x7); bus_write32(_ea, _tmp); }
    /* TODO $14C832: sbcd.b d1, d0  [81 01] */
    /* WARNING: function did not end with RTS */
}

/* $150016-$150038  (17 instructions, 34 bytes) */
void jt_150016(void) {
    M68K_SUBX8(g_m68k.d[1], g_m68k.d[1]);
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, 0x2); bus_write8(_ea, _tmp); }
loc_15001A:
    M68K_SUBX8(g_m68k.d[1], g_m68k.d[1]);
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, 0x2); bus_write8(_ea, _tmp); }
    M68K_SUBX8(g_m68k.d[1], g_m68k.d[1]);
    if (M68K_CC_CC) goto loc_15001A;
    M68K_SUBX8(g_m68k.d[1], g_m68k.d[0]);
    /* TODO $150024: dc.w $4d2d  [4D 2D] */
    /* TODO $150026: sbcd.b d0, d1  [83 00] */
    /* TODO $150028: dc.w $4d31  [4D 31] */
    /* TODO $15002A: sbcd.b d0, d1  [83 00] */
    /* TODO $15002C: chk.w -(a7), d6  [4D A7] */
    /* TODO $15002E: sbcd.b d0, d1  [83 00] */
    if (M68K_CC_CS) { func_table_call(0x15003F); return; }
    /* TODO $150032: sbcd.b d0, d1  [83 00] */
    { uint32_t _ea = g_m68k.a[2]; uint16_t _tmp = bus_read16(_ea); M68K_SUB16(_tmp, 0x8); bus_write16(_ea, _tmp); }
    /* TODO $150036: sbcd.b d1, d0  [81 01] */
    /* WARNING: function did not end with RTS */
}

/* $1572C0-$1593C8  (23 instructions, 8456 bytes) */
void jt_1572C0(void) {
    /* TODO $1572C0: chk.w -$7d00(a4), d6  [4D AC 83 00] */
    /* TODO $1572C4: dc.w $4d2f  [4D 2F] */
    /* TODO $1572C6: sbcd.b d0, d1  [83 00] */
    /* TODO $1572C8: dc.w $4d39  [4D 39] */
    /* TODO $1572CA: sbcd.b d0, d1  [83 00] */
loc_159122:
    /* TODO $159122: sbcd.b d0, d1  [83 00] */
loc_1593A6:
    /* TODO $1593A6: sbcd.b d0, d1  [83 00] */
    if (M68K_CC_CS) { func_table_call(0x1593DB); return; }
    /* TODO $1593AA: sbcd.b d0, d1  [83 00] */
    if (M68K_CC_CS) { func_table_call(0x1593E9); return; }
    /* TODO $1593AE: sbcd.b d0, d1  [83 00] */
    if (M68K_CC_CS) { func_table_call(0x1593F5); return; }
    /* TODO $1593B2: sbcd.b d0, d1  [83 00] */
    if (M68K_CC_CS) { func_table_call(0x159400); return; }
    /* TODO $1593B6: sbcd.b d0, d1  [83 00] */
    if (M68K_CC_CS) { func_table_call(0x15940C); return; }
    /* TODO $1593BA: sbcd.b d0, d1  [83 00] */
    if (M68K_CC_CS) { func_table_call(0x159418); return; }
    /* TODO $1593BE: sbcd.b d0, d1  [83 00] */
    if (M68K_CC_CS) { func_table_call(0x159424); return; }
    /* TODO $1593C2: sbcd.b d0, d1  [83 00] */
    if (M68K_CC_CS) { func_table_call(0x159429); return; }
    /* TODO $1593C6: sbcd.b d0, d1  [83 00] */
    /* WARNING: function did not end with RTS */
}

/* $159400-$160006  (289 instructions, 27654 bytes) */
void jt_159400(void) {
    /* TODO $159400: chk.w -$7d00(a5), d6  [4D AD 83 00] */
    /* TODO $159404: dc.w $4d30  [4D 30] */
    /* TODO $159406: sbcd.b d0, d1  [83 00] */
    /* TODO $159408: chk.w -$7d00(a1), d6  [4D A9 83 00] */
loc_15940C:
    /* TODO $15940C: chk.w -$7d00(a5), d6  [4D AD 83 00] */
    if (M68K_CC_GE) { func_table_call(0x1593A6); return; }
    /* TODO $159412: sbcd.b d0, d1  [83 00] */
    /* TODO $159414: dc.w $4d30  [4D 30] */
    /* TODO $159416: sbcd.b d0, d1  [83 00] */
loc_159418:
    /* TODO $159418: dc.w $4d3a  [4D 3A] */
    /* TODO $15941A: sbcd.b d0, d1  [83 00] */
    /* TODO $15941C: chk.w -$7d00(a1), d6  [4D A9 83 00] */
    /* TODO $159420: chk.w -$7d00(a5), d6  [4D AD 83 00] */
loc_159424:
    /* TODO $159424: dc.w $4d2d  [4D 2D] */
    /* TODO $159426: sbcd.b d0, d1  [83 00] */
    /* TODO $159428: dc.w $4d31  [4D 31] */
    /* TODO $15942A: sbcd.b d0, d1  [83 00] */
loc_15FDBC:
    /* TODO $15FDBC: dc.w $59fa  [59 FA] */
    /* TODO $15FDBE: sbcd.b d0, d6  [8D 00] */
    M68K_ADD8(g_m68k.d[2], 0x5);
    /* TODO $15FDC2: sbcd.b d0, d6  [8D 00] */
    if (M68K_CC_LE) { func_table_call(0x15FD97); return; }
    M68K_SUBX8(g_m68k.d[2], g_m68k.d[0]);
    if (M68K_CC_LE) { func_table_call(0x15FDA7); return; }
    M68K_SUB8(g_m68k.d[3], g_m68k.d[0]);
    if (M68K_CC_LE) { func_table_call(0x15FDB7); return; }
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    if (M68K_CC_LE) { func_table_call(0x15FDC1); return; }
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    if (M68K_CC_LE) { func_table_call(0x15FE1F); return; }
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
loc_15FDD8:
    if (M68K_CC_LE) { func_table_call(0x15FDCF); return; }
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    if (M68K_CC_LE) goto loc_15FE3A;
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    if (M68K_CC_LE) goto loc_15FE48;
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
loc_15FDE4:
    if (M68K_CC_LE) { func_table_call(0x15FD89); return; }
    /* TODO $15FDE6: sbcd.b d0, d6  [8D 00] */
loc_15FDE8:
    if (M68K_CC_LE) { func_table_call(0x15FD91); return; }
    /* TODO $15FDEA: sbcd.b d0, d6  [8D 00] */
    if (M68K_CC_LE) { func_table_call(0x15FD97); return; }
    /* TODO $15FDEE: sbcd.b d0, d6  [8D 00] */
    if (M68K_CC_LE) { func_table_call(0x15FD9F); return; }
loc_15FDF2:
    /* TODO $15FDF2: sbcd.b d0, d6  [8D 00] */
    if (M68K_CC_LE) { func_table_call(0x15FD99); return; }
    /* TODO $15FDF6: sbcd.b d0, d6  [8D 00] */
loc_15FDF8:
    if (M68K_CC_LE) { func_table_call(0x15FDA1); return; }
    /* TODO $15FDFA: sbcd.b d0, d6  [8D 00] */
    if (M68K_CC_LE) goto loc_15FDBC;
    /* TODO $15FDFE: sbcd.b d0, d6  [8D 00] */
    if (M68K_CC_LE) { func_table_call(0x15FDC9); return; }
loc_15FE02:
    M68K_SUB8(g_m68k.d[3], g_m68k.d[0]);
    if (M68K_CC_LE) goto loc_15FDD8;
    M68K_SUB8(g_m68k.d[3], g_m68k.d[0]);
loc_15FE08:
    if (M68K_CC_LE) goto loc_15FDE8;
loc_15FE0A:
    M68K_SUB8(g_m68k.d[3], g_m68k.d[0]);
    if (M68K_CC_LE) goto loc_15FDF8;
    M68K_SUBX8(g_m68k.d[2], g_m68k.d[0]);
loc_15FE10:
    if (M68K_CC_LE) goto loc_15FE02;
    M68K_SUBX8(g_m68k.d[2], g_m68k.d[0]);
    if (M68K_CC_LE) goto loc_15FE08;
    M68K_SUBX8(g_m68k.d[2], g_m68k.d[0]);
loc_15FE18:
    if (M68K_CC_LE) goto loc_15FE10;
    M68K_SUBX8(g_m68k.d[2], g_m68k.d[0]);
    if (M68K_CC_LE) goto loc_15FE18;
    M68K_SUBX8(g_m68k.d[2], g_m68k.d[0]);
loc_15FE20:
    if (M68K_CC_LE) goto loc_15FE20;
    M68K_SUBX8(g_m68k.d[2], g_m68k.d[0]);
    g_m68k.a[0] += 0x3;
    /* TODO $15FE26: sbcd.b d2, d0  [81 02] */
loc_15FE3A:
    /* TODO $15FE3A: sbcd.b d2, d0  [81 02] */
    if (M68K_CC_LE) { func_table_call(0x15FDFD); return; }
loc_15FE3E:
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    if (M68K_CC_LE) goto loc_15FE0A;
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    if (M68K_CC_LE) { func_table_call(0x15FE19); return; }
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
loc_15FE48:
    if (M68K_CC_LE) { func_table_call(0x15FE29); return; }
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    if (M68K_CC_LE) { func_table_call(0x15FE39); return; }
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    if (M68K_CC_GT) goto loc_15FDE4;
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    if (M68K_CC_GT) goto loc_15FDF2;
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    if (M68K_CC_LE) goto loc_15FEAE;
loc_15FE5A:
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    if (M68K_CC_LE) goto loc_15FEBC;
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    if (M68K_CC_GT) { func_table_call(0x15FE5B); return; }
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[1] += 0x3;
    /* TODO $15FE66: sbcd.b d2, d0  [81 02] */
loc_15FE6A:
    /* TODO $15FE6A: sbcd.b d2, d0  [81 02] */
    { uint32_t _ea = /* UNHANDLED_ADDR: ([a4, a0.w], $5653) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, 0x3); bus_write8(_ea, _tmp); }
loc_15FE72:
    /* TODO $15FE72: sbcd.b d2, d0  [81 02] */
loc_15FE74:
    g_m68k.a[1] += 0x3;
    /* TODO $15FE76: sbcd.b d2, d0  [81 02] */
    if (M68K_CC_LE) { func_table_call(0x15FE31); return; }
loc_15FE7A:
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    if (M68K_CC_LE) goto loc_15FE3E;
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    if (M68K_CC_LE) { func_table_call(0x15FE4B); return; }
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    if (M68K_CC_LE) goto loc_15FE5A;
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    if (M68K_CC_LE) goto loc_15FE6A;
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
loc_15FE8C:
    if (M68K_CC_LE) goto loc_15FE7A;
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    if (M68K_CC_GT) { func_table_call(0x15FE59); return; }
loc_15FE92:
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    if (M68K_CC_GT) { func_table_call(0x15FE69); return; }
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
loc_15FE98:
    if (M68K_CC_GT) { func_table_call(0x15FE79); return; }
loc_15FE9A:
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
loc_15FE9C:
    if (M68K_CC_LE) { func_table_call(0x15FE99); return; }
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    if (M68K_CC_GT) goto loc_15FE9C;
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[2] += 0x3;
    M68K_SUBX8(g_m68k.d[1], g_m68k.d[2]);
loc_15FEAE:
    M68K_SUBX8(g_m68k.d[1], g_m68k.d[3]);
    { uint32_t _ea = g_m68k.a[4]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0x3); bus_write16(_ea, _tmp); }
    M68K_SUBX8(g_m68k.d[1], g_m68k.d[2]);
    g_m68k.a[2] += 0x3;
    M68K_SUBX8(g_m68k.d[1], g_m68k.d[2]);
    if (M68K_CC_LE) goto loc_15FE72;
loc_15FEBA:
    M68K_SUBX8(g_m68k.d[1], g_m68k.d[0]);
loc_15FEBC:
    if (M68K_CC_LE) { func_table_call(0x15FE7F); return; }
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
loc_15FEC0:
    if (M68K_CC_LE) goto loc_15FE8C;
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    if (M68K_CC_LE) { func_table_call(0x15FE9B); return; }
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    if (M68K_CC_LE) { func_table_call(0x15FEAB); return; }
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
loc_15FECC:
    if (M68K_CC_GT) { func_table_call(0x15FE8B); return; }
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    if (M68K_CC_GT) goto loc_15FE9A;
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    if (M68K_CC_GT) goto loc_15FE74;
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    if (M68K_CC_GT) goto loc_15FEBA;
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
loc_15FEDC:
    if (M68K_CC_GT) { func_table_call(0x15FECB); return; }
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
loc_15FEE0:
    if (M68K_CC_GT) { func_table_call(0x15FEDD); return; }
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[3] += 0x3;
    M68K_SUBX8(g_m68k.d[1], g_m68k.d[2]);
    if (M68K_CC_LE) goto loc_15FE92;
loc_15FEEA:
    M68K_SUBX8(g_m68k.d[1], g_m68k.d[0]);
loc_15FEEC:
    if (M68K_CC_LE) goto loc_15FE98;
    M68K_SUBX8(g_m68k.d[1], g_m68k.d[0]);
    { uint16_t _mv = (uint16_t)(bus_read16(0x009300)); bus_write16(g_m68k.a[0] + 0x6fb2, _mv); M68K_TST16(_mv); }
loc_15FEF4:
    if (M68K_CC_LE) { func_table_call(0x15FEA8); return; }
    M68K_SUBX8(g_m68k.d[1], g_m68k.d[0]);
    if (M68K_CC_LE) { func_table_call(0x15FEB3); return; }
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    if (M68K_CC_LE) goto loc_15FEC0;
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    if (M68K_CC_LE) { func_table_call(0x15FECD); return; }
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    if (M68K_CC_LE) goto loc_15FEDC;
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    if (M68K_CC_LE) goto loc_15FEEC;
loc_15FF0A:
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
loc_15FF0C:
    if (M68K_CC_GT) goto loc_15FECC;
loc_15FF0E:
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    if (M68K_CC_GT) { func_table_call(0x15FEDB); return; }
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    if (M68K_CC_GT) goto loc_15FEEA;
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    if (M68K_CC_GT) { func_table_call(0x15FEFB); return; }
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
loc_15FF1C:
    if (M68K_CC_GT) goto loc_15FF0C;
loc_15FF1E:
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    if (M68K_CC_GT) goto loc_15FF1E;
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[3])); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_SUBX8(g_m68k.d[1], g_m68k.d[0]);
    { uint16_t _mv = (uint16_t)(bus_read16(0x93003184)); bus_write16(g_m68k.a[0] + (-0x6d00), _mv); M68K_TST16(_mv); }
loc_15FF2A:
    M68K_SUBX8(g_m68k.d[1], g_m68k.d[0]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[4]); bus_write16(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.a[1] * 2, _mv); M68K_TST16(_mv); }
    if (M68K_CC_LE) goto loc_15FEE0;
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    if (M68K_CC_LE) { func_table_call(0x15FEE9); return; }
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    if (M68K_CC_LE) goto loc_15FEF4;
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
loc_15FF3C:
    if (M68K_CC_LE) { func_table_call(0x15FF01); return; }
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    if (M68K_CC_LE) goto loc_15FF0E;
loc_15FF42:
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    if (M68K_CC_LE) { func_table_call(0x15FF1D); return; }
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    if (M68K_CC_LE) { func_table_call(0x15FF2D); return; }
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    if (M68K_CC_GT) { func_table_call(0x15FF0D); return; }
loc_15FF4E:
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    if (M68K_CC_GT) goto loc_15FF1C;
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    if (M68K_CC_GT) { func_table_call(0x15FF2B); return; }
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    if (M68K_CC_GT) goto loc_15FF3C;
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    if (M68K_CC_GT) { func_table_call(0x15FF4D); return; }
loc_15FF5E:
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    if (M68K_CC_GT) { func_table_call(0x15FF5F); return; }
loc_15FF62:
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    if (M68K_CC_LE) goto loc_15FF0A;
    M68K_SUBX8(g_m68k.d[1], g_m68k.d[0]);
    { uint16_t _mv = (uint16_t)(bus_read16(0x15926a)); bus_write16(g_m68k.a[0] + 0x3185, _mv); M68K_TST16(_mv); }
loc_15FF6C:
    { uint16_t _mv = (uint16_t)(g_m68k.d[5]); bus_write16(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.a[1] * 2, _mv); M68K_TST16(_mv); }
loc_15FF6E:
    M68K_SUBX8(g_m68k.d[1], g_m68k.d[0]);
    if (M68K_CC_LE) { func_table_call(0x15FF21); return; }
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    if (M68K_CC_LE) goto loc_15FF2A;
loc_15FF76:
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    if (M68K_CC_LE) { func_table_call(0x15FF35); return; }
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    if (M68K_CC_LE) goto loc_15FF42;
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    if (M68K_CC_LE) { func_table_call(0x15FF4F); return; }
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    if (M68K_CC_LE) goto loc_15FF5E;
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    if (M68K_CC_LE) goto loc_15FF6E;
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
loc_15FF8C:
    if (M68K_CC_GT) goto loc_15FF4E;
loc_15FF8E:
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
loc_15FF90:
    if (M68K_CC_GT) { func_table_call(0x15FF5D); return; }
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    if (M68K_CC_GT) goto loc_15FF6C;
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    if (M68K_CC_GT) { func_table_call(0x15FF7D); return; }
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    if (M68K_CC_GT) goto loc_15FF8E;
loc_15FF9E:
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
loc_15FFA0:
    if (M68K_CC_GT) goto loc_15FFA0;
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    /* TODO $15FFA4: dc.w $f6ec  [F6 EC] */
    M68K_SUBX8(g_m68k.d[1], g_m68k.d[0]);
    { uint16_t _mv = (uint16_t)(/* UNHANDLED_READ: (a16, a1.w * 2) */ 0); bus_write16(g_m68k.a[0] + 0x6fab, _mv); M68K_TST16(_mv); }
loc_15FFAC:
    if (M68K_CC_LE) { func_table_call(0x15FF59); return; }
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    if (M68K_CC_LE) goto loc_15FF62;
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    if (M68K_CC_LE) { func_table_call(0x15FF6B); return; }
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    if (M68K_CC_LE) goto loc_15FF76;
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    if (M68K_CC_LE) { func_table_call(0x15FF83); return; }
loc_15FFBE:
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    if (M68K_CC_LE) goto loc_15FF90;
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
loc_15FFC4:
    if (M68K_CC_LE) { func_table_call(0x15FF9F); return; }
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    if (M68K_CC_LE) { func_table_call(0x15FFAF); return; }
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    if (M68K_CC_GT) { func_table_call(0x15FF8F); return; }
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
loc_15FFD0:
    if (M68K_CC_GT) goto loc_15FF9E;
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    if (M68K_CC_GT) { func_table_call(0x15FFAD); return; }
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    if (M68K_CC_GT) goto loc_15FFBE;
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    if (M68K_CC_GT) { func_table_call(0x15FFCF); return; }
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
loc_15FFE0:
    /* TODO $15FFE0: dc.w $6eff  [6E FF] */
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    if (M68K_CC_LE) goto loc_15FF8C;
loc_15FFE6:
    M68K_SUBX8(g_m68k.d[1], g_m68k.d[0]);
    { uint16_t _mv = (uint16_t)(0x9300); bus_write16(g_m68k.a[0] + 0x6fac, _mv); M68K_TST16(_mv); }
loc_15FFEE:
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
loc_15FFF0:
    if (M68K_CC_LE) { func_table_call(0x15FFA3); return; }
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    if (M68K_CC_LE) goto loc_15FFAC;
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
loc_15FFF8:
    if (M68K_CC_LE) { func_table_call(0x15FFB7); return; }
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    if (M68K_CC_LE) goto loc_15FFC4;
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    if (M68K_CC_LE) { func_table_call(0x15FFD1); return; }
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    if (M68K_CC_LE) goto loc_15FFE0;
    /* WARNING: function did not end with RTS */
}

/* $160006-$160016  (8 instructions, 16 bytes) */
void jt_160006(void) {
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    if (M68K_CC_LE) { func_table_call(0x15FFF0); return; }
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    if (M68K_CC_GT) { func_table_call(0x15FFD0); return; }
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
loc_160010:
    if (M68K_CC_GT) { func_table_call(0x15FFDF); return; }
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    if (M68K_CC_GT) { func_table_call(0x15FFEE); return; }
    /* WARNING: function did not end with RTS */
}

/* $160016-$160018  (1 instructions, 2 bytes) */
void jt_160016(void) {
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $160018-$160028  (7 instructions, 16 bytes) */
void jt_160018(void) {
    if (M68K_CC_GT) { func_table_call(0x15FFFF); return; }
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    if (M68K_CC_GT) { func_table_call(0x160010); return; }
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    if (M68K_CC_LE) { func_table_call(0x159122); return; }
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[3])); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_SUBX8(g_m68k.d[1], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $160028-$16003A  (8 instructions, 18 bytes) */
void jt_160028(void) {
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[7] + (-0x6cfd)))); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.d[0] = (uint32_t)(int32_t)(int8_t)(0x4); M68K_TST32(g_m68k.d[0]);
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.d[0] = (uint32_t)(int32_t)(int8_t)(0x6); M68K_TST32(g_m68k.d[0]);
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.d[0] = (uint32_t)(int32_t)(int8_t)(0xb); M68K_TST32(g_m68k.d[0]);
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.d[0] = (uint32_t)(int32_t)(int8_t)(0x13); M68K_TST32(g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $16003A-$160066  (22 instructions, 44 bytes) */
void jt_16003A(void) {
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.d[0] = (uint32_t)(int32_t)(int8_t)(0x1e); M68K_TST32(g_m68k.d[0]);
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.d[0] = (uint32_t)(int32_t)(int8_t)(0x28); M68K_TST32(g_m68k.d[0]);
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.d[0] = (uint32_t)(int32_t)(int8_t)(0x32); M68K_TST32(g_m68k.d[0]);
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    if (M68K_CC_LE) { func_table_call(0x16009B); return; }
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    if (M68K_CC_LE) { func_table_call(0x1600A8); return; }
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    if (M68K_CC_LE) { func_table_call(0x1600B6); return; }
loc_160052:
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    if (M68K_CC_LE) { func_table_call(0x1600C3); return; }
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    if (M68K_CC_LE) { func_table_call(0x1600D6); return; }
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    if (M68K_CC_LE) { func_table_call(0x15FFE6); return; }
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    if (M68K_CC_LE) { func_table_call(0x15FFF8); return; }
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    /* TODO $160064: dc.w $f6ed  [F6 ED] */
    /* WARNING: function did not end with RTS */
}

/* $160066-$160068  (1 instructions, 2 bytes) */
void jt_160066(void) {
    M68K_SUBX8(g_m68k.d[1], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $160068-$16006C  (2 instructions, 4 bytes) */
void jt_160068(void) {
    g_m68k.d[0] = (uint32_t)(int32_t)(int8_t)(0x2); M68K_TST32(g_m68k.d[0]);
    M68K_SUBX8(g_m68k.d[1], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $16006C-$16006E  (1 instructions, 2 bytes) */
void jt_16006C(void) {
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(g_m68k.a[2])); M68K_TST16((uint16_t)g_m68k.d[1]);
    /* WARNING: function did not end with RTS */
}

/* $16006E-$160074  (3 instructions, 6 bytes) */
void jt_16006E(void) {
    M68K_SUBX8(g_m68k.d[1], g_m68k.d[0]);
    g_m68k.d[0] = (uint32_t)(int32_t)(int8_t)(0x7); M68K_TST32(g_m68k.d[0]);
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}
