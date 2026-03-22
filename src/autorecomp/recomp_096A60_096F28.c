/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $096A60 - $096F28 */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

/* $096A60-$096A70  (7 instructions, 16 bytes) */
void jt_096A60(void) {
    M68K_OR8(g_m68k.d[1], 0x3);
    M68K_ADD32(g_m68k.d[1], bus_read32(g_m68k.a[4]));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[1], _postinc32(4));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[1], _predec32(1));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $096A70-$096A80  (7 instructions, 16 bytes) */
void jt_096A70(void) {
    M68K_OR8(g_m68k.d[1], 0x3);
    M68K_ADD32(g_m68k.d[1], bus_read32(g_m68k.a[5]));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[1], _postinc32(5));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[1], _predec32(2));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $096A80-$096A90  (7 instructions, 16 bytes) */
void jt_096A80(void) {
    M68K_OR8(g_m68k.d[1], 0x3);
    M68K_ADD32(g_m68k.d[1], bus_read32(g_m68k.a[6]));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[1], _postinc32(6));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[1], _predec32(3));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $096A90-$096AA0  (7 instructions, 16 bytes) */
void jt_096A90(void) {
    M68K_OR8(g_m68k.d[1], 0x3);
    M68K_ADD32(g_m68k.d[1], bus_read32(g_m68k.a[7]));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[7]);
    M68K_ADD32(g_m68k.d[1], g_m68k.a[0]);
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[1])); M68K_TST16((uint16_t)g_m68k.d[7]);
    M68K_ADD32(g_m68k.d[1], bus_read32(g_m68k.a[0]));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[1])); M68K_TST16((uint16_t)g_m68k.d[7]);
    /* WARNING: function did not end with RTS */
}

/* $096AA0-$096AB0  (7 instructions, 16 bytes) */
void jt_096AA0(void) {
    M68K_OR8(g_m68k.d[1], 0x3);
    M68K_ADD32(g_m68k.d[1], bus_read32(g_m68k.a[7]));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[6] -= 2; bus_write16(g_m68k.a[6], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[1], g_m68k.a[0]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); g_m68k.a[6] -= 2; bus_write16(g_m68k.a[6], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[1], bus_read32(g_m68k.a[0]));
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); g_m68k.a[6] -= 2; bus_write16(g_m68k.a[6], _mv); M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $096AB0-$096AC0  (7 instructions, 16 bytes) */
void jt_096AB0(void) {
    M68K_OR8(g_m68k.d[1], 0x3);
    M68K_ADD32(g_m68k.d[1], _postinc32(0));
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[6]);
    M68K_ADD32(g_m68k.d[1], _postinc32(7));
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[6]);
    M68K_ADD32(g_m68k.d[1], _predec32(4));
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[6]);
    /* WARNING: function did not end with RTS */
}

/* $096AC0-$096AC4  (1 instructions, 4 bytes) */
void jt_096AC0(void) {
    M68K_OR8(g_m68k.d[3], 0x4);
    /* WARNING: function did not end with RTS */
}

/* $096AF4-$096B00  (3 instructions, 12 bytes) */
void jt_096AF4(void) {
    M68K_OR8(g_m68k.d[3], 0x4);
    M68K_ADD32(g_m68k.d[1], bus_read32(g_m68k.a[0] + 0x3c00));
    M68K_ADD32(g_m68k.d[1], bus_read32(g_m68k.a[3] + 0 + (int32_t)g_m68k.d[3] * 4));
    /* WARNING: function did not end with RTS */
}

