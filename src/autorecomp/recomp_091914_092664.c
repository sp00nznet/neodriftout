/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $091914 - $092664 */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

/* $091914-$091950  (20 instructions, 60 bytes) */
void jt_091914(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[4]; uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[7]); bus_write32(_ea, _tmp); }
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _ea = (g_m68k.a[3] + 0x2100); uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[7]); bus_write32(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[5]; uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[7]); bus_write32(_ea, _tmp); }
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _ea = (g_m68k.a[4] + 0x2100); uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[7]); bus_write32(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[6]; uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[7]); bus_write32(_ea, _tmp); }
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _ea = (g_m68k.a[5] + 0x2100); uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[7]); bus_write32(_ea, _tmp); }
    M68K_EOR16(g_m68k.d[0], g_m68k.d[6]);
    { uint32_t _mv = (uint32_t)(g_m68k.d[3]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[7]; uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[7]); bus_write32(_ea, _tmp); }
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $091978-$091980  (2 instructions, 8 bytes) */
void jt_091978(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0919DC-$0919E4  (2 instructions, 8 bytes) */
void jt_0919DC(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $091A40-$091AA4  (37 instructions, 100 bytes) */
void jt_091A40(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _t = g_m68k.d[7]; g_m68k.d[7] = g_m68k.a[3]; g_m68k.a[3] = _t; }
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _ea = g_m68k.a[2]; uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[7]); bus_write32(_ea, _tmp); }
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _ea = g_m68k.a[1]; uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[7]); bus_write32(_ea, _tmp); }
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _t = g_m68k.d[7]; g_m68k.d[7] = g_m68k.a[4]; g_m68k.a[4] = _t; }
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _ea = g_m68k.a[3]; uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[7]); bus_write32(_ea, _tmp); }
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _ea = g_m68k.a[2]; uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[7]); bus_write32(_ea, _tmp); }
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _ea = g_m68k.a[6]; uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[7]); bus_write32(_ea, _tmp); }
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[4]; uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[7]); bus_write32(_ea, _tmp); }
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _ea = g_m68k.a[5]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    { uint32_t _mv = (uint32_t)(g_m68k.d[3]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _ea = g_m68k.a[7]; uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[7]); bus_write32(_ea, _tmp); }
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[3]; uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[7]); bus_write32(_ea, _tmp); }
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _ea = g_m68k.a[0]; uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[7]); bus_write32(_ea, _tmp); }
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $091AA4-$091AC0  (8 instructions, 28 bytes) */
void jt_091AA4(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[1]; uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[7]); bus_write32(_ea, _tmp); }
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _ea = (g_m68k.a[1] + 0x2100); uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[7]); bus_write32(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $091B08-$091B20  (6 instructions, 24 bytes) */
void jt_091B08(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = 0x002100; uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[7]); bus_write32(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $091B6C-$091B98  (13 instructions, 44 bytes) */
void jt_091B6C(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND32(g_m68k.d[7], g_m68k.d[2]);
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    M68K_AND32(g_m68k.d[7], g_m68k.d[6]);
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $091BD0-$091C08  (19 instructions, 56 bytes) */
void jt_091BD0(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND32(g_m68k.d[7], _predec32(0));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    M68K_AND32(g_m68k.d[7], bus_read32(g_m68k.a[1] + 0x2100));
    M68K_AND32(g_m68k.d[7], bus_read32(g_m68k.a[6]));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    M68K_AND32(g_m68k.d[7], _postinc32(2));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    M68K_AND32(g_m68k.d[7], _predec32(1));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    M68K_AND32(g_m68k.d[7], bus_read32(g_m68k.a[2] + 0x2100));
    M68K_AND32(g_m68k.d[7], bus_read32(g_m68k.a[7]));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $091C34-$091C6C  (15 instructions, 56 bytes) */
void jt_091C34(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND32(g_m68k.d[7], bus_read32(0x002100));
    M68K_MULU(g_m68k.d[7], g_m68k.d[1]);
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    M68K_AND32(g_m68k.d[7], bus_read32(g_m68k.a[6] + 0x2100));
    M68K_AND32(g_m68k.d[7], bus_read32(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[2]));
    M68K_AND32(g_m68k.d[7], bus_read32(0x2100CEC2));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    M68K_AND32(g_m68k.d[7], bus_read32(g_m68k.a[7] + 0x2100));
    /* WARNING: function did not end with RTS */
}

/* $091C98-$091CB4  (7 instructions, 28 bytes) */
void jt_091C98(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $091CFC-$091D18  (7 instructions, 28 bytes) */
void jt_091CFC(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $091D60-$091D8C  (15 instructions, 44 bytes) */
void jt_091D60(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND32(g_m68k.d[7], _predec32(4));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[1]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[1]); bus_write16(_ea, _tmp); }
    { uint32_t _mv = (uint32_t)(g_m68k.d[1]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    M68K_AND32(g_m68k.d[7], _predec32(5));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    M68K_AND32(g_m68k.d[7], bus_read32(g_m68k.a[4] + 0x2100));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND32(g_m68k.d[7], _postinc32(4));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $091DC4-$091DE0  (7 instructions, 28 bytes) */
void jt_091DC4(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND32(g_m68k.d[7], 0x21000000);
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND32(g_m68k.d[7], bus_read32(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[2]));
    /* WARNING: function did not end with RTS */
}

/* $091E28-$091E40  (7 instructions, 24 bytes) */
void jt_091E28(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _t = g_m68k.d[2]; g_m68k.d[2] = g_m68k.d[5]; g_m68k.d[5] = _t; }
    { uint32_t _mv = (uint32_t)(g_m68k.d[3]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0920F4-$092104  (5 instructions, 16 bytes) */
void jt_0920F4(void) {
    M68K_OR8(g_m68k.d[4], 0x3);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULS(g_m68k.d[7], _postinc16(2));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[1] -= 4; bus_write32(g_m68k.a[1], _mv); M68K_TST32(_mv); }
    M68K_MULS(g_m68k.d[7], bus_read16(g_m68k.a[2] + 0x2300));
    /* WARNING: function did not end with RTS */
}

/* $092128-$09215C  (19 instructions, 52 bytes) */
void jt_092128(void) {
    M68K_OR8(g_m68k.d[4], 0x3);
    M68K_AND16(g_m68k.d[5], bus_read16(g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.d[2] * 2));
    M68K_MULS(g_m68k.d[7], _postinc16(6));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[1] -= 4; bus_write32(g_m68k.a[1], _mv); M68K_TST32(_mv); }
    M68K_MULS(g_m68k.d[7], bus_read16(g_m68k.a[6] + 0x2300));
    M68K_MULS(g_m68k.d[7], bus_read16(g_m68k.a[0]));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[1] -= 4; bus_write32(g_m68k.a[1], _mv); M68K_TST32(_mv); }
    M68K_MULS(g_m68k.d[7], _postinc16(7));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[1] -= 4; bus_write32(g_m68k.a[1], _mv); M68K_TST32(_mv); }
    M68K_MULS(g_m68k.d[7], bus_read16(g_m68k.a[7] + 0x2300));
    M68K_MULS(g_m68k.d[7], bus_read16(g_m68k.a[1]));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[1] -= 4; bus_write32(g_m68k.a[1], _mv); M68K_TST32(_mv); }
    M68K_MULS(g_m68k.d[7], _predec16(0));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[1] -= 4; bus_write32(g_m68k.a[1], _mv); M68K_TST32(_mv); }
    M68K_MULS(g_m68k.d[7], bus_read16(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[2] * 2));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULS(g_m68k.d[7], _predec16(1));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[1] -= 4; bus_write32(g_m68k.a[1], _mv); M68K_TST32(_mv); }
    M68K_MULS(g_m68k.d[7], bus_read16(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[2] * 2));
    /* WARNING: function did not end with RTS */
}

/* $09215C-$092190  (21 instructions, 52 bytes) */
void jt_09215C(void) {
    M68K_OR8(g_m68k.d[4], 0x3);
    M68K_MULS(g_m68k.d[7], bus_read16(g_m68k.a[2]));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[1] -= 4; bus_write32(g_m68k.a[1], _mv); M68K_TST32(_mv); }
    M68K_MULS(g_m68k.d[7], _predec16(2));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[1] -= 4; bus_write32(g_m68k.a[1], _mv); M68K_TST32(_mv); }
    M68K_MULS(g_m68k.d[7], bus_read16(g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.d[2] * 2));
    M68K_MULS(g_m68k.d[7], bus_read16(g_m68k.a[3]));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[1] -= 4; bus_write32(g_m68k.a[1], _mv); M68K_TST32(_mv); }
    M68K_MULS(g_m68k.d[7], _predec16(3));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[1] -= 4; bus_write32(g_m68k.a[1], _mv); M68K_TST32(_mv); }
    M68K_MULS(g_m68k.d[7], bus_read16(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[2] * 2));
    M68K_MULS(g_m68k.d[7], bus_read16(g_m68k.a[4]));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[1] -= 4; bus_write32(g_m68k.a[1], _mv); M68K_TST32(_mv); }
    M68K_MULS(g_m68k.d[7], _predec16(4));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[1] -= 4; bus_write32(g_m68k.a[1], _mv); M68K_TST32(_mv); }
    M68K_MULS(g_m68k.d[7], bus_read16(g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.d[2] * 2));
    M68K_MULS(g_m68k.d[7], bus_read16(g_m68k.a[5]));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[1] -= 4; bus_write32(g_m68k.a[1], _mv); M68K_TST32(_mv); }
    M68K_MULS(g_m68k.d[7], _predec16(5));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[1] -= 4; bus_write32(g_m68k.a[1], _mv); M68K_TST32(_mv); }
    M68K_MULS(g_m68k.d[7], bus_read16(g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.d[2] * 2));
    /* WARNING: function did not end with RTS */
}

