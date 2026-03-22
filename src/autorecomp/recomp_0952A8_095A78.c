/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $0952A8 - $095A78 */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

/* $0952A8-$0952B4  (4 instructions, 12 bytes) */
void jt_0952A8(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    { uint32_t _ea = (g_m68k.a[7] + 0x3300); uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0952D0-$0952F8  (19 instructions, 40 bytes) */
void jt_0952D0(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    g_m68k.a[0] += bus_read32(g_m68k.a[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    M68K_ADD16(g_m68k.d[3], g_m68k.a[5]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    M68K_ADD16(g_m68k.d[3], bus_read16(g_m68k.a[6]));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    M68K_ADD16(g_m68k.d[3], g_m68k.d[6]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    M68K_ADD16(g_m68k.d[3], g_m68k.a[6]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    g_m68k.a[0] += bus_read32(g_m68k.a[3]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[3]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    M68K_ADD16(g_m68k.d[3], g_m68k.d[7]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    M68K_ADD16(g_m68k.d[3], g_m68k.a[7]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    g_m68k.a[0] += bus_read32(g_m68k.a[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[3]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0952F8-$095318  (15 instructions, 32 bytes) */
void jt_0952F8(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    g_m68k.a[0] += bus_read32(g_m68k.a[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[2] -= 2; bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    M68K_ADD16(g_m68k.d[3], bus_read16(g_m68k.a[0]));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[2] -= 2; bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[0] += bus_read32(g_m68k.a[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); g_m68k.a[2] -= 2; bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    M68K_ADD8(g_m68k.d[3], g_m68k.d[0]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[2] -= 2; bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    M68K_ADD16(g_m68k.d[3], bus_read16(g_m68k.a[1]));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[2] -= 2; bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    M68K_ADD16(g_m68k.d[3], bus_read16(g_m68k.a[7]));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[2] -= 2; bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    M68K_ADD8(g_m68k.d[3], g_m68k.d[1]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[2] -= 2; bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $095320-$095348  (19 instructions, 40 bytes) */
void jt_095320(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    g_m68k.a[0] += bus_read32(g_m68k.a[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    g_m68k.a[0] += _predec32(1);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    M68K_ADD16(g_m68k.d[3], _postinc16(0));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    M68K_ADD16(g_m68k.d[3], g_m68k.a[0]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    M68K_ADD16(g_m68k.d[3], bus_read16(g_m68k.a[2]));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    M68K_ADD16(g_m68k.d[3], _postinc16(1));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    M68K_ADD16(g_m68k.d[3], g_m68k.a[1]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    M68K_ADD16(g_m68k.d[3], bus_read16(g_m68k.a[3]));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    g_m68k.a[0] += bus_read32(g_m68k.a[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[3]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $095348-$095358  (7 instructions, 16 bytes) */
void jt_095348(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    M68K_ADD16(g_m68k.d[3], _postinc16(2));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    M68K_ADD16(g_m68k.d[3], _postinc16(5));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    { uint32_t _ea = g_m68k.a[4]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[2]); bus_write16(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $095370-$095398  (19 instructions, 40 bytes) */
void jt_095370(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    g_m68k.a[0] += bus_read32(g_m68k.a[2]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[2]);
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_ADDX8(_tmp, _predec8(7)); bus_write8(_ea, _tmp); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[1])); M68K_TST16((uint16_t)g_m68k.d[2]);
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[1])); M68K_TST16((uint16_t)g_m68k.d[2]);
    M68K_ADDX8(g_m68k.d[2], g_m68k.d[3]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[1])); M68K_TST16((uint16_t)g_m68k.d[2]);
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_ADDX8(_tmp, _predec8(6)); bus_write8(_ea, _tmp); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[1])); M68K_TST16((uint16_t)g_m68k.d[2]);
    M68K_ADD16(g_m68k.d[3], _predec16(1));
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[2]);
    M68K_ADDX8(g_m68k.d[2], g_m68k.d[2]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[1])); M68K_TST16((uint16_t)g_m68k.d[2]);
    { uint32_t _ea = g_m68k.a[1]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[2]); bus_write16(_ea, _tmp); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[2]);
    M68K_ADD16(g_m68k.d[3], _predec16(2));
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[2]);
    /* WARNING: function did not end with RTS */
}

/* $095398-$0953C0  (19 instructions, 40 bytes) */
void jt_095398(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    g_m68k.a[0] += bus_read32(g_m68k.a[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    g_m68k.a[0] += _predec32(1);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    M68K_ADD16(g_m68k.d[3], _predec16(3));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    M68K_ADD16(g_m68k.d[3], _postinc16(3));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    M68K_ADD16(g_m68k.d[3], _postinc16(7));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    M68K_ADD16(g_m68k.d[3], _predec16(4));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    M68K_ADD16(g_m68k.d[3], _postinc16(4));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    M68K_ADD16(g_m68k.d[3], _predec16(0));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    g_m68k.a[0] += bus_read32(g_m68k.a[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[3]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0953C0-$0953E8  (10 instructions, 40 bytes) */
void jt_0953C0(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0953E8-$095410  (10 instructions, 40 bytes) */
void jt_0953E8(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $095410-$095438  (18 instructions, 40 bytes) */
void jt_095410(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    g_m68k.a[0] += bus_read32(g_m68k.a[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[2] -= 2; bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[0] += _predec32(1);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[2] -= 2; bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[2] -= 2; bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    M68K_ADD8(g_m68k.d[3], _postinc8(1));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[2] -= 2; bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_ADDX8(_tmp, _predec8(3)); bus_write8(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[2] -= 2; bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[2] -= 2; bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[0] += bus_read32(g_m68k.a[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); g_m68k.a[2] -= 2; bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_ADDX8(_tmp, _predec8(4)); bus_write8(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[2] -= 2; bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    M68K_ADD16(g_m68k.d[3], bus_read16(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[3] * 4));
    /* WARNING: function did not end with RTS */
}

/* $095438-$095460  (16 instructions, 40 bytes) */
void jt_095438(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    M68K_ADD16(g_m68k.d[3], _predec16(5));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    g_m68k.a[0] += _predec32(1);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    { uint32_t _ea = g_m68k.a[4]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[2]); bus_write16(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    M68K_ADD16(g_m68k.d[3], _predec16(6));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    M68K_ADD16(g_m68k.d[3], bus_read16(g_m68k.a[2] + 0x3300));
    { uint32_t _ea = g_m68k.a[3]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[2]); bus_write16(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    M68K_ADD16(g_m68k.d[3], _predec16(7));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    M68K_ADD16(g_m68k.d[3], bus_read16(g_m68k.a[3] + 0x3300));
    M68K_ADD16(g_m68k.d[3], bus_read16(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[3] * 2));
    /* WARNING: function did not end with RTS */
}

/* $095460-$095470  (6 instructions, 16 bytes) */
void jt_095460(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    g_m68k.a[0] += bus_read32(g_m68k.a[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[2] -= 2; bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    M68K_ADD16(g_m68k.d[3], bus_read16(g_m68k.a[4] + 0x3500));
    g_m68k.a[0] += bus_read32(g_m68k.a[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); g_m68k.a[2] -= 2; bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $095488-$095494  (4 instructions, 12 bytes) */
void jt_095488(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    { uint32_t _ea = (g_m68k.a[7] + 0x3300); uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0954B0-$0954D8  (12 instructions, 40 bytes) */
void jt_0954B0(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    g_m68k.a[0] += bus_read32(g_m68k.a[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[2] -= 2; bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint32_t _ea = g_m68k.a[5]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[2]); bus_write32(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); g_m68k.a[2] -= 2; bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    M68K_ADD16(g_m68k.d[3], bus_read16(g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.d[3] * 4));
    M68K_ADD16(g_m68k.d[3], bus_read16(g_m68k.a[0] + 0x3500));
    M68K_ADD16(g_m68k.d[3], bus_read16(g_m68k.a[6] + 0x3500));
    M68K_ADD16(g_m68k.d[3], bus_read16(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[3] * 4));
    M68K_ADD16(g_m68k.d[3], bus_read16(g_m68k.a[1] + 0x3500));
    M68K_ADD16(g_m68k.d[3], bus_read16(g_m68k.a[7] + 0x3500));
    M68K_ADD16(g_m68k.d[3], bus_read16(g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.d[3] * 4));
    /* WARNING: function did not end with RTS */
}

/* $0954D8-$0954EC  (6 instructions, 20 bytes) */
void jt_0954D8(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    { uint32_t _ea = 0x3300D53B; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[2]); bus_write32(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    { uint32_t _ea = (g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.d[3] * 2); uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[2]); bus_write32(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $095500-$095504  (1 instructions, 4 bytes) */
void jt_095500(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    /* WARNING: function did not end with RTS */
}

/* $095528-$095550  (14 instructions, 40 bytes) */
void jt_095528(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    g_m68k.a[0] += bus_read32(g_m68k.a[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[2] -= 2; bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    M68K_ADD16(g_m68k.d[3], bus_read16(g_m68k.a[7] + 0 + (int16_t)(uint16_t)g_m68k.d[3] * 4));
    g_m68k.a[0] += bus_read32(g_m68k.a[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); g_m68k.a[2] -= 2; bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    M68K_ADD16(g_m68k.d[3], bus_read16(g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.d[3] * 4));
    M68K_ADD16(g_m68k.d[3], bus_read16(0x003500));
    M68K_ADD16(g_m68k.d[3], _postinc16(1));
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); g_m68k.a[2] -= 2; bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    M68K_ADD16(g_m68k.d[3], bus_read16(g_m68k.a[6] + 0 + (int16_t)(uint16_t)g_m68k.d[3] * 4));
    g_m68k.a[0] += _predec32(1);
    { uint16_t _mv = (uint16_t)(g_m68k.d[3]); g_m68k.a[2] -= 2; bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    M68K_ADD16(g_m68k.d[3], /* UNHANDLED_READ: (a16, d3.w * 4) */ 0);
    /* WARNING: function did not end with RTS */
}

/* $095550-$095578  (16 instructions, 40 bytes) */
void jt_095550(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    g_m68k.a[2] += (int16_t)(uint16_t)(bus_read16(0x98856));
    M68K_ADDX8(g_m68k.d[2], g_m68k.d[5]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    g_m68k.a[0] += bus_read32(g_m68k.a[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    g_m68k.a[2] += (int16_t)(uint16_t)(/* UNHANDLED_READ: (a16, d3.w * 2) */ 0);
    M68K_ADDX8(g_m68k.d[2], g_m68k.d[6]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    g_m68k.a[0] += bus_read32(g_m68k.a[3]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[3]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    g_m68k.a[2] += (int16_t)(uint16_t)(0x3300);
    M68K_ADDX8(g_m68k.d[2], g_m68k.d[7]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $095578-$0955A0  (14 instructions, 40 bytes) */
void jt_095578(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[2] -= 2; bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    M68K_ADD16(g_m68k.d[3], bus_read16(0x3500D534));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[2] -= 2; bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[2] -= 2; bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    M68K_ADD16(g_m68k.d[3], bus_read16(0x98a8e));
    { uint32_t _ea = (g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.d[3] * 4); uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    g_m68k.a[0] += bus_read32(g_m68k.a[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); g_m68k.a[2] -= 2; bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint32_t _ea = (g_m68k.a[1] + 0x3500); uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    g_m68k.a[0] += bus_read32(g_m68k.a[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[3]); g_m68k.a[2] -= 2; bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0955A0-$0955A8  (3 instructions, 8 bytes) */
void jt_0955A0(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    M68K_ADD8(g_m68k.d[3], g_m68k.d[1]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0955C8-$0955F0  (15 instructions, 40 bytes) */
void jt_0955C8(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    g_m68k.a[2] += _predec32(3);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    g_m68k.a[2] += bus_read32(g_m68k.a[7] + 0x3300);
    g_m68k.a[2] += bus_read32(g_m68k.a[7] + 0 + (int16_t)(uint16_t)g_m68k.d[3] * 2);
    g_m68k.a[2] += _predec32(4);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    g_m68k.a[2] += bus_read32(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[3] * 2);
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    g_m68k.a[2] += _predec32(5);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    g_m68k.a[0] += _predec32(1);
    { uint16_t _mv = (uint16_t)(g_m68k.d[3]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    g_m68k.a[2] += bus_read32(0x003300);
    /* WARNING: function did not end with RTS */
}

/* $0955F0-$095608  (7 instructions, 24 bytes) */
void jt_0955F0(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[2] -= 2; bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint32_t _ea = (g_m68k.a[4] + 0x3500); uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x3500D51F; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[2] -= 2; bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint32_t _ea = (g_m68k.a[5] + 0x3500); uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $095618-$095640  (16 instructions, 40 bytes) */
void jt_095618(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    g_m68k.a[2] += (int16_t)(uint16_t)(0x3301);
    M68K_ADDX8(g_m68k.d[2], g_m68k.d[7]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    g_m68k.a[2] += (int16_t)(uint16_t)(/* UNHANDLED_READ: (a16, d3.w * 2) */ 0);
    M68K_ADDX8(g_m68k.d[2], g_m68k.d[6]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    g_m68k.a[0] += bus_read32(g_m68k.a[3]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[3]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    g_m68k.a[2] += (int16_t)(uint16_t)(bus_read16(0x98937));
    M68K_ADDX8(g_m68k.d[2], g_m68k.d[5]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    g_m68k.a[0] += bus_read32(g_m68k.a[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[3]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $095640-$095658  (9 instructions, 24 bytes) */
void jt_095640(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    g_m68k.a[0] += bus_read32(g_m68k.a[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    g_m68k.a[0] += _predec32(1);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    { uint32_t _ea = 0x003301; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    M68K_ADD16(g_m68k.d[3], 0x3300);
    /* WARNING: function did not end with RTS */
}

/* $095668-$095690  (16 instructions, 40 bytes) */
void jt_095668(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    g_m68k.a[2] += (int16_t)(uint16_t)(bus_read16(0x9896e));
    M68K_ADDX8(g_m68k.d[2], g_m68k.d[5]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    g_m68k.a[0] += bus_read32(g_m68k.a[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    g_m68k.a[2] += (int16_t)(uint16_t)(/* UNHANDLED_READ: (a16, d3.w * 2) */ 0);
    M68K_ADDX8(g_m68k.d[2], g_m68k.d[6]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    g_m68k.a[0] += bus_read32(g_m68k.a[3]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[3]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    g_m68k.a[2] += (int16_t)(uint16_t)(0x3300);
    M68K_ADDX8(g_m68k.d[2], g_m68k.d[7]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $095690-$095694  (1 instructions, 4 bytes) */
void jt_095690(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    /* WARNING: function did not end with RTS */
}

/* $0956B8-$0956E0  (15 instructions, 40 bytes) */
void jt_0956B8(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    g_m68k.a[0] += bus_read32(g_m68k.a[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    g_m68k.a[0] += _predec32(1);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    { uint32_t _ea = g_m68k.a[5]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[2]); bus_write16(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    g_m68k.a[2] += (int16_t)(uint16_t)(bus_read16(0x003300));
    { uint32_t _ea = g_m68k.a[2]; uint16_t _tmp = bus_read16(_ea); M68K_ADDX16(_tmp, _predec16(1)); bus_write16(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    { uint32_t _ea = /* UNHANDLED_ADDR: ([a2, d3.w * 2]) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    g_m68k.a[2] += (int16_t)(uint16_t)(bus_read16(0x3300D1E1));
    { uint16_t _mv = (uint16_t)(g_m68k.d[3]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    g_m68k.a[0] += bus_read32(g_m68k.a[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[3]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0956E0-$095708  (19 instructions, 40 bytes) */
void jt_0956E0(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    g_m68k.a[0] += bus_read32(g_m68k.a[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[3], g_m68k.d[7]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[3], g_m68k.a[5]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[3], g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[3], g_m68k.a[0]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[3], g_m68k.a[6]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[3], g_m68k.d[3]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[3], g_m68k.a[1]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    g_m68k.a[0] += bus_read32(g_m68k.a[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[3]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $095708-$095730  (16 instructions, 40 bytes) */
void jt_095708(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    g_m68k.a[2] += (int16_t)(uint16_t)(bus_read16(0x98a0e));
    M68K_ADDX8(g_m68k.d[2], g_m68k.d[5]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    g_m68k.a[0] += bus_read32(g_m68k.a[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    g_m68k.a[2] += (int16_t)(uint16_t)(/* UNHANDLED_READ: (a16, d3.w * 2) */ 0);
    M68K_ADDX8(g_m68k.d[2], g_m68k.d[6]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    g_m68k.a[0] += bus_read32(g_m68k.a[3]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[3]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    g_m68k.a[2] += (int16_t)(uint16_t)(0x3300);
    M68K_ADDX8(g_m68k.d[2], g_m68k.d[7]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $095730-$095758  (19 instructions, 40 bytes) */
void jt_095730(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    M68K_ADD32(g_m68k.d[3], g_m68k.a[7]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[3], bus_read32(g_m68k.a[5]));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[3], _postinc32(3));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[3], bus_read32(g_m68k.a[0]));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[3], bus_read32(g_m68k.a[6]));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[3], _postinc32(4));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[3], bus_read32(g_m68k.a[1]));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[3], bus_read32(g_m68k.a[7]));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[3], _postinc32(5));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $095758-$095780  (19 instructions, 40 bytes) */
void jt_095758(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    g_m68k.a[0] += bus_read32(g_m68k.a[2]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[2]);
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_ADDX8(_tmp, _predec8(7)); bus_write8(_ea, _tmp); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[1])); M68K_TST16((uint16_t)g_m68k.d[2]);
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[1])); M68K_TST16((uint16_t)g_m68k.d[2]);
    M68K_ADDX8(g_m68k.d[2], g_m68k.d[3]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[1])); M68K_TST16((uint16_t)g_m68k.d[2]);
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_ADDX8(_tmp, _predec8(6)); bus_write8(_ea, _tmp); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[1])); M68K_TST16((uint16_t)g_m68k.d[2]);
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[1])); M68K_TST16((uint16_t)g_m68k.d[2]);
    M68K_ADDX8(g_m68k.d[2], g_m68k.d[2]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[1])); M68K_TST16((uint16_t)g_m68k.d[2]);
    { uint32_t _ea = g_m68k.a[1]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[2]); bus_write16(_ea, _tmp); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[2]);
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[1])); M68K_TST16((uint16_t)g_m68k.d[2]);
    /* WARNING: function did not end with RTS */
}

/* $095780-$0957A8  (16 instructions, 40 bytes) */
void jt_095780(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    g_m68k.a[0] += bus_read32(g_m68k.a[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    g_m68k.a[0] += _predec32(1);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    g_m68k.a[2] += (int16_t)(uint16_t)(bus_read16(0x003300));
    M68K_ADDX8(g_m68k.d[2], g_m68k.d[4]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    g_m68k.a[2] += (int16_t)(uint16_t)(bus_read16(0x3300D1E1));
    { uint16_t _mv = (uint16_t)(g_m68k.d[3]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    g_m68k.a[0] += bus_read32(g_m68k.a[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[3]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0957A8-$0957D0  (19 instructions, 40 bytes) */
void jt_0957A8(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    M68K_ADD32(g_m68k.d[3], bus_read32(g_m68k.a[2]));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[2] -= 2; bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[3], _postinc32(0));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[2] -= 2; bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[0] += bus_read32(g_m68k.a[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); g_m68k.a[2] -= 2; bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[3], bus_read32(g_m68k.a[3]));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[2] -= 2; bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[3], _postinc32(1));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[2] -= 2; bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[3], _postinc32(6));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[2] -= 2; bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[3], bus_read32(g_m68k.a[4]));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[2] -= 2; bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[3], _postinc32(2));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[2] -= 2; bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[3], _postinc32(7));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[2] -= 2; bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0957D0-$0957F8  (16 instructions, 40 bytes) */
void jt_0957D0(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    g_m68k.a[2] += (int16_t)(uint16_t)(0x3301);
    M68K_ADDX8(g_m68k.d[2], g_m68k.d[7]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    g_m68k.a[2] += (int16_t)(uint16_t)(/* UNHANDLED_READ: (a16, d3.w * 2) */ 0);
    M68K_ADDX8(g_m68k.d[2], g_m68k.d[6]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    g_m68k.a[0] += bus_read32(g_m68k.a[3]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[3]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    g_m68k.a[2] += (int16_t)(uint16_t)(bus_read16(0x98aef));
    M68K_ADDX8(g_m68k.d[2], g_m68k.d[5]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    g_m68k.a[0] += bus_read32(g_m68k.a[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[3]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0957F8-$095810  (7 instructions, 24 bytes) */
void jt_0957F8(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    { uint32_t _ea = (g_m68k.a[2] + 0x3301); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[2]); bus_write16(_ea, _tmp); }
    { uint32_t _ea = /* UNHANDLED_ADDR: ([a2, d3.w * 2]) */ 0; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[2]); bus_write16(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[2]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[2]); bus_write16(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    { uint32_t _ea = (g_m68k.a[1] + 0x3301); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[2]); bus_write16(_ea, _tmp); }
    { uint32_t _ea = /* UNHANDLED_ADDR: ([a1, d3.w * 2]) */ 0; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[2]); bus_write16(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $095820-$095828  (3 instructions, 8 bytes) */
void jt_095820(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    M68K_ADD8(g_m68k.d[3], g_m68k.d[1]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $095848-$095870  (19 instructions, 40 bytes) */
void jt_095848(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    M68K_ADDX16(g_m68k.d[2], g_m68k.d[4]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[2] -= 2; bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint32_t _ea = g_m68k.a[2]; uint16_t _tmp = bus_read16(_ea); M68K_ADDX16(_tmp, _predec16(7)); bus_write16(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[2] -= 2; bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[0] += bus_read32(g_m68k.a[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); g_m68k.a[2] -= 2; bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    M68K_ADDX16(g_m68k.d[2], g_m68k.d[5]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[2] -= 2; bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint32_t _ea = g_m68k.a[0]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[2]); bus_write16(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[2] -= 2; bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[3], _predec32(2));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[2] -= 2; bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[0] += bus_read32(g_m68k.a[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); g_m68k.a[2] -= 2; bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint32_t _ea = g_m68k.a[1]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[2]); bus_write16(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[2] -= 2; bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[0] += bus_read32(g_m68k.a[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[3]); g_m68k.a[2] -= 2; bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $095870-$095898  (16 instructions, 40 bytes) */
void jt_095870(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    M68K_ADD16(g_m68k.d[3], _predec16(7));
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    M68K_ADD16(g_m68k.d[3], bus_read16(g_m68k.a[3] + 0x3301));
    M68K_ADD16(g_m68k.d[3], /* UNHANDLED_READ: ([a1, d3.w * 2]) */ 0);
    M68K_ADD16(g_m68k.d[3], _predec16(6));
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    M68K_ADD16(g_m68k.d[3], bus_read16(g_m68k.a[2] + 0x3301));
    { uint32_t _ea = g_m68k.a[3]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[2]); bus_write16(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    M68K_ADD16(g_m68k.d[3], _predec16(5));
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    g_m68k.a[0] += _predec32(1);
    { uint16_t _mv = (uint16_t)(g_m68k.d[3]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    { uint32_t _ea = g_m68k.a[4]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[2]); bus_write16(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $095898-$0958C0  (19 instructions, 40 bytes) */
void jt_095898(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    M68K_ADDX16(g_m68k.d[2], g_m68k.d[4]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[2] -= 2; bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint32_t _ea = g_m68k.a[2]; uint16_t _tmp = bus_read16(_ea); M68K_ADDX16(_tmp, _predec16(7)); bus_write16(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[2] -= 2; bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[0] += bus_read32(g_m68k.a[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); g_m68k.a[2] -= 2; bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    M68K_ADDX16(g_m68k.d[2], g_m68k.d[5]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[2] -= 2; bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[3], _predec32(0));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[2] -= 2; bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[3], _predec32(3));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[2] -= 2; bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[0] += bus_read32(g_m68k.a[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); g_m68k.a[2] -= 2; bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[3], _predec32(1));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[2] -= 2; bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[0] += bus_read32(g_m68k.a[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[3]); g_m68k.a[2] -= 2; bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0958C0-$0958E8  (19 instructions, 40 bytes) */
void jt_0958C0(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    g_m68k.a[0] += bus_read32(g_m68k.a[2]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[2]);
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_ADDX8(_tmp, _predec8(7)); bus_write8(_ea, _tmp); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[1])); M68K_TST16((uint16_t)g_m68k.d[2]);
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[1])); M68K_TST16((uint16_t)g_m68k.d[2]);
    M68K_ADDX8(g_m68k.d[2], g_m68k.d[3]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[1])); M68K_TST16((uint16_t)g_m68k.d[2]);
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_ADDX8(_tmp, _predec8(6)); bus_write8(_ea, _tmp); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[1])); M68K_TST16((uint16_t)g_m68k.d[2]);
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[1])); M68K_TST16((uint16_t)g_m68k.d[2]);
    M68K_ADDX8(g_m68k.d[2], g_m68k.d[2]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[1])); M68K_TST16((uint16_t)g_m68k.d[2]);
    { uint32_t _ea = g_m68k.a[1]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[2]); bus_write16(_ea, _tmp); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[2]);
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[1])); M68K_TST16((uint16_t)g_m68k.d[2]);
    /* WARNING: function did not end with RTS */
}

/* $0958E8-$095910  (19 instructions, 40 bytes) */
void jt_0958E8(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    M68K_ADDX8(g_m68k.d[2], g_m68k.d[2]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[2]);
    { uint32_t _ea = g_m68k.a[1]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[2]); bus_write16(_ea, _tmp); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[1])); M68K_TST16((uint16_t)g_m68k.d[2]);
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[2]);
    M68K_ADDX8(g_m68k.d[2], g_m68k.d[3]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[2]);
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_ADDX8(_tmp, _predec8(6)); bus_write8(_ea, _tmp); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[2]);
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.a[0] += bus_read32(g_m68k.a[2]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[1])); M68K_TST16((uint16_t)g_m68k.d[2]);
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_ADDX8(_tmp, _predec8(7)); bus_write8(_ea, _tmp); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[2]);
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[2]);
    /* WARNING: function did not end with RTS */
}

/* $095910-$095938  (15 instructions, 40 bytes) */
void jt_095910(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    M68K_ADD32(g_m68k.d[3], _predec32(4));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[3], bus_read32(g_m68k.a[0] + 0x3300));
    g_m68k.a[0] += bus_read32(g_m68k.a[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[3], _predec32(5));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[3], bus_read32(g_m68k.a[1] + 0x3300));
    g_m68k.a[0] += bus_read32(g_m68k.a[3]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[3]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    g_m68k.a[0] += bus_read32(g_m68k.a[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[3], bus_read32(g_m68k.a[2] + 0x3300));
    M68K_ADD32(g_m68k.d[3], bus_read32(g_m68k.a[6] + 0x3300));
    /* WARNING: function did not end with RTS */
}

/* $095938-$095960  (13 instructions, 40 bytes) */
void jt_095938(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    M68K_ADD32(g_m68k.d[3], _predec32(6));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[3], bus_read32(g_m68k.a[3] + 0x3300));
    M68K_ADD32(g_m68k.d[3], bus_read32(g_m68k.a[7] + 0x3300));
    M68K_ADD32(g_m68k.d[3], _predec32(7));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[3], bus_read32(g_m68k.a[4] + 0x3300));
    M68K_ADD32(g_m68k.d[3], bus_read32(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[3] * 2));
    g_m68k.a[0] += bus_read32(g_m68k.a[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[3], bus_read32(g_m68k.a[5] + 0x3300));
    M68K_ADD32(g_m68k.d[3], bus_read32(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[3] * 2));
    /* WARNING: function did not end with RTS */
}

/* $095960-$09596C  (4 instructions, 12 bytes) */
void jt_095960(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    { uint32_t _ea = (g_m68k.a[7] + 0x3300); uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $095988-$0959B0  (10 instructions, 40 bytes) */
void jt_095988(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0959B0-$0959D8  (10 instructions, 40 bytes) */
void jt_0959B0(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0959D8-$095A00  (10 instructions, 40 bytes) */
void jt_0959D8(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $095A00-$095A28  (10 instructions, 40 bytes) */
void jt_095A00(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $095A28-$095A50  (10 instructions, 40 bytes) */
void jt_095A28(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $095A50-$095A78  (10 instructions, 40 bytes) */
void jt_095A50(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}
