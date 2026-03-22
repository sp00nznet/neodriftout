/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $08F0BC - $090120 */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

/* $08F0BC-$08F120  (26 instructions, 100 bytes) */
void jt_08F0BC(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULU(g_m68k.d[6], bus_read16(g_m68k.a[1] + 0x1e00));
    M68K_MULU(g_m68k.d[6], bus_read16(g_m68k.a[6] + 0x1e00));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULU(g_m68k.d[6], bus_read16(g_m68k.a[7] + 0x1e00));
    M68K_MULU(g_m68k.d[6], bus_read16(g_m68k.a[2] + 0 + (int32_t)g_m68k.d[1] * 8));
    M68K_MULU(g_m68k.d[6], _predec16(6));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    M68K_MULU(g_m68k.d[6], bus_read16(g_m68k.a[2] + 0x1e00));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULU(g_m68k.d[6], bus_read16(g_m68k.a[3] + 0x1e00));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $08F120-$08F184  (31 instructions, 100 bytes) */
void jt_08F120(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULU(g_m68k.d[6], bus_read16(0x90f3a));
    /* TODO $08F13C: abcd.b d0, d6  [CD 00] */
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    /* TODO $08F140: abcd.b d5, d6  [CD 05] */
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $08F14C: abcd.b d1, d6  [CD 01] */
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    /* TODO $08F150: abcd.b d6, d6  [CD 06] */
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    M68K_MULU(g_m68k.d[6], bus_read16(g_m68k.a[6] + 0 + (int32_t)g_m68k.d[1] * 8));
    M68K_MULU(g_m68k.d[6], bus_read16(0x8f15a + (int32_t)g_m68k.d[1] * 8));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND16(g_m68k.d[2], _postinc16(3));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[2])); M68K_TST8((uint8_t)g_m68k.d[7]);
    M68K_MULU(g_m68k.d[6], 0x1e00);
    /* TODO $08F16C: abcd.b d2, d6  [CD 02] */
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $08F184-$08F1E8  (35 instructions, 100 bytes) */
void jt_08F184(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $08F19C: abcd.b -(a7), -(a6)  [CD 0F] */
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    { uint32_t _ea = g_m68k.a[5]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    /* TODO $08F1B8: abcd.b -(a2), -(a6)  [CD 0A] */
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $08F1C8: abcd.b -(a3), -(a6)  [CD 0B] */
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $08F1E8-$08F24C  (30 instructions, 100 bytes) */
void jt_08F1E8(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND8(g_m68k.d[5], bus_read8(0x1E000000));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    { uint32_t _ea = (g_m68k.a[0] + 0x1e00); uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $08F24C-$08F284  (14 instructions, 56 bytes) */
void jt_08F24C(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = (g_m68k.a[4] + 0x1e00); uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[1] + 0 + (int32_t)g_m68k.d[1] * 8); uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $08F2B0-$08F2D8  (10 instructions, 40 bytes) */
void jt_08F2B0(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = (g_m68k.a[6] + 0 + (int32_t)g_m68k.d[1] * 8); uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x1E00CD3E; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $08F314-$08F378  (35 instructions, 100 bytes) */
void jt_08F314(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _t = g_m68k.d[6]; g_m68k.d[6] = g_m68k.d[5]; g_m68k.d[5] = _t; }
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    { uint32_t _t = g_m68k.a[6]; g_m68k.a[6] = g_m68k.a[2]; g_m68k.a[2] = _t; }
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    { uint32_t _ea = g_m68k.a[0]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _t = g_m68k.d[6]; g_m68k.d[6] = g_m68k.d[6]; g_m68k.d[6] = _t; }
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    { uint32_t _t = g_m68k.a[6]; g_m68k.a[6] = g_m68k.a[3]; g_m68k.a[3] = _t; }
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[1]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    M68K_EOR16(g_m68k.d[0], g_m68k.d[6]);
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[3])); M68K_TST8((uint8_t)g_m68k.d[7]);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _t = g_m68k.a[6]; g_m68k.a[6] = g_m68k.a[4]; g_m68k.a[4] = _t; }
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    { uint32_t _ea = g_m68k.a[2]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    M68K_MULU(g_m68k.d[2], bus_read16(g_m68k.a[2]));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[3])); M68K_TST8((uint8_t)g_m68k.d[7]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $08F378-$08F3DC  (33 instructions, 100 bytes) */
void jt_08F378(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[0]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    { uint32_t _ea = g_m68k.a[5]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    { uint32_t _ea = g_m68k.a[3]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[1]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    { uint32_t _ea = g_m68k.a[6]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[4]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    { uint32_t _ea = (g_m68k.a[1] + 0x1e00); uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[7]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    { uint32_t _ea = g_m68k.a[5]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    M68K_AND16(g_m68k.d[2], bus_read16(g_m68k.a[7] + 0x1e00));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $08F3DC-$08F440  (25 instructions, 100 bytes) */
void jt_08F3DC(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = (g_m68k.a[6] + 0x1e00); uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = (g_m68k.a[3] + 0x1e00); uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[7] + 0x1e00); uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = (g_m68k.a[3] + 0 + (int32_t)g_m68k.d[1] * 8); uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[5] + 0 + (int32_t)g_m68k.d[1] * 8); uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = (g_m68k.a[0] + 0 + (int32_t)g_m68k.d[1] * 8); uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[4] + 0 + (int32_t)g_m68k.d[1] * 8); uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $08F440-$08F458  (6 instructions, 24 bytes) */
void jt_08F440(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = (g_m68k.a[1] + 0x3 + (int32_t)g_m68k.d[1]); uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $08F4A4-$08F508  (36 instructions, 100 bytes) */
void jt_08F4A4(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _t = g_m68k.d[6]; g_m68k.d[6] = g_m68k.d[7]; g_m68k.d[7] = _t; }
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    { uint32_t _t = g_m68k.a[6]; g_m68k.a[6] = g_m68k.a[5]; g_m68k.a[5] = _t; }
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _t = g_m68k.a[6]; g_m68k.a[6] = g_m68k.a[0]; g_m68k.a[0] = _t; }
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    { uint32_t _t = g_m68k.a[6]; g_m68k.a[6] = g_m68k.a[6]; g_m68k.a[6] = _t; }
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    { uint32_t _ea = g_m68k.a[3]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    { uint32_t _ea = g_m68k.a[6]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    { uint32_t _t = g_m68k.a[6]; g_m68k.a[6] = g_m68k.a[1]; g_m68k.a[1] = _t; }
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    { uint32_t _t = g_m68k.a[6]; g_m68k.a[6] = g_m68k.a[7]; g_m68k.a[7] = _t; }
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    { uint32_t _ea = g_m68k.a[4]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    { uint32_t _ea = g_m68k.a[7]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[5]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $08F508-$08F56C  (34 instructions, 100 bytes) */
void jt_08F508(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[2]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    { uint32_t _ea = g_m68k.a[0]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[3]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    { uint32_t _ea = g_m68k.a[1]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    { uint32_t _ea = g_m68k.a[6]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    { uint32_t _ea = (g_m68k.a[2] + 0x1e00); uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[4]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    { uint32_t _ea = g_m68k.a[2]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    { uint32_t _ea = g_m68k.a[7]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    M68K_AND16(g_m68k.d[2], bus_read16(g_m68k.a[7] + 0x1e01));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = (g_m68k.a[0] + 0x1e00); uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    M68K_MULU(g_m68k.d[2], bus_read16(g_m68k.a[2]));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[3])); M68K_TST8((uint8_t)g_m68k.d[7]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $08F56C-$08F59C  (15 instructions, 48 bytes) */
void jt_08F56C(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND16(g_m68k.d[6], _postinc16(3));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    M68K_AND16(g_m68k.d[6], _postinc16(6));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    M68K_AND16(g_m68k.d[6], _predec16(3));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    /* WARNING: function did not end with RTS */
}

/* $08F5D0-$08F634  (27 instructions, 100 bytes) */
void jt_08F5D0(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND16(g_m68k.d[6], bus_read16(g_m68k.a[4] + 0 + (int32_t)g_m68k.d[1] * 8));
    M68K_MULU(g_m68k.d[2], bus_read16(g_m68k.a[2]));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[2])); M68K_TST8((uint8_t)g_m68k.d[7]);
    M68K_AND16(g_m68k.d[6], bus_read16(g_m68k.a[1] + 0x1e00));
    M68K_AND16(g_m68k.d[6], bus_read16(g_m68k.a[6] + 0x1e00));
    M68K_AND16(g_m68k.d[6], bus_read16(g_m68k.a[5] + 0 + (int32_t)g_m68k.d[1] * 8));
    M68K_MULS(g_m68k.d[2], bus_read16(g_m68k.a[4]));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[3])); M68K_TST8((uint8_t)g_m68k.d[7]);
    M68K_AND16(g_m68k.d[6], bus_read16(g_m68k.a[2] + 0x1e00));
    M68K_AND16(g_m68k.d[6], bus_read16(g_m68k.a[7] + 0x1e00));
    M68K_AND16(g_m68k.d[6], bus_read16(g_m68k.a[6] + 0 + (int32_t)g_m68k.d[1] * 8));
    M68K_AND16(g_m68k.d[6], bus_read16(0x91412));
    M68K_AND16(g_m68k.d[6], bus_read16(g_m68k.a[3] + 0x1e00));
    M68K_AND16(g_m68k.d[6], bus_read16(g_m68k.a[0] + 0 + (int32_t)g_m68k.d[1] * 8));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $08F634-$08F660  (13 instructions, 44 bytes) */
void jt_08F634(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND32(g_m68k.d[6], g_m68k.d[7]);
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND16(g_m68k.d[6], 0x1e00);
    M68K_AND32(g_m68k.d[6], g_m68k.d[1]);
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    /* WARNING: function did not end with RTS */
}

/* $08F698-$08F6BC  (10 instructions, 36 bytes) */
void jt_08F698(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND32(g_m68k.d[6], bus_read32(g_m68k.a[7]));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $08F6FC-$08F760  (31 instructions, 100 bytes) */
void jt_08F6FC(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND16(g_m68k.d[6], _predec16(0));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    M68K_AND16(g_m68k.d[6], _predec16(5));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND16(g_m68k.d[6], _predec16(6));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    M68K_AND16(g_m68k.d[6], bus_read16(g_m68k.a[0] + 0x1e00));
    M68K_AND16(g_m68k.d[6], _postinc16(5));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    M68K_AND16(g_m68k.d[6], _predec16(1));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND16(g_m68k.d[6], _predec16(2));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $08F760-$08F7C4  (26 instructions, 100 bytes) */
void jt_08F760(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND16(g_m68k.d[6], bus_read16(g_m68k.a[1] + 0 + (int32_t)g_m68k.d[1] * 8));
    M68K_AND16(g_m68k.d[6], bus_read16(g_m68k.a[7] + 0 + (int32_t)g_m68k.d[1] * 8));
    M68K_AND16(g_m68k.d[2], _postinc16(3));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[1])); M68K_TST8((uint8_t)g_m68k.d[7]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND16(g_m68k.d[6], bus_read16(0x001E00));
    M68K_AND16(g_m68k.d[6], bus_read16(0x8f792 + (int32_t)g_m68k.d[1] * 8));
    M68K_AND16(g_m68k.d[6], bus_read16(g_m68k.a[4] + 0x1e00));
    M68K_AND16(g_m68k.d[6], bus_read16(g_m68k.a[2] + 0 + (int32_t)g_m68k.d[1] * 8));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND16(g_m68k.d[6], bus_read16(g_m68k.a[5] + 0x1e00));
    M68K_AND16(g_m68k.d[6], bus_read16(g_m68k.a[3] + 0 + (int32_t)g_m68k.d[1] * 8));
    M68K_AND16(g_m68k.d[6], bus_read16(0x1E000000));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $08F7C4-$08F7E0  (8 instructions, 28 bytes) */
void jt_08F7C4(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND32(g_m68k.d[6], g_m68k.d[4]);
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    /* WARNING: function did not end with RTS */
}

/* $08F828-$08F88C  (32 instructions, 100 bytes) */
void jt_08F828(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND32(g_m68k.d[6], bus_read32(g_m68k.a[4]));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    M68K_AND32(g_m68k.d[6], _postinc32(2));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND32(g_m68k.d[6], _postinc32(3));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND32(g_m68k.d[6], bus_read32(g_m68k.a[5]));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND32(g_m68k.d[6], bus_read32(g_m68k.a[1]));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    M68K_AND32(g_m68k.d[6], bus_read32(g_m68k.a[6]));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    M68K_AND32(g_m68k.d[6], _postinc32(4));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $08F88C-$08F8F0  (31 instructions, 100 bytes) */
void jt_08F88C(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND32(g_m68k.d[6], _postinc32(7));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    M68K_AND32(g_m68k.d[6], _predec32(5));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND32(g_m68k.d[6], _predec32(0));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    M68K_AND32(g_m68k.d[6], _predec32(6));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _t = g_m68k.d[6]; g_m68k.d[6] = g_m68k.a[6]; g_m68k.a[6] = _t; }
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    { uint32_t _ea = g_m68k.a[0]; uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $08F8F0-$08F954  (28 instructions, 100 bytes) */
void jt_08F8F0(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND32(g_m68k.d[6], bus_read32(g_m68k.a[3] + 0x1e00));
    M68K_AND32(g_m68k.d[6], bus_read32(g_m68k.a[6] + 0x1e00));
    M68K_AND32(g_m68k.d[6], bus_read32(g_m68k.a[4] + 0 + (int32_t)g_m68k.d[1] * 8));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_EOR16(g_m68k.d[0], g_m68k.d[6]);
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    M68K_AND32(g_m68k.d[6], bus_read32(g_m68k.a[7] + 0x1e00));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[4]; uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    { uint32_t _ea = g_m68k.a[5]; uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $08F954-$08F97C  (11 instructions, 40 bytes) */
void jt_08F954(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND32(g_m68k.d[6], bus_read32(0x1E00CCBE));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    M68K_MULU(g_m68k.d[6], g_m68k.d[5]);
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND32(g_m68k.d[6], bus_read32(0x9177a));
    /* WARNING: function did not end with RTS */
}

/* $08F9B8-$08F9DC  (11 instructions, 36 bytes) */
void jt_08F9B8(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULU(g_m68k.d[6], bus_read16(g_m68k.a[3]));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    M68K_MULU(g_m68k.d[6], _postinc16(1));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $08FA1C-$08FA80  (32 instructions, 100 bytes) */
void jt_08FA1C(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND32(g_m68k.d[6], _predec32(2));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND32(g_m68k.d[6], _postinc32(6));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    M68K_AND32(g_m68k.d[6], _predec32(3));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[1]; uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    { uint32_t _ea = g_m68k.a[3]; uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _t = g_m68k.d[6]; g_m68k.d[6] = g_m68k.a[7]; g_m68k.a[7] = _t; }
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    { uint32_t _ea = g_m68k.a[2]; uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $08FA80-$08FAE4  (30 instructions, 100 bytes) */
void jt_08FA80(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND32(g_m68k.d[6], bus_read32(g_m68k.a[1] + 0 + (int32_t)g_m68k.d[1] * 8));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND32(g_m68k.d[6], bus_read32(g_m68k.a[4] + 0x1e00));
    M68K_AND32(g_m68k.d[6], bus_read32(g_m68k.a[2] + 0 + (int32_t)g_m68k.d[1] * 8));
    M68K_AND32(g_m68k.d[2], g_m68k.d[6]);
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[2])); M68K_TST8((uint8_t)g_m68k.d[7]);
    { uint32_t _ea = g_m68k.a[0]; uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    M68K_AND32(g_m68k.d[6], bus_read32(g_m68k.a[5] + 0x1e00));
    M68K_AND32(g_m68k.d[6], bus_read32(g_m68k.a[3] + 0 + (int32_t)g_m68k.d[1] * 8));
    { uint32_t _ea = g_m68k.a[6]; uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    { uint32_t _ea = g_m68k.a[1]; uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[7]; uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $08FAE4-$08FB18  (16 instructions, 52 bytes) */
void jt_08FAE4(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND32(g_m68k.d[6], bus_read32(0x8fafa + (int32_t)g_m68k.d[1] * 8));
    M68K_MULU(g_m68k.d[6], g_m68k.d[2]);
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND32(g_m68k.d[6], 0x1e00ccc3);
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    { uint32_t _ea = g_m68k.a[5]; uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    { uint32_t _ea = g_m68k.a[1]; uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    /* WARNING: function did not end with RTS */
}

/* $08FB48-$08FBAC  (33 instructions, 100 bytes) */
void jt_08FB48(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULU(g_m68k.d[6], bus_read16(g_m68k.a[0]));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    M68K_MULU(g_m68k.d[6], bus_read16(g_m68k.a[6]));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULU(g_m68k.d[6], bus_read16(g_m68k.a[1]));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    M68K_MULU(g_m68k.d[6], bus_read16(g_m68k.a[7]));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    { uint32_t _ea = g_m68k.a[6]; uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    { uint32_t _ea = (g_m68k.a[3] + 0x1e00); uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    M68K_MULU(g_m68k.d[6], bus_read16(g_m68k.a[2]));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    M68K_MULU(g_m68k.d[6], _postinc16(0));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    { uint32_t _ea = g_m68k.a[7]; uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    { uint32_t _ea = (g_m68k.a[4] + 0x1e00); uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = (g_m68k.a[0] + 0x1e00); uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[5] + 0x1e00); uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $08FBAC-$08FC10  (28 instructions, 100 bytes) */
void jt_08FBAC(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULU(g_m68k.d[6], _predec16(4));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    M68K_MULU(g_m68k.d[6], _predec16(7));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    { uint32_t _ea = (g_m68k.a[6] + 0x1e00); uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[3] + 0 + (int32_t)g_m68k.d[1] * 8); uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    M68K_MULU(g_m68k.d[6], _predec16(5));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    M68K_MULU(g_m68k.d[6], bus_read16(g_m68k.a[0] + 0x1e00));
    { uint32_t _ea = (g_m68k.a[7] + 0x1e00); uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[4] + 0 + (int32_t)g_m68k.d[1] * 8); uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = (g_m68k.a[0] + 0 + (int32_t)g_m68k.d[1] * 8); uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[5] + 0 + (int32_t)g_m68k.d[1] * 8); uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $08FC10-$08FC30  (8 instructions, 32 bytes) */
void jt_08FC10(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = 0x001E00; uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $08FC74-$08FCA4  (17 instructions, 48 bytes) */
void jt_08FC74(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULS(g_m68k.d[6], g_m68k.d[3]);
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    M68K_AND32(g_m68k.d[5], g_m68k.d[4]);
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[2])); M68K_TST8((uint8_t)g_m68k.d[7]);
    /* TODO $08FC98: abcd.b d7, d6  [CD 07] */
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    /* TODO $08FC9C: abcd.b -(a4), -(a6)  [CD 0C] */
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    M68K_MULS(g_m68k.d[6], g_m68k.d[4]);
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    /* WARNING: function did not end with RTS */
}

/* $08FCD8-$08FCF4  (7 instructions, 28 bytes) */
void jt_08FCD8(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $08FD3C-$08FDA0  (27 instructions, 100 bytes) */
void jt_08FD3C(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULU(g_m68k.d[2], _predec16(0));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[1])); M68K_TST8((uint8_t)g_m68k.d[7]);
    { uint32_t _ea = (g_m68k.a[1] + 0 + (int32_t)g_m68k.d[1] * 8); uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = (g_m68k.a[2] + 0 + (int32_t)g_m68k.d[1] * 8); uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[6] + 0 + (int32_t)g_m68k.d[1] * 8); uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    M68K_MULU(g_m68k.d[6], _predec16(6));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    M68K_MULU(g_m68k.d[6], bus_read16(g_m68k.a[2] + 0x1e00));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULU(g_m68k.d[6], bus_read16(g_m68k.a[3] + 0x1e00));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $08FDA0-$08FDBC  (7 instructions, 28 bytes) */
void jt_08FDA0(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = (g_m68k.a[7] + 0 + (int32_t)g_m68k.d[1] * 8); uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $08FE04-$08FE24  (10 instructions, 32 bytes) */
void jt_08FE04(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULS(g_m68k.d[6], g_m68k.d[2]);
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    M68K_MULS(g_m68k.d[6], g_m68k.d[6]);
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    /* WARNING: function did not end with RTS */
}

/* $08FE68-$08FE80  (6 instructions, 24 bytes) */
void jt_08FE68(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $08FECC-$08FF04  (16 instructions, 56 bytes) */
void jt_08FECC(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULS(g_m68k.d[6], bus_read16(g_m68k.a[1]));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    M68K_MULS(g_m68k.d[6], bus_read16(g_m68k.a[4]));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $08FF30-$08FF6C  (19 instructions, 60 bytes) */
void jt_08FF30(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULS(g_m68k.d[6], bus_read16(g_m68k.a[5]));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    M68K_MULS(g_m68k.d[6], _postinc16(1));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    M68K_MULS(g_m68k.d[6], _postinc16(5));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULS(g_m68k.d[6], _postinc16(2));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $08FF94-$08FFD8  (23 instructions, 68 bytes) */
void jt_08FF94(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULS(g_m68k.d[6], _postinc16(6));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    M68K_MULS(g_m68k.d[6], _predec16(3));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    M68K_MULS(g_m68k.d[6], bus_read16(g_m68k.a[0] + 0x1e00));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULS(g_m68k.d[6], _postinc16(7));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    M68K_MULS(g_m68k.d[6], _predec16(4));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[1]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    M68K_EOR16(g_m68k.d[0], g_m68k.d[6]);
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[3])); M68K_TST8((uint8_t)g_m68k.d[7]);
    /* WARNING: function did not end with RTS */
}

/* $08FFD8-$08FFE0  (3 instructions, 8 bytes) */
void jt_08FFD8(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _t = g_m68k.a[6]; g_m68k.a[6] = g_m68k.a[4]; g_m68k.a[4] = _t; }
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    /* WARNING: function did not end with RTS */
}

/* $08FFE0-$08FFF8  (8 instructions, 24 bytes) */
void jt_08FFE0(void) {
    { uint32_t _ea = g_m68k.a[2]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    M68K_MULU(g_m68k.d[2], bus_read16(g_m68k.a[2]));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[3])); M68K_TST8((uint8_t)g_m68k.d[7]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $08FFF8-$09000C  (5 instructions, 20 bytes) */
void jt_08FFF8(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $09000A-$090010  (2 instructions, 6 bytes) */
void jt_09000A(void) {
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    M68K_MULS(g_m68k.d[6], bus_read16(g_m68k.a[1] + 0x1e00));
    /* WARNING: function did not end with RTS */
}

/* $090010-$090014  (1 instructions, 4 bytes) */
void jt_090010(void) {
    M68K_MULS(g_m68k.d[6], bus_read16(g_m68k.a[6] + 0x1e00));
    /* WARNING: function did not end with RTS */
}

/* $090012-$09002C  (7 instructions, 26 bytes) */
void jt_090012(void) {
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    M68K_MULS(g_m68k.d[6], bus_read16(g_m68k.a[3] + 0 + (int32_t)g_m68k.d[1] * 8));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULS(g_m68k.d[6], bus_read16(g_m68k.a[2] + 0x1e00));
    M68K_MULS(g_m68k.d[6], bus_read16(g_m68k.a[7] + 0x1e00));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $09002A-$09005C  (16 instructions, 50 bytes) */
void jt_09002A(void) {
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[4]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    { uint32_t _ea = (g_m68k.a[1] + 0x1e00); uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[7]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    { uint32_t _ea = g_m68k.a[5]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    M68K_AND16(g_m68k.d[2], bus_read16(g_m68k.a[7] + 0x1e00));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $09005C-$0900B8  (26 instructions, 92 bytes) */
void jt_09005C(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULS(g_m68k.d[6], bus_read16(g_m68k.a[2]));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULS(g_m68k.d[6], bus_read16(g_m68k.a[0]));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    M68K_MULS(g_m68k.d[6], bus_read16(g_m68k.a[3]));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = (g_m68k.a[3] + 0 + (int32_t)g_m68k.d[1] * 8); uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[5] + 0 + (int32_t)g_m68k.d[1] * 8); uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = (g_m68k.a[0] + 0 + (int32_t)g_m68k.d[1] * 8); uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[4] + 0 + (int32_t)g_m68k.d[1] * 8); uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0900B6-$0900C0  (3 instructions, 10 bytes) */
void jt_0900B6(void) {
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0900C0-$090100  (24 instructions, 64 bytes) */
void jt_0900C0(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULS(g_m68k.d[6], bus_read16(g_m68k.a[6]));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    M68K_MULS(g_m68k.d[6], _postinc16(3));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULS(g_m68k.d[6], bus_read16(g_m68k.a[7]));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    M68K_MULS(g_m68k.d[6], _postinc16(4));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    { uint32_t _t = g_m68k.d[6]; g_m68k.d[6] = g_m68k.d[1]; g_m68k.d[1] = _t; }
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    M68K_EOR16(g_m68k.d[0], g_m68k.d[6]);
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[3])); M68K_TST8((uint8_t)g_m68k.d[7]);
    M68K_MULS(g_m68k.d[6], _postinc16(0));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    M68K_AND16(g_m68k.d[2], bus_read16(g_m68k.a[7] + 0x1e00));
    { uint32_t _t = g_m68k.d[6]; g_m68k.d[6] = g_m68k.d[2]; g_m68k.d[2] = _t; }
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    /* WARNING: function did not end with RTS */
}

/* $090100-$090120  (10 instructions, 32 bytes) */
void jt_090100(void) {
    { uint32_t _t = g_m68k.d[6]; g_m68k.d[6] = g_m68k.d[4]; g_m68k.d[4] = _t; }
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _t = g_m68k.d[6]; g_m68k.d[6] = g_m68k.d[3]; g_m68k.d[3] = _t; }
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}
