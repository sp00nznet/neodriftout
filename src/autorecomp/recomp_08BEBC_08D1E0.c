/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $08BEBC - $08D1E0 */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

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

/* $08C68C-$08C6F0  (31 instructions, 100 bytes) */
void jt_08C68C(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND32(g_m68k.d[6], _postinc32(7));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    M68K_AND32(g_m68k.d[6], _predec32(5));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND32(g_m68k.d[6], _predec32(0));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    M68K_AND32(g_m68k.d[6], _predec32(6));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND32(g_m68k.d[6], _predec32(1));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    M68K_AND32(g_m68k.d[6], _predec32(7));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $08C6F0-$08C754  (26 instructions, 100 bytes) */
void jt_08C6F0(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND32(g_m68k.d[6], bus_read32(g_m68k.a[3] + 0x1d00));
    M68K_AND32(g_m68k.d[6], bus_read32(g_m68k.a[6] + 0x1d00));
    M68K_AND32(g_m68k.d[6], bus_read32(g_m68k.a[4] + 0 + (int32_t)g_m68k.d[1] * 4));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_EOR16(g_m68k.d[0], g_m68k.d[6]);
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    M68K_AND32(g_m68k.d[6], bus_read32(g_m68k.a[7] + 0x1d00));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND32(g_m68k.d[6], bus_read32(g_m68k.a[0] + 0 + (int32_t)g_m68k.d[1] * 4));
    M68K_AND32(g_m68k.d[6], bus_read32(g_m68k.a[5] + 0 + (int32_t)g_m68k.d[1] * 4));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $08C754-$08C77C  (11 instructions, 40 bytes) */
void jt_08C754(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND32(g_m68k.d[6], bus_read32(0x1D00CCBE));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    M68K_MULU(g_m68k.d[6], g_m68k.d[5]);
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND32(g_m68k.d[6], bus_read32(0x8e47a));
    /* WARNING: function did not end with RTS */
}

/* $08C7B8-$08C7DC  (11 instructions, 36 bytes) */
void jt_08C7B8(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULU(g_m68k.d[6], bus_read16(g_m68k.a[3]));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    M68K_MULU(g_m68k.d[6], _postinc16(1));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $08C81C-$08C880  (29 instructions, 100 bytes) */
void jt_08C81C(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND32(g_m68k.d[6], _predec32(2));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND32(g_m68k.d[6], _postinc32(6));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    M68K_AND32(g_m68k.d[6], _predec32(3));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND32(g_m68k.d[6], bus_read32(g_m68k.a[0] + 0x1d00));
    M68K_AND32(g_m68k.d[6], bus_read32(g_m68k.a[2] + 0x1d00));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND32(g_m68k.d[6], _predec32(4));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    M68K_AND32(g_m68k.d[6], bus_read32(g_m68k.a[1] + 0x1d00));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $08C880-$08C8E4  (27 instructions, 100 bytes) */
void jt_08C880(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND32(g_m68k.d[6], bus_read32(g_m68k.a[1] + 0 + (int32_t)g_m68k.d[1] * 4));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND32(g_m68k.d[6], bus_read32(g_m68k.a[4] + 0x1d00));
    M68K_AND32(g_m68k.d[6], bus_read32(g_m68k.a[2] + 0 + (int32_t)g_m68k.d[1] * 4));
    M68K_AND16(g_m68k.d[2], _postinc16(1));
    { uint8_t _mv = (uint8_t)(g_m68k.d[3]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    M68K_AND16(g_m68k.d[2], _postinc16(1));
    { uint8_t _mv = (uint8_t)(g_m68k.d[1]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    M68K_AND32(g_m68k.d[6], bus_read32(g_m68k.a[5] + 0x1d00));
    M68K_AND32(g_m68k.d[6], bus_read32(g_m68k.a[3] + 0 + (int32_t)g_m68k.d[1] * 4));
    M68K_AND32(g_m68k.d[6], bus_read32(g_m68k.a[6] + 0 + (int32_t)g_m68k.d[1] * 4));
    M68K_AND32(g_m68k.d[6], bus_read32(0x001D00));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND32(g_m68k.d[6], bus_read32(g_m68k.a[7] + 0 + (int32_t)g_m68k.d[1] * 4));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $08C8E4-$08C910  (12 instructions, 44 bytes) */
void jt_08C8E4(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND32(g_m68k.d[6], /* UNHANDLED_READ: (a16, d1.l * 4) */ 0);
    M68K_MULU(g_m68k.d[6], g_m68k.d[2]);
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND32(g_m68k.d[6], 0x1d00ccc3);
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $08C948-$08C9AC  (37 instructions, 100 bytes) */
void jt_08C948(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULU(g_m68k.d[6], bus_read16(g_m68k.a[0]));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    M68K_MULU(g_m68k.d[6], bus_read16(g_m68k.a[6]));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULU(g_m68k.d[6], bus_read16(g_m68k.a[1]));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    M68K_MULU(g_m68k.d[6], bus_read16(g_m68k.a[7]));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    M68K_MULU(g_m68k.d[6], _postinc16(4));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    M68K_MULU(g_m68k.d[6], _predec16(1));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    M68K_MULU(g_m68k.d[6], bus_read16(g_m68k.a[2]));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    M68K_MULU(g_m68k.d[6], _postinc16(0));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    M68K_MULU(g_m68k.d[6], _postinc16(5));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    M68K_MULU(g_m68k.d[6], _predec16(2));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULU(g_m68k.d[6], _postinc16(6));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    M68K_MULU(g_m68k.d[6], _predec16(3));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $08C9AC-$08CA10  (28 instructions, 100 bytes) */
void jt_08C9AC(void) {
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
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    M68K_MULU(g_m68k.d[6], _predec16(7));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    M68K_MULU(g_m68k.d[6], bus_read16(g_m68k.a[4] + 0x1d00));
    M68K_MULU(g_m68k.d[6], bus_read16(g_m68k.a[0] + 0 + (int32_t)g_m68k.d[1] * 4));
    M68K_MULU(g_m68k.d[6], _predec16(5));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    M68K_MULU(g_m68k.d[6], bus_read16(g_m68k.a[0] + 0x1d00));
    M68K_MULU(g_m68k.d[6], bus_read16(g_m68k.a[5] + 0x1d00));
    M68K_MULU(g_m68k.d[6], bus_read16(g_m68k.a[1] + 0 + (int32_t)g_m68k.d[1] * 4));
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

/* $08CA10-$08CA2C  (7 instructions, 28 bytes) */
void jt_08CA10(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $08CA74-$08CAD8  (37 instructions, 100 bytes) */
void jt_08CA74(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    /* TODO $08CA98: abcd.b d7, d6  [CD 07] */
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    /* TODO $08CA9C: abcd.b -(a4), -(a6)  [CD 0C] */
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    /* TODO $08CAA8: abcd.b -(a0), -(a6)  [CD 08] */
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    /* TODO $08CAAC: abcd.b -(a5), -(a6)  [CD 0D] */
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    /* TODO $08CAB8: abcd.b -(a1), -(a6)  [CD 09] */
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    /* TODO $08CABC: abcd.b -(a6), -(a6)  [CD 0E] */
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $08CAD8-$08CB3C  (33 instructions, 100 bytes) */
void jt_08CAD8(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _t = g_m68k.d[3]; g_m68k.d[3] = g_m68k.d[0]; g_m68k.d[0] = _t; }
    { uint8_t _mv = (uint8_t)(g_m68k.d[2]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    M68K_AND32(g_m68k.d[3], bus_read32(g_m68k.a[3]));
    { uint8_t _mv = (uint8_t)(g_m68k.d[1]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = g_m68k.a[5]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = (g_m68k.a[1] + 0x1d00); uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[5]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = (g_m68k.a[2] + 0x1d00); uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $08CB3C-$08CBA0  (26 instructions, 100 bytes) */
void jt_08CB3C(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULU(g_m68k.d[6], bus_read16(g_m68k.a[1] + 0x1d00));
    M68K_MULU(g_m68k.d[6], bus_read16(g_m68k.a[6] + 0x1d00));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULU(g_m68k.d[6], bus_read16(g_m68k.a[7] + 0x1d00));
    M68K_MULU(g_m68k.d[6], bus_read16(g_m68k.a[2] + 0 + (int32_t)g_m68k.d[1] * 4));
    M68K_MULU(g_m68k.d[6], _predec16(6));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    M68K_MULU(g_m68k.d[6], bus_read16(g_m68k.a[2] + 0x1d00));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULU(g_m68k.d[6], bus_read16(g_m68k.a[3] + 0x1d00));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $08CBA0-$08CC04  (31 instructions, 100 bytes) */
void jt_08CBA0(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULU(g_m68k.d[6], bus_read16(0x8e8ba));
    /* TODO $08CBBC: abcd.b d0, d6  [CD 00] */
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    /* TODO $08CBC0: abcd.b d5, d6  [CD 05] */
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $08CBCC: abcd.b d1, d6  [CD 01] */
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    /* TODO $08CBD0: abcd.b d6, d6  [CD 06] */
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    M68K_MULU(g_m68k.d[6], bus_read16(g_m68k.a[6] + 0 + (int32_t)g_m68k.d[1] * 4));
    M68K_MULU(g_m68k.d[6], /* UNHANDLED_READ: (a16, d1.l * 4) */ 0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND16(g_m68k.d[2], _postinc16(3));
    { uint8_t _mv = (uint8_t)(g_m68k.d[2]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    M68K_MULU(g_m68k.d[6], 0x1d00);
    /* TODO $08CBEC: abcd.b d2, d6  [CD 02] */
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $08CC04-$08CC68  (35 instructions, 100 bytes) */
void jt_08CC04(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $08CC1C: abcd.b -(a7), -(a6)  [CD 0F] */
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = g_m68k.a[5]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    /* TODO $08CC38: abcd.b -(a2), -(a6)  [CD 0A] */
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $08CC48: abcd.b -(a3), -(a6)  [CD 0B] */
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $08CC68-$08CCCC  (30 instructions, 100 bytes) */
void jt_08CC68(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND8(g_m68k.d[5], bus_read8(0x1D000000));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = (g_m68k.a[0] + 0x1d00); uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $08CCCC-$08CD04  (14 instructions, 56 bytes) */
void jt_08CCCC(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = (g_m68k.a[4] + 0x1d00); uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[1] + 0 + (int32_t)g_m68k.d[1] * 4); uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $08CD30-$08CD58  (10 instructions, 40 bytes) */
void jt_08CD30(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = (g_m68k.a[6] + 0 + (int32_t)g_m68k.d[1] * 4); uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x1D00CD3E; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $08CD94-$08CDF8  (35 instructions, 100 bytes) */
void jt_08CD94(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _t = g_m68k.d[6]; g_m68k.d[6] = g_m68k.d[5]; g_m68k.d[5] = _t; }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    { uint32_t _t = g_m68k.a[6]; g_m68k.a[6] = g_m68k.a[2]; g_m68k.a[2] = _t; }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = g_m68k.a[0]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _t = g_m68k.d[6]; g_m68k.d[6] = g_m68k.d[6]; g_m68k.d[6] = _t; }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    { uint32_t _t = g_m68k.a[6]; g_m68k.a[6] = g_m68k.a[3]; g_m68k.a[3] = _t; }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[1]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    M68K_EOR16(g_m68k.d[0], g_m68k.d[6]);
    { uint8_t _mv = (uint8_t)(g_m68k.d[3]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _t = g_m68k.a[6]; g_m68k.a[6] = g_m68k.a[4]; g_m68k.a[4] = _t; }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = g_m68k.a[2]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    M68K_MULU(g_m68k.d[2], bus_read16(g_m68k.a[2]));
    { uint8_t _mv = (uint8_t)(g_m68k.d[3]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $08CDF8-$08CE5C  (33 instructions, 100 bytes) */
void jt_08CDF8(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[0]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = g_m68k.a[5]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = g_m68k.a[3]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[1]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = g_m68k.a[6]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[4]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = (g_m68k.a[1] + 0x1d00); uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[7]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = g_m68k.a[5]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    M68K_AND16(g_m68k.d[2], bus_read16(g_m68k.a[7] + 0x1d00));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $08CE5C-$08CEC0  (25 instructions, 100 bytes) */
void jt_08CE5C(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = (g_m68k.a[6] + 0x1d00); uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = (g_m68k.a[3] + 0x1d00); uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[7] + 0x1d00); uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = (g_m68k.a[3] + 0 + (int32_t)g_m68k.d[1] * 4); uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[5] + 0 + (int32_t)g_m68k.d[1] * 4); uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = (g_m68k.a[0] + 0 + (int32_t)g_m68k.d[1] * 4); uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[4] + 0 + (int32_t)g_m68k.d[1] * 4); uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $08CEC0-$08CEE8  (9 instructions, 40 bytes) */
void jt_08CEC0(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = /* UNHANDLED_ADDR: ([a1, d1.l * 4], $cd3c1d00) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = (g_m68k.a[7] + 0 + (int32_t)g_m68k.d[1] * 4); uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $08CF24-$08CF88  (36 instructions, 100 bytes) */
void jt_08CF24(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _t = g_m68k.d[6]; g_m68k.d[6] = g_m68k.d[7]; g_m68k.d[7] = _t; }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    { uint32_t _t = g_m68k.a[6]; g_m68k.a[6] = g_m68k.a[5]; g_m68k.a[5] = _t; }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _t = g_m68k.a[6]; g_m68k.a[6] = g_m68k.a[0]; g_m68k.a[0] = _t; }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    { uint32_t _t = g_m68k.a[6]; g_m68k.a[6] = g_m68k.a[6]; g_m68k.a[6] = _t; }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = g_m68k.a[3]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = g_m68k.a[6]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    { uint32_t _t = g_m68k.a[6]; g_m68k.a[6] = g_m68k.a[1]; g_m68k.a[1] = _t; }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    { uint32_t _t = g_m68k.a[6]; g_m68k.a[6] = g_m68k.a[7]; g_m68k.a[7] = _t; }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = g_m68k.a[4]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = g_m68k.a[7]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[5]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $08CF88-$08CFEC  (34 instructions, 100 bytes) */
void jt_08CF88(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[2]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = g_m68k.a[0]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[3]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = g_m68k.a[1]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = g_m68k.a[6]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = (g_m68k.a[2] + 0x1d00); uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[4]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = g_m68k.a[2]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = g_m68k.a[7]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    M68K_AND16(g_m68k.d[2], bus_read16(g_m68k.a[7] + 0x1d01));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = (g_m68k.a[0] + 0x1d00); uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    M68K_MULU(g_m68k.d[2], bus_read16(g_m68k.a[2]));
    { uint8_t _mv = (uint8_t)(g_m68k.d[3]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $08CFEC-$08D01C  (15 instructions, 48 bytes) */
void jt_08CFEC(void) {
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
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    M68K_AND16(g_m68k.d[6], _postinc16(6));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    M68K_AND16(g_m68k.d[6], _predec16(3));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $08D050-$08D0B4  (27 instructions, 100 bytes) */
void jt_08D050(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND16(g_m68k.d[6], bus_read16(g_m68k.a[4] + 0 + (int32_t)g_m68k.d[1] * 4));
    M68K_MULU(g_m68k.d[2], bus_read16(g_m68k.a[2]));
    { uint8_t _mv = (uint8_t)(g_m68k.d[2]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    M68K_AND16(g_m68k.d[6], bus_read16(g_m68k.a[1] + 0x1d00));
    M68K_AND16(g_m68k.d[6], bus_read16(g_m68k.a[6] + 0x1d00));
    M68K_AND16(g_m68k.d[6], bus_read16(g_m68k.a[5] + 0 + (int32_t)g_m68k.d[1] * 4));
    M68K_MULS(g_m68k.d[2], bus_read16(g_m68k.a[4]));
    { uint8_t _mv = (uint8_t)(g_m68k.d[3]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    M68K_AND16(g_m68k.d[6], bus_read16(g_m68k.a[2] + 0x1d00));
    M68K_AND16(g_m68k.d[6], bus_read16(g_m68k.a[7] + 0x1d00));
    M68K_AND16(g_m68k.d[6], bus_read16(g_m68k.a[6] + 0 + (int32_t)g_m68k.d[1] * 4));
    M68K_AND16(g_m68k.d[6], bus_read16(0x8ed92));
    M68K_AND16(g_m68k.d[6], bus_read16(g_m68k.a[3] + 0x1d00));
    M68K_AND16(g_m68k.d[6], bus_read16(g_m68k.a[0] + 0 + (int32_t)g_m68k.d[1] * 4));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $08D0B4-$08D0E0  (13 instructions, 44 bytes) */
void jt_08D0B4(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND32(g_m68k.d[6], g_m68k.d[7]);
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND16(g_m68k.d[6], 0x1d00);
    M68K_AND32(g_m68k.d[6], g_m68k.d[1]);
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $08D118-$08D13C  (10 instructions, 36 bytes) */
void jt_08D118(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND32(g_m68k.d[6], bus_read32(g_m68k.a[7]));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $08D16E-$08D17C  (4 instructions, 14 bytes) */
void jt_08D16E(void) {
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $08D17C-$08D1E0  (31 instructions, 100 bytes) */
void jt_08D17C(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND16(g_m68k.d[6], _predec16(0));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    M68K_AND16(g_m68k.d[6], _predec16(5));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND16(g_m68k.d[6], _predec16(6));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    M68K_AND16(g_m68k.d[6], bus_read16(g_m68k.a[0] + 0x1d00));
    M68K_AND16(g_m68k.d[6], _postinc16(5));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    M68K_AND16(g_m68k.d[6], _predec16(1));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND16(g_m68k.d[6], _predec16(2));
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}
