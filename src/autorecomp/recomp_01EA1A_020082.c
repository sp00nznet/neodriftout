/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $01EA1A - $020082 */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

/* $01EA1A-$01EA36  (7 instructions, 28 bytes) */
void jt_01EA1A(void) {
    M68K_OR8(g_m68k.d[1], 0x36);
    M68K_OR8(g_m68k.d[1], 0x7e);
    M68K_OR8(g_m68k.d[1], 0xc6);
    M68K_OR8(g_m68k.d[1], 0xe);
    M68K_OR8(g_m68k.d[1], 0x56);
    M68K_OR8(g_m68k.d[1], 0x9e);
    M68K_OR8(g_m68k.d[1], 0xe6);
    /* WARNING: function did not end with RTS */
}

/* $01EA36-$01EA42  (4 instructions, 12 bytes) */
void jt_01EA36(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _b = 1u << ((g_m68k.d[4]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    M68K_OR8(g_m68k.d[0], 0x20);
    g_m68k.d[0] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $01EA7E-$01EABA  (18 instructions, 60 bytes) */
void jt_01EA7E(void) {
    M68K_CMP32(bus_read32(g_m68k.a[0] + 0x2000), 0x5120);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_BTST(g_m68k.d[2], g_m68k.d[6]);
    M68K_OR8(g_m68k.d[0], 0x4e);
    M68K_ADD8(g_m68k.d[0], 0x2);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[4]; uint8_t _b = 1u << ((g_m68k.d[6]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    M68K_OR8(g_m68k.d[0], 0x20);
    /* TODO $01EA9C: dc.w $4100  [41 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = (g_m68k.a[6] + 0 + (int16_t)(uint16_t)g_m68k.d[0]); uint8_t _b = 1u << ((g_m68k.d[6]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v & ~ _b); }
    /* TRAP #0x3 */
    /* TODO $01EAA8: dc.w $4300  [43 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $01EAAE: dc.w $e10  [0E 10] */
    M68K_OR8(g_m68k.d[0], 0x53);
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[4]);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $01EAC6-$01EB02  (20 instructions, 60 bytes) */
void jt_01EAC6(void) {
    /* TODO $01EAC6: dc.w $ed8  [0E D8] */
    M68K_OR8(g_m68k.d[0], 0x20);
    g_m68k.d[0] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_BTST(bus_read8(g_m68k.a[6]), g_m68k.d[7]);
    M68K_OR8(g_m68k.d[0], 0x4e);
    M68K_ADD8(g_m68k.d[0], 0x2);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[4]; uint8_t _b = 1u << ((g_m68k.d[7]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    M68K_OR8(g_m68k.d[0], 0x20);
    /* TODO $01EAE4: dc.w $4100  [41 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = (g_m68k.a[2] + 0x0); uint8_t _b = 1u << ((g_m68k.d[7]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v & ~ _b); }
    /* TRAP #0x3 */
    /* TODO $01EAF0: dc.w $4300  [43 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = (g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0]); uint8_t _b = 1u << ((g_m68k.d[7]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    { uint32_t _ea = g_m68k.a[3]; uint16_t _tmp = bus_read16(_ea); M68K_NEG16(_tmp); bus_write16(_ea, _tmp); }
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[4]);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $01EB0E-$01EB26  (7 instructions, 24 bytes) */
void jt_01EB0E(void) {
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[0])); bus_write8(0x000000, _mv); M68K_TST8(_mv); }
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, 0x8); bus_write8(_ea, _tmp); }
    g_m68k.d[0] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[6] + 0x0)); bus_write8(0x00554E, _mv); M68K_TST8(_mv); }
    M68K_ADD8(g_m68k.d[0], 0x2);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $01EB56-$01EB7A  (12 instructions, 36 bytes) */
void jt_01EB56(void) {
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[4]))); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_OR8(g_m68k.d[0], 0x20);
    g_m68k.d[0] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[0] + 0x0))); M68K_TST8((uint8_t)g_m68k.d[2]);
    g_m68k.a[6] -= 0x2;
    M68K_ADD8(g_m68k.d[0], 0x2);
    M68K_OR8(g_m68k.d[0], 0x0);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(0x0)); M68K_TST8((uint8_t)g_m68k.d[2]);
    /* TODO $01EB72: dc.w $4120  [41 20] */
    /* TODO $01EB74: dc.w $4100  [41 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $01EB9E-$01EBDA  (15 instructions, 60 bytes) */
