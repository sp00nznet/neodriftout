/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $0F8226 - $0F8A82 */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

/* $0F8226-$0F8228  (1 instructions, 2 bytes) */
void jt_0F8226(void) {
    M68K_SUBX16(g_m68k.d[7], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F823E-$0F8240  (1 instructions, 2 bytes) */
void jt_0F823E(void) {
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F8246-$0F8248  (1 instructions, 2 bytes) */
void jt_0F8246(void) {
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0F82F2-$0F82F4  (1 instructions, 2 bytes) */
void jt_0F82F2(void) {
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F8338-$0F834A  (9 instructions, 18 bytes) */
void jt_0F8338(void) {
    /* TODO $0F8338: dc.w $8d40  [8D 40] */
    /* TODO $0F833A: sbcd.b d6, d1  [83 06] */
    M68K_OR16(g_m68k.d[5], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[3], g_m68k.d[6]);
    /* TODO $0F8340: dc.w $8740  [87 40] */
    /* TODO $0F8342: sbcd.b d6, d4  [89 06] */
    M68K_OR16(g_m68k.d[2], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[6], g_m68k.d[6]);
    /* TODO $0F8348: dc.w $8140  [81 40] */
    /* WARNING: function did not end with RTS */
}

/* $0F8350-$0F8358  (4 instructions, 8 bytes) */
void jt_0F8350(void) {
    /* TODO $0F8350: dc.w $ff14  [FF 14] */
    /* TODO $0F8352: dc.w $ff14  [FF 14] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[4]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F8358-$0F8360  (4 instructions, 8 bytes) */
void jt_0F8358(void) {
    /* TODO $0F8358: dc.w $ff14  [FF 14] */
    /* TODO $0F835A: dc.w $ff14  [FF 14] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[4]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F8360-$0F8368  (4 instructions, 8 bytes) */
void jt_0F8360(void) {
    /* TODO $0F8360: dc.w $ff14  [FF 14] */
    /* TODO $0F8362: dc.w $ff14  [FF 14] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[4]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F8368-$0F8380  (12 instructions, 24 bytes) */
void jt_0F8368(void) {
    /* TODO $0F8368: dc.w $ff14  [FF 14] */
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    /* TODO $0F8370: dc.w $8340  [83 40] */
    M68K_OR8(g_m68k.d[6], bus_read8(g_m68k.a[4]));
    M68K_OR16(g_m68k.d[2], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    /* TODO $0F8378: dc.w $8540  [85 40] */
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $0F837C: dc.w $8740  [87 40] */
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F8380-$0F8388  (4 instructions, 8 bytes) */
void jt_0F8380(void) {
    /* TODO $0F8380: dc.w $ff16  [FF 16] */
    /* TODO $0F8382: dc.w $ff16  [FF 16] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[6]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F8388-$0F8390  (4 instructions, 8 bytes) */
void jt_0F8388(void) {
    /* TODO $0F8388: dc.w $ff16  [FF 16] */
    /* TODO $0F838A: dc.w $ff16  [FF 16] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[6]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F8390-$0F8396  (3 instructions, 6 bytes) */
void jt_0F8390(void) {
    /* TODO $0F8390: roxr.b #$8, d6  [E0 16] */
    M68K_SUB8(g_m68k.d[7], _postinc8(0));
    { uint32_t _t = g_m68k.d[7]; g_m68k.d[7] = g_m68k.d[0]; g_m68k.d[0] = _t; }
    /* WARNING: function did not end with RTS */
}

/* $0F83DE-$0F8402  (18 instructions, 36 bytes) */
void jt_0F83DE(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[7]));
    /* TODO $0F83F4: dc.w $8540  [85 40] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _t = g_m68k.d[2]; g_m68k.d[2] = g_m68k.d[0]; g_m68k.d[0] = _t; }
    M68K_OR8(g_m68k.d[1], _predec8(0));
    /* TODO $0F83FC: dc.w $8b40  [8B 40] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F8402-$0F8420  (15 instructions, 30 bytes) */
void jt_0F8402(void) {
    M68K_SUB8(g_m68k.d[0], _postinc8(0));
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* TODO $0F8406: dc.w $8940  [89 40] */
    M68K_OR8(g_m68k.d[2], bus_read8(g_m68k.a[7]));
    M68K_OR16(g_m68k.d[6], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_EOR16(g_m68k.d[0], g_m68k.d[4]);
    M68K_OR8(g_m68k.d[3], _predec8(0));
    /* TODO $0F8412: dc.w $8740  [87 40] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[2], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[6], _predec8(0));
    /* TODO $0F841A: dc.w $8140  [81 40] */
    M68K_LSL8(g_m68k.d[0], g_m68k.d[7]);
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F8440-$0F8448  (4 instructions, 8 bytes) */
void jt_0F8440(void) {
    /* TODO $0F8440: dc.w $ff16  [FF 16] */
    /* TODO $0F8442: dc.w $ff16  [FF 16] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[6]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F8448-$0F8450  (4 instructions, 8 bytes) */
void jt_0F8448(void) {
    /* TODO $0F8448: dc.w $ff16  [FF 16] */
    /* TODO $0F844A: dc.w $ff16  [FF 16] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[6]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F8450-$0F8458  (4 instructions, 8 bytes) */
void jt_0F8450(void) {
    /* TODO $0F8450: dc.w $ff16  [FF 16] */
    /* TODO $0F8452: dc.w $ff16  [FF 16] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[6]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F8458-$0F8460  (4 instructions, 8 bytes) */
void jt_0F8458(void) {
    /* TODO $0F8458: dc.w $ff16  [FF 16] */
    /* TODO $0F845A: dc.w $ff16  [FF 16] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[6]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F8460-$0F8468  (4 instructions, 8 bytes) */
void jt_0F8460(void) {
    /* TODO $0F8460: dc.w $ff16  [FF 16] */
    /* TODO $0F8462: dc.w $ff16  [FF 16] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[6]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F8468-$0F8470  (4 instructions, 8 bytes) */
void jt_0F8468(void) {
    /* TODO $0F8468: dc.w $ff16  [FF 16] */
    /* TODO $0F846A: dc.w $ff16  [FF 16] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[6]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F8470-$0F8478  (4 instructions, 8 bytes) */
void jt_0F8470(void) {
    /* TODO $0F8470: dc.w $ff16  [FF 16] */
    /* TODO $0F8472: dc.w $ff16  [FF 16] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[6]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F8478-$0F8490  (12 instructions, 24 bytes) */
void jt_0F8478(void) {
    /* TODO $0F8478: dc.w $ff16  [FF 16] */
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    /* TODO $0F8480: dc.w $8540  [85 40] */
    M68K_OR8(g_m68k.d[4], bus_read8(g_m68k.a[6]));
    M68K_OR16(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    /* TODO $0F8488: dc.w $8b40  [8B 40] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[6]));
    M68K_OR16(g_m68k.d[7], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F8490-$0F8498  (4 instructions, 8 bytes) */
void jt_0F8490(void) {
    /* TODO $0F8490: dc.w $ff16  [FF 16] */
    /* TODO $0F8492: dc.w $ff16  [FF 16] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[6]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F8498-$0F84A0  (4 instructions, 8 bytes) */
void jt_0F8498(void) {
    /* TODO $0F8498: dc.w $ff16  [FF 16] */
    /* TODO $0F849A: dc.w $ff16  [FF 16] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[6]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F84A0-$0F84B2  (9 instructions, 18 bytes) */
void jt_0F84A0(void) {
    /* TODO $0F84A0: roxl.b #$6, d6  [ED 16] */
    /* TODO $0F84A2: dc.w $8340  [83 40] */
    M68K_OR8(g_m68k.d[5], bus_read8(g_m68k.a[6]));
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* TODO $0F84AA: dc.w $8940  [89 40] */
    M68K_OR8(g_m68k.d[2], bus_read8(g_m68k.a[6]));
    M68K_OR16(g_m68k.d[6], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0F84C4-$0F84D6  (9 instructions, 18 bytes) */
void jt_0F84C4(void) {
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    /* TODO $0F84C6: dc.w $8140  [81 40] */
    M68K_OR8(g_m68k.d[6], bus_read8(g_m68k.a[6]));
    M68K_OR16(g_m68k.d[2], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $0F84CE: dc.w $8740  [87 40] */
    M68K_OR8(g_m68k.d[3], bus_read8(g_m68k.a[6]));
    M68K_OR16(g_m68k.d[5], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0F8524-$0F852C  (4 instructions, 8 bytes) */
void jt_0F8524(void) {
    /* TODO $0F8524: dc.w $ff16  [FF 16] */
    /* TODO $0F8526: dc.w $ff16  [FF 16] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[6]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F852C-$0F8544  (12 instructions, 24 bytes) */
void jt_0F852C(void) {
    /* TODO $0F852C: dc.w $ff16  [FF 16] */
    M68K_AND8(g_m68k.d[0], bus_read8(g_m68k.a[6]));
    /* TODO $0F8530: dc.w $8140  [81 40] */
    M68K_OR8(g_m68k.d[6], bus_read8(g_m68k.a[6]));
    M68K_OR16(g_m68k.d[2], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $0F8538: dc.w $8740  [87 40] */
    M68K_OR8(g_m68k.d[3], bus_read8(g_m68k.a[6]));
    M68K_OR16(g_m68k.d[5], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    /* TODO $0F8540: dc.w $8d40  [8D 40] */
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F8544-$0F854C  (4 instructions, 8 bytes) */
void jt_0F8544(void) {
    /* TODO $0F8544: dc.w $ff16  [FF 16] */
    /* TODO $0F8546: dc.w $ff16  [FF 16] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[6]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F854C-$0F8554  (4 instructions, 8 bytes) */
void jt_0F854C(void) {
    /* TODO $0F854C: dc.w $ff16  [FF 16] */
    /* TODO $0F854E: dc.w $ff16  [FF 16] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[6]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F8554-$0F8566  (9 instructions, 18 bytes) */
void jt_0F8554(void) {
    /* TODO $0F8554: roxr.b #$7, d6  [EE 16] */
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    /* TODO $0F855A: dc.w $8540  [85 40] */
    M68K_OR8(g_m68k.d[4], bus_read8(g_m68k.a[6]));
    M68K_OR16(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    /* TODO $0F8562: dc.w $8b40  [8B 40] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[6]));
    /* WARNING: function did not end with RTS */
}

/* $0F8578-$0F858A  (9 instructions, 18 bytes) */
void jt_0F8578(void) {
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    /* TODO $0F857A: dc.w $8340  [83 40] */
    M68K_OR8(g_m68k.d[5], bus_read8(g_m68k.a[6]));
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* TODO $0F8582: dc.w $8940  [89 40] */
    M68K_OR8(g_m68k.d[2], bus_read8(g_m68k.a[6]));
    M68K_OR16(g_m68k.d[6], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0F85DE-$0F85E2  (1 instructions, 4 bytes) */
void jt_0F85DE(void) {
    /* TODO $0F85DE: sbcd -(a6), -(a6), #$8306  [8D 0E 83 06] */
    /* WARNING: function did not end with RTS */
}

/* $0F868A-$0F869C  (9 instructions, 18 bytes) */
void jt_0F868A(void) {
    /* TODO $0F868A: dc.w $8d40  [8D 40] */
    /* TODO $0F868C: sbcd.b d6, d1  [83 06] */
    M68K_OR16(g_m68k.d[5], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[3], g_m68k.d[6]);
    /* TODO $0F8692: dc.w $8740  [87 40] */
    /* TODO $0F8694: sbcd.b d6, d4  [89 06] */
    M68K_OR16(g_m68k.d[2], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[6], g_m68k.d[6]);
    /* TODO $0F869A: dc.w $8140  [81 40] */
    /* WARNING: function did not end with RTS */
}

/* $0F86DA-$0F86DE  (2 instructions, 4 bytes) */
void jt_0F86DA(void) {
    /* TODO $0F86DA: roxr.b #$8, d4  [E0 14] */
    /* TODO $0F86DC: dc.w $ff12  [FF 12] */
    /* WARNING: function did not end with RTS */
}

/* $0F86E2-$0F86F6  (10 instructions, 20 bytes) */
void jt_0F86E2(void) {
    M68K_OR8(g_m68k.d[5], bus_read8(g_m68k.a[4]));
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $0F86E8: dc.w $8740  [87 40] */
    M68K_OR8(g_m68k.d[4], bus_read8(g_m68k.a[4]));
    M68K_OR16(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* TODO $0F86F0: dc.w $8940  [89 40] */
    M68K_OR8(g_m68k.d[3], bus_read8(g_m68k.a[4]));
    /* TODO $0F86F4: dc.w $8940  [89 40] */
    /* WARNING: function did not end with RTS */
}

/* $0F8744-$0F8748  (2 instructions, 4 bytes) */
void jt_0F8744(void) {
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[2]));
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F87A6-$0F87A8  (1 instructions, 2 bytes) */
void jt_0F87A6(void) {
    /* TODO $0F87A6: dc.w $8340  [83 40] */
    /* WARNING: function did not end with RTS */
}

/* $0F8814-$0F8852  (23 instructions, 62 bytes) */
void jt_0F8814(void) {
    /* TODO $0F8814: dc.w $8d40  [8D 40] */
    /* TODO $0F8816: sbcd.b d6, d1  [83 06] */
    M68K_OR16(g_m68k.d[5], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[3], g_m68k.d[6]);
    M68K_OR16(g_m68k.d[4], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[4], g_m68k.d[6]);
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[5], g_m68k.d[6]);
    M68K_OR16(g_m68k.d[2], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[6], g_m68k.d[6]);
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[7], g_m68k.d[6]);
    /* TODO $0F882C: dc.w $8140  [81 40] */
    M68K_SUBX8(g_m68k.d[7], g_m68k.d[6]);
    /* TODO $0F8830: sbcd.b d0, d1  [83 00] */
    /* TODO $0F8832: sbcd -(a0), -(a6), #$8300  [8D 08 83 00] */
    /* TODO $0F8836: sbcd -(a0), -(a6), #$8300  [8D 08 83 00] */
    /* TODO $0F883A: sbcd -(a0), -(a6), #$8300  [8D 08 83 00] */
    /* TODO $0F883E: sbcd -(a0), -(a6), #$8300  [8D 08 83 00] */
    /* TODO $0F8842: sbcd -(a0), -(a6), #$8300  [8D 08 83 00] */
    /* TODO $0F8846: sbcd -(a0), -(a6), #$8300  [8D 08 83 00] */
    /* TODO $0F884A: sbcd -(a0), -(a6), #$8300  [8D 08 83 00] */
    /* TODO $0F884E: sbcd -(a0), -(a6), #$8000  [8D 08 80 00] */
    /* WARNING: function did not end with RTS */
}

/* $0F8852-$0F8854  (1 instructions, 2 bytes) */
void jt_0F8852(void) {
    /* TODO $0F8852: dc.w $ff20  [FF 20] */
    /* WARNING: function did not end with RTS */
}

/* $0F885C-$0F885E  (1 instructions, 2 bytes) */
void jt_0F885C(void) {
    /* TODO $0F885C: dc.w $ff20  [FF 20] */
    /* WARNING: function did not end with RTS */
}

/* $0F8896-$0F88B6  (12 instructions, 32 bytes) */
void jt_0F8896(void) {
    /* TODO $0F8896: dc.w $ff16  [FF 16] */
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    /* TODO $0F889E: dc.w $8340  [83 40] */
    M68K_OR16(g_m68k.d[1], bus_read16(0xf10b8));
    M68K_OR16(g_m68k.d[2], g_m68k.d[0]);
    M68K_OR16(g_m68k.d[2], bus_read16(0xf0dbe));
    /* TODO $0F88AA: dc.w $8540  [85 40] */
    M68K_OR16(g_m68k.d[3], bus_read16(0xf0ac4));
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    M68K_OR16(g_m68k.d[4], bus_read16(0xf08b4));
    /* WARNING: function did not end with RTS */
}

/* $0F88B6-$0F88D2  (12 instructions, 28 bytes) */
void jt_0F88B6(void) {
    /* TODO $0F88B6: roxl.b #$6, d6  [ED 16] */
    /* TODO $0F88B8: dc.w $8340  [83 40] */
    M68K_OR8(g_m68k.d[5], bus_read8(g_m68k.a[6]));
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* TODO $0F88C0: dc.w $8940  [89 40] */
    M68K_OR8(g_m68k.d[2], bus_read8(g_m68k.a[6]));
    M68K_OR16(g_m68k.d[6], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0F88C8: dc.w $8140  [81 40] */
    M68K_OR16(g_m68k.d[2], /* UNHANDLED_READ: (a16, invalid.w) */ 0);
    M68K_OR16(g_m68k.d[3], /* UNHANDLED_READ: (a16, invalid.w) */ 0);
    /* WARNING: function did not end with RTS */
}

/* $0F88F0-$0F88F6  (2 instructions, 6 bytes) */
void jt_0F88F0(void) {
    M68K_OR16(g_m68k.d[4], g_m68k.d[0]);
    M68K_OR16(g_m68k.d[4], bus_read16(0xf1234));
    /* WARNING: function did not end with RTS */
}

/* $0F892A-$0F892E  (1 instructions, 4 bytes) */
void jt_0F892A(void) {
    M68K_OR16(g_m68k.d[2], bus_read16(0xf0fa7));
    /* WARNING: function did not end with RTS */
}

/* $0F8980-$0F8992  (9 instructions, 18 bytes) */
void jt_0F8980(void) {
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    /* TODO $0F8982: dc.w $8140  [81 40] */
    M68K_OR8(g_m68k.d[6], bus_read8(g_m68k.a[6]));
    M68K_OR16(g_m68k.d[2], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $0F898A: dc.w $8740  [87 40] */
    M68K_OR8(g_m68k.d[3], bus_read8(g_m68k.a[6]));
    M68K_OR16(g_m68k.d[5], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0F89A8-$0F89AA  (1 instructions, 2 bytes) */
void jt_0F89A8(void) {
    M68K_SUB16(g_m68k.d[7], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F8A0C-$0F8A0E  (1 instructions, 2 bytes) */
void jt_0F8A0C(void) {
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F8A52-$0F8A64  (9 instructions, 18 bytes) */
void jt_0F8A52(void) {
    /* TODO $0F8A52: dc.w $8d40  [8D 40] */
    /* TODO $0F8A54: sbcd.b d6, d1  [83 06] */
    M68K_OR16(g_m68k.d[5], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[3], g_m68k.d[6]);
    /* TODO $0F8A5A: dc.w $8740  [87 40] */
    /* TODO $0F8A5C: sbcd.b d6, d4  [89 06] */
    M68K_OR16(g_m68k.d[2], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[6], g_m68k.d[6]);
    /* TODO $0F8A62: dc.w $8140  [81 40] */
    /* WARNING: function did not end with RTS */
}

/* $0F8A6A-$0F8A82  (12 instructions, 24 bytes) */
void jt_0F8A6A(void) {
    /* TODO $0F8A6A: dc.w $ff16  [FF 16] */
    M68K_AND8(g_m68k.d[0], bus_read8(g_m68k.a[6]));
    /* TODO $0F8A6E: dc.w $8140  [81 40] */
    M68K_OR8(g_m68k.d[6], bus_read8(g_m68k.a[6]));
    M68K_OR16(g_m68k.d[2], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $0F8A76: dc.w $8740  [87 40] */
    M68K_OR8(g_m68k.d[3], bus_read8(g_m68k.a[6]));
    M68K_OR16(g_m68k.d[5], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    /* TODO $0F8A7E: dc.w $8d40  [8D 40] */
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}
