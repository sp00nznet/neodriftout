/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $0979C8 - $098B20 */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

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

/* $098330-$0983A0  (37 instructions, 112 bytes) */
void jt_098330(void) {
    M68K_OR8(g_m68k.d[3], 0x9);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND16(g_m68k.d[1], bus_read16(g_m68k.a[7]));
    M68K_ADD8(g_m68k.d[0], 0x3);
    M68K_AND16(g_m68k.d[1], _postinc16(4));
    M68K_ADD8(g_m68k.d[0], 0x3);
    M68K_AND16(g_m68k.d[1], _predec16(3));
    M68K_ADD8(g_m68k.d[0], 0x3);
    M68K_AND16(g_m68k.d[1], bus_read16(g_m68k.a[2] + 0x5600));
    M68K_AND16(g_m68k.d[1], bus_read16(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[5] * 8));
    M68K_AND16(g_m68k.d[1], bus_read16(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[5] * 8));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND16(g_m68k.d[1], _postinc16(0));
    M68K_ADD8(g_m68k.d[0], 0x3);
    M68K_AND16(g_m68k.d[1], _postinc16(5));
    M68K_ADD8(g_m68k.d[0], 0x3);
    M68K_AND16(g_m68k.d[1], _predec16(4));
    M68K_ADD8(g_m68k.d[0], 0x3);
    M68K_AND16(g_m68k.d[1], bus_read16(g_m68k.a[3] + 0x5600));
    M68K_AND16(g_m68k.d[1], bus_read16(g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.d[5] * 8));
    M68K_AND16(g_m68k.d[1], bus_read16(g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.d[5] * 8));
    M68K_AND16(g_m68k.d[1], bus_read16(g_m68k.a[4]));
    M68K_ADD8(g_m68k.d[1], 0x3);
    M68K_AND16(g_m68k.d[1], bus_read16(g_m68k.a[5]));
    M68K_ADD8(g_m68k.d[1], 0x3);
    M68K_AND16(g_m68k.d[1], bus_read16(g_m68k.a[6]));
    M68K_ADD8(g_m68k.d[1], 0x3);
    /* WARNING: function did not end with RTS */
}

