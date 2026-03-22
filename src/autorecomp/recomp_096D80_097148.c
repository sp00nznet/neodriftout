/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $096D80 - $097148 */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

/* $096D80-$096D90  (6 instructions, 16 bytes) */
void jt_096D80(void) {
    M68K_OR8(g_m68k.d[1], 0x3);
    M68K_ADD32(g_m68k.d[1], bus_read32(g_m68k.a[5] + 0 + (int32_t)g_m68k.d[3] * 4));
    g_m68k.a[1] += (int16_t)(uint16_t)(g_m68k.d[0]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.a[1] += (int16_t)(uint16_t)(g_m68k.a[4]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[6]);
    /* WARNING: function did not end with RTS */
}

/* $096D90-$096DA0  (7 instructions, 16 bytes) */
void jt_096D90(void) {
    M68K_OR8(g_m68k.d[1], 0x3);
    g_m68k.a[1] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[5]));
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[6]);
    { uint32_t _ea = g_m68k.a[5]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[6]);
    M68K_ADD32(g_m68k.d[1], _predec32(4));
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[6]);
    /* WARNING: function did not end with RTS */
}

/* $096DA0-$096DAC  (3 instructions, 12 bytes) */
void jt_096DA0(void) {
    M68K_OR8(g_m68k.d[1], 0x3);
    { uint32_t _ea = (g_m68k.a[0] + 0x3c00); uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[5] + 0 + (int32_t)g_m68k.d[3] * 4); uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $096DB0-$096DC0  (7 instructions, 16 bytes) */
void jt_096DB0(void) {
    M68K_OR8(g_m68k.d[1], 0x3);
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_ADDX8(_tmp, _predec8(2)); bus_write8(_ea, _tmp); }
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[7]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[7]);
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[7]);
    /* WARNING: function did not end with RTS */
}

/* $096DC0-$096DD0  (5 instructions, 16 bytes) */
void jt_096DC0(void) {
    M68K_OR8(g_m68k.d[1], 0x3);
    { uint32_t _ea = (g_m68k.a[1] + 0x3e00); uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[6] + 0 + (int32_t)g_m68k.d[3] * 8); uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    M68K_ADDX8(g_m68k.d[1], g_m68k.d[3]);
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[1])); M68K_TST16((uint16_t)g_m68k.d[7]);
    /* WARNING: function did not end with RTS */
}

/* $096DD0-$096DE0  (7 instructions, 16 bytes) */
void jt_096DD0(void) {
    M68K_OR8(g_m68k.d[1], 0x3);
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_ADDX8(_tmp, _predec8(3)); bus_write8(_ea, _tmp); }
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[4]);
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[4]);
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[4]);
    /* WARNING: function did not end with RTS */
}

/* $096DE0-$096DF0  (5 instructions, 16 bytes) */
void jt_096DE0(void) {
    M68K_OR8(g_m68k.d[1], 0x3);
    { uint32_t _ea = (g_m68k.a[2] + 0x3800); uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[7] + 0 + (int32_t)g_m68k.d[3]); uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    g_m68k.a[1] += (int16_t)(uint16_t)(g_m68k.a[1]);
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[4]);
    /* WARNING: function did not end with RTS */
}

/* $096DF0-$096E00  (6 instructions, 16 bytes) */
void jt_096DF0(void) {
    M68K_OR8(g_m68k.d[1], 0x3);
    g_m68k.a[1] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[4]));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    g_m68k.a[1] += (int16_t)(uint16_t)(_postinc16(6));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    g_m68k.a[1] += (int16_t)(uint16_t)(0x3901);
    /* WARNING: function did not end with RTS */
}

/* $096E00-$096E0C  (3 instructions, 12 bytes) */
void jt_096E00(void) {
    M68K_OR8(g_m68k.d[1], 0x3);
    { uint32_t _ea = (g_m68k.a[3] + 0x3700); uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x003700; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $096E10-$096E20  (7 instructions, 16 bytes) */
void jt_096E10(void) {
    M68K_OR8(g_m68k.d[1], 0x3);
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_ADDX8(_tmp, _predec8(4)); bus_write8(_ea, _tmp); }
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[6]);
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[6]);
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[6]);
    /* WARNING: function did not end with RTS */
}

/* $096E20-$096E30  (4 instructions, 16 bytes) */
void jt_096E20(void) {
    M68K_OR8(g_m68k.d[1], 0x3);
    { uint32_t _ea = (g_m68k.a[4] + 0x3c00); uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x3C00D2CC; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[6]);
    /* WARNING: function did not end with RTS */
}

