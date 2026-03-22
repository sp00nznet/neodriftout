/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $0974B8 - $0982D0 */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

/* $0974B8-$0974DC  (16 instructions, 36 bytes) */
void jt_0974B8(void) {
    M68K_OR8(g_m68k.d[4], 0x4);
    g_m68k.a[1] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[4]));
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[4]);
    M68K_ADD32(g_m68k.d[2], g_m68k.a[0]);
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[4]);
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[7]));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[4]);
    M68K_ADD16(g_m68k.d[2], 0x3a00);
    M68K_ADD32(g_m68k.d[2], g_m68k.a[1]);
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[5]);
    M68K_ADD32(g_m68k.d[2], _postinc32(0));
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[5]);
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[5]);
    /* WARNING: function did not end with RTS */
}

/* $0974FC-$097504  (2 instructions, 8 bytes) */
void jt_0974FC(void) {
    M68K_OR8(g_m68k.d[4], 0x4);
    { uint32_t _ea = (g_m68k.a[3] + 0x3800); uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $097540-$097584  (29 instructions, 68 bytes) */
void jt_097540(void) {
    M68K_OR8(g_m68k.d[4], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_ADDX8(_tmp, _predec8(4)); bus_write8(_ea, _tmp); }
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[7]);
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[7]);
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[7]);
    g_m68k.a[1] += (int16_t)(uint16_t)(_postinc16(1));
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[6]);
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[0]));
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[6]);
    M68K_ADD32(g_m68k.d[2], _postinc32(7));
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[6]);
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[4] + 0x3c00));
    M68K_ADD32(g_m68k.d[2], g_m68k.d[2]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[6]);
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[1]));
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[6]);
    M68K_ADD32(g_m68k.d[2], _predec32(0));
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[6]);
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[5] + 0x3c00));
    M68K_ADD32(g_m68k.d[2], g_m68k.d[3]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[6]);
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[2]));
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[6]);
    M68K_ADD32(g_m68k.d[2], _predec32(1));
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[6]);
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[6] + 0x3c00));
    /* WARNING: function did not end with RTS */
}

/* $097584-$0975C8  (23 instructions, 68 bytes) */
void jt_097584(void) {
    M68K_OR8(g_m68k.d[4], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = (g_m68k.a[4] + 0x3e00); uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x3E00D2CC; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[7]);
    { uint32_t _ea = (g_m68k.a[5] + 0x3c00); uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    g_m68k.a[2] += (int16_t)(uint16_t)(g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.a[2] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[3]));
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[6]);
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[4] + 0x3c00));
    M68K_ADD32(g_m68k.d[2], g_m68k.d[2]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[6]);
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[1]));
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[6]);
    M68K_ADD32(g_m68k.d[2], _predec32(0));
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[6]);
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[5] + 0x3c00));
    M68K_ADD32(g_m68k.d[2], bus_read32(0x3C00D4C7));
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[6]);
    M68K_ADD32(g_m68k.d[2], _predec32(1));
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[6]);
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[6] + 0x3c00));
    /* WARNING: function did not end with RTS */
}

/* $0975C8-$09760C  (29 instructions, 68 bytes) */
void jt_0975C8(void) {
    M68K_OR8(g_m68k.d[4], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_ADDX8(_tmp, _predec8(4)); bus_write8(_ea, _tmp); }
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[6]);
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[6]);
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.a[1] += (int16_t)(uint16_t)(_postinc16(1));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[7]);
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[0]));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[7]);
    M68K_ADD32(g_m68k.d[2], _postinc32(7));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[7]);
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[4] + 0x3e00));
    M68K_ADD32(g_m68k.d[2], g_m68k.d[2]);
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[7]);
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[1]));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[7]);
    M68K_ADD32(g_m68k.d[2], _predec32(0));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[7]);
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[5] + 0x3e00));
    M68K_ADD32(g_m68k.d[2], g_m68k.d[3]);
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[7]);
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[2]));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[7]);
    M68K_ADD32(g_m68k.d[2], _predec32(1));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[7]);
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[6] + 0x3e00));
    /* WARNING: function did not end with RTS */
}

/* $09760C-$097650  (23 instructions, 68 bytes) */
void jt_09760C(void) {
    M68K_OR8(g_m68k.d[4], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = (g_m68k.a[4] + 0x3c00); uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x3C00D2CC; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[6]);
    { uint32_t _ea = (g_m68k.a[5] + 0x3e00); uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    g_m68k.a[2] += (int16_t)(uint16_t)(g_m68k.d[6]);
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[7]);
    g_m68k.a[2] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[3]));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[7]);
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[4] + 0x3e00));
    M68K_ADD32(g_m68k.d[2], g_m68k.d[2]);
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[7]);
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[1]));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[7]);
    M68K_ADD32(g_m68k.d[2], _predec32(0));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[7]);
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[5] + 0x3e00));
    M68K_ADD32(g_m68k.d[2], bus_read32(0x3E00D4C7));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[7]);
    M68K_ADD32(g_m68k.d[2], _predec32(1));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[7]);
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[6] + 0x3e00));
    /* WARNING: function did not end with RTS */
}

