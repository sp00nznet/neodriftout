/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $0997A4 - $09ABF0 */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

/* $0997A4-$0997AA  (2 instructions, 6 bytes) */
void jt_0997A4(void) {
    M68K_OR8(g_m68k.d[6], 0xa);
    M68K_CMP16(g_m68k.d[6], _postinc16(3));
    /* WARNING: function did not end with RTS */
}

/* $099818-$09982E  (6 instructions, 22 bytes) */
void jt_099818(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP16(g_m68k.d[6], _postinc16(7));
    /* WARNING: function did not end with RTS */
}

/* $099898-$09989E  (2 instructions, 6 bytes) */
void jt_099898(void) {
    M68K_OR8(g_m68k.d[4], 0xa);
    M68K_CMP16(g_m68k.d[6], _postinc16(4));
    /* WARNING: function did not end with RTS */
}

/* $09993C-$09994E  (5 instructions, 18 bytes) */
void jt_09993C(void) {
    M68K_OR8(g_m68k.d[2], 0xa);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP16(g_m68k.d[6], _postinc16(7));
    /* WARNING: function did not end with RTS */
}

/* $099990-$099996  (2 instructions, 6 bytes) */
void jt_099990(void) {
    M68K_OR8(g_m68k.d[4], 0xa);
    M68K_CMP16(g_m68k.d[6], _postinc16(4));
    /* WARNING: function did not end with RTS */
}

/* $099A34-$099A3A  (2 instructions, 6 bytes) */
void jt_099A34(void) {
    M68K_OR8(g_m68k.d[4], 0x4);
    M68K_CMP16(g_m68k.d[6], _postinc16(5));
    /* WARNING: function did not end with RTS */
}

/* $099A78-$099A7E  (2 instructions, 6 bytes) */
void jt_099A78(void) {
    M68K_OR8(g_m68k.d[1], 0x2);
    M68K_CMP16(g_m68k.d[6], _predec16(1));
    /* WARNING: function did not end with RTS */
}

/* $099A84-$099A8A  (2 instructions, 6 bytes) */
void jt_099A84(void) {
    M68K_OR8(g_m68k.d[4], 0x8);
    M68K_CMP16(g_m68k.d[6], _predec16(7));
    /* WARNING: function did not end with RTS */
}

/* $099B08-$099B6E  (26 instructions, 102 bytes) */
void jt_099B08(void) {
    M68K_OR8(g_m68k.d[4], 0x8);
    M68K_CMP16(g_m68k.d[6], bus_read16(g_m68k.a[2] + (-0x59ff)));
    M68K_CMP16(g_m68k.d[6], bus_read16(g_m68k.a[1] + 0x1 + (int16_t)(uint16_t)g_m68k.a[2]));
    M68K_CMP16(g_m68k.d[6], bus_read16(g_m68k.a[7] + 0x1 + (int16_t)(uint16_t)g_m68k.a[2]));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP16(g_m68k.d[6], bus_read16(g_m68k.a[1] + (-0x59ff)));
    M68K_CMP16(g_m68k.d[6], bus_read16(g_m68k.a[0] + 0x1 + (int16_t)(uint16_t)g_m68k.a[2]));
    M68K_CMP16(g_m68k.d[6], bus_read16(g_m68k.a[6] + 0x1 + (int16_t)(uint16_t)g_m68k.a[2]));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP16(g_m68k.d[6], bus_read16(g_m68k.a[0] + (-0x59ff)));
    M68K_CMP16(g_m68k.d[6], bus_read16(g_m68k.a[7] + (-0x59ff)));
    M68K_CMP16(g_m68k.d[6], bus_read16(g_m68k.a[5] + 0x1 + (int16_t)(uint16_t)g_m68k.a[2]));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP16(g_m68k.d[6], _predec16(7));
    /* WARNING: function did not end with RTS */
}

