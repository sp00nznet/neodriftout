/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $0EDC2A - $0F4AB0 */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

/* $0EDC2A-$0EDC3A  (6 instructions, 16 bytes) */
void jt_0EDC2A(void) {
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[3] + 0x3 + (int16_t)(uint16_t)g_m68k.a[0]))); M68K_TST8((uint8_t)g_m68k.d[3]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[1] + (-0x7dfd)))); M68K_TST8((uint8_t)g_m68k.d[3]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(7))); M68K_TST8((uint8_t)g_m68k.d[3]);
    M68K_OR8(g_m68k.d[1], g_m68k.d[3]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[5]))); M68K_TST8((uint8_t)g_m68k.d[3]);
    M68K_OR8(g_m68k.d[1], g_m68k.d[3]);
    /* WARNING: function did not end with RTS */
}

/* $0EE02A-$0EE03E  (9 instructions, 20 bytes) */
void jt_0EE02A(void) {
    /* TODO $0EE02A: dc.w $f4ea  [F4 EA] */
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    /* TODO $0EE02E: dc.w $f4ed  [F4 ED] */
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    /* TODO $0EE032: dc.w $f4f0  [F4 F0] */
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    /* TODO $0EE036: dc.w $f4f3  [F4 F3] */
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(0x2); bus_write8(g_m68k.a[1], _mv); M68K_TST8(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0EE42A-$0EE43E  (7 instructions, 20 bytes) */
void jt_0EE42A(void) {
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[4])); bus_write8(g_m68k.a[1], _mv); g_m68k.a[1] += 1; M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(_predec8(3)); bus_write8(g_m68k.a[1], _mv); g_m68k.a[1] += 1; M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2)); bus_write8(g_m68k.a[1], _mv); g_m68k.a[1] += 1; M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[2] + (-0x7dff))); bus_write8(g_m68k.a[3] + 0x30 + (int16_t)(uint16_t)g_m68k.d[3], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0EE82A-$0EE83E  (7 instructions, 20 bytes) */
void jt_0EE82A(void) {
    { uint8_t _mv = (uint8_t)(g_m68k.d[7]); bus_write8(g_m68k.a[1], _mv); g_m68k.a[1] += 1; M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[4])); bus_write8(g_m68k.a[1], _mv); g_m68k.a[1] += 1; M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[5] + (-0x7e00))); bus_write8(g_m68k.a[3], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[2] + (-0x7dff))); bus_write8(g_m68k.a[3] + 0xf + (int16_t)(uint16_t)g_m68k.d[3], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[1]);
    /* WARNING: function did not end with RTS */
}

/* $0EEC2A-$0EEC2E  (2 instructions, 4 bytes) */
void jt_0EEC2A(void) {
    { uint8_t _mv = (uint8_t)(g_m68k.d[4]); g_m68k.a[1] -= 1; bus_write8(g_m68k.a[1], _mv); M68K_TST8(_mv); }
    /* TODO $0EEC2C: sbcd.b d0, d0  [81 00] */
    /* WARNING: function did not end with RTS */
}

/* $0EF02A-$0EF07A  (35 instructions, 80 bytes) */
void jt_0EF02A(void) {
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
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(6))); M68K_TST8((uint8_t)g_m68k.d[6]);
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[1]))); M68K_TST8((uint8_t)g_m68k.d[5]);
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(_predec8(4)); bus_write8(g_m68k.a[6], _mv); g_m68k.a[6] += 1; M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(_postinc32(1)); bus_write32(g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2, _mv); M68K_TST32(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0EF82A-$0EF83E  (9 instructions, 20 bytes) */
void jt_0EF82A(void) {
    /* TODO $0EF82A: dc.w $f52f  [F5 2F] */
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    /* TODO $0EF82E: dc.w $f533  [F5 33] */
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[0]))); M68K_TST8((uint8_t)g_m68k.d[5]);
    M68K_OR8(g_m68k.d[1], g_m68k.d[2]);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[4])); bus_write8(g_m68k.a[5] + 0x2 + (int16_t)(uint16_t)g_m68k.a[0], _mv); M68K_TST8(_mv); }
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(2))); M68K_TST8((uint8_t)g_m68k.d[5]);
    M68K_OR8(g_m68k.d[1], g_m68k.d[2]);
    /* WARNING: function did not end with RTS */
}