/* $0983A0-$098434  (51 instructions, 148 bytes) */
void jt_0983A0(void) {
    M68K_OR8(g_m68k.d[4], 0x9);
    M68K_AND16(g_m68k.d[1], _postinc16(1));
    M68K_ADD8(g_m68k.d[0], 0x3);
    M68K_AND16(g_m68k.d[1], _postinc16(6));
    M68K_ADD8(g_m68k.d[0], 0x3);
    M68K_AND16(g_m68k.d[1], _predec16(5));
    M68K_ADD8(g_m68k.d[0], 0x3);
    M68K_AND16(g_m68k.d[1], bus_read16(g_m68k.a[4] + 0x5600));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND16(g_m68k.d[1], _postinc16(2));
    M68K_ADD8(g_m68k.d[0], 0x3);
    M68K_AND16(g_m68k.d[1], _postinc16(7));
    M68K_ADD8(g_m68k.d[0], 0x3);
    M68K_AND16(g_m68k.d[1], _predec16(6));
    M68K_ADD8(g_m68k.d[0], 0x3);
    M68K_AND16(g_m68k.d[1], bus_read16(g_m68k.a[5] + 0x5600));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND16(g_m68k.d[1], _predec16(0));
    M68K_ADD8(g_m68k.d[0], 0x3);
    M68K_AND16(g_m68k.d[1], _predec16(7));
    M68K_ADD8(g_m68k.d[0], 0x3);
    M68K_AND16(g_m68k.d[1], bus_read16(g_m68k.a[6] + 0x5600));
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
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND16(g_m68k.d[1], _predec16(1));
    M68K_ADD8(g_m68k.d[0], 0x3);
    M68K_AND16(g_m68k.d[1], bus_read16(g_m68k.a[0] + 0x5600));
    M68K_AND16(g_m68k.d[1], bus_read16(g_m68k.a[7] + 0x5600));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $098434-$09845C  (13 instructions, 40 bytes) */
void jt_098434(void) {
    M68K_OR8(g_m68k.d[1], 0x9);
    M68K_AND16(g_m68k.d[1], _postinc16(3));
    M68K_ADD8(g_m68k.d[0], 0x7);
    M68K_AND16(g_m68k.d[1], _predec16(2));
    M68K_ADD8(g_m68k.d[0], 0x7);
    M68K_AND16(g_m68k.d[1], bus_read16(g_m68k.a[1] + 0x5e00));
    M68K_AND16(g_m68k.d[1], bus_read16(g_m68k.a[0] + 0 + (int32_t)g_m68k.d[5] * 8));
    M68K_AND16(g_m68k.d[1], _predec16(2));
    M68K_ADD8(g_m68k.d[0], 0x7);
    M68K_AND16(g_m68k.d[1], bus_read16(g_m68k.a[1] + 0x5e00));
    M68K_AND16(g_m68k.d[1], bus_read16(g_m68k.a[0] + 0 + (int32_t)g_m68k.d[5] * 8));
    M68K_AND16(g_m68k.d[1], bus_read16(g_m68k.a[5] + 0 + (int32_t)g_m68k.d[5] * 8));
    M68K_AND16(g_m68k.d[1], bus_read16(g_m68k.a[6] + 0 + (int32_t)g_m68k.d[5] * 8));
    /* WARNING: function did not end with RTS */
}

/* $09845C-$0984C0  (37 instructions, 100 bytes) */
void jt_09845C(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_MULU(g_m68k.d[0], _predec16(7));
    M68K_ADD8(g_m68k.d[0], 0x1);
    M68K_MULU(g_m68k.d[0], bus_read16(g_m68k.a[6] + 0 + (int16_t)(uint16_t)g_m68k.d[5] * 2));
    /* TODO $098468: abcd.b d6, d0  [C1 06] */
    M68K_ADD8(g_m68k.d[0], 0x1);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_ADD8(g_m68k.d[0], 0x1);
    M68K_MULU(g_m68k.d[0], bus_read16(g_m68k.a[0] + 0x5200));
    M68K_MULU(g_m68k.d[0], bus_read16(g_m68k.a[7] + 0 + (int16_t)(uint16_t)g_m68k.d[5] * 2));
    /* TODO $098478: abcd.b d7, d0  [C1 07] */
    M68K_ADD8(g_m68k.d[0], 0x1);
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_ADD8(g_m68k.d[0], 0x1);
    M68K_MULU(g_m68k.d[0], bus_read16(g_m68k.a[1] + 0x5200));
    M68K_MULU(g_m68k.d[0], bus_read16(0x005200));
    /* TODO $098488: abcd.b -(a0), -(a0)  [C1 08] */
    M68K_ADD8(g_m68k.d[0], 0x1);
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_ADD8(g_m68k.d[0], 0x1);
    M68K_MULU(g_m68k.d[0], bus_read16(g_m68k.a[2] + 0x5200));
    M68K_MULU(g_m68k.d[0], bus_read16(0x5200C109));
    M68K_ADD8(g_m68k.d[0], 0x1);
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_ADD8(g_m68k.d[0], 0x1);
    M68K_MULU(g_m68k.d[0], bus_read16(g_m68k.a[3] + 0x5200));
    M68K_MULU(g_m68k.d[0], bus_read16(0x9d6a6));
    /* TODO $0984A8: abcd.b -(a2), -(a0)  [C1 0A] */
    M68K_ADD8(g_m68k.d[0], 0x1);
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_ADD8(g_m68k.d[0], 0x1);
    M68K_MULU(g_m68k.d[0], bus_read16(g_m68k.a[4] + 0x5200));
    M68K_MULU(g_m68k.d[0], bus_read16(0x984b6 + (int16_t)(uint16_t)g_m68k.d[5] * 2));
    /* TODO $0984B8: abcd.b -(a3), -(a0)  [C1 0B] */
    M68K_ADD8(g_m68k.d[0], 0x1);
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_ADD8(g_m68k.d[0], 0x1);
    /* WARNING: function did not end with RTS */
}

/* $0984C0-$0984D8  (8 instructions, 24 bytes) */
void jt_0984C0(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_MULU(g_m68k.d[0], bus_read16(g_m68k.a[5] + 0x5200));
    M68K_MULU(g_m68k.d[0], 0x5200);
    /* TODO $0984CC: abcd.b -(a4), -(a0)  [C1 0C] */
    M68K_ADD8(g_m68k.d[0], 0x1);
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_ADD8(g_m68k.d[0], 0x1);
    M68K_MULU(g_m68k.d[0], bus_read16(g_m68k.a[6] + 0x5200));
    /* WARNING: function did not end with RTS */
}

/* $098524-$098568  (29 instructions, 68 bytes) */
void jt_098524(void) {
    M68K_OR8(g_m68k.d[4], 0x4);
    M68K_MULU(g_m68k.d[0], bus_read16(g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.d[5] * 2));
    /* TODO $09852C: abcd.b d2, d0  [C1 02] */
    M68K_ADD8(g_m68k.d[0], 0x1);
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_ADD8(g_m68k.d[0], 0x1);
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_ADD8(g_m68k.d[0], 0x1);
    M68K_MULU(g_m68k.d[0], bus_read16(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[5] * 2));
    /* TODO $09853C: abcd.b d3, d0  [C1 03] */
    M68K_ADD8(g_m68k.d[0], 0x1);
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_ADD8(g_m68k.d[0], 0x1);
    { uint32_t _ea = g_m68k.a[5]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_ADD8(g_m68k.d[0], 0x1);
    M68K_MULU(g_m68k.d[0], bus_read16(g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.d[5] * 2));
    /* TODO $09854C: abcd.b d4, d0  [C1 04] */
    M68K_ADD8(g_m68k.d[0], 0x1);
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_ADD8(g_m68k.d[0], 0x1);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_ADD8(g_m68k.d[0], 0x1);
    M68K_MULU(g_m68k.d[0], bus_read16(g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.d[5] * 2));
    /* TODO $09855C: abcd.b d5, d0  [C1 05] */
    M68K_ADD8(g_m68k.d[0], 0x1);
    { uint32_t _ea = g_m68k.a[5]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_ADD8(g_m68k.d[0], 0x1);
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_ADD8(g_m68k.d[0], 0x1);
    /* WARNING: function did not end with RTS */
}

/* $098568-$098588  (15 instructions, 32 bytes) */
void jt_098568(void) {
    M68K_OR8(g_m68k.d[1], 0x7);
    M68K_CMP16(g_m68k.d[6], _predec16(1));
    M68K_ADD8(g_m68k.d[0], 0x1);
    M68K_CMP16(g_m68k.d[6], _predec16(1));
    M68K_ADD8(g_m68k.d[0], 0x1);
    M68K_CMP16(g_m68k.d[6], _predec16(1));
    M68K_ADD8(g_m68k.d[0], 0x1);
    M68K_CMP16(g_m68k.d[6], _predec16(1));
    M68K_ADD8(g_m68k.d[0], 0x1);
    M68K_CMP16(g_m68k.d[6], _predec16(1));
    M68K_ADD8(g_m68k.d[0], 0x1);
    M68K_CMP16(g_m68k.d[6], _predec16(1));
    M68K_ADD8(g_m68k.d[0], 0x1);
    M68K_CMP16(g_m68k.d[6], _predec16(2));
    M68K_ADD8(g_m68k.d[0], 0x1);
    /* WARNING: function did not end with RTS */
}

/* $098588-$0985A8  (15 instructions, 32 bytes) */
void jt_098588(void) {
    M68K_OR8(g_m68k.d[1], 0x7);
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_ADD8(g_m68k.d[0], 0x1);
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_ADD8(g_m68k.d[0], 0x1);
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_ADD8(g_m68k.d[0], 0x1);
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_ADD8(g_m68k.d[0], 0x1);
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_ADD8(g_m68k.d[0], 0x1);
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_ADD8(g_m68k.d[0], 0x1);
    { uint32_t _t = g_m68k.a[0]; g_m68k.a[0] = g_m68k.a[4]; g_m68k.a[4] = _t; }
    M68K_ADD8(g_m68k.d[0], 0x1);
    /* WARNING: function did not end with RTS */
}

/* $0985A8-$0985D4  (15 instructions, 44 bytes) */
void jt_0985A8(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[0], 0x1);
    { uint32_t _ea = (g_m68k.a[4] + 0x5300); uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x005300; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    { uint32_t _t = g_m68k.d[0]; g_m68k.d[0] = g_m68k.d[4]; g_m68k.d[4] = _t; }
    M68K_SUB8(g_m68k.d[0], 0x1);
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[0], 0x1);
    { uint32_t _ea = (g_m68k.a[5] + 0x5300); uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x5300C145; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[0], 0x1);
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[0], 0x1);
    { uint32_t _ea = (g_m68k.a[6] + 0x5300); uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $09860C-$098618  (4 instructions, 12 bytes) */
void jt_09860C(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[0], 0x1);
    { uint32_t _ea = (g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.d[5] * 2); uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $098670-$098694  (12 instructions, 36 bytes) */
void jt_098670(void) {
    M68K_OR8(g_m68k.d[2], 0x4);
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[1], 0x1);
    { uint32_t _ea = (g_m68k.a[5] + 0x5301); uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x5301C145; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[1], 0x1);
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[1], 0x1);
    { uint32_t _ea = (g_m68k.a[4] + 0x5301); uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x005301; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    { uint32_t _t = g_m68k.d[0]; g_m68k.d[0] = g_m68k.d[4]; g_m68k.d[4] = _t; }
    M68K_SUB8(g_m68k.d[1], 0x1);
    /* WARNING: function did not end with RTS */
}

/* $098694-$0986A4  (6 instructions, 16 bytes) */
void jt_098694(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    { uint32_t _t = g_m68k.a[0]; g_m68k.a[0] = g_m68k.a[5]; g_m68k.a[5] = _t; }
    M68K_ADD8(g_m68k.d[0], 0x2);
    { uint32_t _ea = g_m68k.a[4]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[0]); bus_write16(_ea, _tmp); }
    M68K_ADD8(g_m68k.d[0], 0x2);
    { uint32_t _ea = (g_m68k.a[4] + 0x5400); uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[0]); bus_write16(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0986F8-$098708  (6 instructions, 16 bytes) */
void jt_0986F8(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    { uint32_t _ea = g_m68k.a[3]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[0]); bus_write16(_ea, _tmp); }
    M68K_ADD8(g_m68k.d[0], 0x2);
    { uint32_t _ea = g_m68k.a[2]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[0]); bus_write16(_ea, _tmp); }
    M68K_ADD8(g_m68k.d[0], 0x2);
    { uint32_t _ea = (g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.d[5] * 4); uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[0]); bus_write16(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $09875C-$09876C  (5 instructions, 16 bytes) */
void jt_09875C(void) {
    M68K_OR8(g_m68k.d[4], 0x4);
    { uint32_t _ea = g_m68k.a[0]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[0]); bus_write16(_ea, _tmp); }
    M68K_ADD8(g_m68k.d[0], 0x2);
    { uint32_t _ea = (g_m68k.a[0] + 0x5400); uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[0]); bus_write16(_ea, _tmp); }
    { uint32_t _ea = 0x005400; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[0]); bus_write16(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0987A0-$098864  (72 instructions, 196 bytes) */
void jt_0987A0(void) {
    M68K_OR8(g_m68k.d[6], 0x8);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[2]; uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[0]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[0], 0x2);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[4]; uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[0]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[0], 0x2);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = (g_m68k.a[7] + 0x5500); uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[0]); bus_write32(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _t = g_m68k.d[0]; g_m68k.d[0] = g_m68k.a[5]; g_m68k.a[5] = _t; }
    M68K_SUB8(g_m68k.d[0], 0x2);
    { uint32_t _ea = g_m68k.a[3]; uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[0]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[0], 0x2);
    { uint32_t _ea = g_m68k.a[4]; uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[0]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[0], 0x2);
    { uint32_t _ea = g_m68k.a[5]; uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[0]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[0], 0x2);
    { uint32_t _ea = (g_m68k.a[3] + 0x5500); uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[0]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[5] * 4); uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[0]); bus_write32(_ea, _tmp); }
    { uint32_t _t = g_m68k.d[0]; g_m68k.d[0] = g_m68k.a[1]; g_m68k.a[1] = _t; }
    M68K_SUB8(g_m68k.d[0], 0x2);
    { uint32_t _t = g_m68k.d[0]; g_m68k.d[0] = g_m68k.a[3]; g_m68k.a[3] = _t; }
    M68K_SUB8(g_m68k.d[0], 0x2);
    { uint32_t _t = g_m68k.d[0]; g_m68k.d[0] = g_m68k.a[6]; g_m68k.a[6] = _t; }
    M68K_SUB8(g_m68k.d[0], 0x2);
    { uint32_t _ea = g_m68k.a[4]; uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[0]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[0], 0x2);
    { uint32_t _ea = g_m68k.a[5]; uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[0]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[0], 0x2);
    { uint32_t _ea = g_m68k.a[6]; uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[0]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[0], 0x2);
    { uint32_t _ea = (g_m68k.a[4] + 0x5500); uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[0]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[5] * 4); uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[0]); bus_write32(_ea, _tmp); }
    { uint32_t _t = g_m68k.d[0]; g_m68k.d[0] = g_m68k.a[2]; g_m68k.a[2] = _t; }
    M68K_SUB8(g_m68k.d[0], 0x2);
    { uint32_t _t = g_m68k.d[0]; g_m68k.d[0] = g_m68k.a[4]; g_m68k.a[4] = _t; }
    M68K_SUB8(g_m68k.d[0], 0x2);
    { uint32_t _t = g_m68k.d[0]; g_m68k.d[0] = g_m68k.a[7]; g_m68k.a[7] = _t; }
    M68K_SUB8(g_m68k.d[0], 0x2);
    { uint32_t _ea = g_m68k.a[5]; uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[0]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[0], 0x2);
    { uint32_t _ea = g_m68k.a[6]; uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[0]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[0], 0x2);
    { uint32_t _ea = g_m68k.a[7]; uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[0]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[0], 0x2);
    { uint32_t _ea = (g_m68k.a[5] + 0x5500); uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[0]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.d[5] * 4); uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[0]); bus_write32(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[0]; uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[0]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[0], 0x2);
    { uint32_t _ea = g_m68k.a[6]; uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[0]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[0], 0x2);
    { uint32_t _ea = g_m68k.a[7]; uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[0]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[0], 0x2);
    { uint32_t _ea = (g_m68k.a[0] + 0x5500); uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[0]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[6] + 0x5500); uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[0]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[5] * 4); uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[0]); bus_write32(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[7]; uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[0]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[0], 0x2);
    { uint32_t _ea = g_m68k.a[0]; uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[0]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[0], 0x2);
    { uint32_t _ea = (g_m68k.a[1] + 0x5500); uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[0]); bus_write32(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = (g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.d[5] * 4); uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[0]); bus_write32(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $098864-$09888C  (12 instructions, 40 bytes) */
void jt_098864(void) {
    M68K_OR8(g_m68k.d[6], 0x7);
    { uint32_t _ea = (g_m68k.a[7] + 0 + (int16_t)(uint16_t)g_m68k.d[5] * 4); uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[0]); bus_write32(_ea, _tmp); }
    M68K_MULS(g_m68k.d[0], g_m68k.d[2]);
    M68K_SUB8(g_m68k.d[0], 0x2);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = 0x005500; uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[0]); bus_write32(_ea, _tmp); }
    M68K_MULS(g_m68k.d[0], g_m68k.d[3]);
    M68K_SUB8(g_m68k.d[0], 0x2);
    /* WARNING: function did not end with RTS */
}

