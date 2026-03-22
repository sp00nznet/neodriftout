/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $0C802A - $0D8056 */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

/* $0C802A-$0C805A  (16 instructions, 48 bytes) */
void jt_0C802A(void) {
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[4])); bus_write8(0x820113D9, _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[1]);
    { uint8_t _mv = (uint8_t)(_predec8(2)); bus_write8(0x8201F490, _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[1]);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[4])); bus_write8(0x82012E13, _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[1]);
    { uint8_t _mv = (uint8_t)(g_m68k.d[7]); bus_write8(0x84021AD4, _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(_postinc8(1)); bus_write8(g_m68k.a[5], _mv); g_m68k.a[5] += 1; M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(g_m68k.d[1]); bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[1]);
    { uint8_t _mv = (uint8_t)(_predec8(3)); g_m68k.a[1] -= 1; bus_write8(g_m68k.a[1], _mv); M68K_TST8(_mv); }
    /* TODO $0C8054: sbcd.b d1, d0  [81 01] */
    { uint8_t _mv = (uint8_t)(_predec8(4)); g_m68k.a[1] -= 1; bus_write8(g_m68k.a[1], _mv); M68K_TST8(_mv); }
    /* TODO $0C8058: sbcd.b d1, d0  [81 01] */
    /* WARNING: function did not end with RTS */
}

/* $0C8400-$0C8402  (1 instructions, 2 bytes) */
void jt_0C8400(void) {
    M68K_OR8(g_m68k.d[1], g_m68k.d[1]);
    /* WARNING: function did not end with RTS */
}