/* $099B8C-$099BAC  (8 instructions, 32 bytes) */
void jt_099B8C(void) {
    M68K_OR8(g_m68k.d[3], 0x8);
    M68K_CMP16(g_m68k.d[6], bus_read16(g_m68k.a[3] + (-0x5a00)));
    M68K_CMP16(g_m68k.d[6], bus_read16(g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.a[2] * 8));
    M68K_CMP16(g_m68k.d[6], bus_read16(0x00A600));
    M68K_CMP16(g_m68k.d[6], bus_read16(0x99b9e + (int16_t)(uint16_t)g_m68k.a[2] * 8));
    M68K_CMP16(g_m68k.d[6], bus_read16(0x99ba2 + (int16_t)(uint16_t)g_m68k.a[2] * 8));
    M68K_CMP16(g_m68k.d[6], bus_read16(0x99ba6 + (int16_t)(uint16_t)g_m68k.a[2] * 8));
    M68K_CMP16(g_m68k.d[6], bus_read16(0x99baa + (int16_t)(uint16_t)g_m68k.a[2] * 8));
    /* WARNING: function did not end with RTS */
}

/* $099BF0-$099C22  (12 instructions, 50 bytes) */
void jt_099BF0(void) {
    M68K_OR8(g_m68k.d[3], 0x8);
    M68K_CMP16(g_m68k.d[6], bus_read16(g_m68k.a[5] + (-0x59ff)));
    M68K_CMP16(g_m68k.d[6], bus_read16(g_m68k.a[4] + 0x1 + (int16_t)(uint16_t)g_m68k.a[2]));
    M68K_CMP16(g_m68k.d[6], bus_read16(0x941ff));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP16(g_m68k.d[6], bus_read16(g_m68k.a[4] + (-0x59ff)));
    M68K_CMP16(g_m68k.d[6], bus_read16(g_m68k.a[3] + 0x1 + (int16_t)(uint16_t)g_m68k.a[2]));
    M68K_CMP16(g_m68k.d[6], bus_read16(0xA601BC7C));
    /* WARNING: function did not end with RTS */
}

/* $099C54-$099C58  (1 instructions, 4 bytes) */
void jt_099C54(void) {
    M68K_OR8(g_m68k.d[6], 0x9);
    /* WARNING: function did not end with RTS */
}