/* $096B28-$096B50  (15 instructions, 40 bytes) */
void jt_096B28(void) {
    M68K_OR8(g_m68k.d[3], 0x5);
    M68K_ADD16(g_m68k.d[1], bus_read16(0x003A00));
    M68K_ADD32(g_m68k.d[1], g_m68k.d[1]);
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[5]);
    g_m68k.a[1] += (int16_t)(uint16_t)(_predec16(4));
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[5]);
    g_m68k.a[1] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[0] + 0 + (int32_t)g_m68k.d[3] * 2));
    g_m68k.a[1] += (int16_t)(uint16_t)(0x3a00);
    g_m68k.a[1] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[0]));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    g_m68k.a[1] += (int16_t)(uint16_t)(_postinc16(2));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    g_m68k.a[1] += (int16_t)(uint16_t)(_predec16(5));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    g_m68k.a[1] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[3] * 8));
    /* WARNING: function did not end with RTS */
}

/* $096B68-$096BA8  (25 instructions, 64 bytes) */
void jt_096B68(void) {
    M68K_OR8(g_m68k.d[3], 0x5);
    g_m68k.a[1] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[5]));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[7]);
    g_m68k.a[1] += (int16_t)(uint16_t)(_postinc16(7));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[7]);
    g_m68k.a[1] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[2] + 0x3e00));
    g_m68k.a[1] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[6] + 0 + (int32_t)g_m68k.d[3] * 8));
    M68K_ADDX8(g_m68k.d[1], g_m68k.d[0]);
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[7]);
    g_m68k.a[1] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[6]));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[7]);
    g_m68k.a[1] += (int16_t)(uint16_t)(_predec16(0));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[7]);
    g_m68k.a[1] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[3] + 0x3e00));
    g_m68k.a[1] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[7] + 0 + (int32_t)g_m68k.d[3] * 8));
    M68K_ADDX8(g_m68k.d[1], g_m68k.d[1]);
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[7]);
    g_m68k.a[1] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[7]));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[7]);
    g_m68k.a[1] += (int16_t)(uint16_t)(_predec16(1));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[7]);
    g_m68k.a[1] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[4] + 0x3e00));
    g_m68k.a[1] += (int16_t)(uint16_t)(bus_read16(0x003E00));
    M68K_ADDX8(g_m68k.d[1], g_m68k.d[2]);
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[7]);
    /* WARNING: function did not end with RTS */
}

/* $096BA8-$096BD4  (15 instructions, 44 bytes) */
void jt_096BA8(void) {
    M68K_OR8(g_m68k.d[3], 0x4);
    M68K_ADD32(g_m68k.d[1], bus_read32(g_m68k.a[5]));
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[4]);
    M68K_ADD32(g_m68k.d[1], bus_read32(g_m68k.a[0] + 0 + (int32_t)g_m68k.d[3]));
    M68K_ADD32(g_m68k.d[1], bus_read32(0x96bb6 + (int32_t)g_m68k.d[3]));
    g_m68k.a[1] += (int16_t)(uint16_t)(g_m68k.d[7]);
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[4]);
    M68K_ADD32(g_m68k.d[1], _predec32(6));
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[4]);
    M68K_ADD32(g_m68k.d[1], bus_read32(g_m68k.a[1] + 0 + (int32_t)g_m68k.d[3]));
    M68K_ADD32(g_m68k.d[1], 0x3800d2c8);
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[4]);
    M68K_ADD32(g_m68k.d[1], _predec32(7));
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[4]);
    M68K_ADD32(g_m68k.d[1], bus_read32(g_m68k.a[2] + 0 + (int32_t)g_m68k.d[3]));
    /* WARNING: function did not end with RTS */
}