/* $092190-$0921C6  (19 instructions, 54 bytes) */
void jt_092190(void) {
    M68K_OR8(g_m68k.d[4], 0x3);
    M68K_MULS(g_m68k.d[7], bus_read16(g_m68k.a[6]));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[1] -= 4; bus_write32(g_m68k.a[1], _mv); M68K_TST32(_mv); }
    M68K_MULS(g_m68k.d[7], _predec16(6));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[1] -= 4; bus_write32(g_m68k.a[1], _mv); M68K_TST32(_mv); }
    M68K_MULS(g_m68k.d[7], bus_read16(g_m68k.a[6] + 0 + (int16_t)(uint16_t)g_m68k.d[2] * 2));
    M68K_MULS(g_m68k.d[7], bus_read16(g_m68k.a[7]));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[1] -= 4; bus_write32(g_m68k.a[1], _mv); M68K_TST32(_mv); }
    M68K_MULS(g_m68k.d[7], _predec16(7));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[1] -= 4; bus_write32(g_m68k.a[1], _mv); M68K_TST32(_mv); }
    M68K_MULS(g_m68k.d[7], bus_read16(g_m68k.a[7] + 0 + (int16_t)(uint16_t)g_m68k.d[2] * 2));
    M68K_MULS(g_m68k.d[7], _postinc16(0));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[1] -= 4; bus_write32(g_m68k.a[1], _mv); M68K_TST32(_mv); }
    M68K_MULS(g_m68k.d[7], bus_read16(g_m68k.a[0] + 0x2300));
    M68K_MULS(g_m68k.d[7], bus_read16(0x002300));
    M68K_MULS(g_m68k.d[7], _postinc16(1));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[1] -= 4; bus_write32(g_m68k.a[1], _mv); M68K_TST32(_mv); }
    M68K_MULS(g_m68k.d[7], bus_read16(g_m68k.a[1] + 0x2300));
    M68K_MULS(g_m68k.d[7], bus_read16(0x23000004));
    /* WARNING: function did not end with RTS */
}

