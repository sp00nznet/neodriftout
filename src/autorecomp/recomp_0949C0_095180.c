/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $0949C0 - $095180 */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

/* $0949C0-$0949E8  (19 instructions, 40 bytes) */
void jt_0949C0(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    g_m68k.a[0] += bus_read32(g_m68k.a[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[2] -= 2; bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[2] += bus_read32(g_m68k.a[6]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[2] -= 2; bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[2] += _postinc32(1);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[2] -= 2; bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[2] += bus_read32(g_m68k.a[3]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[2] -= 2; bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[2] += bus_read32(g_m68k.a[7]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[2] -= 2; bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[0] += bus_read32(g_m68k.a[3]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[3]); g_m68k.a[2] -= 2; bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[2] += bus_read32(g_m68k.a[4]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[2] -= 2; bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[2] += _postinc32(0);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[2] -= 2; bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[2] += _postinc32(2);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[2] -= 2; bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0949E8-$094A10  (16 instructions, 40 bytes) */
void jt_0949E8(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    g_m68k.a[2] += _postinc32(3);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[2] -= 2; bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[2] += _predec32(6);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[2] -= 2; bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[0] += bus_read32(g_m68k.a[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); g_m68k.a[2] -= 2; bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[2] += _postinc32(4);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[2] -= 2; bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[2] += _predec32(7);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[2] -= 2; bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[2] += bus_read32(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[3] * 4);
    g_m68k.a[0] += bus_read32(g_m68k.a[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); g_m68k.a[2] -= 2; bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[2] += bus_read32(g_m68k.a[0] + 0x3500);
    { uint32_t _ea = (g_m68k.a[3] + 0x3503); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[2]); bus_write16(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $094A10-$094A38  (14 instructions, 40 bytes) */
void jt_094A10(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    g_m68k.a[0] += bus_read32(g_m68k.a[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    g_m68k.a[0] += _predec32(1);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    { uint32_t _ea = 0x003301; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    { uint32_t _ea = (g_m68k.a[3] + 0x3301); uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = /* UNHANDLED_ADDR: ([a7, d3.w * 2]) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    { uint32_t _ea = (g_m68k.a[2] + 0x3301); uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = /* UNHANDLED_ADDR: ([a6, d3.w * 2]) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $094A38-$094A60  (14 instructions, 40 bytes) */
void jt_094A38(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    g_m68k.a[2] += _postinc32(5);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.a[2] += bus_read32(g_m68k.a[1] + 0x3400);
    g_m68k.a[2] += bus_read32(g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.d[3] * 4);
    g_m68k.a[2] += _postinc32(6);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.a[2] += bus_read32(g_m68k.a[2] + 0x3400);
    g_m68k.a[2] += bus_read32(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[3] * 4);
    g_m68k.a[2] += _postinc32(7);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.a[2] += bus_read32(g_m68k.a[3] + 0x3400);
    g_m68k.a[0] += bus_read32(g_m68k.a[2]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[3])); M68K_TST16((uint16_t)g_m68k.d[2]);
    /* WARNING: function did not end with RTS */
}

/* $094A60-$094A88  (13 instructions, 40 bytes) */
void jt_094A60(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    g_m68k.a[2] += _predec32(0);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[2] -= 2; bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[2] += bus_read32(g_m68k.a[4] + 0x3500);
    g_m68k.a[2] += bus_read32(g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.d[3] * 4);
    g_m68k.a[2] += _predec32(1);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[2] -= 2; bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[2] += bus_read32(g_m68k.a[5] + 0x3500);
    g_m68k.a[2] += bus_read32(g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.d[3] * 4);
    g_m68k.a[2] += _predec32(2);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[2] -= 2; bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[2] += bus_read32(g_m68k.a[6] + 0x3500);
    g_m68k.a[2] += bus_read32(g_m68k.a[6] + 0 + (int16_t)(uint16_t)g_m68k.d[3] * 4);
    /* WARNING: function did not end with RTS */
}

/* $094A88-$094AB0  (15 instructions, 40 bytes) */
void jt_094A88(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    g_m68k.a[2] += _predec32(3);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    g_m68k.a[2] += bus_read32(g_m68k.a[7] + 0x3300);
    g_m68k.a[2] += bus_read32(g_m68k.a[7] + 0 + (int16_t)(uint16_t)g_m68k.d[3] * 2);
    g_m68k.a[2] += _predec32(4);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    g_m68k.a[2] += bus_read32(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[3] * 2);
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    g_m68k.a[2] += _predec32(5);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    g_m68k.a[0] += _predec32(1);
    { uint16_t _mv = (uint16_t)(g_m68k.d[3]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    g_m68k.a[2] += bus_read32(0x003300);
    /* WARNING: function did not end with RTS */
}

/* $094AB0-$094AC8  (8 instructions, 24 bytes) */
void jt_094AB0(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    g_m68k.a[2] += bus_read32(0x3300D602);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    g_m68k.a[0] += bus_read32(g_m68k.a[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    g_m68k.a[2] += bus_read32(0x97dc2);
    M68K_ADD8(g_m68k.d[3], g_m68k.d[3]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $094AD8-$094B00  (16 instructions, 40 bytes) */
void jt_094AD8(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    g_m68k.a[0] += bus_read32(g_m68k.a[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[2] -= 2; bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    M68K_ADD8(g_m68k.d[3], g_m68k.d[5]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[2] -= 2; bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    M68K_ADD8(g_m68k.d[3], bus_read8(g_m68k.a[0]));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[2] -= 2; bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[2] += /* UNHANDLED_READ: (a16, d3.w * 4) */ 0;
    M68K_ADD8(g_m68k.d[3], g_m68k.d[6]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[2] -= 2; bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    M68K_ADD8(g_m68k.d[3], bus_read8(g_m68k.a[1]));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[2] -= 2; bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[2] += 0x3500d607;
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[2] -= 2; bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[0] += bus_read32(g_m68k.a[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[3]); g_m68k.a[2] -= 2; bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $094B00-$094B04  (1 instructions, 4 bytes) */
void jt_094B00(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    /* WARNING: function did not end with RTS */
}

/* $094B28-$094B40  (6 instructions, 24 bytes) */
void jt_094B28(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    { uint32_t _ea = (g_m68k.a[0] + 0x3300); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[2]); bus_write16(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[3] * 2); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[2]); bus_write16(_ea, _tmp); }
    { uint32_t _ea = 0x3300D569; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[2]); bus_write16(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    { uint32_t _ea = (g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[3] * 2); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[2]); bus_write16(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $094B50-$094B58  (3 instructions, 8 bytes) */
void jt_094B50(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    g_m68k.a[0] += bus_read32(g_m68k.a[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $094B78-$094B88  (7 instructions, 16 bytes) */
void jt_094B78(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    g_m68k.a[0] += bus_read32(g_m68k.a[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    g_m68k.a[2] += g_m68k.d[5];
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    g_m68k.a[2] += g_m68k.a[5];
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $094BA0-$094BAC  (4 instructions, 12 bytes) */
void jt_094BA0(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    g_m68k.a[0] += bus_read32(g_m68k.a[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    { uint32_t _ea = /* UNHANDLED_ADDR: ([a5, d3.w * 2]) */ 0; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[2]); bus_write16(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $094BC8-$094BF0  (17 instructions, 40 bytes) */
void jt_094BC8(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    { uint32_t _ea = g_m68k.a[3]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[2]); bus_write16(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    { uint32_t _ea = g_m68k.a[5]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[2]); bus_write16(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    { uint32_t _ea = g_m68k.a[2]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[2]); bus_write32(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    { uint32_t _ea = (g_m68k.a[6] + 0x3300); uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[2]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    { uint32_t _ea = g_m68k.a[3]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[2]); bus_write32(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    { uint32_t _ea = (g_m68k.a[7] + 0x3300); uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[2]); bus_write32(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $094BF0-$094C14  (13 instructions, 36 bytes) */
void jt_094BF0(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    { uint32_t _ea = (g_m68k.a[3] + 0x3300); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[2]); bus_write16(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[3] * 2); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[2]); bus_write16(_ea, _tmp); }
    g_m68k.a[0] += bus_read32(g_m68k.a[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    g_m68k.a[0] += bus_read32(g_m68k.a[3]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    { uint32_t _ea = (g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.d[3] * 2); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[2]); bus_write16(_ea, _tmp); }
    g_m68k.a[0] += bus_read32(g_m68k.a[3]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[3]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    g_m68k.a[0] += bus_read32(g_m68k.a[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    { uint32_t _ea = (g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.d[3] * 2); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[2]); bus_write16(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $094C18-$094C1C  (1 instructions, 4 bytes) */
void jt_094C18(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    /* WARNING: function did not end with RTS */
}

/* $094C40-$094C68  (15 instructions, 40 bytes) */
void jt_094C40(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    g_m68k.a[2] += _postinc32(7);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[1])); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.a[2] += bus_read32(g_m68k.a[3] + 0x3401);
    M68K_ADD8(g_m68k.d[3], bus_read8(g_m68k.a[5]));
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.a[2] += _postinc32(6);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[1])); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.a[2] += bus_read32(g_m68k.a[2] + 0x3401);
    M68K_ADD8(g_m68k.d[3], bus_read8(g_m68k.a[6]));
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.a[2] += _postinc32(5);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[1])); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.a[2] += bus_read32(g_m68k.a[1] + 0x3401);
    g_m68k.a[2] += bus_read32(g_m68k.a[2] + 0x1 + (int16_t)(uint16_t)g_m68k.d[3]);
    /* WARNING: function did not end with RTS */
}

/* $094C68-$094C90  (10 instructions, 40 bytes) */
void jt_094C68(void) {
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

/* $094C90-$094CB8  (10 instructions, 40 bytes) */
void jt_094C90(void) {
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

/* $094CB8-$094CE0  (10 instructions, 40 bytes) */
void jt_094CB8(void) {
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

/* $094CE0-$094D08  (10 instructions, 40 bytes) */
void jt_094CE0(void) {
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

/* $094D08-$094D30  (10 instructions, 40 bytes) */
void jt_094D08(void) {
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

/* $094D30-$094D58  (10 instructions, 40 bytes) */
void jt_094D30(void) {
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

/* $094D58-$094D80  (10 instructions, 40 bytes) */
void jt_094D58(void) {
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

/* $094D80-$094DA8  (10 instructions, 40 bytes) */
void jt_094D80(void) {
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

/* $094DA8-$094DD0  (10 instructions, 40 bytes) */
void jt_094DA8(void) {
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

/* $094DD0-$094DF8  (10 instructions, 40 bytes) */
void jt_094DD0(void) {
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

/* $094DF8-$094E20  (10 instructions, 40 bytes) */
void jt_094DF8(void) {
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

/* $094E20-$094E48  (10 instructions, 40 bytes) */
void jt_094E20(void) {
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

/* $094E48-$094E70  (10 instructions, 40 bytes) */
void jt_094E48(void) {
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

/* $094E70-$094E98  (10 instructions, 40 bytes) */
void jt_094E70(void) {
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

/* $094E98-$094EC0  (10 instructions, 40 bytes) */
void jt_094E98(void) {
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

/* $094EC0-$094EE8  (10 instructions, 40 bytes) */
void jt_094EC0(void) {
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

/* $094EE8-$094F10  (10 instructions, 40 bytes) */
void jt_094EE8(void) {
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

/* $094F10-$094F38  (10 instructions, 40 bytes) */
void jt_094F10(void) {
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

/* $094F38-$094F60  (10 instructions, 40 bytes) */
void jt_094F38(void) {
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

/* $094F60-$094F88  (10 instructions, 40 bytes) */
void jt_094F60(void) {
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

/* $094F88-$094FB0  (10 instructions, 40 bytes) */
void jt_094F88(void) {
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

/* $094FB0-$094FD8  (10 instructions, 40 bytes) */
void jt_094FB0(void) {
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

/* $094FD8-$095000  (10 instructions, 40 bytes) */
void jt_094FD8(void) {
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

/* $095000-$095028  (10 instructions, 40 bytes) */
void jt_095000(void) {
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

/* $095028-$09502C  (1 instructions, 4 bytes) */
void jt_095028(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    /* WARNING: function did not end with RTS */
}

/* $095050-$095078  (19 instructions, 40 bytes) */
void jt_095050(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    g_m68k.a[0] += bus_read32(g_m68k.a[2]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[2]);
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_ADDX8(_tmp, _predec8(7)); bus_write8(_ea, _tmp); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[1])); M68K_TST16((uint16_t)g_m68k.d[2]);
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[1])); M68K_TST16((uint16_t)g_m68k.d[2]);
    M68K_ADD8(g_m68k.d[3], bus_read8(g_m68k.a[7]));
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[2]);
    M68K_ADD8(g_m68k.d[3], _postinc8(7));
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[2]);
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[1])); M68K_TST16((uint16_t)g_m68k.d[2]);
    M68K_ADD8(g_m68k.d[3], _postinc8(0));
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[2]);
    M68K_ADD8(g_m68k.d[3], _predec8(0));
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[2]);
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[1])); M68K_TST16((uint16_t)g_m68k.d[2]);
    /* WARNING: function did not end with RTS */
}

/* $095078-$0950A0  (18 instructions, 40 bytes) */
void jt_095078(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    g_m68k.a[0] += bus_read32(g_m68k.a[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[2] -= 2; bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    M68K_ADD8(g_m68k.d[3], _predec8(1));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[2] -= 2; bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint32_t _ea = (g_m68k.a[0] + 0x3501); uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[2]); bus_write32(_ea, _tmp); }
    M68K_ADD8(g_m68k.d[3], _postinc8(1));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[2] -= 2; bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    M68K_ADD8(g_m68k.d[3], _predec8(2));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[2] -= 2; bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint32_t _ea = g_m68k.a[7]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[2]); bus_write32(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[2] -= 2; bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[0] += bus_read32(g_m68k.a[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); g_m68k.a[2] -= 2; bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint32_t _ea = g_m68k.a[3]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[2]); bus_write32(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); g_m68k.a[2] -= 2; bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint32_t _ea = g_m68k.a[6]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[2]); bus_write32(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); g_m68k.a[2] -= 2; bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0950A0-$0950C8  (16 instructions, 40 bytes) */
void jt_0950A0(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    M68K_ADD8(g_m68k.d[3], _postinc8(2));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[2] -= 2; bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    M68K_ADD8(g_m68k.d[3], _predec8(3));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[2] -= 2; bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    M68K_ADD8(g_m68k.d[3], bus_read8(g_m68k.a[1] + 0x3500));
    M68K_ADD8(g_m68k.d[3], _postinc8(3));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[2] -= 2; bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    M68K_ADD8(g_m68k.d[3], _predec8(4));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[2] -= 2; bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    M68K_ADD8(g_m68k.d[3], bus_read8(g_m68k.a[2] + 0x3500));
    g_m68k.a[0] += bus_read32(g_m68k.a[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); g_m68k.a[2] -= 2; bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    M68K_ADD8(g_m68k.d[3], _predec8(5));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[2] -= 2; bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    M68K_ADD8(g_m68k.d[3], bus_read8(g_m68k.a[3] + 0x3500));
    /* WARNING: function did not end with RTS */
}

/* $0950C8-$0950F0  (17 instructions, 40 bytes) */
void jt_0950C8(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    M68K_ADD8(g_m68k.d[3], _postinc8(4));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[2] -= 2; bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    M68K_ADD8(g_m68k.d[3], _predec8(6));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[2] -= 2; bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[0] += bus_read32(g_m68k.a[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); g_m68k.a[2] -= 2; bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    M68K_ADD8(g_m68k.d[3], _postinc8(5));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[2] -= 2; bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    M68K_ADD8(g_m68k.d[3], _predec8(7));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[2] -= 2; bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    M68K_ADD8(g_m68k.d[3], bus_read8(g_m68k.a[4] + 0x3500));
    M68K_ADD8(g_m68k.d[3], _postinc8(6));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[2] -= 2; bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    M68K_ADD8(g_m68k.d[3], bus_read8(g_m68k.a[0] + 0x3500));
    g_m68k.a[0] += bus_read32(g_m68k.a[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[3]); g_m68k.a[2] -= 2; bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0950F0-$095100  (5 instructions, 16 bytes) */
void jt_0950F0(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    M68K_ADD8(g_m68k.d[3], bus_read8(g_m68k.a[5] + 0x3300));
    M68K_ADD8(g_m68k.d[3], bus_read8(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[3] * 2));
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $095118-$095140  (12 instructions, 40 bytes) */
void jt_095118(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    M68K_ADD8(g_m68k.d[3], bus_read8(g_m68k.a[7] + 0x3500));
    M68K_ADD8(g_m68k.d[3], bus_read8(g_m68k.a[6] + 0 + (int16_t)(uint16_t)g_m68k.d[3] * 4));
    g_m68k.a[0] += bus_read32(g_m68k.a[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); g_m68k.a[2] -= 2; bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    M68K_ADD8(g_m68k.d[3], bus_read8(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[3] * 4));
    M68K_ADD8(g_m68k.d[3], bus_read8(g_m68k.a[7] + 0 + (int16_t)(uint16_t)g_m68k.d[3] * 4));
    M68K_ADD8(g_m68k.d[3], 0x0);
    M68K_ADD8(g_m68k.d[3], bus_read8(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[3] * 4));
    M68K_ADD8(g_m68k.d[3], bus_read8(0x003500));
    g_m68k.a[0] += bus_read32(g_m68k.a[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[3]); g_m68k.a[2] -= 2; bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $095140-$095168  (19 instructions, 40 bytes) */
void jt_095140(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    M68K_ADDX8(g_m68k.d[2], g_m68k.d[2]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[2]);
    { uint32_t _ea = g_m68k.a[1]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[2]); bus_write16(_ea, _tmp); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[1])); M68K_TST16((uint16_t)g_m68k.d[2]);
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[2]);
    M68K_ADDX8(g_m68k.d[2], g_m68k.d[3]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[2]);
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_ADDX8(_tmp, _predec8(6)); bus_write8(_ea, _tmp); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[2]);
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.a[0] += bus_read32(g_m68k.a[2]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[1])); M68K_TST16((uint16_t)g_m68k.d[2]);
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_ADDX8(_tmp, _predec8(7)); bus_write8(_ea, _tmp); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[2]);
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[2]);
    /* WARNING: function did not end with RTS */
}

/* $095168-$095180  (7 instructions, 24 bytes) */
void jt_095168(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    g_m68k.a[0] += bus_read32(g_m68k.a[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    M68K_ADD8(g_m68k.d[3], bus_read8(0x3300D63D));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    M68K_ADD8(g_m68k.d[3], bus_read8(g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.d[3] * 2));
    M68K_ADD8(g_m68k.d[3], bus_read8(0x9847e));
    /* WARNING: function did not end with RTS */
}