/* $099D30-$099DF4  (70 instructions, 196 bytes) */
void jt_099D30(void) {
    M68K_OR8(g_m68k.d[6], 0x8);
    M68K_CMP32(g_m68k.d[6], g_m68k.d[0]);
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    M68K_CMP32(g_m68k.d[6], g_m68k.d[4]);
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    M68K_CMP32(g_m68k.d[6], g_m68k.a[1]);
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    M68K_CMP32(g_m68k.d[6], bus_read32(g_m68k.a[0]));
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP32(g_m68k.d[6], g_m68k.d[5]);
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    M68K_CMP32(g_m68k.d[6], g_m68k.a[2]);
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    M68K_CMP32(g_m68k.d[6], bus_read32(g_m68k.a[1]));
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    M68K_CMP32(g_m68k.d[6], _postinc32(1));
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP32(g_m68k.d[6], g_m68k.a[3]);
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    M68K_CMP32(g_m68k.d[6], bus_read32(g_m68k.a[2]));
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    M68K_CMP32(g_m68k.d[6], _postinc32(2));
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    M68K_CMP32(g_m68k.d[6], _predec32(3));
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP32(g_m68k.d[6], bus_read32(g_m68k.a[3]));
    M68K_SUBX8(g_m68k.d[5], g_m68k.d[0]);
    M68K_CMP32(g_m68k.d[6], _postinc32(3));
    M68K_SUBX8(g_m68k.d[5], g_m68k.d[0]);
    M68K_CMP32(g_m68k.d[6], _predec32(4));
    M68K_SUBX8(g_m68k.d[5], g_m68k.d[0]);
    M68K_CMP32(g_m68k.d[6], bus_read32(g_m68k.a[2] + (-0x6500)));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP32(g_m68k.d[6], _postinc32(4));
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    M68K_CMP32(g_m68k.d[6], _predec32(5));
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    M68K_CMP32(g_m68k.d[6], bus_read32(g_m68k.a[3] + (-0x6600)));
    M68K_CMP32(g_m68k.d[6], bus_read32(g_m68k.a[6] + (-0x6600)));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP32(g_m68k.d[6], _postinc32(5));
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    M68K_CMP32(g_m68k.d[6], g_m68k.d[1]);
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    M68K_CMP32(g_m68k.d[6], g_m68k.d[1]);
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    M68K_CMP32(g_m68k.d[6], g_m68k.d[1]);
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $099DF4-$099E10  (13 instructions, 28 bytes) */
void jt_099DF4(void) {
    M68K_OR8(g_m68k.d[1], 0x6);
    M68K_CMP32(g_m68k.d[6], g_m68k.d[1]);
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    M68K_CMP32(g_m68k.d[6], g_m68k.d[6]);
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    M68K_CMP32(g_m68k.d[6], g_m68k.a[4]);
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    M68K_CMP32(g_m68k.d[6], g_m68k.d[1]);
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    M68K_CMP32(g_m68k.d[6], g_m68k.d[1]);
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    M68K_CMP32(g_m68k.d[6], _predec32(6));
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $099E10-$099E34  (9 instructions, 36 bytes) */
void jt_099E10(void) {
    M68K_OR8(g_m68k.d[1], 0x8);
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

/* $099E34-$099E50  (10 instructions, 28 bytes) */
void jt_099E34(void) {
    M68K_OR8(g_m68k.d[1], 0x6);
    { uint32_t _ea = g_m68k.a[1]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[2]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[6] + (-0x6600)); uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = 0x9A00BB9A; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[3]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $099E50-$099E6C  (10 instructions, 28 bytes) */
void jt_099E50(void) {
    M68K_OR8(g_m68k.d[1], 0x6);
    { uint32_t _ea = g_m68k.a[1]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    M68K_SUBX8(g_m68k.d[5], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[2]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    M68K_SUBX8(g_m68k.d[5], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[6] + (-0x6500)); uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = 0x9B00BB9A; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    M68K_SUBX8(g_m68k.d[5], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[3]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    M68K_SUBX8(g_m68k.d[5], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $099E6C-$099E88  (10 instructions, 28 bytes) */
void jt_099E6C(void) {
    M68K_OR8(g_m68k.d[1], 0x6);
    { uint32_t _ea = g_m68k.a[1]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[6], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[2]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[6], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[6] + (-0x6400)); uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = 0x9C00BB9A; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[6], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[3]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[6], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $099E88-$099EA4  (10 instructions, 28 bytes) */
void jt_099E88(void) {
    M68K_OR8(g_m68k.d[1], 0x6);
    { uint32_t _ea = g_m68k.a[1]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    M68K_SUBX8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[2]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    M68K_SUBX8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[6] + (-0x6700)); uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = 0x9900BB9A; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    M68K_SUBX8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[3]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    M68K_SUBX8(g_m68k.d[4], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $099EA4-$099EB8  (9 instructions, 20 bytes) */
void jt_099EA4(void) {
    M68K_OR8(g_m68k.d[1], 0x6);
    { uint32_t _ea = g_m68k.a[2]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    M68K_SUBX8(g_m68k.d[5], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[3]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    M68K_SUBX8(g_m68k.d[5], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[2]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    M68K_SUBX8(g_m68k.d[5], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[3]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    M68K_SUBX8(g_m68k.d[5], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $099EC0-$099EC4  (1 instructions, 4 bytes) */
void jt_099EC0(void) {
    M68K_OR8(g_m68k.d[6], 0x9);
    /* WARNING: function did not end with RTS */
}

/* $099F9C-$09A00C  (30 instructions, 112 bytes) */
void jt_099F9C(void) {
    M68K_OR8(g_m68k.d[6], 0x8);
    M68K_CMP32(g_m68k.d[6], bus_read32(g_m68k.a[1] + 0 + (int32_t)g_m68k.a[1] * 2));
    M68K_CMP32(g_m68k.d[6], bus_read32(g_m68k.a[2] + 0 + (int32_t)g_m68k.a[1] * 2));
    M68K_CMP32(g_m68k.d[6], bus_read32(g_m68k.a[5] + 0 + (int32_t)g_m68k.a[1] * 2));
    M68K_CMP32(g_m68k.d[6], bus_read32(0x939ae));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP32(g_m68k.d[6], bus_read32(g_m68k.a[3] + 0 + (int32_t)g_m68k.a[1] * 2));
    M68K_CMP32(g_m68k.d[6], bus_read32(g_m68k.a[6] + 0 + (int32_t)g_m68k.a[1] * 2));
    M68K_CMP32(g_m68k.d[6], bus_read32(0x99fce + (int32_t)g_m68k.a[1] * 2));
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(g_m68k.d[0]));
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP32(g_m68k.d[6], bus_read32(g_m68k.a[7] + 0 + (int32_t)g_m68k.a[1] * 2));
    M68K_CMP32(g_m68k.d[6], 0x9a00bcc1);
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(g_m68k.d[6]));
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $09A060-$09A07C  (13 instructions, 28 bytes) */
void jt_09A060(void) {
    M68K_OR8(g_m68k.d[1], 0x6);
    M68K_CMP32(g_m68k.d[6], g_m68k.d[1]);
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    M68K_CMP32(g_m68k.d[6], g_m68k.d[6]);
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    M68K_CMP32(g_m68k.d[6], g_m68k.a[4]);
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    M68K_CMP32(g_m68k.d[6], g_m68k.d[1]);
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    M68K_CMP32(g_m68k.d[6], g_m68k.d[1]);
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    M68K_CMP32(g_m68k.d[6], _predec32(6));
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $09A07C-$09A0A0  (9 instructions, 36 bytes) */
void jt_09A07C(void) {
    M68K_OR8(g_m68k.d[1], 0x8);
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

/* $09A0A0-$09A0C8  (13 instructions, 40 bytes) */
void jt_09A0A0(void) {
    M68K_OR8(g_m68k.d[6], 0x5);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(bus_read16(g_m68k.a[1])));
    /* TODO $09A0B2: sbcd.b d0, d1  [83 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(bus_read16(g_m68k.a[1])));
    /* TODO $09A0C2: sbcd.b d0, d1  [83 00] */
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(_postinc16(4)));
    /* TODO $09A0C6: sbcd.b d0, d1  [83 00] */
    /* WARNING: function did not end with RTS */
}

/* $09A0C8-$09A11C  (35 instructions, 84 bytes) */
void jt_09A0C8(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(bus_read16(g_m68k.a[1])));
    /* TODO $09A0D2: sbcd.b d0, d1  [83 00] */
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(bus_read16(g_m68k.a[6])));
    /* TODO $09A0D6: sbcd.b d0, d1  [83 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(g_m68k.a[6]));
    /* TODO $09A0E2: sbcd.b d0, d1  [83 00] */
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(bus_read16(g_m68k.a[2])));
    /* TODO $09A0E6: sbcd.b d0, d1  [83 00] */
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(bus_read16(g_m68k.a[7])));
    /* TODO $09A0EA: sbcd.b d0, d1  [83 00] */
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(_postinc16(5)));
    /* TODO $09A0EE: sbcd.b d0, d1  [83 00] */
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(_predec16(2)));
    /* TODO $09A0F2: sbcd.b d0, d1  [83 00] */
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(g_m68k.a[7]));
    /* TODO $09A0F6: sbcd.b d0, d1  [83 00] */
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(bus_read16(g_m68k.a[3])));
    /* TODO $09A0FA: sbcd.b d0, d1  [83 00] */
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(_postinc16(0)));
    /* TODO $09A0FE: sbcd.b d0, d1  [83 00] */
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(_postinc16(6)));
    /* TODO $09A102: sbcd.b d0, d1  [83 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(bus_read16(g_m68k.a[4])));
    /* TODO $09A10E: sbcd.b d0, d1  [83 00] */
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(_postinc16(1)));
    /* TODO $09A112: sbcd.b d0, d1  [83 00] */
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(_postinc16(7)));
    /* TODO $09A116: sbcd.b d0, d1  [83 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $09A11C-$09A198  (48 instructions, 124 bytes) */
void jt_09A11C(void) {
    M68K_OR8(g_m68k.d[6], 0x5);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(bus_read16(g_m68k.a[4])));
    /* TODO $09A126: sbcd.b d1, d1  [83 01] */
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(_postinc16(2)));
    /* TODO $09A12A: sbcd.b d0, d1  [83 00] */
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(_predec16(0)));
    /* TODO $09A12E: sbcd.b d0, d1  [83 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(g_m68k.a[7]));
    /* TODO $09A136: sbcd.b d1, d1  [83 01] */
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(bus_read16(g_m68k.a[3])));
    /* TODO $09A13A: sbcd.b d1, d1  [83 01] */
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(_postinc16(0)));
    /* TODO $09A13E: sbcd.b d1, d1  [83 01] */
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(_postinc16(6)));
    /* TODO $09A142: sbcd.b d1, d1  [83 01] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(bus_read16(g_m68k.a[0])));
    /* TODO $09A14A: sbcd.b d0, d1  [83 00] */
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(bus_read16(g_m68k.a[5])));
    /* TODO $09A14E: sbcd.b d0, d1  [83 00] */
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(_postinc16(3)));
    /* TODO $09A152: sbcd.b d0, d1  [83 00] */
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(_predec16(1)));
    /* TODO $09A156: sbcd.b d0, d1  [83 00] */
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(_predec16(3)));
    /* TODO $09A15A: sbcd.b d0, d1  [83 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(bus_read16(g_m68k.a[1])));
    /* TODO $09A162: sbcd.b d1, d1  [83 01] */
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(bus_read16(g_m68k.a[6])));
    /* TODO $09A166: sbcd.b d1, d1  [83 01] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(bus_read16(g_m68k.a[1])));
    /* TODO $09A17A: sbcd.b d1, d1  [83 01] */
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(_postinc16(4)));
    /* TODO $09A17E: sbcd.b d1, d1  [83 01] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(bus_read16(g_m68k.a[1])));
    /* TODO $09A192: sbcd.b d1, d1  [83 01] */
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $09A198-$09A1AC  (9 instructions, 20 bytes) */
void jt_09A198(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(_predec16(4)));
    /* TODO $09A19E: sbcd.b d0, d1  [83 00] */
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(_predec16(0)));
    /* TODO $09A1A2: sbcd.b d0, d1  [83 00] */
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(_postinc16(0)));
    /* TODO $09A1A6: sbcd.b d1, d1  [83 01] */
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(_postinc16(6)));
    /* TODO $09A1AA: sbcd.b d1, d1  [83 01] */
    /* WARNING: function did not end with RTS */
}