/* $098910-$0989D4  (71 instructions, 196 bytes) */
void jt_098910(void) {
    M68K_OR8(g_m68k.d[6], 0x8);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[0]; uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[0]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[0], 0x2);
    { uint32_t _ea = g_m68k.a[1]; uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[0]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[0], 0x2);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[4]; uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[0]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[0], 0x2);
    { uint32_t _ea = (g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.d[5] * 4); uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[0]); bus_write32(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[1]; uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[0]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[0], 0x2);
    { uint32_t _ea = g_m68k.a[3]; uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[0]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[0], 0x2);
    { uint32_t _ea = g_m68k.a[4]; uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[0]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[0], 0x2);
    { uint32_t _ea = g_m68k.a[5]; uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[0]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[0], 0x2);
    { uint32_t _ea = (g_m68k.a[6] + 0 + (int16_t)(uint16_t)g_m68k.d[5] * 4); uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[0]); bus_write32(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _t = g_m68k.d[0]; g_m68k.d[0] = g_m68k.a[1]; g_m68k.a[1] = _t; }
    M68K_SUB8(g_m68k.d[0], 0x2);
    { uint32_t _t = g_m68k.d[0]; g_m68k.d[0] = g_m68k.a[3]; g_m68k.a[3] = _t; }
    M68K_SUB8(g_m68k.d[0], 0x2);
    { uint32_t _ea = g_m68k.a[2]; uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[0]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[0], 0x2);
    { uint32_t _ea = g_m68k.a[4]; uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[0]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[0], 0x2);
    { uint32_t _ea = g_m68k.a[5]; uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[0]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[0], 0x2);
    { uint32_t _ea = g_m68k.a[6]; uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[0]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[0], 0x2);
    { uint32_t _ea = (g_m68k.a[4] + 0x5500); uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[0]); bus_write32(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _t = g_m68k.d[0]; g_m68k.d[0] = g_m68k.a[2]; g_m68k.a[2] = _t; }
    M68K_SUB8(g_m68k.d[0], 0x2);
    { uint32_t _ea = g_m68k.a[1]; uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[0]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[0], 0x2);
    { uint32_t _ea = g_m68k.a[3]; uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[0]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[0], 0x2);
    { uint32_t _ea = g_m68k.a[2]; uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[0]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[0], 0x2);
    { uint32_t _ea = g_m68k.a[6]; uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[0]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[0], 0x2);
    { uint32_t _ea = g_m68k.a[7]; uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[0]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[0], 0x2);
    { uint32_t _ea = (g_m68k.a[5] + 0x5500); uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[0]); bus_write32(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[0]; uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[0]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[0], 0x2);
    { uint32_t _ea = g_m68k.a[3]; uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[0]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[0], 0x2);
    { uint32_t _ea = g_m68k.a[7]; uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[0]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[0], 0x2);
    { uint32_t _ea = (g_m68k.a[0] + 0x5500); uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[0]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[6] + 0x5500); uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[0]); bus_write32(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = (g_m68k.a[2] + 0x5500); uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[0]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[1] + 0x5500); uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[0]); bus_write32(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0989D4-$0989F4  (9 instructions, 32 bytes) */
void jt_0989D4(void) {
    M68K_OR8(g_m68k.d[6], 0x7);
    { uint32_t _ea = (g_m68k.a[7] + 0x5500); uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[0]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[7] + 0 + (int16_t)(uint16_t)g_m68k.d[5] * 4); uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[0]); bus_write32(_ea, _tmp); }
    M68K_MULS(g_m68k.d[0], g_m68k.d[2]);
    M68K_SUB8(g_m68k.d[0], 0x2);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $098A80-$098A94  (9 instructions, 20 bytes) */
