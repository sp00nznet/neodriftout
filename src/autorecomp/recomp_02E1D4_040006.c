/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $02E1D4 - $040006 */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

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

/* $02E554-$02E570  (8 instructions, 28 bytes) */
void jt_02E554(void) {
    M68K_OR8(g_m68k.d[2], 0x70);
    /* TODO $02E556: roxl.w d2, d0  [E5 70] */
    M68K_OR8(g_m68k.d[2], 0x8c);
    M68K_OR8(g_m68k.d[2], 0xa8);
    M68K_OR8(g_m68k.d[2], 0xc4);
    M68K_OR8(g_m68k.d[2], 0xe0);
    M68K_OR8(g_m68k.d[2], 0xfc);
    M68K_OR8(g_m68k.d[2], 0x18);
    /* WARNING: function did not end with RTS */
}

/* $02E570-$02E58E  (8 instructions, 30 bytes) */
void jt_02E570(void) {
    /* TODO $02E570: dc.w $e10  [0E 10] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x60);
    /* WARNING: function did not end with RTS */
}

/* $02E58C-$02E5AA  (8 instructions, 30 bytes) */
void jt_02E58C(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _b = 1u << ((g_m68k.d[4]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    M68K_OR8(g_m68k.d[0], 0xfc);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0xb8);
    /* WARNING: function did not end with RTS */
}

/* $02E5A8-$02E5C6  (9 instructions, 30 bytes) */
void jt_02E5A8(void) {
    { uint32_t _ea = 0x000000; uint8_t _b = 1u << ((g_m68k.d[5]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v & ~ _b); }
    M68K_OR8(g_m68k.d[0], 0x84);
    M68K_BCLR(g_m68k.d[4], g_m68k.d[1]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x10);
    /* WARNING: function did not end with RTS */
}

/* $02E5C4-$02E5E2  (8 instructions, 30 bytes) */
void jt_02E5C4(void) {
    /* TODO $02E5C4: dc.w $e10  [0E 10] */
    M68K_OR8(g_m68k.d[0], 0x84);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x10);
    /* WARNING: function did not end with RTS */
}

/* $02E5E0-$02E5FE  (8 instructions, 30 bytes) */
void jt_02E5E0(void) {
    /* TODO $02E5E0: dc.w $e10  [0E 10] */
    M68K_OR8(g_m68k.d[0], 0xa0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x10);
    /* WARNING: function did not end with RTS */
}

/* $02E5FC-$02E61A  (8 instructions, 30 bytes) */
void jt_02E5FC(void) {
    /* TODO $02E5FC: dc.w $e10  [0E 10] */
    M68K_OR8(g_m68k.d[0], 0x64);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x10);
    /* WARNING: function did not end with RTS */
}

/* $02E618-$02E636  (8 instructions, 30 bytes) */
void jt_02E618(void) {
    /* TODO $02E618: dc.w $e10  [0E 10] */
    M68K_OR8(g_m68k.d[0], 0xde);
    M68K_OR8(g_m68k.d[0], 0xa2);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x2);
    /* WARNING: function did not end with RTS */
}

/* $02E634-$02E650  (8 instructions, 28 bytes) */
void jt_02E634(void) {
    M68K_OR8(g_m68k.d[2], 0x50);
    /* TODO $02E636: roxr.w #$3, d0  [E6 50] */
    M68K_OR8(g_m68k.d[2], 0x6c);
    M68K_OR8(g_m68k.d[2], 0x88);
    M68K_OR8(g_m68k.d[2], 0xa4);
    M68K_OR8(g_m68k.d[2], 0xc0);
    M68K_OR8(g_m68k.d[2], 0xdc);
    M68K_OR8(g_m68k.d[2], 0xf8);
    /* WARNING: function did not end with RTS */
}

/* $02E650-$02E66E  (8 instructions, 30 bytes) */
void jt_02E650(void) {
    /* TODO $02E650: dc.w $e10  [0E 10] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x60);
    /* WARNING: function did not end with RTS */
}

/* $02E66C-$02E68A  (8 instructions, 30 bytes) */
void jt_02E66C(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _b = 1u << ((g_m68k.d[4]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    M68K_OR8(g_m68k.d[0], 0xc0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0xb8);
    /* WARNING: function did not end with RTS */
}

/* $02E688-$02E6A6  (14 instructions, 30 bytes) */
void jt_02E688(void) {
    { uint32_t _ea = 0x000000; uint8_t _b = 1u << ((g_m68k.d[5]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v & ~ _b); }
    M68K_OR8(g_m68k.d[0], 0x48);
    /* TODO $02E68C: movep.l $0(a0), d1  [03 48 00 00] */
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
    M68K_OR8(g_m68k.d[0], 0x10);
    /* WARNING: function did not end with RTS */
}

/* $02E6A4-$02E6C2  (8 instructions, 30 bytes) */
void jt_02E6A4(void) {
    /* TODO $02E6A4: dc.w $e10  [0E 10] */
    M68K_OR8(g_m68k.d[0], 0x48);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x10);
    /* WARNING: function did not end with RTS */
}

/* $02E6C0-$02E6DE  (8 instructions, 30 bytes) */
void jt_02E6C0(void) {
    /* TODO $02E6C0: dc.w $e10  [0E 10] */
    M68K_OR8(g_m68k.d[0], 0x64);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x10);
    /* WARNING: function did not end with RTS */
}

/* $02E6DC-$02E6FA  (8 instructions, 30 bytes) */
void jt_02E6DC(void) {
    /* TODO $02E6DC: dc.w $e10  [0E 10] */
    M68K_OR8(g_m68k.d[0], 0x28);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x10);
    /* WARNING: function did not end with RTS */
}

/* $02E6F8-$02E73A  (17 instructions, 66 bytes) */
void jt_02E6F8(void) {
    /* TODO $02E6F8: dc.w $e10  [0E 10] */
    M68K_OR8(g_m68k.d[0], 0xc0);
    M68K_OR8(g_m68k.d[0], 0x84);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x1);
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_OR8(g_m68k.d[1], 0x2);
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_OR8(g_m68k.d[2], 0x7);
    M68K_OR8(g_m68k.d[7], 0x8);
    /* WARNING: function did not end with RTS */
}

/* $040000-$040004  (1 instructions, 4 bytes) */
void jt_040000(void) {
    M68K_OR8(g_m68k.d[4], 0x20);
    /* WARNING: function did not end with RTS */
}

/* $040002-$040006  (1 instructions, 4 bytes) */
void jt_040002(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x4); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}
