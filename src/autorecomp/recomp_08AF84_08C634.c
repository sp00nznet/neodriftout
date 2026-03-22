/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $08AF84 - $08C634 */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

/* $08AF84-$08AFE8  (27 instructions, 100 bytes) */
void jt_08AF84(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND32(g_m68k.d[3], bus_read32(g_m68k.a[3]));
    { uint8_t _mv = (uint8_t)(g_m68k.d[3]); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    M68K_AND16(g_m68k.d[5], bus_read16(g_m68k.a[4] + 0x1900));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND16(g_m68k.d[5], bus_read16(g_m68k.a[1] + 0x1900));
    M68K_AND16(g_m68k.d[5], bus_read16(g_m68k.a[5] + 0x1900));
    M68K_AND16(g_m68k.d[5], bus_read16(g_m68k.a[1] + 0 + (int32_t)g_m68k.d[1]));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND32(g_m68k.d[3], bus_read32(g_m68k.a[3]));
    { uint8_t _mv = (uint8_t)(g_m68k.d[2]); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = (g_m68k.a[7] + 0x1902); uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = (g_m68k.a[3] + 0x1900); uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[0] + 0 + (int32_t)g_m68k.d[1]); uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = (g_m68k.a[4] + 0x1900); uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[1] + 0 + (int32_t)g_m68k.d[1]); uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $08AFE8-$08B020  (15 instructions, 56 bytes) */
void jt_08AFE8(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND16(g_m68k.d[3], g_m68k.d[4]);
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND16(g_m68k.d[5], bus_read16(g_m68k.a[2] + 0 + (int32_t)g_m68k.d[1]));
    M68K_AND16(g_m68k.d[5], bus_read16(g_m68k.a[5] + 0 + (int32_t)g_m68k.d[1]));
    M68K_AND16(g_m68k.d[5], bus_read16(0x001900));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $08B04C-$08B068  (7 instructions, 28 bytes) */
void jt_08B04C(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND16(g_m68k.d[5], bus_read16(0x8c966));
    /* WARNING: function did not end with RTS */
}

/* $08B0B0-$08B0BC  (3 instructions, 12 bytes) */
void jt_08B0B0(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $08B114-$08B130  (11 instructions, 28 bytes) */
void jt_08B114(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND16(g_m68k.d[2], _postinc16(1));
    { uint8_t _mv = (uint8_t)(g_m68k.d[3]); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    M68K_AND32(g_m68k.d[2], _predec32(2));
    { uint8_t _mv = (uint8_t)(g_m68k.d[1]); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND32(g_m68k.d[5], g_m68k.d[3]);
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    M68K_AND32(g_m68k.d[5], g_m68k.d[7]);
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $08B178-$08B18C  (5 instructions, 20 bytes) */
void jt_08B178(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $08B1DC-$08B240  (31 instructions, 100 bytes) */
void jt_08B1DC(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND16(g_m68k.d[5], /* UNHANDLED_READ: (a16, d1.l) */ 0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND16(g_m68k.d[5], bus_read16(0x1900CA7C));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    { uint32_t _t = g_m68k.d[2]; g_m68k.d[2] = g_m68k.d[5]; g_m68k.d[5] = _t; }
    { uint8_t _mv = (uint8_t)(g_m68k.d[1]); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    M68K_EOR16(g_m68k.d[0], g_m68k.d[6]);
    { uint8_t _mv = (uint8_t)(g_m68k.d[3]); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[0]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[4]); bus_write16(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = g_m68k.a[2]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[4]); bus_write16(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _t = g_m68k.a[4]; g_m68k.a[4] = g_m68k.a[4]; g_m68k.a[4] = _t; }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = g_m68k.a[1]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[4]); bus_write16(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $08B240-$08B264  (10 instructions, 36 bytes) */
void jt_08B240(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND32(g_m68k.d[5], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $08B2A4-$08B2BC  (7 instructions, 24 bytes) */
void jt_08B2A4(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND32(g_m68k.d[5], g_m68k.d[4]);
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $08B308-$08B31C  (5 instructions, 20 bytes) */
void jt_08B308(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $08B36C-$08B398  (13 instructions, 44 bytes) */
void jt_08B36C(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND8(g_m68k.d[5], bus_read8(g_m68k.a[4]));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    M68K_AND8(g_m68k.d[5], bus_read8(g_m68k.a[7]));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $08B3D0-$08B434  (36 instructions, 100 bytes) */
void jt_08B3D0(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND32(g_m68k.d[4], _postinc32(4));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    M68K_MULU(g_m68k.d[2], bus_read16(0x8ccf4));
    M68K_AND8(g_m68k.d[5], _postinc8(3));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    M68K_AND8(g_m68k.d[5], _postinc8(7));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    M68K_AND32(g_m68k.d[4], _postinc32(5));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    M68K_MULU(g_m68k.d[2], bus_read16(g_m68k.a[2]));
    { uint8_t _mv = (uint8_t)(g_m68k.d[3]); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    M68K_AND8(g_m68k.d[5], _postinc8(4));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    M68K_AND8(g_m68k.d[5], _predec8(0));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    M68K_AND32(g_m68k.d[4], _postinc32(6));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    M68K_AND32(g_m68k.d[4], _predec32(2));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    M68K_AND8(g_m68k.d[5], _postinc8(5));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    M68K_AND8(g_m68k.d[5], _predec8(1));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $08B434-$08B498  (27 instructions, 100 bytes) */
void jt_08B434(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND32(g_m68k.d[4], bus_read32(g_m68k.a[7] + 0x1900));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND8(g_m68k.d[5], _predec8(6));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    M68K_AND8(g_m68k.d[5], bus_read8(g_m68k.a[2] + 0x1900));
    M68K_AND32(g_m68k.d[4], bus_read32(g_m68k.a[0] + 0 + (int32_t)g_m68k.d[1]));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND8(g_m68k.d[5], _predec8(7));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    M68K_AND8(g_m68k.d[5], bus_read8(g_m68k.a[3] + 0x1900));
    M68K_AND32(g_m68k.d[4], bus_read32(g_m68k.a[1] + 0 + (int32_t)g_m68k.d[1]));
    M68K_AND32(g_m68k.d[4], bus_read32(g_m68k.a[6] + 0 + (int32_t)g_m68k.d[1]));
    M68K_AND8(g_m68k.d[5], bus_read8(g_m68k.a[0] + 0x1900));
    M68K_AND8(g_m68k.d[5], bus_read8(g_m68k.a[4] + 0x1900));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $08B498-$08B4B4  (7 instructions, 28 bytes) */
void jt_08B498(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $08B4FC-$08B518  (8 instructions, 28 bytes) */
void jt_08B4FC(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND32(g_m68k.d[4], g_m68k.d[5]);
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $08B560-$08B5C4  (37 instructions, 100 bytes) */
void jt_08B560(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND32(g_m68k.d[4], _postinc32(0));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    M68K_AND32(g_m68k.d[4], _postinc32(7));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND16(g_m68k.d[2], _postinc16(3));
    { uint8_t _mv = (uint8_t)(g_m68k.d[2]); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    M68K_AND32(g_m68k.d[4], _predec32(0));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    M68K_AND32(g_m68k.d[4], _predec32(3));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    M68K_AND8(g_m68k.d[5], _postinc8(6));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    M68K_AND8(g_m68k.d[5], _predec8(2));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND16(g_m68k.d[3], _postinc16(6));
    { uint8_t _mv = (uint8_t)(g_m68k.d[2]); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    M68K_AND8(g_m68k.d[5], _predec8(3));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    M68K_AND8(g_m68k.d[5], _predec8(5));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND8(g_m68k.d[5], _predec8(4));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    M68K_AND16(g_m68k.d[2], _postinc16(3));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $08B5C4-$08B628  (28 instructions, 100 bytes) */
void jt_08B5C4(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND32(g_m68k.d[4], bus_read32(g_m68k.a[3] + 0x1900));
    M68K_AND32(g_m68k.d[4], bus_read32(g_m68k.a[2] + 0 + (int32_t)g_m68k.d[1]));
    M68K_EOR16(g_m68k.d[0], g_m68k.d[6]);
    { uint8_t _mv = (uint8_t)(g_m68k.d[3]); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND32(g_m68k.d[4], bus_read32(g_m68k.a[4] + 0x1900));
    M68K_AND32(g_m68k.d[4], bus_read32(g_m68k.a[3] + 0 + (int32_t)g_m68k.d[1]));
    M68K_AND32(g_m68k.d[4], bus_read32(g_m68k.a[7] + 0 + (int32_t)g_m68k.d[1]));
    M68K_EOR16(g_m68k.d[0], g_m68k.d[6]);
    { uint8_t _mv = (uint8_t)(g_m68k.d[1]); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    M68K_AND8(g_m68k.d[5], bus_read8(g_m68k.a[5] + 0x1900));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND8(g_m68k.d[5], bus_read8(g_m68k.a[1] + 0x1900));
    M68K_AND8(g_m68k.d[5], bus_read8(g_m68k.a[6] + 0x1900));
    M68K_AND8(g_m68k.d[5], bus_read8(g_m68k.a[7] + 0x1900));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[4]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[2]); bus_write16(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    M68K_AND8(g_m68k.d[5], bus_read8(g_m68k.a[0] + 0 + (int32_t)g_m68k.d[1]));
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $08B628-$08B68C  (28 instructions, 100 bytes) */
void jt_08B628(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND32(g_m68k.d[4], /* UNHANDLED_READ: (a16, d1.l) */ 0);
    M68K_MULU(g_m68k.d[4], g_m68k.d[1]);
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    M68K_EOR16(g_m68k.d[0], g_m68k.d[6]);
    { uint8_t _mv = (uint8_t)(g_m68k.d[3]); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND32(g_m68k.d[4], 0x1900c8c2);
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    M68K_MULU(g_m68k.d[2], bus_read16(g_m68k.a[2]));
    { uint8_t _mv = (uint8_t)(g_m68k.d[3]); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND8(g_m68k.d[5], bus_read8(g_m68k.a[4] + 0 + (int32_t)g_m68k.d[1]));
    M68K_AND8(g_m68k.d[5], bus_read8(g_m68k.a[5] + 0 + (int32_t)g_m68k.d[1]));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND8(g_m68k.d[5], bus_read8(g_m68k.a[6] + 0 + (int32_t)g_m68k.d[1]));
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $08BA0C-$08BA70  (41 instructions, 100 bytes) */
void jt_08BA0C(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $08BA14: abcd.b -(a6), -(a5)  [CB 0E] */
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $08BA20: abcd.b d7, d5  [CB 07] */
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    /* TODO $08BA24: abcd.b -(a7), -(a5)  [CB 0F] */
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $08BA30: abcd.b -(a0), -(a5)  [CB 08] */
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $08BA40: abcd.b -(a1), -(a5)  [CB 09] */
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $08BA50: abcd.b -(a2), -(a5)  [CB 0A] */
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = g_m68k.a[5]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $08BA70-$08BACC  (26 instructions, 92 bytes) */
void jt_08BA70(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = (g_m68k.a[3] + 0x1b00); uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[5] + 0 + (int32_t)g_m68k.d[1] * 2); uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[5]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = (g_m68k.a[4] + 0x1b00); uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[6] + 0 + (int32_t)g_m68k.d[1] * 2); uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = (g_m68k.a[5] + 0x1b00); uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[7] + 0 + (int32_t)g_m68k.d[1] * 2); uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = (g_m68k.a[6] + 0x1b00); uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x001B00; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = (g_m68k.a[7] + 0x1b00); uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x1B000000; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = (g_m68k.a[0] + 0 + (int32_t)g_m68k.d[1] * 2); uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $08BAD4-$08BB38  (42 instructions, 100 bytes) */
void jt_08BAD4(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _t = g_m68k.d[5]; g_m68k.d[5] = g_m68k.d[7]; g_m68k.d[7] = _t; }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = g_m68k.a[1]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[1]); bus_write16(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[3]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _t = g_m68k.d[5]; g_m68k.d[5] = g_m68k.d[1]; g_m68k.d[1] = _t; }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    { uint32_t _t = g_m68k.a[5]; g_m68k.a[5] = g_m68k.a[0]; g_m68k.a[0] = _t; }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = g_m68k.a[1]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[5]); bus_write16(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _t = g_m68k.d[5]; g_m68k.d[5] = g_m68k.d[2]; g_m68k.d[2] = _t; }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    { uint32_t _t = g_m68k.a[5]; g_m68k.a[5] = g_m68k.a[1]; g_m68k.a[1] = _t; }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = g_m68k.a[2]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[5]); bus_write16(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _t = g_m68k.d[5]; g_m68k.d[5] = g_m68k.d[3]; g_m68k.d[3] = _t; }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    { uint32_t _t = g_m68k.a[5]; g_m68k.a[5] = g_m68k.a[2]; g_m68k.a[2] = _t; }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = g_m68k.a[3]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[5]); bus_write16(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _t = g_m68k.a[5]; g_m68k.a[5] = g_m68k.a[3]; g_m68k.a[3] = _t; }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = g_m68k.a[4]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[5]); bus_write16(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = g_m68k.a[1]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[5]); bus_write16(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _t = g_m68k.a[5]; g_m68k.a[5] = g_m68k.a[4]; g_m68k.a[4] = _t; }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = g_m68k.a[5]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[5]); bus_write16(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = g_m68k.a[1]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[1]); bus_write16(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[2]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $08BB38-$08BB9C  (33 instructions, 100 bytes) */
void jt_08BB38(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[3]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[5]); bus_write16(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[5]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[5]); bus_write16(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = g_m68k.a[4]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[5]); bus_write16(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = (g_m68k.a[4] + 0x1b00); uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[5]); bus_write16(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[6]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[5]); bus_write16(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = g_m68k.a[5]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[5]); bus_write16(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = (g_m68k.a[5] + 0x1b00); uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[5]); bus_write16(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[7]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[5]); bus_write16(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = g_m68k.a[6]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[5]); bus_write16(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = (g_m68k.a[6] + 0x1b00); uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[5]); bus_write16(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[7]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[5]); bus_write16(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = (g_m68k.a[7] + 0x1b00); uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[5]); bus_write16(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[4] + 0 + (int32_t)g_m68k.d[1] * 2); uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[5]); bus_write16(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = (g_m68k.a[0] + 0x1b00); uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[5]); bus_write16(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[0] + 0 + (int32_t)g_m68k.d[1] * 2); uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[5]); bus_write16(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $08BB9C-$08BC00  (39 instructions, 100 bytes) */
void jt_08BB9C(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $08BBB0: abcd.b -(a3), -(a5)  [CB 0B] */
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $08BBC0: abcd.b -(a4), -(a5)  [CB 0C] */
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = g_m68k.a[5]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $08BBD0: abcd.b -(a5), -(a5)  [CB 0D] */
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $08BC00-$08BC2C  (11 instructions, 44 bytes) */
void jt_08BC00(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = (g_m68k.a[0] + 0x1b00); uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[1] + 0 + (int32_t)g_m68k.d[1] * 2); uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = (g_m68k.a[1] + 0x1b00); uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[2] + 0 + (int32_t)g_m68k.d[1] * 2); uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $08BC64-$08BCC8  (38 instructions, 100 bytes) */
void jt_08BC64(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _t = g_m68k.d[5]; g_m68k.d[5] = g_m68k.d[4]; g_m68k.d[4] = _t; }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    { uint32_t _t = g_m68k.a[5]; g_m68k.a[5] = g_m68k.a[5]; g_m68k.a[5] = _t; }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _t = g_m68k.d[5]; g_m68k.d[5] = g_m68k.d[5]; g_m68k.d[5] = _t; }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    { uint32_t _t = g_m68k.a[5]; g_m68k.a[5] = g_m68k.a[6]; g_m68k.a[6] = _t; }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = g_m68k.a[6]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[5]); bus_write16(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = g_m68k.a[2]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[5]); bus_write16(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    { uint32_t _t = g_m68k.d[5]; g_m68k.d[5] = g_m68k.d[6]; g_m68k.d[6] = _t; }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    { uint32_t _t = g_m68k.a[5]; g_m68k.a[5] = g_m68k.a[7]; g_m68k.a[7] = _t; }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = g_m68k.a[7]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[5]); bus_write16(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = g_m68k.a[3]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[5]); bus_write16(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[0]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[5]); bus_write16(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = g_m68k.a[0]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[5]); bus_write16(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = g_m68k.a[4]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[5]); bus_write16(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $08BCC8-$08BD2C  (28 instructions, 100 bytes) */
void jt_08BCC8(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[0]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[5]); bus_write16(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    M68K_CMP32(g_m68k.a[6], bus_read32(0x1B030000));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[1]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[5]); bus_write16(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = (g_m68k.a[1] + 0x1b00); uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[5]); bus_write16(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[1] + 0 + (int32_t)g_m68k.d[1] * 2); uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[5]); bus_write16(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[5] + 0 + (int32_t)g_m68k.d[1] * 2); uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[5]); bus_write16(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[2]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[5]); bus_write16(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = (g_m68k.a[2] + 0x1b00); uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[5]); bus_write16(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[2] + 0 + (int32_t)g_m68k.d[1] * 2); uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[5]); bus_write16(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[6] + 0 + (int32_t)g_m68k.d[1] * 2); uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[5]); bus_write16(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = (g_m68k.a[3] + 0x1b00); uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[5]); bus_write16(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[3] + 0 + (int32_t)g_m68k.d[1] * 2); uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[5]); bus_write16(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[7] + 0 + (int32_t)g_m68k.d[1] * 2); uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[5]); bus_write16(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $08BD2C-$08BD54  (10 instructions, 40 bytes) */
void jt_08BD2C(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = 0x001B00; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[5]); bus_write16(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $08BD90-$08BDF4  (35 instructions, 100 bytes) */
void jt_08BD90(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[6]; uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = g_m68k.a[0]; uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = (g_m68k.a[0] + 0x1b00); uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[0]; uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = g_m68k.a[7]; uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = g_m68k.a[1]; uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = (g_m68k.a[1] + 0x1b00); uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[1]; uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = g_m68k.a[0]; uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = g_m68k.a[2]; uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = (g_m68k.a[2] + 0x1b00); uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[2]; uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = g_m68k.a[1]; uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $08BDF4-$08BE10  (7 instructions, 28 bytes) */
void jt_08BDF4(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = (g_m68k.a[2] + 0 + (int32_t)g_m68k.d[1] * 2); uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $08BE58-$08BE70  (7 instructions, 24 bytes) */
void jt_08BE58(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULS(g_m68k.d[5], _postinc16(1));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $08BEBC-$08BEC8  (3 instructions, 12 bytes) */
void jt_08BEBC(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $08BF20-$08BF84  (40 instructions, 100 bytes) */
void jt_08BF20(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[2]; uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = g_m68k.a[3]; uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[3]; uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = g_m68k.a[4]; uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = (g_m68k.a[3] + 0x1b00); uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = g_m68k.a[4]; uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = g_m68k.a[5]; uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[4]; uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = g_m68k.a[5]; uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = g_m68k.a[6]; uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[5]; uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = g_m68k.a[6]; uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = g_m68k.a[7]; uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[1]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[1]); bus_write16(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = g_m68k.a[7]; uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $08BF84-$08BF90  (3 instructions, 12 bytes) */
void jt_08BF84(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = (g_m68k.a[6] + 0 + (int32_t)g_m68k.d[1] * 2); uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $08BFE8-$08C00C  (13 instructions, 36 bytes) */
void jt_08BFE8(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULS(g_m68k.d[5], bus_read16(g_m68k.a[3]));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    M68K_MULS(g_m68k.d[5], _postinc16(5));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULS(g_m68k.d[5], bus_read16(g_m68k.a[4]));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    M68K_MULS(g_m68k.d[5], _postinc16(6));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $08C04C-$08C0A8  (26 instructions, 92 bytes) */
void jt_08C04C(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULS(g_m68k.d[5], bus_read16(g_m68k.a[5] + 0x1b00));
    M68K_MULS(g_m68k.d[5], bus_read16(0x001B00));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULS(g_m68k.d[5], _predec16(5));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    M68K_MULS(g_m68k.d[5], bus_read16(g_m68k.a[6] + 0x1b00));
    M68K_MULS(g_m68k.d[5], bus_read16(0x1B000000));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    M68K_MULS(g_m68k.d[5], _predec16(6));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    M68K_MULS(g_m68k.d[5], bus_read16(g_m68k.a[7] + 0x1b00));
    M68K_MULS(g_m68k.d[5], bus_read16(0x8db7a));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULS(g_m68k.d[5], _predec16(7));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    M68K_MULS(g_m68k.d[5], bus_read16(g_m68k.a[0] + 0 + (int32_t)g_m68k.d[1] * 2));
    M68K_MULS(g_m68k.d[5], /* UNHANDLED_READ: (a16, d1.l * 2) */ 0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULS(g_m68k.d[5], bus_read16(g_m68k.a[0] + 0x1b00));
    M68K_MULS(g_m68k.d[5], bus_read16(g_m68k.a[1] + 0 + (int32_t)g_m68k.d[1] * 2));
    M68K_MULS(g_m68k.d[5], 0x1b00);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULS(g_m68k.d[5], bus_read16(g_m68k.a[2] + 0 + (int32_t)g_m68k.d[1] * 2));
    /* WARNING: function did not end with RTS */
}

/* $08C0B0-$08C0B8  (2 instructions, 8 bytes) */
void jt_08C0B0(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_MULS(g_m68k.d[5], bus_read16(g_m68k.a[1] + 0x1b00));
    /* WARNING: function did not end with RTS */
}

/* $08C114-$08C178  (30 instructions, 100 bytes) */
void jt_08C114(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_AND8(g_m68k.d[6], _predec8(1));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    M68K_AND8(g_m68k.d[6], bus_read8(g_m68k.a[0] + 0x1b00));
    M68K_AND8(g_m68k.d[6], bus_read8(g_m68k.a[2] + 0 + (int32_t)g_m68k.d[1] * 2));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND8(g_m68k.d[6], _predec8(2));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    M68K_AND8(g_m68k.d[6], bus_read8(g_m68k.a[1] + 0x1b00));
    M68K_AND8(g_m68k.d[6], bus_read8(g_m68k.a[3] + 0 + (int32_t)g_m68k.d[1] * 2));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND8(g_m68k.d[6], _predec8(3));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    M68K_AND8(g_m68k.d[6], bus_read8(g_m68k.a[2] + 0x1b00));
    M68K_AND8(g_m68k.d[6], bus_read8(g_m68k.a[4] + 0 + (int32_t)g_m68k.d[1] * 2));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND8(g_m68k.d[6], _predec8(4));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    M68K_AND8(g_m68k.d[6], bus_read8(g_m68k.a[3] + 0x1b00));
    M68K_AND8(g_m68k.d[6], bus_read8(g_m68k.a[5] + 0 + (int32_t)g_m68k.d[1] * 2));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_EOR16(g_m68k.d[0], g_m68k.d[6]);
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    M68K_AND8(g_m68k.d[6], bus_read8(g_m68k.a[4] + 0x1b00));
    M68K_AND8(g_m68k.d[6], bus_read8(g_m68k.a[6] + 0 + (int32_t)g_m68k.d[1] * 2));
    M68K_AND8(g_m68k.d[6], /* UNHANDLED_READ: (a16, d1.l * 2) */ 0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND8(g_m68k.d[6], bus_read8(g_m68k.a[5] + 0x1b00));
    M68K_AND8(g_m68k.d[6], bus_read8(g_m68k.a[7] + 0 + (int32_t)g_m68k.d[1] * 2));
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $08C178-$08C18C  (7 instructions, 20 bytes) */
void jt_08C178(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_AND16(g_m68k.d[4], bus_read16(g_m68k.a[2]));
    { uint8_t _mv = (uint8_t)(g_m68k.d[1]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    M68K_AND16(g_m68k.d[6], g_m68k.d[5]);
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $08C1DC-$08C1F8  (7 instructions, 28 bytes) */
void jt_08C1DC(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_MULS(g_m68k.d[5], bus_read16(g_m68k.a[1] + 0x1b00));
    M68K_MULS(g_m68k.d[5], bus_read16(g_m68k.a[3] + 0 + (int32_t)g_m68k.d[1] * 2));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULS(g_m68k.d[5], bus_read16(g_m68k.a[2] + 0x1b00));
    M68K_MULS(g_m68k.d[5], bus_read16(g_m68k.a[4] + 0 + (int32_t)g_m68k.d[1] * 2));
    /* WARNING: function did not end with RTS */
}

/* $08C240-$08C254  (5 instructions, 20 bytes) */
void jt_08C240(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $08C2A4-$08C2F4  (23 instructions, 80 bytes) */
void jt_08C2A4(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND8(g_m68k.d[6], _predec8(5));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    M68K_AND8(g_m68k.d[6], bus_read8(g_m68k.a[6] + 0x1b00));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND8(g_m68k.d[6], _predec8(6));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    M68K_AND8(g_m68k.d[6], bus_read8(g_m68k.a[7] + 0x1b00));
    M68K_AND8(g_m68k.d[6], bus_read8(0x001B00));
    M68K_AND8(g_m68k.d[6], 0x0);
    M68K_AND8(g_m68k.d[6], _predec8(7));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    M68K_AND8(g_m68k.d[6], bus_read8(g_m68k.a[0] + 0 + (int32_t)g_m68k.d[1] * 2));
    M68K_AND8(g_m68k.d[6], bus_read8(0x1B00CC3D));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND8(g_m68k.d[6], bus_read8(g_m68k.a[1] + 0 + (int32_t)g_m68k.d[1] * 2));
    M68K_AND8(g_m68k.d[6], bus_read8(0x8ddf2));
    /* WARNING: function did not end with RTS */
}

/* $08C308-$08C320  (7 instructions, 24 bytes) */
void jt_08C308(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND16(g_m68k.d[6], g_m68k.d[2]);
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $08C36C-$08C3D0  (31 instructions, 100 bytes) */
void jt_08C36C(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND32(g_m68k.d[5], bus_read32(g_m68k.a[7]));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    M68K_AND32(g_m68k.d[5], _postinc32(5));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    M68K_AND32(g_m68k.d[5], _predec32(4));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    M68K_AND32(g_m68k.d[5], bus_read32(g_m68k.a[3] + 0x1b00));
    M68K_AND32(g_m68k.d[5], _postinc32(0));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    M68K_AND32(g_m68k.d[5], _postinc32(6));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    M68K_AND32(g_m68k.d[5], _predec32(5));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    M68K_AND32(g_m68k.d[5], bus_read32(g_m68k.a[4] + 0x1b00));
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

/* $08C3D0-$08C3EC  (7 instructions, 28 bytes) */
void jt_08C3D0(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $08C434-$08C458  (12 instructions, 36 bytes) */
void jt_08C434(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULU(g_m68k.d[5], bus_read16(g_m68k.a[3]));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    M68K_MULU(g_m68k.d[5], _postinc16(5));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    M68K_MULU(g_m68k.d[5], _predec16(6));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $08C498-$08C4C4  (12 instructions, 44 bytes) */
void jt_08C498(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULU(g_m68k.d[5], bus_read16(g_m68k.a[2] + 0 + (int32_t)g_m68k.d[1] * 2));
    M68K_MULU(g_m68k.d[5], 0x1b00);
    /* TODO $08C4B8: abcd.b d5, d5  [CB 05] */
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    M68K_MULU(g_m68k.d[5], bus_read16(g_m68k.a[2] + 0x1b00));
    M68K_MULU(g_m68k.d[5], bus_read16(g_m68k.a[3] + 0 + (int32_t)g_m68k.d[1] * 2));
    /* WARNING: function did not end with RTS */
}

/* $08C4FC-$08C560  (36 instructions, 100 bytes) */
void jt_08C4FC(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND32(g_m68k.d[5], _predec32(6));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND32(g_m68k.d[5], _postinc32(7));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    M68K_AND32(g_m68k.d[5], _predec32(7));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    M68K_AND32(g_m68k.d[5], bus_read32(g_m68k.a[5] + 0x1b00));
    M68K_AND32(g_m68k.d[5], _postinc32(1));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    M68K_AND32(g_m68k.d[5], _predec32(0));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    M68K_AND32(g_m68k.d[5], bus_read32(g_m68k.a[0] + 0x1b00));
    M68K_AND32(g_m68k.d[5], bus_read32(g_m68k.a[6] + 0x1b00));
    M68K_AND32(g_m68k.d[5], _postinc32(2));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    M68K_AND32(g_m68k.d[5], _predec32(1));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    M68K_AND32(g_m68k.d[5], bus_read32(g_m68k.a[1] + 0x1b00));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND32(g_m68k.d[5], _postinc32(3));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    M68K_AND32(g_m68k.d[5], _predec32(2));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    M68K_AND32(g_m68k.d[5], bus_read32(g_m68k.a[2] + 0x1b00));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND32(g_m68k.d[5], _postinc32(4));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    M68K_AND32(g_m68k.d[5], _predec32(3));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $08C560-$08C580  (9 instructions, 32 bytes) */
void jt_08C560(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND32(g_m68k.d[5], bus_read32(0x1B00CAC2));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND32(g_m68k.d[5], bus_read32(0x8e07a));
    M68K_MULU(g_m68k.d[5], g_m68k.d[3]);
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $08C5C4-$08C5E8  (13 instructions, 36 bytes) */
void jt_08C5C4(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULU(g_m68k.d[5], bus_read16(g_m68k.a[7]));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    M68K_MULU(g_m68k.d[5], _predec16(0));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULU(g_m68k.d[5], _postinc16(0));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    M68K_MULU(g_m68k.d[5], _predec16(1));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    M68K_MULU(g_m68k.d[5], bus_read16(g_m68k.a[1] + 0x1b00));
    /* WARNING: function did not end with RTS */
}

/* $08C628-$08C634  (3 instructions, 12 bytes) */
void jt_08C628(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULU(g_m68k.d[5], bus_read16(g_m68k.a[6] + 0 + (int32_t)g_m68k.d[1] * 2));
    /* WARNING: function did not end with RTS */
}