/* $0921C4-$0921E4  (14 instructions, 32 bytes) */
void jt_0921C4(void) {
    M68K_OR8(g_m68k.d[4], 0x3);
    M68K_OR8(g_m68k.d[3], 0xfa);
    M68K_MULS(g_m68k.d[7], bus_read16(0x944ca));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[1] -= 4; bus_write32(g_m68k.a[1], _mv); M68K_TST32(_mv); }
    M68K_ADD8(g_m68k.d[0], g_m68k.d[6]);
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[1] -= 4; bus_write32(g_m68k.a[1], _mv); M68K_TST32(_mv); }
    M68K_ADD8(g_m68k.d[0], bus_read8(g_m68k.a[1]));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[1] -= 4; bus_write32(g_m68k.a[1], _mv); M68K_TST32(_mv); }
    M68K_MULS(g_m68k.d[7], /* UNHANDLED_READ: (a16, d2.w * 2) */ 0);
    M68K_ADD8(g_m68k.d[0], g_m68k.d[7]);
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[1] -= 4; bus_write32(g_m68k.a[1], _mv); M68K_TST32(_mv); }
    M68K_ADD8(g_m68k.d[0], bus_read8(g_m68k.a[2]));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[1] -= 4; bus_write32(g_m68k.a[1], _mv); M68K_TST32(_mv); }
    M68K_MULS(g_m68k.d[7], 0x2300);
    /* WARNING: function did not end with RTS */
}

/* $0921F8-$0921FC  (1 instructions, 4 bytes) */
void jt_0921F8(void) {
    M68K_OR8(g_m68k.d[4], 0x3);
    /* WARNING: function did not end with RTS */
}

