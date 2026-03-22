/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $0D842A - $0E8C52 */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

/* $0D842A-$0D8442  (5 instructions, 24 bytes) */
void jt_0D842A(void) {
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.a[1] * 2)); bus_write32(g_m68k.a[4] + 0x2975, _mv); M68K_TST32(_mv); }
    M68K_SUBX8(g_m68k.d[1], g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(bus_read32(0x9300297E)); bus_write32(g_m68k.a[4] + (-0x6d00), _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(g_m68k.d[2]); bus_write32(g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.a[1] * 2, _mv); M68K_TST32(_mv); }
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[4] + (-0x7bff)))); M68K_TST8((uint8_t)g_m68k.d[3]);
    /* WARNING: function did not end with RTS */
}

/* $0D8440-$0D847E  (18 instructions, 62 bytes) */
void jt_0D8440(void) {
    M68K_OR8(g_m68k.d[2], g_m68k.d[1]);
    { uint32_t _mv = (uint32_t)(g_m68k.a[4]); bus_write32(g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 4, _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[2])); bus_write32(g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 4, _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[5])); bus_write32(g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 4, _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_postinc32(0)); bus_write32(g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 4, _mv); M68K_TST32(_mv); }
    g_m68k.a[4] = g_m68k.a[1];
    M68K_OR8(g_m68k.d[2], g_m68k.d[1]);
    g_m68k.a[4] = g_m68k.a[5];
    M68K_OR8(g_m68k.d[2], g_m68k.d[1]);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[7])); g_m68k.a[3] -= 1; bus_write8(g_m68k.a[3], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[3] + 0x1 + (int16_t)(uint16_t)g_m68k.a[0])); bus_write8(g_m68k.a[2], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(0x840012AC)); bus_write8(g_m68k.a[3] + (-0x7c00), _mv); M68K_TST8(_mv); }
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.a[1] * 2)); bus_write32(g_m68k.a[4] + 0x2976, _mv); M68K_TST32(_mv); }
    M68K_SUBX8(g_m68k.d[1], g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(bus_read32(0xd1774)); bus_write32(g_m68k.a[4] + 0x297f, _mv); M68K_TST32(_mv); }
    M68K_SUBX8(g_m68k.d[1], g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(g_m68k.d[3]); bus_write32(g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.a[1] * 2, _mv); M68K_TST32(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0D882A-$0D882E  (1 instructions, 4 bytes) */
void jt_0D882A(void) {
    { uint8_t _mv = (uint8_t)(g_m68k.d[6]); bus_write8(g_m68k.a[1] + (-0x7c00), _mv); M68K_TST8(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0D8C2A-$0D8C32  (1 instructions, 8 bytes) */
void jt_0D8C2A(void) {
    { uint32_t _mv = (uint32_t)(bus_read32(0x820029C2)); bus_write32(g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2, _mv); M68K_TST32(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0D902A-$0D902E  (1 instructions, 4 bytes) */
void jt_0D902A(void) {
    { uint8_t _mv = (uint8_t)(g_m68k.d[6]); bus_write8(g_m68k.a[1] + (-0x7c00), _mv); M68K_TST8(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0D9400-$0D941E  (12 instructions, 30 bytes) */
void jt_0D9400(void) {
    M68K_OR8(g_m68k.d[1], g_m68k.d[2]);
    { uint8_t _mv = (uint8_t)(_postinc8(5)); bus_write8(g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2, _mv); M68K_TST8(_mv); }
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(5))); M68K_TST8((uint8_t)g_m68k.d[5]);
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(_postinc8(4)); bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(_postinc8(2)); bus_write8(g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2, _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_predec8(4)); bus_write8(g_m68k.a[6], _mv); g_m68k.a[6] += 1; M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(_predec8(3)); bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2)); bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0D942A-$0D943A  (6 instructions, 16 bytes) */
void jt_0D942A(void) {
    g_m68k.d[5] = _postinc32(1); M68K_TST32((uint32_t)g_m68k.d[5]);
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    g_m68k.d[5] = _predec32(6); M68K_TST32((uint32_t)g_m68k.d[5]);
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    g_m68k.d[5] = bus_read32(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2); M68K_TST32((uint32_t)g_m68k.d[5]);
    g_m68k.d[5] = bus_read32(0xd9438 + (int16_t)(uint16_t)g_m68k.a[0] * 2); M68K_TST32((uint32_t)g_m68k.d[5]);
    /* WARNING: function did not end with RTS */
}

/* $0D9C2A-$0D9C36  (2 instructions, 12 bytes) */
void jt_0D9C2A(void) {
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[0] + (-0x6e00))); /* UNHANDLED_WRITE: $92001dbf(d1.l * 4) = _mv */ M68K_TST8(_mv); }
    M68K_SUB8(g_m68k.d[1], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0DA42A-$0DA43E  (8 instructions, 20 bytes) */
void jt_0DA42A(void) {
    { uint8_t _mv = (uint8_t)(_postinc8(2)); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(_postinc8(2)); bus_write8(0x8200F511, _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    /* TODO $0DA436: dc.w $f514  [F5 14] */
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    /* TODO $0DA43A: dc.w $f516  [F5 16] */
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0DA82A-$0DA842  (10 instructions, 24 bytes) */
void jt_0DA82A(void) {
    g_m68k.a[5] = bus_read32(g_m68k.a[6]);
    /* TODO $0DA82C: sbcd.b d0, d0  [81 00] */
    g_m68k.a[5] = bus_read32(g_m68k.a[1]);
    /* TODO $0DA830: sbcd.b d1, d1  [83 01] */
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[1])); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.a[0])); /* UNHANDLED_WRITE: ([a0]) = _mv */ M68K_TST32(_mv); }
    /* TODO $0DA83C: sbcd.b d0, d0  [81 00] */
    g_m68k.a[5] = _predec32(2);
    /* TODO $0DA840: sbcd.b d0, d0  [81 00] */
    /* WARNING: function did not end with RTS */
}

/* $0DAC2A-$0DAC3E  (5 instructions, 20 bytes) */
void jt_0DAC2A(void) {
    g_m68k.a[5] = bus_read32(g_m68k.a[2] + (-0x7f00));
    { uint8_t _mv = (uint8_t)(_postinc8(7)); bus_write8(g_m68k.a[6] + (-0x7c00), _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_predec8(4)); bus_write8(g_m68k.a[6] + (-0x7c00), _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[2] + (-0x7c00))); bus_write8(g_m68k.a[6] + 0x1d70, _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0DB42A-$0DB462  (22 instructions, 56 bytes) */
void jt_0DB42A(void) {
    { uint32_t _mv = (uint32_t)(_postinc32(2)); g_m68k.a[4] -= 4; bus_write32(g_m68k.a[4], _mv); M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[2]);
    { uint32_t _mv = (uint32_t)(g_m68k.a[7]); g_m68k.a[4] -= 4; bus_write32(g_m68k.a[4], _mv); M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[2]);
    { uint32_t _mv = (uint32_t)(g_m68k.d[4]); g_m68k.a[4] -= 4; bus_write32(g_m68k.a[4], _mv); M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[2]);
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[5] + 0x2 + (int16_t)(uint16_t)g_m68k.a[0])); bus_write32(g_m68k.a[4], _mv); g_m68k.a[4] += 4; M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(7)); bus_write32(g_m68k.a[4], _mv); g_m68k.a[4] += 4; M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[2]);
    { uint32_t _mv = (uint32_t)(_postinc32(0)); bus_write32(g_m68k.a[4], _mv); g_m68k.a[4] += 4; M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[2]);
    { uint32_t _mv = (uint32_t)(g_m68k.a[2]); bus_write32(g_m68k.a[4], _mv); g_m68k.a[4] += 4; M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[2]);
    { uint32_t _mv = (uint32_t)(bus_read32(0xdb44a + (int16_t)(uint16_t)g_m68k.a[0])); bus_write32(g_m68k.a[4], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[3] + (-0x7bfe))); bus_write32(g_m68k.a[4], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_postinc32(7)); bus_write32(g_m68k.a[4], _mv); M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[2]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[5] + (-0x7bfe)))); M68K_TST8((uint8_t)g_m68k.d[3]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(_predec8(3))); M68K_TST8((uint8_t)g_m68k.d[3]);
    M68K_OR8(g_m68k.d[2], g_m68k.d[2]);
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[7] + (-0x7bfd))); bus_write32(g_m68k.a[4] + 0x1313, _mv); M68K_TST32(_mv); }
    /* TODO $0DB460: sbcd.b d2, d0  [81 02] */
    /* WARNING: function did not end with RTS */
}

