/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $067888 - $06FD9C */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

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

/* $06FC2C-$06FC3C  (4 instructions, 16 bytes) */
void jt_06FC2C(void) {
    M68K_OR8(g_m68k.d[7], 0x2c);
    M68K_OR8(g_m68k.d[7], 0x34);
    M68K_OR8(g_m68k.d[7], 0x3c);
    M68K_OR8(g_m68k.d[7], 0x44);
    /* WARNING: function did not end with RTS */
}

/* $06FC3C-$06FC4C  (4 instructions, 16 bytes) */
void jt_06FC3C(void) {
    M68K_OR8(g_m68k.d[7], 0x4c);
    M68K_OR8(g_m68k.d[7], 0x54);
    M68K_OR8(g_m68k.d[7], 0x5c);
    M68K_OR8(g_m68k.d[7], 0x64);
    /* WARNING: function did not end with RTS */
}

/* $06FC4C-$06FC5C  (4 instructions, 16 bytes) */
void jt_06FC4C(void) {
    M68K_OR8(g_m68k.d[7], 0x6c);
    M68K_OR8(g_m68k.d[7], 0x74);
    M68K_OR8(g_m68k.d[7], 0x7c);
    M68K_OR8(g_m68k.d[7], 0x84);
    /* WARNING: function did not end with RTS */
}

/* $06FC5C-$06FC6C  (4 instructions, 16 bytes) */
void jt_06FC5C(void) {
    M68K_OR8(g_m68k.d[7], 0x8c);
    M68K_OR8(g_m68k.d[7], 0x94);
    M68K_OR8(g_m68k.d[7], 0x9c);
    M68K_OR8(g_m68k.d[7], 0xa4);
    /* WARNING: function did not end with RTS */
}

/* $06FC6C-$06FC7C  (4 instructions, 16 bytes) */
void jt_06FC6C(void) {
    M68K_OR8(g_m68k.d[7], 0xbc);
    M68K_OR8(g_m68k.d[7], 0xc4);
    M68K_OR8(g_m68k.d[7], 0xcc);
    M68K_OR8(g_m68k.d[7], 0xf0);
    /* WARNING: function did not end with RTS */
}

/* $06FC7C-$06FC8C  (4 instructions, 16 bytes) */
void jt_06FC7C(void) {
    M68K_OR8(g_m68k.d[7], 0x18);
    M68K_OR8(g_m68k.d[7], 0x20);
    M68K_OR8(g_m68k.d[7], 0x28);
    M68K_OR8(g_m68k.d[7], 0x58);
    /* WARNING: function did not end with RTS */
}

/* $06FC8C-$06FC9C  (4 instructions, 16 bytes) */
void jt_06FC8C(void) {
    M68K_OR8(g_m68k.d[7], 0x82);
    M68K_OR8(g_m68k.d[7], 0x8a);
    M68K_OR8(g_m68k.d[7], 0x92);
    M68K_OR8(g_m68k.d[7], 0xac);
    /* WARNING: function did not end with RTS */
}

/* $06FC9C-$06FCAC  (4 instructions, 16 bytes) */
void jt_06FC9C(void) {
    M68K_OR8(g_m68k.d[7], 0xb4);
    M68K_OR8(g_m68k.d[7], 0xbc);
    M68K_OR8(g_m68k.d[7], 0xc4);
    M68K_OR8(g_m68k.d[7], 0xcc);
    /* WARNING: function did not end with RTS */
}

/* $06FCAC-$06FCBC  (4 instructions, 16 bytes) */
void jt_06FCAC(void) {
    M68K_OR8(g_m68k.d[7], 0xd4);
    M68K_OR8(g_m68k.d[7], 0xdc);
    M68K_OR8(g_m68k.d[7], 0xe4);
    M68K_OR8(g_m68k.d[7], 0xec);
    /* WARNING: function did not end with RTS */
}

/* $06FCBC-$06FCCC  (4 instructions, 16 bytes) */
void jt_06FCBC(void) {
    M68K_OR8(g_m68k.d[7], 0xc);
    M68K_OR8(g_m68k.d[7], 0x14);
    M68K_OR8(g_m68k.d[7], 0x1c);
    M68K_OR8(g_m68k.d[7], 0x38);
    /* WARNING: function did not end with RTS */
}

/* $06FCCC-$06FCDC  (4 instructions, 16 bytes) */
void jt_06FCCC(void) {
    M68K_OR8(g_m68k.d[7], 0x60);
    M68K_OR8(g_m68k.d[7], 0x68);
    M68K_OR8(g_m68k.d[7], 0x70);
    M68K_OR8(g_m68k.d[7], 0xa0);
    /* WARNING: function did not end with RTS */
}