/* $097650-$09765C  (5 instructions, 12 bytes) */
void jt_097650(void) {
    M68K_OR8(g_m68k.d[1], 0x2);
    M68K_ADDX16(g_m68k.d[1], g_m68k.d[0]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[4] -= 2; bus_write16(g_m68k.a[4], _mv); M68K_TST16(_mv); }
    M68K_ADDX16(g_m68k.d[1], g_m68k.d[5]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[4] -= 2; bus_write16(g_m68k.a[4], _mv); M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $09765C-$097668  (5 instructions, 12 bytes) */
void jt_09765C(void) {
    M68K_OR8(g_m68k.d[1], 0x2);
    { uint32_t _ea = g_m68k.a[1]; uint16_t _tmp = bus_read16(_ea); M68K_ADDX16(_tmp, _predec16(2)); bus_write16(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[4] -= 2; bus_write16(g_m68k.a[4], _mv); M68K_TST16(_mv); }
    M68K_ADDX16(g_m68k.d[1], g_m68k.d[6]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[4] -= 2; bus_write16(g_m68k.a[4], _mv); M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $097668-$097674  (5 instructions, 12 bytes) */
void jt_097668(void) {
    M68K_OR8(g_m68k.d[1], 0x2);
    M68K_ADDX16(g_m68k.d[1], g_m68k.d[1]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[4] -= 2; bus_write16(g_m68k.a[4], _mv); M68K_TST16(_mv); }
    M68K_ADDX16(g_m68k.d[1], g_m68k.d[6]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[4] -= 2; bus_write16(g_m68k.a[4], _mv); M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $097674-$097680  (5 instructions, 12 bytes) */
void jt_097674(void) {
    M68K_OR8(g_m68k.d[1], 0x2);
    { uint32_t _ea = g_m68k.a[1]; uint16_t _tmp = bus_read16(_ea); M68K_ADDX16(_tmp, _predec16(3)); bus_write16(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[4] -= 2; bus_write16(g_m68k.a[4], _mv); M68K_TST16(_mv); }
    M68K_ADDX16(g_m68k.d[1], g_m68k.d[5]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[4] -= 2; bus_write16(g_m68k.a[4], _mv); M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $097680-$09768C  (5 instructions, 12 bytes) */
void jt_097680(void) {
    M68K_OR8(g_m68k.d[1], 0x2);
    M68K_ADDX16(g_m68k.d[1], g_m68k.d[0]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    M68K_ADDX16(g_m68k.d[1], g_m68k.d[5]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $09768C-$097698  (5 instructions, 12 bytes) */
void jt_09768C(void) {
    M68K_OR8(g_m68k.d[1], 0x2);
    { uint32_t _ea = g_m68k.a[1]; uint16_t _tmp = bus_read16(_ea); M68K_ADDX16(_tmp, _predec16(2)); bus_write16(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    M68K_ADDX16(g_m68k.d[1], g_m68k.d[6]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $097698-$0976A4  (5 instructions, 12 bytes) */
void jt_097698(void) {
    M68K_OR8(g_m68k.d[1], 0x2);
    M68K_ADDX16(g_m68k.d[1], g_m68k.d[1]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    M68K_ADDX16(g_m68k.d[1], g_m68k.d[6]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0976A4-$0976B0  (5 instructions, 12 bytes) */
void jt_0976A4(void) {
    M68K_OR8(g_m68k.d[1], 0x2);
    { uint32_t _ea = g_m68k.a[1]; uint16_t _tmp = bus_read16(_ea); M68K_ADDX16(_tmp, _predec16(3)); bus_write16(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    M68K_ADDX16(g_m68k.d[1], g_m68k.d[5]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0976B0-$0976BC  (5 instructions, 12 bytes) */
void jt_0976B0(void) {
    M68K_OR8(g_m68k.d[1], 0x2);
    M68K_ADDX16(g_m68k.d[1], g_m68k.d[0]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[5] -= 2; bus_write16(g_m68k.a[5], _mv); M68K_TST16(_mv); }
    M68K_ADDX16(g_m68k.d[1], g_m68k.d[5]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[5] -= 2; bus_write16(g_m68k.a[5], _mv); M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0976BC-$0976C8  (5 instructions, 12 bytes) */
void jt_0976BC(void) {
    M68K_OR8(g_m68k.d[1], 0x2);
    { uint32_t _ea = g_m68k.a[1]; uint16_t _tmp = bus_read16(_ea); M68K_ADDX16(_tmp, _predec16(2)); bus_write16(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[5] -= 2; bus_write16(g_m68k.a[5], _mv); M68K_TST16(_mv); }
    M68K_ADDX16(g_m68k.d[1], g_m68k.d[6]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[5] -= 2; bus_write16(g_m68k.a[5], _mv); M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0976C8-$0976D4  (5 instructions, 12 bytes) */
void jt_0976C8(void) {
    M68K_OR8(g_m68k.d[1], 0x2);
    M68K_ADDX16(g_m68k.d[1], g_m68k.d[1]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[5] -= 2; bus_write16(g_m68k.a[5], _mv); M68K_TST16(_mv); }
    M68K_ADDX16(g_m68k.d[1], g_m68k.d[6]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[5] -= 2; bus_write16(g_m68k.a[5], _mv); M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0976D4-$0976E0  (5 instructions, 12 bytes) */
void jt_0976D4(void) {
    M68K_OR8(g_m68k.d[1], 0x2);
    { uint32_t _ea = g_m68k.a[1]; uint16_t _tmp = bus_read16(_ea); M68K_ADDX16(_tmp, _predec16(3)); bus_write16(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[5] -= 2; bus_write16(g_m68k.a[5], _mv); M68K_TST16(_mv); }
    M68K_ADDX16(g_m68k.d[1], g_m68k.d[5]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[5] -= 2; bus_write16(g_m68k.a[5], _mv); M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0976E0-$0976EC  (5 instructions, 12 bytes) */
void jt_0976E0(void) {
    M68K_OR8(g_m68k.d[1], 0x2);
    M68K_ADDX16(g_m68k.d[1], g_m68k.d[0]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[6]);
    M68K_ADDX16(g_m68k.d[1], g_m68k.d[5]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[6]);
    /* WARNING: function did not end with RTS */
}

/* $0976EC-$0976F8  (5 instructions, 12 bytes) */
void jt_0976EC(void) {
    M68K_OR8(g_m68k.d[1], 0x2);
    { uint32_t _ea = g_m68k.a[1]; uint16_t _tmp = bus_read16(_ea); M68K_ADDX16(_tmp, _predec16(2)); bus_write16(_ea, _tmp); }
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[6]);
    M68K_ADDX16(g_m68k.d[1], g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[6]);
    /* WARNING: function did not end with RTS */
}

/* $0976F8-$097704  (5 instructions, 12 bytes) */
void jt_0976F8(void) {
    M68K_OR8(g_m68k.d[1], 0x2);
    M68K_ADDX16(g_m68k.d[1], g_m68k.d[1]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[6]);
    M68K_ADDX16(g_m68k.d[1], g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[6]);
    /* WARNING: function did not end with RTS */
}

/* $097704-$097710  (5 instructions, 12 bytes) */
void jt_097704(void) {
    M68K_OR8(g_m68k.d[1], 0x2);
    { uint32_t _ea = g_m68k.a[1]; uint16_t _tmp = bus_read16(_ea); M68K_ADDX16(_tmp, _predec16(3)); bus_write16(_ea, _tmp); }
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[6]);
    M68K_ADDX16(g_m68k.d[1], g_m68k.d[5]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[6]);
    /* WARNING: function did not end with RTS */
}

/* $097710-$097778  (41 instructions, 104 bytes) */
void jt_097710(void) {
    M68K_OR8(g_m68k.d[7], 0x4);
    M68K_ADD16(g_m68k.d[2], bus_read16(0x003700));
    M68K_ADD32(g_m68k.d[2], g_m68k.d[4]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[3]));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[2], _predec32(2));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    M68K_ADD16(g_m68k.d[2], bus_read16(0x3700D485));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[4]));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[2], _predec32(3));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    M68K_ADD16(g_m68k.d[2], bus_read16(0x9ae36));
    M68K_ADD32(g_m68k.d[2], g_m68k.d[6]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[5]));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[2], _predec32(4));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    g_m68k.a[2] += (int16_t)(uint16_t)(_postinc16(1));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    g_m68k.a[2] += (int16_t)(uint16_t)(_postinc16(4));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    g_m68k.a[2] += (int16_t)(uint16_t)(_postinc16(7));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    g_m68k.a[2] += (int16_t)(uint16_t)(_predec16(2));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[3] * 8));
    M68K_ADD32(g_m68k.d[2], /* UNHANDLED_READ: (a16, d3.w * 8) */ 0);
    g_m68k.a[2] += (int16_t)(uint16_t)(g_m68k.a[0]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[2], _predec32(3));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[3] * 8));
    M68K_ADD32(g_m68k.d[2], 0x3700d4c9);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[2], _predec32(4));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.d[3] * 8));
    /* WARNING: function did not end with RTS */
}

/* $097784-$0977F8  (45 instructions, 116 bytes) */
void jt_097784(void) {
    M68K_OR8(g_m68k.d[7], 0x4);
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[7] + 0x3700));
    M68K_ADD32(g_m68k.d[2], bus_read32(0x9ae8e));
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[3]));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[2], _predec32(2));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[3] * 8));
    M68K_ADD32(g_m68k.d[2], /* UNHANDLED_READ: (a16, d3.w * 8) */ 0);
    g_m68k.a[2] += (int16_t)(uint16_t)(g_m68k.a[0]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[2], _predec32(3));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[3] * 8));
    M68K_ADD32(g_m68k.d[2], 0x3700d4c9);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[2], _predec32(4));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    g_m68k.a[2] += (int16_t)(uint16_t)(_predec16(3));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    g_m68k.a[2] += (int16_t)(uint16_t)(_predec16(6));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    g_m68k.a[2] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[1] + 0x3700));
    g_m68k.a[2] += (int16_t)(uint16_t)(_predec16(2));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    M68K_ADD16(g_m68k.d[2], bus_read16(0x3700D485));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[4]));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[2], _predec32(3));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    M68K_ADD16(g_m68k.d[2], bus_read16(0x9aeda));
    M68K_ADD32(g_m68k.d[2], g_m68k.d[6]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[5]));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[2], _predec32(4));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    M68K_ADD16(g_m68k.d[2], /* UNHANDLED_READ: (a16, d3.w * 8) */ 0);
    M68K_ADD32(g_m68k.d[2], g_m68k.d[7]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[6]));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[2], _predec32(5));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0977F8-$097860  (41 instructions, 104 bytes) */
