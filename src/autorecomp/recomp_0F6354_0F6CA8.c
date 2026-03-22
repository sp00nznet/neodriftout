/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $0F6354 - $0F6CA8 */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

/* $0F6354-$0F6366  (4 instructions, 18 bytes) */
void jt_0F6354(void) {
    /* TODO $0F6354: dc.w $f040  [F0 40] */
    { uint32_t _ea = /* UNHANDLED_ADDR: (a2, invalid.w) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[3], bus_read8(g_m68k.a[2] + 0x40 + (int32_t)g_m68k.a[0]));
    { uint32_t _ea = /* UNHANDLED_ADDR: ([$88408632, a2]) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0F6388-$0F6398  (2 instructions, 16 bytes) */
void jt_0F6388(void) {
    { uint32_t _ea = /* UNHANDLED_ADDR: ([$8e32827f, a2]) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = /* UNHANDLED_ADDR: ([$81408b32, a2]) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0F63E6-$0F6428  (33 instructions, 66 bytes) */
void jt_0F63E6(void) {
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[7], _postinc8(4));
    /* TODO $0F63EA: dc.w $8340  [83 40] */
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[2], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[6], _postinc8(4));
    /* TODO $0F63F2: dc.w $8540  [85 40] */
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[5], _postinc8(5));
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[5], _postinc8(5));
    /* TODO $0F63FE: dc.w $8740  [87 40] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $0F6402: dc.w $8740  [87 40] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[4], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[4], _postinc8(5));
    M68K_OR16(g_m68k.d[4], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[4], _postinc8(5));
    /* TODO $0F640E: dc.w $8940  [89 40] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* TODO $0F6412: dc.w $8940  [89 40] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[5], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[3], _postinc8(5));
    M68K_OR16(g_m68k.d[5], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[3], _postinc8(5));
    /* TODO $0F641E: dc.w $8b40  [8B 40] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    /* TODO $0F6422: dc.w $8b40  [8B 40] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F6428-$0F642A  (1 instructions, 2 bytes) */
void jt_0F6428(void) {
    M68K_AND8(g_m68k.d[0], _postinc8(4));
    /* WARNING: function did not end with RTS */
}

/* $0F6430-$0F6434  (2 instructions, 4 bytes) */
void jt_0F6430(void) {
    M68K_OR16(g_m68k.d[6], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[2], _postinc8(6));
    /* WARNING: function did not end with RTS */
}

/* $0F6490-$0F6492  (1 instructions, 2 bytes) */
void jt_0F6490(void) {
    M68K_ROR8(g_m68k.d[6], 0x8);
    /* WARNING: function did not end with RTS */
}

/* $0F6498-$0F64A0  (4 instructions, 8 bytes) */
void jt_0F6498(void) {
    /* TODO $0F6498: dc.w $ff14  [FF 14] */
    /* TODO $0F649A: dc.w $ff14  [FF 14] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[4]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F64A0-$0F64A8  (4 instructions, 8 bytes) */
void jt_0F64A0(void) {
    /* TODO $0F64A0: dc.w $ff14  [FF 14] */
    /* TODO $0F64A2: dc.w $ff14  [FF 14] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[4]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F64A8-$0F64B0  (4 instructions, 8 bytes) */
void jt_0F64A8(void) {
    /* TODO $0F64A8: dc.w $ff14  [FF 14] */
    /* TODO $0F64AA: dc.w $ff14  [FF 14] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[4]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F64B0-$0F64B8  (4 instructions, 8 bytes) */
void jt_0F64B0(void) {
    /* TODO $0F64B0: dc.w $ff14  [FF 14] */
    /* TODO $0F64B2: dc.w $ff14  [FF 14] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[4]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F64B8-$0F64C0  (4 instructions, 8 bytes) */
void jt_0F64B8(void) {
    /* TODO $0F64B8: dc.w $ff17  [FF 17] */
    /* TODO $0F64BA: dc.w $ff17  [FF 17] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[7]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F64C0-$0F64C8  (4 instructions, 8 bytes) */
void jt_0F64C0(void) {
    /* TODO $0F64C0: dc.w $ff17  [FF 17] */
    /* TODO $0F64C2: dc.w $ff17  [FF 17] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[7]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F6500-$0F6504  (2 instructions, 4 bytes) */
void jt_0F6500(void) {
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[5], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F652E-$0F653E  (8 instructions, 16 bytes) */
void jt_0F652E(void) {
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    /* TODO $0F6530: dc.w $8540  [85 40] */
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $0F6534: dc.w $8740  [87 40] */
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    /* TODO $0F6538: dc.w $8b40  [8B 40] */
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_CMP16(g_m68k.d[4], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F654A-$0F654E  (2 instructions, 4 bytes) */
void jt_0F654A(void) {
    M68K_ASR16(g_m68k.d[0], 0x8);
    /* TODO $0F654C: dc.w $ff20  [FF 20] */
    /* WARNING: function did not end with RTS */
}

/* $0F6562-$0F6566  (2 instructions, 4 bytes) */
void jt_0F6562(void) {
    M68K_ASR16(g_m68k.d[0], 0x8);
    /* TODO $0F6564: dc.w $ff30  [FF 30] */
    /* WARNING: function did not end with RTS */
}

/* $0F656A-$0F657A  (8 instructions, 16 bytes) */
void jt_0F656A(void) {
    /* TODO $0F656A: dc.w $8540  [85 40] */
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[4], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[4], _postinc8(1));
    /* TODO $0F6572: dc.w $8b40  [8B 40] */
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[7], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[1], _postinc8(1));
    /* WARNING: function did not end with RTS */
}

/* $0F659C-$0F65B6  (13 instructions, 26 bytes) */
void jt_0F659C(void) {
    M68K_CMP8(g_m68k.d[0], _postinc8(1));
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[7], _postinc8(2));
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[5], _postinc8(2));
    M68K_OR16(g_m68k.d[4], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[4], _postinc8(2));
    M68K_OR16(g_m68k.d[5], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[3], _postinc8(2));
    /* TODO $0F65AE: dc.w $8b40  [8B 40] */
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[6], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[2], _postinc8(2));
    /* WARNING: function did not end with RTS */
}

/* $0F65D6-$0F65F2  (14 instructions, 28 bytes) */
void jt_0F65D6(void) {
    M68K_CMP8(g_m68k.d[0], _postinc8(1));
    /* TODO $0F65D8: dc.w $f01a  [F0 1A] */
    M68K_SUB8(g_m68k.d[0], _postinc8(4));
    /* TODO $0F65DC: dc.w $8140  [81 40] */
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[7], _postinc8(4));
    M68K_OR16(g_m68k.d[2], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[6], _postinc8(4));
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[5], _postinc8(4));
    M68K_OR16(g_m68k.d[4], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[4], _postinc8(4));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F6612-$0F661A  (4 instructions, 8 bytes) */
void jt_0F6612(void) {
    /* TODO $0F6612: dc.w $ff10  [FF 10] */
    /* TODO $0F6614: dc.w $ff10  [FF 10] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[0]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F661A-$0F667C  (33 instructions, 98 bytes) */
void jt_0F661A(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = 0x008110; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = 0x008110; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = 0x008110; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = 0x008110; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = 0x008110; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = 0x008110; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = 0x008110; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = 0x008110; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = 0x008110; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = 0x008110; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = 0x008110; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = 0x008110; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = 0x008110; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = 0x008110; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = 0x008110; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = 0x008000; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0F667C-$0F6684  (4 instructions, 8 bytes) */
void jt_0F667C(void) {
    /* TODO $0F667C: dc.w $ff10  [FF 10] */
    /* TODO $0F667E: dc.w $ff10  [FF 10] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[0]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F6684-$0F66E6  (33 instructions, 98 bytes) */
void jt_0F6684(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = 0x008110; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = 0x008110; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = 0x008110; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = 0x008110; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = 0x008110; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = 0x008110; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = 0x008110; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = 0x008110; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = 0x008110; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = 0x008110; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = 0x008110; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = 0x008110; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = 0x008110; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = 0x008110; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = 0x008110; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = 0x008000; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0F66E6-$0F6728  (17 instructions, 66 bytes) */
void jt_0F66E6(void) {
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F674C-$0F6794  (20 instructions, 72 bytes) */
void jt_0F674C(void) {
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x00817F));
    /* TODO $0F6754: dc.w $8540  [85 40] */
    M68K_OR8(g_m68k.d[5], bus_read8(0x00827F));
    M68K_OR16(g_m68k.d[2], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[5], bus_read8(0x00847F));
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[5], bus_read8(0x00867F));
    M68K_OR8(g_m68k.d[5], bus_read8(0x00867F));
    M68K_OR8(g_m68k.d[5], bus_read8(0x00867F));
    M68K_OR8(g_m68k.d[5], bus_read8(0x00867F));
    M68K_OR8(g_m68k.d[5], bus_read8(0x00867F));
    M68K_OR8(g_m68k.d[5], bus_read8(0x00867F));
    M68K_OR8(g_m68k.d[5], bus_read8(0x00867F));
    M68K_OR8(g_m68k.d[5], bus_read8(0x00867F));
    M68K_OR8(g_m68k.d[5], bus_read8(0x00867F));
    M68K_OR8(g_m68k.d[5], bus_read8(0x00867F));
    M68K_OR8(g_m68k.d[5], bus_read8(0x00867F));
    M68K_OR8(g_m68k.d[5], bus_read8(0x00867F));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F6794-$0F6796  (1 instructions, 2 bytes) */
void jt_0F6794(void) {
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F67A4-$0F67BA  (11 instructions, 22 bytes) */
void jt_0F67A4(void) {
    /* TODO $0F67A4: dc.w $ff10  [FF 10] */
    M68K_SUB8(g_m68k.d[0], bus_read8(g_m68k.a[0]));
    /* TODO $0F67A8: dc.w $8140  [81 40] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    /* TODO $0F67AC: dc.w $8140  [81 40] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    /* TODO $0F67B0: dc.w $8140  [81 40] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    /* TODO $0F67B4: dc.w $8140  [81 40] */
    M68K_AND8(g_m68k.d[0], bus_read8(g_m68k.a[0]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F67BA-$0F680C  (25 instructions, 82 bytes) */
void jt_0F67BA(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = 0x008110; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = 0x008110; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = 0x008110; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = 0x008110; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = 0x008110; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = 0x008740; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008740; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008740; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008740; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008740; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008740; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008740; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008740; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008110; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = 0x008110; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = 0x008000; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0F680C-$0F6814  (4 instructions, 8 bytes) */
void jt_0F680C(void) {
    /* TODO $0F680C: dc.w $ff10  [FF 10] */
    /* TODO $0F680E: dc.w $ff10  [FF 10] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[0]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F6814-$0F6876  (33 instructions, 98 bytes) */
void jt_0F6814(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = 0x008110; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = 0x008110; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = 0x008110; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = 0x008110; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = 0x008110; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = 0x008110; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = 0x008110; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = 0x008110; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = 0x008110; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = 0x008110; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = 0x008110; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = 0x008110; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = 0x008110; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = 0x008110; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = 0x008110; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = 0x008000; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0F6876-$0F68D4  (31 instructions, 94 bytes) */
void jt_0F6876(void) {
    M68K_OR8(g_m68k.d[5], bus_read8(0x008540));
    /* TODO $0F687A: sbcd.b d0, d0  [81 00] */
    M68K_OR8(g_m68k.d[5], bus_read8(0x008540));
    /* TODO $0F6880: sbcd.b d0, d0  [81 00] */
    M68K_OR8(g_m68k.d[5], bus_read8(0x008540));
    /* TODO $0F6886: sbcd.b d0, d0  [81 00] */
    M68K_OR8(g_m68k.d[5], bus_read8(0x008540));
    /* TODO $0F688C: sbcd.b d0, d0  [81 00] */
    M68K_OR8(g_m68k.d[5], bus_read8(0x008540));
    /* TODO $0F6892: sbcd.b d0, d0  [81 00] */
    M68K_OR8(g_m68k.d[5], bus_read8(0x008540));
    /* TODO $0F6898: sbcd.b d0, d0  [81 00] */
    M68K_OR8(g_m68k.d[5], bus_read8(0x008540));
    /* TODO $0F689E: sbcd.b d0, d0  [81 00] */
    M68K_OR8(g_m68k.d[5], bus_read8(0x008540));
    /* TODO $0F68A4: sbcd.b d0, d0  [81 00] */
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x00817F));
    /* TODO $0F68B2: dc.w $8540  [85 40] */
    M68K_OR8(g_m68k.d[5], bus_read8(0x00817F));
    /* TODO $0F68B8: dc.w $8540  [85 40] */
    M68K_OR8(g_m68k.d[5], bus_read8(0x00827F));
    M68K_OR16(g_m68k.d[2], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[5], bus_read8(0x00837F));
    /* TODO $0F68C4: dc.w $8340  [83 40] */
    M68K_OR8(g_m68k.d[5], bus_read8(0x00847F));
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[5], bus_read8(0x00857F));
    /* TODO $0F68D0: dc.w $8140  [81 40] */
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F68F8-$0F693A  (17 instructions, 66 bytes) */
void jt_0F68F8(void) {
    M68K_OR8(g_m68k.d[5], bus_read8(0x00867F));
    M68K_OR8(g_m68k.d[5], bus_read8(0x00867F));
    M68K_OR8(g_m68k.d[5], bus_read8(0x00867F));
    M68K_OR8(g_m68k.d[5], bus_read8(0x00867F));
    M68K_OR8(g_m68k.d[5], bus_read8(0x00867F));
    M68K_OR8(g_m68k.d[5], bus_read8(0x00867F));
    M68K_OR8(g_m68k.d[5], bus_read8(0x00867F));
    M68K_OR8(g_m68k.d[5], bus_read8(0x00867F));
    M68K_OR8(g_m68k.d[5], bus_read8(0x00867F));
    M68K_OR8(g_m68k.d[5], bus_read8(0x00867F));
    M68K_OR8(g_m68k.d[5], bus_read8(0x00867F));
    M68K_OR8(g_m68k.d[5], bus_read8(0x00867F));
    M68K_OR8(g_m68k.d[5], bus_read8(0x00867F));
    M68K_OR8(g_m68k.d[5], bus_read8(0x00867F));
    M68K_OR8(g_m68k.d[5], bus_read8(0x00867F));
    M68K_OR8(g_m68k.d[5], bus_read8(0x00867F));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F6958-$0F695A  (1 instructions, 2 bytes) */
void jt_0F6958(void) {
    M68K_AND8(g_m68k.d[0], bus_read8(g_m68k.a[0]));
    /* WARNING: function did not end with RTS */
}

/* $0F6960-$0F6964  (2 instructions, 4 bytes) */
void jt_0F6960(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F69CA-$0F69CE  (1 instructions, 4 bytes) */
void jt_0F69CA(void) {
    /* TODO $0F69CA: sbcd -(a5), -(a4), #$8740  [89 0D 87 40] */
    /* WARNING: function did not end with RTS */
}

/* $0F6A06-$0F6A08  (1 instructions, 2 bytes) */
void jt_0F6A06(void) {
    M68K_ASR16(g_m68k.d[0], 0x8);
    /* WARNING: function did not end with RTS */
}

/* $0F6A80-$0F6AAE  (23 instructions, 46 bytes) */
void jt_0F6A80(void) {
    /* TODO $0F6A80: dc.w $8d40  [8D 40] */
    /* TODO $0F6A82: sbcd.b d0, d1  [83 00] */
    /* TODO $0F6A84: dc.w $8d40  [8D 40] */
    /* TODO $0F6A86: sbcd.b d0, d1  [83 00] */
    /* TODO $0F6A88: dc.w $8d40  [8D 40] */
    /* TODO $0F6A8A: sbcd.b d0, d1  [83 00] */
    /* TODO $0F6A8C: dc.w $8d40  [8D 40] */
    /* TODO $0F6A8E: sbcd.b d0, d1  [83 00] */
    /* TODO $0F6A90: dc.w $8d40  [8D 40] */
    /* TODO $0F6A92: sbcd.b d0, d1  [83 00] */
    /* TODO $0F6A94: dc.w $8d40  [8D 40] */
    /* TODO $0F6A96: sbcd.b d0, d1  [83 00] */
    /* TODO $0F6A98: dc.w $8d40  [8D 40] */
    /* TODO $0F6A9A: sbcd.b d0, d1  [83 00] */
    /* TODO $0F6A9C: dc.w $8d40  [8D 40] */
    /* TODO $0F6A9E: sbcd.b d0, d1  [83 00] */
    /* TODO $0F6AA0: dc.w $8d40  [8D 40] */
    /* TODO $0F6AA2: sbcd.b d0, d1  [83 00] */
    /* TODO $0F6AA4: dc.w $8d40  [8D 40] */
    /* TODO $0F6AA6: sbcd.b d0, d1  [83 00] */
    M68K_OR16(g_m68k.d[7], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    M68K_SUB16(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F6AE8-$0F6AEA  (1 instructions, 2 bytes) */
void jt_0F6AE8(void) {
    M68K_SUB16(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F6B04-$0F6B1C  (12 instructions, 24 bytes) */
void jt_0F6B04(void) {
    /* TODO $0F6B04: dc.w $ff16  [FF 16] */
    M68K_AND8(g_m68k.d[0], bus_read8(g_m68k.a[6]));
    /* TODO $0F6B08: dc.w $8140  [81 40] */
    M68K_OR8(g_m68k.d[6], bus_read8(g_m68k.a[6]));
    M68K_OR16(g_m68k.d[2], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $0F6B10: dc.w $8740  [87 40] */
    M68K_OR8(g_m68k.d[3], bus_read8(g_m68k.a[6]));
    M68K_OR16(g_m68k.d[5], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    /* TODO $0F6B18: dc.w $8d40  [8D 40] */
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F6B1C-$0F6B2E  (9 instructions, 18 bytes) */
void jt_0F6B1C(void) {
    /* TODO $0F6B1C: roxr.b #$7, d6  [EE 16] */
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    /* TODO $0F6B22: dc.w $8540  [85 40] */
    M68K_OR8(g_m68k.d[4], bus_read8(g_m68k.a[6]));
    M68K_OR16(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    /* TODO $0F6B2A: dc.w $8b40  [8B 40] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[6]));
    /* WARNING: function did not end with RTS */
}

/* $0F6B40-$0F6B42  (1 instructions, 2 bytes) */
void jt_0F6B40(void) {
    M68K_SUBX16(g_m68k.d[7], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F6B58-$0F6B5A  (1 instructions, 2 bytes) */
void jt_0F6B58(void) {
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F6B62-$0F6B7A  (12 instructions, 24 bytes) */
void jt_0F6B62(void) {
    M68K_OR8(g_m68k.d[4], bus_read8(g_m68k.a[1]));
    M68K_OR16(g_m68k.d[4], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[4], bus_read8(g_m68k.a[3]));
    M68K_OR16(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* TODO $0F6B6C: dc.w $8940  [89 40] */
    M68K_OR8(g_m68k.d[3], bus_read8(g_m68k.a[5]));
    M68K_OR16(g_m68k.d[5], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[2], bus_read8(g_m68k.a[6]));
    M68K_OR16(g_m68k.d[6], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[6]));
    M68K_SUBX16(g_m68k.d[6], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F6B92-$0F6B94  (1 instructions, 2 bytes) */
void jt_0F6B92(void) {
    /* TODO $0F6B92: dc.w $8340  [83 40] */
    /* WARNING: function did not end with RTS */
}

/* $0F6C60-$0F6C62  (1 instructions, 2 bytes) */
void jt_0F6C60(void) {
    M68K_AND8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F6C68-$0F6C82  (13 instructions, 26 bytes) */
void jt_0F6C68(void) {
    /* TODO $0F6C68: dc.w $8740  [87 40] */
    /* TODO $0F6C6A: sbcd.b d3, d4  [89 03] */
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[5], g_m68k.d[4]);
    /* TODO $0F6C70: dc.w $8540  [85 40] */
    /* TODO $0F6C72: sbcd.b d4, d5  [8B 04] */
    M68K_OR16(g_m68k.d[2], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[6], g_m68k.d[4]);
    /* TODO $0F6C78: dc.w $8340  [83 40] */
    /* TODO $0F6C7A: sbcd.b d4, d6  [8D 04] */
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[7], g_m68k.d[4]);
    /* TODO $0F6C80: dc.w $8140  [81 40] */
    /* WARNING: function did not end with RTS */
}

/* $0F6C88-$0F6C8A  (1 instructions, 2 bytes) */
void jt_0F6C88(void) {
    M68K_SUB8(g_m68k.d[0], g_m68k.d[3]);
    /* WARNING: function did not end with RTS */
}

/* $0F6C90-$0F6C98  (4 instructions, 8 bytes) */
void jt_0F6C90(void) {
    /* TODO $0F6C90: dc.w $ff12  [FF 12] */
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_AND8(g_m68k.d[0], bus_read8(g_m68k.a[1]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F6C98-$0F6CA0  (4 instructions, 8 bytes) */
void jt_0F6C98(void) {
    /* TODO $0F6C98: dc.w $ff12  [FF 12] */
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_AND8(g_m68k.d[0], bus_read8(g_m68k.a[1]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F6CA0-$0F6CA8  (4 instructions, 8 bytes) */
void jt_0F6CA0(void) {
    /* TODO $0F6CA0: dc.w $ff11  [FF 11] */
    /* TODO $0F6CA2: dc.w $ff11  [FF 11] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[1]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}