/* $0EFC2A-$0EFC36  (5 instructions, 12 bytes) */
void jt_0EFC2A(void) {
    { uint8_t _mv = (uint8_t)(_postinc8(2)); g_m68k.a[3] -= 1; bus_write8(g_m68k.a[3], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(_postinc8(5)); g_m68k.a[3] -= 1; bus_write8(g_m68k.a[3], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[0] + (-0x7c00))); g_m68k.a[3] -= 1; bus_write8(g_m68k.a[3], _mv); M68K_TST8(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0EFEE2-$0EFEEA  (2 instructions, 8 bytes) */
void jt_0EFEE2(void) {
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[6])); bus_write8(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 4, _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(2)); bus_write8(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 4, _mv); M68K_TST8(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0EFFF4-$0EFFF6  (1 instructions, 2 bytes) */
void jt_0EFFF4(void) {
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0EFFF6-$0F0002  (3 instructions, 12 bytes) */
void jt_0EFFF6(void) {
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(1))); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 4)); bus_write8(0x125D8400, _mv); M68K_TST8(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0F0004-$0F0012  (4 instructions, 14 bytes) */
void jt_0F0004(void) {
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(1))); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 4)); bus_write8(0x125D8400, _mv); M68K_TST8(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0F0010-$0F0012  (1 instructions, 2 bytes) */
void jt_0F0010(void) {
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F0060-$0F006A  (3 instructions, 10 bytes) */
void jt_0F0060(void) {
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[5] + (-0x7e00))); bus_write8(g_m68k.a[3], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(0xf0068 + (int16_t)(uint16_t)g_m68k.a[0] * 2)); bus_write8(g_m68k.a[1], _mv); g_m68k.a[1] += 1; M68K_TST8(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0F0640-$0F0642  (1 instructions, 2 bytes) */
void jt_0F0640(void) {
    /* TODO $0F0640: sbcd.b d0, d2  [85 00] */
    /* WARNING: function did not end with RTS */
}

/* $0F082A-$0F088A  (31 instructions, 96 bytes) */
void jt_0F082A(void) {
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[3] + (-0x7400)))); M68K_TST16((uint16_t)g_m68k.d[4]);
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[5] + (-0x7400)))); M68K_TST16((uint16_t)g_m68k.d[4]);
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[7] + (-0x7400)))); M68K_TST16((uint16_t)g_m68k.d[4]);
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[1] + 0 + (int32_t)g_m68k.a[0] * 4))); M68K_TST16((uint16_t)g_m68k.d[4]);
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[3] + 0 + (int32_t)g_m68k.a[0] * 4))); M68K_TST16((uint16_t)g_m68k.d[4]);
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[5] + 0 + (int32_t)g_m68k.a[0] * 4))); M68K_TST16((uint16_t)g_m68k.d[4]);
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[7] + 0 + (int32_t)g_m68k.a[0] * 4))); M68K_TST16((uint16_t)g_m68k.d[4]);
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x8C00383D))); M68K_TST16((uint16_t)g_m68k.d[4]);
    M68K_OR8(g_m68k.d[6], g_m68k.d[0]);
    g_m68k.a[4] = (uint32_t)(int32_t)(int16_t)(uint16_t)(g_m68k.d[3]);
    /* TODO $0F0850: sbcd.b d0, d3  [87 00] */
    g_m68k.a[4] = (uint32_t)(int32_t)(int16_t)(uint16_t)(g_m68k.a[1]);
    M68K_OR8(g_m68k.d[4], g_m68k.d[0]);
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(g_m68k.a[7])); M68K_TST16((uint16_t)g_m68k.d[4]);
    M68K_OR8(g_m68k.d[4], g_m68k.d[0]);
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[1]))); M68K_TST16((uint16_t)g_m68k.d[4]);
    /* TODO $0F085C: sbcd.b d0, d1  [83 00] */
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[1]))); M68K_TST16((uint16_t)g_m68k.d[4]);
    /* TODO $0F0860: sbcd.b d0, d1  [83 00] */
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[1]))); M68K_TST16((uint16_t)g_m68k.d[4]);
    /* TODO $0F0864: sbcd.b d0, d1  [83 00] */
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[1]))); M68K_TST16((uint16_t)g_m68k.d[4]);
    /* TODO $0F0868: sbcd.b d0, d1  [83 00] */
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[4] + (-0x7200)))); M68K_TST16((uint16_t)g_m68k.d[4]);
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + (-0x7200)))); M68K_TST16((uint16_t)g_m68k.d[4]);
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[0] + 0 + (int32_t)g_m68k.a[0] * 8))); M68K_TST16((uint16_t)g_m68k.d[4]);
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[2] + 0 + (int32_t)g_m68k.a[0] * 8))); M68K_TST16((uint16_t)g_m68k.d[4]);
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[4] + 0 + (int32_t)g_m68k.a[0] * 8))); M68K_TST16((uint16_t)g_m68k.d[4]);
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0 + (int32_t)g_m68k.a[0] * 8))); M68K_TST16((uint16_t)g_m68k.d[4]);
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x008E00))); M68K_TST16((uint16_t)g_m68k.d[4]);
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0xe9688))); M68K_TST16((uint16_t)g_m68k.d[4]);
    /* WARNING: function did not end with RTS */
}

