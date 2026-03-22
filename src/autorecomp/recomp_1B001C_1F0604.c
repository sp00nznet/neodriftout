/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $1B001C - $1F0604 */
/* Functions: 27 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

/* $1B001C-$1B0020  (2 instructions, 4 bytes) */
void jt_1B001C(void) {
    M68K_OR16(g_m68k.d[7], g_m68k.d[1]);
    M68K_OR8(g_m68k.d[1], _predec8(0));
    /* WARNING: function did not end with RTS */
}

/* $1B0020-$1B002C  (6 instructions, 12 bytes) */
void jt_1B0020(void) {
    /* TODO $1B0020: dc.w $8f41  [8F 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $1B0024: dc.w $8f41  [8F 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_SUB16(g_m68k.d[0], g_m68k.d[1]);
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $1B011E-$1B0122  (2 instructions, 4 bytes) */
void jt_1B011E(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $1B7380-$1B7384  (2 instructions, 4 bytes) */
void jt_1B7380(void) {
    M68K_OR16(g_m68k.d[4], _predec16(5));
    M68K_OR8(g_m68k.d[5], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $1B9400-$1B9424  (14 instructions, 36 bytes) */
void jt_1B9400(void) {
    M68K_OR16(g_m68k.d[3], bus_read16(0x008B00));
    M68K_OR32(g_m68k.d[3], g_m68k.d[0]);
    /* TODO $1B9406: sbcd.b d0, d5  [8B 00] */
    M68K_OR16(g_m68k.d[6], bus_read16(g_m68k.a[1]));
    /* TODO $1B940A: sbcd.b d0, d5  [8B 00] */
    M68K_OR16(g_m68k.d[6], _predec16(1));
    /* TODO $1B940E: sbcd.b d0, d5  [8B 00] */
    M68K_OR16(g_m68k.d[6], bus_read16(g_m68k.a[1] + 0 + (int32_t)g_m68k.a[0] * 2));
    M68K_OR16(g_m68k.d[6], 0x8b00);
    M68K_DIVS(g_m68k.d[5], bus_read16(g_m68k.a[2]));
    M68K_OR8(g_m68k.d[6], g_m68k.d[0]);
    M68K_DIVS(g_m68k.d[5], _predec16(0));
    M68K_OR8(g_m68k.d[6], g_m68k.d[0]);
    M68K_DIVS(g_m68k.d[5], bus_read16(g_m68k.a[7] + (-0x7400)));
    /* WARNING: function did not end with RTS */
}

/* $1BFEE2-$1BFF0C  (15 instructions, 42 bytes) */
void jt_1BFEE2(void) {
    M68K_OR8(g_m68k.d[5], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[3], bus_read8(g_m68k.a[3] + 0 + (int32_t)g_m68k.a[0] * 2));
    M68K_OR32(g_m68k.d[3], bus_read32(g_m68k.a[4] + 0 + (int32_t)g_m68k.a[0] * 2));
    M68K_OR8(g_m68k.d[3], bus_read8(g_m68k.a[3] + 0 + (int32_t)g_m68k.a[0] * 2));
    M68K_OR8(g_m68k.d[3], bus_read8(g_m68k.a[1] + (-0x7600)));
    M68K_OR8(g_m68k.d[3], bus_read8(g_m68k.a[3] + 0 + (int32_t)g_m68k.a[0] * 2));
    M68K_OR8(g_m68k.d[3], g_m68k.d[7]);
    M68K_OR8(g_m68k.d[5], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[3], bus_read8(g_m68k.a[6]));
    M68K_OR8(g_m68k.d[5], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[0]; uint16_t _tmp = bus_read16(_ea); M68K_OR16(_tmp, g_m68k.d[3]); bus_write16(_ea, _tmp); }
    M68K_OR8(g_m68k.d[5], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[2]; uint16_t _tmp = bus_read16(_ea); M68K_OR16(_tmp, g_m68k.d[3]); bus_write16(_ea, _tmp); }
    M68K_OR8(g_m68k.d[5], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[5] + (-0x7600)); uint16_t _tmp = bus_read16(_ea); M68K_OR16(_tmp, g_m68k.d[3]); bus_write16(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $1C0040-$1C0050  (4 instructions, 16 bytes) */
void jt_1C0040(void) {
    M68K_SUB32(g_m68k.d[3], bus_read32(g_m68k.a[3] + (-0x7600)));
    M68K_SUB32(g_m68k.d[3], bus_read32(g_m68k.a[7] + (-0x7600)));
    M68K_SUB32(g_m68k.d[3], bus_read32(g_m68k.a[4] + 0 + (int32_t)g_m68k.a[0] * 2));
    M68K_SUB32(g_m68k.d[3], bus_read32(g_m68k.a[7] + 0 + (int32_t)g_m68k.a[0] * 2));
    /* WARNING: function did not end with RTS */
}

/* $1C0800-$1C0808  (4 instructions, 8 bytes) */
void jt_1C0800(void) {
    M68K_OR8(g_m68k.d[4], _predec8(3));
    /* TODO $1C0802: sbcd.b d3, d5  [8B 03] */
    g_m68k.a[0] -= g_m68k.a[2];
    /* TODO $1C0806: sbcd.b d3, d5  [8B 03] */
    /* WARNING: function did not end with RTS */
}

/* $1C0C40-$1C0C50  (5 instructions, 16 bytes) */
void jt_1C0C40(void) {
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[5], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[0] + (-0x7600)); uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[5] + (-0x7600)); uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[3] + 0 + (int32_t)g_m68k.a[0] * 2); uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $1C2860-$1C2878  (8 instructions, 24 bytes) */
void jt_1C2860(void) {
    M68K_SUB8(g_m68k.d[5], bus_read8(g_m68k.a[4] + (-0x7900)));
    M68K_SUB8(g_m68k.d[5], bus_read8(g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 8));
    M68K_SUB8(g_m68k.d[5], bus_read8(0x8A009A3E));
    M68K_OR8(g_m68k.d[5], g_m68k.d[0]);
    M68K_SUB16(g_m68k.d[5], g_m68k.d[6]);
    /* TODO $1C2872: sbcd.b d0, d3  [87 00] */
    { uint32_t _ea = g_m68k.a[7]; uint32_t _tmp = bus_read32(_ea); M68K_OR32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    M68K_OR8(g_m68k.d[5], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $1C3020-$1C3028  (2 instructions, 8 bytes) */
void jt_1C3020(void) {
    M68K_OR8(g_m68k.d[3], bus_read8(g_m68k.a[2] + (-0x7600)));
    M68K_OR8(g_m68k.d[3], bus_read8(g_m68k.a[2] + 0 + (int32_t)g_m68k.a[0] * 2));
    /* WARNING: function did not end with RTS */
}

/* $1D001E-$1D0020  (1 instructions, 2 bytes) */
void jt_1D001E(void) {
    M68K_OR8(g_m68k.d[5], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $1D00B8-$1D00C4  (3 instructions, 12 bytes) */
void jt_1D00B8(void) {
    M68K_OR16(g_m68k.d[3], bus_read16(g_m68k.a[2] + (-0x7f00)));
    M68K_OR16(g_m68k.d[3], bus_read16(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.a[0]));
    M68K_OR16(g_m68k.d[3], bus_read16(g_m68k.a[7] + 0 + (int32_t)g_m68k.a[0] * 2));
    /* WARNING: function did not end with RTS */
}

/* $1D73C0-$1D73DC  (9 instructions, 28 bytes) */
void jt_1D73C0(void) {
    { uint32_t _ea = g_m68k.a[5]; uint32_t _tmp = bus_read32(_ea); M68K_SUB32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    M68K_OR8(g_m68k.d[5], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[4] + (-0x7600)); uint32_t _tmp = bus_read32(_ea); M68K_SUB32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    M68K_SUB16(g_m68k.d[2], bus_read16(g_m68k.a[1] + (-0x7600)));
    M68K_SUB16(g_m68k.d[2], bus_read16(g_m68k.a[3] + 0 + (int32_t)g_m68k.a[0] * 2));
    M68K_SUBX32(g_m68k.d[0], g_m68k.d[2]);
    M68K_OR8(g_m68k.d[5], g_m68k.d[1]);
    { uint32_t _ea = 0x8A00867C; uint32_t _tmp = bus_read32(_ea); M68K_SUB32(_tmp, g_m68k.d[3]); bus_write32(_ea, _tmp); }
    /* TODO $1D73DA: sbcd.b d2, d5  [8B 02] */
    /* WARNING: function did not end with RTS */
}

/* $1D9400-$1D9408  (3 instructions, 8 bytes) */
void jt_1D9400(void) {
    M68K_OR8(g_m68k.d[3], bus_read8(g_m68k.a[3] + 0 + (int32_t)g_m68k.a[0] * 2));
    M68K_DIVU(g_m68k.d[3], g_m68k.d[7]);
    M68K_OR8(g_m68k.d[5], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $1E0000-$1E0010  (7 instructions, 16 bytes) */
void jt_1E0000(void) {
    { uint16_t _mv = (uint16_t)(g_m68k.a[6]); bus_write16(g_m68k.a[0] + 0x3 + (int32_t)g_m68k.a[1], _mv); M68K_TST16(_mv); }
    M68K_CMP32(g_m68k.a[1], _predec32(4));
    /* TODO $1E0006: sbcd.b d3, d0  [81 03] */
    M68K_CMP32(g_m68k.a[1], _postinc32(5));
    /* TODO $1E000A: sbcd.b d3, d0  [81 03] */
    M68K_CMP32(g_m68k.a[1], bus_read32(g_m68k.a[6]));
    /* TODO $1E000E: sbcd.b d3, d0  [81 03] */
    /* WARNING: function did not end with RTS */
}

/* $1E0080-$1E00A0  (13 instructions, 32 bytes) */
void jt_1E0080(void) {
    M68K_SUBX32(g_m68k.d[0], g_m68k.d[2]);
    M68K_OR8(g_m68k.d[5], g_m68k.d[1]);
    M68K_SUB32(g_m68k.d[2], g_m68k.d[2]);
    M68K_OR8(g_m68k.d[5], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[7] + (-0x7600)); uint32_t _tmp = bus_read32(_ea); M68K_SUB32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[1], bus_read8(g_m68k.a[4] + 0 + (int32_t)g_m68k.a[0] * 2));
    M68K_SUBX32(g_m68k.d[0], g_m68k.d[2]);
    M68K_OR8(g_m68k.d[5], g_m68k.d[1]);
    M68K_SUB16(g_m68k.d[1], g_m68k.d[2]);
    M68K_OR8(g_m68k.d[5], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[2], g_m68k.d[3]);
    M68K_OR8(g_m68k.d[3], g_m68k.d[0]);
    { uint16_t _mv = (uint16_t)(_postinc16(1)); bus_write16(0x008600, _mv); M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $1E13FC-$1E1438  (26 instructions, 60 bytes) */
void jt_1E13FC(void) {
    M68K_OR8(g_m68k.d[4], g_m68k.d[7]);
    /* TODO $1E13FE: sbcd.b d3, d0  [81 03] */
    M68K_SUB32(g_m68k.d[7], bus_read32(0x1d9b02));
    g_m68k.a[7] -= (int16_t)(uint16_t)(g_m68k.d[3]);
    /* TODO $1E1406: sbcd.b d0, d3  [87 00] */
    g_m68k.a[7] -= (int16_t)(uint16_t)(g_m68k.a[3]);
    /* TODO $1E140A: sbcd.b d0, d3  [87 00] */
    g_m68k.a[7] -= (int16_t)(uint16_t)(bus_read16(g_m68k.a[4]));
    /* TODO $1E140E: sbcd.b d0, d3  [87 00] */
    g_m68k.a[7] -= (int16_t)(uint16_t)(_postinc16(7));
    /* TODO $1E1412: sbcd.b d0, d3  [87 00] */
    g_m68k.a[7] -= (int16_t)(uint16_t)(bus_read16(g_m68k.a[1] + (-0x7900)));
    M68K_CMP8(g_m68k.d[3], bus_read8(g_m68k.a[4] + (-0x7500)));
    M68K_CMP8(g_m68k.d[3], bus_read8(g_m68k.a[7] + 0 + (int32_t)g_m68k.a[0] * 2));
    M68K_CMP16(g_m68k.d[3], g_m68k.d[3]);
    /* TODO $1E1422: sbcd.b d0, d5  [8B 00] */
    M68K_CMP16(g_m68k.d[3], g_m68k.a[7]);
    /* TODO $1E1426: sbcd.b d0, d5  [8B 00] */
    M68K_OR8(g_m68k.d[4], _postinc8(7));
    /* TODO $1E142A: sbcd.b d0, d5  [8B 00] */
    M68K_OR8(g_m68k.d[4], _predec8(5));
    /* TODO $1E142E: sbcd.b d0, d5  [8B 00] */
    M68K_OR8(g_m68k.d[4], _postinc8(7));
    /* TODO $1E1432: sbcd.b d3, d5  [8B 03] */
    M68K_OR8(g_m68k.d[4], bus_read8(g_m68k.a[4]));
    /* TODO $1E1436: sbcd.b d3, d5  [8B 03] */
    /* WARNING: function did not end with RTS */
}

/* $1E60CC-$1E6148  (42 instructions, 124 bytes) */
void jt_1E60CC(void) {
    M68K_OR8(g_m68k.d[3], bus_read8(g_m68k.a[5]));
    M68K_OR8(g_m68k.d[5], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[3], _predec8(4));
    M68K_OR8(g_m68k.d[5], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[3], bus_read8(g_m68k.a[4] + (-0x7600)));
    { uint32_t _ea = (g_m68k.a[7] + 0 + (int32_t)g_m68k.a[0] * 2); uint32_t _tmp = bus_read32(_ea); M68K_OR32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    M68K_DIVS(g_m68k.d[6], g_m68k.d[5]);
    /* TODO $1E60DE: sbcd.b d0, d5  [8B 00] */
    M68K_OR32(g_m68k.d[3], bus_read32(g_m68k.a[2] + 0 + (int32_t)g_m68k.a[0] * 2));
    M68K_OR32(g_m68k.d[3], g_m68k.d[0]);
    /* TODO $1E60E6: sbcd.b d0, d5  [8B 00] */
    M68K_OR16(g_m68k.d[3], /* UNHANDLED_READ: ([$1e60eapc, a0.l * 2], $86788b02) */ 0);
    /* TODO $1E60F0: cmpm.b (a2)+, (a4)+  [B9 0A] */
    /* TODO $1E60F2: sbcd.b d1, d0  [81 01] */
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[5], g_m68k.d[1]);
    M68K_CMP32(g_m68k.a[4], bus_read32(g_m68k.a[4] + (-0x7600)));
    M68K_OR8(g_m68k.d[3], bus_read8(g_m68k.a[3] + 0 + (int32_t)g_m68k.a[0] * 2));
    M68K_OR8(g_m68k.d[3], bus_read8(g_m68k.a[1] + (-0x7600)));
    M68K_OR8(g_m68k.d[3], bus_read8(g_m68k.a[3] + 0 + (int32_t)g_m68k.a[0] * 2));
    M68K_OR8(g_m68k.d[3], g_m68k.d[7]);
    M68K_OR8(g_m68k.d[5], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[3], bus_read8(g_m68k.a[6]));
    M68K_OR8(g_m68k.d[5], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[3], _predec8(5));
    M68K_OR8(g_m68k.d[5], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[3], bus_read8(g_m68k.a[3] + 0 + (int32_t)g_m68k.a[0] * 2));
    { uint32_t _ea = 0x008B00; uint32_t _tmp = bus_read32(_ea); M68K_OR32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    M68K_DIVS(g_m68k.d[6], g_m68k.d[6]);
    /* TODO $1E611E: sbcd.b d0, d5  [8B 00] */
    M68K_OR32(g_m68k.d[3], bus_read32(g_m68k.a[3] + 0 + (int32_t)g_m68k.a[0] * 2));
    M68K_OR32(g_m68k.d[3], g_m68k.d[1]);
    /* TODO $1E6126: sbcd.b d0, d5  [8B 00] */
    M68K_OR16(g_m68k.d[3], bus_read16(0x1dec2d));
    M68K_OR16(g_m68k.d[3], bus_read16(0x8B02B84A));
    /* TODO $1E6132: sbcd.b d3, d0  [81 03] */
    /* TODO $1E6134: cmpm.b (a3)+, (a4)+  [B9 0B] */
    M68K_OR8(g_m68k.d[5], g_m68k.d[1]);
    M68K_CMP32(g_m68k.a[4], bus_read32(g_m68k.a[5] + (-0x7600)));
    M68K_CMP32(g_m68k.a[4], bus_read32(g_m68k.a[7] + (-0x7600)));
    M68K_OR8(g_m68k.d[3], bus_read8(g_m68k.a[0] + (-0x7600)));
    M68K_OR8(g_m68k.d[3], bus_read8(g_m68k.a[4] + 0 + (int32_t)g_m68k.a[0] * 2));
    /* WARNING: function did not end with RTS */
}

/* $1E6700-$1E6720  (12 instructions, 32 bytes) */
void jt_1E6700(void) {
    g_m68k.a[2] -= (int16_t)(uint16_t)(bus_read16(g_m68k.a[1] + 0 + (int32_t)g_m68k.a[0] * 2));
    g_m68k.a[2] -= (int16_t)(uint16_t)(bus_read16(g_m68k.a[5] + 0 + (int32_t)g_m68k.a[0] * 2));
    g_m68k.a[2] -= (int16_t)(uint16_t)(bus_read16(0x8B0094FD));
    /* TODO $1E670E: sbcd.b d0, d5  [8B 00] */
    M68K_SUBX8(g_m68k.d[2], g_m68k.d[1]);
    /* TODO $1E6712: sbcd.b d0, d5  [8B 00] */
    M68K_SUB8(g_m68k.d[2], g_m68k.d[6]);
    /* TODO $1E6716: sbcd.b d2, d5  [8B 02] */
    { uint32_t _ea = g_m68k.a[0]; uint32_t _tmp = bus_read32(_ea); M68K_SUBX32(_tmp, _predec32(0)); bus_write32(_ea, _tmp); }
    /* TODO $1E671A: sbcd.b d3, d5  [8B 03] */
    M68K_SUBX32(g_m68k.d[0], g_m68k.d[3]);
    /* TODO $1E671E: sbcd.b d3, d5  [8B 03] */
    /* WARNING: function did not end with RTS */
}

/* $1E73E0-$1E7400  (11 instructions, 32 bytes) */
void jt_1E73E0(void) {
    M68K_OR8(g_m68k.d[4], bus_read8(g_m68k.a[3]));
    /* TODO $1E73E2: sbcd.b d1, d5  [8B 01] */
    M68K_DIVS(g_m68k.d[7], bus_read16(0x8B008E68));
    /* TODO $1E73EA: sbcd.b d1, d5  [8B 01] */
    M68K_SUB8(g_m68k.d[0], g_m68k.d[3]);
    /* TODO $1E73EE: sbcd.b d0, d5  [8B 00] */
    M68K_OR8(g_m68k.d[4], bus_read8(g_m68k.a[7] + (-0x74ff)));
    M68K_SUB8(g_m68k.d[0], _postinc8(1));
    /* TODO $1E73F6: sbcd.b d0, d5  [8B 00] */
    M68K_SUB8(g_m68k.d[0], bus_read8(g_m68k.a[1] + (-0x7500)));
    M68K_SUB8(g_m68k.d[0], bus_read8(0x008B00));
    /* WARNING: function did not end with RTS */
}

/* $1E74E0-$1E7500  (13 instructions, 32 bytes) */
void jt_1E74E0(void) {
    M68K_OR32(g_m68k.d[4], g_m68k.d[2]);
    M68K_OR8(g_m68k.d[5], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[4], /* UNHANDLED_READ: ([a1, a0.l * 2]) */ 0);
    M68K_OR16(g_m68k.d[7], _predec16(0));
    /* TODO $1E74EA: sbcd.b d1, d5  [8B 01] */
    M68K_OR8(g_m68k.d[4], _predec8(3));
    /* TODO $1E74EE: sbcd.b d1, d5  [8B 01] */
    M68K_SUB8(g_m68k.d[0], bus_read8(g_m68k.a[0]));
    /* TODO $1E74F2: sbcd.b d0, d5  [8B 00] */
    M68K_SUB8(g_m68k.d[0], _postinc8(5));
    /* TODO $1E74F6: sbcd.b d0, d5  [8B 00] */
    M68K_SUB8(g_m68k.d[0], bus_read8(g_m68k.a[5] + (-0x7500)));
    M68K_SUB8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $1E9400-$1E9408  (3 instructions, 8 bytes) */
void jt_1E9400(void) {
    { uint32_t _ea = g_m68k.a[4]; uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[0]); bus_write16(_ea, _tmp); }
    /* TODO $1E9402: sbcd.b d0, d3  [87 00] */
    { uint32_t _ea = (g_m68k.a[6] + (-0x7600)); uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[0]); bus_write16(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $1F0000-$1F0004  (2 instructions, 4 bytes) */
void jt_1F0000(void) {
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[3], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $1F0020-$1F0026  (3 instructions, 6 bytes) */
void jt_1F0020(void) {
    M68K_OR8(g_m68k.d[3], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* TODO $1F0024: dc.w $f008  [F0 08] */
    /* WARNING: function did not end with RTS */
}

/* $1F00A0-$1F00A4  (2 instructions, 4 bytes) */
void jt_1F00A0(void) {
    M68K_OR8(g_m68k.d[3], bus_read8(g_m68k.a[0]));
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $1F0600-$1F0604  (2 instructions, 4 bytes) */
void jt_1F0600(void) {
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    /* TODO $1F0602: dc.w $8340  [83 40] */
    /* WARNING: function did not end with RTS */
}