void jt_0977F8(void) {
    M68K_OR8(g_m68k.d[7], 0x4);
    M68K_ADD16(g_m68k.d[2], bus_read16(0x003A00));
    M68K_ADD32(g_m68k.d[2], g_m68k.d[4]);
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[5]);
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[3]));
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[5]);
    M68K_ADD32(g_m68k.d[2], _predec32(2));
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[5]);
    M68K_ADD16(g_m68k.d[2], bus_read16(0x3A00D485));
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[5]);
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[4]));
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[5]);
    M68K_ADD32(g_m68k.d[2], _predec32(3));
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[5]);
    M68K_ADD16(g_m68k.d[2], bus_read16(0x9b21e));
    M68K_ADD32(g_m68k.d[2], g_m68k.d[6]);
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[5]);
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[5]));
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[5]);
    M68K_ADD32(g_m68k.d[2], _predec32(4));
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[5]);
    g_m68k.a[2] += (int16_t)(uint16_t)(_postinc16(1));
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[5]);
    g_m68k.a[2] += (int16_t)(uint16_t)(_postinc16(4));
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[5]);
    g_m68k.a[2] += (int16_t)(uint16_t)(_postinc16(7));
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[5]);
    g_m68k.a[2] += (int16_t)(uint16_t)(_predec16(2));
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[5]);
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[0] + 0 + (int32_t)g_m68k.d[3] * 2));
    M68K_ADD32(g_m68k.d[2], bus_read32(0x97842 + (int32_t)g_m68k.d[3] * 2));
    g_m68k.a[2] += (int16_t)(uint16_t)(g_m68k.a[0]);
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[5]);
    M68K_ADD32(g_m68k.d[2], _predec32(3));
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[5]);
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[1] + 0 + (int32_t)g_m68k.d[3] * 2));
    M68K_ADD32(g_m68k.d[2], 0x3a00d4c9);
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[5]);
    M68K_ADD32(g_m68k.d[2], _predec32(4));
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[5]);
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[2] + 0 + (int32_t)g_m68k.d[3] * 2));
    /* WARNING: function did not end with RTS */
}

