/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $08554C - $086B28 */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

/* $08554C-$085588  (18 instructions, 60 bytes) */
void jt_08554C(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND32(g_m68k.d[3], _predec32(1));
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND32(g_m68k.d[3], _postinc32(6));
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_AND32(g_m68k.d[3], _predec32(2));
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = (g_m68k.a[7] + 0 + (int16_t)(uint16_t)g_m68k.d[1] * 4); uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0855B0-$085614  (32 instructions, 100 bytes) */
void jt_0855B0(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND32(g_m68k.d[3], bus_read32(g_m68k.a[0] + 0x1400));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND32(g_m68k.d[3], _predec32(3));
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_AND32(g_m68k.d[3], _predec32(5));
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_AND32(g_m68k.d[3], bus_read32(g_m68k.a[1] + 0x1400));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _t = g_m68k.a[2]; g_m68k.a[2] = g_m68k.a[4]; g_m68k.a[4] = _t; }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_EOR16(g_m68k.d[0], g_m68k.d[6]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[3])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _t = g_m68k.d[2]; g_m68k.d[2] = g_m68k.d[7]; g_m68k.d[7] = _t; }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint32_t _t = g_m68k.a[2]; g_m68k.a[2] = g_m68k.a[5]; g_m68k.a[5] = _t; }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[2])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $085614-$085678  (31 instructions, 100 bytes) */
void jt_085614(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND32(g_m68k.d[3], bus_read32(g_m68k.a[6] + 0x1400));
    M68K_AND32(g_m68k.d[3], bus_read32(g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.d[1] * 4));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND32(g_m68k.d[3], bus_read32(g_m68k.a[2] + 0x1400));
    M68K_AND32(g_m68k.d[3], bus_read32(g_m68k.a[7] + 0x1400));
    M68K_AND32(g_m68k.d[3], bus_read32(g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.d[1] * 4));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND16(g_m68k.d[2], _postinc16(3));
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[2])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_AND32(g_m68k.d[3], bus_read32(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[1] * 4));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[1]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[2]); bus_write16(_ea, _tmp); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint32_t _ea = g_m68k.a[5]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[2]); bus_write16(_ea, _tmp); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[3]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[2]); bus_write16(_ea, _tmp); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint32_t _ea = g_m68k.a[2]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[2]); bus_write16(_ea, _tmp); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint32_t _ea = g_m68k.a[6]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[2]); bus_write16(_ea, _tmp); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $085678-$0856A0  (10 instructions, 40 bytes) */
void jt_085678(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND32(g_m68k.d[3], bus_read32(0x85682 + (int16_t)(uint16_t)g_m68k.d[1] * 4));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND32(g_m68k.d[3], bus_read32(g_m68k.a[6] + 0 + (int16_t)(uint16_t)g_m68k.d[1] * 4));
    M68K_AND32(g_m68k.d[3], 0x1400c6c1);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND32(g_m68k.d[3], bus_read32(g_m68k.a[7] + 0 + (int16_t)(uint16_t)g_m68k.d[1] * 4));
    /* WARNING: function did not end with RTS */
}