/* $09222C-$092234  (3 instructions, 8 bytes) */
void jt_09222C(void) {
    M68K_OR8(g_m68k.d[4], 0x3);
    M68K_ADD8(g_m68k.d[0], g_m68k.d[2]);
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[1] -= 4; bus_write32(g_m68k.a[1], _mv); M68K_TST32(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $092260-$092270  (5 instructions, 16 bytes) */
void jt_092260(void) {
    M68K_OR8(g_m68k.d[4], 0x3);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULS(g_m68k.d[7], _postinc16(2));
    g_m68k.d[2] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[2]);
    M68K_MULS(g_m68k.d[7], bus_read16(g_m68k.a[2] + 0x2400));
    /* WARNING: function did not end with RTS */
}

/* $092294-$0922C8  (19 instructions, 52 bytes) */
void jt_092294(void) {
    M68K_OR8(g_m68k.d[4], 0x3);
    M68K_AND16(g_m68k.d[5], bus_read16(g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.d[2] * 4));
    M68K_MULS(g_m68k.d[7], _postinc16(6));
    g_m68k.d[2] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[2]);
    M68K_MULS(g_m68k.d[7], bus_read16(g_m68k.a[6] + 0x2400));
    M68K_MULS(g_m68k.d[7], bus_read16(g_m68k.a[0]));
    g_m68k.d[2] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[2]);
    M68K_MULS(g_m68k.d[7], _postinc16(7));
    g_m68k.d[2] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[2]);
    M68K_MULS(g_m68k.d[7], bus_read16(g_m68k.a[7] + 0x2400));
    M68K_MULS(g_m68k.d[7], bus_read16(g_m68k.a[1]));
    g_m68k.d[2] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[2]);
    M68K_MULS(g_m68k.d[7], _predec16(0));
    g_m68k.d[2] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[2]);
    M68K_MULS(g_m68k.d[7], bus_read16(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[2] * 4));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULS(g_m68k.d[7], _predec16(1));
    g_m68k.d[2] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[2]);
    M68K_MULS(g_m68k.d[7], bus_read16(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[2] * 4));
    /* WARNING: function did not end with RTS */
}

/* $0922C8-$0922FC  (21 instructions, 52 bytes) */
void jt_0922C8(void) {
    M68K_OR8(g_m68k.d[4], 0x3);
    M68K_MULS(g_m68k.d[7], bus_read16(g_m68k.a[2]));
    g_m68k.d[2] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[2]);
    M68K_MULS(g_m68k.d[7], _predec16(2));
    g_m68k.d[2] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[2]);
    M68K_MULS(g_m68k.d[7], bus_read16(g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.d[2] * 4));
    M68K_MULS(g_m68k.d[7], bus_read16(g_m68k.a[3]));
    g_m68k.d[2] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[2]);
    M68K_MULS(g_m68k.d[7], _predec16(3));
    g_m68k.d[2] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[2]);
    M68K_MULS(g_m68k.d[7], bus_read16(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[2] * 4));
    M68K_MULS(g_m68k.d[7], bus_read16(g_m68k.a[4]));
    g_m68k.d[2] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[2]);
    M68K_MULS(g_m68k.d[7], _predec16(4));
    g_m68k.d[2] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[2]);
    M68K_MULS(g_m68k.d[7], bus_read16(g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.d[2] * 4));
    M68K_MULS(g_m68k.d[7], bus_read16(g_m68k.a[5]));
    g_m68k.d[2] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[2]);
    M68K_MULS(g_m68k.d[7], _predec16(5));
    g_m68k.d[2] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[2]);
    M68K_MULS(g_m68k.d[7], bus_read16(g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.d[2] * 4));
    /* WARNING: function did not end with RTS */
}

/* $0922FC-$092332  (19 instructions, 54 bytes) */
void jt_0922FC(void) {
    M68K_OR8(g_m68k.d[4], 0x3);
    M68K_MULS(g_m68k.d[7], bus_read16(g_m68k.a[6]));
    g_m68k.d[2] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[2]);
    M68K_MULS(g_m68k.d[7], _predec16(6));
    g_m68k.d[2] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[2]);
    M68K_MULS(g_m68k.d[7], bus_read16(g_m68k.a[6] + 0 + (int16_t)(uint16_t)g_m68k.d[2] * 4));
    M68K_MULS(g_m68k.d[7], bus_read16(g_m68k.a[7]));
    g_m68k.d[2] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[2]);
    M68K_MULS(g_m68k.d[7], _predec16(7));
    g_m68k.d[2] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[2]);
    M68K_MULS(g_m68k.d[7], bus_read16(g_m68k.a[7] + 0 + (int16_t)(uint16_t)g_m68k.d[2] * 4));
    M68K_MULS(g_m68k.d[7], _postinc16(0));
    g_m68k.d[2] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[2]);
    M68K_MULS(g_m68k.d[7], bus_read16(g_m68k.a[0] + 0x2400));
    M68K_MULS(g_m68k.d[7], bus_read16(0x002400));
    M68K_MULS(g_m68k.d[7], _postinc16(1));
    g_m68k.d[2] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[2]);
    M68K_MULS(g_m68k.d[7], bus_read16(g_m68k.a[1] + 0x2400));
    M68K_MULS(g_m68k.d[7], bus_read16(0x24000004));
    /* WARNING: function did not end with RTS */
}