/* $09A1AC-$09A1D4  (14 instructions, 40 bytes) */
void jt_09A1AC(void) {
    M68K_OR8(g_m68k.d[6], 0x7);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(_predec16(5)));
    M68K_SUBX8(g_m68k.d[4], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(0x9900));
    /* TODO $09A1BC: cmpm.b (a2)+, (a6)+  [BD 0A] */
    M68K_SUBX8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    M68K_SUBX8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    M68K_SUBX8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[3] + 0 + (int32_t)g_m68k.a[1]); uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(bus_read16(g_m68k.a[7] + (-0x6700))));
    /* WARNING: function did not end with RTS */
}

/* $09A258-$09A2B8  (33 instructions, 96 bytes) */
void jt_09A258(void) {
    M68K_OR8(g_m68k.d[6], 0x8);
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(bus_read16(g_m68k.a[0] + (-0x6800))));
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(bus_read16(g_m68k.a[4] + 0 + (int32_t)g_m68k.a[1])));
    M68K_EOR8(g_m68k.d[2], g_m68k.d[6]);
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[3] + (-0x6800)); uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(bus_read16(g_m68k.a[1] + (-0x6800))));
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(bus_read16(g_m68k.a[5] + 0 + (int32_t)g_m68k.a[1])));
    M68K_EOR8(g_m68k.d[3], g_m68k.d[6]);
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[4] + (-0x6800)); uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[4] + 0 + (int32_t)g_m68k.a[1]); uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(bus_read16(g_m68k.a[2] + (-0x6800))));
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(bus_read16(g_m68k.a[6] + 0 + (int32_t)g_m68k.a[1])));
    M68K_EOR8(g_m68k.d[4], g_m68k.d[6]);
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[5] + (-0x6800)); uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[5] + 0 + (int32_t)g_m68k.a[1]); uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $09A31C-$09A35C  (22 instructions, 64 bytes) */
void jt_09A31C(void) {
    M68K_OR8(g_m68k.d[4], 0x8);
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(bus_read16(g_m68k.a[6] + (-0x6800))));
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(bus_read16(0x93b26)));
    /* TODO $09A328: cmpm.b (a0)+, (a6)+  [BD 08] */
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[1] + 0 + (int32_t)g_m68k.a[1]); uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x9800BD3E; uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(bus_read16(0x9a346 + (int32_t)g_m68k.a[1])));
    /* TODO $09A348: cmpm.b (a1)+, (a6)+  [BD 09] */
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[5]; uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[2] + 0 + (int32_t)g_m68k.a[1]); uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $09A3A0-$09A404  (43 instructions, 100 bytes) */
void jt_09A3A0(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $09A3B8: cmpm.w (a0)+, (a6)+  [BD 48] */
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[0]; uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_EOR16(g_m68k.d[1], g_m68k.d[6]);
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    /* TODO $09A3C8: cmpm.w (a1)+, (a6)+  [BD 49] */
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[1]; uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[0]; uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    M68K_EOR16(g_m68k.d[2], g_m68k.d[6]);
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    /* TODO $09A3D8: cmpm.w (a2)+, (a6)+  [BD 4A] */
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[2]; uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[1]; uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    M68K_EOR16(g_m68k.d[3], g_m68k.d[6]);
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    /* TODO $09A3E8: cmpm.w (a3)+, (a6)+  [BD 4B] */
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[3]; uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[2]; uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    M68K_EOR16(g_m68k.d[4], g_m68k.d[6]);
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    /* TODO $09A3F8: cmpm.w (a4)+, (a6)+  [BD 4C] */
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[4]; uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[3]; uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $09A404-$09A448  (29 instructions, 68 bytes) */
void jt_09A404(void) {
    M68K_OR8(g_m68k.d[4], 0x4);
    M68K_EOR16(g_m68k.d[5], g_m68k.d[6]);
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    /* TODO $09A40C: cmpm.w (a5)+, (a6)+  [BD 4D] */
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[5]; uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[4]; uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    M68K_EOR16(g_m68k.d[6], g_m68k.d[6]);
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    /* TODO $09A41C: cmpm.w (a6)+, (a6)+  [BD 4E] */
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[5]; uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    M68K_EOR16(g_m68k.d[7], g_m68k.d[6]);
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    /* TODO $09A42C: cmpm.w (a7)+, (a6)+  [BD 4F] */
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[7]; uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $09A448-$09A4B8  (42 instructions, 112 bytes) */
void jt_09A448(void) {
    M68K_OR8(g_m68k.d[6], 0x8);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[6]; uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[6] + (-0x6800)); uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[7] + 0 + (int32_t)g_m68k.a[1]); uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    M68K_EOR32(g_m68k.d[0], g_m68k.d[6]);
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    /* TODO $09A460: cmpm.l (a1)+, (a6)+  [BD 89] */
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[7]; uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[7]; uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[7] + (-0x6800)); uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    { uint32_t _ea = 0x009800; uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    M68K_EOR32(g_m68k.d[1], g_m68k.d[6]);
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    /* TODO $09A480: cmpm.l (a2)+, (a6)+  [BD 8A] */
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[1]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[0]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[0]; uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[0] + (-0x6800)); uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[0] + 0 + (int32_t)g_m68k.a[1]); uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    { uint32_t _ea = 0x9800BD82; uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    /* TODO $09A4A0: cmpm.l (a3)+, (a6)+  [BD 8B] */
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[2]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[1]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[1]; uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[1] + (-0x6800)); uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[1] + 0 + (int32_t)g_m68k.a[1]); uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $09A50C-$09A51C  (5 instructions, 16 bytes) */
void jt_09A50C(void) {
    M68K_OR8(g_m68k.d[3], 0x8);
    { uint32_t _ea = g_m68k.a[4]; uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[4] + (-0x6800)); uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[4] + 0 + (int32_t)g_m68k.a[1]); uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $09A570-$09A5A8  (17 instructions, 56 bytes) */