/* $06FCDC-$06FCEC  (4 instructions, 16 bytes) */
void jt_06FCDC(void) {
    M68K_OR8(g_m68k.d[7], 0xc2);
    M68K_OR8(g_m68k.d[7], 0xca);
    M68K_OR8(g_m68k.d[7], 0xd2);
    M68K_OR8(g_m68k.d[7], 0xf4);
    /* WARNING: function did not end with RTS */
}

/* $06FCEC-$06FCFC  (4 instructions, 16 bytes) */
void jt_06FCEC(void) {
    M68K_OR8(g_m68k.d[7], 0xfc);
    M68K_OR8(g_m68k.d[7], 0x4);
    M68K_OR8(g_m68k.d[7], 0xc);
    M68K_OR8(g_m68k.d[7], 0x16);
    /* WARNING: function did not end with RTS */
}

/* $06FCFC-$06FD0C  (4 instructions, 16 bytes) */
void jt_06FCFC(void) {
    M68K_OR8(g_m68k.d[7], 0x58);
    M68K_OR8(g_m68k.d[7], 0x6a);
    M68K_OR8(g_m68k.d[7], 0x82);
    M68K_OR8(g_m68k.d[7], 0x9e);
    /* WARNING: function did not end with RTS */
}

/* $06FD0C-$06FD1C  (4 instructions, 16 bytes) */
void jt_06FD0C(void) {
    M68K_OR8(g_m68k.d[7], 0xa6);
    M68K_OR8(g_m68k.d[7], 0xbc);
    M68K_OR8(g_m68k.d[7], 0xce);
    M68K_OR8(g_m68k.d[7], 0xd6);
    /* WARNING: function did not end with RTS */
}

/* $06FD1C-$06FD2C  (4 instructions, 16 bytes) */
void jt_06FD1C(void) {
    M68K_OR8(g_m68k.d[7], 0xf8);
    M68K_OR8(g_m68k.d[7], 0x0);
    M68K_OR8(g_m68k.d[7], 0x8);
    M68K_OR8(g_m68k.d[7], 0x4c);
    /* WARNING: function did not end with RTS */
}

/* $06FD2C-$06FD3C  (4 instructions, 16 bytes) */
void jt_06FD2C(void) {
    M68K_OR8(g_m68k.d[7], 0x56);
    M68K_OR8(g_m68k.d[7], 0x5e);
    M68K_OR8(g_m68k.d[7], 0x66);
    M68K_OR8(g_m68k.d[7], 0x6e);
    /* WARNING: function did not end with RTS */
}

/* $06FD3C-$06FD4C  (4 instructions, 16 bytes) */
void jt_06FD3C(void) {
    M68K_OR8(g_m68k.d[7], 0x76);
    M68K_OR8(g_m68k.d[7], 0x7e);
    M68K_OR8(g_m68k.d[7], 0x86);
    M68K_OR8(g_m68k.d[7], 0x8e);
    /* WARNING: function did not end with RTS */
}

/* $06FD4C-$06FD5C  (4 instructions, 16 bytes) */
void jt_06FD4C(void) {
    M68K_OR8(g_m68k.d[7], 0x96);
    M68K_OR8(g_m68k.d[7], 0xae);
    M68K_OR8(g_m68k.d[7], 0xd2);
    M68K_OR8(g_m68k.d[7], 0xea);
    /* WARNING: function did not end with RTS */
}

/* $06FD5C-$06FD6C  (4 instructions, 16 bytes) */
void jt_06FD5C(void) {
    M68K_OR8(g_m68k.d[7], 0xf2);
    M68K_OR8(g_m68k.d[7], 0x1a);
    M68K_OR8(g_m68k.d[7], 0x32);
    M68K_OR8(g_m68k.d[7], 0x4a);
    /* WARNING: function did not end with RTS */
}

/* $06FD6C-$06FD7C  (4 instructions, 16 bytes) */
void jt_06FD6C(void) {
    M68K_OR8(g_m68k.d[7], 0x72);
    M68K_OR8(g_m68k.d[7], 0x7c);
    M68K_OR8(g_m68k.d[7], 0x94);
    M68K_OR8(g_m68k.d[7], 0xb8);
    /* WARNING: function did not end with RTS */
}

/* $06FD7C-$06FD8C  (4 instructions, 16 bytes) */
void jt_06FD7C(void) {
    M68K_OR8(g_m68k.d[7], 0xd0);
    M68K_OR8(g_m68k.d[7], 0xec);
    M68K_OR8(g_m68k.d[7], 0xfa);
    M68K_OR8(g_m68k.d[7], 0x14);
    /* WARNING: function did not end with RTS */
}

/* $06FD8C-$06FD9C  (4 instructions, 16 bytes) */
void jt_06FD8C(void) {
    M68K_OR8(g_m68k.d[7], 0x3e);
    M68K_OR8(g_m68k.d[7], 0x5a);
    M68K_OR8(g_m68k.d[7], 0x8a);
    M68K_OR8(g_m68k.d[7], 0xba);
    /* WARNING: function did not end with RTS */
}