/* $092330-$092350  (14 instructions, 32 bytes) */
void jt_092330(void) {
    M68K_OR8(g_m68k.d[4], 0x3);
    M68K_OR8(g_m68k.d[3], 0xfa);
    M68K_MULS(g_m68k.d[7], bus_read16(0x94736));
    g_m68k.d[2] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[2]);
    M68K_ADD8(g_m68k.d[0], g_m68k.d[6]);
    g_m68k.d[2] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[2]);
    M68K_ADD8(g_m68k.d[0], bus_read8(g_m68k.a[1]));
    g_m68k.d[2] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[2]);
    M68K_MULS(g_m68k.d[7], bus_read16(0x92342 + (int16_t)(uint16_t)g_m68k.d[2] * 4));
    M68K_ADD8(g_m68k.d[0], g_m68k.d[7]);
    g_m68k.d[2] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[2]);
    M68K_ADD8(g_m68k.d[0], bus_read8(g_m68k.a[2]));
    g_m68k.d[2] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[2]);
    M68K_MULS(g_m68k.d[7], 0x2400);
    /* WARNING: function did not end with RTS */
}

/* $092364-$092368  (1 instructions, 4 bytes) */
void jt_092364(void) {
    M68K_OR8(g_m68k.d[4], 0x3);
    /* WARNING: function did not end with RTS */
}

/* $092398-$0923A0  (3 instructions, 8 bytes) */
void jt_092398(void) {
    M68K_OR8(g_m68k.d[4], 0x3);
    M68K_ADD8(g_m68k.d[0], g_m68k.d[2]);
    g_m68k.d[2] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[2]);
    /* WARNING: function did not end with RTS */
}

/* $0923CC-$0923D0  (1 instructions, 4 bytes) */
void jt_0923CC(void) {
    M68K_OR8(g_m68k.d[4], 0x2);
    /* WARNING: function did not end with RTS */
}

/* $0923F0-$0923F4  (1 instructions, 4 bytes) */
void jt_0923F0(void) {
    M68K_OR8(g_m68k.d[4], 0x2);
    /* WARNING: function did not end with RTS */
}

/* $092414-$092438  (11 instructions, 36 bytes) */
void jt_092414(void) {
    M68K_OR8(g_m68k.d[4], 0x2);
    M68K_ADDX16(g_m68k.d[0], g_m68k.d[1]);
    g_m68k.d[4] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[4]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_ADDX16(g_m68k.d[0], g_m68k.d[2]);
    g_m68k.d[4] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[4]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $092438-$09245C  (13 instructions, 36 bytes) */
void jt_092438(void) {
    M68K_OR8(g_m68k.d[4], 0x2);
    M68K_ADDX16(g_m68k.d[0], g_m68k.d[3]);
    g_m68k.d[4] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[4]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_ADDX16(g_m68k.d[0], g_m68k.d[4]);
    g_m68k.d[4] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[4]);
    { uint32_t _ea = g_m68k.a[0]; uint16_t _tmp = bus_read16(_ea); M68K_ADDX16(_tmp, _predec16(0)); bus_write16(_ea, _tmp); }
    g_m68k.d[4] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[4]);
    M68K_ADDX16(g_m68k.d[0], g_m68k.d[5]);
    g_m68k.d[4] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[4]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $09245C-$092480  (12 instructions, 36 bytes) */
void jt_09245C(void) {
    M68K_OR8(g_m68k.d[4], 0x2);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[0]; uint16_t _tmp = bus_read16(_ea); M68K_ADDX16(_tmp, _predec16(1)); bus_write16(_ea, _tmp); }
    g_m68k.d[4] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[4]);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[0]; uint16_t _tmp = bus_read16(_ea); M68K_ADDX16(_tmp, _predec16(2)); bus_write16(_ea, _tmp); }
    g_m68k.d[4] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[4]);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[0]; uint16_t _tmp = bus_read16(_ea); M68K_ADDX16(_tmp, _predec16(3)); bus_write16(_ea, _tmp); }
    g_m68k.d[4] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[4]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $092480-$0924A4  (11 instructions, 36 bytes) */
void jt_092480(void) {
    M68K_OR8(g_m68k.d[4], 0x2);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[0]; uint16_t _tmp = bus_read16(_ea); M68K_ADDX16(_tmp, _predec16(4)); bus_write16(_ea, _tmp); }
    g_m68k.d[4] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[4]);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[0]; uint16_t _tmp = bus_read16(_ea); M68K_ADDX16(_tmp, _predec16(5)); bus_write16(_ea, _tmp); }
    g_m68k.d[4] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[4]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0924A4-$0924C8  (11 instructions, 36 bytes) */