/* $0C882A-$0C882E  (1 instructions, 4 bytes) */
void jt_0C882A(void) {
    { uint8_t _mv = (uint8_t)(g_m68k.d[6]); bus_write8(g_m68k.a[1] + (-0x7c00), _mv); M68K_TST8(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0C8C2A-$0C8C3A  (3 instructions, 16 bytes) */
void jt_0C8C2A(void) {
    { uint8_t _mv = (uint8_t)(_postinc8(7)); bus_write8(g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2, _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[2] + (-0x7e00))); /* UNHANDLED_WRITE: ([$82001bbf], d1.l * 2) = _mv */ M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0C902A-$0C903E  (10 instructions, 20 bytes) */
void jt_0C902A(void) {
    /* TODO $0C902A: dc.w $f4ea  [F4 EA] */
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    /* TODO $0C902E: dc.w $f4ed  [F4 ED] */
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    /* TODO $0C9032: dc.w $f4f0  [F4 F0] */
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    /* TODO $0C9036: dc.w $f4f3  [F4 F3] */
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    /* TODO $0C903A: dc.w $f4f6  [F4 F6] */
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0C906C-$0C907E  (9 instructions, 18 bytes) */
void jt_0C906C(void) {
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    /* TODO $0C906E: dc.w $f4ee  [F4 EE] */
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    /* TODO $0C9072: dc.w $f4f1  [F4 F1] */
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    /* TODO $0C9076: dc.w $f4f4  [F4 F4] */
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    /* TODO $0C907A: dc.w $f4f7  [F4 F7] */
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0C9400-$0C9402  (1 instructions, 2 bytes) */
void jt_0C9400(void) {
    M68K_OR8(g_m68k.d[1], g_m68k.d[1]);
    /* WARNING: function did not end with RTS */
}

/* $0C942A-$0C942E  (1 instructions, 4 bytes) */
void jt_0C942A(void) {
    { uint8_t _mv = (uint8_t)(g_m68k.d[3]); bus_write8(g_m68k.a[5] + (-0x7dff), _mv); M68K_TST8(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0C982A-$0C982E  (1 instructions, 4 bytes) */
void jt_0C982A(void) {
    { uint8_t _mv = (uint8_t)(g_m68k.d[6]); bus_write8(g_m68k.a[1] + (-0x7c00), _mv); M68K_TST8(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0C9C2A-$0C9C5E  (21 instructions, 52 bytes) */
void jt_0C9C2A(void) {
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[4])); bus_write8(g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2, _mv); M68K_TST8(_mv); }
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[0]))); M68K_TST8((uint8_t)g_m68k.d[5]);
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[4]))); M68K_TST8((uint8_t)g_m68k.d[5]);
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(2))); M68K_TST8((uint8_t)g_m68k.d[5]);
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[4])); bus_write8(g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2, _mv); M68K_TST8(_mv); }
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[0]))); M68K_TST8((uint8_t)g_m68k.d[5]);
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[4]))); M68K_TST8((uint8_t)g_m68k.d[5]);
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(2))); M68K_TST8((uint8_t)g_m68k.d[5]);
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2)); bus_write8(g_m68k.a[6], _mv); g_m68k.a[6] += 1; M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2)); bus_write8(g_m68k.a[6], _mv); g_m68k.a[6] += 1; M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(0xc9c54 + (int16_t)(uint16_t)g_m68k.a[0] * 2)); bus_write8(g_m68k.a[6], _mv); g_m68k.a[6] += 1; M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(g_m68k.d[5]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0CA02A-$0CA03E  (8 instructions, 20 bytes) */
void jt_0CA02A(void) {
    { uint8_t _mv = (uint8_t)(_postinc8(2)); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(_postinc8(2)); bus_write8(0x8200F511, _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    /* TODO $0CA036: dc.w $f514  [F5 14] */
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    /* TODO $0CA03A: dc.w $f516  [F5 16] */
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0CA42A-$0CA43A  (7 instructions, 16 bytes) */
void jt_0CA42A(void) {
    { uint8_t _mv = (uint8_t)(_postinc8(7)); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(_predec8(5)); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[1])); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(g_m68k.d[4]); bus_write8(g_m68k.a[4] + (-0x7c00), _mv); M68K_TST8(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0CA8A0-$0CA8AA  (3 instructions, 10 bytes) */
void jt_0CA8A0(void) {
    /* TODO $0CA8A0: sbcd.b d0, d0  [81 00] */
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.a[0])); g_m68k.a[1] -= 1; bus_write8(g_m68k.a[1], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[1] + (-0x7f00))); g_m68k.a[1] -= 1; bus_write8(g_m68k.a[1], _mv); M68K_TST8(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0CB02A-$0CB036  (2 instructions, 12 bytes) */
void jt_0CB02A(void) {
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[0] + (-0x6e00))); /* UNHANDLED_WRITE: $92001dbf(d1.l * 4) = _mv */ M68K_TST8(_mv); }
    M68K_SUB8(g_m68k.d[1], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0CBC2A-$0CBC42  (11 instructions, 24 bytes) */
void jt_0CBC2A(void) {
    /* TODO $0CBC2A: dc.w $f52f  [F5 2F] */
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    /* TODO $0CBC2E: dc.w $f533  [F5 33] */
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[7] + (-0x7dfe))); bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_predec8(0)); bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[2]);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[0])); bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[2]);
    { uint8_t _mv = (uint8_t)(g_m68k.d[2]); bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[2]);
    /* WARNING: function did not end with RTS */
}

/* $0CC42A-$0CC436  (6 instructions, 12 bytes) */
void jt_0CC42A(void) {
    /* TODO $0CC42A: dc.w $f559  [F5 59] */
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    /* TODO $0CC42E: dc.w $f55e  [F5 5E] */
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[3]))); M68K_TST8((uint8_t)g_m68k.d[5]);
    M68K_OR8(g_m68k.d[1], g_m68k.d[3]);
    /* WARNING: function did not end with RTS */
}

/* $0CCC2A-$0CCC3E  (9 instructions, 20 bytes) */
void jt_0CCC2A(void) {
    /* TODO $0CCC2A: dc.w $f52f  [F5 2F] */
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    /* TODO $0CCC2E: dc.w $f533  [F5 33] */
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[0]))); M68K_TST8((uint8_t)g_m68k.d[5]);
    M68K_OR8(g_m68k.d[1], g_m68k.d[2]);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[4])); bus_write8(g_m68k.a[5] + 0x2 + (int16_t)(uint16_t)g_m68k.a[0], _mv); M68K_TST8(_mv); }
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(2))); M68K_TST8((uint8_t)g_m68k.d[5]);
    M68K_OR8(g_m68k.d[1], g_m68k.d[2]);
    /* WARNING: function did not end with RTS */
}