void jt_01EB9E(void) {
    { uint8_t _mv = (uint8_t)(bus_read8(0x000000)); g_m68k.a[1] -= 1; bus_write8(g_m68k.a[1], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, 0x8); bus_write8(_ea, _tmp); }
    g_m68k.d[0] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.d[0])); bus_write8(g_m68k.a[1] + 0x554e, _mv); M68K_TST8(_mv); }
    M68K_ADD8(g_m68k.d[0], 0x2);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0])); bus_write8(g_m68k.a[1] + 0x4100 + (int16_t)(uint16_t)g_m68k.d[4], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[4] + 0x0)); bus_write8(0x4E434300, _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[0] + 0x0))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint32_t _ea = g_m68k.a[3]; uint16_t _tmp = bus_read16(_ea); M68K_NEG16(_tmp); bus_write16(_ea, _tmp); }
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[4]);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $01EBE6-$01EC16  (16 instructions, 48 bytes) */
void jt_01EBE6(void) {
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[3]);
    M68K_OR8(g_m68k.d[0], 0x20);
    g_m68k.d[0] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(_predec8(6))); M68K_TST8((uint8_t)g_m68k.d[3]);
    M68K_OR8(g_m68k.d[0], 0x4e);
    M68K_ADD8(g_m68k.d[0], 0x2);
    M68K_OR8(g_m68k.d[0], 0x0);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST8((uint8_t)g_m68k.d[3]);
    /* TODO $01EC02: dc.w $4120  [41 20] */
    /* TODO $01EC04: dc.w $4100  [41 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(0x1ec0c))); M68K_TST8((uint8_t)g_m68k.d[3]);
    /* TRAP #0x3 */
    /* TODO $01EC10: dc.w $4300  [43 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $01F4A2-$01F4F2  (20 instructions, 80 bytes) */
void jt_01F4A2(void) {
    M68K_OR8(g_m68k.d[1], 0xf2);
    M68K_OR8(g_m68k.d[1], 0x36);
    M68K_OR8(g_m68k.d[1], 0x82);
    M68K_OR8(g_m68k.d[1], 0xbe);
    M68K_OR8(g_m68k.d[1], 0xe2);
    M68K_OR8(g_m68k.d[1], 0x12);
    M68K_OR8(g_m68k.d[1], 0x26);
    M68K_OR8(g_m68k.d[1], 0x52);
    M68K_OR8(g_m68k.d[1], 0x6e);
    M68K_OR8(g_m68k.d[1], 0x8e);
    M68K_OR8(g_m68k.d[1], 0xae);
    M68K_OR8(g_m68k.d[1], 0xd2);
    M68K_OR8(g_m68k.d[1], 0xe2);
    M68K_OR8(g_m68k.d[1], 0xe);
    M68K_OR8(g_m68k.d[1], 0x36);
    M68K_OR8(g_m68k.d[1], 0x62);
    M68K_OR8(g_m68k.d[1], 0x9e);
    M68K_OR8(g_m68k.d[1], 0xe2);
    M68K_OR8(g_m68k.d[1], 0x12);
    M68K_OR8(g_m68k.d[1], 0x46);
    /* WARNING: function did not end with RTS */
}

/* $01F4F2-$01F4FA  (2 instructions, 8 bytes) */
void jt_01F4F2(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x1); bus_write8(_ea, _tmp); }
    M68K_ADD16(g_m68k.d[5], bus_read16(g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 2));
    /* WARNING: function did not end with RTS */
}

/* $01F536-$01F53E  (3 instructions, 8 bytes) */
void jt_01F536(void) {
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x1); bus_write8(_ea, _tmp); }
    /* TODO $01F53A: dc.w $e9d1  [E9 D1] */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $01F612-$01F626  (7 instructions, 20 bytes) */