void jt_09A570(void) {
    M68K_OR8(g_m68k.d[6], 0x5);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[7]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[0] + 0 + (int32_t)g_m68k.a[1]); uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[7]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[0] + (-0x6800)); uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[1] + 0 + (int32_t)g_m68k.a[1]); uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = 0x9800BDC1; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[0]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[1] + (-0x6800)); uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[2] + 0 + (int32_t)g_m68k.a[1]); uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $09A5EC-$09A5FC  (5 instructions, 16 bytes) */
void jt_09A5EC(void) {
    M68K_OR8(g_m68k.d[3], 0x5);
    { uint32_t _ea = g_m68k.a[4]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[5] + (-0x6800)); uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[6] + 0 + (int32_t)g_m68k.a[1]); uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $09A62C-$09A6A8  (38 instructions, 124 bytes) */
void jt_09A62C(void) {
    M68K_OR8(g_m68k.d[6], 0x8);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[6]; uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[6] + (-0x6800)); uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[7] + 0 + (int32_t)g_m68k.a[1]); uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    M68K_EOR32(g_m68k.d[0], g_m68k.d[6]);
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[7]; uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[7]; uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[7] + (-0x6800)); uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    { uint32_t _ea = 0x009800; uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    M68K_EOR32(g_m68k.d[1], g_m68k.d[6]);
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[0]; uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[0] + (-0x6800)); uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[0] + 0 + (int32_t)g_m68k.a[1]); uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    { uint32_t _ea = 0x9800BD82; uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[1]; uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[1] + (-0x6800)); uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[1] + 0 + (int32_t)g_m68k.a[1]); uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $09A6F0-$09A740  (34 instructions, 80 bytes) */
void jt_09A6F0(void) {
    M68K_OR8(g_m68k.d[6], 0x8);
    { uint32_t _ea = g_m68k.a[7]; uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[7]; uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[7] + (-0x6800)); uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    M68K_CMP32(g_m68k.a[6], g_m68k.a[2]);
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[6], g_m68k.a[5]);
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[6], bus_read32(g_m68k.a[0]));
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[6], bus_read32(g_m68k.a[2]));
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[6], bus_read32(g_m68k.a[5]));
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[0]; uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[0] + (-0x6800)); uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[0] + 0 + (int32_t)g_m68k.a[1]); uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    M68K_CMP32(g_m68k.a[6], g_m68k.a[3]);
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[6], g_m68k.a[6]);
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[6], bus_read32(g_m68k.a[1]));
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[6], bus_read32(g_m68k.a[3]));
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[6], bus_read32(g_m68k.a[6]));
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[1]; uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[1] + (-0x6800)); uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[1] + 0 + (int32_t)g_m68k.a[1]); uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $09A7B4-$09A7C4  (5 instructions, 16 bytes) */
void jt_09A7B4(void) {
    M68K_OR8(g_m68k.d[2], 0x8);
    { uint32_t _ea = g_m68k.a[5]; uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[5] + (-0x6800)); uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[5] + 0 + (int32_t)g_m68k.a[1]); uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $09A7F8-$09A854  (33 instructions, 92 bytes) */
