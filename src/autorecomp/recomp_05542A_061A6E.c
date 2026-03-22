/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $05542A - $061A6E */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

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

/* $056700-$056702  (1 instructions, 2 bytes) */
void jt_056700(void) {
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $056C2A-$056C3A  (4 instructions, 16 bytes) */
void jt_056C2A(void) {
    { uint32_t _ea = /* UNHANDLED_ADDR: ([a3, a0.w * 2], $5eb8303) */ 0; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    M68K_BTST(bus_read8((g_m68k.a[6] + (-0x7cfd))), g_m68k.d[3]);
    M68K_BTST(bus_read8(g_m68k.a[2]), g_m68k.d[3]);
    /* TODO $056C38: sbcd.b d3, d1  [83 03] */
    /* WARNING: function did not end with RTS */
}

/* $0570C0-$0570C2  (1 instructions, 2 bytes) */
void jt_0570C0(void) {
    M68K_SUB8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $05742A-$057432  (3 instructions, 8 bytes) */
void jt_05742A(void) {
    /* TODO $05742A: movep.w d5, -$7800(a4)  [0B 8C 88 00] */
    { uint32_t _ea = g_m68k.a[2]; uint8_t _b = 1u << ((g_m68k.d[5]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v & ~ _b); }
    M68K_SUB8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $05782A-$057852  (12 instructions, 40 bytes) */
void jt_05782A(void) {
    /* TODO $05782A: movep.w d3, -$7d00(a6)  [07 8E 83 00] */
    { uint32_t _ea = g_m68k.a[4]; uint8_t _b = 1u << ((g_m68k.d[6]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v & ~ _b); }
    /* TODO $057830: sbcd.b d0, d1  [83 00] */
    { uint32_t _ea = (g_m68k.a[1] + (-0x7d00)); uint8_t _b = 1u << ((g_m68k.d[6]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v & ~ _b); }
    { uint32_t _ea = (g_m68k.a[2] + 0x630); uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, 0x0); bus_write8(_ea, _tmp); }
    /* TODO $05783C: sbcd.b d0, d1  [83 00] */
    { uint32_t _ea = (g_m68k.a[6] + 0x39 + (int16_t)(uint16_t)g_m68k.d[0]); uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, 0x0); bus_write8(_ea, _tmp); }
    /* TODO $057844: sbcd.b d0, d1  [83 00] */
    { uint32_t _ea = 0x83000DBF; uint8_t _b = 1u << ((g_m68k.d[6]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v & ~ _b); }
    /* TODO $05784C: sbcd.b d0, d1  [83 00] */
    M68K_BSET(g_m68k.d[6], g_m68k.d[6]);
    /* TODO $057850: sbcd.b d0, d1  [83 00] */
    /* WARNING: function did not end with RTS */
}

/* $057C2A-$057C32  (2 instructions, 8 bytes) */
void jt_057C2A(void) {
    M68K_OR32(g_m68k.d[7], 0x83030073);
    /* TODO $057C30: sbcd.b d1, d1  [83 01] */
    /* WARNING: function did not end with RTS */
}

/* $05802A-$058082  (27 instructions, 88 bytes) */
void jt_05802A(void) {
    /* TODO $05802A: movep.w d3, -$7cff(a5)  [07 8D 83 01] */
    /* TODO $05802E: movep.w d3, -$7cff(a6)  [07 8E 83 01] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v & ~ _b); }
    /* TODO $058034: sbcd.b d1, d1  [83 01] */
    { uint32_t _ea = (g_m68k.a[7] + 0x47a); uint16_t _tmp = bus_read16(_ea); M68K_SUB16(_tmp, 0x8301); bus_write16(_ea, _tmp); }
    /* TODO $05803C: sbcd.b d1, d1  [83 01] */
    M68K_SUB32(g_m68k.d[5], 0x8301068d);
    /* TODO $058044: sbcd.b d0, d1  [83 00] */
    M68K_ADD16(g_m68k.d[1], 0x8301);
    { uint32_t _ea = (g_m68k.a[2] + (-0x7cff)); uint8_t _b = 1u << ((g_m68k.d[6]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = /* UNHANDLED_ADDR: ([a1, a0.w * 2]) */ 0; uint8_t _b = 1u << ((g_m68k.d[6]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = /* UNHANDLED_ADDR: ([a7, a0.w * 2]) */ 0; uint8_t _b = 1u << ((g_m68k.d[6]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = g_m68k.a[4]; uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $058058: sbcd.b d0, d1  [83 00] */
    /* TODO $05805A: movep.l d1, -$7cff(a0)  [03 C8 83 01] */
    /* TODO $05805E: movep.w d6, -$7cff(a4)  [0D 8C 83 01] */
    { uint32_t _ea = g_m68k.a[3]; uint8_t _b = 1u << ((g_m68k.d[6]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v & ~ _b); }
    /* TODO $058064: sbcd.b d1, d1  [83 01] */
    { uint32_t _ea = g_m68k.a[6]; uint8_t _b = 1u << ((g_m68k.d[6]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v & ~ _b); }
    /* TODO $058068: sbcd.b d1, d1  [83 01] */
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, 0x1); bus_write8(_ea, _tmp); }
    /* TODO $05806E: movep.w d3, -$7cff(a5)  [07 8D 83 01] */
    { uint32_t _ea = g_m68k.a[7]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v & ~ _b); }
    /* TODO $058074: sbcd.b d1, d1  [83 01] */
    M68K_BCHG(g_m68k.d[4], g_m68k.d[6]);
    /* TODO $058078: sbcd.b d1, d1  [83 01] */
    { uint32_t _ea = 0x4848301; uint16_t _tmp = bus_read16(_ea); M68K_SUB16(_tmp, 0x8301); bus_write16(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $05882A-$05887A  (28 instructions, 80 bytes) */
void jt_05882A(void) {
    /* TODO $05882A: movep.w -$7900(a7), d0  [01 0F 87 00] */
    M68K_BTST(bus_read8(g_m68k.a[2]), g_m68k.d[0]);
    M68K_OR8(g_m68k.d[6], g_m68k.d[0]);
    M68K_BTST(bus_read8(g_m68k.a[5]), g_m68k.d[0]);
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    M68K_BTST(bus_read8(0x50c38), g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[3]; uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $058840: sbcd.b d0, d1  [83 00] */
    { uint32_t _ea = (g_m68k.a[1] + (-0x7d00)); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = (g_m68k.a[5] + (-0x7d00)); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = (g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = (g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = g_m68k.a[6]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $058854: sbcd.b d0, d1  [83 00] */
    { uint32_t _ea = (g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = 0x008300; uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = (g_m68k.a[2] + (-0x7d00)); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = g_m68k.a[2]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $058864: sbcd.b d0, d1  [83 00] */
    { uint32_t _ea = g_m68k.a[6]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $058868: sbcd.b d0, d1  [83 00] */
    M68K_BTST(bus_read8((g_m68k.a[2] + (-0x7900))), g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    M68K_BTST(bus_read8(0x008400), g_m68k.d[0]);
    M68K_BTST(bus_read8((0x58878 + (int16_t)(uint16_t)g_m68k.a[0] * 4)), g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $058C2A-$058CD2  (60 instructions, 168 bytes) */
void jt_058C2A(void) {
    { uint32_t _ea = g_m68k.a[1]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $058C2C: sbcd.b d1, d1  [83 01] */
    { uint32_t _ea = (g_m68k.a[7] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = (g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = g_m68k.a[1]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $058C38: sbcd.b d0, d1  [83 00] */
    { uint32_t _ea = g_m68k.a[2]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $058C3C: sbcd.b d0, d1  [83 00] */
    { uint32_t _ea = g_m68k.a[6]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $058C40: sbcd.b d0, d1  [83 00] */
    { uint32_t _ea = (g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = g_m68k.a[1]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $058C48: sbcd.b d0, d1  [83 00] */
    { uint32_t _ea = (g_m68k.a[3] + (-0x7d00)); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $058C50: sbcd.b d0, d1  [83 00] */
    { uint32_t _ea = g_m68k.a[7]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $058C54: sbcd.b d0, d1  [83 00] */
    { uint32_t _ea = 0x8401056C; uint8_t _b = 1u << ((g_m68k.d[1]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.a[1]); uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    M68K_BCLR(g_m68k.d[2], g_m68k.d[2]);
    M68K_OR8(g_m68k.d[6], g_m68k.d[0]);
    M68K_BCLR(g_m68k.d[4], g_m68k.d[2]);
    M68K_OR8(g_m68k.d[6], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[0]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $058C6C: sbcd.b d1, d1  [83 01] */
    { uint32_t _ea = 0x008300; uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = (g_m68k.a[2] + (-0x7d00)); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = (g_m68k.a[7] + (-0x7d00)); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $058C7C: sbcd.b d0, d1  [83 00] */
    M68K_CMP32(_predec32(4), 0x830209ca);
    /* TODO $058C84: sbcd.b d1, d1  [83 01] */
    { uint32_t _ea = (g_m68k.a[7] + (-0x7d00)); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = (g_m68k.a[4] + (-0x7d00)); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = g_m68k.a[4]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $058C90: sbcd.b d0, d1  [83 00] */
    M68K_BTST(bus_read8(/* UNHANDLED_ADDR: #$840001b7 */ 0), g_m68k.d[0]);
    M68K_OR8(g_m68k.d[2], g_m68k.d[1]);
    { uint32_t _ea = (g_m68k.a[5] + (-0x7c00)); uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = (g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.a[1]); uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    M68K_BCLR(g_m68k.d[3], g_m68k.d[2]);
    M68K_OR8(g_m68k.d[6], g_m68k.d[0]);
    M68K_BCLR(g_m68k.d[5], g_m68k.d[2]);
    M68K_OR8(g_m68k.d[6], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[3]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $058CAC: sbcd.b d0, d1  [83 00] */
    { uint32_t _ea = (g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = (g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = (g_m68k.a[7] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = g_m68k.a[6]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $058CBC: sbcd.b d0, d1  [83 00] */
    { uint32_t _ea = (g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = (g_m68k.a[7] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = (g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = g_m68k.a[2]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $058CCC: sbcd.b d0, d1  [83 00] */
    { uint32_t _ea = g_m68k.a[6]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $058CD0: sbcd.b d0, d1  [83 00] */
    /* WARNING: function did not end with RTS */
}

/* $059400-$059402  (1 instructions, 2 bytes) */
void jt_059400(void) {
    /* TODO $059400: sbcd.b d0, d1  [83 00] */
    /* WARNING: function did not end with RTS */
}

/* $05942A-$059432  (3 instructions, 8 bytes) */
void jt_05942A(void) {
    { uint32_t _ea = g_m68k.a[1]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $05942C: sbcd.b d1, d1  [83 01] */
    M68K_ADD8(g_m68k.d[2], 0x1);
    /* WARNING: function did not end with RTS */
}

/* $05982A-$059832  (3 instructions, 8 bytes) */
void jt_05982A(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _b = 1u << ((g_m68k.d[1]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    M68K_SUB8(g_m68k.d[2], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[3] + (-0x6c00)); uint8_t _b = 1u << ((g_m68k.d[1]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* WARNING: function did not end with RTS */
}

/* $05A02A-$05A03A  (4 instructions, 16 bytes) */
void jt_05A02A(void) {
    M68K_BTST(bus_read8(/* UNHANDLED_ADDR: #$840101b7 */ 0), g_m68k.d[0]);
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[5] + (-0x7bff)); uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = (g_m68k.a[3] + 0x1 + (int16_t)(uint16_t)g_m68k.a[1]); uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* WARNING: function did not end with RTS */
}

/* $05A070-$05A07E  (4 instructions, 14 bytes) */
void jt_05A070(void) {
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[4] + (-0x7bff)); uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = (g_m68k.a[2] + 0x1 + (int16_t)(uint16_t)g_m68k.a[1]); uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $05A07A: movep.w d2, -$7000(a2)  [05 8A 90 00] */
    /* WARNING: function did not end with RTS */
}

/* $05A42A-$05A44E  (11 instructions, 36 bytes) */
void jt_05A42A(void) {
    { uint32_t _ea = (g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = (g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = g_m68k.a[1]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $05A434: sbcd.b d0, d1  [83 00] */
    { uint32_t _ea = (g_m68k.a[3] + (-0x7d00)); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = g_m68k.a[4]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $05A43C: sbcd.b d0, d1  [83 00] */
    M68K_BTST(bus_read8(/* UNHANDLED_ADDR: #$840001b7 */ 0), g_m68k.d[0]);
    M68K_OR8(g_m68k.d[2], g_m68k.d[1]);
    { uint32_t _ea = (g_m68k.a[2] + (-0x7c00)); uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = (g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.a[1]); uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* WARNING: function did not end with RTS */
}

/* $05AC2A-$05AC2E  (2 instructions, 4 bytes) */
void jt_05AC2A(void) {
    M68K_BCHG(g_m68k.d[4], g_m68k.d[0]);
    /* TODO $05AC2C: sbcd.b d0, d3  [87 00] */
    /* WARNING: function did not end with RTS */
}

/* $05B0E8-$05B0EA  (1 instructions, 2 bytes) */
void jt_05B0E8(void) {
    M68K_SUB8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $05B42A-$05B436  (5 instructions, 12 bytes) */
void jt_05B42A(void) {
    { uint32_t _ea = g_m68k.a[4]; uint8_t _b = 1u << ((g_m68k.d[6]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v & ~ _b); }
    /* TODO $05B42C: sbcd.b d2, d1  [83 02] */
    /* TODO $05B42E: movep.w d6, -$7cfe(a5)  [0D 8D 83 02] */
    M68K_BCLR(g_m68k.d[5], g_m68k.d[6]);
    /* TODO $05B434: sbcd.b d2, d1  [83 02] */
    /* WARNING: function did not end with RTS */
}

/* $05C02A-$05C04E  (11 instructions, 36 bytes) */
void jt_05C02A(void) {
    { uint32_t _ea = g_m68k.a[6]; uint8_t _b = 1u << ((g_m68k.d[6]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v & ~ _b); }
    /* TODO $05C02C: sbcd.b d3, d1  [83 03] */
    { uint32_t _ea = g_m68k.a[3]; uint8_t _b = 1u << ((g_m68k.d[6]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v & ~ _b); }
    /* TODO $05C030: sbcd.b d3, d1  [83 03] */
    /* TODO $05C032: movep.w d6, -$7cfd(a4)  [0D 8C 83 03] */
    /* TODO $05C036: movep.l d1, -$7cfd(a0)  [03 C8 83 03] */
    { uint32_t _ea = g_m68k.a[4]; uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $05C03C: sbcd.b d2, d1  [83 02] */
    { uint32_t _ea = /* UNHANDLED_ADDR: ([a7, a0.w * 2], $d718303) */ 0; uint8_t _b = 1u << ((g_m68k.d[6]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = (g_m68k.a[2] + (-0x7cfd)); uint8_t _b = 1u << ((g_m68k.d[6]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    M68K_ADD16(g_m68k.d[1], 0x8303);
    /* WARNING: function did not end with RTS */
}

/* $05C42A-$05C43A  (4 instructions, 16 bytes) */
void jt_05C42A(void) {
    { uint32_t _ea = g_m68k.a[4]; uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $05C42C: sbcd.b d2, d1  [83 02] */
    { uint32_t _ea = /* UNHANDLED_ADDR: ([a7, a0.w * 2], $13c8302) */ 0; uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v & ~ _b); }
    /* TODO $05C436: movep.l d1, -$7cfd(a0)  [03 C8 83 03] */
    /* WARNING: function did not end with RTS */
}

/* $05C82A-$05C84E  (12 instructions, 36 bytes) */
void jt_05C82A(void) {
    { uint32_t _ea = g_m68k.a[7]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $05C82C: sbcd.b d1, d1  [83 01] */
    { uint32_t _ea = (g_m68k.a[6] + (-0x7cff)); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = /* UNHANDLED_ADDR: ([a4, a0.w * 2]) */ 0; uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = 0x008301; uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $05C83C: sbcd.b d1, d1  [83 01] */
    { uint32_t _ea = g_m68k.a[7]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $05C840: sbcd.b d1, d1  [83 01] */
    { uint32_t _ea = 0x84000569; uint8_t _b = 1u << ((g_m68k.d[1]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $05C848: sbcd.b d1, d1  [83 01] */
    { uint32_t _ea = (g_m68k.a[7] + (-0x6fff)); uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* WARNING: function did not end with RTS */
}

/* $05CC2A-$05CC3A  (5 instructions, 16 bytes) */
void jt_05CC2A(void) {
    { uint32_t _ea = g_m68k.a[6]; uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $05CC2C: sbcd.b d1, d1  [83 01] */
    { uint32_t _ea = (g_m68k.a[1] + (-0x7cff)); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = (g_m68k.a[2] + (-0x7cff)); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = (g_m68k.a[6] + (-0x7cff)); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* WARNING: function did not end with RTS */
}

/* $05D02A-$05D066  (19 instructions, 60 bytes) */
void jt_05D02A(void) {
    { uint32_t _ea = g_m68k.a[6]; uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    M68K_SUBX8(g_m68k.d[3], g_m68k.d[1]);
    { uint32_t _ea = (g_m68k.a[3] + (-0x68ff)); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    { uint32_t _ea = 0x97010207; uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    M68K_SUBX8(g_m68k.d[3], g_m68k.d[1]);
    M68K_BTST(bus_read8(g_m68k.a[6]), g_m68k.d[7]);
    M68K_SUBX8(g_m68k.d[3], g_m68k.d[0]);
    /* TODO $05D03E: movep.l d0, -$68ff(a6)  [01 CE 97 01] */
    { uint32_t _ea = g_m68k.a[3]; uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    M68K_SUBX8(g_m68k.d[3], g_m68k.d[1]);
    { uint32_t _ea = (g_m68k.a[0] + (-0x68ff)); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    { uint32_t _ea = /* UNHANDLED_ADDR: ([a6, a1.w * 8]) */ 0; uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    M68K_AND8(g_m68k.d[4], 0x1);
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, 0x1); bus_write8(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.a[1] * 8); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    { uint32_t _ea = (g_m68k.a[6] + 0x114); uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, 0x1); bus_write8(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    M68K_BTST(bus_read8(g_m68k.a[7]), g_m68k.d[0]);
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $05D82A-$05D832  (2 instructions, 8 bytes) */
void jt_05D82A(void) {
    { uint32_t _ea = g_m68k.a[6]; uint32_t _tmp = bus_read32(_ea); M68K_OR32(_tmp, 0x870100ac); bus_write32(_ea, _tmp); }
    /* TODO $05D830: sbcd.b d1, d3  [87 01] */
    /* WARNING: function did not end with RTS */
}

/* $05D858-$05D85E  (2 instructions, 6 bytes) */
void jt_05D858(void) {
    M68K_OR8(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 8); uint8_t _b = 1u << ((g_m68k.d[1]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v & ~ _b); }
    /* WARNING: function did not end with RTS */
}

/* $05E42A-$05E44A  (16 instructions, 32 bytes) */
void jt_05E42A(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _b = 1u << ((g_m68k.d[7]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v & ~ _b); }
    /* TODO $05E42C: sbcd.b d0, d3  [87 00] */
    { uint32_t _ea = g_m68k.a[1]; uint8_t _b = 1u << ((g_m68k.d[7]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v & ~ _b); }
    /* TODO $05E430: sbcd.b d0, d3  [87 00] */
    { uint32_t _ea = g_m68k.a[2]; uint8_t _b = 1u << ((g_m68k.d[7]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v & ~ _b); }
    /* TODO $05E434: sbcd.b d0, d3  [87 00] */
    { uint32_t _ea = g_m68k.a[3]; uint8_t _b = 1u << ((g_m68k.d[7]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v & ~ _b); }
    /* TODO $05E438: sbcd.b d0, d3  [87 00] */
    { uint32_t _ea = g_m68k.a[4]; uint8_t _b = 1u << ((g_m68k.d[7]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v & ~ _b); }
    /* TODO $05E43C: sbcd.b d0, d3  [87 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[7]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v & ~ _b); }
    /* TODO $05E440: sbcd.b d0, d3  [87 00] */
    { uint32_t _ea = g_m68k.a[6]; uint8_t _b = 1u << ((g_m68k.d[7]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v & ~ _b); }
    /* TODO $05E444: sbcd.b d0, d3  [87 00] */
    { uint32_t _ea = g_m68k.a[7]; uint8_t _b = 1u << ((g_m68k.d[7]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v & ~ _b); }
    /* TODO $05E448: sbcd.b d0, d3  [87 00] */
    /* WARNING: function did not end with RTS */
}

/* $05F02A-$05F03A  (5 instructions, 16 bytes) */
void jt_05F02A(void) {
    M68K_BCLR(g_m68k.d[5], g_m68k.d[3]);
    /* TODO $05F02C: sbcd.b d2, d1  [83 02] */
    M68K_SUB32(g_m68k.d[7], 0x83020bee);
    /* TODO $05F034: sbcd.b d2, d1  [83 02] */
    { uint32_t _ea = (g_m68k.a[1] + (-0x7cfe)); uint8_t _b = 1u << ((g_m68k.d[5]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* WARNING: function did not end with RTS */
}

/* $05F42A-$05F432  (2 instructions, 8 bytes) */
void jt_05F42A(void) {
    M68K_OR32(g_m68k.d[7], 0x83030073);
    /* TODO $05F430: sbcd.b d1, d1  [83 01] */
    /* WARNING: function did not end with RTS */
}

/* $05F82A-$05F83E  (7 instructions, 20 bytes) */
void jt_05F82A(void) {
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, 0x3); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, 0x1); bus_write8(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[6] + (-0x7cfd)); uint8_t _b = 1u << ((g_m68k.d[5]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v & ~ _b); }
    { uint32_t _ea = g_m68k.a[6]; uint8_t _b = 1u << ((g_m68k.d[5]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v & ~ _b); }
    /* TODO $05F838: sbcd.b d3, d1  [83 03] */
    { uint32_t _ea = g_m68k.a[4]; uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $05F83C: sbcd.b d2, d1  [83 02] */
    /* WARNING: function did not end with RTS */
}

/* $05FC2A-$05FC32  (2 instructions, 8 bytes) */
void jt_05FC2A(void) {
    M68K_BTST(bus_read8((g_m68k.a[6] + 0 + (int16_t)(uint16_t)g_m68k.a[1])), g_m68k.d[1]);
    M68K_BTST(bus_read8(0x58c30), g_m68k.d[1]);
    /* WARNING: function did not end with RTS */
}

/* $060000-$060002  (1 instructions, 2 bytes) */
void jt_060000(void) {
    M68K_SUB8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $060004-$060006  (1 instructions, 2 bytes) */
void jt_060004(void) {
    M68K_SUB8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $060008-$06000A  (1 instructions, 2 bytes) */
void jt_060008(void) {
    M68K_SUB8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $060010-$060012  (1 instructions, 2 bytes) */
void jt_060010(void) {
    M68K_SUB8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $060040-$060042  (1 instructions, 2 bytes) */
void jt_060040(void) {
    M68K_SUB8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $06042A-$060436  (5 instructions, 12 bytes) */
void jt_06042A(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[5]))); M68K_TST8((uint8_t)g_m68k.d[0]);
    /* TODO $06042C: sbcd.b d0, d1  [83 00] */
    M68K_BTST(bus_read8(g_m68k.a[4]), g_m68k.d[7]);
    /* TODO $060430: sbcd.b d0, d1  [83 00] */
    /* TODO $060432: movep.w -$7cfe(a4), d7  [0F 0C 83 02] */
    /* WARNING: function did not end with RTS */
}

/* $060600-$060640  (20 instructions, 64 bytes) */
void jt_060600(void) {
    /* TODO $060600: sbcd.b d1, d1  [83 01] */
    { uint32_t _ea = (g_m68k.a[6] + (-0x7cff)); uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    { uint32_t _ea = /* UNHANDLED_ADDR: ([a6, a0.w * 2]) */ 0; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    M68K_BTST(bus_read8(/* UNHANDLED_ADDR: #$830105e6 */ 0), g_m68k.d[3]);
    /* TODO $060610: sbcd.b d1, d1  [83 01] */
    { uint32_t _ea = (g_m68k.a[6] + (-0x7cff)); uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    { uint32_t _ea = /* UNHANDLED_ADDR: ([a6, a0.w * 2]) */ 0; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    M68K_BTST(bus_read8(/* UNHANDLED_ADDR: #$830105e6 */ 0), g_m68k.d[3]);
    /* TODO $060620: sbcd.b d1, d1  [83 01] */
    { uint32_t _ea = (g_m68k.a[6] + (-0x7cff)); uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    { uint32_t _ea = /* UNHANDLED_ADDR: ([a6, a0.w * 2]) */ 0; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(2))); M68K_TST8((uint8_t)g_m68k.d[0]);
    /* TODO $06062C: sbcd.b d0, d1  [83 00] */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(6))); M68K_TST8((uint8_t)g_m68k.d[0]);
    M68K_SUB8(g_m68k.d[0], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[5] + (-0x6fff)); uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    { uint32_t _ea = (g_m68k.a[5] + 0x1 + (int16_t)(uint16_t)g_m68k.a[1]); uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    { uint32_t _ea = g_m68k.a[6]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    M68K_SUB8(g_m68k.d[0], g_m68k.d[1]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* WARNING: function did not end with RTS */
}

/* $060640-$060672  (19 instructions, 50 bytes) */
void jt_060640(void) {
    M68K_SUB8(g_m68k.d[0], g_m68k.d[1]);
    { uint32_t _ea = (g_m68k.a[5] + (-0x6fff)); uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    { uint32_t _ea = (g_m68k.a[5] + 0x1 + (int16_t)(uint16_t)g_m68k.a[1]); uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    { uint32_t _ea = g_m68k.a[6]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    M68K_SUB8(g_m68k.d[0], g_m68k.d[1]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    M68K_SUB8(g_m68k.d[0], g_m68k.d[1]);
    { uint32_t _ea = (g_m68k.a[5] + (-0x6fff)); uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    { uint32_t _ea = (g_m68k.a[5] + 0x1 + (int16_t)(uint16_t)g_m68k.a[1]); uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    { uint32_t _ea = g_m68k.a[6]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    M68K_SUB8(g_m68k.d[0], g_m68k.d[1]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    M68K_SUB8(g_m68k.d[0], g_m68k.d[1]);
    { uint32_t _ea = (g_m68k.a[5] + (-0x6fff)); uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    { uint32_t _ea = (g_m68k.a[5] + 0x1 + (int16_t)(uint16_t)g_m68k.a[1]); uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(3))); M68K_TST8((uint8_t)g_m68k.d[0]);
    /* TODO $06066C: sbcd.b d0, d1  [83 00] */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(7))); M68K_TST8((uint8_t)g_m68k.d[0]);
    M68K_SUB8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $060800-$060802  (1 instructions, 2 bytes) */
void jt_060800(void) {
    M68K_OR8(g_m68k.d[6], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $06082A-$06088E  (36 instructions, 100 bytes) */
void jt_06082A(void) {
    /* TODO $06082A: movep.l -$6200(a7), d7  [0F 4F 9E 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[7]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    M68K_SUB8(g_m68k.d[7], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[3]; uint8_t _b = 1u << ((g_m68k.d[7]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    M68K_SUB8(g_m68k.d[7], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[1]; uint8_t _b = 1u << ((g_m68k.d[7]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    M68K_SUB8(g_m68k.d[7], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[7]; uint8_t _b = 1u << ((g_m68k.d[7]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    M68K_SUB8(g_m68k.d[7], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[5] + (-0x7000)); uint8_t _b = 1u << ((g_m68k.d[7]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = (g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.a[1]); uint8_t _b = 1u << ((g_m68k.d[7]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    M68K_BTST(bus_read8(g_m68k.a[4]), g_m68k.d[0]);
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    M68K_BTST(bus_read8((g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 4)), g_m68k.d[0]);
    M68K_BTST(bus_read8(/* UNHANDLED_ADDR: #$83000165 */ 0), g_m68k.d[0]);
    /* TODO $060854: sbcd.b d0, d1  [83 00] */
    { uint32_t _ea = (g_m68k.a[0] + (-0x7d00)); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = (g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = (g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = g_m68k.a[1]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $060864: sbcd.b d0, d1  [83 00] */
    { uint32_t _ea = (g_m68k.a[3] + (-0x7d00)); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = g_m68k.a[0]; uint8_t _b = 1u << ((g_m68k.d[7]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    M68K_SUB8(g_m68k.d[7], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _b = 1u << ((g_m68k.d[7]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    M68K_SUB8(g_m68k.d[7], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[4]; uint8_t _b = 1u << ((g_m68k.d[7]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    M68K_SUB8(g_m68k.d[7], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[2]; uint8_t _b = 1u << ((g_m68k.d[7]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    M68K_SUB8(g_m68k.d[7], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[0] + (-0x6200)); uint8_t _b = 1u << ((g_m68k.d[7]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = (g_m68k.a[6] + (-0x7000)); uint8_t _b = 1u << ((g_m68k.d[7]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = (g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.a[1]); uint8_t _b = 1u << ((g_m68k.d[7]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    M68K_BTST(bus_read8(g_m68k.a[5]), g_m68k.d[0]);
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    M68K_BTST(bus_read8((g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 4)), g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0608C0-$06098A  (77 instructions, 202 bytes) */
void jt_0608C0(void) {
    M68K_SUB8(g_m68k.d[0], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[0]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    M68K_SUB8(g_m68k.d[0], g_m68k.d[0]);
    M68K_BTST(bus_read8(0x008400), g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[1]; uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[4]; uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[7]; uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $0608D4: sbcd.b d0, d1  [83 00] */
    { uint32_t _ea = (g_m68k.a[5] + (-0x7d00)); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = (g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = (g_m68k.a[7] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = g_m68k.a[2]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $0608E4: sbcd.b d0, d1  [83 00] */
    { uint32_t _ea = g_m68k.a[6]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $0608E8: sbcd.b d0, d1  [83 00] */
    { uint32_t _ea = g_m68k.a[2]; uint8_t _b = 1u << ((g_m68k.d[7]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    M68K_SUB8(g_m68k.d[7], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[0]; uint8_t _b = 1u << ((g_m68k.d[7]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    M68K_SUB8(g_m68k.d[7], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _b = 1u << ((g_m68k.d[7]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    M68K_SUB8(g_m68k.d[7], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[4]; uint8_t _b = 1u << ((g_m68k.d[7]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    M68K_SUB8(g_m68k.d[7], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[2] + (-0x7000)); uint8_t _b = 1u << ((g_m68k.d[7]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = (g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.a[1]); uint8_t _b = 1u << ((g_m68k.d[7]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    M68K_BTST(bus_read8((g_m68k.a[6] + (-0x7c00))), g_m68k.d[0]);
    M68K_BTST(bus_read8(0x84000162), g_m68k.d[0]);
    /* TODO $06090C: sbcd.b d0, d1  [83 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $060910: sbcd.b d0, d1  [83 00] */
    { uint32_t _ea = (g_m68k.a[0] + (-0x7d00)); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = (g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = 0x008300; uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = (g_m68k.a[2] + (-0x7d00)); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $060924: sbcd.b d0, d1  [83 00] */
    { uint32_t _ea = g_m68k.a[7]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $060928: sbcd.b d0, d1  [83 00] */
    { uint32_t _ea = g_m68k.a[3]; uint8_t _b = 1u << ((g_m68k.d[7]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    M68K_SUB8(g_m68k.d[7], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[1]; uint8_t _b = 1u << ((g_m68k.d[7]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    M68K_SUB8(g_m68k.d[7], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[7]; uint8_t _b = 1u << ((g_m68k.d[7]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    M68K_SUB8(g_m68k.d[7], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[7]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    M68K_SUB8(g_m68k.d[7], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[3] + (-0x7000)); uint8_t _b = 1u << ((g_m68k.d[7]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = (g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.a[1]); uint8_t _b = 1u << ((g_m68k.d[7]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    M68K_BTST(bus_read8((g_m68k.a[7] + (-0x7c00))), g_m68k.d[0]);
    M68K_BTST(bus_read8(0x58d48), g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[3]; uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $06094C: sbcd.b d0, d1  [83 00] */
    { uint32_t _ea = g_m68k.a[6]; uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $060950: sbcd.b d0, d1  [83 00] */
    { uint32_t _ea = (g_m68k.a[1] + (-0x7d00)); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = (g_m68k.a[3] + (-0x7d00)); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = (g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = (g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = g_m68k.a[6]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $060964: sbcd.b d0, d1  [83 00] */
    { uint32_t _ea = g_m68k.a[1]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $060968: sbcd.b d0, d1  [83 00] */
    { uint32_t _ea = g_m68k.a[4]; uint8_t _b = 1u << ((g_m68k.d[7]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    M68K_SUB8(g_m68k.d[7], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[2]; uint8_t _b = 1u << ((g_m68k.d[7]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    M68K_SUB8(g_m68k.d[7], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[0]; uint8_t _b = 1u << ((g_m68k.d[7]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    M68K_SUB8(g_m68k.d[7], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _b = 1u << ((g_m68k.d[7]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    M68K_SUB8(g_m68k.d[7], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[4] + (-0x7000)); uint8_t _b = 1u << ((g_m68k.d[7]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = g_m68k.a[1]; uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    M68K_SUB8(g_m68k.d[0], g_m68k.d[0]);
    M68K_BTST(bus_read8((g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 4)), g_m68k.d[0]);
    M68K_BTST(bus_read8((0x60988 + (int16_t)(uint16_t)g_m68k.a[0] * 4)), g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $060C2A-$060C6E  (25 instructions, 68 bytes) */
void jt_060C2A(void) {
    M68K_BTST(bus_read8(g_m68k.a[7]), g_m68k.d[0]);
    /* TODO $060C2C: sbcd.b d0, d3  [87 00] */
    M68K_BTST(bus_read8(g_m68k.a[2]), g_m68k.d[0]);
    M68K_OR8(g_m68k.d[6], g_m68k.d[0]);
    M68K_BTST(bus_read8((g_m68k.a[7] + (-0x7c00))), g_m68k.d[0]);
    M68K_BTST(bus_read8(0x59038), g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[3]; uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $060C40: sbcd.b d0, d1  [83 00] */
    { uint32_t _ea = (g_m68k.a[1] + (-0x7d00)); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = (g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = 0x008300; uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = (g_m68k.a[2] + (-0x7d00)); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = g_m68k.a[6]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $060C54: sbcd.b d0, d1  [83 00] */
    { uint32_t _ea = (g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = 0x008300; uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = (g_m68k.a[2] + (-0x7d00)); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = g_m68k.a[2]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $060C64: sbcd.b d0, d1  [83 00] */
    { uint32_t _ea = g_m68k.a[6]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $060C68: sbcd.b d0, d1  [83 00] */
    M68K_BTST(bus_read8(g_m68k.a[0]), g_m68k.d[0]);
    /* TODO $060C6C: sbcd.b d0, d3  [87 00] */
    /* WARNING: function did not end with RTS */
}

/* $060C6E-$060C7A  (4 instructions, 12 bytes) */
void jt_060C6E(void) {
    M68K_BTST(bus_read8(g_m68k.a[3]), g_m68k.d[0]);
    M68K_OR8(g_m68k.d[6], g_m68k.d[0]);
    M68K_BTST(bus_read8((g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 4)), g_m68k.d[0]);
    M68K_BTST(bus_read8((0x60c78 + (int16_t)(uint16_t)g_m68k.a[0] * 4)), g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $06102A-$0610D2  (58 instructions, 168 bytes) */
void jt_06102A(void) {
    { uint32_t _ea = g_m68k.a[7]; uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $06102C: sbcd.b d0, d1  [83 00] */
    { uint32_t _ea = (g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = (g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = g_m68k.a[1]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $061038: sbcd.b d0, d1  [83 00] */
    { uint32_t _ea = g_m68k.a[2]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $06103C: sbcd.b d0, d1  [83 00] */
    { uint32_t _ea = g_m68k.a[6]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $061040: sbcd.b d0, d1  [83 00] */
    { uint32_t _ea = (g_m68k.a[2] + (-0x7d00)); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = (g_m68k.a[6] + (-0x7d00)); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = (g_m68k.a[3] + (-0x7d00)); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $061050: sbcd.b d0, d1  [83 00] */
    { uint32_t _ea = g_m68k.a[7]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $061054: sbcd.b d0, d1  [83 00] */
    { uint32_t _ea = 0x8401056C; uint8_t _b = 1u << ((g_m68k.d[1]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.a[1]); uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    M68K_BCLR(g_m68k.d[2], g_m68k.d[2]);
    M68K_OR8(g_m68k.d[6], g_m68k.d[0]);
    M68K_BCLR(g_m68k.d[4], g_m68k.d[2]);
    M68K_OR8(g_m68k.d[6], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[0] + (-0x7d00)); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = (g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = (g_m68k.a[7] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = (g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $06107C: sbcd.b d0, d1  [83 00] */
    { uint32_t _ea = g_m68k.a[7]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $061080: sbcd.b d0, d1  [83 00] */
    { uint32_t _ea = (g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = (g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = (g_m68k.a[4] + (-0x7d00)); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = g_m68k.a[4]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $061090: sbcd.b d0, d1  [83 00] */
    M68K_BTST(bus_read8(/* UNHANDLED_ADDR: #$840001b7 */ 0), g_m68k.d[0]);
    M68K_OR8(g_m68k.d[2], g_m68k.d[1]);
    { uint32_t _ea = (g_m68k.a[5] + (-0x7c00)); uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = (g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.a[1]); uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    M68K_BCLR(g_m68k.d[3], g_m68k.d[2]);
    M68K_OR8(g_m68k.d[6], g_m68k.d[0]);
    M68K_BCLR(g_m68k.d[5], g_m68k.d[2]);
    M68K_OR8(g_m68k.d[6], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[1] + (-0x7d00)); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = (g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = (g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = (g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = g_m68k.a[6]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $0610BC: sbcd.b d0, d1  [83 00] */
    { uint32_t _ea = (g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = (g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = (g_m68k.a[6] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = g_m68k.a[2]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $0610CC: sbcd.b d0, d1  [83 00] */
    { uint32_t _ea = g_m68k.a[6]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $0610D0: sbcd.b d0, d1  [83 00] */
    /* WARNING: function did not end with RTS */
}

/* $0610F8-$06111E  (12 instructions, 38 bytes) */
void jt_0610F8(void) {
    /* TODO $0610F8: sbcd.b d0, d1  [83 00] */
    { uint32_t _ea = (g_m68k.a[4] + (-0x7d00)); uint8_t _b = 1u << ((g_m68k.d[6]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    { uint32_t _ea = (g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = 0x008300; uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = (g_m68k.a[2] + (-0x7d00)); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $06110C: sbcd.b d0, d1  [83 00] */
    { uint32_t _ea = g_m68k.a[7]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $061110: sbcd.b d0, d1  [83 00] */
    { uint32_t _ea = 0x84010569; uint8_t _b = 1u << ((g_m68k.d[1]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $061118: sbcd.b d0, d1  [83 00] */
    { uint32_t _ea = (g_m68k.a[7] + (-0x7000)); uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* WARNING: function did not end with RTS */
}

/* $06142A-$06148E  (36 instructions, 100 bytes) */
void jt_06142A(void) {
    /* TODO $06142A: movep.l -$6200(a7), d7  [0F 4F 9E 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[7]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    M68K_SUB8(g_m68k.d[7], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[3]; uint8_t _b = 1u << ((g_m68k.d[7]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    M68K_SUB8(g_m68k.d[7], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[1]; uint8_t _b = 1u << ((g_m68k.d[7]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    M68K_SUB8(g_m68k.d[7], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[7]; uint8_t _b = 1u << ((g_m68k.d[7]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    M68K_SUB8(g_m68k.d[7], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[5] + (-0x7000)); uint8_t _b = 1u << ((g_m68k.d[7]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = (g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.a[1]); uint8_t _b = 1u << ((g_m68k.d[7]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    M68K_BTST(bus_read8(g_m68k.a[4]), g_m68k.d[0]);
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    M68K_BTST(bus_read8((g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 4)), g_m68k.d[0]);
    M68K_BTST(bus_read8(/* UNHANDLED_ADDR: #$83000165 */ 0), g_m68k.d[0]);
    /* TODO $061454: sbcd.b d0, d1  [83 00] */
    { uint32_t _ea = (g_m68k.a[0] + (-0x7d00)); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = (g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = (g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = g_m68k.a[1]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $061464: sbcd.b d0, d1  [83 00] */
    { uint32_t _ea = (g_m68k.a[3] + (-0x7d00)); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = g_m68k.a[0]; uint8_t _b = 1u << ((g_m68k.d[7]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    M68K_SUB8(g_m68k.d[7], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _b = 1u << ((g_m68k.d[7]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    M68K_SUB8(g_m68k.d[7], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[4]; uint8_t _b = 1u << ((g_m68k.d[7]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    M68K_SUB8(g_m68k.d[7], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[2]; uint8_t _b = 1u << ((g_m68k.d[7]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    M68K_SUB8(g_m68k.d[7], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[0] + (-0x6200)); uint8_t _b = 1u << ((g_m68k.d[7]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = (g_m68k.a[6] + (-0x7000)); uint8_t _b = 1u << ((g_m68k.d[7]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = (g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.a[1]); uint8_t _b = 1u << ((g_m68k.d[7]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    M68K_BTST(bus_read8(g_m68k.a[5]), g_m68k.d[0]);
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    M68K_BTST(bus_read8((g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 4)), g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $06182A-$06187A  (27 instructions, 80 bytes) */
void jt_06182A(void) {
    M68K_BTST(bus_read8(g_m68k.a[7]), g_m68k.d[0]);
    /* TODO $06182C: sbcd.b d0, d3  [87 00] */
    M68K_BTST(bus_read8(g_m68k.a[2]), g_m68k.d[0]);
    M68K_OR8(g_m68k.d[6], g_m68k.d[0]);
    M68K_BTST(bus_read8((g_m68k.a[7] + (-0x7c00))), g_m68k.d[0]);
    M68K_BTST(bus_read8(0x59c38), g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[3]; uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $061840: sbcd.b d0, d1  [83 00] */
    { uint32_t _ea = (g_m68k.a[1] + (-0x7d00)); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = (g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = 0x008300; uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = (g_m68k.a[2] + (-0x7d00)); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = g_m68k.a[6]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $061854: sbcd.b d0, d1  [83 00] */
    { uint32_t _ea = (g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = 0x008300; uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = (g_m68k.a[2] + (-0x7cfd)); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = 0xB200057A; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $061868: sbcd.b d0, d1  [83 00] */
    M68K_BTST(bus_read8(g_m68k.a[0]), g_m68k.d[0]);
    /* TODO $06186C: sbcd.b d0, d3  [87 00] */
    M68K_BTST(bus_read8(g_m68k.a[3]), g_m68k.d[0]);
    M68K_OR8(g_m68k.d[6], g_m68k.d[0]);
    M68K_BTST(bus_read8((g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 4)), g_m68k.d[0]);
    M68K_BTST(bus_read8((0x61878 + (int16_t)(uint16_t)g_m68k.a[0] * 4)), g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $061A00-$061A6E  (33 instructions, 110 bytes) */
void jt_061A00(void) {
    /* TODO $061A00: sbcd.b d0, d1  [83 00] */
    { uint32_t _ea = (g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = (g_m68k.a[7] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = g_m68k.a[7]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $061A0C: sbcd.b d0, d1  [83 00] */
    { uint32_t _ea = (g_m68k.a[5] + (-0x7d00)); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = (g_m68k.a[6] + (-0x7d00)); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = (g_m68k.a[7] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $061A1C: sbcd.b d0, d1  [83 00] */
    { uint32_t _ea = g_m68k.a[7]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $061A20: sbcd.b d0, d1  [83 00] */
    { uint32_t _ea = 0x84010569; uint8_t _b = 1u << ((g_m68k.d[1]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $061A28: sbcd.b d0, d1  [83 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[7]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v & ~ _b); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    M68K_BTST(bus_read8(/* UNHANDLED_ADDR: #$83000165 */ 0), g_m68k.d[0]);
    /* TODO $061A34: sbcd.b d0, d1  [83 00] */
    { uint32_t _ea = (g_m68k.a[0] + (-0x7d00)); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = (g_m68k.a[2] + (-0x7d00)); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = (g_m68k.a[6] + (-0x7d00)); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = (g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = 0x008300; uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = (g_m68k.a[2] + (-0x7d00)); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = (g_m68k.a[6] + (-0x7d00)); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = (g_m68k.a[7] + (-0x7d00)); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = 0x008300; uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = g_m68k.a[4]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $061A5C: sbcd.b d0, d1  [83 00] */
    M68K_BTST(bus_read8(/* UNHANDLED_ADDR: #$830001b7 */ 0), g_m68k.d[0]);
    M68K_OR8(g_m68k.d[2], g_m68k.d[1]);
    { uint32_t _ea = (g_m68k.a[2] + (-0x7c00)); uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    M68K_BTST(bus_read8((g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 4)), g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}