/* $09786C-$0978E0  (45 instructions, 116 bytes) */
void jt_09786C(void) {
    M68K_OR8(g_m68k.d[7], 0x4);
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[7] + 0x3a00));
    M68K_ADD32(g_m68k.d[2], bus_read32(0x9b276));
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[3]));
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[5]);
    M68K_ADD32(g_m68k.d[2], _predec32(2));
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[5]);
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[0] + 0 + (int32_t)g_m68k.d[3] * 2));
    M68K_ADD32(g_m68k.d[2], bus_read32(0x97886 + (int32_t)g_m68k.d[3] * 2));
    g_m68k.a[2] += (int16_t)(uint16_t)(g_m68k.a[0]);
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[5]);
    M68K_ADD32(g_m68k.d[2], _predec32(3));
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[5]);
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[1] + 0 + (int32_t)g_m68k.d[3] * 2));
    M68K_ADD32(g_m68k.d[2], 0x3a00d4c9);
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[5]);
    M68K_ADD32(g_m68k.d[2], _predec32(4));
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[5]);
    g_m68k.a[2] += (int16_t)(uint16_t)(_predec16(3));
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[5]);
    g_m68k.a[2] += (int16_t)(uint16_t)(_predec16(6));
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[5]);
    g_m68k.a[2] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[1] + 0x3a00));
    g_m68k.a[2] += (int16_t)(uint16_t)(_predec16(2));
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[5]);
    M68K_ADD16(g_m68k.d[2], bus_read16(0x3A00D485));
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[5]);
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[4]));
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[5]);
    M68K_ADD32(g_m68k.d[2], _predec32(3));
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[5]);
    M68K_ADD16(g_m68k.d[2], bus_read16(0x9b2c2));
    M68K_ADD32(g_m68k.d[2], g_m68k.d[6]);
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[5]);
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[5]));
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[5]);
    M68K_ADD32(g_m68k.d[2], _predec32(4));
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[5]);
    M68K_ADD16(g_m68k.d[2], bus_read16(0x978d2 + (int32_t)g_m68k.d[3] * 2));
    M68K_ADD32(g_m68k.d[2], g_m68k.d[7]);
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[5]);
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[6]));
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[5]);
    M68K_ADD32(g_m68k.d[2], _predec32(5));
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[5]);
    /* WARNING: function did not end with RTS */
}

/* $0978E0-$097904  (16 instructions, 36 bytes) */
void jt_0978E0(void) {
    M68K_OR8(g_m68k.d[7], 0x4);
    g_m68k.a[1] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[4]));
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[5]);
    M68K_ADD32(g_m68k.d[2], g_m68k.a[0]);
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[5]);
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[7]));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    M68K_ADD16(g_m68k.d[2], 0x3800);
    M68K_ADD32(g_m68k.d[2], g_m68k.a[1]);
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[4]);
    M68K_ADD32(g_m68k.d[2], _postinc32(0));
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[4]);
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[4]);
    /* WARNING: function did not end with RTS */
}

/* $097954-$09795C  (2 instructions, 8 bytes) */
void jt_097954(void) {
    M68K_OR8(g_m68k.d[7], 0x4);
    { uint32_t _ea = (g_m68k.a[3] + 0x3a00); uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0979C8-$0979EC  (16 instructions, 36 bytes) */
void jt_0979C8(void) {
    M68K_OR8(g_m68k.d[7], 0x4);
    g_m68k.a[1] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[4]));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[2], g_m68k.a[0]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[7]));
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[4]);
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[4]);
    M68K_ADD16(g_m68k.d[2], 0x3a00);
    M68K_ADD32(g_m68k.d[2], g_m68k.a[1]);
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[5]);
    M68K_ADD32(g_m68k.d[2], _postinc32(0));
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[5]);
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[5]);
    /* WARNING: function did not end with RTS */
}

/* $097A3C-$097A44  (2 instructions, 8 bytes) */
void jt_097A3C(void) {
    M68K_OR8(g_m68k.d[7], 0x4);
    { uint32_t _ea = (g_m68k.a[3] + 0x3700); uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $097AB0-$097AB4  (1 instructions, 4 bytes) */
void jt_097AB0(void) {
    M68K_OR8(g_m68k.d[7], 0x4);
    /* WARNING: function did not end with RTS */
}

/* $097B24-$097B58  (22 instructions, 52 bytes) */
void jt_097B24(void) {
    M68K_OR8(g_m68k.d[7], 0x4);
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[6] + 0 + (int32_t)g_m68k.d[3] * 8));
    g_m68k.a[2] += (int16_t)(uint16_t)(g_m68k.d[2]);
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[7]);
    g_m68k.a[2] += (int16_t)(uint16_t)(g_m68k.a[7]);
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[7]);
    g_m68k.a[2] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[5]));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[7]);
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[7] + 0 + (int32_t)g_m68k.d[3] * 8));
    g_m68k.a[2] += (int16_t)(uint16_t)(g_m68k.d[3]);
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[7]);
    g_m68k.a[2] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[0]));
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.a[2] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[6]));
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[6]);
    M68K_ADD32(g_m68k.d[2], bus_read32(0x003E00));
    g_m68k.a[2] += (int16_t)(uint16_t)(g_m68k.d[4]);
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[7]);
    g_m68k.a[2] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[1]));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[7]);
    g_m68k.a[2] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[7]));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[7]);
    /* WARNING: function did not end with RTS */
}

