/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $092778 - $092EB8 */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

/* $092778-$0927AC  (21 instructions, 52 bytes) */
void jt_092778(void) {
    M68K_OR8(g_m68k.d[3], 0x4);
    g_m68k.a[0] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.d[2] * 8));
    M68K_ADDX8(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.d[3] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[3]);
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_ADDX8(_tmp, _predec8(4)); bus_write8(_ea, _tmp); }
    g_m68k.d[3] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[3]);
    { uint32_t _ea = g_m68k.a[5]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    g_m68k.d[3] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[3]);
    g_m68k.a[0] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.d[2] * 8));
    M68K_ADDX8(g_m68k.d[0], g_m68k.d[1]);
    g_m68k.d[3] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[3]);
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_ADDX8(_tmp, _predec8(5)); bus_write8(_ea, _tmp); }
    g_m68k.d[3] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[3]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    g_m68k.d[3] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[3]);
    g_m68k.a[0] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[6] + 0 + (int16_t)(uint16_t)g_m68k.d[2] * 8));
    M68K_ADDX8(g_m68k.d[0], g_m68k.d[2]);
    g_m68k.d[3] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[3]);
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_ADDX8(_tmp, _predec8(6)); bus_write8(_ea, _tmp); }
    g_m68k.d[3] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[3]);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0927AC-$0927E0  (20 instructions, 52 bytes) */
void jt_0927AC(void) {
    M68K_OR8(g_m68k.d[3], 0x4);
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    g_m68k.d[3] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[3]);
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    g_m68k.d[3] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[3]);
    { uint32_t _ea = (g_m68k.a[0] + 0x2600); uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[6] + 0x2600); uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    g_m68k.d[3] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[3]);
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    g_m68k.d[3] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[3]);
    M68K_MULU(g_m68k.d[1], _postinc16(6));
    g_m68k.d[3] = g_m68k.d[2]; M68K_TST32((uint32_t)g_m68k.d[3]);
    { uint32_t _ea = (g_m68k.a[7] + 0x2600); uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    g_m68k.d[3] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[3]);
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    g_m68k.d[3] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[3]);
    { uint32_t _ea = (g_m68k.a[1] + 0x2600); uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0927E0-$092814  (20 instructions, 52 bytes) */
void jt_0927E0(void) {
    M68K_OR8(g_m68k.d[3], 0x4);
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    g_m68k.d[3] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[3]);
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    g_m68k.d[3] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[3]);
    { uint32_t _ea = (g_m68k.a[2] + 0x2600); uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[2] * 8); uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    g_m68k.d[3] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[3]);
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    g_m68k.d[3] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[3]);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = (g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[2] * 8); uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    g_m68k.d[3] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[3]);
    { uint32_t _ea = g_m68k.a[5]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    g_m68k.d[3] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[3]);
    { uint32_t _ea = (g_m68k.a[3] + 0x2600); uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_MULS(g_m68k.d[5], g_m68k.d[4]);
    g_m68k.d[3] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[3]);
    /* WARNING: function did not end with RTS */
}

/* $092814-$092848  (18 instructions, 52 bytes) */
void jt_092814(void) {
    M68K_OR8(g_m68k.d[3], 0x4);
    { uint32_t _ea = g_m68k.a[5]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    g_m68k.d[3] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[3]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    g_m68k.d[3] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[3]);
    { uint32_t _ea = (g_m68k.a[4] + 0x2600); uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.d[2] * 8); uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    g_m68k.d[3] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[3]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = (g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[2] * 8); uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    g_m68k.d[3] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[3]);
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    g_m68k.d[3] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[3]);
    { uint32_t _ea = (g_m68k.a[5] + 0x2600); uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.d[2] * 8); uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $092848-$092850  (2 instructions, 8 bytes) */
