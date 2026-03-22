/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $0832EC - $084560 */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

/* $0832EC-$083350  (38 instructions, 100 bytes) */
void jt_0832EC(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND16(g_m68k.d[2], _postinc16(1));
    { uint8_t _mv = (uint8_t)(g_m68k.d[3]); g_m68k.a[1] -= 1; bus_write8(g_m68k.a[1], _mv); M68K_TST8(_mv); }
    M68K_AND16(g_m68k.d[2], _postinc16(1));
    { uint8_t _mv = (uint8_t)(g_m68k.d[1]); g_m68k.a[1] -= 1; bus_write8(g_m68k.a[1], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND8(g_m68k.d[3], _predec8(2));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[1] -= 1; bus_write8(g_m68k.a[1], _mv); M68K_TST8(_mv); }
    M68K_AND8(g_m68k.d[3], _predec8(6));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[1] -= 1; bus_write8(g_m68k.a[1], _mv); M68K_TST8(_mv); }
    M68K_AND16(g_m68k.d[2], bus_read16(g_m68k.a[1]));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[1] -= 1; bus_write8(g_m68k.a[1], _mv); M68K_TST8(_mv); }
    M68K_AND16(g_m68k.d[2], bus_read16(g_m68k.a[7]));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[1] -= 1; bus_write8(g_m68k.a[1], _mv); M68K_TST8(_mv); }
    M68K_AND8(g_m68k.d[3], _predec8(3));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[1] -= 1; bus_write8(g_m68k.a[1], _mv); M68K_TST8(_mv); }
    M68K_AND8(g_m68k.d[3], _predec8(7));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[1] -= 1; bus_write8(g_m68k.a[1], _mv); M68K_TST8(_mv); }
    M68K_AND16(g_m68k.d[2], bus_read16(g_m68k.a[2]));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[1] -= 1; bus_write8(g_m68k.a[1], _mv); M68K_TST8(_mv); }
    M68K_AND16(g_m68k.d[2], _postinc16(0));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[1] -= 1; bus_write8(g_m68k.a[1], _mv); M68K_TST8(_mv); }
    M68K_AND8(g_m68k.d[3], _predec8(4));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[1] -= 1; bus_write8(g_m68k.a[1], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND16(g_m68k.d[2], bus_read16(g_m68k.a[3]));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[1] -= 1; bus_write8(g_m68k.a[1], _mv); M68K_TST8(_mv); }
    M68K_AND16(g_m68k.d[2], _postinc16(1));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[1] -= 1; bus_write8(g_m68k.a[1], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $083350-$0833B4  (25 instructions, 100 bytes) */
void jt_083350(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND16(g_m68k.d[2], bus_read16(g_m68k.a[0] + 0x1300));
    M68K_AND16(g_m68k.d[2], bus_read16(g_m68k.a[6] + 0x1300));
    M68K_AND8(g_m68k.d[3], bus_read8(g_m68k.a[3] + 0x1300));
    M68K_AND8(g_m68k.d[3], bus_read8(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[1] * 2));
    M68K_AND16(g_m68k.d[2], bus_read16(g_m68k.a[1] + 0x1300));
    M68K_AND16(g_m68k.d[2], bus_read16(g_m68k.a[7] + 0x1300));
    M68K_AND8(g_m68k.d[3], bus_read8(g_m68k.a[4] + 0x1300));
    M68K_AND8(g_m68k.d[3], bus_read8(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[1] * 2));
    M68K_AND16(g_m68k.d[2], bus_read16(g_m68k.a[2] + 0x1300));
    M68K_AND16(g_m68k.d[2], bus_read16(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[1] * 2));
    M68K_AND8(g_m68k.d[3], bus_read8(g_m68k.a[5] + 0x1300));
    M68K_AND8(g_m68k.d[3], bus_read8(g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.d[1] * 2));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0833B4-$0833D0  (7 instructions, 28 bytes) */
void jt_0833B4(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $083418-$08343C  (10 instructions, 36 bytes) */
void jt_083418(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND32(g_m68k.d[2], bus_read32(g_m68k.a[0]));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[1] -= 1; bus_write8(g_m68k.a[1], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $08343C-$083450  (9 instructions, 20 bytes) */
void jt_08343C(void) {
    M68K_AND16(g_m68k.d[3], g_m68k.d[4]);
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[1] -= 1; bus_write8(g_m68k.a[1], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND32(g_m68k.d[2], bus_read32(g_m68k.a[1]));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[1] -= 1; bus_write8(g_m68k.a[1], _mv); M68K_TST8(_mv); }
    M68K_AND32(g_m68k.d[2], bus_read32(g_m68k.a[7]));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[1] -= 1; bus_write8(g_m68k.a[1], _mv); M68K_TST8(_mv); }
    M68K_AND16(g_m68k.d[3], g_m68k.d[5]);
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[1] -= 1; bus_write8(g_m68k.a[1], _mv); M68K_TST8(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $08347C-$083494  (6 instructions, 24 bytes) */
void jt_08347C(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0834E0-$083544  (28 instructions, 100 bytes) */
void jt_0834E0(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND16(g_m68k.d[2], _predec16(4));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[1] -= 1; bus_write8(g_m68k.a[1], _mv); M68K_TST8(_mv); }
    M68K_AND16(g_m68k.d[2], bus_read16(g_m68k.a[3] + 0x1300));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[1]; uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[2]); bus_write32(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[1] -= 1; bus_write8(g_m68k.a[1], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = g_m68k.a[3]; uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[2]); bus_write32(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[1] -= 1; bus_write8(g_m68k.a[1], _mv); M68K_TST8(_mv); }
    M68K_AND8(g_m68k.d[3], bus_read8(g_m68k.a[6] + 0x1300));
    M68K_AND8(g_m68k.d[3], bus_read8(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[1] * 2));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND8(g_m68k.d[3], bus_read8(g_m68k.a[7] + 0x1300));
    M68K_AND8(g_m68k.d[3], bus_read8(g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.d[1] * 2));
    M68K_AND8(g_m68k.d[3], bus_read8(g_m68k.a[6] + 0 + (int16_t)(uint16_t)g_m68k.d[1] * 2));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND8(g_m68k.d[3], bus_read8(g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.d[1] * 2));
    M68K_MULU(g_m68k.d[2], bus_read16(0x84841));
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $083544-$08357C  (18 instructions, 56 bytes) */
void jt_083544(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND16(g_m68k.d[2], bus_read16(0x8485e));
    M68K_AND32(g_m68k.d[2], g_m68k.d[1]);
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[1] -= 1; bus_write8(g_m68k.a[1], _mv); M68K_TST8(_mv); }
    M68K_AND32(g_m68k.d[2], g_m68k.d[6]);
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[1] -= 1; bus_write8(g_m68k.a[1], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND32(g_m68k.d[2], g_m68k.d[2]);
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[1] -= 1; bus_write8(g_m68k.a[1], _mv); M68K_TST8(_mv); }
    M68K_AND32(g_m68k.d[2], g_m68k.d[7]);
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[1] -= 1; bus_write8(g_m68k.a[1], _mv); M68K_TST8(_mv); }
    M68K_AND8(g_m68k.d[3], bus_read8(0x8487a));
    /* WARNING: function did not end with RTS */
}

/* $0835A8-$0835C0  (6 instructions, 24 bytes) */
void jt_0835A8(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $08360C-$08363C  (16 instructions, 48 bytes) */
void jt_08360C(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND32(g_m68k.d[2], _postinc32(4));
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_AND32(g_m68k.d[2], _predec32(3));
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND32(g_m68k.d[2], _postinc32(5));
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_AND32(g_m68k.d[2], _predec32(4));
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    /* WARNING: function did not end with RTS */
}

/* $08363C-$083670  (17 instructions, 52 bytes) */
void jt_08363C(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND32(g_m68k.d[2], _postinc32(6));
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_AND32(g_m68k.d[2], _predec32(5));
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND32(g_m68k.d[2], _postinc32(7));
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_AND32(g_m68k.d[2], _predec32(6));
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $083670-$0836C0  (20 instructions, 80 bytes) */
void jt_083670(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND32(g_m68k.d[2], bus_read32(g_m68k.a[5] + 0x1400));
    M68K_AND32(g_m68k.d[2], bus_read32(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[1] * 4));
    M68K_AND32(g_m68k.d[2], bus_read32(0x001400));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND32(g_m68k.d[2], bus_read32(g_m68k.a[6] + 0x1400));
    M68K_AND32(g_m68k.d[2], bus_read32(g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.d[1] * 4));
    M68K_AND32(g_m68k.d[2], bus_read32(0x14000000));
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND32(g_m68k.d[2], bus_read32(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[1] * 4));
    M68K_AND32(g_m68k.d[2], bus_read32(0x84abe));
    /* WARNING: function did not end with RTS */
}

/* $0836D4-$0836F0  (9 instructions, 28 bytes) */
void jt_0836D4(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_EOR16(g_m68k.d[0], g_m68k.d[6]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[1])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_MULU(g_m68k.d[2], g_m68k.d[1]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    /* WARNING: function did not end with RTS */
}

/* $083738-$08379C  (36 instructions, 100 bytes) */
void jt_083738(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULU(g_m68k.d[2], bus_read16(g_m68k.a[5]));
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_MULU(g_m68k.d[2], _postinc16(4));
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULU(g_m68k.d[2], bus_read16(g_m68k.a[1]));
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_MULU(g_m68k.d[2], bus_read16(g_m68k.a[6]));
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULU(g_m68k.d[2], _postinc16(5));
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_MULU(g_m68k.d[2], _predec16(2));
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULU(g_m68k.d[2], bus_read16(g_m68k.a[7]));
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_MULU(g_m68k.d[2], _postinc16(6));
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_MULU(g_m68k.d[2], _predec16(3));
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULU(g_m68k.d[2], _postinc16(0));
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_MULU(g_m68k.d[2], _postinc16(7));
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $08379C-$083800  (31 instructions, 100 bytes) */
void jt_08379C(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND32(g_m68k.d[2], _predec32(0));
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_AND32(g_m68k.d[2], _predec32(7));
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND32(g_m68k.d[2], _postinc32(3));
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_AND32(g_m68k.d[2], _predec32(1));
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_EOR16(g_m68k.d[0], g_m68k.d[6]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_AND32(g_m68k.d[2], _predec32(2));
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_AND32(g_m68k.d[2], bus_read32(g_m68k.a[0] + 0x1400));
    M68K_AND32(g_m68k.d[2], bus_read32(g_m68k.a[3] + 0x1400));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND32(g_m68k.d[2], bus_read32(g_m68k.a[1] + 0x1400));
    M68K_AND32(g_m68k.d[2], bus_read32(g_m68k.a[4] + 0x1400));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND32(g_m68k.d[2], bus_read32(g_m68k.a[2] + 0x1400));
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $083800-$083840  (16 instructions, 64 bytes) */
void jt_083800(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND32(g_m68k.d[2], bus_read32(g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.d[1] * 4));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND32(g_m68k.d[2], bus_read32(g_m68k.a[7] + 0x1400));
    M68K_AND32(g_m68k.d[2], bus_read32(g_m68k.a[6] + 0 + (int16_t)(uint16_t)g_m68k.d[1] * 4));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND32(g_m68k.d[2], bus_read32(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[1] * 4));
    M68K_AND32(g_m68k.d[2], bus_read32(g_m68k.a[7] + 0 + (int16_t)(uint16_t)g_m68k.d[1] * 4));
    M68K_AND32(g_m68k.d[2], bus_read32(0x8383e + (int16_t)(uint16_t)g_m68k.d[1] * 4));
    /* WARNING: function did not end with RTS */
}

/* $083864-$083894  (14 instructions, 48 bytes) */
void jt_083864(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULU(g_m68k.d[2], g_m68k.d[5]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULU(g_m68k.d[2], g_m68k.d[6]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_AND16(g_m68k.d[2], bus_read16(g_m68k.a[6] + 0x1402));
    /* WARNING: function did not end with RTS */
}

/* $0838C8-$08392C  (37 instructions, 100 bytes) */
void jt_0838C8(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULU(g_m68k.d[2], bus_read16(g_m68k.a[2]));
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_MULU(g_m68k.d[2], _postinc16(1));
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULU(g_m68k.d[2], bus_read16(g_m68k.a[3]));
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_MULU(g_m68k.d[2], _postinc16(2));
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_MULU(g_m68k.d[2], _predec16(0));
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_MULU(g_m68k.d[2], _predec16(4));
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_MULU(g_m68k.d[2], bus_read16(g_m68k.a[4]));
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_MULU(g_m68k.d[2], _postinc16(3));
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_AND32(g_m68k.d[2], _predec32(2));
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[3])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_MULU(g_m68k.d[2], _predec16(5));
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULU(g_m68k.d[2], _predec16(1));
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_MULU(g_m68k.d[2], _predec16(6));
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $08392C-$083990  (26 instructions, 100 bytes) */
void jt_08392C(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULU(g_m68k.d[2], _predec16(7));
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_MULU(g_m68k.d[2], bus_read16(g_m68k.a[2] + 0x1400));
    M68K_MULU(g_m68k.d[2], bus_read16(g_m68k.a[6] + 0x1400));
    M68K_MULU(g_m68k.d[2], bus_read16(g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.d[1] * 4));
    M68K_MULU(g_m68k.d[2], bus_read16(g_m68k.a[0] + 0x1400));
    M68K_MULU(g_m68k.d[2], bus_read16(g_m68k.a[3] + 0x1400));
    M68K_MULU(g_m68k.d[2], bus_read16(g_m68k.a[7] + 0x1400));
    M68K_MULU(g_m68k.d[2], bus_read16(g_m68k.a[6] + 0 + (int16_t)(uint16_t)g_m68k.d[1] * 4));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULU(g_m68k.d[2], bus_read16(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[1] * 4));
    M68K_MULU(g_m68k.d[2], bus_read16(g_m68k.a[7] + 0 + (int16_t)(uint16_t)g_m68k.d[1] * 4));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $083990-$0839C8  (18 instructions, 56 bytes) */
void jt_083990(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $0839AC: abcd.b d3, d2  [C5 03] */
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    /* TODO $0839B0: abcd.b -(a2), -(a2)  [C5 0A] */
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_MULU(g_m68k.d[2], bus_read16(0x1400C4FC));
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    /* TODO $0839BC: abcd.b d4, d2  [C5 04] */
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    /* TODO $0839C0: abcd.b -(a3), -(a2)  [C5 0B] */
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_MULU(g_m68k.d[2], bus_read16(0x84dc6));
    /* WARNING: function did not end with RTS */
}

/* $0839F4-$083A58  (35 instructions, 100 bytes) */
void jt_0839F4(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    /* TODO $083A18: abcd.b -(a7), -(a2)  [C5 0F] */
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $083A58-$083ABC  (29 instructions, 100 bytes) */
void jt_083A58(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = (g_m68k.a[5] + 0x1400); uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[1] * 4); uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint32_t _ea = (g_m68k.a[6] + 0x1400); uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.d[1] * 4); uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = (g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[1] * 4); uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = (g_m68k.a[0] + 0x1400); uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $083ABC-$083B20  (25 instructions, 100 bytes) */
void jt_083ABC(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULU(g_m68k.d[2], bus_read16(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[1] * 4));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULU(g_m68k.d[2], bus_read16(g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.d[1] * 4));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULU(g_m68k.d[2], bus_read16(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[1] * 4));
    M68K_MULU(g_m68k.d[2], bus_read16(0x001400));
    M68K_MULU(g_m68k.d[2], bus_read16(g_m68k.a[1] + 0x1400));
    M68K_MULU(g_m68k.d[2], bus_read16(g_m68k.a[4] + 0x1400));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULU(g_m68k.d[2], bus_read16(g_m68k.a[5] + 0x1400));
    M68K_MULU(g_m68k.d[2], bus_read16(g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.d[1] * 4));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $083B20-$083B28  (2 instructions, 8 bytes) */
void jt_083B20(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $083B84-$083BE8  (36 instructions, 100 bytes) */
void jt_083B84(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[5]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[5]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_AND32(g_m68k.d[2], g_m68k.d[6]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[1])); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND16(g_m68k.d[2], bus_read16(g_m68k.a[7] + 0x1402));
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $083BE8-$083C4C  (27 instructions, 100 bytes) */
void jt_083BE8(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = (g_m68k.a[1] + 0x1400); uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = (g_m68k.a[2] + 0x1400); uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[7] + 0x1400); uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.d[1] * 4); uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[1]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[1]); bus_write16(_ea, _tmp); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[1])); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint32_t _ea = (g_m68k.a[3] + 0x1400); uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[5]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint32_t _ea = (g_m68k.a[4] + 0x1400); uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[1] * 4); uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $083C4C-$083C58  (3 instructions, 12 bytes) */
void jt_083C4C(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $083CB0-$083D14  (34 instructions, 100 bytes) */
void jt_083CB0(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _t = g_m68k.a[2]; g_m68k.a[2] = g_m68k.a[2]; g_m68k.a[2] = _t; }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _t = g_m68k.d[2]; g_m68k.d[2] = g_m68k.d[3]; g_m68k.d[3] = _t; }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint32_t _t = g_m68k.d[2]; g_m68k.d[2] = g_m68k.d[6]; g_m68k.d[6] = _t; }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint32_t _t = g_m68k.a[2]; g_m68k.a[2] = g_m68k.a[3]; g_m68k.a[3] = _t; }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
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

/* $083D14-$083D78  (37 instructions, 100 bytes) */
void jt_083D14(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[0]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[2]); bus_write16(_ea, _tmp); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint32_t _ea = g_m68k.a[7]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[2]); bus_write16(_ea, _tmp); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[3]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[2]); bus_write16(_ea, _tmp); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint32_t _ea = g_m68k.a[1]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[2]); bus_write16(_ea, _tmp); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint32_t _ea = g_m68k.a[0]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[2]); bus_write16(_ea, _tmp); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[4]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[2]); bus_write16(_ea, _tmp); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint32_t _ea = g_m68k.a[2]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[2]); bus_write16(_ea, _tmp); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
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

/* $083D78-$083DB8  (17 instructions, 64 bytes) */
void jt_083D78(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = (g_m68k.a[6] + 0x1400); uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[2]); bus_write16(_ea, _tmp); }
    M68K_EOR16(g_m68k.d[0], g_m68k.d[6]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[3])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = (g_m68k.a[1] + 0x1400); uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[2]); bus_write16(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[7] + 0x1400); uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[2]); bus_write16(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.d[1] * 4); uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[2]); bus_write16(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = (g_m68k.a[2] + 0x1400); uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[2]); bus_write16(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[1] * 4); uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[2]); bus_write16(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = (g_m68k.a[6] + 0 + (int16_t)(uint16_t)g_m68k.d[1] * 4); uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[2]); bus_write16(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $083DDC-$083E04  (11 instructions, 40 bytes) */
void jt_083DDC(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND32(g_m68k.d[2], _postinc32(7));
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[3])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = 0x14000000; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = (g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.d[1] * 4); uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $083E40-$083EA4  (35 instructions, 100 bytes) */
void jt_083E40(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _t = g_m68k.a[2]; g_m68k.a[2] = g_m68k.a[0]; g_m68k.a[0] = _t; }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _t = g_m68k.d[2]; g_m68k.d[2] = g_m68k.d[4]; g_m68k.d[4] = _t; }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint32_t _t = g_m68k.a[2]; g_m68k.a[2] = g_m68k.a[1]; g_m68k.a[1] = _t; }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint32_t _t = g_m68k.a[2]; g_m68k.a[2] = g_m68k.a[6]; g_m68k.a[6] = _t; }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint32_t _ea = g_m68k.a[1]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[2]); bus_write16(_ea, _tmp); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint32_t _t = g_m68k.d[2]; g_m68k.d[2] = g_m68k.d[5]; g_m68k.d[5] = _t; }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_EOR16(g_m68k.d[0], g_m68k.d[6]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[2])); M68K_TST8((uint8_t)g_m68k.d[2]);
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