/* $097B98-$097B9C  (1 instructions, 4 bytes) */
void jt_097B98(void) {
    M68K_OR8(g_m68k.d[7], 0x4);
    /* WARNING: function did not end with RTS */
}

/* $097C0C-$097C40  (22 instructions, 52 bytes) */
void jt_097C0C(void) {
    M68K_OR8(g_m68k.d[7], 0x4);
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[6] + 0 + (int32_t)g_m68k.d[3] * 4));
    g_m68k.a[2] += (int16_t)(uint16_t)(g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[6] -= 2; bus_write16(g_m68k.a[6], _mv); M68K_TST16(_mv); }
    g_m68k.a[2] += (int16_t)(uint16_t)(g_m68k.a[7]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[6] -= 2; bus_write16(g_m68k.a[6], _mv); M68K_TST16(_mv); }
    g_m68k.a[2] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[5]));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[6] -= 2; bus_write16(g_m68k.a[6], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[7] + 0 + (int32_t)g_m68k.d[3] * 4));
    g_m68k.a[2] += (int16_t)(uint16_t)(g_m68k.d[3]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[6] -= 2; bus_write16(g_m68k.a[6], _mv); M68K_TST16(_mv); }
    g_m68k.a[2] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[0]));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[6] -= 2; bus_write16(g_m68k.a[6], _mv); M68K_TST16(_mv); }
    g_m68k.a[2] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[6]));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[6] -= 2; bus_write16(g_m68k.a[6], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[2], bus_read32(0x003D00));
    g_m68k.a[2] += (int16_t)(uint16_t)(g_m68k.d[4]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[6] -= 2; bus_write16(g_m68k.a[6], _mv); M68K_TST16(_mv); }
    g_m68k.a[2] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[1]));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[6] -= 2; bus_write16(g_m68k.a[6], _mv); M68K_TST16(_mv); }
    g_m68k.a[2] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[7]));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[6] -= 2; bus_write16(g_m68k.a[6], _mv); M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $097C80-$097CF4  (45 instructions, 116 bytes) */
void jt_097C80(void) {
    M68K_OR8(g_m68k.d[7], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_ADDX8(_tmp, _predec8(4)); bus_write8(_ea, _tmp); }
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[7]);
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[7]);
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[7]);
    g_m68k.a[1] += (int16_t)(uint16_t)(_postinc16(1));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[6] -= 2; bus_write16(g_m68k.a[6], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[0]));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[6] -= 2; bus_write16(g_m68k.a[6], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[2], _postinc32(7));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[6] -= 2; bus_write16(g_m68k.a[6], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[4] + 0x3d00));
    M68K_ADD32(g_m68k.d[2], g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[6] -= 2; bus_write16(g_m68k.a[6], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[1]));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[6] -= 2; bus_write16(g_m68k.a[6], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[2], _predec32(0));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[6] -= 2; bus_write16(g_m68k.a[6], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[5] + 0x3d00));
    M68K_ADD32(g_m68k.d[2], g_m68k.d[3]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[6] -= 2; bus_write16(g_m68k.a[6], _mv); M68K_TST16(_mv); }
    g_m68k.a[2] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[5] + 0x3d00));
    g_m68k.a[2] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[7] + 0x3d00));
    g_m68k.a[2] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[1] + 0 + (int32_t)g_m68k.d[3] * 4));
    { uint32_t _ea = (g_m68k.a[5] + 0x3d00); uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    g_m68k.a[2] += (int16_t)(uint16_t)(g_m68k.d[6]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[6] -= 2; bus_write16(g_m68k.a[6], _mv); M68K_TST16(_mv); }
    g_m68k.a[2] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[3]));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[6] -= 2; bus_write16(g_m68k.a[6], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[4] + 0x3d00));
    M68K_ADD32(g_m68k.d[2], g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[6] -= 2; bus_write16(g_m68k.a[6], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[1]));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[6] -= 2; bus_write16(g_m68k.a[6], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[2], _predec32(0));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[6] -= 2; bus_write16(g_m68k.a[6], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[5] + 0x3d00));
    M68K_ADD32(g_m68k.d[2], bus_read32(0x3D00D4C7));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[6] -= 2; bus_write16(g_m68k.a[6], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[2], _predec32(1));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[6] -= 2; bus_write16(g_m68k.a[6], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[6] + 0x3d00));
    /* WARNING: function did not end with RTS */
}