/* $096E30-$096E40  (7 instructions, 16 bytes) */
void jt_096E30(void) {
    M68K_OR8(g_m68k.d[1], 0x3);
    g_m68k.a[1] += (int16_t)(uint16_t)(_postinc16(1));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[6] -= 2; bus_write16(g_m68k.a[6], _mv); M68K_TST16(_mv); }
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[6] -= 2; bus_write16(g_m68k.a[6], _mv); M68K_TST16(_mv); }
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[6] -= 2; bus_write16(g_m68k.a[6], _mv); M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $096E40-$096E50  (5 instructions, 16 bytes) */
void jt_096E40(void) {
    M68K_OR8(g_m68k.d[1], 0x3);
    { uint32_t _ea = (g_m68k.a[5] + 0x3d00); uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    g_m68k.a[1] += (int16_t)(uint16_t)(/* UNHANDLED_READ: (a16, d3.l * 4) */ 0);
    M68K_ADDX8(g_m68k.d[1], g_m68k.d[3]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[6] -= 2; bus_write16(g_m68k.a[6], _mv); M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $096E50-$096E60  (7 instructions, 16 bytes) */
void jt_096E50(void) {
    M68K_OR8(g_m68k.d[1], 0x3);
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_ADDX8(_tmp, _predec8(5)); bus_write8(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $096E60-$096E70  (5 instructions, 16 bytes) */
void jt_096E60(void) {
    M68K_OR8(g_m68k.d[1], 0x3);
    { uint32_t _ea = (g_m68k.a[6] + 0x3700); uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    g_m68k.a[1] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.d[3] * 8));
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $096E70-$096E74  (1 instructions, 4 bytes) */
void jt_096E70(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    /* WARNING: function did not end with RTS */
}

/* $096E98-$096EC0  (19 instructions, 40 bytes) */
void jt_096E98(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    { uint32_t _ea = g_m68k.a[1]; uint16_t _tmp = bus_read16(_ea); M68K_ADDX16(_tmp, _predec16(4)); bus_write16(_ea, _tmp); }
    M68K_NEGX8(g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[1]; uint16_t _tmp = bus_read16(_ea); M68K_ADDX16(_tmp, _predec16(7)); bus_write16(_ea, _tmp); }
    M68K_NEGX8(g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[2]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[1]); bus_write16(_ea, _tmp); }
    M68K_NEGX8(g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[1]; uint16_t _tmp = bus_read16(_ea); M68K_ADDX16(_tmp, _predec16(5)); bus_write16(_ea, _tmp); }
    M68K_NEGX8(g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[0]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[1]); bus_write16(_ea, _tmp); }
    M68K_NEGX8(g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[3]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[1]); bus_write16(_ea, _tmp); }
    M68K_NEGX8(g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[1]; uint16_t _tmp = bus_read16(_ea); M68K_ADDX16(_tmp, _predec16(6)); bus_write16(_ea, _tmp); }
    M68K_NEGX8(g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[1]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[1]); bus_write16(_ea, _tmp); }
    M68K_NEGX8(g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[4]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[1]); bus_write16(_ea, _tmp); }
    M68K_NEGX8(g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $096EC0-$096EC4  (1 instructions, 4 bytes) */
void jt_096EC0(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    /* WARNING: function did not end with RTS */
}

/* $096EE8-$096F10  (19 instructions, 40 bytes) */
void jt_096EE8(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    { uint32_t _ea = g_m68k.a[1]; uint16_t _tmp = bus_read16(_ea); M68K_ADDX16(_tmp, _predec16(4)); bus_write16(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[7] -= 2; bus_write16(g_m68k.a[7], _mv); M68K_TST16(_mv); }
    { uint32_t _ea = g_m68k.a[1]; uint16_t _tmp = bus_read16(_ea); M68K_ADDX16(_tmp, _predec16(7)); bus_write16(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[7] -= 2; bus_write16(g_m68k.a[7], _mv); M68K_TST16(_mv); }
    { uint32_t _ea = g_m68k.a[2]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[1]); bus_write16(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[7] -= 2; bus_write16(g_m68k.a[7], _mv); M68K_TST16(_mv); }
    { uint32_t _ea = g_m68k.a[1]; uint16_t _tmp = bus_read16(_ea); M68K_ADDX16(_tmp, _predec16(5)); bus_write16(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[7] -= 2; bus_write16(g_m68k.a[7], _mv); M68K_TST16(_mv); }
    { uint32_t _ea = g_m68k.a[0]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[1]); bus_write16(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[7] -= 2; bus_write16(g_m68k.a[7], _mv); M68K_TST16(_mv); }
    { uint32_t _ea = g_m68k.a[3]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[1]); bus_write16(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[7] -= 2; bus_write16(g_m68k.a[7], _mv); M68K_TST16(_mv); }
    { uint32_t _ea = g_m68k.a[1]; uint16_t _tmp = bus_read16(_ea); M68K_ADDX16(_tmp, _predec16(6)); bus_write16(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[7] -= 2; bus_write16(g_m68k.a[7], _mv); M68K_TST16(_mv); }
    { uint32_t _ea = g_m68k.a[1]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[1]); bus_write16(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[7] -= 2; bus_write16(g_m68k.a[7], _mv); M68K_TST16(_mv); }
    { uint32_t _ea = g_m68k.a[4]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[1]); bus_write16(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[7] -= 2; bus_write16(g_m68k.a[7], _mv); M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $096F10-$096F1C  (5 instructions, 12 bytes) */
void jt_096F10(void) {
    M68K_OR8(g_m68k.d[1], 0x2);
    M68K_ADDX16(g_m68k.d[1], g_m68k.d[0]);
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[5]);
    M68K_ADDX16(g_m68k.d[1], g_m68k.d[5]);
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[5]);
    /* WARNING: function did not end with RTS */
}

/* $096F1C-$096F28  (5 instructions, 12 bytes) */
void jt_096F1C(void) {
    M68K_OR8(g_m68k.d[1], 0x2);
    { uint32_t _ea = g_m68k.a[1]; uint16_t _tmp = bus_read16(_ea); M68K_ADDX16(_tmp, _predec16(2)); bus_write16(_ea, _tmp); }
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[5]);
    M68K_ADDX16(g_m68k.d[1], g_m68k.d[6]);
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[5]);
    /* WARNING: function did not end with RTS */
}

/* $096F28-$096F34  (5 instructions, 12 bytes) */
void jt_096F28(void) {
    M68K_OR8(g_m68k.d[1], 0x2);
    M68K_ADDX16(g_m68k.d[1], g_m68k.d[1]);
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[5]);
    M68K_ADDX16(g_m68k.d[1], g_m68k.d[6]);
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[5]);
    /* WARNING: function did not end with RTS */
}

/* $096F34-$096F40  (5 instructions, 12 bytes) */
void jt_096F34(void) {
    M68K_OR8(g_m68k.d[1], 0x2);
    { uint32_t _ea = g_m68k.a[1]; uint16_t _tmp = bus_read16(_ea); M68K_ADDX16(_tmp, _predec16(3)); bus_write16(_ea, _tmp); }
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[5]);
    M68K_ADDX16(g_m68k.d[1], g_m68k.d[5]);
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[5]);
    /* WARNING: function did not end with RTS */
}