/* $0CD02A-$0CD02E  (1 instructions, 4 bytes) */
void jt_0CD02A(void) {
    { uint8_t _mv = (uint8_t)(g_m68k.d[5]); bus_write8(g_m68k.a[7] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 4, _mv); M68K_TST8(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0CD42A-$0CD42E  (2 instructions, 4 bytes) */
void jt_0CD42A(void) {
    /* TODO $0CD42A: dc.w $f559  [F5 59] */
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0CD46A-$0CD46E  (2 instructions, 4 bytes) */
void jt_0CD46A(void) {
    /* TODO $0CD46A: dc.w $f55a  [F5 5A] */
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0CE42A-$0CE432  (1 instructions, 8 bytes) */
void jt_0CE42A(void) {
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[0] + (-0x7c00))); bus_write8(0x13F48400, _mv); M68K_TST8(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0CE860-$0CE86A  (4 instructions, 10 bytes) */
void jt_0CE860(void) {
    /* TODO $0CE860: sbcd.b d0, d0  [81 00] */
    { uint32_t _mv = (uint32_t)(_predec32(5)); bus_write32(g_m68k.a[0], _mv); g_m68k.a[0] += 4; M68K_TST32(_mv); }
    /* TODO $0CE864: sbcd.b d0, d0  [81 00] */
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[3])); bus_write8(g_m68k.a[1] + 0x1 + (int16_t)(uint16_t)g_m68k.a[0], _mv); M68K_TST8(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0CF02A-$0CF02E  (1 instructions, 4 bytes) */
void jt_0CF02A(void) {
    { uint8_t _mv = (uint8_t)(g_m68k.d[6]); bus_write8(g_m68k.a[1] + (-0x7c00), _mv); M68K_TST8(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0CF42A-$0CF45E  (13 instructions, 52 bytes) */
void jt_0CF42A(void) {
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[4])); bus_write8(g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2, _mv); M68K_TST8(_mv); }
    { uint32_t _mv = (uint32_t)(0x82002140); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(g_m68k.d[3]); bus_write32(g_m68k.a[0] + (-0x7e00), _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(g_m68k.d[7]); bus_write32(g_m68k.a[0] + (-0x7e00), _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(g_m68k.a[3]); bus_write32(g_m68k.a[0] + (-0x7e00), _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(g_m68k.a[7]); bus_write32(g_m68k.a[0] + (-0x7e00), _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[3])); bus_write32(g_m68k.a[0] + (-0x7e00), _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[7])); bus_write32(g_m68k.a[0] + (-0x7e00), _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_postinc32(3)); bus_write32(g_m68k.a[0] + (-0x7e00), _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_postinc32(7)); bus_write32(g_m68k.a[0] + (-0x7e00), _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(3)); bus_write32(g_m68k.a[0] + (-0x7e00), _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(7)); bus_write32(g_m68k.a[0] + (-0x7e00), _mv); M68K_TST32(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0CF898-$0CF89A  (1 instructions, 2 bytes) */
void jt_0CF898(void) {
    /* TODO $0CF898: sbcd.b d0, d0  [81 00] */
    /* WARNING: function did not end with RTS */
}

/* $0D0002-$0D000E  (4 instructions, 12 bytes) */
void jt_0D0002(void) {
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[7] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 4)); bus_write8(g_m68k.a[4] + 0x13bc, _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[2]);
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(1))); M68K_TST8((uint8_t)g_m68k.d[7]);
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0D0010-$0D001A  (5 instructions, 10 bytes) */
void jt_0D0010(void) {
    /* TODO $0D0010: sbcd.b d0, d0  [81 00] */
    { uint8_t _mv = (uint8_t)(_predec8(3)); g_m68k.a[1] -= 1; bus_write8(g_m68k.a[1], _mv); M68K_TST8(_mv); }
    /* TODO $0D0014: sbcd.b d0, d0  [81 00] */
    { uint8_t _mv = (uint8_t)(_predec8(4)); g_m68k.a[1] -= 1; bus_write8(g_m68k.a[1], _mv); M68K_TST8(_mv); }
    /* TODO $0D0018: sbcd.b d0, d0  [81 00] */
    /* WARNING: function did not end with RTS */
}

/* $0D0020-$0D002A  (5 instructions, 10 bytes) */
void jt_0D0020(void) {
    /* TODO $0D0020: sbcd.b d0, d0  [81 00] */
    { uint8_t _mv = (uint8_t)(_predec8(3)); g_m68k.a[1] -= 1; bus_write8(g_m68k.a[1], _mv); M68K_TST8(_mv); }
    /* TODO $0D0024: sbcd.b d0, d0  [81 00] */
    { uint8_t _mv = (uint8_t)(_predec8(4)); g_m68k.a[1] -= 1; bus_write8(g_m68k.a[1], _mv); M68K_TST8(_mv); }
    /* TODO $0D0028: sbcd.b d0, d0  [81 00] */
    /* WARNING: function did not end with RTS */
}

/* $0D00A8-$0D00AA  (1 instructions, 2 bytes) */
void jt_0D00A8(void) {
    /* TODO $0D00A8: sbcd.b d0, d0  [81 00] */
    /* WARNING: function did not end with RTS */
}

/* $0D00C0-$0D00DA  (11 instructions, 26 bytes) */
void jt_0D00C0(void) {
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(_predec8(2)); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[6])); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.a[0])); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(5)); g_m68k.a[2] -= 1; bus_write8(g_m68k.a[2], _mv); M68K_TST8(_mv); }
    /* TODO $0D00D0: sbcd.b d0, d0  [81 00] */
    { uint8_t _mv = (uint8_t)(_predec8(6)); g_m68k.a[2] -= 1; bus_write8(g_m68k.a[2], _mv); M68K_TST8(_mv); }
    /* TODO $0D00D4: sbcd.b d0, d0  [81 00] */
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[1])); bus_write8(g_m68k.a[6] + (-0x7f00), _mv); M68K_TST8(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0D042A-$0D045A  (13 instructions, 48 bytes) */
void jt_0D042A(void) {
    { uint32_t _mv = (uint32_t)(bus_read32(0xc882d)); bus_write32(g_m68k.a[0] + 0x2180, _mv); M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[1]);
    { uint32_t _mv = (uint32_t)(g_m68k.d[3]); bus_write32(g_m68k.a[0] + 0x1 + (int16_t)(uint16_t)g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.a[0])); /* UNHANDLED_WRITE: ([a0]) = _mv */ M68K_TST32(_mv); }
    /* TODO $0D043C: sbcd.b d0, d0  [81 00] */
    { uint32_t _mv = (uint32_t)(g_m68k.a[0]); bus_write32(0x008100, _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[4])); bus_write32(0x008100, _mv); M68K_TST32(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.a[0])); bus_write8(g_m68k.a[2], _mv); g_m68k.a[2] += 1; M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(0x008100)); bus_write8(g_m68k.a[2], _mv); g_m68k.a[2] += 1; M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[6] + 0 + (int16_t)(uint16_t)g_m68k.a[0])); bus_write8(g_m68k.a[7] + 0x21e2, _mv); M68K_TST8(_mv); }
    /* TODO $0D0454: sbcd.b d0, d0  [81 00] */
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[5])); g_m68k.a[1] -= 1; bus_write8(g_m68k.a[1], _mv); M68K_TST8(_mv); }
    /* TODO $0D0458: sbcd.b d0, d0  [81 00] */
    /* WARNING: function did not end with RTS */
}