void jt_0924A4(void) {
    M68K_OR8(g_m68k.d[4], 0x2);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[0]; uint16_t _tmp = bus_read16(_ea); M68K_ADDX16(_tmp, _predec16(6)); bus_write16(_ea, _tmp); }
    g_m68k.d[4] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[4]);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[0]; uint16_t _tmp = bus_read16(_ea); M68K_ADDX16(_tmp, _predec16(7)); bus_write16(_ea, _tmp); }
    g_m68k.d[4] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[4]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0924C8-$0924EC  (15 instructions, 36 bytes) */
void jt_0924C8(void) {
    M68K_OR8(g_m68k.d[2], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    g_m68k.a[0] += (int16_t)(uint16_t)(g_m68k.d[6]);
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[2] -= 4; bus_write32(g_m68k.a[2], _mv); M68K_TST32(_mv); }
    g_m68k.a[0] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[1]));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[2] -= 4; bus_write32(g_m68k.a[2], _mv); M68K_TST32(_mv); }
    g_m68k.a[0] += (int16_t)(uint16_t)(_postinc16(7));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[2] -= 4; bus_write32(g_m68k.a[2], _mv); M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    g_m68k.a[0] += (int16_t)(uint16_t)(g_m68k.d[7]);
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[2] -= 4; bus_write32(g_m68k.a[2], _mv); M68K_TST32(_mv); }
    g_m68k.a[0] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[2]));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[2] -= 4; bus_write32(g_m68k.a[2], _mv); M68K_TST32(_mv); }
    g_m68k.a[0] += (int16_t)(uint16_t)(_predec16(0));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[2] -= 4; bus_write32(g_m68k.a[2], _mv); M68K_TST32(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0924EC-$092510  (17 instructions, 36 bytes) */
void jt_0924EC(void) {
    M68K_OR8(g_m68k.d[2], 0x4);
    g_m68k.a[0] += (int16_t)(uint16_t)(g_m68k.d[1]);
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[2] -= 4; bus_write32(g_m68k.a[2], _mv); M68K_TST32(_mv); }
    g_m68k.a[0] += (int16_t)(uint16_t)(g_m68k.a[0]);
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[2] -= 4; bus_write32(g_m68k.a[2], _mv); M68K_TST32(_mv); }
    g_m68k.a[0] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[3]));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[2] -= 4; bus_write32(g_m68k.a[2], _mv); M68K_TST32(_mv); }
    g_m68k.a[0] += (int16_t)(uint16_t)(_predec16(1));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[2] -= 4; bus_write32(g_m68k.a[2], _mv); M68K_TST32(_mv); }
    g_m68k.a[0] += (int16_t)(uint16_t)(g_m68k.d[2]);
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[2] -= 4; bus_write32(g_m68k.a[2], _mv); M68K_TST32(_mv); }
    g_m68k.a[0] += (int16_t)(uint16_t)(g_m68k.a[1]);
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[2] -= 4; bus_write32(g_m68k.a[2], _mv); M68K_TST32(_mv); }
    g_m68k.a[0] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[4]));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[2] -= 4; bus_write32(g_m68k.a[2], _mv); M68K_TST32(_mv); }
    g_m68k.a[0] += (int16_t)(uint16_t)(_predec16(2));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[2] -= 4; bus_write32(g_m68k.a[2], _mv); M68K_TST32(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $092510-$092534  (17 instructions, 36 bytes) */
void jt_092510(void) {
    M68K_OR8(g_m68k.d[2], 0x4);
    g_m68k.a[0] += (int16_t)(uint16_t)(g_m68k.d[3]);
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[2] -= 4; bus_write32(g_m68k.a[2], _mv); M68K_TST32(_mv); }
    g_m68k.a[0] += (int16_t)(uint16_t)(g_m68k.a[2]);
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[2] -= 4; bus_write32(g_m68k.a[2], _mv); M68K_TST32(_mv); }
    g_m68k.a[0] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[5]));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[2] -= 4; bus_write32(g_m68k.a[2], _mv); M68K_TST32(_mv); }
    g_m68k.a[0] += (int16_t)(uint16_t)(_predec16(3));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[2] -= 4; bus_write32(g_m68k.a[2], _mv); M68K_TST32(_mv); }
    g_m68k.a[0] += (int16_t)(uint16_t)(g_m68k.d[4]);
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[2] -= 4; bus_write32(g_m68k.a[2], _mv); M68K_TST32(_mv); }
    g_m68k.a[0] += (int16_t)(uint16_t)(g_m68k.a[3]);
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[2] -= 4; bus_write32(g_m68k.a[2], _mv); M68K_TST32(_mv); }
    g_m68k.a[0] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[6]));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[2] -= 4; bus_write32(g_m68k.a[2], _mv); M68K_TST32(_mv); }
    g_m68k.a[0] += (int16_t)(uint16_t)(_predec16(4));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[2] -= 4; bus_write32(g_m68k.a[2], _mv); M68K_TST32(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $092534-$092558  (16 instructions, 36 bytes) */
void jt_092534(void) {
    M68K_OR8(g_m68k.d[2], 0x4);
    g_m68k.a[0] += (int16_t)(uint16_t)(g_m68k.d[5]);
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[2] -= 4; bus_write32(g_m68k.a[2], _mv); M68K_TST32(_mv); }
    g_m68k.a[0] += (int16_t)(uint16_t)(g_m68k.a[4]);
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[2] -= 4; bus_write32(g_m68k.a[2], _mv); M68K_TST32(_mv); }
    g_m68k.a[0] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[7]));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[2] -= 4; bus_write32(g_m68k.a[2], _mv); M68K_TST32(_mv); }
    g_m68k.a[0] += (int16_t)(uint16_t)(_predec16(5));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[2] -= 4; bus_write32(g_m68k.a[2], _mv); M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    g_m68k.a[0] += (int16_t)(uint16_t)(g_m68k.a[5]);
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[2] -= 4; bus_write32(g_m68k.a[2], _mv); M68K_TST32(_mv); }
    g_m68k.a[0] += (int16_t)(uint16_t)(_postinc16(0));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[2] -= 4; bus_write32(g_m68k.a[2], _mv); M68K_TST32(_mv); }
    g_m68k.a[0] += (int16_t)(uint16_t)(_predec16(6));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[2] -= 4; bus_write32(g_m68k.a[2], _mv); M68K_TST32(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $092558-$09257C  (14 instructions, 36 bytes) */
void jt_092558(void) {
    M68K_OR8(g_m68k.d[2], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    g_m68k.a[0] += (int16_t)(uint16_t)(g_m68k.a[6]);
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[2] -= 4; bus_write32(g_m68k.a[2], _mv); M68K_TST32(_mv); }
    g_m68k.a[0] += (int16_t)(uint16_t)(_postinc16(1));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[2] -= 4; bus_write32(g_m68k.a[2], _mv); M68K_TST32(_mv); }
    g_m68k.a[0] += (int16_t)(uint16_t)(_predec16(7));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[2] -= 4; bus_write32(g_m68k.a[2], _mv); M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    g_m68k.a[0] += (int16_t)(uint16_t)(g_m68k.a[7]);
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[2] -= 4; bus_write32(g_m68k.a[2], _mv); M68K_TST32(_mv); }
    g_m68k.a[0] += (int16_t)(uint16_t)(_postinc16(2));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[2] -= 4; bus_write32(g_m68k.a[2], _mv); M68K_TST32(_mv); }
    g_m68k.a[0] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[0] + 0x2500));
    /* WARNING: function did not end with RTS */
}