/* $0F0A40-$0F0A42  (1 instructions, 2 bytes) */
void jt_0F0A40(void) {
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F0C2A-$0F0C2E  (2 instructions, 4 bytes) */
void jt_0F0C2A(void) {
    { uint8_t _mv = (uint8_t)(g_m68k.d[4]); g_m68k.a[1] -= 1; bus_write8(g_m68k.a[1], _mv); M68K_TST8(_mv); }
    /* TODO $0F0C2C: sbcd.b d0, d0  [81 00] */
    /* WARNING: function did not end with RTS */
}

/* $0F0F00-$0F0F02  (1 instructions, 2 bytes) */
void jt_0F0F00(void) {
    M68K_OR8(g_m68k.d[1], g_m68k.d[2]);
    /* WARNING: function did not end with RTS */
}

/* $0F102A-$0F102E  (2 instructions, 4 bytes) */
void jt_0F102A(void) {
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(2))); M68K_TST8((uint8_t)g_m68k.d[5]);
    M68K_OR8(g_m68k.d[1], g_m68k.d[2]);
    /* WARNING: function did not end with RTS */
}

/* $0F182A-$0F183A  (7 instructions, 16 bytes) */
void jt_0F182A(void) {
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[7] + (-0x7dfe))); bus_write8(g_m68k.a[3], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_predec8(1)); bus_write8(g_m68k.a[3], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[2]);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[1])); bus_write8(g_m68k.a[3], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[2]);
    { uint8_t _mv = (uint8_t)(g_m68k.d[1]); bus_write8(g_m68k.a[3], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[2]);
    /* WARNING: function did not end with RTS */
}