void jt_01F612(void) {
    M68K_OR8(g_m68k.d[4], 0x1);
    /* TODO $01F616: dc.w $e9d0  [E9 D0] */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_ADD16(g_m68k.d[5], bus_read16(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 2));
    M68K_ADD16(g_m68k.d[5], bus_read16(g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 2));
    /* TODO $01F622: dc.w $e9d1  [E9 D1] */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $01F652-$01F65A  (2 instructions, 8 bytes) */
void jt_01F652(void) {
    M68K_OR8(g_m68k.d[6], 0x1);
    M68K_ADD16(g_m68k.d[5], bus_read16(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[4]));
    /* WARNING: function did not end with RTS */
}

/* $01F66E-$01F676  (3 instructions, 8 bytes) */
void jt_01F66E(void) {
    M68K_OR8(g_m68k.d[7], 0x1);
    /* TODO $01F672: dc.w $e9d4  [E9 D4] */
    /* TODO $01F674: dc.w $4100  [41 00] */
    /* WARNING: function did not end with RTS */
}

/* $01F68E-$01F692  (1 instructions, 4 bytes) */
void jt_01F68E(void) {
    M68K_OR8(g_m68k.d[7], 0x1);
    /* WARNING: function did not end with RTS */
}

/* $01F6D2-$01F6DE  (5 instructions, 12 bytes) */
void jt_01F6D2(void) {
    M68K_OR8(g_m68k.d[3], 0x1);
    /* TODO $01F6D6: dc.w $e9d3  [E9 D3] */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* TODO $01F6DA: dc.w $e9d2  [E9 D2] */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $01F79E-$01F7A2  (1 instructions, 4 bytes) */
void jt_01F79E(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x1); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $01F8F6-$01F946  (20 instructions, 80 bytes) */
void jt_01F8F6(void) {
    M68K_OR8(g_m68k.d[1], 0x46);
    M68K_OR8(g_m68k.d[1], 0x8a);
    M68K_OR8(g_m68k.d[1], 0xce);
    M68K_OR8(g_m68k.d[1], 0x12);
    M68K_OR8(g_m68k.d[1], 0x56);
    M68K_OR8(g_m68k.d[1], 0x9a);
    M68K_OR8(g_m68k.d[1], 0xde);
    M68K_OR8(g_m68k.d[1], 0x22);
    M68K_OR8(g_m68k.d[1], 0x66);
    M68K_OR8(g_m68k.d[1], 0xaa);
    M68K_OR8(g_m68k.d[1], 0xee);
    M68K_OR8(g_m68k.d[1], 0x32);
    M68K_OR8(g_m68k.d[1], 0x76);
    M68K_OR8(g_m68k.d[1], 0xba);
    M68K_OR8(g_m68k.d[1], 0xfe);
    M68K_OR8(g_m68k.d[1], 0x42);
    M68K_OR8(g_m68k.d[1], 0x86);
    M68K_OR8(g_m68k.d[1], 0xca);
    M68K_OR8(g_m68k.d[1], 0xe);
    M68K_OR8(g_m68k.d[1], 0x52);
    /* WARNING: function did not end with RTS */
}

/* $01F946-$01F94A  (1 instructions, 4 bytes) */
void jt_01F946(void) {
    M68K_OR8(g_m68k.d[1], 0x10);
    /* WARNING: function did not end with RTS */
}

/* $01F98A-$01F98E  (1 instructions, 4 bytes) */
void jt_01F98A(void) {
    M68K_OR8(g_m68k.d[1], 0x10);
    /* WARNING: function did not end with RTS */
}

/* $01F9CE-$01F9D2  (1 instructions, 4 bytes) */
void jt_01F9CE(void) {
    M68K_OR8(g_m68k.d[1], 0x10);
    /* WARNING: function did not end with RTS */
}

/* $01FA12-$01FA16  (1 instructions, 4 bytes) */
void jt_01FA12(void) {
    M68K_OR8(g_m68k.d[1], 0x10);
    /* WARNING: function did not end with RTS */
}

/* $01FA56-$01FA5A  (1 instructions, 4 bytes) */
void jt_01FA56(void) {
    M68K_OR8(g_m68k.d[1], 0x10);
    /* WARNING: function did not end with RTS */
}

/* $01FA9A-$01FA9E  (1 instructions, 4 bytes) */
void jt_01FA9A(void) {
    M68K_OR8(g_m68k.d[1], 0x10);
    /* WARNING: function did not end with RTS */
}

/* $01FADE-$01FAE2  (1 instructions, 4 bytes) */
void jt_01FADE(void) {
    M68K_OR8(g_m68k.d[1], 0x10);
    /* WARNING: function did not end with RTS */
}

/* $01FB22-$01FB26  (1 instructions, 4 bytes) */
void jt_01FB22(void) {
    M68K_OR8(g_m68k.d[1], 0x10);
    /* WARNING: function did not end with RTS */
}

/* $01FB66-$01FB6A  (1 instructions, 4 bytes) */
void jt_01FB66(void) {
    M68K_OR8(g_m68k.d[1], 0x10);
    /* WARNING: function did not end with RTS */
}

/* $01FBAA-$01FBAE  (1 instructions, 4 bytes) */
void jt_01FBAA(void) {
    M68K_OR8(g_m68k.d[1], 0x10);
    /* WARNING: function did not end with RTS */
}

/* $01FBEE-$01FC2E  (31 instructions, 64 bytes) */
void jt_01FBEE(void) {
    M68K_OR8(g_m68k.d[1], 0x10);
    /* TODO $01FBF2: dc.w $ede8  [ED E8] */
    /* TODO $01FBF4: dc.w $4d00  [4D 00] */
    /* TODO $01FBF6: dc.w $edf8  [ED F8] */
    /* TODO $01FBF8: dc.w $4d00  [4D 00] */
    M68K_LSR8(g_m68k.d[0], 0x7);
    /* TODO $01FBFC: dc.w $4d00  [4D 00] */
    M68K_ROR8(g_m68k.d[0], 0x7);
    /* TODO $01FC00: dc.w $4d00  [4D 00] */
    M68K_LSR8(g_m68k.d[0], g_m68k.d[7]);
    /* TODO $01FC04: dc.w $4d00  [4D 00] */
    M68K_ROR8(g_m68k.d[0], g_m68k.d[7]);
    /* TODO $01FC08: dc.w $4d00  [4D 00] */
    M68K_LSR16(g_m68k.d[0], 0x7);
    /* TODO $01FC0C: dc.w $4d00  [4D 00] */
    M68K_ROR16(g_m68k.d[0], 0x7);
    /* TODO $01FC10: dc.w $4d00  [4D 00] */
    /* TODO $01FC12: roxr.w #$7, d7  [EE 57] */
    /* TODO $01FC14: dc.w $4d03  [4D 03] */
    M68K_ASR16(g_m68k.d[7], 0x7);
    /* TODO $01FC18: dc.w $4d03  [4D 03] */
    /* TODO $01FC1A: roxr.l #$7, d7  [EE 37] */
    /* TODO $01FC1C: dc.w $4d03  [4D 03] */
    M68K_ASR8(g_m68k.d[7], g_m68k.d[7]);
    /* TODO $01FC20: dc.w $4d03  [4D 03] */
    /* TODO $01FC22: roxr.b #$7, d7  [EE 17] */
    /* TODO $01FC24: dc.w $4d03  [4D 03] */
    M68K_ASR8(g_m68k.d[7], 0x7);
    /* TODO $01FC28: dc.w $4d03  [4D 03] */
    /* TODO $01FC2A: dc.w $edf7  [ED F7] */
    /* TODO $01FC2C: dc.w $4d03  [4D 03] */
    /* WARNING: function did not end with RTS */
}

/* $01FC32-$01FC72  (31 instructions, 64 bytes) */
void jt_01FC32(void) {
    M68K_OR8(g_m68k.d[1], 0x10);
    /* TODO $01FC36: dc.w $ede9  [ED E9] */
    /* TODO $01FC38: dc.w $4d00  [4D 00] */
    /* TODO $01FC3A: dc.w $edf9  [ED F9] */
    /* TODO $01FC3C: dc.w $4d00  [4D 00] */
    M68K_LSR8(g_m68k.d[1], 0x7);
    /* TODO $01FC40: dc.w $4d00  [4D 00] */
    M68K_ROR8(g_m68k.d[1], 0x7);
    /* TODO $01FC44: dc.w $4d00  [4D 00] */
    M68K_LSR8(g_m68k.d[1], g_m68k.d[7]);
    /* TODO $01FC48: dc.w $4d00  [4D 00] */
    M68K_ROR8(g_m68k.d[1], g_m68k.d[7]);
    /* TODO $01FC4C: dc.w $4d00  [4D 00] */
    M68K_LSR16(g_m68k.d[1], 0x7);
    /* TODO $01FC50: dc.w $4d00  [4D 00] */
    M68K_ROR16(g_m68k.d[1], 0x7);
    /* TODO $01FC54: dc.w $4d00  [4D 00] */
    /* TODO $01FC56: roxr.w #$7, d6  [EE 56] */
    /* TODO $01FC58: dc.w $4d03  [4D 03] */
    M68K_ASR16(g_m68k.d[6], 0x7);
    /* TODO $01FC5C: dc.w $4d03  [4D 03] */
    /* TODO $01FC5E: roxr.l #$7, d6  [EE 36] */
    /* TODO $01FC60: dc.w $4d03  [4D 03] */
    M68K_ASR8(g_m68k.d[6], g_m68k.d[7]);
    /* TODO $01FC64: dc.w $4d03  [4D 03] */
    /* TODO $01FC66: roxr.b #$7, d6  [EE 16] */
    /* TODO $01FC68: dc.w $4d03  [4D 03] */
    M68K_ASR8(g_m68k.d[6], 0x7);
    /* TODO $01FC6C: dc.w $4d03  [4D 03] */
    /* TODO $01FC6E: dc.w $edf6  [ED F6] */
    /* TODO $01FC70: dc.w $4d03  [4D 03] */
    /* WARNING: function did not end with RTS */
}

/* $01FC76-$01FCB6  (31 instructions, 64 bytes) */
void jt_01FC76(void) {
    M68K_OR8(g_m68k.d[1], 0x10);
    /* TODO $01FC7A: dc.w $edea  [ED EA] */
    /* TODO $01FC7C: dc.w $4d00  [4D 00] */
    /* TODO $01FC7E: dc.w $edfa  [ED FA] */
    /* TODO $01FC80: dc.w $4d00  [4D 00] */
    M68K_LSR8(g_m68k.d[2], 0x7);
    /* TODO $01FC84: dc.w $4d00  [4D 00] */
    M68K_ROR8(g_m68k.d[2], 0x7);
    /* TODO $01FC88: dc.w $4d00  [4D 00] */
    M68K_LSR8(g_m68k.d[2], g_m68k.d[7]);
    /* TODO $01FC8C: dc.w $4d00  [4D 00] */
    M68K_ROR8(g_m68k.d[2], g_m68k.d[7]);
    /* TODO $01FC90: dc.w $4d00  [4D 00] */
    M68K_LSR16(g_m68k.d[2], 0x7);
    /* TODO $01FC94: dc.w $4d00  [4D 00] */
    M68K_ROR16(g_m68k.d[2], 0x7);
    /* TODO $01FC98: dc.w $4d00  [4D 00] */
    /* TODO $01FC9A: roxr.w #$7, d5  [EE 55] */
    /* TODO $01FC9C: dc.w $4d03  [4D 03] */
    M68K_ASR16(g_m68k.d[5], 0x7);
    /* TODO $01FCA0: dc.w $4d03  [4D 03] */
    /* TODO $01FCA2: roxr.l #$7, d5  [EE 35] */
    /* TODO $01FCA4: dc.w $4d03  [4D 03] */
    M68K_ASR8(g_m68k.d[5], g_m68k.d[7]);
    /* TODO $01FCA8: dc.w $4d03  [4D 03] */
    /* TODO $01FCAA: roxr.b #$7, d5  [EE 15] */
    /* TODO $01FCAC: dc.w $4d03  [4D 03] */
    M68K_ASR8(g_m68k.d[5], 0x7);
    /* TODO $01FCB0: dc.w $4d03  [4D 03] */
    /* TODO $01FCB2: dc.w $edf5  [ED F5] */
    /* TODO $01FCB4: dc.w $4d03  [4D 03] */
    /* WARNING: function did not end with RTS */
}

/* $01FCBA-$01FCFA  (31 instructions, 64 bytes) */
void jt_01FCBA(void) {
    M68K_OR8(g_m68k.d[1], 0x10);
    /* TODO $01FCBE: dc.w $edeb  [ED EB] */
    /* TODO $01FCC0: dc.w $4d00  [4D 00] */
    /* TODO $01FCC2: dc.w $edfb  [ED FB] */
    /* TODO $01FCC4: dc.w $4d00  [4D 00] */
    M68K_LSR8(g_m68k.d[3], 0x7);
    /* TODO $01FCC8: dc.w $4d00  [4D 00] */
    M68K_ROR8(g_m68k.d[3], 0x7);
    /* TODO $01FCCC: dc.w $4d00  [4D 00] */
    M68K_LSR8(g_m68k.d[3], g_m68k.d[7]);
    /* TODO $01FCD0: dc.w $4d00  [4D 00] */
    M68K_ROR8(g_m68k.d[3], g_m68k.d[7]);
    /* TODO $01FCD4: dc.w $4d00  [4D 00] */
    M68K_LSR16(g_m68k.d[3], 0x7);
    /* TODO $01FCD8: dc.w $4d00  [4D 00] */
    M68K_ROR16(g_m68k.d[3], 0x7);
    /* TODO $01FCDC: dc.w $4d00  [4D 00] */
    /* TODO $01FCDE: roxr.w #$7, d4  [EE 54] */
    /* TODO $01FCE0: dc.w $4d03  [4D 03] */
    M68K_ASR16(g_m68k.d[4], 0x7);
    /* TODO $01FCE4: dc.w $4d03  [4D 03] */
    /* TODO $01FCE6: roxr.l #$7, d4  [EE 34] */
    /* TODO $01FCE8: dc.w $4d03  [4D 03] */
    M68K_ASR8(g_m68k.d[4], g_m68k.d[7]);
    /* TODO $01FCEC: dc.w $4d03  [4D 03] */
    /* TODO $01FCEE: roxr.b #$7, d4  [EE 14] */
    /* TODO $01FCF0: dc.w $4d03  [4D 03] */
    M68K_ASR8(g_m68k.d[4], 0x7);
    /* TODO $01FCF4: dc.w $4d03  [4D 03] */
    /* TODO $01FCF6: dc.w $edf4  [ED F4] */
    /* TODO $01FCF8: dc.w $4d03  [4D 03] */
    /* WARNING: function did not end with RTS */
}

/* $01FCFE-$01FD06  (3 instructions, 8 bytes) */
void jt_01FCFE(void) {
    M68K_OR8(g_m68k.d[1], 0x10);
    /* TODO $01FD02: dc.w $edec  [ED EC] */
    /* TODO $01FD04: dc.w $4d00  [4D 00] */
    /* WARNING: function did not end with RTS */
}

/* $01FD42-$01FD4A  (3 instructions, 8 bytes) */
void jt_01FD42(void) {
    M68K_OR8(g_m68k.d[1], 0x10);
    /* TODO $01FD46: dc.w $eded  [ED ED] */
    /* TODO $01FD48: dc.w $4d00  [4D 00] */
    /* WARNING: function did not end with RTS */
}

/* $01FD86-$01FDC6  (31 instructions, 64 bytes) */
void jt_01FD86(void) {
    M68K_OR8(g_m68k.d[1], 0x10);
    M68K_ROR16(g_m68k.d[5], g_m68k.d[7]);
    /* TODO $01FD8C: dc.w $4d03  [4D 03] */
    M68K_ROR16(g_m68k.d[1], g_m68k.d[7]);
    /* TODO $01FD90: dc.w $4d03  [4D 03] */
    /* TODO $01FD92: roxr.w d7, d5  [EE 75] */
    /* TODO $01FD94: dc.w $4d03  [4D 03] */
    /* TODO $01FD96: roxr.w d7, d1  [EE 71] */
    /* TODO $01FD98: dc.w $4d03  [4D 03] */
    M68K_LSR16(g_m68k.d[5], g_m68k.d[7]);
    /* TODO $01FD9C: dc.w $4d03  [4D 03] */
    M68K_LSR16(g_m68k.d[1], g_m68k.d[7]);
    /* TODO $01FDA0: dc.w $4d03  [4D 03] */
    M68K_ASR16(g_m68k.d[5], g_m68k.d[7]);
    /* TODO $01FDA4: dc.w $4d03  [4D 03] */
    M68K_ASR16(g_m68k.d[1], g_m68k.d[7]);
    /* TODO $01FDA8: dc.w $4d03  [4D 03] */
    /* TODO $01FDAA: roxr.w #$7, d1  [EE 51] */
    /* TODO $01FDAC: dc.w $4d03  [4D 03] */
    M68K_ASR16(g_m68k.d[1], 0x7);
    /* TODO $01FDB0: dc.w $4d03  [4D 03] */
    /* TODO $01FDB2: roxr.l #$7, d1  [EE 31] */
    /* TODO $01FDB4: dc.w $4d03  [4D 03] */
    M68K_ASR8(g_m68k.d[1], g_m68k.d[7]);
    /* TODO $01FDB8: dc.w $4d03  [4D 03] */
    /* TODO $01FDBA: roxr.b #$7, d1  [EE 11] */
    /* TODO $01FDBC: dc.w $4d03  [4D 03] */
    M68K_ASR8(g_m68k.d[1], 0x7);
    /* TODO $01FDC0: dc.w $4d03  [4D 03] */
    /* TODO $01FDC2: dc.w $edf1  [ED F1] */
    /* TODO $01FDC4: dc.w $4d03  [4D 03] */
    /* WARNING: function did not end with RTS */
}

/* $01FDCA-$01FE0A  (31 instructions, 64 bytes) */
void jt_01FDCA(void) {
    M68K_OR8(g_m68k.d[1], 0x10);
    M68K_ROR16(g_m68k.d[4], g_m68k.d[7]);
    /* TODO $01FDD0: dc.w $4d03  [4D 03] */
    M68K_ROR16(g_m68k.d[0], g_m68k.d[7]);
    /* TODO $01FDD4: dc.w $4d03  [4D 03] */
    /* TODO $01FDD6: roxr.w d7, d4  [EE 74] */
    /* TODO $01FDD8: dc.w $4d03  [4D 03] */
    /* TODO $01FDDA: roxr.w d7, d0  [EE 70] */
    /* TODO $01FDDC: dc.w $4d03  [4D 03] */
    M68K_LSR16(g_m68k.d[4], g_m68k.d[7]);
    /* TODO $01FDE0: dc.w $4d03  [4D 03] */
    M68K_LSR16(g_m68k.d[0], g_m68k.d[7]);
    /* TODO $01FDE4: dc.w $4d03  [4D 03] */
    M68K_ASR16(g_m68k.d[4], g_m68k.d[7]);
    /* TODO $01FDE8: dc.w $4d03  [4D 03] */
    M68K_ASR16(g_m68k.d[0], g_m68k.d[7]);
    /* TODO $01FDEC: dc.w $4d03  [4D 03] */
    /* TODO $01FDEE: roxr.w #$7, d0  [EE 50] */
    /* TODO $01FDF0: dc.w $4d03  [4D 03] */
    M68K_ASR16(g_m68k.d[0], 0x7);
    /* TODO $01FDF4: dc.w $4d03  [4D 03] */
    /* TODO $01FDF6: roxr.l #$7, d0  [EE 30] */
    /* TODO $01FDF8: dc.w $4d03  [4D 03] */
    M68K_ASR8(g_m68k.d[0], g_m68k.d[7]);
    /* TODO $01FDFC: dc.w $4d03  [4D 03] */
    /* TODO $01FDFE: roxr.b #$7, d0  [EE 10] */
    /* TODO $01FE00: dc.w $4d03  [4D 03] */
    M68K_ASR8(g_m68k.d[0], 0x7);
    /* TODO $01FE04: dc.w $4d03  [4D 03] */
    /* TODO $01FE06: dc.w $edf0  [ED F0] */
    /* TODO $01FE08: dc.w $4d03  [4D 03] */
    /* WARNING: function did not end with RTS */
}

/* $01FE0E-$01FE46  (27 instructions, 56 bytes) */
void jt_01FE0E(void) {
    M68K_OR8(g_m68k.d[1], 0x10);
    M68K_ROR16(g_m68k.d[3], g_m68k.d[7]);
    /* TODO $01FE14: dc.w $4d03  [4D 03] */
    /* TODO $01FE16: roxr.w d7, d7  [EE 77] */
    /* TODO $01FE18: dc.w $4d03  [4D 03] */
    /* TODO $01FE1A: roxr.w d7, d3  [EE 73] */
    /* TODO $01FE1C: dc.w $4d03  [4D 03] */
    M68K_LSR16(g_m68k.d[7], g_m68k.d[7]);
    /* TODO $01FE20: dc.w $4d03  [4D 03] */
    M68K_LSR16(g_m68k.d[3], g_m68k.d[7]);
    /* TODO $01FE24: dc.w $4d03  [4D 03] */
    M68K_ASR16(g_m68k.d[7], g_m68k.d[7]);
    /* TODO $01FE28: dc.w $4d03  [4D 03] */
    M68K_ASR16(g_m68k.d[3], g_m68k.d[7]);
    /* TODO $01FE2C: dc.w $4d03  [4D 03] */
    M68K_ROR16(g_m68k.d[7], 0x7);
    /* TODO $01FE30: dc.w $4d03  [4D 03] */
    M68K_LSR16(g_m68k.d[7], 0x7);
    /* TODO $01FE34: dc.w $4d03  [4D 03] */
    M68K_ROR8(g_m68k.d[7], g_m68k.d[7]);
    /* TODO $01FE38: dc.w $4d03  [4D 03] */
    M68K_LSR8(g_m68k.d[7], g_m68k.d[7]);
    /* TODO $01FE3C: dc.w $4d03  [4D 03] */
    M68K_ROR8(g_m68k.d[7], 0x7);
    /* TODO $01FE40: dc.w $4d03  [4D 03] */
    M68K_LSR8(g_m68k.d[7], 0x7);
    /* TODO $01FE44: dc.w $4d03  [4D 03] */
    /* WARNING: function did not end with RTS */
}

/* $01FE52-$01FE8A  (27 instructions, 56 bytes) */
void jt_01FE52(void) {
    M68K_OR8(g_m68k.d[1], 0x10);
    M68K_ROR16(g_m68k.d[2], g_m68k.d[7]);
    /* TODO $01FE58: dc.w $4d03  [4D 03] */
    /* TODO $01FE5A: roxr.w d7, d6  [EE 76] */
    /* TODO $01FE5C: dc.w $4d03  [4D 03] */
    /* TODO $01FE5E: roxr.w d7, d2  [EE 72] */
    /* TODO $01FE60: dc.w $4d03  [4D 03] */
    M68K_LSR16(g_m68k.d[6], g_m68k.d[7]);
    /* TODO $01FE64: dc.w $4d03  [4D 03] */
    M68K_LSR16(g_m68k.d[2], g_m68k.d[7]);
    /* TODO $01FE68: dc.w $4d03  [4D 03] */
    M68K_ASR16(g_m68k.d[6], g_m68k.d[7]);
    /* TODO $01FE6C: dc.w $4d03  [4D 03] */
    M68K_ASR16(g_m68k.d[2], g_m68k.d[7]);
    /* TODO $01FE70: dc.w $4d03  [4D 03] */
    M68K_ROR16(g_m68k.d[6], 0x7);
    /* TODO $01FE74: dc.w $4d03  [4D 03] */
    M68K_LSR16(g_m68k.d[6], 0x7);
    /* TODO $01FE78: dc.w $4d03  [4D 03] */
    M68K_ROR8(g_m68k.d[6], g_m68k.d[7]);
    /* TODO $01FE7C: dc.w $4d03  [4D 03] */
    M68K_LSR8(g_m68k.d[6], g_m68k.d[7]);
    /* TODO $01FE80: dc.w $4d03  [4D 03] */
    M68K_ROR8(g_m68k.d[6], 0x7);
    /* TODO $01FE84: dc.w $4d03  [4D 03] */
    M68K_LSR8(g_m68k.d[6], 0x7);
    /* TODO $01FE88: dc.w $4d03  [4D 03] */
    /* WARNING: function did not end with RTS */
}

/* $020000-$020002  (1 instructions, 2 bytes) */
void jt_020000(void) {
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[4]))); M68K_TST8((uint8_t)g_m68k.d[2]);
    /* WARNING: function did not end with RTS */
}

