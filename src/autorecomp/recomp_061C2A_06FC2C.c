/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $061C2A - $06FC2C */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

/* $061C2A-$061C62  (21 instructions, 56 bytes) */
void jt_061C2A(void) {
    { uint32_t _ea = g_m68k.a[7]; uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $061C2C: sbcd.b d0, d1  [83 00] */
    { uint32_t _ea = (g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = (g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = g_m68k.a[1]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $061C38: sbcd.b d0, d1  [83 00] */
    { uint32_t _ea = g_m68k.a[2]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $061C3C: sbcd.b d0, d1  [83 00] */
    { uint32_t _ea = g_m68k.a[6]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $061C40: sbcd.b d0, d1  [83 00] */
    { uint32_t _ea = (g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = g_m68k.a[1]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $061C48: sbcd.b d0, d1  [83 00] */
    { uint32_t _ea = (g_m68k.a[3] + (-0x7d00)); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $061C50: sbcd.b d0, d1  [83 00] */
    { uint32_t _ea = g_m68k.a[7]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $061C54: sbcd.b d0, d1  [83 00] */
    { uint32_t _ea = 0x8401056C; uint8_t _b = 1u << ((g_m68k.d[1]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.a[1]); uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* WARNING: function did not end with RTS */
}

/* $0623FC-$0623FE  (1 instructions, 2 bytes) */
void jt_0623FC(void) {
    /* TODO $0623FC: sbcd.b d0, d2  [85 00] */
    /* WARNING: function did not end with RTS */
}

/* $06282A-$062832  (1 instructions, 8 bytes) */
void jt_06282A(void) {
    { uint32_t _ea = (g_m68k.a[3] + (-0x7900)); uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, 0x870006b3); bus_write32(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $06302A-$06302E  (1 instructions, 4 bytes) */
void jt_06302A(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, 0x2); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $06303C-$06303E  (1 instructions, 2 bytes) */
void jt_06303C(void) {
    /* TODO $06303C: sbcd.b d2, d1  [83 02] */
    /* WARNING: function did not end with RTS */
}

/* $06323C-$06323E  (1 instructions, 2 bytes) */
void jt_06323C(void) {
    M68K_SUB8(g_m68k.d[0], g_m68k.d[1]);
    /* WARNING: function did not end with RTS */
}

/* $0633FC-$0633FE  (1 instructions, 2 bytes) */
void jt_0633FC(void) {
    M68K_SUB8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $06343C-$06343E  (1 instructions, 2 bytes) */
void jt_06343C(void) {
    M68K_SUB8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $06363C-$06366A  (13 instructions, 46 bytes) */
void jt_06363C(void) {
    /* TODO $06363C: sbcd.b d0, d1  [83 00] */
    { uint32_t _ea = g_m68k.a[6]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $063640: sbcd.b d0, d1  [83 00] */
    { uint32_t _ea = (g_m68k.a[6] + (-0x7d00)); uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    { uint32_t _ea = (g_m68k.a[6] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2); uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    M68K_BTST(bus_read8(/* UNHANDLED_ADDR: #$830005e6 */ 0), g_m68k.d[3]);
    /* TODO $063650: sbcd.b d0, d1  [83 00] */
    { uint32_t _ea = (g_m68k.a[6] + (-0x7d00)); uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    { uint32_t _ea = (g_m68k.a[6] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2); uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    M68K_BTST(bus_read8(/* UNHANDLED_ADDR: #$830005e6 */ 0), g_m68k.d[3]);
    /* TODO $063660: sbcd.b d0, d1  [83 00] */
    { uint32_t _ea = (g_m68k.a[6] + (-0x7d00)); uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    { uint32_t _ea = (g_m68k.a[6] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2); uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* WARNING: function did not end with RTS */
}

/* $06382A-$063832  (3 instructions, 8 bytes) */
void jt_06382A(void) {
    { uint32_t _ea = g_m68k.a[1]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $06382C: sbcd.b d1, d1  [83 01] */
    M68K_ADD8(g_m68k.d[2], 0x1);
    /* WARNING: function did not end with RTS */
}

/* $063C2A-$063C4E  (11 instructions, 36 bytes) */
void jt_063C2A(void) {
    { uint32_t _ea = (g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = (g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = g_m68k.a[1]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $063C34: sbcd.b d0, d1  [83 00] */
    { uint32_t _ea = (g_m68k.a[3] + (-0x7d00)); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = g_m68k.a[4]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $063C3C: sbcd.b d0, d1  [83 00] */
    M68K_BTST(bus_read8(/* UNHANDLED_ADDR: #$840001b7 */ 0), g_m68k.d[0]);
    M68K_OR8(g_m68k.d[2], g_m68k.d[1]);
    { uint32_t _ea = (g_m68k.a[2] + (-0x7c00)); uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = (g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.a[1]); uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* WARNING: function did not end with RTS */
}

/* $06482A-$06484E  (11 instructions, 36 bytes) */
void jt_06482A(void) {
    { uint32_t _ea = (g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = (g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = g_m68k.a[1]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $064834: sbcd.b d0, d1  [83 00] */
    { uint32_t _ea = (g_m68k.a[3] + (-0x7d00)); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = g_m68k.a[4]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $06483C: sbcd.b d0, d1  [83 00] */
    M68K_BTST(bus_read8(/* UNHANDLED_ADDR: #$840001b7 */ 0), g_m68k.d[0]);
    M68K_OR8(g_m68k.d[2], g_m68k.d[1]);
    { uint32_t _ea = (g_m68k.a[2] + (-0x7c00)); uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = (g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.a[1]); uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* WARNING: function did not end with RTS */
}

/* $06582A-$06584E  (10 instructions, 36 bytes) */
void jt_06582A(void) {
    { uint32_t _ea = (g_m68k.a[5] + 0x74 + (int16_t)(uint16_t)g_m68k.d[0]); uint16_t _tmp = bus_read16(_ea); M68K_OR16(_tmp, 0x8300); bus_write16(_ea, _tmp); }
    /* TODO $065830: sbcd.b d0, d1  [83 00] */
    m68k_set_sr(m68k_get_sr() | 0x8300);
    { uint32_t _ea = (g_m68k.a[7] + 0x6f + (int16_t)(uint16_t)g_m68k.d[0]); uint16_t _tmp = bus_read16(_ea); M68K_OR16(_tmp, 0x8302); bus_write16(_ea, _tmp); }
    /* TODO $06583C: sbcd.b d2, d1  [83 02] */
    { uint32_t _ea = (g_m68k.a[3] + 0x67); uint16_t _tmp = bus_read16(_ea); M68K_OR16(_tmp, 0x8302); bus_write16(_ea, _tmp); }
    /* TODO $065844: sbcd.b d2, d1  [83 02] */
    { uint32_t _ea = g_m68k.a[5]; uint16_t _tmp = bus_read16(_ea); M68K_OR16(_tmp, 0x8302); bus_write16(_ea, _tmp); }
    M68K_BCHG(g_m68k.d[3], g_m68k.d[2]);
    M68K_SUB8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $065890-$065892  (1 instructions, 2 bytes) */
void jt_065890(void) {
    M68K_SUB8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $065C2A-$065C5E  (14 instructions, 52 bytes) */
void jt_065C2A(void) {
    M68K_OR32(g_m68k.d[7], 0x83020074);
    /* TODO $065C30: sbcd.b d0, d1  [83 00] */
    m68k_set_sr(m68k_get_sr() | 0x8300);
    { uint32_t _ea = (g_m68k.a[7] + 0x6f + (int16_t)(uint16_t)g_m68k.d[0]); uint16_t _tmp = bus_read16(_ea); M68K_OR16(_tmp, 0x8302); bus_write16(_ea, _tmp); }
    /* TODO $065C3C: sbcd.b d2, d1  [83 02] */
    { uint32_t _ea = (g_m68k.a[3] + 0x67); uint16_t _tmp = bus_read16(_ea); M68K_OR16(_tmp, 0x8302); bus_write16(_ea, _tmp); }
    /* TODO $065C44: sbcd.b d2, d1  [83 02] */
    { uint32_t _ea = g_m68k.a[3]; uint16_t _tmp = bus_read16(_ea); M68K_OR16(_tmp, 0x8302); bus_write16(_ea, _tmp); }
    M68K_BCHG(g_m68k.d[3], g_m68k.d[2]);
    M68K_SUB8(g_m68k.d[0], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[4] + 0x431); uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, 0x0); bus_write8(_ea, _tmp); }
    /* TODO $065C54: sbcd.b d0, d7  [8F 00] */
    { uint32_t _ea = (g_m68k.a[5] + (-0x78) + (int16_t)(uint16_t)g_m68k.d[0]); uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, 0x0); bus_write8(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $06602A-$066046  (8 instructions, 28 bytes) */
void jt_06602A(void) {
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

/* $06642A-$066432  (3 instructions, 8 bytes) */
void jt_06642A(void) {
    { uint32_t _ea = g_m68k.a[4]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $06642C: sbcd.b d1, d1  [83 01] */
    M68K_ADD8(g_m68k.d[5], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $06682A-$06687A  (28 instructions, 80 bytes) */
void jt_06682A(void) {
    /* TODO $06682A: movep.w -$7900(a7), d0  [01 0F 87 00] */
    M68K_BTST(bus_read8(g_m68k.a[2]), g_m68k.d[0]);
    M68K_OR8(g_m68k.d[6], g_m68k.d[0]);
    M68K_BTST(bus_read8(g_m68k.a[5]), g_m68k.d[0]);
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    M68K_BTST(bus_read8(0x5ec38), g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[3]; uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $066840: sbcd.b d0, d1  [83 00] */
    { uint32_t _ea = (g_m68k.a[1] + (-0x7d00)); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = (g_m68k.a[5] + (-0x7d00)); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = (g_m68k.a[2] + (-0x7d00)); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = (g_m68k.a[6] + (-0x7d00)); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = g_m68k.a[6]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $066854: sbcd.b d0, d1  [83 00] */
    { uint32_t _ea = (g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = 0x008300; uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = (g_m68k.a[2] + (-0x7d00)); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = g_m68k.a[2]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $066864: sbcd.b d0, d1  [83 00] */
    { uint32_t _ea = g_m68k.a[6]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $066868: sbcd.b d0, d1  [83 00] */
    M68K_BTST(bus_read8((g_m68k.a[2] + (-0x7900))), g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    M68K_BTST(bus_read8(0x008400), g_m68k.d[0]);
    M68K_BTST(bus_read8((0x66878 + (int16_t)(uint16_t)g_m68k.a[0] * 4)), g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $066C2A-$066CD2  (59 instructions, 168 bytes) */
void jt_066C2A(void) {
    { uint32_t _ea = g_m68k.a[7]; uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $066C2C: sbcd.b d0, d1  [83 00] */
    { uint32_t _ea = (g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = (g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = g_m68k.a[1]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $066C38: sbcd.b d0, d1  [83 00] */
    { uint32_t _ea = g_m68k.a[2]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $066C3C: sbcd.b d0, d1  [83 00] */
    { uint32_t _ea = g_m68k.a[6]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $066C40: sbcd.b d0, d1  [83 00] */
    { uint32_t _ea = (g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = g_m68k.a[1]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    M68K_CMP8(g_m68k.d[1], g_m68k.d[3]);
    { uint32_t _ea = g_m68k.a[2]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    M68K_CMP8(g_m68k.d[1], g_m68k.d[3]);
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v & ~ _b); }
    M68K_CMP8(g_m68k.d[1], g_m68k.d[2]);
    { uint32_t _ea = g_m68k.a[7]; uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v & ~ _b); }
    M68K_CMP8(g_m68k.d[1], g_m68k.d[2]);
    { uint32_t _ea = 0x8401056C; uint8_t _b = 1u << ((g_m68k.d[1]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.a[1]); uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    M68K_BCLR(g_m68k.d[2], g_m68k.d[2]);
    M68K_OR8(g_m68k.d[6], g_m68k.d[0]);
    M68K_BCLR(g_m68k.d[4], g_m68k.d[2]);
    M68K_OR8(g_m68k.d[6], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[0] + (-0x7d00)); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = (g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = (g_m68k.a[6] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = (g_m68k.a[7] + (-0x7d00)); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $066C7C: sbcd.b d0, d1  [83 00] */
    { uint32_t _ea = g_m68k.a[7]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $066C80: sbcd.b d0, d1  [83 00] */
    { uint32_t _ea = (g_m68k.a[6] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = g_m68k.a[0]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    M68K_CMP8(g_m68k.d[1], g_m68k.d[3]);
    { uint32_t _ea = 0x00B200; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v & ~ _b); }
    M68K_CMP8(g_m68k.d[1], g_m68k.d[2]);
    M68K_BTST(bus_read8(/* UNHANDLED_ADDR: #$840001b7 */ 0), g_m68k.d[0]);
    M68K_OR8(g_m68k.d[2], g_m68k.d[1]);
    { uint32_t _ea = (g_m68k.a[5] + (-0x7c00)); uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = (g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.a[1]); uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    M68K_BCLR(g_m68k.d[3], g_m68k.d[2]);
    M68K_OR8(g_m68k.d[6], g_m68k.d[0]);
    M68K_BCLR(g_m68k.d[5], g_m68k.d[2]);
    M68K_OR8(g_m68k.d[6], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[1] + (-0x7d00)); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = (g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = (g_m68k.a[7] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = (g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = g_m68k.a[6]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $066CBC: sbcd.b d0, d1  [83 00] */
    { uint32_t _ea = (g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = (g_m68k.a[7] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = (g_m68k.a[2] + (-0x7cfd)); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = 0xB200057A; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $066CD0: sbcd.b d0, d1  [83 00] */
    /* WARNING: function did not end with RTS */
}

/* $067038-$06706A  (18 instructions, 50 bytes) */
void jt_067038(void) {
    M68K_OR8(g_m68k.d[2], g_m68k.d[1]);
    { uint32_t _ea = g_m68k.a[2]; uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $06703C: sbcd.b d1, d1  [83 01] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $067040: sbcd.b d1, d1  [83 01] */
    { uint32_t _ea = (g_m68k.a[0] + (-0x7cff)); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = /* UNHANDLED_ADDR: ([a3, a0.w * 2]) */ 0; uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = /* UNHANDLED_ADDR: ([a7, a0.w * 2]) */ 0; uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = 0x008301; uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $067054: sbcd.b d1, d1  [83 01] */
    { uint32_t _ea = g_m68k.a[7]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $067058: sbcd.b d1, d1  [83 01] */
    { uint32_t _ea = /* UNHANDLED_ADDR: ([a4, a0.w * 2]) */ 0; uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = 0x008301; uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = (g_m68k.a[2] + (-0x7cff)); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = g_m68k.a[4]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $067068: sbcd.b d1, d1  [83 01] */
    /* WARNING: function did not end with RTS */
}

/* $0670E0-$0670EA  (4 instructions, 10 bytes) */
void jt_0670E0(void) {
    /* TODO $0670E0: sbcd.b d1, d1  [83 01] */
    { uint32_t _ea = (g_m68k.a[7] + (-0x7cff)); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = g_m68k.a[2]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $0670E8: sbcd.b d1, d1  [83 01] */
    /* WARNING: function did not end with RTS */
}

/* $0670F0-$06712A  (21 instructions, 58 bytes) */
void jt_0670F0(void) {
    M68K_SUB8(g_m68k.d[4], g_m68k.d[1]);
    { uint32_t _ea = g_m68k.a[0]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v & ~ _b); }
    M68K_SUBX8(g_m68k.d[4], g_m68k.d[0]);
    M68K_BTST(bus_read8(g_m68k.a[4]), g_m68k.d[0]);
    M68K_OR8(g_m68k.d[2], g_m68k.d[1]);
    M68K_BTST(bus_read8((g_m68k.a[1] + 0x1 + (int16_t)(uint16_t)g_m68k.a[0])), g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[2]; uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $067100: sbcd.b d1, d1  [83 01] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $067104: sbcd.b d1, d1  [83 01] */
    { uint32_t _ea = (g_m68k.a[0] + (-0x7cff)); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = (g_m68k.a[2] + (-0x7cff)); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = /* UNHANDLED_ADDR: ([a5, a0.w * 2]) */ 0; uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = g_m68k.a[1]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $067114: sbcd.b d1, d1  [83 01] */
    { uint32_t _ea = (g_m68k.a[3] + (-0x7cff)); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = /* UNHANDLED_ADDR: ([a1, a0.w * 2]) */ 0; uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = /* UNHANDLED_ADDR: ([a5, a0.w * 2]) */ 0; uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = g_m68k.a[1]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $067124: sbcd.b d1, d1  [83 01] */
    { uint32_t _ea = (g_m68k.a[3] + (-0x7cff)); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* WARNING: function did not end with RTS */
}

/* $06742A-$067432  (2 instructions, 8 bytes) */
void jt_06742A(void) {
    { uint32_t _ea = g_m68k.a[5]; uint32_t _tmp = bus_read32(_ea); M68K_OR32(_tmp, 0x87000094); bus_write32(_ea, _tmp); }
    /* TODO $067430: sbcd.b d0, d3  [87 00] */
    /* WARNING: function did not end with RTS */
}

/* $067888-$06789E  (6 instructions, 22 bytes) */
void jt_067888(void) {
    M68K_SUB8(g_m68k.d[0], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[4]; uint16_t _tmp = bus_read16(_ea); M68K_OR16(_tmp, 0x8301); bus_write16(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[0] + 0x6c); uint16_t _tmp = bus_read16(_ea); M68K_OR16(_tmp, 0x8300); bus_write16(_ea, _tmp); }
    /* TODO $067894: sbcd.b d0, d1  [83 00] */
    { uint32_t _ea = (g_m68k.a[0] + 0x78 + (int16_t)(uint16_t)g_m68k.d[0]); uint16_t _tmp = bus_read16(_ea); M68K_OR16(_tmp, 0x8300); bus_write16(_ea, _tmp); }
    /* TODO $06789C: sbcd.b d0, d1  [83 00] */
    /* WARNING: function did not end with RTS */
}

/* $067C2A-$067C3E  (5 instructions, 20 bytes) */
void jt_067C2A(void) {
    { uint32_t _ea = g_m68k.a[6]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, 0x870006ae); bus_write32(_ea, _tmp); }
    /* TODO $067C30: sbcd.b d0, d3  [87 00] */
    { uint32_t _ea = (g_m68k.a[7] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 8); uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, 0x870006c0); bus_write32(_ea, _tmp); }
    /* TODO $067C3A: dc.w $6c9  [06 C9] */
    /* TODO $067C3C: sbcd.b d0, d3  [87 00] */
    /* WARNING: function did not end with RTS */
}

/* $068080-$0680AA  (16 instructions, 42 bytes) */
void jt_068080(void) {
    /* TODO $068080: sbcd.b d0, d7  [8F 00] */
    { uint32_t _ea = g_m68k.a[1]; uint8_t _b = 1u << ((g_m68k.d[1]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v & ~ _b); }
    /* TODO $068084: sbcd.b d0, d7  [8F 00] */
    { uint32_t _ea = g_m68k.a[3]; uint8_t _b = 1u << ((g_m68k.d[1]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v & ~ _b); }
    /* TODO $068088: sbcd.b d0, d7  [8F 00] */
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[1])); bus_write8(g_m68k.a[0], _mv); g_m68k.a[0] += 1; M68K_TST8(_mv); }
    /* TODO $06808C: sbcd.b d0, d3  [87 00] */
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[5])); bus_write8(g_m68k.a[0], _mv); g_m68k.a[0] += 1; M68K_TST8(_mv); }
    /* TODO $068090: sbcd.b d0, d3  [87 00] */
    { uint8_t _mv = (uint8_t)(_postinc8(0)); bus_write8(g_m68k.a[0], _mv); g_m68k.a[0] += 1; M68K_TST8(_mv); }
    /* TODO $068094: sbcd.b d0, d3  [87 00] */
    { uint32_t _ea = g_m68k.a[4]; uint16_t _tmp = bus_read16(_ea); M68K_OR16(_tmp, 0x8300); bus_write16(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[0] + 0x6c); uint16_t _tmp = bus_read16(_ea); M68K_OR16(_tmp, 0x8300); bus_write16(_ea, _tmp); }
    /* TODO $0680A0: sbcd.b d0, d1  [83 00] */
    { uint32_t _ea = (g_m68k.a[0] + 0x76 + (int16_t)(uint16_t)g_m68k.d[0]); uint16_t _tmp = bus_read16(_ea); M68K_OR16(_tmp, 0x8300); bus_write16(_ea, _tmp); }
    /* TODO $0680A8: sbcd.b d2, d1  [83 02] */
    /* WARNING: function did not end with RTS */
}

/* $06842A-$06842E  (1 instructions, 4 bytes) */
void jt_06842A(void) {
    M68K_OR8(g_m68k.d[1], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $06882A-$06884A  (9 instructions, 32 bytes) */
void jt_06882A(void) {
    { uint32_t _ea = /* UNHANDLED_ADDR: ([a6, a1.w * 8]) */ 0; uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    M68K_AND8(g_m68k.d[4], 0x1);
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, 0x1); bus_write8(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.a[1] * 8); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    { uint32_t _ea = (g_m68k.a[6] + 0x114); uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, 0x1); bus_write8(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    M68K_BTST(bus_read8(g_m68k.a[7]), g_m68k.d[0]);
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[7] + (-0x65ff)); uint8_t _b = 1u << ((g_m68k.d[1]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* WARNING: function did not end with RTS */
}

/* $068C2A-$068C2E  (1 instructions, 4 bytes) */
void jt_068C2A(void) {
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, 0x2); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $06902A-$069056  (14 instructions, 44 bytes) */
void jt_06902A(void) {
    { uint32_t _ea = g_m68k.a[6]; uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $06902C: sbcd.b d1, d1  [83 01] */
    { uint32_t _ea = (g_m68k.a[1] + (-0x7cff)); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = (g_m68k.a[2] + (-0x7cff)); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = (g_m68k.a[6] + (-0x7cff)); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = /* UNHANDLED_ADDR: ([a4, a0.w * 2]) */ 0; uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = 0x008301; uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = (g_m68k.a[2] + (-0x7cff)); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = (g_m68k.a[6] + (-0x7cff)); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = /* UNHANDLED_ADDR: ([a4, a0.w * 2]) */ 0; uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = g_m68k.a[2]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $069050: sbcd.b d1, d1  [83 01] */
    { uint32_t _ea = g_m68k.a[6]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $069054: sbcd.b d1, d1  [83 01] */
    /* WARNING: function did not end with RTS */
}

/* $069400-$06942A  (14 instructions, 42 bytes) */
void jt_069400(void) {
    /* TODO $069400: sbcd.b d1, d1  [83 01] */
    { uint32_t _ea = (g_m68k.a[1] + (-0x7cff)); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = /* UNHANDLED_ADDR: ([a4, a0.w * 2]) */ 0; uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = 0x008301; uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = (g_m68k.a[2] + (-0x7cff)); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = g_m68k.a[6]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $069414: sbcd.b d1, d1  [83 01] */
    { uint32_t _ea = /* UNHANDLED_ADDR: ([a4, a0.w * 2]) */ 0; uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = 0x008301; uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = (g_m68k.a[2] + (-0x7cff)); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = g_m68k.a[2]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $069424: sbcd.b d1, d1  [83 01] */
    { uint32_t _ea = g_m68k.a[6]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $069428: sbcd.b d1, d1  [83 01] */
    /* WARNING: function did not end with RTS */
}

/* $069818-$06982A  (6 instructions, 18 bytes) */
void jt_069818(void) {
    /* TODO $069818: sbcd.b d1, d1  [83 01] */
    { uint32_t _ea = /* UNHANDLED_ADDR: ([a1, a0.w * 2]) */ 0; uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = /* UNHANDLED_ADDR: ([a5, a0.w * 2]) */ 0; uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = g_m68k.a[1]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $069824: sbcd.b d1, d1  [83 01] */
    { uint32_t _ea = (g_m68k.a[3] + (-0x7cff)); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* WARNING: function did not end with RTS */
}

/* $06982A-$06983E  (5 instructions, 20 bytes) */
void jt_06982A(void) {
    M68K_BTST(bus_read8(/* UNHANDLED_ADDR: #$840101b7 */ 0), g_m68k.d[0]);
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[5] + (-0x7bff)); uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = (g_m68k.a[3] + 0x1 + (int16_t)(uint16_t)g_m68k.a[1]); uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = (g_m68k.a[6] + 0x1 + (int32_t)g_m68k.a[0]); uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* WARNING: function did not end with RTS */
}

/* $0698C8-$0698CA  (1 instructions, 2 bytes) */
void jt_0698C8(void) {
    /* TODO $0698C8: sbcd.b d0, d7  [8F 00] */
    /* WARNING: function did not end with RTS */
}

/* $069C2A-$069C42  (7 instructions, 24 bytes) */
void jt_069C2A(void) {
    { uint32_t _ea = (g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = (g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    { uint32_t _ea = g_m68k.a[1]; uint8_t _b = 1u << ((g_m68k.d[2]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $069C34: sbcd.b d0, d1  [83 00] */
    { uint32_t _ea = (g_m68k.a[3] + (-0x7d00)); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    M68K_ADD8(g_m68k.d[6], 0x1);
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, 0x0); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $06A02A-$06A04A  (8 instructions, 32 bytes) */
void jt_06A02A(void) {
    { uint32_t _ea = (g_m68k.a[7] + 0x74 + (int16_t)(uint16_t)g_m68k.d[0]); uint16_t _tmp = bus_read16(_ea); M68K_OR16(_tmp, 0x8300); bus_write16(_ea, _tmp); }
    /* TODO $06A030: sbcd.b d0, d1  [83 00] */
    m68k_set_sr(m68k_get_sr() | 0x8300);
    { uint32_t _ea = (g_m68k.a[7] + 0x6f + (int16_t)(uint16_t)g_m68k.d[0]); uint16_t _tmp = bus_read16(_ea); M68K_OR16(_tmp, 0x8302); bus_write16(_ea, _tmp); }
    /* TODO $06A03C: sbcd.b d2, d1  [83 02] */
    { uint32_t _ea = (g_m68k.a[3] + 0x67); uint16_t _tmp = bus_read16(_ea); M68K_OR16(_tmp, 0x8302); bus_write16(_ea, _tmp); }
    /* TODO $06A044: sbcd.b d2, d1  [83 02] */
    { uint32_t _ea = g_m68k.a[3]; uint16_t _tmp = bus_read16(_ea); M68K_OR16(_tmp, 0x8302); bus_write16(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $06A048-$06A05E  (7 instructions, 22 bytes) */
void jt_06A048(void) {
    /* TODO $06A048: sbcd.b d2, d1  [83 02] */
    M68K_BCHG(g_m68k.d[3], g_m68k.d[2]);
    M68K_SUB8(g_m68k.d[0], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[4] + 0x431); uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, 0x0); bus_write8(_ea, _tmp); }
    /* TODO $06A054: sbcd.b d0, d7  [8F 00] */
    { uint32_t _ea = (g_m68k.a[5] + (-0x78) + (int16_t)(uint16_t)g_m68k.d[0]); uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, 0x0); bus_write8(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $06A42A-$06A442  (7 instructions, 24 bytes) */
void jt_06A42A(void) {
    { uint32_t _ea = (g_m68k.a[7] + 0x6f + (int16_t)(uint16_t)g_m68k.d[0]); uint16_t _tmp = bus_read16(_ea); M68K_OR16(_tmp, 0x8300); bus_write16(_ea, _tmp); }
    /* TODO $06A430: sbcd.b d2, d1  [83 02] */
    { uint32_t _ea = (g_m68k.a[3] + 0x67); uint16_t _tmp = bus_read16(_ea); M68K_OR16(_tmp, 0x8302); bus_write16(_ea, _tmp); }
    /* TODO $06A438: sbcd.b d2, d1  [83 02] */
    { uint32_t _ea = g_m68k.a[3]; uint16_t _tmp = bus_read16(_ea); M68K_OR16(_tmp, 0x8302); bus_write16(_ea, _tmp); }
    M68K_BCHG(g_m68k.d[3], g_m68k.d[2]);
    M68K_SUB8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $06A82A-$06A842  (7 instructions, 24 bytes) */
void jt_06A82A(void) {
    { uint32_t _ea = (g_m68k.a[7] + 0x6f + (int16_t)(uint16_t)g_m68k.d[0]); uint16_t _tmp = bus_read16(_ea); M68K_OR16(_tmp, 0x8300); bus_write16(_ea, _tmp); }
    /* TODO $06A830: sbcd.b d2, d1  [83 02] */
    { uint32_t _ea = (g_m68k.a[3] + 0x67); uint16_t _tmp = bus_read16(_ea); M68K_OR16(_tmp, 0x8302); bus_write16(_ea, _tmp); }
    /* TODO $06A838: sbcd.b d2, d1  [83 02] */
    { uint32_t _ea = g_m68k.a[3]; uint16_t _tmp = bus_read16(_ea); M68K_OR16(_tmp, 0x8302); bus_write16(_ea, _tmp); }
    M68K_BCHG(g_m68k.d[3], g_m68k.d[2]);
    M68K_SUB8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $06B42A-$06B43E  (5 instructions, 20 bytes) */
void jt_06B42A(void) {
    { uint32_t _ea = g_m68k.a[6]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, 0x870006ae); bus_write32(_ea, _tmp); }
    /* TODO $06B430: sbcd.b d0, d3  [87 00] */
    { uint32_t _ea = (g_m68k.a[7] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 8); uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, 0x870006c0); bus_write32(_ea, _tmp); }
    /* TODO $06B43A: dc.w $6c9  [06 C9] */
    /* TODO $06B43C: sbcd.b d0, d3  [87 00] */
    /* WARNING: function did not end with RTS */
}

/* $06C02A-$06C032  (3 instructions, 8 bytes) */
void jt_06C02A(void) {
    { uint32_t _ea = g_m68k.a[1]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $06C02C: sbcd.b d1, d1  [83 01] */
    M68K_ADD8(g_m68k.d[2], 0x1);
    /* WARNING: function did not end with RTS */
}

/* $06D02A-$06D046  (8 instructions, 28 bytes) */
void jt_06D02A(void) {
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

/* $06D0F0-$06D0F2  (1 instructions, 2 bytes) */
void jt_06D0F0(void) {
    M68K_SUBX8(g_m68k.d[3], g_m68k.d[1]);
    /* WARNING: function did not end with RTS */
}

/* $06D42A-$06D432  (3 instructions, 8 bytes) */
void jt_06D42A(void) {
    { uint32_t _ea = g_m68k.a[1]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $06D42C: sbcd.b d1, d1  [83 01] */
    M68K_ADD8(g_m68k.d[2], 0x1);
    /* WARNING: function did not end with RTS */
}

/* $06DC2A-$06DC32  (2 instructions, 8 bytes) */
void jt_06DC2A(void) {
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); bus_write8(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.a[1], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[7]); bus_write8(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.a[1], _mv); M68K_TST8(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $06E02A-$06E032  (2 instructions, 8 bytes) */
void jt_06E02A(void) {
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); bus_write8(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.a[1], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[7]); bus_write8(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.a[1], _mv); M68K_TST8(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $06E080-$06E082  (1 instructions, 2 bytes) */
void jt_06E080(void) {
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $06E42A-$06E44A  (9 instructions, 32 bytes) */
void jt_06E42A(void) {
    { uint32_t _ea = /* UNHANDLED_ADDR: ([a6, a1.w * 8]) */ 0; uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    M68K_AND8(g_m68k.d[4], 0x1);
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, 0x1); bus_write8(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.a[1] * 8); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    { uint32_t _ea = (g_m68k.a[6] + 0x114); uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, 0x1); bus_write8(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    M68K_BTST(bus_read8(g_m68k.a[7]), g_m68k.d[0]);
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[7] + (-0x65ff)); uint8_t _b = 1u << ((g_m68k.d[1]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* WARNING: function did not end with RTS */
}

/* $06E82A-$06E832  (3 instructions, 8 bytes) */
void jt_06E82A(void) {
    { uint32_t _ea = g_m68k.a[1]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    /* TODO $06E82C: sbcd.b d1, d1  [83 01] */
    M68K_ADD8(g_m68k.d[2], 0x1);
    /* WARNING: function did not end with RTS */
}

/* $06F82A-$06FC2C  (257 instructions, 1026 bytes) */
void jt_06F82A(void) {
    M68K_BTST(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[6], 0x2c);
    M68K_OR8(g_m68k.d[6], 0x3c);
    M68K_OR8(g_m68k.d[6], 0x4c);
    M68K_OR8(g_m68k.d[6], 0x5c);
    M68K_OR8(g_m68k.d[6], 0x6c);
    M68K_OR8(g_m68k.d[6], 0x7c);
    M68K_OR8(g_m68k.d[6], 0x8c);
    M68K_OR8(g_m68k.d[6], 0x9c);
    M68K_OR8(g_m68k.d[6], 0xac);
    M68K_OR8(g_m68k.d[6], 0xbc);
    M68K_OR8(g_m68k.d[6], 0xcc);
    M68K_OR8(g_m68k.d[6], 0xdc);
    M68K_OR8(g_m68k.d[6], 0xec);
    M68K_OR8(g_m68k.d[6], 0xfc);
    M68K_OR8(g_m68k.d[6], 0xc);
    M68K_OR8(g_m68k.d[6], 0x1c);
    M68K_OR8(g_m68k.d[6], 0x2c);
    M68K_OR8(g_m68k.d[6], 0x3c);
    M68K_OR8(g_m68k.d[6], 0x4c);
    M68K_OR8(g_m68k.d[6], 0x5c);
    M68K_OR8(g_m68k.d[6], 0x6c);
    M68K_OR8(g_m68k.d[6], 0x7c);
    M68K_OR8(g_m68k.d[6], 0x8c);
    M68K_OR8(g_m68k.d[6], 0x9c);
    M68K_OR8(g_m68k.d[6], 0xac);
    M68K_OR8(g_m68k.d[6], 0xbc);
    M68K_OR8(g_m68k.d[6], 0xcc);
    M68K_OR8(g_m68k.d[6], 0xdc);
    M68K_OR8(g_m68k.d[6], 0xec);
    M68K_OR8(g_m68k.d[6], 0xfc);
    M68K_OR8(g_m68k.d[6], 0xc);
    M68K_OR8(g_m68k.d[6], 0x1c);
    M68K_OR8(g_m68k.d[6], 0x2c);
    M68K_OR8(g_m68k.d[6], 0x3c);
    M68K_OR8(g_m68k.d[6], 0x4c);
    M68K_OR8(g_m68k.d[6], 0x5c);
    M68K_OR8(g_m68k.d[6], 0x6c);
    M68K_OR8(g_m68k.d[6], 0x7c);
    M68K_OR8(g_m68k.d[6], 0x8c);
    M68K_OR8(g_m68k.d[6], 0x9c);
    M68K_OR8(g_m68k.d[6], 0xac);
    M68K_OR8(g_m68k.d[6], 0xbc);
    M68K_OR8(g_m68k.d[6], 0xcc);
    M68K_OR8(g_m68k.d[6], 0xdc);
    M68K_OR8(g_m68k.d[6], 0xec);
    M68K_OR8(g_m68k.d[6], 0xfc);
    M68K_OR8(g_m68k.d[6], 0xc);
    M68K_OR8(g_m68k.d[6], 0x1c);
    M68K_OR8(g_m68k.d[6], 0x2c);
    M68K_OR8(g_m68k.d[6], 0x3c);
    M68K_OR8(g_m68k.d[6], 0x4c);
    M68K_OR8(g_m68k.d[6], 0x5c);
    M68K_OR8(g_m68k.d[6], 0x6c);
    M68K_OR8(g_m68k.d[6], 0x7c);
    M68K_OR8(g_m68k.d[6], 0x8c);
    M68K_OR8(g_m68k.d[6], 0x9c);
    M68K_OR8(g_m68k.d[6], 0xac);
    M68K_OR8(g_m68k.d[6], 0xbc);
    M68K_OR8(g_m68k.d[6], 0xcc);
    M68K_OR8(g_m68k.d[6], 0xdc);
    M68K_OR8(g_m68k.d[6], 0xec);
    M68K_OR8(g_m68k.d[6], 0xfc);
    M68K_OR8(g_m68k.d[7], 0xc);
    M68K_OR8(g_m68k.d[7], 0x1c);
    M68K_OR8(g_m68k.d[7], 0x2c);
    M68K_OR8(g_m68k.d[7], 0x3c);
    M68K_OR8(g_m68k.d[7], 0x4c);
    M68K_OR8(g_m68k.d[7], 0x5c);
    M68K_OR8(g_m68k.d[7], 0x6c);
    M68K_OR8(g_m68k.d[7], 0x7c);
    M68K_OR8(g_m68k.d[7], 0x8c);
    M68K_OR8(g_m68k.d[7], 0x9c);
    M68K_OR8(g_m68k.d[7], 0xac);
    M68K_OR8(g_m68k.d[7], 0xbc);
    M68K_OR8(g_m68k.d[7], 0xcc);
    M68K_OR8(g_m68k.d[7], 0xdc);
    M68K_OR8(g_m68k.d[7], 0xec);
    M68K_OR8(g_m68k.d[7], 0xfc);
    M68K_OR8(g_m68k.d[7], 0xc);
    M68K_OR8(g_m68k.d[7], 0x1c);
    M68K_OR8(g_m68k.d[7], 0x2c);
    M68K_OR8(g_m68k.d[7], 0x3c);
    M68K_OR8(g_m68k.d[7], 0x4c);
    M68K_OR8(g_m68k.d[7], 0x5c);
    M68K_OR8(g_m68k.d[7], 0x6c);
    M68K_OR8(g_m68k.d[7], 0x7c);
    M68K_OR8(g_m68k.d[7], 0x8c);
    M68K_OR8(g_m68k.d[7], 0x9c);
    M68K_OR8(g_m68k.d[7], 0xac);
    M68K_OR8(g_m68k.d[7], 0xbc);
    M68K_OR8(g_m68k.d[7], 0xcc);
    M68K_OR8(g_m68k.d[7], 0xdc);
    M68K_OR8(g_m68k.d[7], 0xec);
    M68K_OR8(g_m68k.d[7], 0xfc);
    M68K_OR8(g_m68k.d[7], 0xc);
    M68K_OR8(g_m68k.d[7], 0x1c);
    M68K_OR8(g_m68k.d[7], 0x2c);
    M68K_OR8(g_m68k.d[7], 0x3c);
    M68K_OR8(g_m68k.d[7], 0x4c);
    M68K_OR8(g_m68k.d[7], 0x5c);
    M68K_OR8(g_m68k.d[7], 0x6c);
    M68K_OR8(g_m68k.d[7], 0x7c);
    M68K_OR8(g_m68k.d[7], 0x8c);
    M68K_OR8(g_m68k.d[7], 0x9c);
    M68K_OR8(g_m68k.d[7], 0xac);
    M68K_OR8(g_m68k.d[7], 0xbc);
    M68K_OR8(g_m68k.d[7], 0xcc);
    M68K_OR8(g_m68k.d[7], 0xdc);
    M68K_OR8(g_m68k.d[7], 0xec);
    M68K_OR8(g_m68k.d[7], 0xfc);
    M68K_OR8(g_m68k.d[7], 0xc);
    M68K_OR8(g_m68k.d[7], 0x1c);
    M68K_OR8(g_m68k.d[7], 0x2c);
    M68K_OR8(g_m68k.d[7], 0x3c);
    M68K_OR8(g_m68k.d[7], 0x4c);
    M68K_OR8(g_m68k.d[7], 0x5c);
    M68K_OR8(g_m68k.d[7], 0x6c);
    M68K_OR8(g_m68k.d[7], 0x7c);
    M68K_OR8(g_m68k.d[7], 0x8c);
    M68K_OR8(g_m68k.d[7], 0x9c);
    M68K_OR8(g_m68k.d[7], 0xac);
    M68K_OR8(g_m68k.d[7], 0xbc);
    M68K_OR8(g_m68k.d[7], 0xcc);
    M68K_OR8(g_m68k.d[7], 0xdc);
    M68K_OR8(g_m68k.d[7], 0xec);
    M68K_OR8(g_m68k.d[7], 0xfc);
    M68K_OR8(g_m68k.d[7], 0xc);
    M68K_OR8(g_m68k.d[7], 0x1c);
    M68K_OR8(g_m68k.d[7], 0x2c);
    M68K_OR8(g_m68k.d[7], 0x3c);
    M68K_OR8(g_m68k.d[7], 0x4c);
    M68K_OR8(g_m68k.d[7], 0x5c);
    M68K_OR8(g_m68k.d[7], 0x6c);
    M68K_OR8(g_m68k.d[7], 0x7c);
    M68K_OR8(g_m68k.d[7], 0x8c);
    M68K_OR8(g_m68k.d[7], 0x9c);
    M68K_OR8(g_m68k.d[7], 0xac);
    M68K_OR8(g_m68k.d[7], 0xbc);
    M68K_OR8(g_m68k.d[7], 0xcc);
    M68K_OR8(g_m68k.d[7], 0xdc);
    M68K_OR8(g_m68k.d[7], 0xec);
    M68K_OR8(g_m68k.d[7], 0xfc);
    M68K_OR8(g_m68k.d[7], 0xc);
    M68K_OR8(g_m68k.d[7], 0x1c);
    M68K_OR8(g_m68k.d[7], 0x2c);
    M68K_OR8(g_m68k.d[7], 0x3c);
    M68K_OR8(g_m68k.d[7], 0x4c);
    M68K_OR8(g_m68k.d[7], 0x5c);
    M68K_OR8(g_m68k.d[7], 0x6c);
    M68K_OR8(g_m68k.d[7], 0x7c);
    M68K_OR8(g_m68k.d[7], 0x8c);
    M68K_OR8(g_m68k.d[7], 0x9c);
    M68K_OR8(g_m68k.d[7], 0xac);
    M68K_OR8(g_m68k.d[7], 0xbc);
    M68K_OR8(g_m68k.d[7], 0xcc);
    M68K_OR8(g_m68k.d[7], 0xdc);
    M68K_OR8(g_m68k.d[7], 0xec);
    M68K_OR8(g_m68k.d[7], 0xfc);
    M68K_OR8(g_m68k.d[7], 0xc);
    M68K_OR8(g_m68k.d[7], 0x1c);
    M68K_OR8(g_m68k.d[7], 0x2c);
    M68K_OR8(g_m68k.d[7], 0x3c);
    M68K_OR8(g_m68k.d[7], 0x4c);
    M68K_OR8(g_m68k.d[7], 0x5c);
    M68K_OR8(g_m68k.d[7], 0x6c);
    M68K_OR8(g_m68k.d[7], 0x7c);
    M68K_OR8(g_m68k.d[7], 0x8c);
    M68K_OR8(g_m68k.d[7], 0x9c);
    M68K_OR8(g_m68k.d[7], 0xac);
    M68K_OR8(g_m68k.d[7], 0xbc);
    M68K_OR8(g_m68k.d[7], 0xcc);
    M68K_OR8(g_m68k.d[7], 0xdc);
    M68K_OR8(g_m68k.d[7], 0xec);
    M68K_OR8(g_m68k.d[7], 0xfc);
    M68K_OR8(g_m68k.d[7], 0xc);
    M68K_OR8(g_m68k.d[7], 0x1c);
    M68K_OR8(g_m68k.d[7], 0x2c);
    M68K_OR8(g_m68k.d[7], 0x3c);
    M68K_OR8(g_m68k.d[7], 0x4c);
    M68K_OR8(g_m68k.d[7], 0x5c);
    M68K_OR8(g_m68k.d[7], 0x6c);
    M68K_OR8(g_m68k.d[7], 0x7c);
    M68K_OR8(g_m68k.d[7], 0x8c);
    M68K_OR8(g_m68k.d[7], 0x9c);
    M68K_OR8(g_m68k.d[7], 0xac);
    M68K_OR8(g_m68k.d[7], 0xbc);
    M68K_OR8(g_m68k.d[7], 0xcc);
    M68K_OR8(g_m68k.d[7], 0xdc);
    M68K_OR8(g_m68k.d[7], 0xec);
    M68K_OR8(g_m68k.d[7], 0xfc);
    M68K_OR8(g_m68k.d[7], 0xc);
    M68K_OR8(g_m68k.d[7], 0x1c);
    M68K_OR8(g_m68k.d[7], 0x2c);
    M68K_OR8(g_m68k.d[7], 0x3c);
    M68K_OR8(g_m68k.d[7], 0x4c);
    M68K_OR8(g_m68k.d[7], 0x5c);
    M68K_OR8(g_m68k.d[7], 0x6c);
    M68K_OR8(g_m68k.d[7], 0x7c);
    M68K_OR8(g_m68k.d[7], 0x8c);
    M68K_OR8(g_m68k.d[7], 0x9c);
    M68K_OR8(g_m68k.d[7], 0xac);
    M68K_OR8(g_m68k.d[7], 0xbc);
    M68K_OR8(g_m68k.d[7], 0xcc);
    M68K_OR8(g_m68k.d[7], 0xdc);
    M68K_OR8(g_m68k.d[7], 0xec);
    M68K_OR8(g_m68k.d[7], 0xfc);
    M68K_OR8(g_m68k.d[7], 0xc);
    M68K_OR8(g_m68k.d[7], 0x1c);
    M68K_OR8(g_m68k.d[7], 0x2c);
    M68K_OR8(g_m68k.d[7], 0x3c);
    M68K_OR8(g_m68k.d[7], 0x4c);
    M68K_OR8(g_m68k.d[7], 0x5c);
    M68K_OR8(g_m68k.d[7], 0x6c);
    M68K_OR8(g_m68k.d[7], 0x7c);
    M68K_OR8(g_m68k.d[7], 0x8c);
    M68K_OR8(g_m68k.d[7], 0x9c);
    M68K_OR8(g_m68k.d[7], 0xac);
    M68K_OR8(g_m68k.d[7], 0xbc);
    M68K_OR8(g_m68k.d[7], 0xcc);
    M68K_OR8(g_m68k.d[7], 0xdc);
    M68K_OR8(g_m68k.d[7], 0xec);
    M68K_OR8(g_m68k.d[7], 0xfc);
    M68K_OR8(g_m68k.d[7], 0xc);
    M68K_OR8(g_m68k.d[7], 0x1c);
    M68K_OR8(g_m68k.d[7], 0x2c);
    M68K_OR8(g_m68k.d[7], 0x3c);
    M68K_OR8(g_m68k.d[7], 0x4c);
    M68K_OR8(g_m68k.d[7], 0x5c);
    M68K_OR8(g_m68k.d[7], 0x6c);
    M68K_OR8(g_m68k.d[7], 0x7c);
    M68K_OR8(g_m68k.d[7], 0x8c);
    M68K_OR8(g_m68k.d[7], 0x9c);
    M68K_OR8(g_m68k.d[7], 0xac);
    M68K_OR8(g_m68k.d[7], 0xbc);
    M68K_OR8(g_m68k.d[7], 0xcc);
    M68K_OR8(g_m68k.d[7], 0xdc);
    M68K_OR8(g_m68k.d[7], 0xec);
    M68K_OR8(g_m68k.d[7], 0xfc);
    M68K_OR8(g_m68k.d[7], 0xc);
    M68K_OR8(g_m68k.d[7], 0x1c);
    M68K_OR8(g_m68k.d[7], 0x2c);
    M68K_OR8(g_m68k.d[7], 0x3c);
    M68K_OR8(g_m68k.d[7], 0x4c);
    M68K_OR8(g_m68k.d[7], 0x5c);
    M68K_OR8(g_m68k.d[7], 0x6c);
    M68K_OR8(g_m68k.d[7], 0x7c);
    M68K_OR8(g_m68k.d[7], 0x8c);
    M68K_OR8(g_m68k.d[7], 0x9c);
    M68K_OR8(g_m68k.d[7], 0xac);
    M68K_OR8(g_m68k.d[7], 0xbc);
    M68K_OR8(g_m68k.d[7], 0xcc);
    M68K_OR8(g_m68k.d[7], 0xdc);
    M68K_OR8(g_m68k.d[7], 0xec);
    M68K_OR8(g_m68k.d[7], 0xfc);
    M68K_OR8(g_m68k.d[7], 0xc);
    M68K_OR8(g_m68k.d[7], 0x1c);
    /* WARNING: function did not end with RTS */
}