/* $0D0C2A-$0D0C3A  (7 instructions, 16 bytes) */
void jt_0D0C2A(void) {
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[7] + (-0x7dfe))); bus_write8(g_m68k.a[3], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_predec8(1)); bus_write8(g_m68k.a[3], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[2]);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[1])); bus_write8(g_m68k.a[3], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[2]);
    { uint8_t _mv = (uint8_t)(g_m68k.d[1]); bus_write8(g_m68k.a[3], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[2]);
    /* WARNING: function did not end with RTS */
}

/* $0D0D00-$0D0D02  (1 instructions, 2 bytes) */
void jt_0D0D00(void) {
    M68K_OR8(g_m68k.d[2], g_m68k.d[2]);
    /* WARNING: function did not end with RTS */
}

/* $0D142A-$0D143A  (6 instructions, 16 bytes) */
void jt_0D142A(void) {
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[3] + 0x3 + (int16_t)(uint16_t)g_m68k.a[0]))); M68K_TST8((uint8_t)g_m68k.d[3]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[1] + (-0x7dfd)))); M68K_TST8((uint8_t)g_m68k.d[3]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(7))); M68K_TST8((uint8_t)g_m68k.d[3]);
    M68K_OR8(g_m68k.d[1], g_m68k.d[3]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[5]))); M68K_TST8((uint8_t)g_m68k.d[3]);
    M68K_OR8(g_m68k.d[1], g_m68k.d[3]);
    /* WARNING: function did not end with RTS */
}

