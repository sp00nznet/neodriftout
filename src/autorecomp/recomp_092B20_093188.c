/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $092B20 - $093188 */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

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

/* $092EB8-$092EE0  (13 instructions, 40 bytes) */
void jt_092EB8(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $092EC0: dc.w $f845  [F8 45] */
    g_m68k.d[4] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[4]);
    /* TODO $092EC4: dc.w $f84b  [F8 4B] */
    g_m68k.d[4] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[4]);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $092ECC: dc.w $f846  [F8 46] */
    g_m68k.d[4] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[4]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $092EE0-$092F08  (13 instructions, 40 bytes) */
void jt_092EE0(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $092EE8: dc.w $f850  [F8 50] */
    g_m68k.d[4] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[4]);
    /* TODO $092EEC: dc.w $f84c  [F8 4C] */
    g_m68k.d[4] = g_m68k.d[2]; M68K_TST32((uint32_t)g_m68k.d[4]);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $092EF4: dc.w $f851  [F8 51] */
    g_m68k.d[4] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[4]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $092F08-$092F30  (12 instructions, 40 bytes) */
void jt_092F08(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $092F10: dc.w $f847  [F8 47] */
    g_m68k.d[4] = g_m68k.d[2]; M68K_TST32((uint32_t)g_m68k.d[4]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $092F1C: dc.w $f848  [F8 48] */
    g_m68k.d[4] = g_m68k.d[2]; M68K_TST32((uint32_t)g_m68k.d[4]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $092F30-$092F58  (12 instructions, 40 bytes) */
void jt_092F30(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $092F38: dc.w $f83b  [F8 3B] */
    g_m68k.d[4] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[4]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $092F44: dc.w $f83c  [F8 3C] */
    g_m68k.d[4] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[4]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $092F58-$092F80  (12 instructions, 40 bytes) */
void jt_092F58(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $092F60: dc.w $f847  [F8 47] */
    g_m68k.d[4] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[4]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $092F6C: dc.w $f848  [F8 48] */
    g_m68k.d[4] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[4]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $092F80-$092FA8  (13 instructions, 40 bytes) */
void jt_092F80(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    /* TODO $092F84: dc.w $f84c  [F8 4C] */
    g_m68k.d[4] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[4]);
    /* TODO $092F88: dc.w $f850  [F8 50] */
    g_m68k.d[4] = g_m68k.d[2]; M68K_TST32((uint32_t)g_m68k.d[4]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $092F94: dc.w $f851  [F8 51] */
    g_m68k.d[4] = g_m68k.d[2]; M68K_TST32((uint32_t)g_m68k.d[4]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $092FA8-$092FD0  (13 instructions, 40 bytes) */
void jt_092FA8(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    /* TODO $092FAC: dc.w $f84b  [F8 4B] */
    g_m68k.d[4] = g_m68k.d[2]; M68K_TST32((uint32_t)g_m68k.d[4]);
    /* TODO $092FB0: dc.w $f845  [F8 45] */
    g_m68k.d[4] = g_m68k.d[2]; M68K_TST32((uint32_t)g_m68k.d[4]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $092FBC: dc.w $f846  [F8 46] */
    g_m68k.d[4] = g_m68k.d[2]; M68K_TST32((uint32_t)g_m68k.d[4]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $092FD0-$092FF8  (12 instructions, 40 bytes) */
void jt_092FD0(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $092FF0: dc.w $f839  [F8 39] */
    g_m68k.d[4] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[4]);
    /* TODO $092FF4: dc.w $f840  [F8 40] */
    g_m68k.d[4] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[4]);
    /* WARNING: function did not end with RTS */
}

/* $092FF8-$093020  (12 instructions, 40 bytes) */
void jt_092FF8(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $093018: dc.w $f845  [F8 45] */
    g_m68k.d[4] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[4]);
    /* TODO $09301C: dc.w $f84b  [F8 4B] */
    g_m68k.d[4] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[4]);
    /* WARNING: function did not end with RTS */
}

/* $093020-$093048  (12 instructions, 40 bytes) */
void jt_093020(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $093040: dc.w $f850  [F8 50] */
    g_m68k.d[4] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[4]);
    /* TODO $093044: dc.w $f84c  [F8 4C] */
    g_m68k.d[4] = g_m68k.d[2]; M68K_TST32((uint32_t)g_m68k.d[4]);
    /* WARNING: function did not end with RTS */
}

/* $093048-$093070  (11 instructions, 40 bytes) */
void jt_093048(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $093068: dc.w $f847  [F8 47] */
    g_m68k.d[4] = g_m68k.d[2]; M68K_TST32((uint32_t)g_m68k.d[4]);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $093070-$093098  (12 instructions, 40 bytes) */
void jt_093070(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $093080: dc.w $f83f  [F8 3F] */
    g_m68k.d[4] = g_m68k.d[3]; M68K_TST32((uint32_t)g_m68k.d[4]);
    /* TODO $093084: dc.w $f838  [F8 38] */
    g_m68k.d[4] = g_m68k.d[3]; M68K_TST32((uint32_t)g_m68k.d[4]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $093098-$0930C0  (12 instructions, 40 bytes) */
void jt_093098(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $0930A8: dc.w $f84a  [F8 4A] */
    g_m68k.d[4] = g_m68k.d[3]; M68K_TST32((uint32_t)g_m68k.d[4]);
    /* TODO $0930AC: dc.w $f844  [F8 44] */
    g_m68k.d[4] = g_m68k.d[3]; M68K_TST32((uint32_t)g_m68k.d[4]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0930C0-$0930E8  (13 instructions, 40 bytes) */
void jt_0930C0(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $0930D0: dc.w $f84e  [F8 4E] */
    g_m68k.d[4] = g_m68k.d[1]; M68K_TST32((uint32_t)g_m68k.d[4]);
    /* TODO $0930D4: dc.w $f84f  [F8 4F] */
    g_m68k.d[4] = g_m68k.d[3]; M68K_TST32((uint32_t)g_m68k.d[4]);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $0930DC: dc.w $f84d  [F8 4D] */
    g_m68k.d[4] = g_m68k.d[1]; M68K_TST32((uint32_t)g_m68k.d[4]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0930E8-$093110  (13 instructions, 40 bytes) */
void jt_0930E8(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $0930F8: dc.w $f843  [F8 43] */
    g_m68k.d[4] = g_m68k.d[1]; M68K_TST32((uint32_t)g_m68k.d[4]);
    /* TODO $0930FC: dc.w $f849  [F8 49] */
    g_m68k.d[4] = g_m68k.d[1]; M68K_TST32((uint32_t)g_m68k.d[4]);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $093104: dc.w $f842  [F8 42] */
    g_m68k.d[4] = g_m68k.d[1]; M68K_TST32((uint32_t)g_m68k.d[4]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $093110-$093138  (16 instructions, 40 bytes) */
void jt_093110(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $093118: roxl.w d6, d5  [ED 75] */
    g_m68k.d[4] = g_m68k.d[3]; M68K_TST32((uint32_t)g_m68k.d[4]);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $093120: dc.w $f83d  [F8 3D] */
    g_m68k.d[4] = g_m68k.d[2]; M68K_TST32((uint32_t)g_m68k.d[4]);
    /* TODO $093124: dc.w $f83a  [F8 3A] */
    g_m68k.d[4] = g_m68k.d[3]; M68K_TST32((uint32_t)g_m68k.d[4]);
    /* TODO $093128: dc.w $f068  [F0 68] */
    g_m68k.d[4] = g_m68k.d[1]; M68K_TST32((uint32_t)g_m68k.d[4]);
    /* TODO $09312C: dc.w $f840  [F8 40] */
    g_m68k.d[4] = g_m68k.d[3]; M68K_TST32((uint32_t)g_m68k.d[4]);
    /* TODO $093130: dc.w $f839  [F8 39] */
    g_m68k.d[4] = g_m68k.d[3]; M68K_TST32((uint32_t)g_m68k.d[4]);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $093138-$093160  (13 instructions, 40 bytes) */
void jt_093138(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $09314C: dc.w $f846  [F8 46] */
    g_m68k.d[4] = g_m68k.d[3]; M68K_TST32((uint32_t)g_m68k.d[4]);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $093154: dc.w $f84b  [F8 4B] */
    g_m68k.d[4] = g_m68k.d[3]; M68K_TST32((uint32_t)g_m68k.d[4]);
    /* TODO $093158: dc.w $f845  [F8 45] */
    g_m68k.d[4] = g_m68k.d[3]; M68K_TST32((uint32_t)g_m68k.d[4]);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $093160-$093188  (13 instructions, 40 bytes) */
void jt_093160(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $093174: dc.w $f851  [F8 51] */
    g_m68k.d[4] = g_m68k.d[3]; M68K_TST32((uint32_t)g_m68k.d[4]);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $09317C: dc.w $f84c  [F8 4C] */
    g_m68k.d[4] = g_m68k.d[1]; M68K_TST32((uint32_t)g_m68k.d[4]);
    /* TODO $093180: dc.w $f850  [F8 50] */
    g_m68k.d[4] = g_m68k.d[3]; M68K_TST32((uint32_t)g_m68k.d[4]);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}