/* $0856DC-$085724  (23 instructions, 72 bytes) */
void jt_0856DC(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND32(g_m68k.d[3], _postinc32(7));
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND32(g_m68k.d[3], _postinc32(5));
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_AND32(g_m68k.d[3], _predec32(0));
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _t = g_m68k.d[2]; g_m68k.d[2] = g_m68k.d[0]; g_m68k.d[0] = _t; }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint32_t _t = g_m68k.d[2]; g_m68k.d[2] = g_m68k.d[2]; g_m68k.d[2] = _t; }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $085740-$0857A4  (33 instructions, 100 bytes) */
void jt_085740(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND32(g_m68k.d[3], _predec32(6));
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND32(g_m68k.d[3], _predec32(4));
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_AND32(g_m68k.d[3], _predec32(7));
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint32_t _t = g_m68k.a[2]; g_m68k.a[2] = g_m68k.a[6]; g_m68k.a[6] = _t; }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint32_t _ea = g_m68k.a[1]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[2]); bus_write16(_ea, _tmp); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _t = g_m68k.a[2]; g_m68k.a[2] = g_m68k.a[7]; g_m68k.a[7] = _t; }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint32_t _ea = g_m68k.a[2]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[2]); bus_write16(_ea, _tmp); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[0]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[2]); bus_write16(_ea, _tmp); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0857A4-$085808  (28 instructions, 100 bytes) */
void jt_0857A4(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND32(g_m68k.d[3], bus_read32(g_m68k.a[3] + 0x1400));
    M68K_AND32(g_m68k.d[3], bus_read32(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[1] * 4));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND32(g_m68k.d[3], bus_read32(g_m68k.a[4] + 0x1400));
    M68K_AND32(g_m68k.d[3], bus_read32(g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.d[1] * 4));
    { uint32_t _ea = g_m68k.a[3]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[2]); bus_write16(_ea, _tmp); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint32_t _ea = g_m68k.a[7]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[2]); bus_write16(_ea, _tmp); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_AND32(g_m68k.d[3], bus_read32(g_m68k.a[5] + 0x1400));
    M68K_AND32(g_m68k.d[3], bus_read32(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[1] * 4));
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = (g_m68k.a[0] + 0x1400); uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[2]); bus_write16(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[4]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[2]); bus_write16(_ea, _tmp); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $085808-$085820  (6 instructions, 24 bytes) */
void jt_085808(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND32(g_m68k.d[3], bus_read32(0x001400));
    /* WARNING: function did not end with RTS */
}