/* $0F1C2A-$0F1C2E  (1 instructions, 4 bytes) */
void jt_0F1C2A(void) {
    { uint8_t _mv = (uint8_t)(g_m68k.d[3]); bus_write8(g_m68k.a[5] + (-0x7dff), _mv); M68K_TST8(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0F202A-$0F203E  (7 instructions, 20 bytes) */
void jt_0F202A(void) {
    { uint8_t _mv = (uint8_t)(g_m68k.d[7]); bus_write8(g_m68k.a[1], _mv); g_m68k.a[1] += 1; M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[4])); bus_write8(g_m68k.a[1], _mv); g_m68k.a[1] += 1; M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[5] + (-0x7e00))); bus_write8(g_m68k.a[3], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(0xf2038 + (int16_t)(uint16_t)g_m68k.a[0] * 2)); bus_write8(g_m68k.a[1], _mv); g_m68k.a[1] += 1; M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(0x2); bus_write8(g_m68k.a[1], _mv); M68K_TST8(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0F242A-$0F2446  (8 instructions, 28 bytes) */
void jt_0F242A(void) {
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2)); bus_write16(g_m68k.a[4], _mv); g_m68k.a[4] += 2; M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2)); bus_write16(g_m68k.a[4], _mv); g_m68k.a[4] += 2; M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2)); bus_write16(g_m68k.a[4], _mv); g_m68k.a[4] += 2; M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2)); bus_write16(g_m68k.a[4], _mv); g_m68k.a[4] += 2; M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(0x8300391B)); bus_write16(g_m68k.a[4], _mv); g_m68k.a[4] += 2; M68K_TST16(_mv); }
    M68K_OR8(g_m68k.d[6], g_m68k.d[0]);
    { uint16_t _mv = (uint16_t)(_predec16(3)); g_m68k.a[4] -= 2; bus_write16(g_m68k.a[4], _mv); M68K_TST16(_mv); }
    M68K_OR8(g_m68k.d[6], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F282A-$0F28C2  (47 instructions, 152 bytes) */
void jt_0F282A(void) {
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2)); bus_write16(g_m68k.a[4], _mv); g_m68k.a[4] += 2; M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2)); bus_write16(g_m68k.a[4], _mv); g_m68k.a[4] += 2; M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2)); bus_write16(g_m68k.a[4], _mv); g_m68k.a[4] += 2; M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2)); bus_write16(g_m68k.a[4], _mv); g_m68k.a[4] += 2; M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(0x8300392C)); bus_write16(g_m68k.a[4], _mv); g_m68k.a[4] += 2; M68K_TST16(_mv); }
    M68K_OR8(g_m68k.d[6], g_m68k.d[0]);
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[1] + 0 + (int32_t)g_m68k.a[0] * 4)); g_m68k.a[4] -= 2; bus_write16(g_m68k.a[4], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[3] + 0 + (int32_t)g_m68k.a[0] * 4)); g_m68k.a[4] -= 2; bus_write16(g_m68k.a[4], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[4] + 0 + (int32_t)g_m68k.a[0] * 4)); g_m68k.a[4] -= 2; bus_write16(g_m68k.a[4], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[5] + 0 + (int32_t)g_m68k.a[0] * 4)); g_m68k.a[4] -= 2; bus_write16(g_m68k.a[4], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[6] + 0 + (int32_t)g_m68k.a[0] * 4)); g_m68k.a[4] -= 2; bus_write16(g_m68k.a[4], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[7] + 0 + (int32_t)g_m68k.a[0] * 4)); g_m68k.a[4] -= 2; bus_write16(g_m68k.a[4], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(0x008C00)); g_m68k.a[4] -= 2; bus_write16(g_m68k.a[4], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(0x8C00393A)); g_m68k.a[4] -= 2; bus_write16(g_m68k.a[4], _mv); M68K_TST16(_mv); }
    M68K_OR8(g_m68k.d[6], g_m68k.d[0]);
    { uint16_t _mv = (uint16_t)(bus_read16(0xf2868 + (int32_t)g_m68k.a[0] * 4)); g_m68k.a[4] -= 2; bus_write16(g_m68k.a[4], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2)); bus_write16(g_m68k.a[4], _mv); g_m68k.a[4] += 2; M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2)); bus_write16(g_m68k.a[4], _mv); g_m68k.a[4] += 2; M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2)); bus_write16(g_m68k.a[4], _mv); g_m68k.a[4] += 2; M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2)); bus_write16(g_m68k.a[4], _mv); g_m68k.a[4] += 2; M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(0xeab7c)); bus_write16(g_m68k.a[4], _mv); g_m68k.a[4] += 2; M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[5] + (-0x7200))); g_m68k.a[4] -= 2; bus_write16(g_m68k.a[4], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[2] + 0 + (int32_t)g_m68k.a[0] * 8)); g_m68k.a[4] -= 2; bus_write16(g_m68k.a[4], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(g_m68k.a[1]); g_m68k.a[4] -= 2; bus_write16(g_m68k.a[4], _mv); M68K_TST16(_mv); }
    M68K_OR8(g_m68k.d[7], g_m68k.d[1]);
    { uint16_t _mv = (uint16_t)(g_m68k.a[3]); g_m68k.a[4] -= 2; bus_write16(g_m68k.a[4], _mv); M68K_TST16(_mv); }
    M68K_OR8(g_m68k.d[7], g_m68k.d[1]);
    { uint16_t _mv = (uint16_t)(g_m68k.a[5]); g_m68k.a[4] -= 2; bus_write16(g_m68k.a[4], _mv); M68K_TST16(_mv); }
    M68K_OR8(g_m68k.d[7], g_m68k.d[1]);
    { uint16_t _mv = (uint16_t)(g_m68k.a[7]); g_m68k.a[4] -= 2; bus_write16(g_m68k.a[4], _mv); M68K_TST16(_mv); }
    M68K_OR8(g_m68k.d[7], g_m68k.d[1]);
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[1])); g_m68k.a[4] -= 2; bus_write16(g_m68k.a[4], _mv); M68K_TST16(_mv); }
    M68K_OR8(g_m68k.d[7], g_m68k.d[1]);
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[3])); g_m68k.a[4] -= 2; bus_write16(g_m68k.a[4], _mv); M68K_TST16(_mv); }
    M68K_OR8(g_m68k.d[7], g_m68k.d[1]);
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[5])); g_m68k.a[4] -= 2; bus_write16(g_m68k.a[4], _mv); M68K_TST16(_mv); }
    M68K_OR8(g_m68k.d[7], g_m68k.d[1]);
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[7])); g_m68k.a[4] -= 2; bus_write16(g_m68k.a[4], _mv); M68K_TST16(_mv); }
    M68K_OR8(g_m68k.d[7], g_m68k.d[1]);
    { uint16_t _mv = (uint16_t)(_postinc16(1)); g_m68k.a[4] -= 2; bus_write16(g_m68k.a[4], _mv); M68K_TST16(_mv); }
    M68K_OR8(g_m68k.d[7], g_m68k.d[1]);
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2)); bus_write16(g_m68k.a[4], _mv); g_m68k.a[4] += 2; M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2)); bus_write16(g_m68k.a[4], _mv); g_m68k.a[4] += 2; M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2)); bus_write16(g_m68k.a[4], _mv); g_m68k.a[4] += 2; M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2)); bus_write16(g_m68k.a[4], _mv); g_m68k.a[4] += 2; M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(0x83001255)); bus_write16(g_m68k.a[4], _mv); g_m68k.a[4] += 2; M68K_TST16(_mv); }
    /* TODO $0F28C0: sbcd.b d2, d0  [81 02] */
    /* WARNING: function did not end with RTS */
}