/* $020002-$020004  (1 instructions, 2 bytes) */
void jt_020002(void) {
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[3]))); M68K_TST8((uint8_t)g_m68k.d[2]);
    /* WARNING: function did not end with RTS */
}

/* $020004-$020006  (1 instructions, 2 bytes) */
void jt_020004(void) {
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[2]))); M68K_TST8((uint8_t)g_m68k.d[1]);
    /* WARNING: function did not end with RTS */
}

/* $020006-$020008  (1 instructions, 2 bytes) */
void jt_020006(void) {
    M68K_SUB32(g_m68k.d[1], bus_read32(g_m68k.a[2]));
    /* WARNING: function did not end with RTS */
}

/* $020008-$02000A  (1 instructions, 2 bytes) */
void jt_020008(void) {
    { uint32_t _ea = g_m68k.a[4]; uint32_t _tmp = bus_read32(_ea); M68K_SUB32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $02000A-$02000C  (1 instructions, 2 bytes) */
void jt_02000A(void) {
    M68K_SUB32(g_m68k.d[2], bus_read32(g_m68k.a[5]));
    /* WARNING: function did not end with RTS */
}

/* $02000C-$02000E  (1 instructions, 2 bytes) */
void jt_02000C(void) {
    M68K_SUB32(g_m68k.d[3], bus_read32(g_m68k.a[7]));
    /* WARNING: function did not end with RTS */
}

/* $02000E-$020010  (1 instructions, 2 bytes) */
void jt_02000E(void) {
    { uint32_t _ea = g_m68k.a[3]; uint32_t _tmp = bus_read32(_ea); M68K_SUB32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $020010-$020012  (1 instructions, 2 bytes) */
void jt_020010(void) {
    M68K_SUB32(g_m68k.d[6], _postinc32(4));
    /* WARNING: function did not end with RTS */
}

/* $020012-$020016  (2 instructions, 4 bytes) */
void jt_020012(void) {
    M68K_SUB32(g_m68k.d[6], _postinc32(5));
    M68K_SUB32(g_m68k.d[7], _postinc32(6));
    /* WARNING: function did not end with RTS */
}

/* $020016-$02005A  (33 instructions, 68 bytes) */
void jt_020016(void) {
    { uint32_t _ea = g_m68k.a[7]; uint32_t _tmp = bus_read32(_ea); M68K_SUB32(_tmp, g_m68k.d[7]); bus_write32(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(_postinc8(6)); g_m68k.a[7] -= 1; bus_write8(g_m68k.a[7], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(5)); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(4)); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[6]))); M68K_TST8((uint8_t)g_m68k.d[6]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[5]))); M68K_TST8((uint8_t)g_m68k.d[3]);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[5])); g_m68k.a[2] -= 1; bus_write8(g_m68k.a[2], _mv); M68K_TST8(_mv); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[3]))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[3])); /* UNHANDLED_WRITE: (a1.w * 2) = _mv */ M68K_TST8(_mv); }
    { uint32_t _ea = g_m68k.a[5]; uint32_t _tmp = bus_read32(_ea); M68K_SUB32(_tmp, g_m68k.d[2]); bus_write32(_ea, _tmp); }
    M68K_SUB32(g_m68k.d[3], bus_read32(g_m68k.a[7]));
    M68K_SUB32(g_m68k.d[4], _postinc32(4));
    M68K_SUB32(g_m68k.d[6], _postinc32(5));
    { uint32_t _ea = g_m68k.a[5]; uint32_t _tmp = bus_read32(_ea); M68K_SUB32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    M68K_SUB32(g_m68k.d[7], _postinc32(7));
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(_postinc8(6)); g_m68k.a[7] -= 1; bus_write8(g_m68k.a[7], _mv); M68K_TST8(_mv); }
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(6))); M68K_TST8((uint8_t)g_m68k.d[7]);
    { uint8_t _mv = (uint8_t)(_postinc8(5)); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[7])); g_m68k.a[3] -= 1; bus_write8(g_m68k.a[3], _mv); M68K_TST8(_mv); }
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[6]))); M68K_TST8((uint8_t)g_m68k.d[3]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[5]))); M68K_TST8((uint8_t)g_m68k.d[3]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[4]))); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_SUB32(g_m68k.d[2], bus_read32(g_m68k.a[4]));
    { uint32_t _ea = g_m68k.a[6]; uint32_t _tmp = bus_read32(_ea); M68K_SUB32(_tmp, g_m68k.d[2]); bus_write32(_ea, _tmp); }
    M68K_SUB32(g_m68k.d[3], bus_read32(g_m68k.a[7]));
    M68K_SUB32(g_m68k.d[4], _postinc32(1));
    { uint32_t _ea = g_m68k.a[5]; uint32_t _tmp = bus_read32(_ea); M68K_SUB32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    M68K_SUB32(g_m68k.d[7], _postinc32(6));
    M68K_SUB32(g_m68k.d[7], _postinc32(7));
    M68K_OR32(g_m68k.d[0], g_m68k.d[1]);
    /* TODO $020058: dc.w $8181  [81 81] */
    /* WARNING: function did not end with RTS */
}