/* $097CF4-$097D68  (43 instructions, 116 bytes) */
void jt_097CF4(void) {
    M68K_OR8(g_m68k.d[7], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = (g_m68k.a[4] + 0x3e00); uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x3E00D2CC; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[7]);
    { uint32_t _ea = (g_m68k.a[5] + 0x3d00); uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    g_m68k.a[2] += (int16_t)(uint16_t)(g_m68k.d[6]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[6] -= 2; bus_write16(g_m68k.a[6], _mv); M68K_TST16(_mv); }
    g_m68k.a[2] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[3]));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[6] -= 2; bus_write16(g_m68k.a[6], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[4] + 0x3d00));
    M68K_ADD32(g_m68k.d[2], g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[6] -= 2; bus_write16(g_m68k.a[6], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[1]));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[6] -= 2; bus_write16(g_m68k.a[6], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[2], _predec32(0));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[6] -= 2; bus_write16(g_m68k.a[6], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[5] + 0x3d00));
    M68K_ADD32(g_m68k.d[2], bus_read32(0x3D00D4F3));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[6] -= 2; bus_write16(g_m68k.a[6], _mv); M68K_TST16(_mv); }
    g_m68k.a[2] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[5] + 0 + (int32_t)g_m68k.d[3] * 4));
    g_m68k.a[2] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[7] + 0 + (int32_t)g_m68k.d[3] * 4));
    g_m68k.a[1] += (int16_t)(uint16_t)(_postinc16(1));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[6] -= 2; bus_write16(g_m68k.a[6], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[0]));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[6] -= 2; bus_write16(g_m68k.a[6], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[2], _postinc32(7));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[6] -= 2; bus_write16(g_m68k.a[6], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[4] + 0x3d00));
    M68K_ADD32(g_m68k.d[2], g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[6] -= 2; bus_write16(g_m68k.a[6], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[1]));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[6] -= 2; bus_write16(g_m68k.a[6], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[2], _predec32(0));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[6] -= 2; bus_write16(g_m68k.a[6], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[5] + 0x3d00));
    M68K_ADD32(g_m68k.d[2], g_m68k.d[3]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[6] -= 2; bus_write16(g_m68k.a[6], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[2]));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[6] -= 2; bus_write16(g_m68k.a[6], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[2], _predec32(1));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[6] -= 2; bus_write16(g_m68k.a[6], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[6] + 0x3d00));
    /* WARNING: function did not end with RTS */
}

/* $097D68-$097DDC  (45 instructions, 116 bytes) */
void jt_097D68(void) {
    M68K_OR8(g_m68k.d[7], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_ADDX8(_tmp, _predec8(4)); bus_write8(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[6] -= 2; bus_write16(g_m68k.a[6], _mv); M68K_TST16(_mv); }
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[6] -= 2; bus_write16(g_m68k.a[6], _mv); M68K_TST16(_mv); }
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[6] -= 2; bus_write16(g_m68k.a[6], _mv); M68K_TST16(_mv); }
    g_m68k.a[1] += (int16_t)(uint16_t)(_postinc16(1));
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[6]);
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[0]));
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[6]);
    M68K_ADD32(g_m68k.d[2], _postinc32(7));
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[6]);
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[4] + 0x3c00));
    M68K_ADD32(g_m68k.d[2], g_m68k.d[2]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[6]);
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[1]));
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[6]);
    M68K_ADD32(g_m68k.d[2], _predec32(0));
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[6]);
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[5] + 0x3c00));
    M68K_ADD32(g_m68k.d[2], g_m68k.d[3]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.a[2] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[5] + 0x3c00));
    g_m68k.a[2] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[7] + 0x3c00));
    g_m68k.a[2] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[1] + 0 + (int32_t)g_m68k.d[3] * 4));
    { uint32_t _ea = (g_m68k.a[5] + 0x3c00); uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    g_m68k.a[2] += (int16_t)(uint16_t)(g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.a[2] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[3]));
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[6]);
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[4] + 0x3c00));
    M68K_ADD32(g_m68k.d[2], g_m68k.d[2]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[6]);
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[1]));
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[6]);
    M68K_ADD32(g_m68k.d[2], _predec32(0));
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[6]);
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[5] + 0x3c00));
    M68K_ADD32(g_m68k.d[2], bus_read32(0x3C00D4C7));
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[6]);
    M68K_ADD32(g_m68k.d[2], _predec32(1));
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[6]);
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[6] + 0x3c00));
    /* WARNING: function did not end with RTS */
}

/* $097DDC-$097E50  (43 instructions, 116 bytes) */
void jt_097DDC(void) {
    M68K_OR8(g_m68k.d[7], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = (g_m68k.a[4] + 0x3d00); uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x3D00D2CC; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[6] -= 2; bus_write16(g_m68k.a[6], _mv); M68K_TST16(_mv); }
    { uint32_t _ea = (g_m68k.a[5] + 0x3c00); uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    g_m68k.a[2] += (int16_t)(uint16_t)(g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.a[2] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[3]));
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[6]);
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[4] + 0x3c00));
    M68K_ADD32(g_m68k.d[2], g_m68k.d[2]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[6]);
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[1]));
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[6]);
    M68K_ADD32(g_m68k.d[2], _predec32(0));
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[6]);
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[5] + 0x3c00));
    M68K_ADD32(g_m68k.d[2], bus_read32(0x3C00D4F3));
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.a[2] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[5] + 0 + (int32_t)g_m68k.d[3] * 4));
    g_m68k.a[2] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[7] + 0 + (int32_t)g_m68k.d[3] * 4));
    g_m68k.a[1] += (int16_t)(uint16_t)(_postinc16(1));
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[6]);
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[0]));
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[6]);
    M68K_ADD32(g_m68k.d[2], _postinc32(7));
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[6]);
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[4] + 0x3c00));
    M68K_ADD32(g_m68k.d[2], g_m68k.d[2]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[6]);
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[1]));
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[6]);
    M68K_ADD32(g_m68k.d[2], _predec32(0));
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[6]);
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[5] + 0x3c00));
    M68K_ADD32(g_m68k.d[2], g_m68k.d[3]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[6]);
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[2]));
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[6]);
    M68K_ADD32(g_m68k.d[2], _predec32(1));
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[6]);
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[6] + 0x3c00));
    /* WARNING: function did not end with RTS */
}