/* $0DB82A-$0DB832  (3 instructions, 8 bytes) */
void jt_0DB82A(void) {
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[7]))); M68K_TST8((uint8_t)g_m68k.d[6]);
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[5] + (-0x7bff)))); M68K_TST8((uint8_t)g_m68k.d[3]);
    /* WARNING: function did not end with RTS */
}

/* $0DC02A-$0DC03A  (8 instructions, 16 bytes) */
void jt_0DC02A(void) {
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[6]))); M68K_TST8((uint8_t)g_m68k.d[6]);
    M68K_OR8(g_m68k.d[2], g_m68k.d[3]);
    { uint32_t _mv = (uint32_t)(_postinc32(1)); g_m68k.a[4] -= 4; bus_write32(g_m68k.a[4], _mv); M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[3]);
    { uint32_t _mv = (uint32_t)(g_m68k.a[6]); g_m68k.a[4] -= 4; bus_write32(g_m68k.a[4], _mv); M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[3]);
    { uint32_t _mv = (uint32_t)(g_m68k.d[3]); g_m68k.a[4] -= 4; bus_write32(g_m68k.a[4], _mv); M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[3]);
    /* WARNING: function did not end with RTS */
}

/* $0DC42A-$0DC48E  (33 instructions, 100 bytes) */
void jt_0DC42A(void) {
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[4] + (-0x7bfe))); bus_write8(g_m68k.a[1], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(0x840214B3)); bus_write8(g_m68k.a[3] + (-0x7bfd), _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[7])); g_m68k.a[3] -= 1; bus_write8(g_m68k.a[3], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[2]);
    g_m68k.a[4] = g_m68k.a[5];
    M68K_OR8(g_m68k.d[2], g_m68k.d[3]);
    g_m68k.a[4] = g_m68k.a[1];
    M68K_OR8(g_m68k.d[2], g_m68k.d[3]);
    { uint32_t _mv = (uint32_t)(_postinc32(0)); bus_write32(g_m68k.a[4] + 0x2 + (int16_t)(uint16_t)g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[5])); bus_write32(g_m68k.a[4] + 0x2 + (int16_t)(uint16_t)g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[2])); bus_write32(g_m68k.a[4] + 0x2 + (int16_t)(uint16_t)g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(g_m68k.a[4]); bus_write32(g_m68k.a[4] + 0x2 + (int16_t)(uint16_t)g_m68k.a[0], _mv); M68K_TST32(_mv); }
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[4] + (-0x7bfd)))); M68K_TST8((uint8_t)g_m68k.d[3]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(_predec8(2))); M68K_TST8((uint8_t)g_m68k.d[3]);
    M68K_OR8(g_m68k.d[2], g_m68k.d[3]);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[2] + 0x2 + (int16_t)(uint16_t)g_m68k.a[0])); bus_write8(0x2B378400, _mv); M68K_TST8(_mv); }
    { uint32_t _mv = (uint32_t)(bus_read32(0x008400)); g_m68k.a[5] -= 4; bus_write32(g_m68k.a[5], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(bus_read32(0xd4868)); g_m68k.a[5] -= 4; bus_write32(g_m68k.a[5], _mv); M68K_TST32(_mv); }
    g_m68k.a[4] = _postinc32(1);
    M68K_OR8(g_m68k.d[2], g_m68k.d[3]);
    g_m68k.a[4] = bus_read32(g_m68k.a[6]);
    M68K_OR8(g_m68k.d[2], g_m68k.d[3]);
    g_m68k.a[4] = bus_read32(g_m68k.a[3]);
    M68K_OR8(g_m68k.d[2], g_m68k.d[3]);
    g_m68k.a[4] = bus_read32(g_m68k.a[0]);
    M68K_OR8(g_m68k.d[2], g_m68k.d[3]);
    g_m68k.a[4] = g_m68k.a[4];
    M68K_OR8(g_m68k.d[2], g_m68k.d[3]);
    g_m68k.a[4] = g_m68k.a[0];
    M68K_OR8(g_m68k.d[2], g_m68k.d[3]);
    { uint32_t _mv = (uint32_t)(_postinc32(1)); bus_write32(g_m68k.a[4] + 0x2 + (int16_t)(uint16_t)g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[6])); bus_write32(g_m68k.a[4] + 0x2 + (int16_t)(uint16_t)g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[3])); bus_write32(g_m68k.a[4] + 0x2 + (int16_t)(uint16_t)g_m68k.a[0], _mv); M68K_TST32(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0DC82A-$0DC82E  (1 instructions, 4 bytes) */
void jt_0DC82A(void) {
    { uint8_t _mv = (uint8_t)(g_m68k.d[5]); bus_write8(g_m68k.a[7] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 4, _mv); M68K_TST8(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0DD02A-$0DD02E  (1 instructions, 4 bytes) */
void jt_0DD02A(void) {
    { uint8_t _mv = (uint8_t)(g_m68k.d[5]); bus_write8(g_m68k.a[7] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 4, _mv); M68K_TST8(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0DDC2A-$0DDC2E  (2 instructions, 4 bytes) */
void jt_0DDC2A(void) {
    { uint8_t _mv = (uint8_t)(g_m68k.d[4]); g_m68k.a[1] -= 1; bus_write8(g_m68k.a[1], _mv); M68K_TST8(_mv); }
    /* TODO $0DDC2C: sbcd.b d0, d0  [81 00] */
    /* WARNING: function did not end with RTS */
}

/* $0DF42A-$0DF452  (13 instructions, 40 bytes) */
void jt_0DF42A(void) {
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[5])); g_m68k.a[1] -= 1; bus_write8(g_m68k.a[1], _mv); M68K_TST8(_mv); }
    /* TODO $0DF42C: sbcd.b d2, d0  [81 02] */
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[3])); g_m68k.a[1] -= 1; bus_write8(g_m68k.a[1], _mv); M68K_TST8(_mv); }
    /* TODO $0DF430: sbcd.b d2, d0  [81 02] */
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[2] + (-0x7c00))); bus_write8(g_m68k.a[2] + 0x1577, _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(g_m68k.d[5]); bus_write8(g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 4, _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[4])); bus_write8(g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 4, _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_predec8(3)); bus_write8(g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 4, _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 4)); bus_write8(g_m68k.a[2] + 0x48 + (int16_t)(uint16_t)g_m68k.d[1], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[3]);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[3])); g_m68k.a[1] -= 1; bus_write8(g_m68k.a[1], _mv); M68K_TST8(_mv); }
    /* TODO $0DF450: sbcd.b d2, d0  [81 02] */
    /* WARNING: function did not end with RTS */
}

