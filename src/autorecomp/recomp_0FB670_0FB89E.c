/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $0FB670 - $0FB89E */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

/* $0FB670-$0FB674  (1 instructions, 4 bytes) */
void jt_0FB670(void) {
    M68K_OR8(g_m68k.d[0], 0x4e);
    /* WARNING: function did not end with RTS */
}

/* $0FB678-$0FB684  (3 instructions, 12 bytes) */
void jt_0FB678(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xa0); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xf0); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0FB682-$0FB686  (1 instructions, 4 bytes) */
void jt_0FB682(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0FB684-$0FB688  (1 instructions, 4 bytes) */
void jt_0FB684(void) {
    M68K_OR8(g_m68k.d[0], 0x2e);
    /* WARNING: function did not end with RTS */
}

/* $0FB686-$0FB692  (4 instructions, 12 bytes) */
void jt_0FB686(void) {
    { uint32_t _ea = (g_m68k.a[6] + 0x2c); uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xf0); bus_write8(_ea, _tmp); }
    /* TODO $0FB688: bftst -$20(a0, a5.w){0:4}  [E8 F0 00 2C D0 E0] */
    g_m68k.a[0] += (int16_t)(uint16_t)(_predec16(0));
    M68K_OR8(g_m68k.d[0], 0x2a);
    /* WARNING: function did not end with RTS */
}

