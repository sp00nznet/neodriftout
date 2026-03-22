/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $09ABF0 - $09C36A */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

/* $09ABF0-$09AC04  (9 instructions, 20 bytes) */
void jt_09ABF0(void) {
    M68K_OR8(g_m68k.d[1], 0x6);
    { uint32_t _ea = g_m68k.a[2]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    /* TODO $09ABF6: sbcd.b d0, d7  [8F 00] */
    { uint32_t _ea = g_m68k.a[3]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    /* TODO $09ABFA: sbcd.b d0, d7  [8F 00] */
    { uint32_t _ea = g_m68k.a[2]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    /* TODO $09ABFE: sbcd.b d0, d7  [8F 00] */
    { uint32_t _ea = g_m68k.a[3]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    /* TODO $09AC02: sbcd.b d0, d7  [8F 00] */
    /* WARNING: function did not end with RTS */
}

/* $09AC0C-$09AC10  (1 instructions, 4 bytes) */
void jt_09AC0C(void) {
    M68K_OR8(g_m68k.d[6], 0x9);
    /* WARNING: function did not end with RTS */
}

/* $09ACE8-$09ADAC  (67 instructions, 196 bytes) */
void jt_09ACE8(void) {
    M68K_OR8(g_m68k.d[6], 0x8);
    M68K_CMP32(g_m68k.d[6], g_m68k.d[0]);
    /* TODO $09ACEE: sbcd.b d0, d7  [8F 00] */
    M68K_CMP32(g_m68k.d[6], g_m68k.d[4]);
    /* TODO $09ACF2: sbcd.b d0, d7  [8F 00] */
    M68K_CMP32(g_m68k.d[6], g_m68k.a[1]);
    /* TODO $09ACF6: sbcd.b d0, d7  [8F 00] */
    M68K_CMP32(g_m68k.d[6], bus_read32(g_m68k.a[0]));
    /* TODO $09ACFA: sbcd.b d0, d7  [8F 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP32(g_m68k.d[6], g_m68k.d[5]);
    /* TODO $09AD12: sbcd.b d0, d7  [8F 00] */
    M68K_CMP32(g_m68k.d[6], g_m68k.a[2]);
    /* TODO $09AD16: sbcd.b d0, d7  [8F 00] */
    M68K_CMP32(g_m68k.d[6], bus_read32(g_m68k.a[1]));
    /* TODO $09AD1A: sbcd.b d0, d7  [8F 00] */
    M68K_CMP32(g_m68k.d[6], _postinc32(1));
    /* TODO $09AD1E: sbcd.b d0, d7  [8F 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP32(g_m68k.d[6], g_m68k.a[3]);
    /* TODO $09AD36: sbcd.b d0, d7  [8F 00] */
    M68K_CMP32(g_m68k.d[6], bus_read32(g_m68k.a[2]));
    /* TODO $09AD3A: sbcd.b d0, d7  [8F 00] */
    M68K_CMP32(g_m68k.d[6], _postinc32(2));
    /* TODO $09AD3E: sbcd.b d0, d7  [8F 00] */
    M68K_CMP32(g_m68k.d[6], _predec32(3));
    /* TODO $09AD42: sbcd.b d0, d7  [8F 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP32(g_m68k.a[6], bus_read32(g_m68k.a[2] + (-0x7100)));
    M68K_CMP32(g_m68k.a[6], bus_read32(g_m68k.a[4] + (-0x7100)));
    M68K_CMP32(g_m68k.a[6], bus_read32(g_m68k.a[7] + (-0x7100)));
    M68K_CMP32(g_m68k.a[6], bus_read32(g_m68k.a[1] + 0 + (int32_t)g_m68k.a[0] * 8));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP32(g_m68k.d[6], _postinc32(4));
    /* TODO $09AD7E: sbcd.b d0, d7  [8F 00] */
    M68K_CMP32(g_m68k.d[6], _predec32(5));
    /* TODO $09AD82: sbcd.b d0, d7  [8F 00] */
    M68K_CMP32(g_m68k.d[6], bus_read32(g_m68k.a[3] + (-0x7100)));
    M68K_CMP32(g_m68k.d[6], bus_read32(g_m68k.a[6] + (-0x7100)));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP32(g_m68k.d[6], _postinc32(5));
    /* TODO $09AD9E: sbcd.b d0, d7  [8F 00] */
    M68K_CMP32(g_m68k.d[6], g_m68k.d[1]);
    /* TODO $09ADA2: sbcd.b d0, d7  [8F 00] */
    M68K_CMP32(g_m68k.d[6], g_m68k.d[1]);
    /* TODO $09ADA6: sbcd.b d0, d7  [8F 00] */
    M68K_CMP32(g_m68k.d[6], g_m68k.d[1]);
    /* TODO $09ADAA: sbcd.b d0, d7  [8F 00] */
    /* WARNING: function did not end with RTS */
}

/* $09ADAC-$09ADC4  (9 instructions, 24 bytes) */
void jt_09ADAC(void) {
    M68K_OR8(g_m68k.d[1], 0x5);
    M68K_CMP32(g_m68k.d[6], g_m68k.d[6]);
    /* TODO $09ADB2: sbcd.b d0, d7  [8F 00] */
    M68K_CMP32(g_m68k.a[6], bus_read32(g_m68k.a[2] + 0 + (int32_t)g_m68k.a[0] * 8));
    M68K_CMP32(g_m68k.a[6], bus_read32(g_m68k.a[3] + 0 + (int32_t)g_m68k.a[0] * 8));
    M68K_CMP32(g_m68k.d[6], g_m68k.d[1]);
    /* TODO $09ADBE: sbcd.b d0, d7  [8F 00] */
    M68K_CMP32(g_m68k.d[6], _predec32(6));
    /* TODO $09ADC2: sbcd.b d0, d7  [8F 00] */
    /* WARNING: function did not end with RTS */
}

/* $09ADC4-$09ADE4  (8 instructions, 32 bytes) */
void jt_09ADC4(void) {
    M68K_OR8(g_m68k.d[1], 0x7);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $09ADE4-$09AE50  (43 instructions, 108 bytes) */
void jt_09ADE4(void) {
    M68K_OR8(g_m68k.d[6], 0x7);
    M68K_CMP32(g_m68k.a[5], g_m68k.d[6]);
    M68K_SUB8(g_m68k.d[0], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[5], g_m68k.a[7]);
    M68K_SUB8(g_m68k.d[0], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[5], _postinc32(1));
    M68K_SUB8(g_m68k.d[0], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[5], _predec32(4));
    M68K_SUB8(g_m68k.d[0], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[5], bus_read32(g_m68k.a[6] + (-0x7000)));
    M68K_CMP32(g_m68k.a[5], bus_read32(0x93dfe));
    M68K_CMP8(g_m68k.d[6], g_m68k.d[6]);
    M68K_SUB8(g_m68k.d[0], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[5], g_m68k.d[7]);
    M68K_SUB8(g_m68k.d[0], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.a[1]); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    M68K_CMP32(g_m68k.a[5], g_m68k.a[2]);
    M68K_SUB8(g_m68k.d[0], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.a[1]); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    M68K_CMP32(g_m68k.a[5], bus_read32(g_m68k.a[7] + (-0x7000)));
    M68K_CMP32(g_m68k.a[5], bus_read32(0x9ae1a + (int16_t)(uint16_t)g_m68k.a[1]));
    M68K_CMP8(g_m68k.d[6], g_m68k.d[7]);
    M68K_SUB8(g_m68k.d[0], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[5], g_m68k.a[0]);
    M68K_SUB8(g_m68k.d[0], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[5], bus_read32(g_m68k.a[0]));
    M68K_SUB8(g_m68k.d[0], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[5], _postinc32(2));
    M68K_SUB8(g_m68k.d[0], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[5], _predec32(5));
    M68K_SUB8(g_m68k.d[0], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[5], bus_read32(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.a[1]));
    M68K_CMP32(g_m68k.a[5], 0x9000bc07);
    M68K_SUB8(g_m68k.d[0], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[5], g_m68k.a[1]);
    M68K_SUB8(g_m68k.d[0], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[5], bus_read32(g_m68k.a[1]));
    M68K_SUB8(g_m68k.d[0], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[5], _postinc32(3));
    M68K_SUB8(g_m68k.d[0], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[5], _predec32(6));
    M68K_SUB8(g_m68k.d[0], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[5], bus_read32(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.a[1]));
    /* WARNING: function did not end with RTS */
}

/* $09AE90-$09AEAC  (8 instructions, 28 bytes) */
void jt_09AE90(void) {
    M68K_OR8(g_m68k.d[6], 0x9);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP32(g_m68k.a[6], 0x9000be03);
    M68K_SUB8(g_m68k.d[0], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[5], bus_read32(g_m68k.a[0] + (-0x7000)));
    M68K_CMP32(g_m68k.a[5], bus_read32(g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.a[1]));
    M68K_CMP8(g_m68k.d[6], g_m68k.d[0]);
    M68K_SUB8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $09AF6C-$09AF74  (2 instructions, 8 bytes) */
void jt_09AF6C(void) {
    M68K_OR8(g_m68k.d[2], 0xa);
    M68K_CMP32(g_m68k.a[6], bus_read32(0x008E00));
    /* WARNING: function did not end with RTS */
}

/* $09AFC0-$09AFF4  (16 instructions, 52 bytes) */
void jt_09AFC0(void) {
    M68K_OR8(g_m68k.d[2], 0x9);
    M68K_CMP32(g_m68k.a[6], bus_read32(0x93dc6));
    M68K_CMP8(g_m68k.d[7], g_m68k.d[1]);
    M68K_OR8(g_m68k.d[7], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP32(g_m68k.a[6], bus_read32(0x9afea + (int32_t)g_m68k.a[0] * 8));
    M68K_CMP8(g_m68k.d[7], g_m68k.d[2]);
    M68K_OR8(g_m68k.d[7], g_m68k.d[0]);
    M68K_CMP8(g_m68k.d[7], g_m68k.d[7]);
    M68K_OR8(g_m68k.d[7], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $09B00C-$09B03C  (14 instructions, 48 bytes) */
void jt_09B00C(void) {
    M68K_OR8(g_m68k.d[6], 0xa);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP8(g_m68k.d[7], _postinc8(4));
    M68K_SUB8(g_m68k.d[1], g_m68k.d[0]);
    M68K_CMP8(g_m68k.d[7], _predec8(2));
    M68K_SUB8(g_m68k.d[1], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $09B100-$09B130  (14 instructions, 48 bytes) */
void jt_09B100(void) {
    M68K_OR8(g_m68k.d[5], 0xa);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP8(g_m68k.d[7], _postinc8(4));
    M68K_SUB8(g_m68k.d[1], g_m68k.d[0]);
    M68K_CMP8(g_m68k.d[7], _predec8(2));
    M68K_SUB8(g_m68k.d[1], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $09B1CC-$09B1D0  (1 instructions, 4 bytes) */
void jt_09B1CC(void) {
    M68K_OR8(g_m68k.d[4], 0xa);
    /* WARNING: function did not end with RTS */
}

/* $09B270-$09B27C  (3 instructions, 12 bytes) */
void jt_09B270(void) {
    M68K_OR8(g_m68k.d[6], 0xa);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $09B364-$09B394  (14 instructions, 48 bytes) */
void jt_09B364(void) {
    M68K_OR8(g_m68k.d[4], 0xa);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP8(g_m68k.d[7], _postinc8(4));
    M68K_SUB8(g_m68k.d[1], g_m68k.d[0]);
    M68K_CMP8(g_m68k.d[7], _predec8(2));
    M68K_SUB8(g_m68k.d[1], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $09B408-$09B410  (3 instructions, 8 bytes) */
void jt_09B408(void) {
    M68K_OR8(g_m68k.d[5], 0xa);
    M68K_CMP8(g_m68k.d[7], bus_read8(g_m68k.a[0]));
    M68K_SUB8(g_m68k.d[1], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $09B4D4-$09B520  (23 instructions, 76 bytes) */
void jt_09B4D4(void) {
    M68K_OR8(g_m68k.d[3], 0x8);
    M68K_CMP16(g_m68k.d[7], _predec16(4));
    M68K_OR8(g_m68k.d[7], g_m68k.d[0]);
    M68K_CMP16(g_m68k.d[7], _predec16(7));
    M68K_OR8(g_m68k.d[7], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP16(g_m68k.d[7], _predec16(5));
    M68K_OR8(g_m68k.d[7], g_m68k.d[0]);
    M68K_CMP16(g_m68k.d[7], bus_read16(g_m68k.a[0] + (-0x7200)));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP16(g_m68k.d[7], _predec16(6));
    M68K_OR8(g_m68k.d[7], g_m68k.d[0]);
    M68K_CMP16(g_m68k.d[7], bus_read16(g_m68k.a[1] + (-0x7200)));
    /* WARNING: function did not end with RTS */
}

/* $09B538-$09B548  (4 instructions, 16 bytes) */
void jt_09B538(void) {
    M68K_OR8(g_m68k.d[2], 0xa);
    M68K_CMP16(g_m68k.d[7], bus_read16(g_m68k.a[2] + (-0x5b00)));
    M68K_CMP16(g_m68k.d[7], bus_read16(g_m68k.a[6] + (-0x5b00)));
    M68K_CMP16(g_m68k.d[7], bus_read16(g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.a[2] * 4));
    /* WARNING: function did not end with RTS */
}

/* $09B58C-$09B59E  (5 instructions, 18 bytes) */
void jt_09B58C(void) {
    M68K_OR8(g_m68k.d[2], 0xa);
    M68K_CMP16(g_m68k.d[7], bus_read16(g_m68k.a[4] + (-0x5b00)));
    M68K_CMP16(g_m68k.d[7], bus_read16(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.a[2] * 4));
    M68K_CMP16(g_m68k.d[7], bus_read16(g_m68k.a[7] + 0 + (int16_t)(uint16_t)g_m68k.a[2] * 4));
    M68K_CMP32(g_m68k.d[7], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $09B5E0-$09B5F2  (4 instructions, 18 bytes) */
void jt_09B5E0(void) {
    M68K_OR8(g_m68k.d[6], 0xa);
    M68K_CMP16(g_m68k.d[7], bus_read16(g_m68k.a[5] + (-0x5b00)));
    M68K_CMP16(g_m68k.d[7], bus_read16(g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.a[2] * 4));
    M68K_CMP16(g_m68k.d[7], bus_read16(0xA500BE82));
    /* WARNING: function did not end with RTS */
}

/* $09B6D4-$09B6E6  (5 instructions, 18 bytes) */
void jt_09B6D4(void) {
    M68K_OR8(g_m68k.d[3], 0x7);
    M68K_CMP16(g_m68k.d[7], bus_read16(g_m68k.a[4] + (-0x5b00)));
    M68K_CMP16(g_m68k.d[7], bus_read16(g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.a[2] * 4));
    M68K_CMP16(g_m68k.d[7], /* UNHANDLED_READ: (a16, a2.w * 4) */ 0);
    M68K_CMP32(g_m68k.d[7], g_m68k.d[6]);
    /* WARNING: function did not end with RTS */
}

/* $09B72C-$09B738  (3 instructions, 12 bytes) */
void jt_09B72C(void) {
    M68K_OR8(g_m68k.d[2], 0x1);
    M68K_CMP32(g_m68k.d[7], bus_read32(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.a[2] * 4));
    M68K_CMP32(g_m68k.d[7], bus_read32(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.a[2] * 4));
    /* WARNING: function did not end with RTS */
}

/* $09B738-$09B74C  (5 instructions, 20 bytes) */
void jt_09B738(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_CMP32(g_m68k.d[7], bus_read32(g_m68k.a[5] + (-0x5b00)));
    M68K_CMP32(g_m68k.d[7], bus_read32(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.a[2] * 4));
    M68K_CMP32(g_m68k.d[7], bus_read32(g_m68k.a[6] + (-0x5b00)));
    M68K_CMP32(g_m68k.d[7], bus_read32(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.a[2] * 4));
    /* WARNING: function did not end with RTS */
}

/* $09B74C-$09B762  (5 instructions, 22 bytes) */
void jt_09B74C(void) {
    M68K_OR8(g_m68k.d[2], 0xa);
    M68K_CMP16(g_m68k.d[7], bus_read16(g_m68k.a[2] + (-0x5b00)));
    M68K_CMP32(g_m68k.d[7], bus_read32(g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.a[2] * 4));
    M68K_CMP32(g_m68k.d[7], bus_read32(g_m68k.a[6] + 0 + (int16_t)(uint16_t)g_m68k.a[2] * 4));
    M68K_CMP32(g_m68k.d[7], 0xa500bec2);
    /* WARNING: function did not end with RTS */
}

/* $09B7A0-$09B7A6  (2 instructions, 6 bytes) */
void jt_09B7A0(void) {
    M68K_OR8(g_m68k.d[2], 0xa);
    M68K_EOR16(g_m68k.d[0], g_m68k.d[5]);
    /* WARNING: function did not end with RTS */
}

/* $09B7F4-$09B7FA  (2 instructions, 6 bytes) */
void jt_09B7F4(void) {
    M68K_OR8(g_m68k.d[6], 0xa);
    M68K_EOR16(g_m68k.d[1], g_m68k.d[5]);
    /* WARNING: function did not end with RTS */
}

/* $09B8E8-$09B8EC  (1 instructions, 4 bytes) */
void jt_09B8E8(void) {
    M68K_OR8(g_m68k.d[3], 0x7);
    /* WARNING: function did not end with RTS */
}

/* $09B940-$09B94C  (3 instructions, 12 bytes) */
void jt_09B940(void) {
    M68K_OR8(g_m68k.d[2], 0x1);
    M68K_CMP32(g_m68k.d[7], bus_read32(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.a[2] * 4));
    M68K_CMP32(g_m68k.d[7], bus_read32(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.a[2] * 4));
    /* WARNING: function did not end with RTS */
}

/* $09B94C-$09B960  (5 instructions, 20 bytes) */
void jt_09B94C(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_CMP32(g_m68k.d[7], bus_read32(g_m68k.a[5] + (-0x5b00)));
    M68K_CMP32(g_m68k.d[7], bus_read32(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.a[2] * 4));
    M68K_CMP32(g_m68k.d[7], bus_read32(g_m68k.a[6] + (-0x5b00)));
    M68K_CMP32(g_m68k.d[7], bus_read32(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.a[2] * 4));
    /* WARNING: function did not end with RTS */
}

/* $09B960-$09B99C  (26 instructions, 60 bytes) */
void jt_09B960(void) {
    M68K_OR8(g_m68k.d[6], 0x8);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP32(g_m68k.a[7], (uint32_t)(int32_t)(int16_t)(uint16_t)(g_m68k.a[7]));
    /* TODO $09B96A: sbcd.b d0, d6  [8D 00] */
    M68K_CMP32(g_m68k.a[7], (uint32_t)(int32_t)(int16_t)(uint16_t)(bus_read16(g_m68k.a[2])));
    /* TODO $09B96E: sbcd.b d0, d6  [8D 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP32(g_m68k.a[7], (uint32_t)(int32_t)(int16_t)(uint16_t)(_postinc16(3)));
    /* TODO $09B97A: sbcd.b d0, d6  [8D 00] */
    M68K_CMP32(g_m68k.a[7], (uint32_t)(int32_t)(int16_t)(uint16_t)(_predec16(0)));
    /* TODO $09B97E: sbcd.b d0, d6  [8D 00] */
    M68K_CMP32(g_m68k.a[7], (uint32_t)(int32_t)(int16_t)(uint16_t)(_predec16(3)));
    /* TODO $09B982: sbcd.b d0, d6  [8D 00] */
    M68K_CMP32(g_m68k.a[7], (uint32_t)(int32_t)(int16_t)(uint16_t)(g_m68k.a[4]));
    /* TODO $09B986: sbcd.b d0, d6  [8D 00] */
    M68K_CMP32(g_m68k.a[7], (uint32_t)(int32_t)(int16_t)(uint16_t)(bus_read16(g_m68k.a[0])));
    /* TODO $09B98A: sbcd.b d0, d6  [8D 00] */
    M68K_CMP32(g_m68k.a[7], (uint32_t)(int32_t)(int16_t)(uint16_t)(bus_read16(g_m68k.a[3])));
    /* TODO $09B98E: sbcd.b d0, d6  [8D 00] */
    M68K_CMP32(g_m68k.a[7], (uint32_t)(int32_t)(int16_t)(uint16_t)(bus_read16(g_m68k.a[6])));
    /* TODO $09B992: sbcd.b d0, d6  [8D 00] */
    M68K_CMP32(g_m68k.a[7], (uint32_t)(int32_t)(int16_t)(uint16_t)(_postinc16(1)));
    /* TODO $09B996: sbcd.b d0, d6  [8D 00] */
    M68K_CMP32(g_m68k.a[7], (uint32_t)(int32_t)(int16_t)(uint16_t)(_postinc16(4)));
    /* TODO $09B99A: sbcd.b d0, d6  [8D 00] */
    /* WARNING: function did not end with RTS */
}

/* $09BA24-$09BA64  (16 instructions, 64 bytes) */
void jt_09BA24(void) {
    M68K_OR8(g_m68k.d[6], 0x8);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP32(g_m68k.a[7], (uint32_t)(int32_t)(int16_t)(uint16_t)(bus_read16(g_m68k.a[3] + (-0x7300))));
    M68K_CMP32(g_m68k.a[7], (uint32_t)(int32_t)(int16_t)(uint16_t)(bus_read16(g_m68k.a[7] + (-0x7300))));
    M68K_CMP32(g_m68k.a[7], (uint32_t)(int32_t)(int16_t)(uint16_t)(bus_read16(g_m68k.a[1] + 0 + (int32_t)g_m68k.a[0] * 4)));
    M68K_CMP32(g_m68k.a[7], (uint32_t)(int32_t)(int16_t)(uint16_t)(bus_read16(g_m68k.a[6] + 0 + (int32_t)g_m68k.a[0] * 4)));
    M68K_CMP32(g_m68k.a[7], (uint32_t)(int32_t)(int16_t)(uint16_t)(bus_read16(0x008D00)));
    M68K_CMP32(g_m68k.a[7], (uint32_t)(int32_t)(int16_t)(uint16_t)(bus_read16(0x94762)));
    /* WARNING: function did not end with RTS */
}

/* $09BAE8-$09BB28  (17 instructions, 64 bytes) */
void jt_09BAE8(void) {
    M68K_OR8(g_m68k.d[2], 0x8);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP32(g_m68k.a[7], (uint32_t)(int32_t)(int16_t)(uint16_t)(bus_read16(g_m68k.a[4] + 0 + (int32_t)g_m68k.a[0] * 4)));
    M68K_CMP32(g_m68k.a[7], (uint32_t)(int32_t)(int16_t)(uint16_t)(bus_read16(g_m68k.a[7] + 0 + (int32_t)g_m68k.a[0] * 4)));
    M68K_CMP32(g_m68k.a[7], (uint32_t)(int32_t)(int16_t)(uint16_t)(bus_read16(0x8D00BEFB)));
    /* TODO $09BB06: sbcd.b d0, d6  [8D 00] */
    M68K_ADD8(g_m68k.d[2], 0x5);
    /* TODO $09BB0A: sbcd.b d0, d6  [8D 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP32(g_m68k.a[7], (uint32_t)(int32_t)(int16_t)(uint16_t)(0x8d00));
    /* WARNING: function did not end with RTS */
}

/* $09BB2C-$09BB32  (2 instructions, 6 bytes) */
void jt_09BB2C(void) {
    M68K_OR8(g_m68k.d[6], 0x7);
    M68K_CMP32(g_m68k.a[5], g_m68k.d[6]);
    /* WARNING: function did not end with RTS */
}

/* $09BBD8-$09BBDE  (2 instructions, 6 bytes) */
void jt_09BBD8(void) {
    M68K_OR8(g_m68k.d[2], 0x7);
    M68K_CMP32(g_m68k.a[5], g_m68k.a[2]);
    /* WARNING: function did not end with RTS */
}

/* $09BC14-$09BC18  (1 instructions, 4 bytes) */
void jt_09BC14(void) {
    M68K_OR8(g_m68k.d[6], 0x4);
    /* WARNING: function did not end with RTS */
}

/* $09BC78-$09BC9C  (11 instructions, 36 bytes) */
void jt_09BC78(void) {
    M68K_OR8(g_m68k.d[2], 0x4);
    M68K_EOR8(g_m68k.d[3], g_m68k.d[7]);
    /* TODO $09BC7E: sbcd.b d0, d6  [8D 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_EOR8(g_m68k.d[4], g_m68k.d[7]);
    /* TODO $09BC8E: sbcd.b d0, d6  [8D 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $09BC9C-$09BCA6  (3 instructions, 10 bytes) */
void jt_09BC9C(void) {
    M68K_OR8(g_m68k.d[6], 0x9);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP32(g_m68k.a[5], bus_read32(g_m68k.a[3]));
    /* WARNING: function did not end with RTS */
}

/* $09BD78-$09BD8A  (5 instructions, 18 bytes) */
void jt_09BD78(void) {
    M68K_OR8(g_m68k.d[6], 0xa);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP8(g_m68k.d[6], _predec8(3));
    /* WARNING: function did not end with RTS */
}

/* $09BE6C-$09BE72  (2 instructions, 6 bytes) */
void jt_09BE6C(void) {
    M68K_OR8(g_m68k.d[6], 0x9);
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $09BF48-$09BF4E  (2 instructions, 6 bytes) */
void jt_09BF48(void) {
    M68K_OR8(g_m68k.d[4], 0xa);
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $09BFEC-$09BFF2  (2 instructions, 6 bytes) */
void jt_09BFEC(void) {
    M68K_OR8(g_m68k.d[1], 0x6);
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $09C008-$09C00E  (2 instructions, 6 bytes) */
void jt_09C008(void) {
    M68K_OR8(g_m68k.d[1], 0x6);
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $09C024-$09C02A  (2 instructions, 6 bytes) */
void jt_09C024(void) {
    M68K_OR8(g_m68k.d[1], 0x6);
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $09C040-$09C046  (2 instructions, 6 bytes) */
void jt_09C040(void) {
    M68K_OR8(g_m68k.d[1], 0x6);
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $09C05C-$09C072  (6 instructions, 22 bytes) */
void jt_09C05C(void) {
    M68K_OR8(g_m68k.d[2], 0xa);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP16(g_m68k.d[6], _postinc16(5));
    /* WARNING: function did not end with RTS */
}

/* $09C0B0-$09C0B6  (2 instructions, 6 bytes) */
void jt_09C0B0(void) {
    M68K_OR8(g_m68k.d[6], 0xa);
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $09C1A4-$09C1AA  (2 instructions, 6 bytes) */
void jt_09C1A4(void) {
    M68K_OR8(g_m68k.d[4], 0xa);
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $09C248-$09C24E  (2 instructions, 6 bytes) */
void jt_09C248(void) {
    M68K_OR8(g_m68k.d[4], 0x4);
    M68K_CMP16(g_m68k.d[6], _postinc16(5));
    /* WARNING: function did not end with RTS */
}

/* $09C28C-$09C292  (2 instructions, 6 bytes) */
void jt_09C28C(void) {
    M68K_OR8(g_m68k.d[1], 0x2);
    M68K_CMP16(g_m68k.d[6], _predec16(1));
    /* WARNING: function did not end with RTS */
}

/* $09C298-$09C2AA  (5 instructions, 18 bytes) */
void jt_09C298(void) {
    M68K_OR8(g_m68k.d[5], 0xa);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP8(g_m68k.d[6], _predec8(3));
    /* WARNING: function did not end with RTS */
}

/* $09C364-$09C36A  (2 instructions, 6 bytes) */
void jt_09C364(void) {
    M68K_OR8(g_m68k.d[4], 0xa);
    M68K_CMP8(g_m68k.d[6], bus_read8(g_m68k.a[6]));
    /* WARNING: function did not end with RTS */
}