/* $0DF82A-$0DF83A  (7 instructions, 16 bytes) */
void jt_0DF82A(void) {
    { uint32_t _mv = (uint32_t)(_predec32(4)); bus_write32(g_m68k.a[3] + (-0x7e00), _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(g_m68k.a[6]); g_m68k.a[2] -= 4; bus_write32(g_m68k.a[2], _mv); M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[2]);
    { uint32_t _mv = (uint32_t)(g_m68k.a[0]); g_m68k.a[2] -= 4; bus_write32(g_m68k.a[2], _mv); M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[2]);
    { uint32_t _mv = (uint32_t)(g_m68k.d[3]); g_m68k.a[2] -= 4; bus_write32(g_m68k.a[2], _mv); M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[2]);
    /* WARNING: function did not end with RTS */
}

/* $0DFC2A-$0DFC3E  (10 instructions, 20 bytes) */
void jt_0DFC2A(void) {
    /* TODO $0DFC2A: dc.w $f64b  [F6 4B] */
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    /* TODO $0DFC2E: dc.w $f64e  [F6 4E] */
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    /* TODO $0DFC32: dc.w $f651  [F6 51] */
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    /* TODO $0DFC36: dc.w $f654  [F6 54] */
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    /* TODO $0DFC3A: dc.w $f4f6  [F4 F6] */
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0E000E-$0E0012  (2 instructions, 4 bytes) */
void jt_0E000E(void) {
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[6])); bus_write8(g_m68k.a[1], _mv); M68K_TST8(_mv); }
    /* TODO $0E0010: sbcd.b d2, d0  [81 02] */
    /* WARNING: function did not end with RTS */
}

