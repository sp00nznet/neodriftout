/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $0F8ABE - $0F9462 */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

/* $0F8ABE-$0F8AC0  (1 instructions, 2 bytes) */
void jt_0F8ABE(void) {
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F8AC6-$0F8AC8  (1 instructions, 2 bytes) */
void jt_0F8AC6(void) {
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0F8B72-$0F8B74  (1 instructions, 2 bytes) */
void jt_0F8B72(void) {
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F8BB8-$0F8BCA  (9 instructions, 18 bytes) */
void jt_0F8BB8(void) {
    /* TODO $0F8BB8: dc.w $8d40  [8D 40] */
    /* TODO $0F8BBA: sbcd.b d6, d1  [83 06] */
    M68K_OR16(g_m68k.d[5], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[3], g_m68k.d[6]);
    /* TODO $0F8BC0: dc.w $8740  [87 40] */
    /* TODO $0F8BC2: sbcd.b d6, d4  [89 06] */
    M68K_OR16(g_m68k.d[2], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[6], g_m68k.d[6]);
    /* TODO $0F8BC8: dc.w $8140  [81 40] */
    /* WARNING: function did not end with RTS */
}

/* $0F8BE0-$0F8C20  (32 instructions, 64 bytes) */
void jt_0F8BE0(void) {
    M68K_SUB8(g_m68k.d[0], _postinc8(0));
    M68K_OR8(g_m68k.d[5], _predec8(0));
    M68K_OR16(g_m68k.d[3], g_m68k.d[1]);
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $0F8BE8: dc.w $8741  [87 41] */
    M68K_OR8(g_m68k.d[4], _predec8(0));
    M68K_OR16(g_m68k.d[4], g_m68k.d[1]);
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* TODO $0F8BF0: dc.w $8941  [89 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* TODO $0F8BF4: dc.w $8941  [89 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* TODO $0F8BF8: dc.w $8941  [89 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* TODO $0F8BFC: dc.w $8941  [89 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* TODO $0F8C00: dc.w $8941  [89 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* TODO $0F8C04: dc.w $8941  [89 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* TODO $0F8C08: dc.w $8941  [89 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* TODO $0F8C0C: dc.w $8941  [89 41] */
    M68K_OR8(g_m68k.d[3], _predec8(0));
    M68K_OR16(g_m68k.d[5], g_m68k.d[1]);
    M68K_OR8(g_m68k.d[3], _predec8(0));
    M68K_OR16(g_m68k.d[5], g_m68k.d[1]);
    M68K_OR8(g_m68k.d[3], _predec8(0));
    M68K_OR16(g_m68k.d[5], g_m68k.d[1]);
    M68K_OR8(g_m68k.d[3], _predec8(0));
    M68K_OR16(g_m68k.d[5], g_m68k.d[1]);
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F8C20-$0F8C22  (1 instructions, 2 bytes) */
void jt_0F8C20(void) {
    M68K_SUB8(g_m68k.d[0], _postinc8(0));
    /* WARNING: function did not end with RTS */
}

/* $0F8C38-$0F8C3A  (1 instructions, 2 bytes) */
void jt_0F8C38(void) {
    M68K_SUB8(g_m68k.d[0], _postinc8(0));
    /* WARNING: function did not end with RTS */
}

/* $0F8C40-$0F8C80  (32 instructions, 64 bytes) */
void jt_0F8C40(void) {
    M68K_SUB8(g_m68k.d[0], _postinc8(0));
    M68K_OR16(g_m68k.d[3], g_m68k.d[1]);
    M68K_OR8(g_m68k.d[5], _predec8(0));
    M68K_OR16(g_m68k.d[4], g_m68k.d[1]);
    M68K_OR8(g_m68k.d[4], _predec8(0));
    M68K_OR16(g_m68k.d[4], g_m68k.d[1]);
    M68K_OR8(g_m68k.d[4], _predec8(0));
    /* TODO $0F8C4E: dc.w $8941  [89 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* TODO $0F8C52: dc.w $8941  [89 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* TODO $0F8C56: dc.w $8941  [89 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* TODO $0F8C5A: dc.w $8941  [89 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* TODO $0F8C5E: dc.w $8941  [89 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* TODO $0F8C62: dc.w $8941  [89 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* TODO $0F8C66: dc.w $8941  [89 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* TODO $0F8C6A: dc.w $8941  [89 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[5], g_m68k.d[1]);
    M68K_OR8(g_m68k.d[3], _predec8(0));
    M68K_OR16(g_m68k.d[5], g_m68k.d[1]);
    M68K_OR8(g_m68k.d[3], _predec8(0));
    M68K_OR16(g_m68k.d[5], g_m68k.d[1]);
    M68K_OR8(g_m68k.d[3], _predec8(0));
    M68K_OR16(g_m68k.d[5], g_m68k.d[1]);
    M68K_OR8(g_m68k.d[3], _predec8(0));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F8C80-$0F8C88  (4 instructions, 8 bytes) */
void jt_0F8C80(void) {
    /* TODO $0F8C80: dc.w $ff10  [FF 10] */
    /* TODO $0F8C82: dc.w $ff10  [FF 10] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[0]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F8C88-$0F8CD2  (27 instructions, 74 bytes) */
void jt_0F8C88(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008110; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008110; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008110; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008110; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008110; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008110; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008441; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[1], bus_read8(0x008D41));
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[1], bus_read8(0x008D41));
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008E41; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0F8CBA: dc.w $8f41  [8F 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0F8CBE: dc.w $8f41  [8F 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0F8CC2: dc.w $8f41  [8F 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0F8CC6: dc.w $8f41  [8F 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0F8CCA: dc.w $8f41  [8F 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0F8CCE: dc.w $8f41  [8F 41] */
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F8CD2-$0F8CDA  (4 instructions, 8 bytes) */
void jt_0F8CD2(void) {
    /* TODO $0F8CD2: dc.w $ff10  [FF 10] */
    /* TODO $0F8CD4: dc.w $ff10  [FF 10] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[0]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F8CDA-$0F8D1C  (33 instructions, 66 bytes) */
void jt_0F8CDA(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0F8CDC: dc.w $8f41  [8F 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0F8CE0: dc.w $8f41  [8F 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0F8CE4: dc.w $8f41  [8F 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0F8CE8: dc.w $8f41  [8F 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0F8CEC: dc.w $8f41  [8F 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0F8CF0: dc.w $8f41  [8F 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0F8CF4: dc.w $8f41  [8F 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0F8CF8: dc.w $8f41  [8F 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0F8CFC: dc.w $8f41  [8F 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0F8D00: dc.w $8f41  [8F 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0F8D04: dc.w $8f41  [8F 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0F8D08: dc.w $8f41  [8F 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0F8D0C: dc.w $8f41  [8F 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0F8D10: dc.w $8f41  [8F 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0F8D14: dc.w $8f41  [8F 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0F8D18: dc.w $8f41  [8F 41] */
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F8D1C-$0F8D66  (27 instructions, 74 bytes) */
void jt_0F8D1C(void) {
    { uint32_t _ea = 0x008100; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008100; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008100; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008100; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008100; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008100; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[2], g_m68k.d[1]);
    { uint32_t _ea = 0x008100; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    /* TODO $0F8D3A: dc.w $8d41  [8D 41] */
    M68K_OR8(g_m68k.d[1], bus_read8(0x008100));
    /* TODO $0F8D40: dc.w $8d41  [8D 41] */
    M68K_OR8(g_m68k.d[1], bus_read8(0x008100));
    M68K_OR16(g_m68k.d[7], g_m68k.d[1]);
    { uint32_t _ea = 0x008100; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0F8D4C: dc.w $8f41  [8F 41] */
    /* TODO $0F8D4E: sbcd.b d0, d0  [81 00] */
    /* TODO $0F8D50: dc.w $8f41  [8F 41] */
    /* TODO $0F8D52: sbcd.b d0, d0  [81 00] */
    /* TODO $0F8D54: dc.w $8f41  [8F 41] */
    /* TODO $0F8D56: sbcd.b d0, d0  [81 00] */
    /* TODO $0F8D58: dc.w $8f41  [8F 41] */
    /* TODO $0F8D5A: sbcd.b d0, d0  [81 00] */
    /* TODO $0F8D5C: dc.w $8f41  [8F 41] */
    /* TODO $0F8D5E: sbcd.b d0, d0  [81 00] */
    /* TODO $0F8D60: dc.w $8f41  [8F 41] */
    /* TODO $0F8D62: sbcd.b d0, d0  [81 00] */
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F8D6E-$0F8DB0  (33 instructions, 66 bytes) */
void jt_0F8D6E(void) {
    /* TODO $0F8D6E: dc.w $8f41  [8F 41] */
    /* TODO $0F8D70: sbcd.b d0, d0  [81 00] */
    /* TODO $0F8D72: dc.w $8f41  [8F 41] */
    /* TODO $0F8D74: sbcd.b d0, d0  [81 00] */
    /* TODO $0F8D76: dc.w $8f41  [8F 41] */
    /* TODO $0F8D78: sbcd.b d0, d0  [81 00] */
    /* TODO $0F8D7A: dc.w $8f41  [8F 41] */
    /* TODO $0F8D7C: sbcd.b d0, d0  [81 00] */
    /* TODO $0F8D7E: dc.w $8f41  [8F 41] */
    /* TODO $0F8D80: sbcd.b d0, d0  [81 00] */
    /* TODO $0F8D82: dc.w $8f41  [8F 41] */
    /* TODO $0F8D84: sbcd.b d0, d0  [81 00] */
    /* TODO $0F8D86: dc.w $8f41  [8F 41] */
    /* TODO $0F8D88: sbcd.b d0, d0  [81 00] */
    /* TODO $0F8D8A: dc.w $8f41  [8F 41] */
    /* TODO $0F8D8C: sbcd.b d0, d0  [81 00] */
    /* TODO $0F8D8E: dc.w $8f41  [8F 41] */
    /* TODO $0F8D90: sbcd.b d0, d0  [81 00] */
    /* TODO $0F8D92: dc.w $8f41  [8F 41] */
    /* TODO $0F8D94: sbcd.b d0, d0  [81 00] */
    /* TODO $0F8D96: dc.w $8f41  [8F 41] */
    /* TODO $0F8D98: sbcd.b d0, d0  [81 00] */
    /* TODO $0F8D9A: dc.w $8f41  [8F 41] */
    /* TODO $0F8D9C: sbcd.b d0, d0  [81 00] */
    /* TODO $0F8D9E: dc.w $8f41  [8F 41] */
    /* TODO $0F8DA0: sbcd.b d0, d0  [81 00] */
    /* TODO $0F8DA2: dc.w $8f41  [8F 41] */
    /* TODO $0F8DA4: sbcd.b d0, d0  [81 00] */
    /* TODO $0F8DA6: dc.w $8f41  [8F 41] */
    /* TODO $0F8DA8: sbcd.b d0, d0  [81 00] */
    /* TODO $0F8DAA: dc.w $8f41  [8F 41] */
    /* TODO $0F8DAC: sbcd.b d0, d0  [81 00] */
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F8DC8-$0F8DFA  (25 instructions, 50 bytes) */
void jt_0F8DC8(void) {
    M68K_SUB8(g_m68k.d[0], _postinc8(0));
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    /* TODO $0F8DCC: dc.w $8141  [81 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    /* TODO $0F8DD0: dc.w $8341  [83 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    /* TODO $0F8DD4: dc.w $8141  [81 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    /* TODO $0F8DD8: dc.w $8141  [81 41] */
    M68K_OR8(g_m68k.d[7], _predec8(0));
    M68K_OR16(g_m68k.d[1], g_m68k.d[1]);
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    /* TODO $0F8DE0: dc.w $8341  [83 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    /* TODO $0F8DE4: dc.w $8541  [85 41] */
    M68K_OR8(g_m68k.d[5], _predec8(0));
    M68K_OR16(g_m68k.d[3], g_m68k.d[1]);
    M68K_OR8(g_m68k.d[6], _predec8(0));
    M68K_OR16(g_m68k.d[2], g_m68k.d[1]);
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    /* TODO $0F8DF0: dc.w $8341  [83 41] */
    M68K_OR8(g_m68k.d[7], _predec8(0));
    M68K_OR16(g_m68k.d[1], g_m68k.d[1]);
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    /* TODO $0F8DF8: dc.w $8141  [81 41] */
    /* WARNING: function did not end with RTS */
}

/* $0F8DFE-$0F8E00  (1 instructions, 2 bytes) */
void jt_0F8DFE(void) {
    M68K_SUB8(g_m68k.d[0], _postinc8(0));
    /* WARNING: function did not end with RTS */
}

/* $0F8E1A-$0F8E1C  (1 instructions, 2 bytes) */
void jt_0F8E1A(void) {
    M68K_SUB8(g_m68k.d[0], _postinc8(0));
    /* WARNING: function did not end with RTS */
}

/* $0F8E28-$0F8E2A  (1 instructions, 2 bytes) */
void jt_0F8E28(void) {
    M68K_SUB8(g_m68k.d[0], _postinc8(0));
    /* WARNING: function did not end with RTS */
}

/* $0F8E66-$0F8E6E  (4 instructions, 8 bytes) */
void jt_0F8E66(void) {
    /* TODO $0F8E66: dc.w $f040  [F0 40] */
    /* TODO $0F8E68: dc.w $ff20  [FF 20] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F8E94-$0F8EAE  (7 instructions, 26 bytes) */
void jt_0F8E94(void) {
    /* TODO $0F8E94: dc.w $f040  [F0 40] */
    { uint32_t _ea = /* UNHANDLED_ADDR: (a0, invalid.w) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[2], bus_read8(g_m68k.a[0] + 0x40 + (int32_t)g_m68k.a[0]));
    { uint32_t _ea = (g_m68k.a[0] + 0x40 + (int32_t)g_m68k.a[0]); uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[4], bus_read8(g_m68k.a[0] + 0x40 + (int16_t)(uint16_t)g_m68k.a[0]));
    M68K_OR8(g_m68k.d[6], bus_read8(g_m68k.a[0] + 0x40 + (int16_t)(uint16_t)g_m68k.a[0]));
    { uint32_t _ea = (g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.a[0]); uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0F8EAE-$0F8EB6  (3 instructions, 8 bytes) */
void jt_0F8EAE(void) {
    /* TODO $0F8EAE: dc.w $f040  [F0 40] */
    /* TODO $0F8EB0: dc.w $ff30  [FF 30] */
    { uint32_t _ea = (g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.a[0]); uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0F8EC6-$0F8EC8  (1 instructions, 2 bytes) */
void jt_0F8EC6(void) {
    M68K_SUB8(g_m68k.d[0], _postinc8(0));
    /* WARNING: function did not end with RTS */
}

/* $0F8EF4-$0F8EF6  (1 instructions, 2 bytes) */
void jt_0F8EF4(void) {
    M68K_SUB8(g_m68k.d[0], _postinc8(0));
    /* WARNING: function did not end with RTS */
}

/* $0F8F14-$0F8F16  (1 instructions, 2 bytes) */
void jt_0F8F14(void) {
    M68K_SUB8(g_m68k.d[0], _postinc8(0));
    /* WARNING: function did not end with RTS */
}

/* $0F8F1E-$0F8F50  (13 instructions, 50 bytes) */
void jt_0F8F1E(void) {
    M68K_SUB8(g_m68k.d[0], _postinc8(0));
    M68K_SUB8(g_m68k.d[0], /* UNHANDLED_READ: ([a0]) */ 0);
    { uint32_t _ea = /* UNHANDLED_ADDR: ([a0]) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = /* UNHANDLED_ADDR: ([a0]) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = /* UNHANDLED_ADDR: ([a0]) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[0] + 0x41 + (int16_t)(uint16_t)g_m68k.a[0]); uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[7], /* UNHANDLED_READ: ([a0]) */ 0);
    { uint32_t _ea = /* UNHANDLED_ADDR: ([a0]) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[0] + 0x41 + (int16_t)(uint16_t)g_m68k.a[0]); uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[5], bus_read8(g_m68k.a[0] + 0x41 + (int16_t)(uint16_t)g_m68k.a[0]));
    M68K_OR8(g_m68k.d[6], /* UNHANDLED_READ: ([a0]) */ 0);
    { uint32_t _ea = (g_m68k.a[0] + 0x41 + (int16_t)(uint16_t)g_m68k.a[0]); uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[7], /* UNHANDLED_READ: ([a0]) */ 0);
    /* WARNING: function did not end with RTS */
}

/* $0F9074-$0F9086  (9 instructions, 18 bytes) */
void jt_0F9074(void) {
    /* TODO $0F9074: dc.w $8d40  [8D 40] */
    /* TODO $0F9076: sbcd.b d6, d1  [83 06] */
    M68K_OR16(g_m68k.d[5], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[3], g_m68k.d[6]);
    /* TODO $0F907C: dc.w $8740  [87 40] */
    /* TODO $0F907E: sbcd.b d6, d4  [89 06] */
    M68K_OR16(g_m68k.d[2], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[6], g_m68k.d[6]);
    /* TODO $0F9084: dc.w $8140  [81 40] */
    /* WARNING: function did not end with RTS */
}

/* $0F90C4-$0F90F8  (26 instructions, 52 bytes) */
void jt_0F90C4(void) {
    M68K_OR8(g_m68k.d[3], _predec8(0));
    M68K_OR16(g_m68k.d[5], g_m68k.d[1]);
    M68K_OR8(g_m68k.d[3], _predec8(0));
    M68K_OR16(g_m68k.d[5], g_m68k.d[1]);
    M68K_OR8(g_m68k.d[3], _predec8(0));
    M68K_OR16(g_m68k.d[5], g_m68k.d[1]);
    M68K_OR8(g_m68k.d[3], _predec8(0));
    M68K_OR16(g_m68k.d[5], g_m68k.d[1]);
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* TODO $0F90D6: dc.w $8941  [89 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* TODO $0F90DA: dc.w $8941  [89 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $0F90DE: dc.w $8741  [87 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    /* TODO $0F90E2: dc.w $8541  [85 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    /* TODO $0F90E6: dc.w $8341  [83 41] */
    M68K_OR8(g_m68k.d[7], _predec8(0));
    M68K_OR16(g_m68k.d[1], g_m68k.d[1]);
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    /* TODO $0F90EE: dc.w $8341  [83 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    /* TODO $0F90F2: dc.w $8141  [81 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    /* TODO $0F90F6: dc.w $8141  [81 41] */
    /* WARNING: function did not end with RTS */
}

/* $0F9126-$0F9162  (30 instructions, 60 bytes) */
void jt_0F9126(void) {
    M68K_OR16(g_m68k.d[5], g_m68k.d[1]);
    M68K_OR8(g_m68k.d[3], _predec8(0));
    M68K_OR16(g_m68k.d[5], g_m68k.d[1]);
    M68K_OR8(g_m68k.d[3], _predec8(0));
    M68K_OR16(g_m68k.d[5], g_m68k.d[1]);
    M68K_OR8(g_m68k.d[3], _predec8(0));
    M68K_OR16(g_m68k.d[5], g_m68k.d[1]);
    M68K_OR8(g_m68k.d[3], _predec8(0));
    /* TODO $0F9136: dc.w $8941  [89 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* TODO $0F913A: dc.w $8941  [89 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* TODO $0F913E: dc.w $8941  [89 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* TODO $0F9142: dc.w $8941  [89 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* TODO $0F9146: dc.w $8941  [89 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* TODO $0F914A: dc.w $8941  [89 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* TODO $0F914E: dc.w $8941  [89 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* TODO $0F9152: dc.w $8941  [89 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[4], g_m68k.d[1]);
    M68K_OR8(g_m68k.d[4], _predec8(0));
    M68K_OR16(g_m68k.d[3], g_m68k.d[1]);
    M68K_OR8(g_m68k.d[5], _predec8(0));
    M68K_OR16(g_m68k.d[3], g_m68k.d[1]);
    M68K_OR8(g_m68k.d[5], _predec8(0));
    /* WARNING: function did not end with RTS */
}

/* $0F9176-$0F917E  (4 instructions, 8 bytes) */
void jt_0F9176(void) {
    /* TODO $0F9176: dc.w $ff10  [FF 10] */
    /* TODO $0F9178: dc.w $ff10  [FF 10] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[0]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F917E-$0F91C0  (33 instructions, 66 bytes) */
void jt_0F917E(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0F9180: dc.w $8f41  [8F 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0F9184: dc.w $8f41  [8F 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0F9188: dc.w $8f41  [8F 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0F918C: dc.w $8f41  [8F 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0F9190: dc.w $8f41  [8F 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0F9194: dc.w $8f41  [8F 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0F9198: dc.w $8f41  [8F 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0F919C: dc.w $8f41  [8F 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0F91A0: dc.w $8f41  [8F 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0F91A4: dc.w $8f41  [8F 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0F91A8: dc.w $8f41  [8F 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0F91AC: dc.w $8f41  [8F 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0F91B0: dc.w $8f41  [8F 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0F91B4: dc.w $8f41  [8F 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0F91B8: dc.w $8f41  [8F 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0F91BC: dc.w $8f41  [8F 41] */
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F91C0-$0F91C8  (4 instructions, 8 bytes) */
void jt_0F91C0(void) {
    /* TODO $0F91C0: dc.w $ff10  [FF 10] */
    /* TODO $0F91C2: dc.w $ff10  [FF 10] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[0]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F91C8-$0F9226  (32 instructions, 94 bytes) */
void jt_0F91C8(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0F91CA: dc.w $8f41  [8F 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0F91CE: dc.w $8f41  [8F 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0F91D2: dc.w $8f41  [8F 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0F91D6: dc.w $8f41  [8F 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0F91DA: dc.w $8f41  [8F 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0F91DE: dc.w $8f41  [8F 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008E41; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[1], bus_read8(0x008D41));
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008C41; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008241; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[3], bus_read8(0x008441));
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008241; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008141; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[1], bus_read8(0x008110));
    M68K_OR8(g_m68k.d[2], bus_read8(0x008141));
    { uint32_t _ea = 0x008141; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[1], bus_read8(0x008110));
    { uint32_t _ea = 0x008110; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008110; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008110; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008000; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0F9226-$0F9268  (33 instructions, 66 bytes) */
void jt_0F9226(void) {
    /* TODO $0F9226: dc.w $8f41  [8F 41] */
    /* TODO $0F9228: sbcd.b d0, d0  [81 00] */
    /* TODO $0F922A: dc.w $8f41  [8F 41] */
    /* TODO $0F922C: sbcd.b d0, d0  [81 00] */
    /* TODO $0F922E: dc.w $8f41  [8F 41] */
    /* TODO $0F9230: sbcd.b d0, d0  [81 00] */
    /* TODO $0F9232: dc.w $8f41  [8F 41] */
    /* TODO $0F9234: sbcd.b d0, d0  [81 00] */
    /* TODO $0F9236: dc.w $8f41  [8F 41] */
    /* TODO $0F9238: sbcd.b d0, d0  [81 00] */
    /* TODO $0F923A: dc.w $8f41  [8F 41] */
    /* TODO $0F923C: sbcd.b d0, d0  [81 00] */
    /* TODO $0F923E: dc.w $8f41  [8F 41] */
    /* TODO $0F9240: sbcd.b d0, d0  [81 00] */
    /* TODO $0F9242: dc.w $8f41  [8F 41] */
    /* TODO $0F9244: sbcd.b d0, d0  [81 00] */
    /* TODO $0F9246: dc.w $8f41  [8F 41] */
    /* TODO $0F9248: sbcd.b d0, d0  [81 00] */
    /* TODO $0F924A: dc.w $8f41  [8F 41] */
    /* TODO $0F924C: sbcd.b d0, d0  [81 00] */
    /* TODO $0F924E: dc.w $8f41  [8F 41] */
    /* TODO $0F9250: sbcd.b d0, d0  [81 00] */
    /* TODO $0F9252: dc.w $8f41  [8F 41] */
    /* TODO $0F9254: sbcd.b d0, d0  [81 00] */
    /* TODO $0F9256: dc.w $8f41  [8F 41] */
    /* TODO $0F9258: sbcd.b d0, d0  [81 00] */
    /* TODO $0F925A: dc.w $8f41  [8F 41] */
    /* TODO $0F925C: sbcd.b d0, d0  [81 00] */
    /* TODO $0F925E: dc.w $8f41  [8F 41] */
    /* TODO $0F9260: sbcd.b d0, d0  [81 00] */
    /* TODO $0F9262: dc.w $8f41  [8F 41] */
    /* TODO $0F9264: sbcd.b d0, d0  [81 00] */
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F9270-$0F92C6  (30 instructions, 86 bytes) */
void jt_0F9270(void) {
    /* TODO $0F9270: dc.w $8f41  [8F 41] */
    /* TODO $0F9272: sbcd.b d0, d0  [81 00] */
    /* TODO $0F9274: dc.w $8f41  [8F 41] */
    /* TODO $0F9276: sbcd.b d0, d0  [81 00] */
    /* TODO $0F9278: dc.w $8f41  [8F 41] */
    /* TODO $0F927A: sbcd.b d0, d0  [81 00] */
    /* TODO $0F927C: dc.w $8f41  [8F 41] */
    /* TODO $0F927E: sbcd.b d0, d0  [81 00] */
    /* TODO $0F9280: dc.w $8f41  [8F 41] */
    /* TODO $0F9282: sbcd.b d0, d0  [81 00] */
    /* TODO $0F9284: dc.w $8f41  [8F 41] */
    /* TODO $0F9286: sbcd.b d0, d0  [81 00] */
    M68K_OR16(g_m68k.d[7], g_m68k.d[1]);
    { uint32_t _ea = 0x008100; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0F928E: dc.w $8d41  [8D 41] */
    M68K_OR8(g_m68k.d[1], bus_read8(0x008100));
    /* TODO $0F9294: dc.w $8d41  [8D 41] */
    M68K_OR8(g_m68k.d[1], bus_read8(0x008100));
    M68K_OR16(g_m68k.d[2], g_m68k.d[1]);
    M68K_OR8(g_m68k.d[4], bus_read8(0x008141));
    M68K_OR8(g_m68k.d[1], bus_read8(0x008100));
    M68K_OR8(g_m68k.d[1], bus_read8(0x008141));
    M68K_OR8(g_m68k.d[6], bus_read8(0x008100));
    M68K_OR8(g_m68k.d[1], bus_read8(0x008141));
    M68K_OR8(g_m68k.d[6], bus_read8(0x008100));
    { uint32_t _ea = 0x008100; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008100; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008100; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008100; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F92CE-$0F92D0  (1 instructions, 2 bytes) */
void jt_0F92CE(void) {
    /* TODO $0F92CE: dc.w $ff20  [FF 20] */
    /* WARNING: function did not end with RTS */
}

/* $0F92D8-$0F92DA  (1 instructions, 2 bytes) */
void jt_0F92D8(void) {
    /* TODO $0F92D8: dc.w $ff20  [FF 20] */
    /* WARNING: function did not end with RTS */
}

/* $0F92F2-$0F92F4  (1 instructions, 2 bytes) */
void jt_0F92F2(void) {
    /* TODO $0F92F2: dc.w $ff20  [FF 20] */
    /* WARNING: function did not end with RTS */
}

/* $0F92FC-$0F92FE  (1 instructions, 2 bytes) */
void jt_0F92FC(void) {
    /* TODO $0F92FC: dc.w $ff20  [FF 20] */
    /* WARNING: function did not end with RTS */
}

/* $0F933A-$0F934E  (10 instructions, 20 bytes) */
void jt_0F933A(void) {
    M68K_ASR8(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[7], _predec8(0));
    /* TODO $0F9340: dc.w $8340  [83 40] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    /* TODO $0F9344: dc.w $8340  [83 40] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[2], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[6], _predec8(0));
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F9362-$0F9372  (5 instructions, 16 bytes) */
void jt_0F9362(void) {
    /* TODO $0F9362: roxr.l #$7, d0  [EE 30] */
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    { uint32_t _ea = /* UNHANDLED_ADDR: (a0, invalid.w) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = /* UNHANDLED_ADDR: (a0, invalid.w) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[6], bus_read8(g_m68k.a[0] + 0x40 + (int16_t)(uint16_t)g_m68k.a[5]));
    /* WARNING: function did not end with RTS */
}

/* $0F93AE-$0F93B0  (1 instructions, 2 bytes) */
void jt_0F93AE(void) {
    /* TODO $0F93AE: dc.w $ff30  [FF 30] */
    /* WARNING: function did not end with RTS */
}

/* $0F93B8-$0F93BA  (1 instructions, 2 bytes) */
void jt_0F93B8(void) {
    /* TODO $0F93B8: dc.w $ff30  [FF 30] */
    /* WARNING: function did not end with RTS */
}

/* $0F93D2-$0F93D4  (1 instructions, 2 bytes) */
void jt_0F93D2(void) {
    /* TODO $0F93D2: dc.w $ff30  [FF 30] */
    /* WARNING: function did not end with RTS */
}

/* $0F93DC-$0F93DE  (1 instructions, 2 bytes) */
void jt_0F93DC(void) {
    /* TODO $0F93DC: dc.w $ff30  [FF 30] */
    /* WARNING: function did not end with RTS */
}

/* $0F93F6-$0F93FE  (4 instructions, 8 bytes) */
void jt_0F93F6(void) {
    /* TODO $0F93F6: dc.w $ff14  [FF 14] */
    /* TODO $0F93F8: dc.w $ff14  [FF 14] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[4]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F93FE-$0F9400  (1 instructions, 2 bytes) */
void jt_0F93FE(void) {
    /* TODO $0F93FE: dc.w $ff14  [FF 14] */
    /* WARNING: function did not end with RTS */
}

/* $0F9400-$0F9406  (3 instructions, 6 bytes) */
void jt_0F9400(void) {
    /* TODO $0F9400: dc.w $ff14  [FF 14] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[4]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F9406-$0F9408  (1 instructions, 2 bytes) */
void jt_0F9406(void) {
    /* TODO $0F9406: dc.w $ff14  [FF 14] */
    /* WARNING: function did not end with RTS */
}

/* $0F940E-$0F9436  (20 instructions, 40 bytes) */
void jt_0F940E(void) {
    M68K_CMP8(g_m68k.d[7], bus_read8(g_m68k.a[4]));
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    /* TODO $0F9414: dc.w $8340  [83 40] */
    M68K_OR8(g_m68k.d[6], bus_read8(g_m68k.a[4]));
    M68K_OR16(g_m68k.d[2], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    /* TODO $0F941C: dc.w $8540  [85 40] */
    M68K_OR8(g_m68k.d[5], bus_read8(g_m68k.a[4]));
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $0F9424: dc.w $8740  [87 40] */
    M68K_OR8(g_m68k.d[4], bus_read8(g_m68k.a[4]));
    M68K_OR16(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* TODO $0F942C: dc.w $8940  [89 40] */
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* TODO $0F9430: dc.w $8940  [89 40] */
    M68K_OR8(g_m68k.d[3], bus_read8(g_m68k.a[2]));
    /* TODO $0F9434: dc.w $8940  [89 40] */
    /* WARNING: function did not end with RTS */
}

/* $0F944C-$0F9462  (11 instructions, 22 bytes) */
void jt_0F944C(void) {
    /* TODO $0F944C: dc.w $ff10  [FF 10] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    /* TODO $0F9452: dc.w $8140  [81 40] */
    M68K_OR8(g_m68k.d[7], bus_read8(g_m68k.a[6]));
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[6], bus_read8(g_m68k.a[6]));
    M68K_OR16(g_m68k.d[2], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $0F945E: dc.w $8740  [87 40] */
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}