void jt_092848(void) {
    M68K_OR8(g_m68k.d[4], 0x3);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $09287C-$0928B0  (20 instructions, 52 bytes) */
void jt_09287C(void) {
    M68K_OR8(g_m68k.d[4], 0x3);
    M68K_AND16(g_m68k.d[5], /* UNHANDLED_READ: ([a4, d2.w * 8]) */ 0);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[2]);
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_ADD16(g_m68k.d[0], bus_read16(g_m68k.a[1]));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[3]);
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_ADD16(g_m68k.d[0], bus_read16(g_m68k.a[2]));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_ADD8(g_m68k.d[0], bus_read8(0x002700));
    M68K_ADD16(g_m68k.d[0], g_m68k.d[4]);
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_ADD16(g_m68k.d[0], bus_read16(g_m68k.a[3]));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_ADD8(g_m68k.d[0], bus_read8(0x2700D045));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_ADD16(g_m68k.d[0], bus_read16(g_m68k.a[4]));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0928B0-$0928E4  (21 instructions, 52 bytes) */
void jt_0928B0(void) {
    M68K_OR8(g_m68k.d[4], 0x3);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[6]);
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_ADD16(g_m68k.d[0], bus_read16(g_m68k.a[5]));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_ADD8(g_m68k.d[0], bus_read8(0x94fc2));
    M68K_ADD16(g_m68k.d[0], g_m68k.d[7]);
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_ADD16(g_m68k.d[0], bus_read16(g_m68k.a[6]));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_ADD8(g_m68k.d[0], /* UNHANDLED_READ: (a16, d2.w * 8) */ 0);
    M68K_ADD16(g_m68k.d[0], g_m68k.a[0]);
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_ADD16(g_m68k.d[0], bus_read16(g_m68k.a[7]));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_ADD16(g_m68k.d[0], g_m68k.a[1]);
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_ADD16(g_m68k.d[0], _postinc16(0));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0928E4-$0928F4  (6 instructions, 16 bytes) */
void jt_0928E4(void) {
    M68K_OR8(g_m68k.d[4], 0x3);
    M68K_ADD8(g_m68k.d[0], 0x0);
    M68K_ADD16(g_m68k.d[0], g_m68k.a[2]);
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_ADD16(g_m68k.d[0], _postinc16(1));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $092918-$09294C  (22 instructions, 52 bytes) */
void jt_092918(void) {
    M68K_OR8(g_m68k.d[4], 0x3);
    M68K_ADD16(g_m68k.d[0], _postinc16(4));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_ADD16(g_m68k.d[0], _predec16(2));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_ADD16(g_m68k.d[0], _predec16(7));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_ADD16(g_m68k.d[0], _postinc16(5));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_ADD16(g_m68k.d[0], _predec16(3));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_ADD16(g_m68k.d[0], bus_read16(g_m68k.a[0] + 0x2700));
    M68K_ADD16(g_m68k.d[0], _postinc16(6));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_ADD16(g_m68k.d[0], _predec16(4));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_ADD16(g_m68k.d[0], bus_read16(g_m68k.a[1] + 0x2700));
    M68K_ADD16(g_m68k.d[0], _postinc16(7));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_ADD16(g_m68k.d[0], _predec16(5));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_ADD16(g_m68k.d[0], bus_read16(g_m68k.a[2] + 0x2700));
    /* WARNING: function did not end with RTS */
}

/* $09294C-$092980  (17 instructions, 52 bytes) */
void jt_09294C(void) {
    M68K_OR8(g_m68k.d[4], 0x3);
    M68K_ADD16(g_m68k.d[0], _predec16(0));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_MULS(g_m68k.d[6], bus_read16(g_m68k.a[6]));
    { uint32_t _mv = (uint32_t)(g_m68k.d[2]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_ADD16(g_m68k.d[0], bus_read16(g_m68k.a[3] + 0x2700));
    M68K_ADD16(g_m68k.d[0], _predec16(1));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_ADD16(g_m68k.d[0], _predec16(6));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_ADD16(g_m68k.d[0], bus_read16(g_m68k.a[4] + 0x2700));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $092980-$0929B4  (13 instructions, 52 bytes) */
void jt_092980(void) {
    M68K_OR8(g_m68k.d[4], 0x3);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
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

/* $0929B4-$0929E8  (13 instructions, 52 bytes) */
void jt_0929B4(void) {
    M68K_OR8(g_m68k.d[4], 0x3);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
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

/* $0929E8-$092A1C  (13 instructions, 52 bytes) */
void jt_0929E8(void) {
    M68K_OR8(g_m68k.d[4], 0x3);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
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

/* $092A1C-$092A50  (13 instructions, 52 bytes) */
void jt_092A1C(void) {
    M68K_OR8(g_m68k.d[4], 0x3);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
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

/* $092A50-$092A84  (13 instructions, 52 bytes) */
void jt_092A50(void) {
    M68K_OR8(g_m68k.d[4], 0x3);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
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

/* $092A84-$092AB8  (13 instructions, 52 bytes) */
void jt_092A84(void) {
    M68K_OR8(g_m68k.d[4], 0x3);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
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

/* $092AB8-$092AEC  (13 instructions, 52 bytes) */
void jt_092AB8(void) {
    M68K_OR8(g_m68k.d[4], 0x3);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
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

/* $092AEC-$092B20  (13 instructions, 52 bytes) */
void jt_092AEC(void) {
    M68K_OR8(g_m68k.d[4], 0x3);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
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

/* $092B20-$092B34  (5 instructions, 20 bytes) */
void jt_092B20(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_ADD16(g_m68k.d[0], bus_read16(g_m68k.a[5] + 0x2700));
    M68K_ADD16(g_m68k.d[0], bus_read16(0x9522a));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_ADD16(g_m68k.d[0], /* UNHANDLED_READ: (a16, d2.w * 8) */ 0);
    /* WARNING: function did not end with RTS */
}

/* $092B34-$092B44  (4 instructions, 16 bytes) */
void jt_092B34(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_ADD16(g_m68k.d[0], bus_read16(g_m68k.a[6] + 0x2700));
    M68K_ADD16(g_m68k.d[0], 0x2700);
    M68K_ADD16(g_m68k.d[0], bus_read16(g_m68k.a[7] + 0x2700));
    /* WARNING: function did not end with RTS */
}

/* $092B48-$092B50  (2 instructions, 8 bytes) */
void jt_092B48(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_ADD16(g_m68k.d[0], bus_read16(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[2] * 8));
    /* WARNING: function did not end with RTS */
}

/* $092B5C-$092B70  (7 instructions, 20 bytes) */
void jt_092B5C(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_ADD16(g_m68k.d[0], bus_read16(g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.d[2] * 8));
    M68K_ADD32(g_m68k.d[0], g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_ADD16(g_m68k.d[0], bus_read16(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[2] * 8));
    M68K_ADD32(g_m68k.d[0], g_m68k.d[1]);
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $092B70-$092B84  (7 instructions, 20 bytes) */
void jt_092B70(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_ADD16(g_m68k.d[0], bus_read16(g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.d[2] * 8));
    M68K_ADD32(g_m68k.d[0], g_m68k.d[2]);
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_ADD16(g_m68k.d[0], bus_read16(g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.d[2] * 8));
    M68K_ADD32(g_m68k.d[0], g_m68k.d[3]);
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $092B84-$092B98  (7 instructions, 20 bytes) */
void jt_092B84(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_ADD16(g_m68k.d[0], bus_read16(g_m68k.a[6] + 0 + (int16_t)(uint16_t)g_m68k.d[2] * 8));
    M68K_ADD32(g_m68k.d[0], g_m68k.d[4]);
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_ADD16(g_m68k.d[0], bus_read16(g_m68k.a[7] + 0 + (int16_t)(uint16_t)g_m68k.d[2] * 8));
    M68K_ADD32(g_m68k.d[0], g_m68k.d[5]);
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $092B98-$092BAC  (6 instructions, 20 bytes) */
void jt_092B98(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_ADD16(g_m68k.d[0], bus_read16(0x002700));
    M68K_ADD32(g_m68k.d[0], g_m68k.d[6]);
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_ADD16(g_m68k.d[0], bus_read16(0x2700D087));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $092BAC-$092BD4  (17 instructions, 40 bytes) */
void jt_092BAC(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    M68K_ADD32(g_m68k.d[0], g_m68k.a[6]);
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_ADD32(g_m68k.d[0], _postinc32(5));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_ADD32(g_m68k.d[0], bus_read32(g_m68k.a[3] + 0x2700));
    M68K_ADD32(g_m68k.d[0], g_m68k.a[7]);
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_ADD32(g_m68k.d[0], _postinc32(6));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_ADD32(g_m68k.d[0], bus_read32(g_m68k.a[4] + 0x2700));
    M68K_ADD32(g_m68k.d[0], bus_read32(g_m68k.a[0]));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_ADD32(g_m68k.d[0], _postinc32(7));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_AND16(g_m68k.d[2], _postinc16(3));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $092BD4-$092BFC  (16 instructions, 40 bytes) */
void jt_092BD4(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    M68K_ADD32(g_m68k.d[0], bus_read32(g_m68k.a[1]));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_ADD32(g_m68k.d[0], _predec32(0));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_ADD32(g_m68k.d[0], bus_read32(g_m68k.a[5] + 0x2700));
    M68K_ADD32(g_m68k.d[0], bus_read32(g_m68k.a[2]));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_ADD32(g_m68k.d[0], _predec32(1));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_ADD32(g_m68k.d[0], bus_read32(g_m68k.a[6] + 0x2700));
    M68K_ADD32(g_m68k.d[0], bus_read32(g_m68k.a[3]));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_ADD32(g_m68k.d[0], _predec32(2));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_ADD32(g_m68k.d[0], bus_read32(g_m68k.a[7] + 0x2700));
    /* WARNING: function did not end with RTS */
}

/* $092BFC-$092C24  (16 instructions, 40 bytes) */
void jt_092BFC(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    M68K_ADD32(g_m68k.d[0], bus_read32(g_m68k.a[4]));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_ADD32(g_m68k.d[0], _predec32(3));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_ADD32(g_m68k.d[0], bus_read32(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[2] * 8));
    M68K_ADD32(g_m68k.d[0], bus_read32(g_m68k.a[5]));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_ADD32(g_m68k.d[0], _predec32(4));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_ADD32(g_m68k.d[0], bus_read32(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[2] * 8));
    M68K_ADD32(g_m68k.d[0], bus_read32(g_m68k.a[6]));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_ADD32(g_m68k.d[0], _predec32(5));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_ADD32(g_m68k.d[0], bus_read32(g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.d[2] * 8));
    /* WARNING: function did not end with RTS */
}

/* $092C24-$092C4C  (15 instructions, 40 bytes) */
void jt_092C24(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    M68K_ADD32(g_m68k.d[0], bus_read32(g_m68k.a[7]));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_ADD32(g_m68k.d[0], _predec32(6));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_ADD32(g_m68k.d[0], bus_read32(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[2] * 8));
    M68K_ADD32(g_m68k.d[0], _postinc32(0));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_ADD32(g_m68k.d[0], _predec32(7));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_ADD32(g_m68k.d[0], bus_read32(g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.d[2] * 8));
    M68K_ADD32(g_m68k.d[0], _postinc32(1));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_ADD32(g_m68k.d[0], bus_read32(g_m68k.a[0] + 0x2700));
    M68K_ADD32(g_m68k.d[0], bus_read32(g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.d[2] * 8));
    /* WARNING: function did not end with RTS */
}

/* $092C4C-$092C74  (13 instructions, 40 bytes) */
void jt_092C4C(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    M68K_ADD32(g_m68k.d[0], _postinc32(2));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_ADD32(g_m68k.d[0], bus_read32(g_m68k.a[1] + 0x2700));
    M68K_ADD32(g_m68k.d[0], bus_read32(g_m68k.a[6] + 0 + (int16_t)(uint16_t)g_m68k.d[2] * 8));
    M68K_ADD32(g_m68k.d[0], _postinc32(3));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_ADD32(g_m68k.d[0], bus_read32(g_m68k.a[7] + 0 + (int16_t)(uint16_t)g_m68k.d[2] * 8));
    M68K_ADD32(g_m68k.d[0], _postinc32(4));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_ADD32(g_m68k.d[0], bus_read32(g_m68k.a[2] + 0x2700));
    M68K_ADD32(g_m68k.d[0], bus_read32(0x002700));
    /* WARNING: function did not end with RTS */
}

/* $092C74-$092C80  (3 instructions, 12 bytes) */
void jt_092C74(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    M68K_ADD32(g_m68k.d[0], bus_read32(0x2700D0BC));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $092C9C-$092CC4  (10 instructions, 40 bytes) */
void jt_092C9C(void) {
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

/* $092CC4-$092CE8  (9 instructions, 36 bytes) */
void jt_092CC4(void) {
    M68K_OR8(g_m68k.d[4], 0x2);
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

/* $092CE8-$092D0C  (10 instructions, 36 bytes) */
void jt_092CE8(void) {
    M68K_OR8(g_m68k.d[4], 0x2);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[6]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[0]); bus_write16(_ea, _tmp); }
    g_m68k.d[4] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[4]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $092D0C-$092D30  (11 instructions, 36 bytes) */
void jt_092D0C(void) {
    M68K_OR8(g_m68k.d[4], 0x2);
    { uint32_t _ea = g_m68k.a[7]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[0]); bus_write16(_ea, _tmp); }
    g_m68k.d[4] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[4]);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[0]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[0]); bus_write16(_ea, _tmp); }
    g_m68k.d[4] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[4]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $092D30-$092D54  (9 instructions, 36 bytes) */
void jt_092D30(void) {
    M68K_OR8(g_m68k.d[4], 0x2);
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

/* $092D54-$092D78  (11 instructions, 36 bytes) */
void jt_092D54(void) {
    M68K_OR8(g_m68k.d[4], 0x2);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = (g_m68k.a[2] + 0x2800); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[0]); bus_write16(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[1]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[0]); bus_write16(_ea, _tmp); }
    g_m68k.d[4] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[4]);
    { uint32_t _ea = (g_m68k.a[3] + 0x2800); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[0]); bus_write16(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[2]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[0]); bus_write16(_ea, _tmp); }
    g_m68k.d[4] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[4]);
    { uint32_t _ea = (g_m68k.a[4] + 0x2800); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[0]); bus_write16(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $092D78-$092D9C  (11 instructions, 36 bytes) */
void jt_092D78(void) {
    M68K_OR8(g_m68k.d[4], 0x2);
    { uint32_t _ea = g_m68k.a[3]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[0]); bus_write16(_ea, _tmp); }
    g_m68k.d[4] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[4]);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[4]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[0]); bus_write16(_ea, _tmp); }
    g_m68k.d[4] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[4]);
    { uint32_t _ea = (g_m68k.a[5] + 0x2800); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[0]); bus_write16(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = (g_m68k.a[6] + 0x2800); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[0]); bus_write16(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $092D9C-$092DC0  (11 instructions, 36 bytes) */
void jt_092D9C(void) {
    M68K_OR8(g_m68k.d[4], 0x2);
    { uint32_t _ea = g_m68k.a[5]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[0]); bus_write16(_ea, _tmp); }
    g_m68k.d[4] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[4]);
    { uint32_t _ea = (g_m68k.a[7] + 0x2800); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[0]); bus_write16(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[6]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[0]); bus_write16(_ea, _tmp); }
    g_m68k.d[4] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[4]);
    { uint32_t _ea = (g_m68k.a[0] + 0 + (int32_t)g_m68k.d[2]); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[0]); bus_write16(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $092DC0-$092DC8  (3 instructions, 8 bytes) */
void jt_092DC0(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_ADD32(g_m68k.d[0], g_m68k.a[0]);
    g_m68k.d[3] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[3]);
    /* WARNING: function did not end with RTS */
}

/* $092DC8-$092DD0  (3 instructions, 8 bytes) */
void jt_092DC8(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_ADD32(g_m68k.d[0], g_m68k.a[1]);
    g_m68k.d[3] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[3]);
    /* WARNING: function did not end with RTS */
}

/* $092DD0-$092DD8  (3 instructions, 8 bytes) */
void jt_092DD0(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_ADD32(g_m68k.d[0], g_m68k.a[2]);
    g_m68k.d[3] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[3]);
    /* WARNING: function did not end with RTS */
}

/* $092DD8-$092DE0  (3 instructions, 8 bytes) */
void jt_092DD8(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_ADD32(g_m68k.d[0], g_m68k.a[3]);
    g_m68k.d[3] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[3]);
    /* WARNING: function did not end with RTS */
}

/* $092DE0-$092DE8  (3 instructions, 8 bytes) */
void jt_092DE0(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_ADD32(g_m68k.d[0], g_m68k.a[4]);
    g_m68k.d[3] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[3]);
    /* WARNING: function did not end with RTS */
}

/* $092DE8-$092DF0  (3 instructions, 8 bytes) */
void jt_092DE8(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_ADD32(g_m68k.d[0], g_m68k.a[5]);
    g_m68k.d[3] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[3]);
    /* WARNING: function did not end with RTS */
}

/* $092DF0-$092E18  (12 instructions, 40 bytes) */
void jt_092DF0(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $092E04: dc.w $f838  [F8 38] */
    g_m68k.d[4] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[4]);
    /* TODO $092E08: dc.w $f83f  [F8 3F] */
    g_m68k.d[4] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[4]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $092E18-$092E40  (12 instructions, 40 bytes) */
void jt_092E18(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $092E2C: dc.w $f844  [F8 44] */
    g_m68k.d[4] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[4]);
    /* TODO $092E30: dc.w $f84a  [F8 4A] */
    g_m68k.d[4] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[4]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $092E40-$092E68  (13 instructions, 40 bytes) */
void jt_092E40(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $092E4C: dc.w $f84d  [F8 4D] */
    g_m68k.d[4] = g_m68k.d[2]; M68K_TST32((uint32_t)g_m68k.d[4]);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $092E54: dc.w $f84f  [F8 4F] */
    g_m68k.d[4] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[4]);
    /* TODO $092E58: dc.w $f84e  [F8 4E] */
    g_m68k.d[4] = g_m68k.d[2]; M68K_TST32((uint32_t)g_m68k.d[4]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $092E68-$092E90  (13 instructions, 40 bytes) */
void jt_092E68(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $092E74: dc.w $f842  [F8 42] */
    g_m68k.d[4] = g_m68k.d[2]; M68K_TST32((uint32_t)g_m68k.d[4]);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $092E7C: dc.w $f849  [F8 49] */
    g_m68k.d[4] = g_m68k.d[2]; M68K_TST32((uint32_t)g_m68k.d[4]);
    /* TODO $092E80: dc.w $f843  [F8 43] */
    g_m68k.d[4] = g_m68k.d[2]; M68K_TST32((uint32_t)g_m68k.d[4]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $092E90-$092EB8  (16 instructions, 40 bytes) */
void jt_092E90(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $092E98: dc.w $f839  [F8 39] */
    g_m68k.d[4] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[4]);
    /* TODO $092E9C: dc.w $f840  [F8 40] */
    g_m68k.d[4] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[4]);
    /* TODO $092EA0: dc.w $f068  [F0 68] */
    g_m68k.d[4] = g_m68k.d[2]; M68K_TST32((uint32_t)g_m68k.d[4]);
    /* TODO $092EA4: dc.w $f83a  [F8 3A] */
    g_m68k.d[4] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[4]);
    /* TODO $092EA8: dc.w $f83d  [F8 3D] */
    g_m68k.d[4] = g_m68k.d[1]; M68K_TST32((uint32_t)g_m68k.d[4]);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $092EB0: roxl.w d6, d5  [ED 75] */
    g_m68k.d[4] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[4]);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}