/* $0E002A-$0E0040  (10 instructions, 22 bytes) */
void jt_0E002A(void) {
    { uint8_t _mv = (uint8_t)(g_m68k.d[5]); bus_write8(g_m68k.a[3], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[3]);
    { uint32_t _mv = (uint32_t)(_postinc32(7)); bus_write32(g_m68k.a[2], _mv); g_m68k.a[2] += 4; M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[3]);
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[4])); bus_write32(g_m68k.a[2], _mv); g_m68k.a[2] += 4; M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[3]);
    { uint32_t _mv = (uint32_t)(g_m68k.d[6]); bus_write32(g_m68k.a[2], _mv); g_m68k.a[2] += 4; M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[3]);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[4] + (-0x7bfe))); bus_write8(g_m68k.a[1], _mv); M68K_TST8(_mv); }
    g_m68k.a[5] = bus_read32(g_m68k.a[0]);
    /* WARNING: function did not end with RTS */
}

/* $0E0040-$0E0052  (8 instructions, 18 bytes) */
void jt_0E0040(void) {
    /* TODO $0E0040: sbcd.b d1, d0  [81 01] */
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[6])); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(g_m68k.d[5]); bus_write8(g_m68k.a[4] + (-0x7c00), _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_predec8(4)); g_m68k.a[1] -= 1; bus_write8(g_m68k.a[1], _mv); M68K_TST8(_mv); }
    /* TODO $0E004C: sbcd.b d3, d0  [81 03] */
    { uint8_t _mv = (uint8_t)(_predec8(3)); g_m68k.a[1] -= 1; bus_write8(g_m68k.a[1], _mv); M68K_TST8(_mv); }
    /* TODO $0E0050: sbcd.b d3, d0  [81 03] */
    /* WARNING: function did not end with RTS */
}

