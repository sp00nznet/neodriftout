/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $02E004 - $02E556 */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

/* $02E004-$02E00C  (2 instructions, 8 bytes) */
void jt_02E004(void) {
    M68K_OR8(g_m68k.d[1], 0x0);
    M68K_OR8(g_m68k.d[2], 0x34);
    /* WARNING: function did not end with RTS */
}

/* $02E00C-$02E014  (2 instructions, 8 bytes) */
void jt_02E00C(void) {
    M68K_OR8(g_m68k.d[1], 0x0);
    M68K_OR8(g_m68k.d[2], 0x34);
    /* WARNING: function did not end with RTS */
}

/* $02E014-$02E030  (7 instructions, 28 bytes) */
void jt_02E014(void) {
    M68K_OR8(g_m68k.d[2], 0x30);
    M68K_OR8(g_m68k.d[2], 0x4c);
    M68K_OR8(g_m68k.d[2], 0x68);
    M68K_OR8(g_m68k.d[2], 0x84);
    M68K_OR8(g_m68k.d[2], 0xa0);
    M68K_OR8(g_m68k.d[2], 0xbc);
    M68K_OR8(g_m68k.d[2], 0xd8);
    /* WARNING: function did not end with RTS */
}

/* $02E030-$02E04E  (8 instructions, 30 bytes) */
void jt_02E030(void) {
    /* TODO $02E030: dc.w $e10  [0E 10] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x60);
    /* WARNING: function did not end with RTS */
}

/* $02E04C-$02E06A  (8 instructions, 30 bytes) */
void jt_02E04C(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _b = 1u << ((g_m68k.d[4]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    M68K_OR8(g_m68k.d[0], 0x64);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0xb8);
    /* WARNING: function did not end with RTS */
}

/* $02E068-$02E086  (9 instructions, 30 bytes) */
void jt_02E068(void) {
    { uint32_t _ea = 0x000000; uint8_t _b = 1u << ((g_m68k.d[5]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v & ~ _b); }
    M68K_OR8(g_m68k.d[0], 0xec);
    /* TODO $02E06C: dc.w $4ec  [04 EC] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x10);
    /* WARNING: function did not end with RTS */
}

/* $02E084-$02E0A2  (8 instructions, 30 bytes) */
void jt_02E084(void) {
    /* TODO $02E084: dc.w $e10  [0E 10] */
    M68K_OR8(g_m68k.d[0], 0xec);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x10);
    /* WARNING: function did not end with RTS */
}

/* $02E0A0-$02E0BE  (8 instructions, 30 bytes) */
void jt_02E0A0(void) {
    /* TODO $02E0A0: dc.w $e10  [0E 10] */
    M68K_OR8(g_m68k.d[0], 0x8);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x10);
    /* WARNING: function did not end with RTS */
}

/* $02E0BC-$02E0DA  (8 instructions, 30 bytes) */
void jt_02E0BC(void) {
    /* TODO $02E0BC: dc.w $e10  [0E 10] */
    M68K_OR8(g_m68k.d[0], 0xcc);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x10);
    /* WARNING: function did not end with RTS */
}

/* $02E0D8-$02E0F6  (8 instructions, 30 bytes) */
void jt_02E0D8(void) {
    /* TODO $02E0D8: dc.w $e10  [0E 10] */
    M68K_OR8(g_m68k.d[0], 0x92);
    M68K_OR8(g_m68k.d[0], 0x56);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x2);
    /* WARNING: function did not end with RTS */
}

/* $02E0F4-$02E110  (8 instructions, 28 bytes) */
void jt_02E0F4(void) {
    M68K_OR8(g_m68k.d[2], 0x10);
    /* TODO $02E0F6: roxl.b #$8, d0  [E1 10] */
    M68K_OR8(g_m68k.d[2], 0x2c);
    M68K_OR8(g_m68k.d[2], 0x48);
    M68K_OR8(g_m68k.d[2], 0x64);
    M68K_OR8(g_m68k.d[2], 0x80);
    M68K_OR8(g_m68k.d[2], 0x9c);
    M68K_OR8(g_m68k.d[2], 0xb8);
    /* WARNING: function did not end with RTS */
}

/* $02E110-$02E12E  (8 instructions, 30 bytes) */
void jt_02E110(void) {
    /* TODO $02E110: dc.w $e10  [0E 10] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x60);
    /* WARNING: function did not end with RTS */
}