/* $09257C-$0925A0  (12 instructions, 36 bytes) */
void jt_09257C(void) {
    M68K_OR8(g_m68k.d[2], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    g_m68k.a[0] += (int16_t)(uint16_t)(_postinc16(3));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[2] -= 4; bus_write32(g_m68k.a[2], _mv); M68K_TST32(_mv); }
    g_m68k.a[0] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[1] + 0x2500));
    M68K_OR8(g_m68k.d[0], 0x0);
    g_m68k.a[0] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[0]));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[2] -= 4; bus_write32(g_m68k.a[2], _mv); M68K_TST32(_mv); }
    g_m68k.a[0] += (int16_t)(uint16_t)(_postinc16(4));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[2] -= 4; bus_write32(g_m68k.a[2], _mv); M68K_TST32(_mv); }
    g_m68k.a[0] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[2] + 0x2500));
    /* WARNING: function did not end with RTS */
}

/* $0925A0-$0925C4  (11 instructions, 36 bytes) */
void jt_0925A0(void) {
    M68K_OR8(g_m68k.d[2], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    g_m68k.a[0] += (int16_t)(uint16_t)(_postinc16(5));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[2] -= 4; bus_write32(g_m68k.a[2], _mv); M68K_TST32(_mv); }
    g_m68k.a[0] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[3] + 0x2500));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    g_m68k.a[0] += (int16_t)(uint16_t)(_postinc16(6));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[2] -= 4; bus_write32(g_m68k.a[2], _mv); M68K_TST32(_mv); }
    g_m68k.a[0] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[4] + 0x2500));
    /* WARNING: function did not end with RTS */
}

/* $0925C4-$0925D8  (7 instructions, 20 bytes) */
void jt_0925C4(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_ADD8(g_m68k.d[0], _postinc8(4));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[1] -= 4; bus_write32(g_m68k.a[1], _mv); M68K_TST32(_mv); }
    M68K_ADD8(g_m68k.d[0], bus_read8(g_m68k.a[2] + 0x2300));
    M68K_ADD8(g_m68k.d[0], _postinc8(5));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[1] -= 4; bus_write32(g_m68k.a[1], _mv); M68K_TST32(_mv); }
    M68K_ADD8(g_m68k.d[0], bus_read8(g_m68k.a[3] + 0x2300));
    /* WARNING: function did not end with RTS */
}