/* $096BDC-$096C10  (19 instructions, 52 bytes) */
void jt_096BDC(void) {
    M68K_OR8(g_m68k.d[3], 0x4);
    M68K_ADD32(g_m68k.d[1], bus_read32(g_m68k.a[2] + 0x3e00));
    M68K_ADD32(g_m68k.d[1], bus_read32(g_m68k.a[6] + 0 + (int32_t)g_m68k.d[3] * 8));
    g_m68k.a[1] += (int16_t)(uint16_t)(g_m68k.d[1]);
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[7]);
    g_m68k.a[1] += (int16_t)(uint16_t)(g_m68k.a[5]);
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[7]);
    M68K_ADD32(g_m68k.d[1], bus_read32(g_m68k.a[3] + 0x3e00));
    M68K_ADD32(g_m68k.d[1], bus_read32(g_m68k.a[7] + 0 + (int32_t)g_m68k.d[3] * 8));
    g_m68k.a[1] += (int16_t)(uint16_t)(g_m68k.d[2]);
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[7]);
    g_m68k.a[1] += (int16_t)(uint16_t)(g_m68k.a[6]);
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[7]);
    M68K_ADD32(g_m68k.d[1], bus_read32(g_m68k.a[4] + 0x3e00));
    M68K_ADD32(g_m68k.d[1], bus_read32(0x003E00));
    g_m68k.a[1] += (int16_t)(uint16_t)(g_m68k.d[3]);
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[7]);
    g_m68k.a[1] += (int16_t)(uint16_t)(g_m68k.a[7]);
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[7]);
    /* WARNING: function did not end with RTS */
}

/* $096C10-$096C38  (16 instructions, 40 bytes) */
void jt_096C10(void) {
    M68K_OR8(g_m68k.d[3], 0x5);
    g_m68k.a[1] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[2]));
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[4]);
    g_m68k.a[1] += (int16_t)(uint16_t)(_postinc16(4));
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[4]);
    g_m68k.a[1] += (int16_t)(uint16_t)(_predec16(7));
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[4]);
    g_m68k.a[1] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[3] + 0 + (int32_t)g_m68k.d[3]));
    M68K_ADD32(g_m68k.d[1], g_m68k.a[3]);
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[1])); M68K_TST16((uint16_t)g_m68k.d[4]);
    g_m68k.a[1] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[3]));
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[4]);
    g_m68k.a[1] += (int16_t)(uint16_t)(_postinc16(5));
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[4]);
    g_m68k.a[1] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[0] + 0x3800));
    g_m68k.a[1] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[4] + 0 + (int32_t)g_m68k.d[3]));
    /* WARNING: function did not end with RTS */
}

/* $096C50-$096C90  (23 instructions, 64 bytes) */
void jt_096C50(void) {
    M68K_OR8(g_m68k.d[3], 0x5);
    g_m68k.a[1] += (int16_t)(uint16_t)(_postinc16(0));
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.a[1] += (int16_t)(uint16_t)(_predec16(2));
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.a[1] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[5] + 0x3c00));
    g_m68k.a[1] += (int16_t)(uint16_t)(bus_read16(0x3C00D2CC));
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.a[1] += (int16_t)(uint16_t)(_postinc16(1));
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.a[1] += (int16_t)(uint16_t)(_predec16(3));
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.a[1] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[6] + 0x3c00));
    g_m68k.a[1] += (int16_t)(uint16_t)(bus_read16(0x9a876));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_ADD32(g_m68k.d[1], _postinc32(0));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[7]);
    M68K_ADD32(g_m68k.d[1], _postinc32(7));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[7]);
    g_m68k.a[1] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[7] + 0x3c00));
    g_m68k.a[1] += (int16_t)(uint16_t)(/* UNHANDLED_READ: (a16, d3.l * 4) */ 0);
    M68K_ADDX8(g_m68k.d[1], g_m68k.d[3]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[6] -= 2; bus_write16(g_m68k.a[6], _mv); M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $096C90-$096CA0  (7 instructions, 16 bytes) */
void jt_096C90(void) {
    M68K_OR8(g_m68k.d[1], 0x3);
    M68K_ADDX8(g_m68k.d[1], g_m68k.d[4]);
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[4]);
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_ADDX8(_tmp, _predec8(6)); bus_write8(_ea, _tmp); }
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[4]);
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[4]);
    /* WARNING: function did not end with RTS */
}

/* $096CA0-$096CB0  (6 instructions, 16 bytes) */
void jt_096CA0(void) {
    M68K_OR8(g_m68k.d[1], 0x3);
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[4]);
    { uint32_t _ea = (g_m68k.a[7] + 0x3800); uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[4]);
    /* WARNING: function did not end with RTS */
}