/* $02E12C-$02E14A  (8 instructions, 30 bytes) */
void jt_02E12C(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _b = 1u << ((g_m68k.d[4]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    M68K_OR8(g_m68k.d[0], 0x28);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0xb8);
    /* WARNING: function did not end with RTS */
}

/* $02E148-$02E166  (13 instructions, 30 bytes) */
void jt_02E148(void) {
    { uint32_t _ea = 0x000000; uint8_t _b = 1u << ((g_m68k.d[5]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v & ~ _b); }
    M68K_OR8(g_m68k.d[0], 0xb0);
    { uint32_t _ea = (g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0]); uint32_t _tmp = bus_read32(_ea); M68K_SUB32(_tmp, 0x0); bus_write32(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x10);
    /* WARNING: function did not end with RTS */
}

/* $02E164-$02E182  (8 instructions, 30 bytes) */
void jt_02E164(void) {
    /* TODO $02E164: dc.w $e10  [0E 10] */
    M68K_OR8(g_m68k.d[0], 0xb0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x10);
    /* WARNING: function did not end with RTS */
}

/* $02E180-$02E19E  (8 instructions, 30 bytes) */
void jt_02E180(void) {
    /* TODO $02E180: dc.w $e10  [0E 10] */
    M68K_OR8(g_m68k.d[0], 0xcc);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x10);
    /* WARNING: function did not end with RTS */
}

/* $02E19C-$02E1BA  (8 instructions, 30 bytes) */
void jt_02E19C(void) {
    /* TODO $02E19C: dc.w $e10  [0E 10] */
    M68K_OR8(g_m68k.d[0], 0x90);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x10);
    /* WARNING: function did not end with RTS */
}

/* $02E1B8-$02E1D6  (8 instructions, 30 bytes) */
void jt_02E1B8(void) {
    /* TODO $02E1B8: dc.w $e10  [0E 10] */
    M68K_OR8(g_m68k.d[0], 0x74);
    M68K_OR8(g_m68k.d[0], 0x38);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x2);
    /* WARNING: function did not end with RTS */
}

/* $02E1D4-$02E1F0  (9 instructions, 28 bytes) */
void jt_02E1D4(void) {
    M68K_OR8(g_m68k.d[2], 0xf0);
    { uint32_t _ea = (g_m68k.a[0] + 0x2 + (int16_t)(uint16_t)g_m68k.d[0]); uint16_t _tmp = bus_read16(_ea); M68K_LSL16(_tmp, 1); bus_write16(_ea, _tmp); }
    M68K_OR8(g_m68k.d[2], 0xc);
    M68K_LSR8(g_m68k.d[4], 0x1);
    M68K_OR8(g_m68k.d[2], 0x28);
    M68K_OR8(g_m68k.d[2], 0x44);
    M68K_OR8(g_m68k.d[2], 0x60);
    M68K_OR8(g_m68k.d[2], 0x7c);
    M68K_OR8(g_m68k.d[2], 0x98);
    /* WARNING: function did not end with RTS */
}

/* $02E1F0-$02E20E  (8 instructions, 30 bytes) */
void jt_02E1F0(void) {
    /* TODO $02E1F0: dc.w $e10  [0E 10] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x60);
    /* WARNING: function did not end with RTS */
}

/* $02E20C-$02E22A  (8 instructions, 30 bytes) */
void jt_02E20C(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _b = 1u << ((g_m68k.d[4]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    M68K_OR8(g_m68k.d[0], 0xec);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0xb8);
    /* WARNING: function did not end with RTS */
}

/* $02E228-$02E246  (9 instructions, 30 bytes) */
void jt_02E228(void) {
    { uint32_t _ea = 0x000000; uint8_t _b = 1u << ((g_m68k.d[5]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v & ~ _b); }
    M68K_OR8(g_m68k.d[0], 0x74);
    { uint32_t _ea = (g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.d[0]); uint16_t _tmp = bus_read16(_ea); M68K_SUB16(_tmp, 0x0); bus_write16(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x10);
    /* WARNING: function did not end with RTS */
}

/* $02E244-$02E262  (8 instructions, 30 bytes) */
void jt_02E244(void) {
    /* TODO $02E244: dc.w $e10  [0E 10] */
    M68K_OR8(g_m68k.d[0], 0x74);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x10);
    /* WARNING: function did not end with RTS */
}

/* $02E260-$02E27E  (8 instructions, 30 bytes) */
void jt_02E260(void) {
    /* TODO $02E260: dc.w $e10  [0E 10] */
    M68K_OR8(g_m68k.d[0], 0x90);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x10);
    /* WARNING: function did not end with RTS */
}

/* $02E27C-$02E29A  (8 instructions, 30 bytes) */
void jt_02E27C(void) {
    /* TODO $02E27C: dc.w $e10  [0E 10] */
    M68K_OR8(g_m68k.d[0], 0x54);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x10);
    /* WARNING: function did not end with RTS */
}