/* $0D18E0-$0D18E2  (1 instructions, 2 bytes) */
void jt_0D18E0(void) {
    M68K_OR8(g_m68k.d[2], g_m68k.d[1]);
    /* WARNING: function did not end with RTS */
}

/* $0D202A-$0D2056  (9 instructions, 44 bytes) */
void jt_0D202A(void) {
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[1])); bus_write8(0x820013DA, _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(_predec32(6)); bus_write32(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2, _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(7)); bus_write32(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2, _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[1] + (-0x7e00))); /* UNHANDLED_WRITE: ([$8200], d2.w * 2) = _mv */ M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[7] + (-0x7e00))); /* UNHANDLED_WRITE: $820023b4(d2.w * 2) = _mv */ M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(_postinc8(2)); bus_write8(0x820013CC, _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[3]);
    /* WARNING: function did not end with RTS */
}

/* $0D242A-$0D2446  (7 instructions, 28 bytes) */
void jt_0D242A(void) {
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[4])); bus_write8(0x820113D9, _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[1]);
    { uint8_t _mv = (uint8_t)(_predec8(2)); bus_write8(0x8201F490, _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[1]);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[4])); bus_write8(0x82012E13, _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[1]);
    { uint8_t _mv = (uint8_t)(bus_read8(0xd2445 + (int16_t)(uint16_t)g_m68k.a[0])); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0D2C2A-$0D2C32  (1 instructions, 8 bytes) */
void jt_0D2C2A(void) {
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.a[0])); bus_write32(0x20DB8100, _mv); M68K_TST32(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0D482A-$0D482E  (1 instructions, 4 bytes) */
void jt_0D482A(void) {
    { uint8_t _mv = (uint8_t)(g_m68k.d[6]); bus_write8(g_m68k.a[1] + (-0x7c00), _mv); M68K_TST8(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0D4C2A-$0D4C56  (16 instructions, 44 bytes) */
void jt_0D4C2A(void) {
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[4])); bus_write8(g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2, _mv); M68K_TST8(_mv); }
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[0]))); M68K_TST8((uint8_t)g_m68k.d[5]);
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[4]))); M68K_TST8((uint8_t)g_m68k.d[5]);
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(2))); M68K_TST8((uint8_t)g_m68k.d[5]);
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[4])); bus_write8(g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2, _mv); M68K_TST8(_mv); }
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[0]))); M68K_TST8((uint8_t)g_m68k.d[5]);
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[4]))); M68K_TST8((uint8_t)g_m68k.d[5]);
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(2))); M68K_TST8((uint8_t)g_m68k.d[5]);
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2)); /* UNHANDLED_WRITE: ([$820025bb], d2.w * 4, $aaaa) = _mv */ M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0D542A-$0D542E  (2 instructions, 4 bytes) */
void jt_0D542A(void) {
    /* TODO $0D542A: dc.w $f52f  [F5 2F] */
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0D5C2A-$0D5C46  (9 instructions, 28 bytes) */
void jt_0D5C2A(void) {
    { uint32_t _mv = (uint32_t)(g_m68k.a[5]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(_postinc32(1)); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[1] + 0x2 + (int16_t)(uint16_t)g_m68k.a[0])); bus_write8(g_m68k.a[5] + 0x272e, _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2)); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(bus_read32(0xd5c40 + (int16_t)(uint16_t)g_m68k.a[0] * 2)); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(g_m68k.d[7]); bus_write32(g_m68k.a[3] + (-0x7e00), _mv); M68K_TST32(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0D602A-$0D603E  (5 instructions, 20 bytes) */
void jt_0D602A(void) {
    { uint32_t _mv = (uint32_t)(g_m68k.d[6]); bus_write32(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 4, _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_postinc32(1)); bus_write32(0x84002792, _mv); M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(_postinc32(1)); bus_write32(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 4, _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_postinc32(7)); bus_write32(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 4, _mv); M68K_TST32(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0D682A-$0D6866  (20 instructions, 60 bytes) */
void jt_0D682A(void) {
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[6] + (-0x7c00))); /* UNHANDLED_WRITE: ([$840027b7, d2.w * 8], $aaaaaaaa) = _mv */ M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(g_m68k.d[6]); bus_write8(0x84001393, _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[0])); bus_write8(0x820018B3, _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(g_m68k.d[3]); bus_write8(g_m68k.a[4], _mv); g_m68k.a[4] += 1; M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[3])); bus_write8(g_m68k.a[4], _mv); g_m68k.a[4] += 1; M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(_predec8(1)); bus_write8(g_m68k.a[4], _mv); g_m68k.a[4] += 1; M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[7] + (-0x7e00))); bus_write8(g_m68k.a[4], _mv); g_m68k.a[4] += 1; M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(0xcea58)); bus_write8(g_m68k.a[4], _mv); g_m68k.a[4] += 1; M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[2]); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(g_m68k.d[7]); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(_predec8(4)); bus_write8(g_m68k.a[3], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[3]);
    /* WARNING: function did not end with RTS */
}

