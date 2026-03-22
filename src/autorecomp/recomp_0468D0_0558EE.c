/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $0468D0 - $0558EE */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

/* $0468D0-$0468D2  (1 instructions, 2 bytes) */
void jt_0468D0(void) {
    /* TODO $0468D0: sbcd.b d0, d1  [83 00] */
    /* WARNING: function did not end with RTS */
}

/* $046C2A-$046C4E  (12 instructions, 36 bytes) */
void jt_046C2A(void) {
    { uint32_t _ea = g_m68k.a[7]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $046C2C: sbcd.b d1, d1  [83 01] */
    { uint32_t _ea = (g_m68k.a[6] + (-0x7cff)); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = /* UNHANDLED_ADDR: ([a4, a0.w * 2]) */ 0; uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = 0x008301; uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $046C3C: sbcd.b d1, d1  [83 01] */
    { uint32_t _ea = g_m68k.a[7]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $046C40: sbcd.b d1, d1  [83 01] */
    { uint32_t _ea = 0x84000569; uint8_t _b = 1u << ((g_m68k.d[1]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $046C48: sbcd.b d1, d1  [83 01] */
    { uint32_t _ea = (g_m68k.a[7] + (-0x6fff)); uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* WARNING: function did not end with RTS */
}

/* $046D00-$046D16  (7 instructions, 22 bytes) */
void jt_046D00(void) {
    /* TODO $046D00: sbcd.b d1, d1  [83 01] */
    { uint32_t _ea = g_m68k.a[7]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $046D04: sbcd.b d1, d1  [83 01] */
    { uint32_t _ea = 0x8400056C; uint8_t _b = 1u << ((g_m68k.d[1]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[1]);
    { uint32_t _ea = (g_m68k.a[2] + 0x1 + (int16_t)(uint16_t)g_m68k.a[1]); uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $046D12: movep.w d2, -$7000(a2)  [05 8A 90 00] */
    /* WARNING: function did not end with RTS */
}

/* $04702A-$047056  (14 instructions, 44 bytes) */
void jt_04702A(void) {
    { uint32_t _ea = g_m68k.a[6]; uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $04702C: sbcd.b d1, d1  [83 01] */
    { uint32_t _ea = (g_m68k.a[1] + (-0x7cff)); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = (g_m68k.a[2] + (-0x7cff)); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = (g_m68k.a[6] + (-0x7cff)); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = /* UNHANDLED_ADDR: ([a4, a0.w * 2]) */ 0; uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = 0x008301; uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = (g_m68k.a[2] + (-0x7cff)); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = (g_m68k.a[6] + (-0x7cff)); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = /* UNHANDLED_ADDR: ([a4, a0.w * 2]) */ 0; uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = g_m68k.a[2]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $047050: sbcd.b d1, d1  [83 01] */
    { uint32_t _ea = g_m68k.a[6]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $047054: sbcd.b d1, d1  [83 01] */
    /* WARNING: function did not end with RTS */
}

/* $0470A0-$0470E6  (22 instructions, 70 bytes) */
void jt_0470A0(void) {
    M68K_OR8(g_m68k.d[2], g_m68k.d[1]);
    { uint32_t _ea = (g_m68k.a[0] + 0x1 + (int16_t)(uint16_t)g_m68k.a[1]); uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = g_m68k.a[0]; uint32_t _tmp = bus_read32(_ea); M68K_OR32(_tmp, 0x9000013d); bus_write32(_ea, _tmp); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[1]);
    { uint32_t _ea = g_m68k.a[7]; uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $0470B0: sbcd.b d1, d1  [83 01] */
    { uint32_t _ea = (g_m68k.a[7] + (-0x7cff)); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = (g_m68k.a[4] + (-0x7cff)); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = /* UNHANDLED_ADDR: ([a2, a0.w * 2]) */ 0; uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = /* UNHANDLED_ADDR: ([a6, a0.w * 2]) */ 0; uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = g_m68k.a[7]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $0470C4: sbcd.b d1, d1  [83 01] */
    { uint32_t _ea = (g_m68k.a[4] + (-0x7cff)); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = /* UNHANDLED_ADDR: ([a2, a0.w * 2]) */ 0; uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = /* UNHANDLED_ADDR: ([a6, a0.w * 2]) */ 0; uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $0470D4: sbcd.b d1, d1  [83 01] */
    { uint32_t _ea = g_m68k.a[7]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $0470D8: sbcd.b d1, d1  [83 01] */
    { uint32_t _ea = 0x84000569; uint8_t _b = 1u << ((g_m68k.d[1]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $0470E0: sbcd.b d1, d1  [83 01] */
    { uint32_t _ea = (g_m68k.a[7] + (-0x6fff)); uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* WARNING: function did not end with RTS */
}

/* $0470E8-$04711A  (18 instructions, 50 bytes) */
void jt_0470E8(void) {
    M68K_SUB8(g_m68k.d[0], g_m68k.d[1]);
    { uint32_t _ea = g_m68k.a[3]; uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[1]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $0470F0: sbcd.b d1, d1  [83 01] */
    { uint32_t _ea = (g_m68k.a[1] + (-0x7cff)); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = (g_m68k.a[3] + (-0x7cff)); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = /* UNHANDLED_ADDR: ([a1, a0.w * 2]) */ 0; uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = /* UNHANDLED_ADDR: ([a5, a0.w * 2]) */ 0; uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = g_m68k.a[6]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $047104: sbcd.b d1, d1  [83 01] */
    { uint32_t _ea = (g_m68k.a[3] + (-0x7cff)); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = /* UNHANDLED_ADDR: ([a1, a0.w * 2]) */ 0; uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = /* UNHANDLED_ADDR: ([a5, a0.w * 2]) */ 0; uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = g_m68k.a[2]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $047114: sbcd.b d1, d1  [83 01] */
    { uint32_t _ea = g_m68k.a[6]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $047118: sbcd.b d1, d1  [83 01] */
    /* WARNING: function did not end with RTS */
}

/* $047C2A-$047C4A  (9 instructions, 32 bytes) */
void jt_047C2A(void) {
    { uint32_t _ea = g_m68k.a[6]; uint8_t _b = 1u << ((g_m68k.d[1]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $047C2C: sbcd.b d0, d1  [83 00] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, 0x0); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, 0x0); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, 0x0); bus_write8(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[2] + 0x630); uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, 0x0); bus_write8(_ea, _tmp); }
    /* TODO $047C40: sbcd.b d0, d1  [83 00] */
    { uint32_t _ea = (g_m68k.a[6] + 0x3f + (int16_t)(uint16_t)g_m68k.d[0]); uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, 0x0); bus_write8(_ea, _tmp); }
    /* TODO $047C48: sbcd.b d0, d1  [83 00] */
    /* WARNING: function did not end with RTS */
}

/* $04802A-$04803A  (5 instructions, 16 bytes) */
void jt_04802A(void) {
    { uint32_t _ea = g_m68k.a[7]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $04802C: sbcd.b d1, d1  [83 01] */
    { uint32_t _ea = (g_m68k.a[6] + (-0x7cff)); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = /* UNHANDLED_ADDR: ([a4, a0.w * 2]) */ 0; uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = 0x008301; uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* WARNING: function did not end with RTS */
}

/* $04842A-$048436  (4 instructions, 12 bytes) */
void jt_04842A(void) {
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[1]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $04842C: sbcd.b d1, d1  [83 01] */
    { uint32_t _ea = (g_m68k.a[7] + (-0x7cff)); uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v & ~ _b); }
    { uint32_t _ea = /* UNHANDLED_ADDR: ([a6, a0.w * 2]) */ 0; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v & ~ _b); }
    /* WARNING: function did not end with RTS */
}

/* $048C2A-$048C3E  (5 instructions, 20 bytes) */
void jt_048C2A(void) {
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, 0x0); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, 0x0); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[2]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, 0x830107a3); bus_write32(_ea, _tmp); }
    /* TODO $048C38: sbcd.b d0, d1  [83 00] */
    { uint32_t _ea = (g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2); uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v & ~ _b); }
    /* WARNING: function did not end with RTS */
}

/* $049400-$04941E  (12 instructions, 30 bytes) */
void jt_049400(void) {
    /* TODO $049400: sbcd.b d1, d1  [83 01] */
    M68K_BSET(g_m68k.d[5], g_m68k.d[3]);
    /* TODO $049404: sbcd.b d1, d1  [83 01] */
    /* TODO $049406: movep.l d3, -$7cff(a2)  [07 CA 83 01] */
    /* TODO $04940A: movep.l d3, -$7cff(a7)  [07 CF 83 01] */
    { uint32_t _ea = g_m68k.a[6]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $049410: sbcd.b d1, d1  [83 01] */
    { uint32_t _ea = g_m68k.a[6]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $049414: sbcd.b d1, d1  [83 01] */
    { uint32_t _ea = g_m68k.a[1]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $049418: sbcd.b d0, d1  [83 00] */
    M68K_ADD8(g_m68k.d[2], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $04942A-$04942E  (2 instructions, 4 bytes) */
void jt_04942A(void) {
    M68K_BTST(g_m68k.d[7], g_m68k.d[3]);
    /* TODO $04942C: sbcd.b d1, d1  [83 01] */
    /* WARNING: function did not end with RTS */
}

/* $049840-$049842  (1 instructions, 2 bytes) */
void jt_049840(void) {
    M68K_SUB8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $049C2A-$049C32  (3 instructions, 8 bytes) */
void jt_049C2A(void) {
    { uint32_t _ea = g_m68k.a[1]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $049C2C: sbcd.b d1, d1  [83 01] */
    M68K_ADD8(g_m68k.d[2], 0x1);
    /* WARNING: function did not end with RTS */
}

/* $04A02A-$04A04E  (11 instructions, 36 bytes) */
void jt_04A02A(void) {
    { uint32_t _ea = (g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = (g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = g_m68k.a[1]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $04A034: sbcd.b d0, d1  [83 00] */
    { uint32_t _ea = (g_m68k.a[3] + (-0x7d00)); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = g_m68k.a[4]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $04A03C: sbcd.b d0, d1  [83 00] */
    M68K_BTST(bus_read8(/* UNHANDLED_ADDR: #$840001b7 */ 0), g_m68k.d[0]);
    M68K_OR8(g_m68k.d[2], g_m68k.d[1]);
    { uint32_t _ea = (g_m68k.a[2] + (-0x7c00)); uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = (g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.a[1]); uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* WARNING: function did not end with RTS */
}

/* $04AC2A-$04AC52  (15 instructions, 40 bytes) */
void jt_04AC2A(void) {
    M68K_BTST(bus_read8(g_m68k.a[3]), g_m68k.d[1]);
    M68K_SUB8(g_m68k.d[2], g_m68k.d[0]);
    M68K_BTST(bus_read8(g_m68k.a[3]), g_m68k.d[1]);
    M68K_SUB8(g_m68k.d[2], g_m68k.d[0]);
    M68K_BTST(bus_read8((g_m68k.a[0] + (-0x6c00))), g_m68k.d[1]);
    M68K_BTST(bus_read8((g_m68k.a[7] + 0 + (int16_t)(uint16_t)g_m68k.a[1] * 4)), g_m68k.d[1]);
    M68K_BTST(bus_read8((0x4ac3c + (int16_t)(uint16_t)g_m68k.a[1] * 4)), g_m68k.d[1]);
    M68K_BCHG(g_m68k.d[1], g_m68k.d[1]);
    M68K_SUB8(g_m68k.d[2], g_m68k.d[0]);
    /* TODO $04AC42: movep.l -$6c00(a0), d1  [03 48 94 00] */
    { uint32_t _ea = g_m68k.a[3]; uint8_t _b = 1u << ((g_m68k.d[1]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    M68K_SUB8(g_m68k.d[2], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[0]; uint8_t _b = 1u << ((g_m68k.d[1]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    M68K_SUB8(g_m68k.d[2], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[3] + (-0x6c00)); uint8_t _b = 1u << ((g_m68k.d[1]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* WARNING: function did not end with RTS */
}

/* $04B02A-$04B03E  (3 instructions, 20 bytes) */
void jt_04B02A(void) {
    { uint32_t _ea = (g_m68k.a[4] + (-0x6b00)); uint32_t _tmp = bus_read32(_ea); M68K_SUB32(_tmp, 0x950004b0); bus_write32(_ea, _tmp); }
    { uint32_t _ea = 0x950004CB; uint32_t _tmp = bus_read32(_ea); M68K_SUB32(_tmp, 0x950004c2); bus_write32(_ea, _tmp); }
    M68K_SUBX8(g_m68k.d[2], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $04B42A-$04B43E  (5 instructions, 20 bytes) */
void jt_04B42A(void) {
    M68K_BTST(bus_read8(/* UNHANDLED_ADDR: #$840101b7 */ 0), g_m68k.d[0]);
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[5] + (-0x7bff)); uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = (g_m68k.a[3] + 0x1 + (int16_t)(uint16_t)g_m68k.a[1]); uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = (g_m68k.a[6] + 0x1 + (int32_t)g_m68k.a[0]); uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* WARNING: function did not end with RTS */
}

/* $04C030-$04C032  (1 instructions, 2 bytes) */
void jt_04C030(void) {
    M68K_SUB8(g_m68k.d[0], g_m68k.d[1]);
    /* WARNING: function did not end with RTS */
}

/* $04C828-$04C82A  (1 instructions, 2 bytes) */
void jt_04C828(void) {
    M68K_SUB8(g_m68k.d[0], g_m68k.d[1]);
    /* WARNING: function did not end with RTS */
}

/* $04CC2A-$04CC2E  (2 instructions, 4 bytes) */
void jt_04CC2A(void) {
    { uint32_t _ea = g_m68k.a[1]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $04CC2C: sbcd.b d3, d1  [83 03] */
    /* WARNING: function did not end with RTS */
}

/* $04D42A-$04D42E  (2 instructions, 4 bytes) */
void jt_04D42A(void) {
    { uint32_t _ea = g_m68k.a[1]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $04D42C: sbcd.b d3, d1  [83 03] */
    /* WARNING: function did not end with RTS */
}

/* $04E080-$04E0B2  (14 instructions, 50 bytes) */
void jt_04E080(void) {
    /* TODO $04E080: sbcd.b d1, d3  [87 01] */
    /* TODO $04E082: movep.w -$78ff(a6), d0  [01 0E 87 01] */
    { uint32_t _ea = (g_m68k.a[1] + (-0x7900)); uint8_t _b = 1u << ((g_m68k.d[1]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    { uint32_t _ea = g_m68k.a[4]; uint32_t _tmp = bus_read32(_ea); M68K_OR32(_tmp, 0x8700008d); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[0], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[1]; uint16_t _tmp = bus_read16(_ea); M68K_OR16(_tmp, 0x9000); bus_write16(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[5]; uint16_t _tmp = bus_read16(_ea); M68K_OR16(_tmp, 0x8300); bus_write16(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    /* TODO $04E09E: movep.l d1, -$7d00(a2)  [03 CA 83 00] */
    M68K_BCHG(g_m68k.d[5], g_m68k.d[4]);
    /* TODO $04E0A4: sbcd.b d0, d1  [83 00] */
    M68K_BTST(bus_read8((g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2)), g_m68k.d[4]);
    { uint32_t _ea = (g_m68k.a[5] + (-0x78ff)); uint32_t _tmp = bus_read32(_ea); M68K_OR32(_tmp, 0x870100b8); bus_write32(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $04F42A-$04F432  (3 instructions, 8 bytes) */
void jt_04F42A(void) {
    { uint32_t _ea = g_m68k.a[1]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $04F42C: sbcd.b d1, d1  [83 01] */
    M68K_ADD8(g_m68k.d[2], 0x1);
    /* WARNING: function did not end with RTS */
}

/* $04FC2A-$04FC34  (4 instructions, 10 bytes) */
void jt_04FC2A(void) {
    { uint32_t _ea = g_m68k.a[2]; uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[1]);
    M68K_BTST(bus_read8((0x4fc31 + (int16_t)(uint16_t)g_m68k.a[0])), g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[2]; uint8_t _b = 1u << ((g_m68k.d[4]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* WARNING: function did not end with RTS */
}

/* $050000-$050002  (1 instructions, 2 bytes) */
void jt_050000(void) {
    M68K_OR8(g_m68k.d[2], g_m68k.d[1]);
    /* WARNING: function did not end with RTS */
}

/* $050002-$050006  (1 instructions, 4 bytes) */
void jt_050002(void) {
    { uint32_t _ea = (g_m68k.a[7] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 4); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v & ~ _b); }
    /* WARNING: function did not end with RTS */
}

/* $050004-$050006  (1 instructions, 2 bytes) */
void jt_050004(void) {
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $050006-$05000A  (1 instructions, 4 bytes) */
void jt_050006(void) {
    { uint32_t _ea = (g_m68k.a[2] + (-0x7bff)); uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* WARNING: function did not end with RTS */
}

/* $050008-$05000A  (1 instructions, 2 bytes) */
void jt_050008(void) {
    M68K_OR8(g_m68k.d[2], g_m68k.d[1]);
    /* WARNING: function did not end with RTS */
}

/* $05000A-$05000E  (1 instructions, 4 bytes) */
void jt_05000A(void) {
    { uint32_t _ea = (g_m68k.a[0] + 0x1 + (int16_t)(uint16_t)g_m68k.a[1]); uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* WARNING: function did not end with RTS */
}

/* $05000C-$05000E  (1 instructions, 2 bytes) */
void jt_05000C(void) {
    M68K_SUB8(g_m68k.d[0], g_m68k.d[1]);
    /* WARNING: function did not end with RTS */
}

/* $050010-$050012  (1 instructions, 2 bytes) */
void jt_050010(void) {
    M68K_SUB8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $05002A-$05004E  (9 instructions, 36 bytes) */
void jt_05002A(void) {
    { uint32_t _ea = 0x008303; uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = /* UNHANDLED_ADDR: ([a4, a0.w * 2], $16e8303) */ 0; uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = (g_m68k.a[2] + (-0x7cfd)); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = g_m68k.a[7]; uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $05003C: sbcd.b d3, d1  [83 03] */
    M68K_BTST(bus_read8(/* UNHANDLED_ADDR: #$840001b7 */ 0), g_m68k.d[0]);
    M68K_OR8(g_m68k.d[2], g_m68k.d[1]);
    { uint32_t _ea = (g_m68k.a[2] + (-0x7c00)); uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = (g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.a[1]); uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* WARNING: function did not end with RTS */
}

/* $050078-$05007E  (3 instructions, 6 bytes) */
void jt_050078(void) {
    /* TODO $050078: sbcd.b d3, d1  [83 03] */
    { uint32_t _ea = g_m68k.a[6]; uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $05007C: sbcd.b d3, d1  [83 03] */
    /* WARNING: function did not end with RTS */
}

/* $05042A-$050442  (5 instructions, 24 bytes) */
void jt_05042A(void) {
    /* TODO $05042A: movep.l d1, -$7bff(a0)  [03 C8 84 01] */
    { uint32_t _ea = (g_m68k.a[5] + (-0x7bff)); uint8_t _b = 1u << ((g_m68k.d[4]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v & ~ _b); }
    M68K_EOR8(g_m68k.d[0], 0x0);
    M68K_EOR8(g_m68k.d[3], 0x0);
    { uint32_t _ea = (g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 8); uint32_t _tmp = bus_read32(_ea); M68K_OR32(_tmp, 0x870000bd); bus_write32(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $050500-$050502  (1 instructions, 2 bytes) */
void jt_050500(void) {
    /* TODO $050500: sbcd.b d0, d3  [87 00] */
    /* WARNING: function did not end with RTS */
}

/* $050C2A-$050C4A  (8 instructions, 32 bytes) */
void jt_050C2A(void) {
    M68K_SUB32(g_m68k.d[2], 0x83020477);
    /* TODO $050C30: sbcd.b d2, d1  [83 02] */
    { uint32_t _ea = (g_m68k.a[4] + 0x461); uint16_t _tmp = bus_read16(_ea); M68K_SUB16(_tmp, 0x8302); bus_write16(_ea, _tmp); }
    /* TODO $050C38: sbcd.b d2, d1  [83 02] */
    /* TODO $050C3A: movep.l d1, -$7bff(a0)  [03 C8 84 01] */
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, 0x0); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, 0x0); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, 0x0); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $05142A-$051436  (3 instructions, 12 bytes) */
void jt_05142A(void) {
    { uint32_t _ea = (g_m68k.a[3] + 0x423); uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, 0x3); bus_write8(_ea, _tmp); }
    /* TODO $051430: sbcd.b d3, d1  [83 03] */
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, 0x3); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $05182A-$051836  (2 instructions, 12 bytes) */
void jt_05182A(void) {
    { uint32_t _ea = g_m68k.a[7]; uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, 0x8700); bus_write16(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 8); uint32_t _tmp = bus_read32(_ea); M68K_OR32(_tmp, 0x870000bd); bus_write32(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $051880-$051882  (1 instructions, 2 bytes) */
void jt_051880(void) {
    /* TODO $051880: sbcd.b d0, d3  [87 00] */
    /* WARNING: function did not end with RTS */
}

/* $051C2A-$051C4A  (7 instructions, 32 bytes) */
void jt_051C2A(void) {
    { uint32_t _ea = g_m68k.a[2]; uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    M68K_BTST(bus_read8((0x51c30 + (int16_t)(uint16_t)g_m68k.a[0] * 4)), g_m68k.d[0]);
    M68K_BTST(bus_read8(/* UNHANDLED_ADDR: #$840003ce */ 0), g_m68k.d[0]);
    /* TODO $051C38: sbcd.b d0, d1  [83 00] */
    { uint32_t _ea = (g_m68k.a[3] + (-0x7d00)); uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, 0x83000ab1); bus_write32(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2); uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, 0x83000abc); bus_write32(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $05202A-$05203E  (7 instructions, 20 bytes) */
void jt_05202A(void) {
    /* TODO $05202A: movep.l -$7d00(a0), d4  [09 48 83 00] */
    { uint32_t _ea = (g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = (g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = g_m68k.a[1]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $052038: sbcd.b d0, d1  [83 00] */
    { uint32_t _ea = g_m68k.a[2]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $05203C: sbcd.b d0, d1  [83 00] */
    /* WARNING: function did not end with RTS */
}

/* $05242A-$05244E  (13 instructions, 36 bytes) */
void jt_05242A(void) {
    { uint32_t _ea = g_m68k.a[7]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $05242C: sbcd.b d1, d1  [83 01] */
    { uint32_t _ea = (g_m68k.a[6] + (-0x7cff)); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = /* UNHANDLED_ADDR: ([a4, a0.w * 2]) */ 0; uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = 0x008301; uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $05243C: sbcd.b d1, d1  [83 01] */
    { uint32_t _ea = g_m68k.a[7]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $052440: sbcd.b d1, d1  [83 01] */
    { uint32_t _ea = g_m68k.a[2]; uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[1]);
    { uint32_t _ea = (g_m68k.a[1] + (-0x7cff)); uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = (g_m68k.a[7] + (-0x6fff)); uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* WARNING: function did not end with RTS */
}

/* $05282A-$052842  (7 instructions, 24 bytes) */
void jt_05282A(void) {
    M68K_BCHG(g_m68k.d[7], g_m68k.d[4]);
    /* TODO $05282C: sbcd.b d1, d1  [83 01] */
    { uint32_t _ea = (g_m68k.a[1] + (-0x7cff)); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = (g_m68k.a[5] + (-0x7cff)); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = /* UNHANDLED_ADDR: ([a3, a0.w * 2]) */ 0; uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = /* UNHANDLED_ADDR: ([a7, a0.w * 2]) */ 0; uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = /* UNHANDLED_ADDR: ([a0, a0.w * 2]) */ 0; uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* WARNING: function did not end with RTS */
}

/* $052C2A-$052C4E  (10 instructions, 36 bytes) */
void jt_052C2A(void) {
    { uint32_t _ea = g_m68k.a[6]; uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, 0x8401); bus_write16(_ea, _tmp); }
    { uint32_t _ea = 0x8400013B; uint8_t _b = 1u << ((g_m68k.d[1]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[1]);
    { uint32_t _ea = g_m68k.a[4]; uint8_t _b = 1u << ((g_m68k.d[1]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $052C38: sbcd.b d1, d1  [83 01] */
    { uint32_t _ea = (g_m68k.a[7] + 0xa73); uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, 0x8301); bus_write16(_ea, _tmp); }
    /* TODO $052C40: sbcd.b d1, d1  [83 01] */
    { uint32_t _ea = 0x000A7D; uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, 0x8301); bus_write16(_ea, _tmp); }
    /* TODO $052C48: sbcd.b d1, d1  [83 01] */
    { uint32_t _ea = (g_m68k.a[6] + (-0x7d00)); uint8_t _b = 1u << ((g_m68k.d[5]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* WARNING: function did not end with RTS */
}

/* $053848-$053856  (6 instructions, 14 bytes) */
void jt_053848(void) {
    M68K_OR8(g_m68k.d[6], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[3]; uint8_t _b = 1u << ((g_m68k.d[5]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    M68K_SUB8(g_m68k.d[0], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[5]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    M68K_SUB8(g_m68k.d[0], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, 0x0); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $054C2A-$054C32  (3 instructions, 8 bytes) */
void jt_054C2A(void) {
    { uint32_t _ea = g_m68k.a[1]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $054C2C: sbcd.b d1, d1  [83 01] */
    M68K_ADD8(g_m68k.d[2], 0x1);
    /* WARNING: function did not end with RTS */
}

/* $05542A-$055432  (3 instructions, 8 bytes) */
void jt_05542A(void) {
    { uint32_t _ea = g_m68k.a[1]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $05542C: sbcd.b d1, d1  [83 01] */
    M68K_ADD8(g_m68k.d[2], 0x1);
    /* WARNING: function did not end with RTS */
}

/* $0558E0-$0558EE  (4 instructions, 14 bytes) */
void jt_0558E0(void) {
    M68K_SUB8(g_m68k.d[2], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x0); bus_write8(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[1] + (-0x78) + (int16_t)(uint16_t)g_m68k.d[0]); uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x0); bus_write8(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[0], g_m68k.d[1]);
    /* WARNING: function did not end with RTS */
}