/* $02E298-$02E2B6  (8 instructions, 30 bytes) */
void jt_02E298(void) {
    /* TODO $02E298: dc.w $e10  [0E 10] */
    M68K_OR8(g_m68k.d[0], 0x56);
    M68K_OR8(g_m68k.d[0], 0x1a);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x2);
    /* WARNING: function did not end with RTS */
}

/* $02E2B4-$02E2D0  (8 instructions, 28 bytes) */
void jt_02E2B4(void) {
    M68K_OR8(g_m68k.d[2], 0xd0);
    { uint32_t _ea = g_m68k.a[0]; uint16_t _tmp = bus_read16(_ea); M68K_LSR16(_tmp, 1); bus_write16(_ea, _tmp); }
    M68K_OR8(g_m68k.d[2], 0xec);
    M68K_OR8(g_m68k.d[2], 0x8);
    M68K_OR8(g_m68k.d[2], 0x24);
    M68K_OR8(g_m68k.d[2], 0x40);
    M68K_OR8(g_m68k.d[2], 0x5c);
    M68K_OR8(g_m68k.d[2], 0x78);
    /* WARNING: function did not end with RTS */
}

/* $02E2D0-$02E2EE  (8 instructions, 30 bytes) */
void jt_02E2D0(void) {
    /* TODO $02E2D0: dc.w $e10  [0E 10] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x60);
    /* WARNING: function did not end with RTS */
}

/* $02E2EC-$02E30A  (8 instructions, 30 bytes) */
void jt_02E2EC(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _b = 1u << ((g_m68k.d[4]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    M68K_OR8(g_m68k.d[0], 0xb0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0xb8);
    /* WARNING: function did not end with RTS */
}

/* $02E308-$02E326  (9 instructions, 30 bytes) */
void jt_02E308(void) {
    { uint32_t _ea = 0x000000; uint8_t _b = 1u << ((g_m68k.d[5]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v & ~ _b); }
    M68K_OR8(g_m68k.d[0], 0x38);
    { uint32_t _ea = 0x000000; uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, 0x0); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x10);
    /* WARNING: function did not end with RTS */
}

/* $02E324-$02E342  (8 instructions, 30 bytes) */
void jt_02E324(void) {
    /* TODO $02E324: dc.w $e10  [0E 10] */
    M68K_OR8(g_m68k.d[0], 0x38);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x10);
    /* WARNING: function did not end with RTS */
}

/* $02E340-$02E35E  (8 instructions, 30 bytes) */
void jt_02E340(void) {
    /* TODO $02E340: dc.w $e10  [0E 10] */
    M68K_OR8(g_m68k.d[0], 0x54);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x10);
    /* WARNING: function did not end with RTS */
}

/* $02E35C-$02E37A  (8 instructions, 30 bytes) */
void jt_02E35C(void) {
    /* TODO $02E35C: dc.w $e10  [0E 10] */
    M68K_OR8(g_m68k.d[0], 0x18);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x10);
    /* WARNING: function did not end with RTS */
}

/* $02E378-$02E396  (8 instructions, 30 bytes) */
void jt_02E378(void) {
    /* TODO $02E378: dc.w $e10  [0E 10] */
    M68K_OR8(g_m68k.d[0], 0x38);
    M68K_OR8(g_m68k.d[0], 0xfc);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x2);
    /* WARNING: function did not end with RTS */
}

/* $02E394-$02E3B0  (8 instructions, 28 bytes) */
void jt_02E394(void) {
    M68K_OR8(g_m68k.d[2], 0xb0);
    /* TODO $02E396: roxl.l d1, d0  [E3 B0] */
    M68K_OR8(g_m68k.d[2], 0xcc);
    M68K_OR8(g_m68k.d[2], 0xe8);
    M68K_OR8(g_m68k.d[2], 0x4);
    M68K_OR8(g_m68k.d[2], 0x20);
    M68K_OR8(g_m68k.d[2], 0x3c);
    M68K_OR8(g_m68k.d[2], 0x58);
    /* WARNING: function did not end with RTS */
}

/* $02E3B0-$02E3CE  (8 instructions, 30 bytes) */
void jt_02E3B0(void) {
    /* TODO $02E3B0: dc.w $e10  [0E 10] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x60);
    /* WARNING: function did not end with RTS */
}