/* $0D6C2A-$0D6C66  (24 instructions, 60 bytes) */
void jt_0D6C2A(void) {
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[3] + (-0x7dff))); bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[0] + 0x1 + (int16_t)(uint16_t)g_m68k.a[0])); bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(bus_read32(0x008201)); bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(g_m68k.d[2]); bus_write32(g_m68k.a[3], _mv); g_m68k.a[3] += 4; M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[1]);
    { uint32_t _mv = (uint32_t)(g_m68k.a[2]); bus_write32(g_m68k.a[3], _mv); g_m68k.a[3] += 4; M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[1]);
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[3])); bus_write32(g_m68k.a[3], _mv); g_m68k.a[3] += 4; M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[1]);
    { uint32_t _mv = (uint32_t)(g_m68k.d[6]); bus_write32(g_m68k.a[1], _mv); g_m68k.a[1] += 4; M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[3]);
    { uint32_t _mv = (uint32_t)(g_m68k.d[1]); bus_write32(g_m68k.a[1], _mv); g_m68k.a[1] += 4; M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[3]);
    { uint32_t _mv = (uint32_t)(0x820322b6); bus_write32(g_m68k.a[1], _mv); M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[3]);
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[7] + (-0x7bff))); bus_write32(g_m68k.a[3], _mv); g_m68k.a[3] += 4; M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(g_m68k.d[7]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[1]);
    { uint32_t _mv = (uint32_t)(g_m68k.a[2]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[1]);
    { uint32_t _mv = (uint32_t)(g_m68k.a[4]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[1]);
    { uint8_t _mv = (uint8_t)(_predec8(3)); g_m68k.a[1] -= 1; bus_write8(g_m68k.a[1], _mv); M68K_TST8(_mv); }
    /* TODO $0D6C64: sbcd.b d1, d0  [81 01] */
    /* WARNING: function did not end with RTS */
}

/* $0D71C0-$0D71C2  (1 instructions, 2 bytes) */
void jt_0D71C0(void) {
    /* TODO $0D71C0: sbcd.b d0, d0  [81 00] */
    /* WARNING: function did not end with RTS */
}

/* $0D742A-$0D7482  (35 instructions, 88 bytes) */
void jt_0D742A(void) {
    g_m68k.a[4] = _postinc32(2);
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    g_m68k.a[4] = _predec32(4);
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    g_m68k.a[4] = bus_read32(g_m68k.a[6] + (-0x7c00));
    g_m68k.a[4] = bus_read32(0xcf838);
    { uint32_t _mv = (uint32_t)(g_m68k.d[6]); bus_write32(g_m68k.a[4], _mv); M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[5] + (-0x7c00)))); M68K_TST8((uint8_t)g_m68k.d[3]);
    { uint32_t _mv = (uint32_t)(_postinc32(7)); bus_write32(g_m68k.a[4], _mv); M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[3] + (-0x7c00))); bus_write32(g_m68k.a[4], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(bus_read32(0xd744c + (int16_t)(uint16_t)g_m68k.a[0] * 4)); bus_write32(g_m68k.a[4], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(g_m68k.a[2]); bus_write32(g_m68k.a[4], _mv); g_m68k.a[4] += 4; M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(_postinc32(0)); bus_write32(g_m68k.a[4], _mv); g_m68k.a[4] += 4; M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(_predec32(7)); bus_write32(g_m68k.a[4], _mv); g_m68k.a[4] += 4; M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 4)); bus_write32(g_m68k.a[4], _mv); g_m68k.a[4] += 4; M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(g_m68k.d[4]); g_m68k.a[4] -= 4; bus_write32(g_m68k.a[4], _mv); M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(g_m68k.a[7]); g_m68k.a[4] -= 4; bus_write32(g_m68k.a[4], _mv); M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(_postinc32(2)); g_m68k.a[4] -= 4; bus_write32(g_m68k.a[4], _mv); M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    g_m68k.a[4] = _postinc32(3);
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    g_m68k.a[4] = _predec32(5);
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    g_m68k.a[4] = bus_read32(g_m68k.a[7] + (-0x7c00));
    g_m68k.a[4] = bus_read32(0xd7478 + (int16_t)(uint16_t)g_m68k.a[0] * 4);
    { uint32_t _mv = (uint32_t)(g_m68k.d[7]); bus_write32(g_m68k.a[4], _mv); M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[6] + (-0x7c00)))); M68K_TST8((uint8_t)g_m68k.d[3]);
    /* WARNING: function did not end with RTS */
}