void jt_098A80(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_ADDX8(g_m68k.d[3], g_m68k.d[2]);
    M68K_ADD8(g_m68k.d[0], 0x8);
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_ADDX8(_tmp, _predec8(0)); bus_write8(_ea, _tmp); }
    M68K_ADD8(g_m68k.d[0], 0x8);
    M68K_ADDX8(g_m68k.d[3], g_m68k.d[3]);
    M68K_ADD8(g_m68k.d[0], 0x8);
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_ADDX8(_tmp, _predec8(1)); bus_write8(_ea, _tmp); }
    M68K_ADD8(g_m68k.d[0], 0x8);
    /* WARNING: function did not end with RTS */
}

/* $098A94-$098AA0  (5 instructions, 12 bytes) */
void jt_098A94(void) {
    M68K_OR8(g_m68k.d[2], 0x1);
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_ADDX8(_tmp, _predec8(6)); bus_write8(_ea, _tmp); }
    M68K_ADD8(g_m68k.d[0], 0x8);
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_ADDX8(_tmp, _predec8(7)); bus_write8(_ea, _tmp); }
    M68K_ADD8(g_m68k.d[0], 0x8);
    /* WARNING: function did not end with RTS */
}

/* $098AA0-$098AB4  (9 instructions, 20 bytes) */
void jt_098AA0(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_ADDX8(g_m68k.d[3], g_m68k.d[4]);
    M68K_ADD8(g_m68k.d[0], 0x8);
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_ADDX8(_tmp, _predec8(2)); bus_write8(_ea, _tmp); }
    M68K_ADD8(g_m68k.d[0], 0x8);
    M68K_ADDX8(g_m68k.d[3], g_m68k.d[5]);
    M68K_ADD8(g_m68k.d[0], 0x8);
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_ADDX8(_tmp, _predec8(3)); bus_write8(_ea, _tmp); }
    M68K_ADD8(g_m68k.d[0], 0x8);
    /* WARNING: function did not end with RTS */
}