void jt_09A7F8(void) {
    M68K_OR8(g_m68k.d[6], 0x8);
    /* TODO $09A7FC: cmpm.l (a1)+, (a6)+  [BD 89] */
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[7]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[0] + 0 + (int32_t)g_m68k.a[1]); uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $09A81C: cmpm.l (a2)+, (a6)+  [BD 8A] */
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[1]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[0]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[7]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[0] + (-0x6800)); uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[1] + 0 + (int32_t)g_m68k.a[1]); uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = 0x9800BDC1; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    /* TODO $09A83C: cmpm.l (a3)+, (a6)+  [BD 8B] */
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[2]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[1]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[0]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[1] + (-0x6800)); uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[2] + 0 + (int32_t)g_m68k.a[1]); uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $09A8BC-$09A8D8  (12 instructions, 28 bytes) */
void jt_09A8BC(void) {
    M68K_OR8(g_m68k.d[6], 0x8);
    M68K_CMP32(g_m68k.a[6], _postinc32(0));
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[6], _postinc32(3));
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[6], _postinc32(6));
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[6], _predec32(0));
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[6], _predec32(3));
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[6] + 0 + (int32_t)g_m68k.a[1]); uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $09A980-$09A990  (5 instructions, 16 bytes) */
void jt_09A980(void) {
    M68K_OR8(g_m68k.d[2], 0x8);
    { uint32_t _ea = g_m68k.a[5]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[6] + (-0x6800)); uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[7] + 0 + (int32_t)g_m68k.a[1]); uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $09A9C4-$09A9C8  (1 instructions, 4 bytes) */