/* $0E042A-$0E043A  (6 instructions, 16 bytes) */
void jt_0E042A(void) {
    g_m68k.a[1] = _predec32(4);
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    g_m68k.a[1] = bus_read32(g_m68k.a[7] + (-0x7c00));
    g_m68k.a[1] = bus_read32(g_m68k.a[7] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 4);
    { uint32_t _mv = (uint32_t)(g_m68k.d[2]); bus_write32(g_m68k.a[1], _mv); M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0E082A-$0E083E  (9 instructions, 20 bytes) */
void jt_0E082A(void) {
    /* TODO $0E082A: dc.w $f65a  [F6 5A] */
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    /* TODO $0E082E: dc.w $f65d  [F6 5D] */
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    /* TODO $0E0832: dc.w $f660  [F6 60] */
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    /* TODO $0E0836: dc.w $f663  [F6 63] */
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(0x2); bus_write8(g_m68k.a[1], _mv); M68K_TST8(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0E0C2A-$0E0C46  (9 instructions, 28 bytes) */
void jt_0E0C2A(void) {
    { uint8_t _mv = (uint8_t)(bus_read8(0xe0c2e + (int16_t)(uint16_t)g_m68k.a[0])); bus_write8(g_m68k.a[1], _mv); g_m68k.a[1] += 1; M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[5] + (-0x7dfe))); bus_write8(g_m68k.a[3], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[4])); bus_write8(g_m68k.a[1], _mv); g_m68k.a[1] += 1; M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[2]);
    { uint8_t _mv = (uint8_t)(g_m68k.d[7]); bus_write8(g_m68k.a[1], _mv); g_m68k.a[1] += 1; M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[2]);
    { uint8_t _mv = (uint8_t)(0x2); bus_write8(g_m68k.a[1], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(0x008402)); bus_write8(g_m68k.a[1], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[4] + (-0x7bfe))); bus_write8(g_m68k.a[1], _mv); M68K_TST8(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0E0E00-$0E0E06  (2 instructions, 6 bytes) */
void jt_0E0E00(void) {
    M68K_OR8(g_m68k.d[2], g_m68k.d[2]);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[2] + 0x2 + (int16_t)(uint16_t)g_m68k.a[0])); bus_write8(g_m68k.a[1], _mv); M68K_TST8(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0E102A-$0E1032  (4 instructions, 8 bytes) */
void jt_0E102A(void) {
    /* TODO $0E102A: dc.w $f679  [F6 79] */
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[4])); bus_write8(g_m68k.a[1], _mv); g_m68k.a[1] += 1; M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0E142A-$0E1482  (25 instructions, 88 bytes) */
void jt_0E142A(void) {
    { uint32_t _mv = (uint32_t)(_postinc32(4)); bus_write32(g_m68k.a[4] + 0x1 + (int16_t)(uint16_t)g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2)); /* UNHANDLED_WRITE: ([$82002db7], d2.l * 4, $aaaa) = _mv */ M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(bus_read32(0x820029A6)); bus_write32(g_m68k.a[6] + 0x1 + (int16_t)(uint16_t)g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(5)); bus_write8(g_m68k.a[5] + 0x1 + (int16_t)(uint16_t)g_m68k.a[0], _mv); M68K_TST8(_mv); }
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(5))); M68K_TST8((uint8_t)g_m68k.d[5]);
    M68K_OR8(g_m68k.d[1], g_m68k.d[1]);
    { uint8_t _mv = (uint8_t)(_postinc8(4)); bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[1]);
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[6] + (-0x7dff))); /* UNHANDLED_WRITE: $820129b2(d2.l) = _mv */ M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[1]);
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[4] + 0x1 + (int16_t)(uint16_t)g_m68k.a[0])); bus_write32(g_m68k.a[4] + (-0x6f) + (int16_t)(uint16_t)g_m68k.a[7], _mv); M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    /* TODO $0E1462: dc.w $f696  [F6 96] */
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    /* TODO $0E1466: dc.w $f69b  [F6 9B] */
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(_postinc8(5)); bus_write8(g_m68k.a[6], _mv); g_m68k.a[6] += 1; M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[1]);
    { uint8_t _mv = (uint8_t)(_predec8(1)); bus_write8(g_m68k.a[6], _mv); g_m68k.a[6] += 1; M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[1]);
    { uint8_t _mv = (uint8_t)(_predec8(4)); bus_write8(g_m68k.a[6], _mv); g_m68k.a[6] += 1; M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[1]);
    { uint32_t _mv = (uint32_t)(bus_read32(0x008200)); /* UNHANDLED_WRITE: ([$82002dbb, d2.l * 4], $aaaa) = _mv */ M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0E202A-$0E2066  (18 instructions, 60 bytes) */
void jt_0E202A(void) {
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[1])); bus_write8(0x820013DA, _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(_postinc8(7)); bus_write8(0x820013E7, _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[6] + (-0x7e00))); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2)); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(0x008200)); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_predec8(7)); bus_write8(0x8200191A, _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(_postinc8(2)); bus_write8(0x82002E1E, _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    g_m68k.d[7] = _predec32(6); M68K_TST32((uint32_t)g_m68k.d[7]);
    /* TODO $0E2058: sbcd.b d0, d0  [81 00] */
    g_m68k.d[7] = bus_read32(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.a[0]); M68K_TST32((uint32_t)g_m68k.d[7]);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[6])); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(_postinc8(1)); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0E23C8-$0E23D2  (4 instructions, 10 bytes) */
void jt_0E23C8(void) {
    /* TODO $0E23C8: sbcd.b d3, d0  [81 03] */
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[1])); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(g_m68k.d[4]); bus_write8(g_m68k.a[4] + (-0x7c00), _mv); M68K_TST8(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0E242A-$0E243A  (8 instructions, 16 bytes) */
void jt_0E242A(void) {
    g_m68k.a[7] = g_m68k.d[5];
    /* TODO $0E242C: sbcd.b d0, d0  [81 00] */
    g_m68k.a[7] = g_m68k.a[4];
    /* TODO $0E2430: sbcd.b d0, d0  [81 00] */
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[3])); g_m68k.a[1] -= 1; bus_write8(g_m68k.a[1], _mv); M68K_TST8(_mv); }
    /* TODO $0E2434: sbcd.b d0, d0  [81 00] */
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[5])); g_m68k.a[1] -= 1; bus_write8(g_m68k.a[1], _mv); M68K_TST8(_mv); }
    /* TODO $0E2438: sbcd.b d0, d0  [81 00] */
    /* WARNING: function did not end with RTS */
}

/* $0E282A-$0E287A  (23 instructions, 80 bytes) */
void jt_0E282A(void) {
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[6] + (-0x7c00))); /* UNHANDLED_WRITE: ([$840013bb, d1.w * 2]) = _mv */ M68K_TST8(_mv); }
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
    { uint8_t _mv = (uint8_t)(bus_read8(0xdaa58)); bus_write8(g_m68k.a[4], _mv); g_m68k.a[4] += 1; M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[2]); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(g_m68k.d[7]); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(_postinc8(7)); bus_write8(0x820013CD, _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[3]);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[7] + (-0x7c00))); /* UNHANDLED_WRITE: ([$840013bc, d1.w * 2], $aaaa) = _mv */ M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[1])); bus_write8(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 4, _mv); M68K_TST8(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0E2C2A-$0E2C56  (11 instructions, 44 bytes) */
void jt_0E2C2A(void) {
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[1])); bus_write8(0x820013DA, _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(_postinc8(7)); bus_write8(0x820013E7, _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[6] + (-0x7e00))); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2)); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(0x008200)); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_predec8(7)); bus_write8(0x8200191A, _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(_postinc8(2)); bus_write8(0x820013CC, _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[3]);
    /* WARNING: function did not end with RTS */
}