/* $098AB4-$098AC0  (5 instructions, 12 bytes) */
void jt_098AB4(void) {
    M68K_OR8(g_m68k.d[2], 0x1);
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    M68K_ADD8(g_m68k.d[0], 0x8);
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    M68K_ADD8(g_m68k.d[0], 0x8);
    /* WARNING: function did not end with RTS */
}

/* $098AC0-$098AD4  (9 instructions, 20 bytes) */
void jt_098AC0(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_ADDX8(g_m68k.d[3], g_m68k.d[6]);
    M68K_ADD8(g_m68k.d[0], 0x8);
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_ADDX8(_tmp, _predec8(4)); bus_write8(_ea, _tmp); }
    M68K_ADD8(g_m68k.d[0], 0x8);
    M68K_ADDX8(g_m68k.d[3], g_m68k.d[7]);
    M68K_ADD8(g_m68k.d[0], 0x8);
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_ADDX8(_tmp, _predec8(5)); bus_write8(_ea, _tmp); }
    M68K_ADD8(g_m68k.d[0], 0x8);
    /* WARNING: function did not end with RTS */
}

/* $098AD4-$098AE0  (5 instructions, 12 bytes) */
void jt_098AD4(void) {
    M68K_OR8(g_m68k.d[2], 0x1);
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    M68K_ADD8(g_m68k.d[0], 0x8);
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    M68K_ADD8(g_m68k.d[0], 0x8);
    /* WARNING: function did not end with RTS */
}