/* $0925D8-$0925EC  (7 instructions, 20 bytes) */
void jt_0925D8(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_ADD8(g_m68k.d[0], _postinc8(6));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[1] -= 4; bus_write32(g_m68k.a[1], _mv); M68K_TST32(_mv); }
    M68K_ADD8(g_m68k.d[0], bus_read8(g_m68k.a[4] + 0x2300));
    M68K_ADD8(g_m68k.d[0], _postinc8(7));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[1] -= 4; bus_write32(g_m68k.a[1], _mv); M68K_TST32(_mv); }
    M68K_ADD8(g_m68k.d[0], bus_read8(g_m68k.a[5] + 0x2300));
    /* WARNING: function did not end with RTS */
}

/* $0925EC-$092600  (7 instructions, 20 bytes) */
void jt_0925EC(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_ADD8(g_m68k.d[0], _predec8(0));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[1] -= 4; bus_write32(g_m68k.a[1], _mv); M68K_TST32(_mv); }
    M68K_ADD8(g_m68k.d[0], bus_read8(g_m68k.a[6] + 0x2300));
    M68K_ADD8(g_m68k.d[0], _predec8(1));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[1] -= 4; bus_write32(g_m68k.a[1], _mv); M68K_TST32(_mv); }
    M68K_ADD8(g_m68k.d[0], bus_read8(g_m68k.a[7] + 0x2300));
    /* WARNING: function did not end with RTS */
}

/* $092600-$092614  (7 instructions, 20 bytes) */
void jt_092600(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_ADD8(g_m68k.d[0], _predec8(2));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[1] -= 4; bus_write32(g_m68k.a[1], _mv); M68K_TST32(_mv); }
    M68K_ADD8(g_m68k.d[0], bus_read8(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[2] * 2));
    M68K_ADD8(g_m68k.d[0], _predec8(3));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[1] -= 4; bus_write32(g_m68k.a[1], _mv); M68K_TST32(_mv); }
    M68K_ADD8(g_m68k.d[0], bus_read8(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[2] * 2));
    /* WARNING: function did not end with RTS */
}

/* $092614-$092628  (7 instructions, 20 bytes) */
void jt_092614(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_ADD8(g_m68k.d[0], _predec8(4));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[1] -= 4; bus_write32(g_m68k.a[1], _mv); M68K_TST32(_mv); }
    M68K_ADD8(g_m68k.d[0], bus_read8(g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.d[2] * 2));
    M68K_ADD8(g_m68k.d[0], _predec8(5));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[1] -= 4; bus_write32(g_m68k.a[1], _mv); M68K_TST32(_mv); }
    M68K_ADD8(g_m68k.d[0], bus_read8(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[2] * 2));
    /* WARNING: function did not end with RTS */
}

/* $092628-$09263C  (7 instructions, 20 bytes) */
void jt_092628(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_ADD8(g_m68k.d[0], _predec8(6));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[1] -= 4; bus_write32(g_m68k.a[1], _mv); M68K_TST32(_mv); }
    M68K_ADD8(g_m68k.d[0], bus_read8(g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.d[2] * 2));
    M68K_ADD8(g_m68k.d[0], _predec8(7));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[1] -= 4; bus_write32(g_m68k.a[1], _mv); M68K_TST32(_mv); }
    M68K_ADD8(g_m68k.d[0], bus_read8(g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.d[2] * 2));
    /* WARNING: function did not end with RTS */
}

/* $09263C-$092650  (5 instructions, 20 bytes) */
void jt_09263C(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_ADD8(g_m68k.d[0], bus_read8(g_m68k.a[0] + 0x2300));
    M68K_ADD8(g_m68k.d[0], bus_read8(g_m68k.a[6] + 0 + (int16_t)(uint16_t)g_m68k.d[2] * 2));
    M68K_ADD8(g_m68k.d[0], bus_read8(g_m68k.a[1] + 0x2300));
    M68K_ADD8(g_m68k.d[0], bus_read8(g_m68k.a[7] + 0 + (int16_t)(uint16_t)g_m68k.d[2] * 2));
    /* WARNING: function did not end with RTS */
}

/* $092650-$092664  (7 instructions, 20 bytes) */
void jt_092650(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_ADD8(g_m68k.d[0], _postinc8(4));
    g_m68k.d[2] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[2]);
    M68K_ADD8(g_m68k.d[0], bus_read8(g_m68k.a[2] + 0x2400));
    M68K_ADD8(g_m68k.d[0], _postinc8(5));
    g_m68k.d[2] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[2]);
    M68K_ADD8(g_m68k.d[0], bus_read8(g_m68k.a[3] + 0x2400));
    /* WARNING: function did not end with RTS */
}