/* $096F40-$096F54  (9 instructions, 20 bytes) */
void jt_096F40(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    { uint32_t _ea = g_m68k.a[3]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    M68K_NOT8(g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[2]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    M68K_NOT8(g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[4]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    M68K_NOT8(g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[3]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    M68K_NOT8(g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $096F54-$096F68  (9 instructions, 20 bytes) */
void jt_096F54(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    { uint32_t _ea = g_m68k.a[5]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    M68K_NOT8(g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[4]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    M68K_NOT8(g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    M68K_NOT8(g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[5]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    M68K_NOT8(g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $096F68-$096F7C  (9 instructions, 20 bytes) */
void jt_096F68(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    { uint32_t _ea = g_m68k.a[7]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    M68K_NOT8(g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    M68K_NOT8(g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[0]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    M68K_NOT8(g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[7]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    M68K_NOT8(g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $096F7C-$096F90  (7 instructions, 20 bytes) */
void jt_096F7C(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    { uint32_t _ea = g_m68k.a[1]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    M68K_NOT8(g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[0] + 0x4600); uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[2]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    M68K_NOT8(g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[1] + 0x4600); uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $096F90-$096FA4  (7 instructions, 20 bytes) */
void jt_096F90(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    { uint32_t _ea = g_m68k.a[3]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    M68K_NOT8(g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[2] + 0x4600); uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[4]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    M68K_NOT8(g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[3] + 0x4600); uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $096FA4-$096FB8  (7 instructions, 20 bytes) */
void jt_096FA4(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    { uint32_t _ea = g_m68k.a[5]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    M68K_NOT8(g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[4] + 0x4600); uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[6]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    M68K_NOT8(g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[5] + 0x4600); uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $096FB8-$096FCC  (9 instructions, 20 bytes) */
void jt_096FB8(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    { uint32_t _ea = g_m68k.a[3]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    M68K_NOT8(g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[2]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    M68K_NOT8(g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[7]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    M68K_NOT8(g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[3]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    M68K_NOT8(g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $096FCC-$096FE0  (9 instructions, 20 bytes) */
void jt_096FCC(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    { uint32_t _ea = g_m68k.a[0]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    M68K_NOT8(g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[4]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    M68K_NOT8(g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[1]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    M68K_NOT8(g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[5]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    M68K_NOT8(g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $096FE0-$096FF4  (7 instructions, 20 bytes) */
void jt_096FE0(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    { uint32_t _ea = g_m68k.a[7]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    M68K_NOT8(g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    M68K_NOT8(g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[6] + 0x4600); uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[7] + 0x4600); uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $096FF4-$097008  (7 instructions, 20 bytes) */
void jt_096FF4(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    { uint32_t _ea = g_m68k.a[1]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    M68K_NOT8(g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 8); uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[2]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    M68K_NOT8(g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 8); uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $097008-$09701C  (7 instructions, 20 bytes) */
void jt_097008(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    { uint32_t _ea = g_m68k.a[3]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    M68K_NOT8(g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[2] + 0x4600); uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[4]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    M68K_NOT8(g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[3] + 0x4600); uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $09701C-$097030  (7 instructions, 20 bytes) */
void jt_09701C(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    { uint32_t _ea = g_m68k.a[5]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    M68K_NOT8(g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[4] + 0x4600); uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[6]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    M68K_NOT8(g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[5] + 0x4600); uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $097030-$097044  (9 instructions, 20 bytes) */
void jt_097030(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    { uint32_t _ea = g_m68k.a[3]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    /* TODO $097036: dc.w $4700  [47 00] */
    { uint32_t _ea = g_m68k.a[2]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    /* TODO $09703A: dc.w $4700  [47 00] */
    { uint32_t _ea = g_m68k.a[4]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    /* TODO $09703E: dc.w $4700  [47 00] */
    { uint32_t _ea = g_m68k.a[3]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    /* TODO $097042: dc.w $4700  [47 00] */
    /* WARNING: function did not end with RTS */
}

/* $097044-$097058  (9 instructions, 20 bytes) */
void jt_097044(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    { uint32_t _ea = g_m68k.a[5]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    /* TODO $09704A: dc.w $4700  [47 00] */
    { uint32_t _ea = g_m68k.a[4]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    /* TODO $09704E: dc.w $4700  [47 00] */
    { uint32_t _ea = g_m68k.a[6]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    /* TODO $097052: dc.w $4700  [47 00] */
    { uint32_t _ea = g_m68k.a[5]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    /* TODO $097056: dc.w $4700  [47 00] */
    /* WARNING: function did not end with RTS */
}

/* $097058-$09706C  (9 instructions, 20 bytes) */
void jt_097058(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    { uint32_t _ea = g_m68k.a[7]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    /* TODO $09705E: dc.w $4700  [47 00] */
    { uint32_t _ea = g_m68k.a[6]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    /* TODO $097062: dc.w $4700  [47 00] */
    { uint32_t _ea = g_m68k.a[0]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    /* TODO $097066: dc.w $4700  [47 00] */
    { uint32_t _ea = g_m68k.a[7]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    /* TODO $09706A: dc.w $4700  [47 00] */
    /* WARNING: function did not end with RTS */
}

/* $09706C-$097080  (7 instructions, 20 bytes) */
void jt_09706C(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    { uint32_t _ea = g_m68k.a[1]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    /* TODO $097072: dc.w $4700  [47 00] */
    { uint32_t _ea = (g_m68k.a[0] + 0x4700); uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[2]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    /* TODO $09707A: dc.w $4700  [47 00] */
    { uint32_t _ea = (g_m68k.a[1] + 0x4700); uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $097080-$097094  (7 instructions, 20 bytes) */
void jt_097080(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    { uint32_t _ea = g_m68k.a[3]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    /* TODO $097086: dc.w $4700  [47 00] */
    { uint32_t _ea = (g_m68k.a[2] + 0x4700); uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[4]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    /* TODO $09708E: dc.w $4700  [47 00] */
    { uint32_t _ea = (g_m68k.a[3] + 0x4700); uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $097094-$0970A8  (7 instructions, 20 bytes) */
void jt_097094(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    { uint32_t _ea = g_m68k.a[5]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    /* TODO $09709A: dc.w $4700  [47 00] */
    { uint32_t _ea = (g_m68k.a[4] + 0x4700); uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[6]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    /* TODO $0970A2: dc.w $4700  [47 00] */
    { uint32_t _ea = (g_m68k.a[5] + 0x4700); uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0970A8-$0970BC  (9 instructions, 20 bytes) */
void jt_0970A8(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    { uint32_t _ea = g_m68k.a[3]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    /* TODO $0970AE: dc.w $4700  [47 00] */
    { uint32_t _ea = g_m68k.a[2]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    /* TODO $0970B2: dc.w $4700  [47 00] */
    { uint32_t _ea = g_m68k.a[7]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    /* TODO $0970B6: dc.w $4700  [47 00] */
    { uint32_t _ea = g_m68k.a[3]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    /* TODO $0970BA: dc.w $4700  [47 00] */
    /* WARNING: function did not end with RTS */
}

/* $0970BC-$0970D0  (9 instructions, 20 bytes) */
void jt_0970BC(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    { uint32_t _ea = g_m68k.a[0]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    /* TODO $0970C2: dc.w $4700  [47 00] */
    { uint32_t _ea = g_m68k.a[4]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    /* TODO $0970C6: dc.w $4700  [47 00] */
    { uint32_t _ea = g_m68k.a[1]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    /* TODO $0970CA: dc.w $4700  [47 00] */
    { uint32_t _ea = g_m68k.a[5]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    /* TODO $0970CE: dc.w $4700  [47 00] */
    /* WARNING: function did not end with RTS */
}

/* $0970D0-$0970E4  (7 instructions, 20 bytes) */
void jt_0970D0(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    { uint32_t _ea = g_m68k.a[7]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    /* TODO $0970D6: dc.w $4700  [47 00] */
    { uint32_t _ea = g_m68k.a[6]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    /* TODO $0970DA: dc.w $4700  [47 00] */
    { uint32_t _ea = (g_m68k.a[6] + 0x4700); uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[7] + 0x4700); uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0970E4-$0970F8  (7 instructions, 20 bytes) */
void jt_0970E4(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    { uint32_t _ea = g_m68k.a[1]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    /* TODO $0970EA: dc.w $4700  [47 00] */
    { uint32_t _ea = (g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 8); uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[2]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    /* TODO $0970F2: dc.w $4700  [47 00] */
    { uint32_t _ea = (g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 8); uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0970F8-$09710C  (7 instructions, 20 bytes) */
void jt_0970F8(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    { uint32_t _ea = g_m68k.a[3]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    /* TODO $0970FE: dc.w $4700  [47 00] */
    { uint32_t _ea = (g_m68k.a[2] + 0x4700); uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[4]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    /* TODO $097106: dc.w $4700  [47 00] */
    { uint32_t _ea = (g_m68k.a[3] + 0x4700); uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $09710C-$097120  (7 instructions, 20 bytes) */
void jt_09710C(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    { uint32_t _ea = g_m68k.a[5]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    /* TODO $097112: dc.w $4700  [47 00] */
    { uint32_t _ea = (g_m68k.a[4] + 0x4700); uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[6]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    /* TODO $09711A: dc.w $4700  [47 00] */
    { uint32_t _ea = (g_m68k.a[5] + 0x4700); uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $097120-$097134  (7 instructions, 20 bytes) */
void jt_097120(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    { uint32_t _ea = (g_m68k.a[2] + 0 + (int32_t)g_m68k.d[4]); uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    g_m68k.a[1] += g_m68k.d[2];
    /* TODO $09712A: nbcd.b d0  [48 00] */
    { uint32_t _ea = (g_m68k.a[3] + 0 + (int32_t)g_m68k.d[4]); uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    g_m68k.a[1] += g_m68k.d[3];
    /* TODO $097132: nbcd.b d0  [48 00] */
    /* WARNING: function did not end with RTS */
}

/* $097134-$097140  (4 instructions, 12 bytes) */
void jt_097134(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    { uint32_t _ea = (g_m68k.a[4] + 0 + (int32_t)g_m68k.d[4]); uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    g_m68k.a[1] += g_m68k.d[4];
    /* TODO $09713E: nbcd.b d0  [48 00] */
    /* WARNING: function did not end with RTS */
}

/* $097140-$097148  (3 instructions, 8 bytes) */
void jt_097140(void) {
    { uint32_t _ea = (g_m68k.a[5] + 0 + (int32_t)g_m68k.d[4]); uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    g_m68k.a[1] += g_m68k.d[5];
    /* TODO $097146: nbcd.b d0  [48 00] */
    /* WARNING: function did not end with RTS */
}