/* $098AE0-$098AF4  (9 instructions, 20 bytes) */
void jt_098AE0(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_ADDX8(g_m68k.d[3], g_m68k.d[7]);
    M68K_ADD8(g_m68k.d[1], 0x8);
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_ADDX8(_tmp, _predec8(5)); bus_write8(_ea, _tmp); }
    M68K_ADD8(g_m68k.d[1], 0x8);
    M68K_ADDX8(g_m68k.d[3], g_m68k.d[6]);
    M68K_ADD8(g_m68k.d[1], 0x8);
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_ADDX8(_tmp, _predec8(4)); bus_write8(_ea, _tmp); }
    M68K_ADD8(g_m68k.d[1], 0x8);
    /* WARNING: function did not end with RTS */
}

/* $098AF4-$098B00  (5 instructions, 12 bytes) */
void jt_098AF4(void) {
    M68K_OR8(g_m68k.d[2], 0x1);
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    M68K_ADD8(g_m68k.d[1], 0x8);
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    M68K_ADD8(g_m68k.d[1], 0x8);
    /* WARNING: function did not end with RTS */
}

/* $098B00-$098B14  (9 instructions, 20 bytes) */
void jt_098B00(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_ADDX8(g_m68k.d[3], g_m68k.d[5]);
    M68K_ADD8(g_m68k.d[1], 0x8);
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_ADDX8(_tmp, _predec8(3)); bus_write8(_ea, _tmp); }
    M68K_ADD8(g_m68k.d[1], 0x8);
    M68K_ADDX8(g_m68k.d[3], g_m68k.d[4]);
    M68K_ADD8(g_m68k.d[1], 0x8);
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_ADDX8(_tmp, _predec8(2)); bus_write8(_ea, _tmp); }
    M68K_ADD8(g_m68k.d[1], 0x8);
    /* WARNING: function did not end with RTS */
}

/* $098B14-$098B20  (5 instructions, 12 bytes) */
void jt_098B14(void) {
    M68K_OR8(g_m68k.d[2], 0x1);
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    M68K_ADD8(g_m68k.d[1], 0x8);
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    M68K_ADD8(g_m68k.d[1], 0x8);
    /* WARNING: function did not end with RTS */
}