/* $0D782A-$0D7852  (11 instructions, 40 bytes) */
void jt_0D782A(void) {
    { uint32_t _mv = (uint32_t)(_predec32(4)); g_m68k.a[4] -= 4; bus_write32(g_m68k.a[4], _mv); M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[1] + (-0x7e00))); g_m68k.a[4] -= 4; bus_write32(g_m68k.a[4], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2)); g_m68k.a[4] -= 4; bus_write32(g_m68k.a[4], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(0x82002941); g_m68k.a[4] -= 4; bus_write32(g_m68k.a[4], _mv); M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(g_m68k.d[7]); bus_write32(g_m68k.a[4] + (-0x7e00), _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(g_m68k.a[6]); bus_write32(g_m68k.a[4] + (-0x7e00), _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[5])); bus_write32(g_m68k.a[4] + (-0x7e00), _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_postinc32(1)); bus_write32(g_m68k.a[4] + (-0x7e00), _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_postinc32(3)); bus_write32(g_m68k.a[4] + (-0x7e00), _mv); M68K_TST32(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0D7C2A-$0D7C2E  (2 instructions, 4 bytes) */
void jt_0D7C2A(void) {
    /* TODO $0D7C2A: dc.w $f4ea  [F4 EA] */
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0D802A-$0D8056  (17 instructions, 44 bytes) */
void jt_0D802A(void) {
    g_m68k.a[4] = _predec32(3);
    M68K_OR8(g_m68k.d[1], g_m68k.d[1]);
    g_m68k.a[4] = bus_read32(g_m68k.a[5] + (-0x7dff));
    g_m68k.a[4] = bus_read32(0x82012885);
    M68K_OR8(g_m68k.d[1], g_m68k.d[1]);
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[2])); bus_write32(g_m68k.a[4], _mv); M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[1]);
    { uint32_t _mv = (uint32_t)(_postinc32(6)); bus_write32(g_m68k.a[4], _mv); M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[1]);
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[2] + (-0x7dff))); bus_write32(g_m68k.a[4], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(bus_read32(0xd0249)); bus_write32(g_m68k.a[4], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(g_m68k.a[1]); bus_write32(g_m68k.a[4], _mv); g_m68k.a[4] += 4; M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[1]);
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[7])); bus_write32(g_m68k.a[4], _mv); g_m68k.a[4] += 4; M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[1]);
    { uint32_t _mv = (uint32_t)(_predec32(6)); bus_write32(g_m68k.a[4], _mv); g_m68k.a[4] += 4; M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[1]);
    /* WARNING: function did not end with RTS */
}
