/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $0FB740 - $0FB980 */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

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

/* $0FB89C-$0FB8A0  (1 instructions, 4 bytes) */
void jt_0FB89C(void) {
    M68K_OR8(g_m68k.d[0], 0x28);
    /* WARNING: function did not end with RTS */
}

/* $0FB89E-$0FB8B2  (6 instructions, 20 bytes) */
void jt_0FB89E(void) {
    { uint32_t _ea = (g_m68k.a[0] + 0x20); uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xb0); bus_write8(_ea, _tmp); }
    M68K_ADD32(g_m68k.d[4], bus_read32(g_m68k.a[0] + 0x20 + (int16_t)(uint16_t)g_m68k.d[0]));
    M68K_DIVU(g_m68k.d[0], _postinc16(0));
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xe8); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xf0); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x28);
    /* WARNING: function did not end with RTS */
}

/* $0FB8B0-$0FB8BC  (4 instructions, 12 bytes) */
void jt_0FB8B0(void) {
    { uint32_t _ea = (g_m68k.a[0] + 0x26); uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xa8); bus_write8(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[0] + 0x26)); bus_write8(g_m68k.a[0], _mv); M68K_TST8(_mv); }
    g_m68k.d[0] = (uint32_t)(int32_t)(int8_t)(0x80); M68K_TST32(g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0FB8CC-$0FB8D2  (1 instructions, 6 bytes) */
void jt_0FB8CC(void) {
    { uint32_t _ea = g_m68k.a[2]; uint32_t _tmp = bus_read32(_ea); M68K_OR32(_tmp, 0xe8000000); bus_write32(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0FB8D2-$0FB8D6  (1 instructions, 4 bytes) */
void jt_0FB8D2(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0FB8D4-$0FB8D8  (1 instructions, 4 bytes) */
void jt_0FB8D4(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0FB8D6-$0FB8DA  (1 instructions, 4 bytes) */
void jt_0FB8D6(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0FB8D8-$0FB8DC  (1 instructions, 4 bytes) */
void jt_0FB8D8(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0FB8DA-$0FB8DE  (1 instructions, 4 bytes) */
void jt_0FB8DA(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0FB8DC-$0FB8E0  (1 instructions, 4 bytes) */
void jt_0FB8DC(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0FB8DE-$0FB8F0  (6 instructions, 18 bytes) */
void jt_0FB8DE(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0xa);
    { uint32_t _ea = 0x000028; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, 0x8); bus_write8(_ea, _tmp); }
    M68K_ADD8(g_m68k.d[0], bus_read8(g_m68k.a[0]));
    M68K_OR8(g_m68k.d[0], 0x30);
    /* WARNING: function did not end with RTS */
}

/* $0FB8EE-$0FB8F4  (2 instructions, 6 bytes) */
void jt_0FB8EE(void) {
    { uint32_t _ea = (g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0]); uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xf8); bus_write8(_ea, _tmp); }
    g_m68k.a[4] += (int16_t)(uint16_t)(bus_read16(0x000000));
    /* WARNING: function did not end with RTS */
}

/* $0FB8F4-$0FB90C  (6 instructions, 24 bytes) */
void jt_0FB8F4(void) {
    { uint32_t _ea = (g_m68k.a[4] + 0x38 + (int16_t)(uint16_t)g_m68k.d[0]); uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xa8); bus_write8(_ea, _tmp); }
    if (M68K_CC_VC) { func_table_call(0x0FB8CC); return; }
    { uint32_t _ea = (g_m68k.a[6] + 0 + (int16_t)(uint16_t)g_m68k.d[0]); uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xf0); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0xe6);
    M68K_ADD8(g_m68k.d[0], bus_read8(g_m68k.a[0] + (-0x19) + (int16_t)(uint16_t)g_m68k.d[0]));
    /* TODO $0FB90A: dc.w $f8a0  [F8 A0] */
    /* WARNING: function did not end with RTS */
}

/* $0FB920-$0FB924  (1 instructions, 4 bytes) */
void jt_0FB920(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0FB922-$0FB926  (1 instructions, 4 bytes) */
void jt_0FB922(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0FB924-$0FB928  (1 instructions, 4 bytes) */
void jt_0FB924(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0FB926-$0FB92A  (1 instructions, 4 bytes) */
void jt_0FB926(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0FB928-$0FB92C  (1 instructions, 4 bytes) */
void jt_0FB928(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

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