/* $0E3400-$0E340E  (4 instructions, 14 bytes) */
void jt_0E3400(void) {
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[1] + (-0x7c00))); bus_write32(g_m68k.a[7], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[2] + (-0x7c00))); bus_write32(g_m68k.a[7], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[4] + (-0x7c00))); bus_write32(g_m68k.a[7], _mv); M68K_TST32(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0E442A-$0E443E  (8 instructions, 20 bytes) */
void jt_0E442A(void) {
    { uint8_t _mv = (uint8_t)(_postinc8(2)); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(_postinc8(2)); bus_write8(0x8200F511, _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    /* TODO $0E4436: dc.w $f6a1  [F6 A1] */
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    /* TODO $0E443A: dc.w $f516  [F5 16] */
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0E502A-$0E503E  (8 instructions, 20 bytes) */
void jt_0E502A(void) {
    { uint8_t _mv = (uint8_t)(_postinc8(2)); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(_postinc8(2)); bus_write8(0x8200F511, _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    /* TODO $0E5036: dc.w $f514  [F5 14] */
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    /* TODO $0E503A: dc.w $f516  [F5 16] */
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0E582A-$0E583E  (5 instructions, 20 bytes) */
void jt_0E582A(void) {
    g_m68k.a[5] = bus_read32(g_m68k.a[2] + (-0x7f00));
    { uint8_t _mv = (uint8_t)(_postinc8(7)); bus_write8(g_m68k.a[6] + (-0x7c00), _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_predec8(4)); bus_write8(g_m68k.a[6] + (-0x7c00), _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[2] + (-0x7c00))); bus_write8(g_m68k.a[6] + 0x1d70, _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0E5C2A-$0E5C5A  (16 instructions, 48 bytes) */
void jt_0E5C2A(void) {
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[4])); bus_write8(0x820113D9, _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[1]);
    { uint8_t _mv = (uint8_t)(_predec8(2)); bus_write8(0x820113E6, _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[1]);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[4])); bus_write8(0x820113CC, _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[2]);
    { uint8_t _mv = (uint8_t)(g_m68k.d[7]); bus_write8(0x84021AD4, _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(_postinc8(1)); bus_write8(g_m68k.a[5], _mv); g_m68k.a[5] += 1; M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(g_m68k.d[1]); bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[1]);
    { uint8_t _mv = (uint8_t)(_predec8(3)); g_m68k.a[1] -= 1; bus_write8(g_m68k.a[1], _mv); M68K_TST8(_mv); }
    /* TODO $0E5C54: sbcd.b d1, d0  [81 01] */
    { uint8_t _mv = (uint8_t)(_predec8(4)); g_m68k.a[1] -= 1; bus_write8(g_m68k.a[1], _mv); M68K_TST8(_mv); }
    /* TODO $0E5C58: sbcd.b d1, d0  [81 01] */
    /* WARNING: function did not end with RTS */
}

/* $0E6000-$0E6002  (1 instructions, 2 bytes) */
void jt_0E6000(void) {
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0E602A-$0E603A  (6 instructions, 16 bytes) */
void jt_0E602A(void) {
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(6))); M68K_TST8((uint8_t)g_m68k.d[5]);
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFFFF00u) | ((uint8_t)(_predec8(7))); M68K_TST8((uint8_t)g_m68k.d[5]);
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[7] + (-0x7e00))); bus_write8(g_m68k.a[3], _mv); M68K_TST8(_mv); }
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[6] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2))); M68K_TST8((uint8_t)g_m68k.d[5]);
    /* WARNING: function did not end with RTS */
}

/* $0E642A-$0E643A  (8 instructions, 16 bytes) */
void jt_0E642A(void) {
    g_m68k.a[7] = g_m68k.d[5];
    /* TODO $0E642C: sbcd.b d0, d0  [81 00] */
    g_m68k.a[7] = g_m68k.a[4];
    /* TODO $0E6430: sbcd.b d0, d0  [81 00] */
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[3])); g_m68k.a[1] -= 1; bus_write8(g_m68k.a[1], _mv); M68K_TST8(_mv); }
    /* TODO $0E6434: sbcd.b d0, d0  [81 00] */
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[5])); g_m68k.a[1] -= 1; bus_write8(g_m68k.a[1], _mv); M68K_TST8(_mv); }
    /* TODO $0E6438: sbcd.b d0, d0  [81 00] */
    /* WARNING: function did not end with RTS */
}

/* $0E682A-$0E687A  (20 instructions, 80 bytes) */
void jt_0E682A(void) {
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[6] + (-0x7c00))); /* UNHANDLED_WRITE: ([$840013bb, d1.w * 2]) = _mv */ M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(g_m68k.d[6]); bus_write8(0x84001393, _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[0])); bus_write8(0x82003030, _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(g_m68k.d[3]); bus_write8(g_m68k.a[4], _mv); g_m68k.a[4] += 1; M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2))); M68K_TST16((uint16_t)g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(_predec8(1)); bus_write8(g_m68k.a[4], _mv); g_m68k.a[4] += 1; M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[7] + (-0x7e00))); bus_write8(g_m68k.a[4], _mv); g_m68k.a[4] += 1; M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(0xdea58)); bus_write8(g_m68k.a[4], _mv); g_m68k.a[4] += 1; M68K_TST8(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x008200))); M68K_TST16((uint16_t)g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[7] + (-0x7c00))); /* UNHANDLED_WRITE: ([$840013bc, d1.w * 2], $aaaa) = _mv */ M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[1])); bus_write8(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 4, _mv); M68K_TST8(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0E6C2A-$0E6C56  (11 instructions, 44 bytes) */
void jt_0E6C2A(void) {
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[1])); bus_write8(0x820013DA, _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(_postinc8(7)); bus_write8(0x820013E7, _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[6] + (-0x7e00))); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2)); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(0x008200)); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_predec8(7)); bus_write8(0x8200191A, _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(_postinc8(2)); bus_write8(0x820013CC, _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[3]);
    /* WARNING: function did not end with RTS */
}