/* $02E3CC-$02E3EA  (8 instructions, 30 bytes) */
void jt_02E3CC(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _b = 1u << ((g_m68k.d[4]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    M68K_OR8(g_m68k.d[0], 0x74);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0xb8);
    /* WARNING: function did not end with RTS */
}

/* $02E3E8-$02E406  (8 instructions, 30 bytes) */
void jt_02E3E8(void) {
    { uint32_t _ea = 0x000000; uint8_t _b = 1u << ((g_m68k.d[5]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v & ~ _b); }
    M68K_OR8(g_m68k.d[0], 0xfc);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x10);
    /* WARNING: function did not end with RTS */
}

/* $02E404-$02E422  (8 instructions, 30 bytes) */
void jt_02E404(void) {
    /* TODO $02E404: dc.w $e10  [0E 10] */
    M68K_OR8(g_m68k.d[0], 0xfc);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x10);
    /* WARNING: function did not end with RTS */
}

/* $02E420-$02E43E  (8 instructions, 30 bytes) */
void jt_02E420(void) {
    /* TODO $02E420: dc.w $e10  [0E 10] */
    M68K_OR8(g_m68k.d[0], 0x18);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x10);
    /* WARNING: function did not end with RTS */
}

/* $02E43C-$02E45A  (8 instructions, 30 bytes) */
void jt_02E43C(void) {
    /* TODO $02E43C: dc.w $e10  [0E 10] */
    M68K_OR8(g_m68k.d[0], 0xdc);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x10);
    /* WARNING: function did not end with RTS */
}

/* $02E458-$02E476  (8 instructions, 30 bytes) */
void jt_02E458(void) {
    /* TODO $02E458: dc.w $e10  [0E 10] */
    M68K_OR8(g_m68k.d[0], 0x1a);
    M68K_OR8(g_m68k.d[0], 0xde);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x2);
    /* WARNING: function did not end with RTS */
}

/* $02E474-$02E490  (8 instructions, 28 bytes) */
void jt_02E474(void) {
    M68K_OR8(g_m68k.d[2], 0x90);
    /* TODO $02E476: roxr.l #$2, d0  [E4 90] */
    M68K_OR8(g_m68k.d[2], 0xac);
    M68K_OR8(g_m68k.d[2], 0xc8);
    M68K_OR8(g_m68k.d[2], 0xe4);
    M68K_OR8(g_m68k.d[2], 0x0);
    M68K_OR8(g_m68k.d[2], 0x1c);
    M68K_OR8(g_m68k.d[2], 0x38);
    /* WARNING: function did not end with RTS */
}

/* $02E490-$02E4AE  (8 instructions, 30 bytes) */
void jt_02E490(void) {
    /* TODO $02E490: dc.w $e10  [0E 10] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x60);
    /* WARNING: function did not end with RTS */
}

/* $02E4AC-$02E4CA  (8 instructions, 30 bytes) */
void jt_02E4AC(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _b = 1u << ((g_m68k.d[4]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    M68K_OR8(g_m68k.d[0], 0x38);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0xb8);
    /* WARNING: function did not end with RTS */
}

/* $02E4C8-$02E4E6  (9 instructions, 30 bytes) */
void jt_02E4C8(void) {
    { uint32_t _ea = 0x000000; uint8_t _b = 1u << ((g_m68k.d[5]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v & ~ _b); }
    M68K_OR8(g_m68k.d[0], 0xc0);
    M68K_BSET(g_m68k.d[0], g_m68k.d[1]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x10);
    /* WARNING: function did not end with RTS */
}

/* $02E4E4-$02E502  (8 instructions, 30 bytes) */
void jt_02E4E4(void) {
    /* TODO $02E4E4: dc.w $e10  [0E 10] */
    M68K_OR8(g_m68k.d[0], 0xc0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x10);
    /* WARNING: function did not end with RTS */
}

/* $02E500-$02E51E  (8 instructions, 30 bytes) */
void jt_02E500(void) {
    /* TODO $02E500: dc.w $e10  [0E 10] */
    M68K_OR8(g_m68k.d[0], 0xdc);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x10);
    /* WARNING: function did not end with RTS */
}

/* $02E51C-$02E53A  (8 instructions, 30 bytes) */
void jt_02E51C(void) {
    /* TODO $02E51C: dc.w $e10  [0E 10] */
    M68K_OR8(g_m68k.d[0], 0xa0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x10);
    /* WARNING: function did not end with RTS */
}

/* $02E538-$02E556  (8 instructions, 30 bytes) */
void jt_02E538(void) {
    /* TODO $02E538: dc.w $e10  [0E 10] */
    M68K_OR8(g_m68k.d[0], 0xfc);
    M68K_OR8(g_m68k.d[0], 0xc0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x2);
    /* WARNING: function did not end with RTS */
}