/* $097E50-$097E88  (17 instructions, 56 bytes) */
void jt_097E50(void) {
    M68K_OR8(g_m68k.d[3], 0x9);
    M68K_MULS(g_m68k.d[0], _postinc16(2));
    M68K_ADD8(g_m68k.d[0], 0x6);
    M68K_MULS(g_m68k.d[0], bus_read16(g_m68k.a[1] + 0x5c00));
    M68K_MULS(g_m68k.d[0], bus_read16(0x005C00));
    M68K_AND8(g_m68k.d[1], g_m68k.d[2]);
    M68K_ADD8(g_m68k.d[0], 0x6);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULS(g_m68k.d[0], _postinc16(3));
    M68K_ADD8(g_m68k.d[0], 0x6);
    M68K_MULS(g_m68k.d[0], bus_read16(g_m68k.a[2] + 0x5c00));
    M68K_MULS(g_m68k.d[0], bus_read16(0x5C00C203));
    M68K_ADD8(g_m68k.d[0], 0x6);
    /* WARNING: function did not end with RTS */
}

/* $097EC0-$097F14  (30 instructions, 84 bytes) */
void jt_097EC0(void) {
    M68K_OR8(g_m68k.d[3], 0x9);
    M68K_MULS(g_m68k.d[0], _postinc16(5));
    M68K_ADD8(g_m68k.d[0], 0x3);
    M68K_MULS(g_m68k.d[0], bus_read16(g_m68k.a[4] + 0x5600));
    M68K_MULS(g_m68k.d[0], bus_read16(0x97ece + (int16_t)(uint16_t)g_m68k.d[5] * 8));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULS(g_m68k.d[0], _postinc16(6));
    M68K_ADD8(g_m68k.d[0], 0x3);
    M68K_MULS(g_m68k.d[0], bus_read16(g_m68k.a[5] + 0x5600));
    M68K_MULS(g_m68k.d[0], 0x5600);
    M68K_AND8(g_m68k.d[1], g_m68k.d[5]);
    M68K_ADD8(g_m68k.d[0], 0x3);
    M68K_AND8(g_m68k.d[1], g_m68k.d[5]);
    M68K_ADD8(g_m68k.d[0], 0x3);
    M68K_AND8(g_m68k.d[1], g_m68k.d[5]);
    M68K_ADD8(g_m68k.d[0], 0x3);
    M68K_AND8(g_m68k.d[1], g_m68k.d[5]);
    M68K_ADD8(g_m68k.d[0], 0x3);
    M68K_AND8(g_m68k.d[1], g_m68k.d[5]);
    M68K_ADD8(g_m68k.d[0], 0x3);
    M68K_AND8(g_m68k.d[1], bus_read8(g_m68k.a[1]));
    M68K_ADD8(g_m68k.d[0], 0x3);
    M68K_MULS(g_m68k.d[0], _postinc16(7));
    M68K_ADD8(g_m68k.d[0], 0x3);
    M68K_MULS(g_m68k.d[0], bus_read16(g_m68k.a[6] + 0x5600));
    /* WARNING: function did not end with RTS */
}

/* $097F30-$097F3C  (4 instructions, 12 bytes) */
void jt_097F30(void) {
    M68K_OR8(g_m68k.d[3], 0x9);
    M68K_MULS(g_m68k.d[0], _predec16(0));
    M68K_ADD8(g_m68k.d[0], 0x3);
    M68K_MULS(g_m68k.d[0], bus_read16(g_m68k.a[7] + 0x5600));
    /* WARNING: function did not end with RTS */
}

/* $097FA0-$097FD4  (16 instructions, 52 bytes) */
void jt_097FA0(void) {
    M68K_OR8(g_m68k.d[3], 0x9);
    M68K_MULS(g_m68k.d[0], _predec16(3));
    M68K_ADD8(g_m68k.d[0], 0x6);
    M68K_MULS(g_m68k.d[0], bus_read16(g_m68k.a[2] + 0 + (int32_t)g_m68k.d[5] * 4));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULS(g_m68k.d[0], _predec16(4));
    M68K_ADD8(g_m68k.d[0], 0x6);
    M68K_MULS(g_m68k.d[0], bus_read16(g_m68k.a[3] + 0 + (int32_t)g_m68k.d[5] * 4));
    M68K_AND8(g_m68k.d[1], g_m68k.d[0]);
    M68K_ADD8(g_m68k.d[0], 0x6);
    /* WARNING: function did not end with RTS */
}

/* $098010-$098044  (16 instructions, 52 bytes) */
void jt_098010(void) {
    M68K_OR8(g_m68k.d[3], 0x9);
    M68K_MULS(g_m68k.d[0], _predec16(6));
    M68K_ADD8(g_m68k.d[0], 0x6);
    M68K_MULS(g_m68k.d[0], bus_read16(g_m68k.a[5] + 0 + (int32_t)g_m68k.d[5] * 4));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULS(g_m68k.d[0], _predec16(7));
    M68K_ADD8(g_m68k.d[0], 0x6);
    M68K_MULS(g_m68k.d[0], bus_read16(g_m68k.a[6] + 0 + (int32_t)g_m68k.d[5] * 4));
    M68K_AND8(g_m68k.d[1], g_m68k.d[0]);
    M68K_ADD8(g_m68k.d[0], 0x6);
    /* WARNING: function did not end with RTS */
}