void jt_09A9C4(void) {
    M68K_OR8(g_m68k.d[6], 0x9);
    /* WARNING: function did not end with RTS */
}

/* $09AAA0-$09AB64  (57 instructions, 196 bytes) */
void jt_09AAA0(void) {
    M68K_OR8(g_m68k.d[6], 0x8);
    M68K_CMP32(g_m68k.d[6], bus_read32(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.a[1]));
    M68K_CMP32(g_m68k.d[6], bus_read32(g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.a[1]));
    M68K_CMP32(g_m68k.d[6], bus_read32(g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.a[1]));
    M68K_CMP32(g_m68k.d[6], bus_read32(0x93bb2));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP32(g_m68k.d[6], bus_read32(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.a[1]));
    M68K_CMP32(g_m68k.d[6], bus_read32(g_m68k.a[6] + 0 + (int16_t)(uint16_t)g_m68k.a[1]));
    M68K_CMP32(g_m68k.d[6], /* UNHANDLED_READ: (a16, a1.w) */ 0);
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(g_m68k.d[0]));
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP32(g_m68k.d[6], bus_read32(g_m68k.a[7] + 0 + (int16_t)(uint16_t)g_m68k.a[1]));
    M68K_CMP32(g_m68k.d[6], 0x9100bcc1);
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(g_m68k.d[6]));
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP32(g_m68k.a[6], bus_read32(g_m68k.a[2] + (-0x6f00)));
    M68K_CMP32(g_m68k.a[6], bus_read32(g_m68k.a[4] + (-0x6f00)));
    M68K_CMP32(g_m68k.a[6], bus_read32(g_m68k.a[7] + (-0x6f00)));
    M68K_CMP32(g_m68k.a[6], bus_read32(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.a[1]));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP32(g_m68k.d[6], _postinc32(4));
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    M68K_CMP32(g_m68k.d[6], _predec32(5));
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    M68K_CMP32(g_m68k.d[6], bus_read32(g_m68k.a[3] + (-0x6f00)));
    M68K_CMP32(g_m68k.d[6], bus_read32(g_m68k.a[6] + (-0x6f00)));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP32(g_m68k.d[6], _postinc32(5));
    /* TODO $09AB56: sbcd.b d0, d7  [8F 00] */
    M68K_CMP32(g_m68k.d[6], g_m68k.d[1]);
    /* TODO $09AB5A: sbcd.b d0, d7  [8F 00] */
    M68K_CMP32(g_m68k.d[6], g_m68k.d[1]);
    /* TODO $09AB5E: sbcd.b d0, d7  [8F 00] */
    M68K_CMP32(g_m68k.d[6], g_m68k.d[1]);
    /* TODO $09AB62: sbcd.b d0, d7  [8F 00] */
    /* WARNING: function did not end with RTS */
}