/* $083EA4-$083F08  (34 instructions, 100 bytes) */
void jt_083EA4(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[5]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[2]); bus_write16(_ea, _tmp); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint32_t _ea = g_m68k.a[4]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[2]); bus_write16(_ea, _tmp); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[6]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[2]); bus_write16(_ea, _tmp); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint32_t _ea = g_m68k.a[5]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[2]); bus_write16(_ea, _tmp); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint32_t _ea = g_m68k.a[3]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[2]); bus_write16(_ea, _tmp); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint32_t _ea = g_m68k.a[7]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[2]); bus_write16(_ea, _tmp); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint32_t _ea = g_m68k.a[7]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[2]); bus_write16(_ea, _tmp); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint32_t _ea = g_m68k.a[6]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[2]); bus_write16(_ea, _tmp); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
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

/* $083F08-$083F38  (12 instructions, 48 bytes) */
void jt_083F08(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = (g_m68k.a[3] + 0x1400); uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[2]); bus_write16(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.d[1] * 4); uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[2]); bus_write16(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = (g_m68k.a[4] + 0x1400); uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[2]); bus_write16(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[1] * 4); uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[2]); bus_write16(_ea, _tmp); }
    { uint32_t _ea = 0x001400; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[2]); bus_write16(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $083F6C-$083F90  (9 instructions, 36 bytes) */
void jt_083F6C(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
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

/* $083FD0-$084034  (31 instructions, 100 bytes) */
void jt_083FD0(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND16(g_m68k.d[2], bus_read16(g_m68k.a[0] + 0x1400));
    M68K_AND16(g_m68k.d[2], bus_read16(g_m68k.a[6] + 0x1400));
    M68K_AND16(g_m68k.d[2], _postinc16(4));
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_AND16(g_m68k.d[2], _predec16(1));
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_AND16(g_m68k.d[2], bus_read16(g_m68k.a[1] + 0x1400));
    M68K_AND16(g_m68k.d[2], bus_read16(g_m68k.a[7] + 0x1400));
    M68K_AND16(g_m68k.d[2], _postinc16(5));
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_AND16(g_m68k.d[2], _predec16(2));
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_AND16(g_m68k.d[2], bus_read16(g_m68k.a[2] + 0x1400));
    M68K_AND16(g_m68k.d[2], bus_read16(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[1] * 4));
    M68K_AND16(g_m68k.d[2], _postinc16(6));
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_AND16(g_m68k.d[2], _predec16(3));
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $084034-$084050  (7 instructions, 28 bytes) */
void jt_084034(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $084098-$0840CC  (16 instructions, 52 bytes) */
void jt_084098(void) {
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
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND32(g_m68k.d[2], bus_read32(g_m68k.a[1]));
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_AND32(g_m68k.d[2], bus_read32(g_m68k.a[7]));
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    /* WARNING: function did not end with RTS */
}

/* $0840FC-$084114  (6 instructions, 24 bytes) */
void jt_0840FC(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $084160-$0841C4  (32 instructions, 100 bytes) */
void jt_084160(void) {
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
    M68K_AND16(g_m68k.d[2], bus_read16(g_m68k.a[4] + 0x1400));
    M68K_AND16(g_m68k.d[2], bus_read16(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[1] * 4));
    M68K_AND16(g_m68k.d[2], _postinc16(7));
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_AND16(g_m68k.d[2], _predec16(5));
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND16(g_m68k.d[2], _predec16(0));
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_AND16(g_m68k.d[2], _predec16(6));
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_AND16(g_m68k.d[2], bus_read16(g_m68k.a[5] + 0x1400));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND16(g_m68k.d[2], _predec16(7));
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_EOR16(g_m68k.d[0], g_m68k.d[6]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[2])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0841C4-$08421C  (27 instructions, 88 bytes) */
void jt_0841C4(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND16(g_m68k.d[2], bus_read16(0x855de));
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
    M68K_AND16(g_m68k.d[2], bus_read16(g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.d[1] * 4));
    M68K_AND16(g_m68k.d[2], bus_read16(0x841fe + (int16_t)(uint16_t)g_m68k.d[1] * 4));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND16(g_m68k.d[2], bus_read16(g_m68k.a[6] + 0 + (int16_t)(uint16_t)g_m68k.d[1] * 4));
    M68K_AND16(g_m68k.d[2], 0x1400);
    M68K_AND32(g_m68k.d[2], g_m68k.d[3]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $084228-$084240  (6 instructions, 24 bytes) */
void jt_084228(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $08428C-$0842F0  (28 instructions, 100 bytes) */
void jt_08428C(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND32(g_m68k.d[2], _postinc32(4));
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_AND32(g_m68k.d[2], _predec32(3));
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND32(g_m68k.d[2], _postinc32(5));
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint32_t _ea = (g_m68k.a[2] + 0x1400); uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[2]); bus_write32(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = (g_m68k.a[0] + 0x1400); uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[2]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[3] + 0x1400); uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[2]); bus_write32(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = (g_m68k.a[1] + 0x1400); uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[2]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[4] + 0x1400); uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[2]); bus_write32(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0842F0-$084354  (25 instructions, 100 bytes) */
void jt_0842F0(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND32(g_m68k.d[2], bus_read32(g_m68k.a[5] + 0x1400));
    M68K_AND32(g_m68k.d[2], bus_read32(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[1] * 4));
    M68K_AND32(g_m68k.d[2], bus_read32(0x001400));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND32(g_m68k.d[2], bus_read32(g_m68k.a[6] + 0x1400));
    M68K_AND32(g_m68k.d[2], bus_read32(g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.d[1] * 4));
    M68K_AND32(g_m68k.d[2], bus_read32(0x14000000));
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = (g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.d[1] * 4); uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[2]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.d[1] * 4); uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[2]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = 0x14000000; uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[2]); bus_write32(_ea, _tmp); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint32_t _ea = (g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[1] * 4); uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[2]); bus_write32(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $084354-$084370  (9 instructions, 28 bytes) */
void jt_084354(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_EOR16(g_m68k.d[0], g_m68k.d[6]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[1])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_MULU(g_m68k.d[2], g_m68k.d[1]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    /* WARNING: function did not end with RTS */
}

/* $0843B8-$0843F4  (19 instructions, 60 bytes) */
void jt_0843B8(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULU(g_m68k.d[2], bus_read16(g_m68k.a[5]));
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_MULU(g_m68k.d[2], _postinc16(4));
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULU(g_m68k.d[2], bus_read16(g_m68k.a[1]));
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_MULU(g_m68k.d[2], bus_read16(g_m68k.a[6]));
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $08441C-$084480  (31 instructions, 100 bytes) */
void jt_08441C(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND32(g_m68k.d[2], _predec32(0));
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_AND32(g_m68k.d[2], _predec32(7));
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND32(g_m68k.d[2], _postinc32(3));
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_AND32(g_m68k.d[2], _predec32(1));
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_EOR16(g_m68k.d[0], g_m68k.d[6]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_AND32(g_m68k.d[2], _predec32(2));
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint32_t _ea = (g_m68k.a[5] + 0x1400); uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[2]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[1] * 4); uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[2]); bus_write32(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = (g_m68k.a[6] + 0x1400); uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[2]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[1] * 4); uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[2]); bus_write32(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = (g_m68k.a[7] + 0x1400); uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[2]); bus_write32(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $084480-$0844B0  (12 instructions, 48 bytes) */
void jt_084480(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = (g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.d[1] * 4); uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[2]); bus_write32(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND32(g_m68k.d[2], bus_read32(g_m68k.a[7] + 0x1400));
    M68K_AND32(g_m68k.d[2], bus_read32(g_m68k.a[6] + 0 + (int16_t)(uint16_t)g_m68k.d[1] * 4));
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0844E4-$084520  (21 instructions, 60 bytes) */
void jt_0844E4(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULU(g_m68k.d[2], g_m68k.d[5]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULU(g_m68k.d[2], g_m68k.d[6]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_MULS(g_m68k.d[2], g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_MULS(g_m68k.d[2], g_m68k.d[3]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_MULU(g_m68k.d[2], g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_MULU(g_m68k.d[2], g_m68k.d[7]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    /* WARNING: function did not end with RTS */
}

/* $084548-$084560  (7 instructions, 24 bytes) */
void jt_084548(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULU(g_m68k.d[2], bus_read16(g_m68k.a[2]));
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[2]);
    /* WARNING: function did not end with RTS */
}