/* $096CB0-$096CC0  (7 instructions, 16 bytes) */
void jt_096CB0(void) {
    M68K_OR8(g_m68k.d[1], 0x3);
    M68K_ADDX8(g_m68k.d[1], g_m68k.d[5]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_ADDX8(_tmp, _predec8(7)); bus_write8(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $096CC0-$096CD0  (6 instructions, 16 bytes) */
void jt_096CC0(void) {
    M68K_OR8(g_m68k.d[1], 0x3);
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    { uint32_t _ea = (g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[3] * 8); uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $096CD0-$096CE0  (7 instructions, 16 bytes) */
void jt_096CD0(void) {
    M68K_OR8(g_m68k.d[1], 0x3);
    M68K_ADDX8(g_m68k.d[1], g_m68k.d[6]);
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[4]);
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[4]);
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[4]);
    /* WARNING: function did not end with RTS */
}

/* $096CE0-$096CEC  (4 instructions, 12 bytes) */
void jt_096CE0(void) {
    M68K_OR8(g_m68k.d[1], 0x3);
    { uint32_t _ea = g_m68k.a[5]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[4]);
    { uint32_t _ea = (g_m68k.a[1] + 0 + (int32_t)g_m68k.d[3]); uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $096CF0-$096D00  (7 instructions, 16 bytes) */
void jt_096CF0(void) {
    M68K_OR8(g_m68k.d[1], 0x3);
    M68K_ADDX8(g_m68k.d[1], g_m68k.d[7]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[1], _predec32(1));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $096D00-$096D10  (6 instructions, 16 bytes) */
void jt_096D00(void) {
    M68K_OR8(g_m68k.d[1], 0x3);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    { uint32_t _ea = (g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.d[3] * 8); uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    M68K_ADD32(g_m68k.d[1], _predec32(1));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $096D10-$096D20  (5 instructions, 16 bytes) */
void jt_096D10(void) {
    M68K_OR8(g_m68k.d[1], 0x3);
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_ADDX8(_tmp, _predec8(0)); bus_write8(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    g_m68k.a[1] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[3] * 8));
    g_m68k.a[1] += (int16_t)(uint16_t)(0x3900);
    /* WARNING: function did not end with RTS */
}

/* $096D20-$096D2C  (4 instructions, 12 bytes) */
void jt_096D20(void) {
    M68K_OR8(g_m68k.d[1], 0x3);
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    { uint32_t _ea = (g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[3] * 8); uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $096D30-$096D40  (6 instructions, 16 bytes) */
void jt_096D30(void) {
    M68K_OR8(g_m68k.d[1], 0x3);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    { uint32_t _ea = g_m68k.a[5]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $096D40-$096D50  (5 instructions, 16 bytes) */
void jt_096D40(void) {
    M68K_OR8(g_m68k.d[1], 0x3);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = (g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.d[3] * 8); uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[5]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $096D50-$096D60  (7 instructions, 16 bytes) */
void jt_096D50(void) {
    M68K_OR8(g_m68k.d[1], 0x3);
    g_m68k.a[1] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[7]));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[6] -= 2; bus_write16(g_m68k.a[6], _mv); M68K_TST16(_mv); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[6] -= 2; bus_write16(g_m68k.a[6], _mv); M68K_TST16(_mv); }
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[6] -= 2; bus_write16(g_m68k.a[6], _mv); M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $096D60-$096D64  (1 instructions, 4 bytes) */
void jt_096D60(void) {
    M68K_OR8(g_m68k.d[1], 0x3);
    /* WARNING: function did not end with RTS */
}

/* $096D70-$096D80  (7 instructions, 16 bytes) */
void jt_096D70(void) {
    M68K_OR8(g_m68k.d[1], 0x3);
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_ADDX8(_tmp, _predec8(1)); bus_write8(_ea, _tmp); }
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[6]);
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[6]);
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[6]);
    /* WARNING: function did not end with RTS */
}

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
