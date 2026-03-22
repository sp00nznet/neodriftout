/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $072250 - $072E8C */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

/* $072250-$07226A  (13 instructions, 26 bytes) */
void jt_072250(void) {
    /* TODO $072250: dc.w $f018  [F0 18] */
    M68K_AND8(g_m68k.d[0], _postinc8(2));
    /* TODO $072254: dc.w $8340  [83 40] */
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[5], _postinc8(2));
    /* TODO $07225C: dc.w $8940  [89 40] */
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[6], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[2], _postinc8(2));
    /* TODO $072264: dc.w $8f40  [8F 40] */
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $07228A-$072292  (4 instructions, 8 bytes) */
void jt_07228A(void) {
    /* TODO $07228A: dc.w $ff10  [FF 10] */
    /* TODO $07228C: dc.w $ff10  [FF 10] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[0]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $07229A-$0722A2  (4 instructions, 8 bytes) */
void jt_07229A(void) {
    /* TODO $07229A: dc.w $ff10  [FF 10] */
    /* TODO $07229C: dc.w $ff10  [FF 10] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[0]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0722A2-$0722AA  (3 instructions, 8 bytes) */
void jt_0722A2(void) {
    /* TODO $0722A2: dc.w $ff7c  [FF 7C] */
    /* TODO $0722A4: dc.w $ff7c  [FF 7C] */
    M68K_OR16(g_m68k.d[1], 0x8000);
    /* WARNING: function did not end with RTS */
}

/* $0722BA-$0722C2  (3 instructions, 8 bytes) */
void jt_0722BA(void) {
    /* TODO $0722BA: dc.w $ff7c  [FF 7C] */
    /* TODO $0722BC: dc.w $ff7c  [FF 7C] */
    M68K_OR16(g_m68k.d[1], 0x8000);
    /* WARNING: function did not end with RTS */
}

/* $0722D4-$0722D8  (1 instructions, 4 bytes) */
void jt_0722D4(void) {
    /* TODO $0722D4: sbcd -(a4), -(a4), #$8740  [89 0C 87 40] */
    /* WARNING: function did not end with RTS */
}

/* $0722FA-$0722FC  (1 instructions, 2 bytes) */
void jt_0722FA(void) {
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0723C0-$0723CE  (7 instructions, 14 bytes) */
void jt_0723C0(void) {
    /* TODO $0723C0: dc.w $8740  [87 40] */
    /* TODO $0723C2: sbcd.b d4, d4  [89 04] */
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[5], g_m68k.d[4]);
    M68K_OR16(g_m68k.d[2], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[6], g_m68k.d[5]);
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $072514-$07251C  (4 instructions, 8 bytes) */
void jt_072514(void) {
    M68K_AND8(g_m68k.d[0], bus_read8(g_m68k.a[4]));
    /* TODO $072516: dc.w $ff13  [FF 13] */
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $07251C-$07255E  (33 instructions, 66 bytes) */
void jt_07251C(void) {
    M68K_OR8(g_m68k.d[7], bus_read8(g_m68k.a[4]));
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    /* TODO $072522: dc.w $8340  [83 40] */
    M68K_OR8(g_m68k.d[6], bus_read8(g_m68k.a[4]));
    M68K_OR16(g_m68k.d[2], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    /* TODO $07252A: dc.w $8540  [85 40] */
    M68K_OR8(g_m68k.d[5], bus_read8(g_m68k.a[3]));
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[5], bus_read8(g_m68k.a[3]));
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $072536: dc.w $8740  [87 40] */
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $07253A: dc.w $8740  [87 40] */
    M68K_OR8(g_m68k.d[4], bus_read8(g_m68k.a[3]));
    M68K_OR16(g_m68k.d[4], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[4], bus_read8(g_m68k.a[3]));
    M68K_OR16(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* TODO $072546: dc.w $8940  [89 40] */
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* TODO $07254A: dc.w $8940  [89 40] */
    M68K_OR8(g_m68k.d[3], bus_read8(g_m68k.a[3]));
    M68K_OR16(g_m68k.d[5], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[3], bus_read8(g_m68k.a[3]));
    M68K_OR16(g_m68k.d[5], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    /* TODO $072556: dc.w $8b40  [8B 40] */
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    /* TODO $07255A: dc.w $8b40  [8B 40] */
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $07255E-$072562  (2 instructions, 4 bytes) */
void jt_07255E(void) {
    /* TODO $07255E: roxr.b #$8, d2  [E0 12] */
    /* TODO $072560: dc.w $ff10  [FF 10] */
    /* WARNING: function did not end with RTS */
}

/* $072566-$07256E  (4 instructions, 8 bytes) */
void jt_072566(void) {
    M68K_OR8(g_m68k.d[2], bus_read8(g_m68k.a[2]));
    M68K_OR16(g_m68k.d[6], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[2], bus_read8(g_m68k.a[2]));
    /* TODO $07256C: dc.w $8b40  [8B 40] */
    /* WARNING: function did not end with RTS */
}

/* $0725F8-$0725FA  (1 instructions, 2 bytes) */
void jt_0725F8(void) {
    M68K_SUBX16(g_m68k.d[7], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $07266C-$07266E  (1 instructions, 2 bytes) */
void jt_07266C(void) {
    /* TODO $07266C: dc.w $8140  [81 40] */
    /* WARNING: function did not end with RTS */
}

/* $0726B4-$0726C2  (7 instructions, 14 bytes) */
void jt_0726B4(void) {
    M68K_OR16(g_m68k.d[6], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[2], g_m68k.d[6]);
    /* TODO $0726B8: dc.w $8940  [89 40] */
    /* TODO $0726BA: sbcd.b d6, d3  [87 06] */
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[5], g_m68k.d[6]);
    /* TODO $0726C0: dc.w $8340  [83 40] */
    /* WARNING: function did not end with RTS */
}

/* $0726C8-$0726E8  (9 instructions, 32 bytes) */
void jt_0726C8(void) {
    /* TODO $0726C8: dc.w $ff32  [FF 32] */
    { uint32_t _ea = /* UNHANDLED_ADDR: (a2, invalid.w) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[2] + 0x40 + (int16_t)(uint16_t)g_m68k.a[0]); uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[6], /* UNHANDLED_READ: (a2, invalid.w) */ 0);
    { uint32_t _ea = (g_m68k.a[2] + 0x40 + (int32_t)g_m68k.a[0]); uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[3], /* UNHANDLED_READ: (a2, invalid.w) */ 0);
    { uint32_t _ea = (g_m68k.a[2] + 0x40 + (int16_t)(uint16_t)g_m68k.a[1]); uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    /* TODO $0726E2: sbcd -(a2), -(a0), #$8f40  [81 0A 8F 40] */
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0726E8-$0726F6  (5 instructions, 14 bytes) */
void jt_0726E8(void) {
    { uint32_t _ea = /* UNHANDLED_ADDR: (a2, invalid.w) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    /* TODO $0726EC: dc.w $ff32  [FF 32] */
    /* TODO $0726EE: roxl.b d0, d2  [E1 32] */
    /* TODO $0726F0: dc.w $8340  [83 40] */
    { uint32_t _ea = (g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.a[0]); uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $072710-$072750  (26 instructions, 64 bytes) */
void jt_072710(void) {
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[5], /* UNHANDLED_READ: (a2, invalid.w) */ 0);
    { uint32_t _ea = (g_m68k.a[2] + 0x40 + (int32_t)g_m68k.a[0]); uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[2], /* UNHANDLED_READ: (a2, invalid.w) */ 0);
    { uint32_t _ea = (g_m68k.a[2] + 0x40 + (int16_t)(uint16_t)g_m68k.a[1]); uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $072722: sbcd -(a4), -(a1), #$8d40  [83 0C 8D 40] */
    /* TODO $072726: sbcd -(a4), -(a1), #$8d40  [83 0C 8D 40] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    /* TODO $07272C: dc.w $8d40  [8D 40] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    /* TODO $072730: dc.w $8d40  [8D 40] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    /* TODO $072734: dc.w $8d40  [8D 40] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    /* TODO $072738: dc.w $8d40  [8D 40] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    /* TODO $07273C: dc.w $8d40  [8D 40] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    /* TODO $072740: dc.w $8d40  [8D 40] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    /* TODO $072744: dc.w $8d40  [8D 40] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    /* TODO $072748: dc.w $8d40  [8D 40] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    /* TODO $07274C: dc.w $8d40  [8D 40] */
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $072750-$072768  (7 instructions, 24 bytes) */
void jt_072750(void) {
    M68K_SUB16(g_m68k.d[0], g_m68k.d[0]);
    { uint32_t _ea = /* UNHANDLED_ADDR: (a2, invalid.w) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[2], bus_read8(g_m68k.a[2] + 0x40 + (int32_t)g_m68k.a[0]));
    { uint32_t _ea = /* UNHANDLED_ADDR: (a2, invalid.w) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[5], bus_read8(g_m68k.a[2] + 0x40 + (int16_t)(uint16_t)g_m68k.a[0]));
    { uint32_t _ea = /* UNHANDLED_ADDR: (a2, invalid.w) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    /* TODO $072766: dc.w $ff32  [FF 32] */
    /* WARNING: function did not end with RTS */
}

/* $07276C-$07277E  (4 instructions, 18 bytes) */
void jt_07276C(void) {
    /* TODO $07276C: dc.w $f040  [F0 40] */
    { uint32_t _ea = /* UNHANDLED_ADDR: (a2, invalid.w) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[3], bus_read8(g_m68k.a[2] + 0x40 + (int32_t)g_m68k.a[0]));
    { uint32_t _ea = /* UNHANDLED_ADDR: ([$88408632, a2]) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0727A0-$0727B0  (2 instructions, 16 bytes) */
void jt_0727A0(void) {
    { uint32_t _ea = /* UNHANDLED_ADDR: ([$8e32827f, a2]) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = /* UNHANDLED_ADDR: ([$81408b32, a2]) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0727E8-$07282A  (33 instructions, 66 bytes) */
void jt_0727E8(void) {
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[7], _postinc8(4));
    /* TODO $0727EC: dc.w $8340  [83 40] */
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[2], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[6], _postinc8(4));
    /* TODO $0727F4: dc.w $8540  [85 40] */
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[5], _postinc8(5));
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[5], _postinc8(5));
    /* TODO $072800: dc.w $8740  [87 40] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $072804: dc.w $8740  [87 40] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[4], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[4], _postinc8(5));
    M68K_OR16(g_m68k.d[4], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[4], _postinc8(5));
    /* TODO $072810: dc.w $8940  [89 40] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* TODO $072814: dc.w $8940  [89 40] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[5], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[3], _postinc8(5));
    M68K_OR16(g_m68k.d[5], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[3], _postinc8(5));
    /* TODO $072820: dc.w $8b40  [8B 40] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    /* TODO $072824: dc.w $8b40  [8B 40] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $07282A-$07282C  (1 instructions, 2 bytes) */
void jt_07282A(void) {
    M68K_AND8(g_m68k.d[0], _postinc8(4));
    /* WARNING: function did not end with RTS */
}

/* $072832-$072836  (2 instructions, 4 bytes) */
void jt_072832(void) {
    M68K_OR16(g_m68k.d[6], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[2], _postinc8(6));
    /* WARNING: function did not end with RTS */
}

/* $072892-$072894  (1 instructions, 2 bytes) */
void jt_072892(void) {
    M68K_ROR8(g_m68k.d[6], 0x8);
    /* WARNING: function did not end with RTS */
}

/* $07289A-$0728A2  (4 instructions, 8 bytes) */
void jt_07289A(void) {
    /* TODO $07289A: dc.w $ff14  [FF 14] */
    /* TODO $07289C: dc.w $ff14  [FF 14] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[4]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0728A2-$0728AA  (4 instructions, 8 bytes) */
void jt_0728A2(void) {
    /* TODO $0728A2: dc.w $ff14  [FF 14] */
    /* TODO $0728A4: dc.w $ff14  [FF 14] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[4]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0728AA-$0728B2  (4 instructions, 8 bytes) */
void jt_0728AA(void) {
    /* TODO $0728AA: dc.w $ff14  [FF 14] */
    /* TODO $0728AC: dc.w $ff14  [FF 14] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[4]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0728B2-$0728BA  (4 instructions, 8 bytes) */
void jt_0728B2(void) {
    /* TODO $0728B2: dc.w $ff14  [FF 14] */
    /* TODO $0728B4: dc.w $ff14  [FF 14] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[4]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0728BA-$0728C2  (4 instructions, 8 bytes) */
void jt_0728BA(void) {
    /* TODO $0728BA: dc.w $ff17  [FF 17] */
    /* TODO $0728BC: dc.w $ff17  [FF 17] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[7]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0728C2-$0728CA  (4 instructions, 8 bytes) */
void jt_0728C2(void) {
    /* TODO $0728C2: dc.w $ff17  [FF 17] */
    /* TODO $0728C4: dc.w $ff17  [FF 17] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[7]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $072930-$07293C  (6 instructions, 12 bytes) */
void jt_072930(void) {
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* TODO $072932: dc.w $8940  [89 40] */
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* TODO $072936: dc.w $8940  [89 40] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[7]));
    M68K_AND16(g_m68k.d[5], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $072948-$07294C  (2 instructions, 4 bytes) */
void jt_072948(void) {
    M68K_ASR16(g_m68k.d[0], 0x8);
    /* TODO $07294A: dc.w $ff20  [FF 20] */
    /* WARNING: function did not end with RTS */
}

/* $072960-$072964  (2 instructions, 4 bytes) */
void jt_072960(void) {
    M68K_ASR16(g_m68k.d[0], 0x8);
    /* TODO $072962: dc.w $ff30  [FF 30] */
    /* WARNING: function did not end with RTS */
}

/* $072968-$072976  (7 instructions, 14 bytes) */
void jt_072968(void) {
    M68K_OR16(g_m68k.d[2], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[6], _postinc8(1));
    /* TODO $07296C: dc.w $8940  [89 40] */
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[6], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[2], _postinc8(1));
    M68K_CMP16(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $072A0A-$072A12  (4 instructions, 8 bytes) */
void jt_072A0A(void) {
    /* TODO $072A0A: dc.w $ff10  [FF 10] */
    /* TODO $072A0C: dc.w $ff10  [FF 10] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[0]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $072A12-$072A16  (2 instructions, 4 bytes) */
void jt_072A12(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $072A74-$072A78  (2 instructions, 4 bytes) */
void jt_072A74(void) {
    /* TODO $072A74: dc.w $ff10  [FF 10] */
    /* TODO $072A76: roxl.b #$8, d0  [E1 10] */
    /* WARNING: function did not end with RTS */
}

/* $072A7C-$072A80  (2 instructions, 4 bytes) */
void jt_072A7C(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $072B94-$072B9C  (4 instructions, 8 bytes) */
void jt_072B94(void) {
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[6], bus_read8(g_m68k.a[6]));
    /* TODO $072B98: sbcd.b d0, d1  [83 00] */
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $072BC6-$072BCE  (4 instructions, 8 bytes) */
void jt_072BC6(void) {
    /* TODO $072BC6: dc.w $ff10  [FF 10] */
    /* TODO $072BC8: dc.w $ff10  [FF 10] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[0]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $072BCE-$072BD2  (2 instructions, 4 bytes) */
void jt_072BCE(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $072C30-$072C38  (4 instructions, 8 bytes) */
void jt_072C30(void) {
    /* TODO $072C30: dc.w $ff10  [FF 10] */
    /* TODO $072C32: dc.w $ff10  [FF 10] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[0]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $072C38-$072C3C  (2 instructions, 4 bytes) */
void jt_072C38(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $072D2C-$072D30  (2 instructions, 4 bytes) */
void jt_072D2C(void) {
    M68K_SUB8(g_m68k.d[0], _postinc8(0));
    M68K_ASR16(g_m68k.d[0], 0x8);
    /* WARNING: function did not end with RTS */
}

/* $072D36-$072D38  (1 instructions, 2 bytes) */
void jt_072D36(void) {
    M68K_AND8(g_m68k.d[0], bus_read8(g_m68k.a[0]));
    /* WARNING: function did not end with RTS */
}

/* $072D3E-$072D42  (2 instructions, 4 bytes) */
void jt_072D3E(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $072DA8-$072DAC  (1 instructions, 4 bytes) */
void jt_072DA8(void) {
    /* TODO $072DA8: sbcd -(a5), -(a4), #$8740  [89 0D 87 40] */
    /* WARNING: function did not end with RTS */
}

/* $072DE4-$072DFC  (12 instructions, 24 bytes) */
void jt_072DE4(void) {
    M68K_OR16(g_m68k.d[4], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[4], _postinc8(7));
    M68K_OR16(g_m68k.d[4], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[4], _postinc8(5));
    /* TODO $072DEC: dc.w $8940  [89 40] */
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[5], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[3], _postinc8(3));
    M68K_OR16(g_m68k.d[6], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[2], _postinc8(2));
    M68K_OR16(g_m68k.d[7], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[1], _postinc8(2));
    /* WARNING: function did not end with RTS */
}

/* $072E74-$072E8C  (12 instructions, 24 bytes) */
void jt_072E74(void) {
    M68K_ROR8(g_m68k.d[2], 0x8);
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[7], _postinc8(2));
    /* TODO $072E7A: dc.w $8540  [85 40] */
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[4], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[4], _postinc8(2));
    /* TODO $072E82: dc.w $8b40  [8B 40] */
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[7], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[1], _postinc8(2));
    M68K_SUB16(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}
