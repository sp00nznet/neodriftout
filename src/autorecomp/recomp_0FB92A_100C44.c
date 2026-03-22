/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $0FB92A - $100C44 */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

/* $0FB92A-$0FB92E  (1 instructions, 4 bytes) */
void jt_0FB92A(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0FB92C-$0FB936  (4 instructions, 10 bytes) */
void jt_0FB92C(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x36);
    /* WARNING: function did not end with RTS */
}

/* $0FB934-$0FB940  (4 instructions, 12 bytes) */
void jt_0FB934(void) {
    { uint32_t _ea = (g_m68k.a[6] + 0 + (int16_t)(uint16_t)g_m68k.d[0]); uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x60); bus_write8(_ea, _tmp); }
    M68K_AND16(g_m68k.d[4], _predec16(0));
    M68K_OR8(g_m68k.d[0], 0xb);
    { uint32_t _ea = (g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0]); uint8_t _tmp = bus_read8(_ea); M68K_NEGX8(_tmp); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0FB940-$0FB948  (2 instructions, 8 bytes) */
void jt_0FB940(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0FB96C-$0FB970  (1 instructions, 4 bytes) */
void jt_0FB96C(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0FB96E-$0FB972  (1 instructions, 4 bytes) */
void jt_0FB96E(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0FB970-$0FB974  (1 instructions, 4 bytes) */
void jt_0FB970(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0FB972-$0FB976  (1 instructions, 4 bytes) */
void jt_0FB972(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0FB974-$0FB97E  (4 instructions, 10 bytes) */
void jt_0FB974(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x6);
    /* WARNING: function did not end with RTS */
}

/* $0FB97C-$0FB980  (2 instructions, 4 bytes) */
void jt_0FB97C(void) {
    M68K_OR8(g_m68k.d[6], 0xc8);
    g_m68k.a[4] -= (int16_t)(uint16_t)(g_m68k.a[0]);
    /* WARNING: function did not end with RTS */
}

/* $0FB98A-$0FB992  (2 instructions, 8 bytes) */
void jt_0FB98A(void) {
    M68K_OR8(g_m68k.d[3], 0x40);
    M68K_OR8(g_m68k.d[0], 0x24);
    /* WARNING: function did not end with RTS */
}

/* $0FB990-$0FB9AA  (6 instructions, 26 bytes) */
void jt_0FB990(void) {
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x48); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xe8); bus_write8(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[4] + 0x28); uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xe0); bus_write8(_ea, _tmp); }
    M68K_CMP16(g_m68k.d[4], bus_read16(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0]));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0FB9A8-$0FB9AC  (1 instructions, 4 bytes) */