/* $0E702A-$0E702E  (1 instructions, 4 bytes) */
void jt_0E702A(void) {
    { uint8_t _mv = (uint8_t)(g_m68k.d[5]); bus_write8(g_m68k.a[7] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 4, _mv); M68K_TST8(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0E71E0-$0E722A  (31 instructions, 74 bytes) */
void jt_0E71E0(void) {
    M68K_OR8(g_m68k.d[6], g_m68k.d[0]);
    { uint16_t _mv = (uint16_t)(g_m68k.a[4]); bus_write16(g_m68k.a[0], _mv); g_m68k.a[0] += 2; M68K_TST16(_mv); }
    M68K_OR8(g_m68k.d[6], g_m68k.d[0]);
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[6])); bus_write16(g_m68k.a[0], _mv); g_m68k.a[0] += 2; M68K_TST16(_mv); }
    M68K_OR8(g_m68k.d[6], g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x8400)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.a[0] = (uint32_t)(int32_t)(int16_t)(uint16_t)(g_m68k.d[5]);
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    g_m68k.a[0] = (uint32_t)(int32_t)(int16_t)(uint16_t)(g_m68k.a[6]);
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    g_m68k.a[0] = (uint32_t)(int32_t)(int16_t)(uint16_t)(bus_read16(g_m68k.a[6]));
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[7]))); M68K_TST8((uint8_t)g_m68k.d[6]);
    M68K_OR8(g_m68k.d[2], g_m68k.d[3]);
    g_m68k.a[0] = (uint32_t)(int32_t)(int16_t)(uint16_t)(_predec16(7));
    M68K_OR8(g_m68k.d[6], g_m68k.d[0]);
    g_m68k.a[0] = (uint32_t)(int32_t)(int16_t)(uint16_t)(bus_read16(g_m68k.a[0] + 0 + (int32_t)g_m68k.a[0] * 4));
    g_m68k.a[0] = (uint32_t)(int32_t)(int16_t)(uint16_t)(bus_read16(0x8C003083));
    M68K_OR8(g_m68k.d[6], g_m68k.d[0]);
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[1])); bus_write16(g_m68k.a[0], _mv); M68K_TST16(_mv); }
    M68K_OR8(g_m68k.d[6], g_m68k.d[0]);
    { uint16_t _mv = (uint16_t)(_postinc16(5)); bus_write16(g_m68k.a[0], _mv); M68K_TST16(_mv); }
    M68K_OR8(g_m68k.d[6], g_m68k.d[0]);
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[3] + (-0x7400))); bus_write16(g_m68k.a[0], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[7] + 0 + (int32_t)g_m68k.a[0] * 4)); bus_write16(g_m68k.a[0], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); bus_write16(g_m68k.a[0], _mv); g_m68k.a[0] += 2; M68K_TST16(_mv); }
    M68K_OR8(g_m68k.d[6], g_m68k.d[0]);
    { uint16_t _mv = (uint16_t)(g_m68k.a[5]); bus_write16(g_m68k.a[0], _mv); g_m68k.a[0] += 2; M68K_TST16(_mv); }
    M68K_OR8(g_m68k.d[6], g_m68k.d[0]);
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[7])); bus_write16(g_m68k.a[0], _mv); g_m68k.a[0] += 2; M68K_TST16(_mv); }
    M68K_OR8(g_m68k.d[6], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0E742A-$0E74B6  (44 instructions, 140 bytes) */
void jt_0E742A(void) {
    { uint16_t _mv = (uint16_t)(_predec16(0)); bus_write16(g_m68k.a[0], _mv); g_m68k.a[0] += 2; M68K_TST16(_mv); }
    /* TODO $0E742C: sbcd.b d0, d4  [89 00] */
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[1] + (-0x7700))); bus_write16(g_m68k.a[0], _mv); g_m68k.a[0] += 2; M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[2] + 0 + (int32_t)g_m68k.a[0])); bus_write16(g_m68k.a[0], _mv); g_m68k.a[0] += 2; M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(/* UNHANDLED_READ: (a16, a0.l) */ 0); bus_write16(g_m68k.a[0], _mv); g_m68k.a[0] += 2; M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[3]); g_m68k.a[0] -= 2; bus_write16(g_m68k.a[0], _mv); M68K_TST16(_mv); }
    /* TODO $0E743C: sbcd.b d0, d4  [89 00] */
    { uint16_t _mv = (uint16_t)(g_m68k.a[3]); g_m68k.a[0] -= 2; bus_write16(g_m68k.a[0], _mv); M68K_TST16(_mv); }
    /* TODO $0E7440: sbcd.b d0, d4  [89 00] */
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[4])); g_m68k.a[0] -= 2; bus_write16(g_m68k.a[0], _mv); M68K_TST16(_mv); }
    /* TODO $0E7444: sbcd.b d0, d2  [85 00] */
    { uint16_t _mv = (uint16_t)(_postinc16(6)); g_m68k.a[0] -= 2; bus_write16(g_m68k.a[0], _mv); M68K_TST16(_mv); }
    /* TODO $0E7448: sbcd.b d0, d2  [85 00] */
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[1] + (-0x7400))); g_m68k.a[0] -= 2; bus_write16(g_m68k.a[0], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[0] + 0 + (int32_t)g_m68k.a[0] * 4)); g_m68k.a[0] -= 2; bus_write16(g_m68k.a[0], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(0x008C00)); g_m68k.a[0] -= 2; bus_write16(g_m68k.a[0], _mv); M68K_TST16(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[0])); bus_write8(g_m68k.a[2] + 0 + (int32_t)g_m68k.a[0] * 4, _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(7)); bus_write8(g_m68k.a[2] + 0 + (int32_t)g_m68k.a[0] * 4, _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[6] + (-0x7400))); /* UNHANDLED_WRITE: ([$8c00315b], d1.w * 4) = _mv */ M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[6], g_m68k.d[0]);
    { uint16_t _mv = (uint16_t)(_predec16(1)); bus_write16(g_m68k.a[0], _mv); g_m68k.a[0] += 2; M68K_TST16(_mv); }
    /* TODO $0E746C: sbcd.b d0, d4  [89 00] */
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[2] + (-0x7700))); bus_write16(g_m68k.a[0], _mv); g_m68k.a[0] += 2; M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[3] + 0 + (int32_t)g_m68k.a[0])); bus_write16(g_m68k.a[0], _mv); g_m68k.a[0] += 2; M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x8900); bus_write16(g_m68k.a[0], _mv); g_m68k.a[0] += 2; M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[4]); g_m68k.a[0] -= 2; bus_write16(g_m68k.a[0], _mv); M68K_TST16(_mv); }
    /* TODO $0E747C: sbcd.b d0, d4  [89 00] */
    { uint16_t _mv = (uint16_t)(g_m68k.a[4]); g_m68k.a[0] -= 2; bus_write16(g_m68k.a[0], _mv); M68K_TST16(_mv); }
    /* TODO $0E7480: sbcd.b d0, d4  [89 00] */
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[5])); g_m68k.a[0] -= 2; bus_write16(g_m68k.a[0], _mv); M68K_TST16(_mv); }
    /* TODO $0E7484: sbcd.b d0, d2  [85 00] */
    { uint16_t _mv = (uint16_t)(_postinc16(7)); g_m68k.a[0] -= 2; bus_write16(g_m68k.a[0], _mv); M68K_TST16(_mv); }
    /* TODO $0E7488: sbcd.b d0, d2  [85 00] */
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[2] + (-0x7400))); g_m68k.a[0] -= 2; bus_write16(g_m68k.a[0], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[1] + 0 + (int32_t)g_m68k.a[0] * 4)); g_m68k.a[0] -= 2; bus_write16(g_m68k.a[0], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(0x8C001591)); g_m68k.a[0] -= 2; bus_write16(g_m68k.a[0], _mv); M68K_TST16(_mv); }
    M68K_OR8(g_m68k.d[6], g_m68k.d[0]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[4]); bus_write16(g_m68k.a[0] + (-0x7400), _mv); M68K_TST16(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[7] + (-0x7400))); /* UNHANDLED_WRITE: ([$8c00315c], d1.w * 4, $aaaa) = _mv */ M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[6], g_m68k.d[0]);
    { uint16_t _mv = (uint16_t)(_predec16(2)); bus_write16(g_m68k.a[0], _mv); g_m68k.a[0] += 2; M68K_TST16(_mv); }
    /* TODO $0E74AC: sbcd.b d0, d4  [89 00] */
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[3] + (-0x7700))); bus_write16(g_m68k.a[0], _mv); g_m68k.a[0] += 2; M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[4] + 0 + (int32_t)g_m68k.a[0])); bus_write16(g_m68k.a[0], _mv); g_m68k.a[0] += 2; M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0E7C2A-$0E7C42  (11 instructions, 24 bytes) */
void jt_0E7C2A(void) {
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[3])); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(g_m68k.a[1])); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[0]))); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_OR8(g_m68k.d[6], g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(_postinc16(0))); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_OR8(g_m68k.d[6], g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(_predec16(1))); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_OR8(g_m68k.d[6], g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + (-0x7400)))); M68K_TST16((uint16_t)g_m68k.d[1]);
    /* WARNING: function did not end with RTS */
}

/* $0E8C2A-$0E8C52  (15 instructions, 40 bytes) */
void jt_0E8C2A(void) {
    { uint8_t _mv = (uint8_t)(_postinc8(2)); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(_postinc8(2)); bus_write8(0x820013DF, _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[2])); bus_write8(0x8200277B, _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[1]);
    { uint8_t _mv = (uint8_t)(g_m68k.d[6]); bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[3]);
    { uint8_t _mv = (uint8_t)(_predec8(0)); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[0])); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(g_m68k.d[3]); bus_write8(g_m68k.a[4] + (-0x7c00), _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(3)); g_m68k.a[2] -= 1; bus_write8(g_m68k.a[2], _mv); M68K_TST8(_mv); }
    /* TODO $0E8C50: sbcd.b d0, d0  [81 00] */
    /* WARNING: function did not end with RTS */
}
