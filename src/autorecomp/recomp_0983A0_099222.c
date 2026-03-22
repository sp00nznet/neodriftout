/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $0983A0 - $099222 */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

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

/* $098B20-$098B34  (9 instructions, 20 bytes) */
void jt_098B20(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_ADDX8(g_m68k.d[3], g_m68k.d[3]);
    M68K_ADD8(g_m68k.d[1], 0x8);
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_ADDX8(_tmp, _predec8(1)); bus_write8(_ea, _tmp); }
    M68K_ADD8(g_m68k.d[1], 0x8);
    M68K_ADDX8(g_m68k.d[3], g_m68k.d[2]);
    M68K_ADD8(g_m68k.d[1], 0x8);
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_ADDX8(_tmp, _predec8(0)); bus_write8(_ea, _tmp); }
    M68K_ADD8(g_m68k.d[1], 0x8);
    /* WARNING: function did not end with RTS */
}

/* $098B34-$098B40  (5 instructions, 12 bytes) */
void jt_098B34(void) {
    M68K_OR8(g_m68k.d[2], 0x1);
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_ADDX8(_tmp, _predec8(7)); bus_write8(_ea, _tmp); }
    M68K_ADD8(g_m68k.d[1], 0x8);
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_ADDX8(_tmp, _predec8(6)); bus_write8(_ea, _tmp); }
    M68K_ADD8(g_m68k.d[1], 0x8);
    /* WARNING: function did not end with RTS */
}

/* $098B40-$098B44  (1 instructions, 4 bytes) */
void jt_098B40(void) {
    M68K_OR8(g_m68k.d[2], 0xa);
    /* WARNING: function did not end with RTS */
}

/* $098B94-$098B9A  (2 instructions, 6 bytes) */
void jt_098B94(void) {
    M68K_OR8(g_m68k.d[2], 0xa);
    M68K_EOR16(g_m68k.d[0], g_m68k.d[5]);
    /* WARNING: function did not end with RTS */
}

/* $098BE8-$098BEE  (2 instructions, 6 bytes) */
void jt_098BE8(void) {
    M68K_OR8(g_m68k.d[6], 0xa);
    M68K_EOR16(g_m68k.d[1], g_m68k.d[5]);
    /* WARNING: function did not end with RTS */
}

/* $098CDC-$098CE2  (2 instructions, 6 bytes) */
void jt_098CDC(void) {
    M68K_OR8(g_m68k.d[3], 0x7);
    M68K_EOR16(g_m68k.d[2], g_m68k.d[5]);
    /* WARNING: function did not end with RTS */
}

/* $098D34-$098D38  (1 instructions, 4 bytes) */
void jt_098D34(void) {
    M68K_OR8(g_m68k.d[2], 0x1);
    /* WARNING: function did not end with RTS */
}

/* $098D40-$098D44  (1 instructions, 4 bytes) */
void jt_098D40(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    /* WARNING: function did not end with RTS */
}

/* $098D54-$098D58  (1 instructions, 4 bytes) */
void jt_098D54(void) {
    M68K_OR8(g_m68k.d[2], 0xa);
    /* WARNING: function did not end with RTS */
}

/* $098DA8-$098DAE  (2 instructions, 6 bytes) */
void jt_098DA8(void) {
    M68K_OR8(g_m68k.d[2], 0xa);
    M68K_EOR16(g_m68k.d[0], g_m68k.d[5]);
    /* WARNING: function did not end with RTS */
}

/* $098DFC-$098E02  (2 instructions, 6 bytes) */
void jt_098DFC(void) {
    M68K_OR8(g_m68k.d[6], 0xa);
    M68K_EOR16(g_m68k.d[1], g_m68k.d[5]);
    /* WARNING: function did not end with RTS */
}

/* $098EF0-$098EF4  (1 instructions, 4 bytes) */
void jt_098EF0(void) {
    M68K_OR8(g_m68k.d[3], 0x7);
    /* WARNING: function did not end with RTS */
}

/* $098F48-$098F4C  (1 instructions, 4 bytes) */
void jt_098F48(void) {
    M68K_OR8(g_m68k.d[2], 0x1);
    /* WARNING: function did not end with RTS */
}

/* $098F54-$098F58  (1 instructions, 4 bytes) */
void jt_098F54(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    /* WARNING: function did not end with RTS */
}

/* $098F68-$098F6E  (2 instructions, 6 bytes) */
void jt_098F68(void) {
    M68K_OR8(g_m68k.d[5], 0xa);
    { uint32_t _ea = g_m68k.a[4]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $099034-$09903A  (2 instructions, 6 bytes) */
void jt_099034(void) {
    M68K_OR8(g_m68k.d[3], 0xa);
    { uint32_t _ea = g_m68k.a[6]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0990B0-$0990B6  (2 instructions, 6 bytes) */
void jt_0990B0(void) {
    M68K_OR8(g_m68k.d[1], 0x6);
    { uint32_t _ea = g_m68k.a[1]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0990CC-$0990D2  (2 instructions, 6 bytes) */
void jt_0990CC(void) {
    M68K_OR8(g_m68k.d[1], 0x6);
    { uint32_t _ea = g_m68k.a[1]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0990E8-$0990EE  (2 instructions, 6 bytes) */
void jt_0990E8(void) {
    M68K_OR8(g_m68k.d[1], 0x6);
    { uint32_t _ea = g_m68k.a[1]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $099104-$09910A  (2 instructions, 6 bytes) */
void jt_099104(void) {
    M68K_OR8(g_m68k.d[1], 0x6);
    { uint32_t _ea = g_m68k.a[2]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $099120-$099126  (2 instructions, 6 bytes) */
void jt_099120(void) {
    M68K_OR8(g_m68k.d[2], 0x9);
    { uint32_t _ea = g_m68k.a[3]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $09916C-$099172  (2 instructions, 6 bytes) */
void jt_09916C(void) {
    M68K_OR8(g_m68k.d[6], 0x7);
    M68K_CMP32(g_m68k.a[5], g_m68k.d[6]);
    /* WARNING: function did not end with RTS */
}

/* $099218-$099222  (3 instructions, 10 bytes) */
void jt_099218(void) {
    M68K_OR8(g_m68k.d[6], 0x9);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP32(g_m68k.a[5], bus_read32(g_m68k.a[3]));
    /* WARNING: function did not end with RTS */
}