/* $08586C-$0858D0  (38 instructions, 100 bytes) */
void jt_08586C(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND16(g_m68k.d[2], _postinc16(1));
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[3])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_AND16(g_m68k.d[2], _postinc16(1));
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[1])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND8(g_m68k.d[3], _predec8(2));
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_AND8(g_m68k.d[3], _predec8(6));
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_AND16(g_m68k.d[2], bus_read16(g_m68k.a[1]));
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_AND16(g_m68k.d[2], bus_read16(g_m68k.a[7]));
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_AND8(g_m68k.d[3], _predec8(3));
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_AND8(g_m68k.d[3], _predec8(7));
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_AND16(g_m68k.d[2], bus_read16(g_m68k.a[2]));
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_AND16(g_m68k.d[2], _postinc16(0));
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_AND8(g_m68k.d[3], _predec8(4));
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND16(g_m68k.d[2], bus_read16(g_m68k.a[3]));
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_AND16(g_m68k.d[2], _postinc16(1));
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0858D0-$085934  (25 instructions, 100 bytes) */
void jt_0858D0(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND16(g_m68k.d[2], bus_read16(g_m68k.a[0] + 0x1400));
    M68K_AND16(g_m68k.d[2], bus_read16(g_m68k.a[6] + 0x1400));
    M68K_AND8(g_m68k.d[3], bus_read8(g_m68k.a[3] + 0x1400));
    M68K_AND8(g_m68k.d[3], bus_read8(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[1] * 4));
    M68K_AND16(g_m68k.d[2], bus_read16(g_m68k.a[1] + 0x1400));
    M68K_AND16(g_m68k.d[2], bus_read16(g_m68k.a[7] + 0x1400));
    M68K_AND8(g_m68k.d[3], bus_read8(g_m68k.a[4] + 0x1400));
    M68K_AND8(g_m68k.d[3], bus_read8(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[1] * 4));
    M68K_AND16(g_m68k.d[2], bus_read16(g_m68k.a[2] + 0x1400));
    M68K_AND16(g_m68k.d[2], bus_read16(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[1] * 4));
    M68K_AND8(g_m68k.d[3], bus_read8(g_m68k.a[5] + 0x1400));
    M68K_AND8(g_m68k.d[3], bus_read8(g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.d[1] * 4));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $085934-$085950  (7 instructions, 28 bytes) */
void jt_085934(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $085998-$0859D0  (19 instructions, 56 bytes) */
void jt_085998(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND32(g_m68k.d[2], bus_read32(g_m68k.a[0]));
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND16(g_m68k.d[3], g_m68k.d[4]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND32(g_m68k.d[2], bus_read32(g_m68k.a[1]));
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_AND32(g_m68k.d[2], bus_read32(g_m68k.a[7]));
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_AND16(g_m68k.d[3], g_m68k.d[5]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    /* WARNING: function did not end with RTS */
}

/* $0859FC-$085A14  (6 instructions, 24 bytes) */
void jt_0859FC(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $085A60-$085AC4  (28 instructions, 100 bytes) */
void jt_085A60(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND16(g_m68k.d[2], _predec16(4));
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_AND16(g_m68k.d[2], bus_read16(g_m68k.a[3] + 0x1400));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[1]; uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[2]); bus_write32(_ea, _tmp); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint32_t _ea = g_m68k.a[3]; uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[2]); bus_write32(_ea, _tmp); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_AND8(g_m68k.d[3], bus_read8(g_m68k.a[6] + 0x1400));
    M68K_AND8(g_m68k.d[3], bus_read8(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[1] * 4));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND8(g_m68k.d[3], bus_read8(g_m68k.a[7] + 0x1400));
    M68K_AND8(g_m68k.d[3], bus_read8(g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.d[1] * 4));
    M68K_AND8(g_m68k.d[3], bus_read8(g_m68k.a[6] + 0 + (int16_t)(uint16_t)g_m68k.d[1] * 4));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND8(g_m68k.d[3], bus_read8(g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.d[1] * 4));
    M68K_MULU(g_m68k.d[2], bus_read16(0x86ec1));
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $085AC4-$085AFC  (18 instructions, 56 bytes) */
void jt_085AC4(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND16(g_m68k.d[2], bus_read16(0x86ede));
    M68K_AND32(g_m68k.d[2], g_m68k.d[1]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_AND32(g_m68k.d[2], g_m68k.d[6]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND32(g_m68k.d[2], g_m68k.d[2]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_AND32(g_m68k.d[2], g_m68k.d[7]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_AND8(g_m68k.d[3], bus_read8(0x86efa));
    /* WARNING: function did not end with RTS */
}

/* $085B28-$085B40  (6 instructions, 24 bytes) */
void jt_085B28(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $085F0C-$085F28  (7 instructions, 28 bytes) */
void jt_085F0C(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = (g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.d[1] * 8); uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $085F70-$085FD4  (40 instructions, 100 bytes) */
void jt_085F70(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _t = g_m68k.a[3]; g_m68k.a[3] = g_m68k.a[6]; g_m68k.a[6] = _t; }
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    { uint32_t _ea = g_m68k.a[0]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[3]); bus_write16(_ea, _tmp); }
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _t = g_m68k.a[3]; g_m68k.a[3] = g_m68k.a[0]; g_m68k.a[0] = _t; }
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    { uint32_t _t = g_m68k.a[3]; g_m68k.a[3] = g_m68k.a[7]; g_m68k.a[7] = _t; }
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    { uint32_t _ea = g_m68k.a[1]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[3]); bus_write16(_ea, _tmp); }
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _t = g_m68k.a[3]; g_m68k.a[3] = g_m68k.a[1]; g_m68k.a[1] = _t; }
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    { uint32_t _ea = g_m68k.a[0]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[3]); bus_write16(_ea, _tmp); }
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    { uint32_t _ea = g_m68k.a[2]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[3]); bus_write16(_ea, _tmp); }
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _t = g_m68k.a[3]; g_m68k.a[3] = g_m68k.a[2]; g_m68k.a[2] = _t; }
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    { uint32_t _ea = g_m68k.a[1]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[3]); bus_write16(_ea, _tmp); }
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    { uint32_t _ea = g_m68k.a[3]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[3]); bus_write16(_ea, _tmp); }
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[2]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[3]); bus_write16(_ea, _tmp); }
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    { uint32_t _ea = g_m68k.a[4]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[3]); bus_write16(_ea, _tmp); }
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[3]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[3]); bus_write16(_ea, _tmp); }
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    { uint32_t _ea = g_m68k.a[5]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[3]); bus_write16(_ea, _tmp); }
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $085FD4-$086000  (13 instructions, 44 bytes) */
void jt_085FD4(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = (g_m68k.a[5] + 0x1600); uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[3]); bus_write16(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[6]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[3]); bus_write16(_ea, _tmp); }
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[7]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[3]); bus_write16(_ea, _tmp); }
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    { uint32_t _ea = (g_m68k.a[6] + 0x1600); uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[3]); bus_write16(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[7] + 0 + (int16_t)(uint16_t)g_m68k.d[1] * 8); uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[3]); bus_write16(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = (g_m68k.a[0] + 0x1600); uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[3]); bus_write16(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[7] + 0x1600); uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[3]); bus_write16(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $086000-$086020  (8 instructions, 32 bytes) */
void jt_086000(void) {
    { uint32_t _ea = 0x001600; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[3]); bus_write16(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = (g_m68k.a[1] + 0x1600); uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[3]); bus_write16(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[1] * 8); uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[3]); bus_write16(_ea, _tmp); }
    { uint32_t _ea = 0x16000000; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[3]); bus_write16(_ea, _tmp); }
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = (g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[1] * 8); uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[3]); bus_write16(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $086038-$08604C  (5 instructions, 20 bytes) */
void jt_086038(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $08609C-$0860E4  (21 instructions, 72 bytes) */
void jt_08609C(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = (g_m68k.a[7] + 0x1600); uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[7] + 0 + (int16_t)(uint16_t)g_m68k.d[1] * 8); uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    { uint32_t _t = g_m68k.d[3]; g_m68k.d[3] = g_m68k.d[0]; g_m68k.d[0] = _t; }
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = (g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[1] * 8); uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x001600; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    { uint32_t _t = g_m68k.d[3]; g_m68k.d[3] = g_m68k.d[1]; g_m68k.d[1] = _t; }
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = (g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[1] * 8); uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x1600C742; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    { uint32_t _t = g_m68k.d[3]; g_m68k.d[3] = g_m68k.d[5]; g_m68k.d[5] = _t; }
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $086100-$086164  (41 instructions, 100 bytes) */
void jt_086100(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _t = g_m68k.a[3]; g_m68k.a[3] = g_m68k.a[3]; g_m68k.a[3] = _t; }
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    { uint32_t _ea = g_m68k.a[4]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[3]); bus_write16(_ea, _tmp); }
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    { uint32_t _ea = g_m68k.a[6]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[3]); bus_write16(_ea, _tmp); }
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _t = g_m68k.a[3]; g_m68k.a[3] = g_m68k.a[4]; g_m68k.a[4] = _t; }
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    { uint32_t _ea = g_m68k.a[5]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[3]); bus_write16(_ea, _tmp); }
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    { uint32_t _ea = g_m68k.a[7]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[3]); bus_write16(_ea, _tmp); }
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    { uint32_t _ea = g_m68k.a[3]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[3]); bus_write16(_ea, _tmp); }
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    { uint32_t _t = g_m68k.a[3]; g_m68k.a[3] = g_m68k.a[5]; g_m68k.a[5] = _t; }
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    { uint32_t _ea = g_m68k.a[6]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[3]); bus_write16(_ea, _tmp); }
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    { uint32_t _ea = g_m68k.a[0]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[3]); bus_write16(_ea, _tmp); }
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    { uint32_t _ea = g_m68k.a[4]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[3]); bus_write16(_ea, _tmp); }
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[7]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[3]); bus_write16(_ea, _tmp); }
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    { uint32_t _ea = g_m68k.a[1]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[3]); bus_write16(_ea, _tmp); }
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    { uint32_t _ea = g_m68k.a[5]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[3]); bus_write16(_ea, _tmp); }
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[2]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[3]); bus_write16(_ea, _tmp); }
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    { uint32_t _ea = g_m68k.a[6]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[3]); bus_write16(_ea, _tmp); }
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    /* WARNING: function did not end with RTS */
}