/* $09AB64-$09AB7C  (10 instructions, 24 bytes) */
void jt_09AB64(void) {
    M68K_OR8(g_m68k.d[1], 0x5);
    M68K_CMP32(g_m68k.d[6], g_m68k.d[6]);
    /* TODO $09AB6A: sbcd.b d0, d7  [8F 00] */
    M68K_CMP32(g_m68k.a[6], _predec32(6));
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[6], bus_read32(g_m68k.a[0] + (-0x6f00)));
    M68K_CMP32(g_m68k.d[6], g_m68k.d[1]);
    /* TODO $09AB76: sbcd.b d0, d7  [8F 00] */
    M68K_CMP32(g_m68k.d[6], _predec32(6));
    /* TODO $09AB7A: sbcd.b d0, d7  [8F 00] */
    /* WARNING: function did not end with RTS */
}

/* $09AB7C-$09AB9C  (8 instructions, 32 bytes) */
void jt_09AB7C(void) {
    M68K_OR8(g_m68k.d[1], 0x7);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $09AB9C-$09ABB8  (10 instructions, 28 bytes) */
void jt_09AB9C(void) {
    M68K_OR8(g_m68k.d[1], 0x6);
    { uint32_t _ea = g_m68k.a[1]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    /* TODO $09ABA2: sbcd.b d0, d7  [8F 00] */
    { uint32_t _ea = g_m68k.a[2]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    /* TODO $09ABA6: sbcd.b d0, d7  [8F 00] */
    { uint32_t _ea = (g_m68k.a[6] + (-0x7100)); uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = 0x8F00BB9A; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    /* TODO $09ABB2: sbcd.b d0, d7  [8F 00] */
    { uint32_t _ea = g_m68k.a[3]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    /* TODO $09ABB6: sbcd.b d0, d7  [8F 00] */
    /* WARNING: function did not end with RTS */
}

/* $09ABB8-$09ABD4  (10 instructions, 28 bytes) */
void jt_09ABB8(void) {
    M68K_OR8(g_m68k.d[1], 0x6);
    { uint32_t _ea = g_m68k.a[1]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[0], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[2]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[0], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[6] + (-0x7000)); uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = 0x9000BB9A; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[0], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[3]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $09ABD4-$09ABF0  (10 instructions, 28 bytes) */
void jt_09ABD4(void) {
    M68K_OR8(g_m68k.d[1], 0x6);
    { uint32_t _ea = g_m68k.a[1]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[2]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[6] + (-0x6f00)); uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = 0x9100BB9A; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[3]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}