/* $098080-$0980A8  (11 instructions, 40 bytes) */
void jt_098080(void) {
    M68K_OR8(g_m68k.d[1], 0x9);
    M68K_MULS(g_m68k.d[0], bus_read16(g_m68k.a[0] + 0x5c00));
    M68K_MULS(g_m68k.d[0], bus_read16(g_m68k.a[7] + 0 + (int32_t)g_m68k.d[5] * 4));
    M68K_AND8(g_m68k.d[1], g_m68k.d[1]);
    M68K_ADD8(g_m68k.d[0], 0x6);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0980A8-$0980DC  (25 instructions, 52 bytes) */
void jt_0980A8(void) {
    M68K_OR8(g_m68k.d[3], 0x4);
    M68K_AND8(g_m68k.d[1], bus_read8(g_m68k.a[2]));
    M68K_ADD8(g_m68k.d[0], 0x7);
    M68K_AND8(g_m68k.d[1], bus_read8(g_m68k.a[5]));
    M68K_ADD8(g_m68k.d[0], 0x7);
    M68K_AND8(g_m68k.d[1], _postinc8(0));
    M68K_ADD8(g_m68k.d[0], 0x7);
    M68K_AND8(g_m68k.d[1], _postinc8(3));
    M68K_ADD8(g_m68k.d[0], 0x7);
    M68K_AND8(g_m68k.d[1], bus_read8(g_m68k.a[3]));
    M68K_ADD8(g_m68k.d[0], 0x7);
    M68K_AND8(g_m68k.d[1], bus_read8(g_m68k.a[6]));
    M68K_ADD8(g_m68k.d[0], 0x7);
    M68K_AND8(g_m68k.d[1], _postinc8(1));
    M68K_ADD8(g_m68k.d[0], 0x7);
    M68K_AND8(g_m68k.d[1], _postinc8(4));
    M68K_ADD8(g_m68k.d[0], 0x7);
    M68K_AND8(g_m68k.d[1], bus_read8(g_m68k.a[4]));
    M68K_ADD8(g_m68k.d[0], 0x7);
    M68K_AND8(g_m68k.d[1], bus_read8(g_m68k.a[7]));
    M68K_ADD8(g_m68k.d[0], 0x7);
    M68K_AND8(g_m68k.d[1], _postinc8(2));
    M68K_ADD8(g_m68k.d[0], 0x7);
    M68K_AND8(g_m68k.d[1], _postinc8(5));
    M68K_ADD8(g_m68k.d[0], 0x7);
    /* WARNING: function did not end with RTS */
}

/* $0980DC-$0980EC  (5 instructions, 16 bytes) */
void jt_0980DC(void) {
    M68K_OR8(g_m68k.d[2], 0x9);
    M68K_AND8(g_m68k.d[1], _postinc8(6));
    M68K_ADD8(g_m68k.d[0], 0x6);
    M68K_AND8(g_m68k.d[1], bus_read8(g_m68k.a[5] + 0x5c00));
    M68K_AND8(g_m68k.d[1], bus_read8(0x980ea + (int32_t)g_m68k.d[5] * 4));
    /* WARNING: function did not end with RTS */
}

/* $098128-$098158  (15 instructions, 48 bytes) */
void jt_098128(void) {
    M68K_OR8(g_m68k.d[3], 0x9);
    M68K_AND8(g_m68k.d[1], _predec8(0));
    M68K_ADD8(g_m68k.d[0], 0x6);
    M68K_AND8(g_m68k.d[1], bus_read8(g_m68k.a[7] + 0x5c00));
    M68K_AND8(g_m68k.d[1], g_m68k.d[1]);
    M68K_ADD8(g_m68k.d[0], 0x6);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND8(g_m68k.d[1], _predec8(1));
    M68K_ADD8(g_m68k.d[0], 0x6);
    M68K_AND8(g_m68k.d[1], bus_read8(g_m68k.a[0] + 0 + (int32_t)g_m68k.d[5] * 4));
    /* WARNING: function did not end with RTS */
}

/* $098198-$0981A4  (4 instructions, 12 bytes) */
void jt_098198(void) {
    M68K_OR8(g_m68k.d[3], 0x9);
    M68K_AND8(g_m68k.d[1], _predec8(3));
    M68K_ADD8(g_m68k.d[0], 0x6);
    M68K_AND8(g_m68k.d[1], bus_read8(g_m68k.a[2] + 0 + (int32_t)g_m68k.d[5] * 4));
    /* WARNING: function did not end with RTS */
}

/* $098208-$09823C  (17 instructions, 52 bytes) */
void jt_098208(void) {
    M68K_OR8(g_m68k.d[5], 0x9);
    M68K_AND8(g_m68k.d[1], _predec8(6));
    M68K_ADD8(g_m68k.d[0], 0x3);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND16(g_m68k.d[1], g_m68k.d[2]);
    M68K_ADD8(g_m68k.d[0], 0x3);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND8(g_m68k.d[1], _predec8(7));
    M68K_ADD8(g_m68k.d[0], 0x3);
    M68K_AND8(g_m68k.d[1], bus_read8(g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.d[5] * 8));
    M68K_AND16(g_m68k.d[1], g_m68k.d[3]);
    M68K_ADD8(g_m68k.d[0], 0x3);
    /* WARNING: function did not end with RTS */
}

/* $0982C0-$0982D0  (4 instructions, 16 bytes) */
void jt_0982C0(void) {
    M68K_OR8(g_m68k.d[3], 0x9);
    M68K_AND8(g_m68k.d[1], bus_read8(g_m68k.a[3] + 0x5700));
    M68K_AND8(g_m68k.d[1], bus_read8(0x5700C247));
    M68K_SUB8(g_m68k.d[0], 0x3);
    /* WARNING: function did not end with RTS */
}