/* $02005A-$020082  (17 instructions, 40 bytes) */
void jt_02005A(void) {
    M68K_BTST(g_m68k.d[0], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(_postinc8(7)); g_m68k.a[7] -= 1; bus_write8(g_m68k.a[7], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(6)); g_m68k.a[7] -= 1; bus_write8(g_m68k.a[7], _mv); M68K_TST8(_mv); }
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(0))); M68K_TST8((uint8_t)g_m68k.d[7]);
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[7]))); M68K_TST8((uint8_t)g_m68k.d[4]);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[7])); g_m68k.a[3] -= 1; bus_write8(g_m68k.a[3], _mv); M68K_TST8(_mv); }
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[5]))); M68K_TST8((uint8_t)g_m68k.d[3]);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[5])); /* UNHANDLED_WRITE: ([], a1.w * 4, $9797) = _mv */ M68K_TST8(_mv); }
    M68K_SUB32(g_m68k.d[4], _postinc32(1));
    M68K_SUB32(g_m68k.d[5], _postinc32(6));
    M68K_SUB32(g_m68k.d[7], _postinc32(7));
    { uint32_t _ea = g_m68k.a[7]; uint32_t _tmp = bus_read32(_ea); M68K_SUB32(_tmp, g_m68k.d[7]); bus_write32(_ea, _tmp); }
    M68K_OR32(g_m68k.d[0], g_m68k.d[1]);
    M68K_OR32(g_m68k.d[1], g_m68k.d[2]);
    M68K_OR8(g_m68k.d[1], g_m68k.d[2]);
    M68K_BTST(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x1f);
    /* WARNING: function did not end with RTS */
}
