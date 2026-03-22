/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $091060 - $0923D0 */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

/* $091060-$091094  (14 instructions, 52 bytes) */
void jt_091060(void) {
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
    M68K_AND16(g_m68k.d[6], bus_read16(0x91092 + (int32_t)g_m68k.d[1] * 8));
    /* WARNING: function did not end with RTS */
}

/* $0910C4-$0910E0  (8 instructions, 28 bytes) */
void jt_0910C4(void) {
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

/* $091128-$091160  (17 instructions, 56 bytes) */
void jt_091128(void) {
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
    /* WARNING: function did not end with RTS */
}

/* $09120C-$091270  (35 instructions, 100 bytes) */
void jt_09120C(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULU(g_m68k.d[7], _postinc16(4));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    M68K_AND32(g_m68k.d[7], bus_read32(g_m68k.a[2]));
    { uint32_t _mv = (uint32_t)(g_m68k.d[1]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULU(g_m68k.d[7], _postinc16(5));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    M68K_MULU(g_m68k.d[7], _predec16(3));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULU(g_m68k.d[7], _postinc16(5));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    M68K_MULU(g_m68k.d[7], _predec16(3));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULU(g_m68k.d[7], _postinc16(5));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    M68K_MULU(g_m68k.d[7], _predec16(3));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULU(g_m68k.d[7], _postinc16(6));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    M68K_MULU(g_m68k.d[7], _predec16(4));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $091270-$0912BC  (20 instructions, 76 bytes) */
void jt_091270(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULU(g_m68k.d[7], bus_read16(g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.d[2]));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULU(g_m68k.d[7], bus_read16(g_m68k.a[5] + 0x2100));
    M68K_MULU(g_m68k.d[7], bus_read16(g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.d[2]));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULU(g_m68k.d[7], bus_read16(g_m68k.a[6] + 0x2100));
    M68K_MULU(g_m68k.d[7], bus_read16(g_m68k.a[6] + 0 + (int16_t)(uint16_t)g_m68k.d[2]));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULU(g_m68k.d[7], bus_read16(g_m68k.a[7] + 0x2100));
    M68K_MULU(g_m68k.d[7], bus_read16(g_m68k.a[7] + 0 + (int16_t)(uint16_t)g_m68k.d[2]));
    M68K_MULU(g_m68k.d[2], bus_read16(g_m68k.a[2]));
    { uint32_t _mv = (uint32_t)(g_m68k.d[2]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULU(g_m68k.d[7], bus_read16(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[2]));
    /* WARNING: function did not end with RTS */
}

/* $0912D4-$091320  (27 instructions, 76 bytes) */
void jt_0912D4(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = (g_m68k.a[0] + 0x2101); uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[2]); bus_write16(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $0912EC: abcd.b d4, d7  [CF 04] */
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    /* TODO $0912F0: abcd.b -(a2), -(a7)  [CF 0A] */
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $0912FC: abcd.b d5, d7  [CF 05] */
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    /* TODO $091300: abcd.b -(a3), -(a7)  [CF 0B] */
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $09130C: abcd.b d6, d7  [CF 06] */
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    /* TODO $091310: abcd.b -(a4), -(a7)  [CF 0C] */
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $09131C: abcd.b d7, d7  [CF 07] */
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $091338-$09139C  (39 instructions, 100 bytes) */
void jt_091338(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_EOR16(g_m68k.d[0], g_m68k.d[6]);
    { uint32_t _mv = (uint32_t)(g_m68k.d[1]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_EOR16(g_m68k.d[0], g_m68k.d[6]);
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _ea = g_m68k.a[5]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _ea = g_m68k.a[5]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $09139C-$0913D8  (21 instructions, 60 bytes) */
void jt_09139C(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULU(g_m68k.d[7], _postinc16(7));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    M68K_MULU(g_m68k.d[7], _predec16(5));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULU(g_m68k.d[7], _postinc16(3));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    M68K_MULU(g_m68k.d[7], _predec16(0));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    M68K_MULU(g_m68k.d[7], _predec16(6));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULU(g_m68k.d[7], _predec16(1));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $091400-$091428  (10 instructions, 40 bytes) */
void jt_091400(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULU(g_m68k.d[7], bus_read16(g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.d[2]));
    M68K_AND16(g_m68k.d[2], bus_read16(g_m68k.a[7] + 0x2101));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULU(g_m68k.d[7], bus_read16(g_m68k.a[4] + 0x2100));
    /* WARNING: function did not end with RTS */
}

/* $091464-$09148C  (12 instructions, 40 bytes) */
void jt_091464(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $09147C: abcd.b -(a0), -(a7)  [CF 08] */
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $091488: abcd.b d2, d7  [CF 02] */
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0914C8-$091504  (21 instructions, 60 bytes) */
void jt_0914C8(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND16(g_m68k.d[2], bus_read16(g_m68k.a[7] + 0x2103));
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _ea = g_m68k.a[5]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _ea = (g_m68k.a[0] + 0x2100); uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $09152C-$091590  (27 instructions, 100 bytes) */
void jt_09152C(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND32(g_m68k.d[7], g_m68k.d[3]);
    { uint32_t _mv = (uint32_t)(g_m68k.d[1]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _ea = (g_m68k.a[4] + 0x2100); uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.d[2]); uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x002100; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    M68K_AND32(g_m68k.d[7], g_m68k.d[2]);
    { uint32_t _mv = (uint32_t)(g_m68k.d[1]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _ea = (g_m68k.a[5] + 0x2100); uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[2]); uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x002101; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
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

/* $091590-$0915B4  (11 instructions, 36 bytes) */
void jt_091590(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _t = g_m68k.d[7]; g_m68k.d[7] = g_m68k.d[4]; g_m68k.d[4] = _t; }
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _t = g_m68k.a[7]; g_m68k.a[7] = g_m68k.a[3]; g_m68k.a[3] = _t; }
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0915F4-$09162C  (21 instructions, 56 bytes) */
void jt_0915F4(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[0]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[7]); bus_write16(_ea, _tmp); }
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _ea = g_m68k.a[0]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[7]); bus_write16(_ea, _tmp); }
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _ea = g_m68k.a[0]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[7]); bus_write16(_ea, _tmp); }
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _ea = g_m68k.a[2]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[7]); bus_write16(_ea, _tmp); }
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _ea = g_m68k.a[1]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[7]); bus_write16(_ea, _tmp); }
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _ea = g_m68k.a[1]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[7]); bus_write16(_ea, _tmp); }
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _ea = g_m68k.a[1]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[7]); bus_write16(_ea, _tmp); }
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $091658-$0916BC  (30 instructions, 100 bytes) */
void jt_091658(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = (g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.d[2]); uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[7]); bus_write16(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[7]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[7]); bus_write16(_ea, _tmp); }
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _ea = (g_m68k.a[6] + 0 + (int16_t)(uint16_t)g_m68k.d[2]); uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[7]); bus_write16(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[7]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[7]); bus_write16(_ea, _tmp); }
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _ea = g_m68k.a[5]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    { uint32_t _mv = (uint32_t)(g_m68k.d[2]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _ea = (g_m68k.a[7] + 0 + (int16_t)(uint16_t)g_m68k.d[2]); uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[7]); bus_write16(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[6]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[7]); bus_write16(_ea, _tmp); }
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _ea = g_m68k.a[5]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    { uint32_t _mv = (uint32_t)(g_m68k.d[2]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _ea = (g_m68k.a[6] + 0x2100); uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[7]); bus_write16(_ea, _tmp); }
    { uint32_t _ea = 0x002100; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[7]); bus_write16(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = (g_m68k.a[0] + 0x2100); uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[7]); bus_write16(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[7] + 0x2100); uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[7]); bus_write16(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0916BC-$0916DC  (8 instructions, 32 bytes) */
void jt_0916BC(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = (g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.d[2]); uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x21000000; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = (g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.d[2]); uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $091720-$091738  (8 instructions, 24 bytes) */
void jt_091720(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _t = g_m68k.d[7]; g_m68k.d[7] = g_m68k.d[7]; g_m68k.d[7] = _t; }
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _ea = g_m68k.a[4]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[2]); bus_write16(_ea, _tmp); }
    { uint32_t _mv = (uint32_t)(g_m68k.d[3]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $091784-$0917E8  (38 instructions, 100 bytes) */
void jt_091784(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[3]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[7]); bus_write16(_ea, _tmp); }
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _ea = g_m68k.a[3]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[7]); bus_write16(_ea, _tmp); }
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[4]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[7]); bus_write16(_ea, _tmp); }
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _ea = g_m68k.a[4]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[7]); bus_write16(_ea, _tmp); }
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _ea = g_m68k.a[4]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[7]); bus_write16(_ea, _tmp); }
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[5]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[7]); bus_write16(_ea, _tmp); }
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _ea = g_m68k.a[5]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    { uint32_t _mv = (uint32_t)(g_m68k.d[1]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _ea = g_m68k.a[5]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[7]); bus_write16(_ea, _tmp); }
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[6]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[7]); bus_write16(_ea, _tmp); }
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _ea = g_m68k.a[5]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[7]); bus_write16(_ea, _tmp); }
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[7]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[7]); bus_write16(_ea, _tmp); }
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _ea = g_m68k.a[6]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[7]); bus_write16(_ea, _tmp); }
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULU(g_m68k.d[7], /* UNHANDLED_READ: (a16, d2.w) */ 0);
    { uint32_t _ea = g_m68k.a[7]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[7]); bus_write16(_ea, _tmp); }
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0917E8-$091804  (7 instructions, 28 bytes) */
void jt_0917E8(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = (g_m68k.a[1] + 0x2100); uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[7]); bus_write16(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[2]); uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[7]); bus_write16(_ea, _tmp); }
    { uint32_t _ea = 0x21000000; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[7]); bus_write16(_ea, _tmp); }
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _ea = (g_m68k.a[2] + 0x2100); uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[7]); bus_write16(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $09184C-$091854  (2 instructions, 8 bytes) */
void jt_09184C(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0918B0-$0918EC  (22 instructions, 60 bytes) */
void jt_0918B0(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _t = g_m68k.d[7]; g_m68k.d[7] = g_m68k.a[5]; g_m68k.a[5] = _t; }
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _ea = g_m68k.a[5]; uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[7]); bus_write32(_ea, _tmp); }
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _t = g_m68k.d[7]; g_m68k.d[7] = g_m68k.a[6]; g_m68k.a[6] = _t; }
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _ea = g_m68k.a[6]; uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[7]); bus_write32(_ea, _tmp); }
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _t = g_m68k.d[7]; g_m68k.d[7] = g_m68k.a[7]; g_m68k.a[7] = _t; }
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _t = g_m68k.a[7]; g_m68k.a[7] = g_m68k.a[4]; g_m68k.a[4] = _t; }
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[0]; uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[7]); bus_write32(_ea, _tmp); }
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    /* WARNING: function did not end with RTS */
}

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