/* $0F2C2A-$0F2C2E  (1 instructions, 4 bytes) */
void jt_0F2C2A(void) {
    { uint8_t _mv = (uint8_t)(g_m68k.d[6]); bus_write8(g_m68k.a[1] + (-0x7c00), _mv); M68K_TST8(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0F302A-$0F306E  (17 instructions, 68 bytes) */
void jt_0F302A(void) {
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[4])); bus_write8(g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2, _mv); M68K_TST8(_mv); }
    { uint32_t _mv = (uint32_t)(0x8200394c); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    { uint16_t _mv = (uint16_t)(g_m68k.a[5]); bus_write16(g_m68k.a[4] + (-0x7e00), _mv); M68K_TST16(_mv); }
    { uint32_t _mv = (uint32_t)(g_m68k.d[7]); bus_write32(g_m68k.a[0] + (-0x7e00), _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(g_m68k.a[3]); bus_write32(g_m68k.a[0] + (-0x7e00), _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(g_m68k.a[7]); bus_write32(g_m68k.a[0] + (-0x7e00), _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[3])); bus_write32(g_m68k.a[0] + (-0x7e00), _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[7])); bus_write32(g_m68k.a[0] + (-0x7e00), _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_postinc32(3)); bus_write32(g_m68k.a[0] + (-0x7e00), _mv); M68K_TST32(_mv); }
    { uint16_t _mv = (uint16_t)(g_m68k.a[6]); bus_write16(g_m68k.a[4] + (-0x7e00), _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(g_m68k.a[7]); bus_write16(g_m68k.a[4] + (-0x7e00), _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[0])); bus_write16(g_m68k.a[4] + (-0x7e00), _mv); M68K_TST16(_mv); }
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[3] + (-0x7e00))); bus_write32(g_m68k.a[0] + 0x216f, _mv); M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2)); bus_write32(g_m68k.a[0] + 0x1c1e, _mv); M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F342A-$0F342C  (1 instructions, 2 bytes) */
void jt_0F342A(void) {
    M68K_BTST(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F485C-$0F4860  (2 instructions, 4 bytes) */
void jt_0F485C(void) {
    M68K_ASR16(g_m68k.d[0], 0x8);
    /* TODO $0F485E: dc.w $ff20  [FF 20] */
    /* WARNING: function did not end with RTS */
}

/* $0F4864-$0F4868  (2 instructions, 4 bytes) */
void jt_0F4864(void) {
    M68K_ASR16(g_m68k.d[0], 0x8);
    /* TODO $0F4866: dc.w $ff20  [FF 20] */
    /* WARNING: function did not end with RTS */
}

/* $0F488C-$0F4894  (4 instructions, 8 bytes) */
void jt_0F488C(void) {
    /* TODO $0F488C: dc.w $ff16  [FF 16] */
    /* TODO $0F488E: dc.w $ff16  [FF 16] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[6]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F4894-$0F489C  (4 instructions, 8 bytes) */
void jt_0F4894(void) {
    /* TODO $0F4894: dc.w $ff16  [FF 16] */
    /* TODO $0F4896: dc.w $ff16  [FF 16] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[6]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F489C-$0F48A4  (4 instructions, 8 bytes) */
void jt_0F489C(void) {
    /* TODO $0F489C: dc.w $ff16  [FF 16] */
    /* TODO $0F489E: dc.w $ff16  [FF 16] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[6]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F48A4-$0F48BC  (12 instructions, 24 bytes) */
void jt_0F48A4(void) {
    /* TODO $0F48A4: dc.w $ff16  [FF 16] */
    M68K_AND8(g_m68k.d[0], bus_read8(g_m68k.a[6]));
    /* TODO $0F48A8: dc.w $8140  [81 40] */
    M68K_OR8(g_m68k.d[6], bus_read8(g_m68k.a[6]));
    M68K_OR16(g_m68k.d[2], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $0F48B0: dc.w $8740  [87 40] */
    M68K_OR8(g_m68k.d[3], bus_read8(g_m68k.a[6]));
    M68K_OR16(g_m68k.d[5], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    /* TODO $0F48B8: dc.w $8d40  [8D 40] */
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F48BC-$0F48C4  (4 instructions, 8 bytes) */
void jt_0F48BC(void) {
    /* TODO $0F48BC: dc.w $ff16  [FF 16] */
    /* TODO $0F48BE: dc.w $ff16  [FF 16] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[6]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F48C4-$0F48CC  (4 instructions, 8 bytes) */
void jt_0F48C4(void) {
    /* TODO $0F48C4: dc.w $ff16  [FF 16] */
    /* TODO $0F48C6: dc.w $ff16  [FF 16] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[6]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F48CC-$0F48DE  (9 instructions, 18 bytes) */
void jt_0F48CC(void) {
    /* TODO $0F48CC: roxr.b #$7, d6  [EE 16] */
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    /* TODO $0F48D2: dc.w $8540  [85 40] */
    M68K_OR8(g_m68k.d[4], bus_read8(g_m68k.a[6]));
    M68K_OR16(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    /* TODO $0F48DA: dc.w $8b40  [8B 40] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[6]));
    /* WARNING: function did not end with RTS */
}

/* $0F48F0-$0F4902  (9 instructions, 18 bytes) */
void jt_0F48F0(void) {
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    /* TODO $0F48F2: dc.w $8340  [83 40] */
    M68K_OR8(g_m68k.d[5], bus_read8(g_m68k.a[6]));
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* TODO $0F48FA: dc.w $8940  [89 40] */
    M68K_OR8(g_m68k.d[2], bus_read8(g_m68k.a[6]));
    M68K_OR16(g_m68k.d[6], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0F4928-$0F4958  (18 instructions, 48 bytes) */
void jt_0F4928(void) {
    M68K_SUB8(g_m68k.d[0], _postinc8(2));
    /* TODO $0F492A: dc.w $8340  [83 40] */
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[5], _postinc8(2));
    /* TODO $0F4932: dc.w $8940  [89 40] */
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[6], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[2], _postinc8(2));
    /* TODO $0F493A: dc.w $8f40  [8F 40] */
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_SUB16(g_m68k.d[0], g_m68k.d[0]);
    { uint32_t _ea = /* UNHANDLED_ADDR: (a2, invalid.w) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[3], bus_read8(g_m68k.a[2] + 0x40 + (int32_t)g_m68k.a[0]));
    { uint32_t _ea = /* UNHANDLED_ADDR: (a2, invalid.w) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[6], bus_read8(g_m68k.a[2] + 0x40 + (int16_t)(uint16_t)g_m68k.a[0]));
    { uint32_t _ea = /* UNHANDLED_ADDR: (a2, invalid.w) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    M68K_AND8(g_m68k.d[0], bus_read8(g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.a[0]));
    /* WARNING: function did not end with RTS */
}

/* $0F4958-$0F4982  (17 instructions, 42 bytes) */
void jt_0F4958(void) {
    M68K_ROR8(g_m68k.d[2], 0x8);
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[7], _postinc8(2));
    /* TODO $0F495E: dc.w $8540  [85 40] */
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[4], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[4], _postinc8(2));
    /* TODO $0F4966: dc.w $8b40  [8B 40] */
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[7], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[1], _postinc8(2));
    M68K_SUB16(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[2] + 0x40 + (int32_t)g_m68k.a[0]));
    { uint32_t _ea = /* UNHANDLED_ADDR: (a2, invalid.w) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[4], bus_read8(g_m68k.a[2] + 0x40 + (int32_t)g_m68k.a[0]));
    { uint32_t _ea = /* UNHANDLED_ADDR: (a2, invalid.w) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F49D4-$0F49DC  (4 instructions, 8 bytes) */
void jt_0F49D4(void) {
    /* TODO $0F49D4: dc.w $ff13  [FF 13] */
    /* TODO $0F49D6: dc.w $ff13  [FF 13] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[3]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F49DC-$0F49E4  (4 instructions, 8 bytes) */
void jt_0F49DC(void) {
    /* TODO $0F49DC: dc.w $ff13  [FF 13] */
    /* TODO $0F49DE: dc.w $ff13  [FF 13] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[3]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F49E4-$0F49EC  (4 instructions, 8 bytes) */
void jt_0F49E4(void) {
    /* TODO $0F49E4: dc.w $ff13  [FF 13] */
    /* TODO $0F49E6: dc.w $ff13  [FF 13] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[3]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F49EC-$0F49EE  (1 instructions, 2 bytes) */
void jt_0F49EC(void) {
    /* TODO $0F49EC: dc.w $ff13  [FF 13] */
    /* WARNING: function did not end with RTS */
}

/* $0F4A0C-$0F4A14  (4 instructions, 8 bytes) */
void jt_0F4A0C(void) {
    /* TODO $0F4A0C: dc.w $ff16  [FF 16] */
    /* TODO $0F4A0E: dc.w $ff16  [FF 16] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[6]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F4A14-$0F4A1C  (4 instructions, 8 bytes) */
void jt_0F4A14(void) {
    /* TODO $0F4A14: dc.w $ff16  [FF 16] */
    /* TODO $0F4A16: dc.w $ff16  [FF 16] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[6]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F4A1C-$0F4A28  (6 instructions, 12 bytes) */
void jt_0F4A1C(void) {
    /* TODO $0F4A1C: roxr.b #$7, d6  [EE 16] */
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    /* TODO $0F4A22: dc.w $8d40  [8D 40] */
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    { uint32_t _t = g_m68k.d[6]; g_m68k.d[6] = g_m68k.d[0]; g_m68k.d[0] = _t; }
    /* WARNING: function did not end with RTS */
}

/* $0F4A38-$0F4A4A  (9 instructions, 18 bytes) */
void jt_0F4A38(void) {
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    /* TODO $0F4A3A: dc.w $8340  [83 40] */
    M68K_OR8(g_m68k.d[5], bus_read8(g_m68k.a[6]));
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* TODO $0F4A42: dc.w $8940  [89 40] */
    M68K_OR8(g_m68k.d[2], bus_read8(g_m68k.a[6]));
    M68K_OR16(g_m68k.d[6], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0F4A70-$0F4A88  (12 instructions, 24 bytes) */
void jt_0F4A70(void) {
    M68K_SUB8(g_m68k.d[0], _postinc8(2));
    /* TODO $0F4A72: dc.w $8340  [83 40] */
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[5], _postinc8(2));
    /* TODO $0F4A7A: dc.w $8940  [89 40] */
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[6], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[2], _postinc8(2));
    /* TODO $0F4A82: dc.w $8f40  [8F 40] */
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_SUB16(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F4AA0-$0F4AB0  (8 instructions, 16 bytes) */
void jt_0F4AA0(void) {
    M68K_ROR8(g_m68k.d[2], 0x8);
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[7], _postinc8(2));
    /* TODO $0F4AA6: dc.w $8d40  [8D 40] */
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    /* TODO $0F4AAA: dc.w $8f40  [8F 40] */
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_CMP16(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}