/* $0FB690-$0FB698  (2 instructions, 8 bytes) */
void jt_0FB690(void) {
    { uint32_t _ea = (g_m68k.a[2] + 0x0); uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xf8); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x000028; uint8_t _b = 1u << ((0x0) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* WARNING: function did not end with RTS */
}

/* $0FB696-$0FB6A2  (5 instructions, 12 bytes) */
void jt_0FB696(void) {
    { uint32_t _ea = (g_m68k.a[0] + 0x2c); uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x18); bus_write8(_ea, _tmp); }
    /* TODO $0FB698: nbcd.b (a0)+  [48 18] */
    { uint32_t _ea = (g_m68k.a[4] + 0x0); uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x78); bus_write8(_ea, _tmp); }
    g_m68k.d[0] = (uint32_t)(int32_t)(int8_t)(0x78); M68K_TST32(g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0FB6A0-$0FB6A4  (1 instructions, 4 bytes) */
void jt_0FB6A0(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0FB6A2-$0FB6A6  (1 instructions, 4 bytes) */
void jt_0FB6A2(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0FB6A4-$0FB6A8  (1 instructions, 4 bytes) */
void jt_0FB6A4(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0FB6A6-$0FB6AA  (1 instructions, 4 bytes) */
void jt_0FB6A6(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0FB6A8-$0FB6AC  (1 instructions, 4 bytes) */
void jt_0FB6A8(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0FB6AA-$0FB6AE  (1 instructions, 4 bytes) */
void jt_0FB6AA(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0FB6AC-$0FB6B2  (2 instructions, 6 bytes) */
void jt_0FB6AC(void) {
    M68K_OR8(g_m68k.d[0], 0x4e);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0FB6C0-$0FB6CA  (3 instructions, 10 bytes) */
void jt_0FB6C0(void) {
    M68K_OR8(g_m68k.d[0], 0x4e);
    M68K_OR16(g_m68k.d[0], bus_read16(g_m68k.a[0] + 0x4e));
    M68K_OR32(g_m68k.d[0], bus_read32(g_m68k.a[0]));
    /* WARNING: function did not end with RTS */
}

/* $0FB6D4-$0FB6D8  (1 instructions, 4 bytes) */
void jt_0FB6D4(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0FB6D6-$0FB6DA  (1 instructions, 4 bytes) */
void jt_0FB6D6(void) {
    M68K_OR8(g_m68k.d[0], 0x2a);
    /* WARNING: function did not end with RTS */
}

/* $0FB6D8-$0FB6E2  (4 instructions, 10 bytes) */
void jt_0FB6D8(void) {
    { uint32_t _ea = (g_m68k.a[2] + 0x2c); uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x18); bus_write8(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[0], _postinc8(0));
    { uint32_t _ea = (g_m68k.a[4] + 0x0); uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x30); bus_write8(_ea, _tmp); }
    M68K_AND8(g_m68k.d[0], bus_read8(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0]));
    /* WARNING: function did not end with RTS */
}

/* $0FB6E2-$0FB6F4  (4 instructions, 18 bytes) */
void jt_0FB6E2(void) {
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x18); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x18); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x30); bus_write8(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[2] + 0x0); uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x8); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0FB6F4-$0FB6F8  (1 instructions, 4 bytes) */
void jt_0FB6F4(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0FB6F6-$0FB6FA  (1 instructions, 4 bytes) */
void jt_0FB6F6(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0FB6F8-$0FB6FC  (1 instructions, 4 bytes) */
void jt_0FB6F8(void) {
    M68K_OR8(g_m68k.d[0], 0x42);
    /* WARNING: function did not end with RTS */
}

/* $0FB6FA-$0FB6FE  (2 instructions, 4 bytes) */
void jt_0FB6FA(void) {
    M68K_OR16(g_m68k.d[2], 0x5090);
    { uint32_t _ea = g_m68k.a[0]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, 0x8); bus_write32(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0FB704-$0FB714  (4 instructions, 16 bytes) */
void jt_0FB704(void) {
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xf0); bus_write8(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[0] + 0x34 + (int16_t)(uint16_t)g_m68k.d[0]); uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x98); bus_write8(_ea, _tmp); }
    M68K_SUB32(g_m68k.d[4], bus_read32(g_m68k.a[0]));
    M68K_OR8(g_m68k.d[0], 0x36);
    /* WARNING: function did not end with RTS */
}

/* $0FB712-$0FB720  (6 instructions, 14 bytes) */
void jt_0FB712(void) {
    { uint32_t _ea = (g_m68k.a[6] + 0x38 + (int16_t)(uint16_t)g_m68k.d[0]); uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x98); bus_write8(_ea, _tmp); }
    M68K_SUB32(g_m68k.d[4], _postinc32(0));
    { uint32_t _ea = 0x000034; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x98); bus_write8(_ea, _tmp); }
    if (M68K_CC_VC) { func_table_call(0x0FB6B2); return; }
    { uint32_t _ea = (g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.d[0]); uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xb8); bus_write8(_ea, _tmp); }
    M68K_AND32(g_m68k.d[4], bus_read32(0x000000));
    /* WARNING: function did not end with RTS */
}

/* $0FB720-$0FB724  (1 instructions, 4 bytes) */
void jt_0FB720(void) {
    M68K_OR16(g_m68k.d[2], 0xc098);
    /* WARNING: function did not end with RTS */
}

/* $0FB72A-$0FB730  (1 instructions, 6 bytes) */
void jt_0FB72A(void) {
    { uint32_t _ea = (g_m68k.a[6] + 0x0); uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x70); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0FB730-$0FB736  (2 instructions, 6 bytes) */
void jt_0FB730(void) {
    M68K_OR8(g_m68k.d[0], 0x4e);
    M68K_OR8(g_m68k.d[0], _predec8(0));
    /* WARNING: function did not end with RTS */
}

/* $0FB740-$0FB744  (1 instructions, 4 bytes) */
void jt_0FB740(void) {
    M68K_OR8(g_m68k.d[0], 0x4e);
    /* WARNING: function did not end with RTS */
}

/* $0FB74C-$0FB752  (2 instructions, 6 bytes) */
void jt_0FB74C(void) {
    M68K_OR8(g_m68k.d[0], 0xfa);
    M68K_AND8(g_m68k.d[0], bus_read8(g_m68k.a[0]));
    /* WARNING: function did not end with RTS */
}

/* $0FB774-$0FB778  (1 instructions, 4 bytes) */
void jt_0FB774(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0FB776-$0FB77A  (1 instructions, 4 bytes) */
void jt_0FB776(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0FB778-$0FB786  (4 instructions, 14 bytes) */
void jt_0FB778(void) {
    M68K_OR8(g_m68k.d[0], 0x4e);
    g_m68k.a[4] = (uint32_t)(int32_t)(int16_t)(uint16_t)(bus_read16(g_m68k.a[0] + 0x42 + (int16_t)(uint16_t)g_m68k.d[0]));
    if (M68K_CC_VC) { func_table_call(0x0FB752); return; }
    M68K_OR8(g_m68k.d[0], 0xa);
    /* WARNING: function did not end with RTS */
}

/* $0FB792-$0FB798  (1 instructions, 6 bytes) */
void jt_0FB792(void) {
    { uint32_t _ea = (g_m68k.a[4] + 0x5); uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x38); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0FB7AA-$0FB7B0  (2 instructions, 6 bytes) */
void jt_0FB7AA(void) {
    M68K_OR8(g_m68k.d[0], 0x4e);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0FB7DA-$0FB7DE  (1 instructions, 4 bytes) */
void jt_0FB7DA(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0FB7DC-$0FB7E6  (3 instructions, 10 bytes) */
void jt_0FB7DC(void) {
    M68K_OR8(g_m68k.d[0], 0xee);
    g_m68k.d[0] = (uint32_t)(int32_t)(int8_t)(0xd8); M68K_TST32(g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0FB7E4-$0FB7E8  (1 instructions, 4 bytes) */
void jt_0FB7E4(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0FB7E6-$0FB7F2  (4 instructions, 12 bytes) */
void jt_0FB7E6(void) {
    M68K_OR8(g_m68k.d[0], 0xe5);
    g_m68k.d[0] = (uint32_t)(int32_t)(int8_t)(0xd8); M68K_TST32(g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x8e);
    bus_write8(g_m68k.a[0], M68K_CC_VC ? 0xFF : 0x00);
    /* WARNING: function did not end with RTS */
}

/* $0FB7F8-$0FB7FC  (1 instructions, 4 bytes) */
void jt_0FB7F8(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0FB7FA-$0FB7FE  (1 instructions, 4 bytes) */
void jt_0FB7FA(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0FB7FC-$0FB80E  (6 instructions, 18 bytes) */
void jt_0FB7FC(void) {
    M68K_OR8(g_m68k.d[0], 0xfe);
    M68K_CMP16(g_m68k.d[0], g_m68k.d[0]);
    M68K_BTST(g_m68k.d[1], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[0], (uint32_t)(int32_t)(int16_t)(uint16_t)(g_m68k.d[0]));
    M68K_OR8(g_m68k.d[0], 0xff);
    M68K_OR16(g_m68k.d[0], 0x102);
    /* WARNING: function did not end with RTS */
}

/* $0FB81A-$0FB81E  (1 instructions, 4 bytes) */
void jt_0FB81A(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0FB81C-$0FB820  (1 instructions, 4 bytes) */
void jt_0FB81C(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0FB81E-$0FB824  (2 instructions, 6 bytes) */
void jt_0FB81E(void) {
    M68K_OR8(g_m68k.d[0], 0x4e);
    M68K_OR8(g_m68k.d[0], _predec8(0));
    /* WARNING: function did not end with RTS */
}

/* $0FB82E-$0FB832  (1 instructions, 4 bytes) */
void jt_0FB82E(void) {
    M68K_OR8(g_m68k.d[0], 0x8e);
    /* WARNING: function did not end with RTS */
}

/* $0FB872-$0FB87C  (3 instructions, 10 bytes) */
void jt_0FB872(void) {
    M68K_OR8(g_m68k.d[0], 0xe6);
    M68K_ADD8(g_m68k.d[0], bus_read8(g_m68k.a[0] + (-0x19) + (int16_t)(uint16_t)g_m68k.d[0]));
    /* TODO $0FB87A: dc.w $f8a0  [F8 A0] */
    /* WARNING: function did not end with RTS */
}

/* $0FB886-$0FB896  (4 instructions, 16 bytes) */
void jt_0FB886(void) {
    { uint32_t _ea = g_m68k.a[2]; uint32_t _tmp = bus_read32(_ea); M68K_OR32(_tmp, 0x38900092); bus_write32(_ea, _tmp); }
    M68K_SUB16(g_m68k.d[4], bus_read16(g_m68k.a[0] + (-0x6e) + (int16_t)(uint16_t)g_m68k.d[0]));
    /* TODO $0FB890: dc.w $f850  [F8 50] */
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0FB894-$0FB898  (1 instructions, 4 bytes) */
void jt_0FB894(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0FB896-$0FB89E  (3 instructions, 8 bytes) */
void jt_0FB896(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}