/* $086164-$086190  (11 instructions, 44 bytes) */
void jt_086164(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = (g_m68k.a[2] + 0x1600); uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[3]); bus_write16(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[1] * 8); uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[3]); bus_write16(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = (g_m68k.a[3] + 0x1600); uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[3]); bus_write16(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.d[1] * 8); uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[3]); bus_write16(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0861C8-$0861DC  (5 instructions, 20 bytes) */
void jt_0861C8(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $08622C-$086290  (29 instructions, 100 bytes) */
void jt_08622C(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[0]; uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[3]); bus_write32(_ea, _tmp); }
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    { uint32_t _ea = g_m68k.a[5]; uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[3]); bus_write32(_ea, _tmp); }
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    { uint32_t _ea = (g_m68k.a[3] + 0x1600); uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[3]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.d[1] * 8); uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[3]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[1]; uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[3]); bus_write32(_ea, _tmp); }
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    { uint32_t _ea = g_m68k.a[6]; uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[3]); bus_write32(_ea, _tmp); }
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    { uint32_t _ea = (g_m68k.a[4] + 0x1600); uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[3]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[1] * 8); uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[3]); bus_write32(_ea, _tmp); }
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

/* $086290-$0862B0  (9 instructions, 32 bytes) */
void jt_086290(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULS(g_m68k.d[3], g_m68k.d[5]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    /* WARNING: function did not end with RTS */
}

/* $0862F4-$086358  (35 instructions, 100 bytes) */
void jt_0862F4(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULS(g_m68k.d[3], _postinc16(1));
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    M68K_MULS(g_m68k.d[3], _predec16(3));
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    M68K_MULS(g_m68k.d[3], bus_read16(g_m68k.a[3] + 0x1600));
    M68K_MULS(g_m68k.d[3], bus_read16(g_m68k.a[3]));
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    M68K_MULS(g_m68k.d[3], _postinc16(2));
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    M68K_MULS(g_m68k.d[3], _predec16(4));
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    M68K_MULS(g_m68k.d[3], bus_read16(g_m68k.a[4] + 0x1600));
    M68K_MULS(g_m68k.d[3], bus_read16(g_m68k.a[4]));
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    M68K_MULS(g_m68k.d[3], _postinc16(3));
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    M68K_MULS(g_m68k.d[3], _predec16(5));
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    M68K_MULS(g_m68k.d[3], bus_read16(g_m68k.a[5] + 0x1600));
    M68K_MULS(g_m68k.d[3], bus_read16(g_m68k.a[5]));
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    M68K_MULS(g_m68k.d[3], _postinc16(4));
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $086358-$086368  (5 instructions, 16 bytes) */
void jt_086358(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND8(g_m68k.d[4], g_m68k.d[0]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    /* WARNING: function did not end with RTS */
}

/* $0863BC-$086420  (29 instructions, 100 bytes) */
void jt_0863BC(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = (g_m68k.a[5] + 0x1600); uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[3]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.d[1] * 8); uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[3]); bus_write32(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[7]; uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[3]); bus_write32(_ea, _tmp); }
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    { uint32_t _ea = (g_m68k.a[6] + 0x1600); uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[3]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.d[1] * 8); uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[3]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[2]; uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[3]); bus_write32(_ea, _tmp); }
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    { uint32_t _ea = (g_m68k.a[0] + 0x1600); uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[3]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[7] + 0x1600); uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[3]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[6] + 0 + (int16_t)(uint16_t)g_m68k.d[1] * 8); uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[3]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[3]); bus_write32(_ea, _tmp); }
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    { uint32_t _ea = (g_m68k.a[1] + 0x1600); uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[3]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[1] * 8); uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[3]); bus_write32(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[4]; uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[3]); bus_write32(_ea, _tmp); }
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    { uint32_t _ea = (g_m68k.a[2] + 0x1600); uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[3]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[1] * 8); uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[3]); bus_write32(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $086420-$08642C  (4 instructions, 12 bytes) */
void jt_086420(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULS(g_m68k.d[3], g_m68k.d[0]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    /* WARNING: function did not end with RTS */
}

/* $086484-$0864E8  (37 instructions, 100 bytes) */
void jt_086484(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULS(g_m68k.d[3], _postinc16(5));
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    M68K_MULS(g_m68k.d[3], _predec16(6));
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    M68K_MULS(g_m68k.d[3], bus_read16(g_m68k.a[6] + 0x1600));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULS(g_m68k.d[3], _postinc16(6));
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    M68K_MULS(g_m68k.d[3], _predec16(7));
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    M68K_MULS(g_m68k.d[3], bus_read16(g_m68k.a[7] + 0x1600));
    M68K_MULS(g_m68k.d[3], bus_read16(g_m68k.a[6]));
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    M68K_MULS(g_m68k.d[3], _postinc16(7));
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    M68K_MULS(g_m68k.d[3], bus_read16(g_m68k.a[0] + 0x1600));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULS(g_m68k.d[3], bus_read16(g_m68k.a[7]));
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    M68K_MULS(g_m68k.d[3], _predec16(0));
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    M68K_MULS(g_m68k.d[3], bus_read16(g_m68k.a[1] + 0x1600));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULS(g_m68k.d[3], _postinc16(0));
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    M68K_MULS(g_m68k.d[3], _predec16(1));
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    M68K_MULS(g_m68k.d[3], bus_read16(g_m68k.a[2] + 0x1600));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULS(g_m68k.d[3], _predec16(2));
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    { uint32_t _ea = g_m68k.a[6]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[3]); bus_write16(_ea, _tmp); }
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[1])); M68K_TST8((uint8_t)g_m68k.d[3]);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0864E8-$0864F8  (5 instructions, 16 bytes) */
void jt_0864E8(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULS(g_m68k.d[3], bus_read16(0x87af2));
    M68K_AND8(g_m68k.d[4], g_m68k.d[4]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    /* WARNING: function did not end with RTS */
}

/* $08654C-$086570  (13 instructions, 36 bytes) */
void jt_08654C(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND8(g_m68k.d[4], bus_read8(g_m68k.a[5]));
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    M68K_AND8(g_m68k.d[4], _postinc8(7));
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND8(g_m68k.d[4], bus_read8(g_m68k.a[6]));
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    M68K_AND8(g_m68k.d[4], _predec8(0));
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0865B0-$0865DC  (11 instructions, 44 bytes) */
void jt_0865B0(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_CMP32(g_m68k.a[6], bus_read32(0x1601C831));
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    M68K_AND8(g_m68k.d[4], bus_read8(0x865be + (int16_t)(uint16_t)g_m68k.d[1] * 8));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND8(g_m68k.d[4], bus_read8(g_m68k.a[3] + 0x1600));
    M68K_AND8(g_m68k.d[4], bus_read8(g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.d[1] * 8));
    M68K_AND8(g_m68k.d[4], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND8(g_m68k.d[4], bus_read8(g_m68k.a[4] + 0x1600));
    M68K_AND8(g_m68k.d[4], bus_read8(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[1] * 8));
    /* WARNING: function did not end with RTS */
}

/* $086614-$08661C  (3 instructions, 8 bytes) */
void jt_086614(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_AND16(g_m68k.d[4], g_m68k.d[6]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    /* WARNING: function did not end with RTS */
}

/* $086678-$0866DC  (29 instructions, 100 bytes) */
void jt_086678(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_AND16(g_m68k.d[4], _predec16(4));
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    M68K_AND16(g_m68k.d[4], bus_read16(g_m68k.a[3] + 0x1600));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND16(g_m68k.d[4], _predec16(5));
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    M68K_AND16(g_m68k.d[4], bus_read16(g_m68k.a[4] + 0x1600));
    M68K_AND16(g_m68k.d[4], bus_read16(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[1] * 8));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND16(g_m68k.d[4], _predec16(6));
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    M68K_AND16(g_m68k.d[4], bus_read16(g_m68k.a[5] + 0x1600));
    M68K_AND16(g_m68k.d[4], bus_read16(g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.d[1] * 8));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND16(g_m68k.d[4], _predec16(7));
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    M68K_AND16(g_m68k.d[4], bus_read16(g_m68k.a[6] + 0x1600));
    M68K_AND16(g_m68k.d[4], bus_read16(g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.d[1] * 8));
    M68K_AND16(g_m68k.d[4], bus_read16(0x866ba + (int16_t)(uint16_t)g_m68k.d[1] * 8));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND16(g_m68k.d[4], bus_read16(g_m68k.a[7] + 0x1600));
    M68K_AND16(g_m68k.d[4], bus_read16(g_m68k.a[6] + 0 + (int16_t)(uint16_t)g_m68k.d[1] * 8));
    M68K_AND16(g_m68k.d[4], 0x1600);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND16(g_m68k.d[4], bus_read16(g_m68k.a[7] + 0 + (int16_t)(uint16_t)g_m68k.d[1] * 8));
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0866DC-$086700  (14 instructions, 36 bytes) */
void jt_0866DC(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_AND8(g_m68k.d[4], bus_read8(g_m68k.a[1]));
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    M68K_AND8(g_m68k.d[4], _postinc8(2));
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND8(g_m68k.d[4], bus_read8(g_m68k.a[2]));
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    M68K_AND8(g_m68k.d[4], _postinc8(3));
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    M68K_AND8(g_m68k.d[4], _predec8(5));
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $086700-$086740  (23 instructions, 64 bytes) */
void jt_086700(void) {
    M68K_AND8(g_m68k.d[4], bus_read8(g_m68k.a[3]));
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    M68K_AND8(g_m68k.d[4], _postinc8(4));
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    M68K_AND8(g_m68k.d[4], _predec8(6));
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND8(g_m68k.d[4], bus_read8(g_m68k.a[4]));
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    M68K_AND8(g_m68k.d[4], _postinc8(5));
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    M68K_AND8(g_m68k.d[4], _predec8(7));
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    M68K_AND8(g_m68k.d[4], bus_read8(g_m68k.a[1] + 0x1600));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND8(g_m68k.d[4], _postinc8(6));
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    M68K_AND8(g_m68k.d[4], bus_read8(g_m68k.a[0] + 0x1600));
    M68K_AND8(g_m68k.d[4], bus_read8(g_m68k.a[2] + 0x1600));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $086740-$0867A4  (30 instructions, 100 bytes) */
void jt_086740(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND8(g_m68k.d[4], bus_read8(g_m68k.a[6] + 0x1600));
    M68K_AND8(g_m68k.d[4], bus_read8(g_m68k.a[7] + 0 + (int16_t)(uint16_t)g_m68k.d[1] * 8));
    M68K_AND16(g_m68k.d[4], g_m68k.d[0]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND8(g_m68k.d[4], bus_read8(g_m68k.a[7] + 0x1600));
    M68K_AND8(g_m68k.d[4], bus_read8(0x001600));
    M68K_AND16(g_m68k.d[4], g_m68k.d[1]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND8(g_m68k.d[4], bus_read8(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[1] * 8));
    M68K_AND8(g_m68k.d[4], bus_read8(0x1600C842));
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    M68K_AND16(g_m68k.d[4], g_m68k.d[4]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND8(g_m68k.d[4], bus_read8(0x87d8a));
    M68K_AND16(g_m68k.d[4], g_m68k.d[3]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    M68K_AND16(g_m68k.d[4], g_m68k.d[5]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0867A4-$0867B8  (5 instructions, 20 bytes) */
void jt_0867A4(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $086808-$086838  (12 instructions, 48 bytes) */
void jt_086808(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND16(g_m68k.d[4], bus_read16(g_m68k.a[0] + 0x1600));
    M68K_AND16(g_m68k.d[4], bus_read16(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[1] * 8));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND16(g_m68k.d[4], bus_read16(g_m68k.a[1] + 0x1600));
    M68K_AND16(g_m68k.d[4], bus_read16(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[1] * 8));
    M68K_AND16(g_m68k.d[4], bus_read16(0x001600));
    /* WARNING: function did not end with RTS */
}

/* $08686C-$086894  (11 instructions, 40 bytes) */
void jt_08686C(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULU(g_m68k.d[3], g_m68k.d[2]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    /* WARNING: function did not end with RTS */
}

/* $0868D0-$086934  (31 instructions, 100 bytes) */
void jt_0868D0(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULU(g_m68k.d[3], bus_read16(g_m68k.a[0] + 0x1600));
    M68K_MULU(g_m68k.d[3], bus_read16(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[1] * 8));
    M68K_MULU(g_m68k.d[3], _postinc16(1));
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    M68K_MULU(g_m68k.d[3], _predec16(0));
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    M68K_MULU(g_m68k.d[3], bus_read16(g_m68k.a[1] + 0x1600));
    M68K_MULU(g_m68k.d[3], bus_read16(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[1] * 8));
    M68K_MULU(g_m68k.d[3], _postinc16(2));
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    M68K_MULU(g_m68k.d[3], _predec16(1));
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    M68K_MULU(g_m68k.d[3], bus_read16(g_m68k.a[2] + 0x1600));
    M68K_MULU(g_m68k.d[3], bus_read16(g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.d[1] * 8));
    M68K_MULU(g_m68k.d[3], _postinc16(3));
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    M68K_MULU(g_m68k.d[3], _predec16(2));
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $086934-$08695C  (12 instructions, 40 bytes) */
void jt_086934(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULU(g_m68k.d[3], 0x1600);
    /* TODO $086950: abcd.b d5, d3  [C7 05] */
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    /* TODO $086954: abcd.b -(a6), -(a3)  [C7 0E] */
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    M68K_MULU(g_m68k.d[3], bus_read16(g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.d[1] * 8));
    /* WARNING: function did not end with RTS */
}

/* $086998-$0869FC  (36 instructions, 100 bytes) */
void jt_086998(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    { uint32_t _ea = (g_m68k.a[3] + 0x1600); uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    { uint32_t _ea = (g_m68k.a[4] + 0x1600); uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    { uint32_t _ea = g_m68k.a[5]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0869FC-$086A00  (1 instructions, 4 bytes) */
void jt_0869FC(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    /* WARNING: function did not end with RTS */
}

/* $086A00-$086A14  (5 instructions, 20 bytes) */
void jt_086A00(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $086A60-$086AC4  (34 instructions, 100 bytes) */
void jt_086A60(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULU(g_m68k.d[3], bus_read16(g_m68k.a[3] + 0x1600));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULU(g_m68k.d[3], _predec16(3));
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    M68K_MULU(g_m68k.d[3], bus_read16(g_m68k.a[4] + 0x1600));
    M68K_MULU(g_m68k.d[3], bus_read16(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[1] * 8));
    M68K_MULU(g_m68k.d[3], _postinc16(4));
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    M68K_MULU(g_m68k.d[3], _predec16(4));
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    M68K_MULU(g_m68k.d[3], bus_read16(g_m68k.a[5] + 0x1600));
    M68K_MULU(g_m68k.d[3], bus_read16(g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.d[1] * 8));
    M68K_MULU(g_m68k.d[3], _postinc16(5));
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    M68K_MULU(g_m68k.d[3], _predec16(5));
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    M68K_MULU(g_m68k.d[3], bus_read16(g_m68k.a[6] + 0x1600));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULU(g_m68k.d[3], _postinc16(6));
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    M68K_MULU(g_m68k.d[3], _predec16(6));
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    M68K_MULU(g_m68k.d[3], bus_read16(g_m68k.a[7] + 0x1600));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULU(g_m68k.d[3], _postinc16(7));
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    M68K_MULU(g_m68k.d[3], _predec16(7));
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $086AC4-$086B28  (37 instructions, 100 bytes) */
void jt_086AC4(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[1]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[1]); bus_write16(_ea, _tmp); }
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[1])); M68K_TST8((uint8_t)g_m68k.d[3]);
    /* TODO $086AD0: abcd.b -(a0), -(a3)  [C7 08] */
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $086ADC: abcd.b d0, d3  [C7 00] */
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    /* TODO $086AE0: abcd.b -(a1), -(a3)  [C7 09] */
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    M68K_MULU(g_m68k.d[3], bus_read16(0x001600));
    /* TODO $086AEC: abcd.b d1, d3  [C7 01] */
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    /* TODO $086AF0: abcd.b -(a2), -(a3)  [C7 0A] */
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULU(g_m68k.d[3], bus_read16(0x1600C702));
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    /* TODO $086B00: abcd.b -(a3), -(a3)  [C7 0B] */
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULU(g_m68k.d[3], bus_read16(0x8810a));
    /* TODO $086B0C: abcd.b d3, d3  [C7 03] */
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    /* TODO $086B10: abcd.b -(a4), -(a3)  [C7 0C] */
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULU(g_m68k.d[3], bus_read16(0x86b1a + (int16_t)(uint16_t)g_m68k.d[1] * 8));
    /* TODO $086B1C: abcd.b d4, d3  [C7 04] */
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    /* TODO $086B20: abcd.b -(a5), -(a3)  [C7 0D] */
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[3]);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}