void jt_0FB9A8(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0FB9AA-$0FB9AE  (1 instructions, 4 bytes) */
void jt_0FB9AA(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0FB9AC-$0FB9B0  (1 instructions, 4 bytes) */
void jt_0FB9AC(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0FB9AE-$0FB9B2  (1 instructions, 4 bytes) */
void jt_0FB9AE(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0FB9B0-$0FB9B6  (2 instructions, 6 bytes) */
void jt_0FB9B0(void) {
    M68K_OR8(g_m68k.d[0], 0x4e);
    g_m68k.d[0] = (uint32_t)(int32_t)(int8_t)(0xe8); M68K_TST32(g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0FB9CC-$0FB9D0  (1 instructions, 4 bytes) */
void jt_0FB9CC(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0FB9CE-$0FB9D2  (1 instructions, 4 bytes) */
void jt_0FB9CE(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0FB9D0-$0FB9DC  (5 instructions, 12 bytes) */
void jt_0FB9D0(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0xfa);
    g_m68k.d[0] = (uint32_t)(int32_t)(int8_t)(0x70); M68K_TST32(g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0FB9EA-$0FB9EE  (1 instructions, 4 bytes) */
void jt_0FB9EA(void) {
    M68K_OR8(g_m68k.d[0], 0xfa);
    /* WARNING: function did not end with RTS */
}

/* $0FB9FE-$0FBA02  (1 instructions, 4 bytes) */
void jt_0FB9FE(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0FBA00-$0FBA06  (2 instructions, 6 bytes) */
void jt_0FBA00(void) {
    M68K_OR8(g_m68k.d[0], 0x4e);
    g_m68k.d[0] = (uint32_t)(int32_t)(int8_t)(0x18); M68K_TST32(g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0FBA1C-$0FBA20  (1 instructions, 4 bytes) */
void jt_0FBA1C(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0FBA1E-$0FBA22  (1 instructions, 4 bytes) */
void jt_0FBA1E(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0FBA20-$0FBA2A  (4 instructions, 10 bytes) */
void jt_0FBA20(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0FBA28-$0FBA2C  (1 instructions, 4 bytes) */
void jt_0FBA28(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0FBA2A-$0FBA2E  (1 instructions, 4 bytes) */
void jt_0FBA2A(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0FBA2C-$0FBA30  (1 instructions, 4 bytes) */
void jt_0FBA2C(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0FBA2E-$0FBA32  (1 instructions, 4 bytes) */
void jt_0FBA2E(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0FBA30-$0FBA3E  (6 instructions, 14 bytes) */
void jt_0FBA30(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0FBA3C-$0FBA42  (2 instructions, 6 bytes) */
void jt_0FBA3C(void) {
    M68K_OR8(g_m68k.d[0], 0xf6);
    g_m68k.a[0] = _predec32(0);
    /* WARNING: function did not end with RTS */
}

/* $0FBA50-$0FBA58  (2 instructions, 8 bytes) */
void jt_0FBA50(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0FBA8E-$0FBA92  (1 instructions, 4 bytes) */
void jt_0FBA8E(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0FBA90-$0FBAAA  (12 instructions, 26 bytes) */
void jt_0FBA90(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0xff);
    /* WARNING: function did not end with RTS */
}

/* $100000-$100006  (1 instructions, 6 bytes) */
void jt_100000(void) {
    { uint32_t _ea = (g_m68k.a[3] + 0x4); uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x26); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $100002-$100004  (1 instructions, 2 bytes) */
void jt_100002(void) {
    g_m68k.d[7] = _predec32(6); M68K_TST32((uint32_t)g_m68k.d[7]);
    /* WARNING: function did not end with RTS */
}

/* $100004-$100008  (1 instructions, 4 bytes) */
void jt_100004(void) {
    M68K_OR8(g_m68k.d[4], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $100006-$10000A  (1 instructions, 4 bytes) */
void jt_100006(void) {
    M68K_OR8(g_m68k.d[0], 0xc);
    /* WARNING: function did not end with RTS */
}

/* $10000A-$10000E  (1 instructions, 4 bytes) */
void jt_10000A(void) {
    M68K_OR8(g_m68k.d[0], 0x20);
    /* WARNING: function did not end with RTS */
}

/* $10000C-$100012  (2 instructions, 6 bytes) */
void jt_10000C(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x0); bus_write8(_ea, _tmp); }
    M68K_AND8(g_m68k.d[0], 0x23);
    /* WARNING: function did not end with RTS */
}

/* $100010-$100014  (1 instructions, 4 bytes) */
void jt_100010(void) {
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xfa); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $100012-$100018  (3 instructions, 6 bytes) */
void jt_100012(void) {
    g_m68k.a[5] -= bus_read32(0x10003b);
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xde); bus_write8(_ea, _tmp); }
    M68K_DIVS(g_m68k.d[1], _postinc16(6));
    /* WARNING: function did not end with RTS */
}

/* $100018-$10001E  (1 instructions, 6 bytes) */
void jt_100018(void) {
    { uint32_t _ea = (g_m68k.a[3] + (-0x1)); uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x6); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $100240-$10024A  (2 instructions, 10 bytes) */
void jt_100240(void) {
    { uint32_t _ea = g_m68k.a[0]; uint32_t _tmp = bus_read32(_ea); M68K_OR32(_tmp, 0xa10010); bus_write32(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x8); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $100416-$10042A  (5 instructions, 20 bytes) */
void sub_100416(void) {
    M68K_OR8(g_m68k.d[6], 0x7);
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x10); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x10); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x10); bus_write8(_ea, _tmp); }
    m68k_set_ccr(m68k_get_ccr() | 0x3d);
    /* WARNING: function did not end with RTS */
}

/* $100640-$100644  (1 instructions, 4 bytes) */
void jt_100640(void) {
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x10); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $100642-$10065A  (11 instructions, 24 bytes) */
void jt_100642(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x10); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x10); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x10); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x10); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x10); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x10); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x10); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x10); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x10); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x10); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xc); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $10099C-$1009B8  (7 instructions, 28 bytes) */
void jt_10099C(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x10); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x10); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x10); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x2); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[3], 0x4);
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x13); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x3a); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $100C40-$100C44  (1 instructions, 4 bytes) */
void jt_100C40(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x10); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}
