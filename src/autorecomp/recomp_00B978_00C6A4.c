/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $00B978 - $00C6A4 */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

/* $00B978-$00B98C  (4 instructions, 20 bytes) */
void sub_00B978(void) {
    func_table_call(0x00F9A8);
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(0x101238, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00B98C-$00B9A8  (8 instructions, 28 bytes) */
void sub_00B98C(void) {
    g_m68k.a[6] = 0x101508;
    bus_write16(g_m68k.a[6] + 0x14, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x101238))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[0] = bus_read32(0xb9a8 + (int16_t)(uint16_t)g_m68k.d[0]);
    func_table_call(g_m68k.a[0]);
    return;
}

/* $00B9C0-$00BA62  (30 instructions, 162 bytes) */
void jt_00B9C0(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0xc2)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x015256);
    func_table_call(0x001336);
    g_m68k.d[0] = (uint32_t)(int32_t)(int8_t)(0x0); M68K_TST32(g_m68k.d[0]);
    func_table_call(0x011646);
    g_m68k.d[0] = (uint32_t)(int32_t)(int8_t)(0x1); M68K_TST32(g_m68k.d[0]);
    g_m68k.d[1] = (uint32_t)(int32_t)(int8_t)(0x0); M68K_TST32(g_m68k.d[1]);
    func_table_call(0x011602);
    func_table_call(0x0169A8);
    g_m68k.a[6] = 0x101508;
    func_table_call(0x00D72A);
    func_table_call(0x00F6E6);
    func_table_call(0x00D6A8);
    func_table_call(0x00DF02);
    func_table_call(0x00DEB4);
    func_table_call(0x00DAA2);
    func_table_call(0x00F130);
    { uint16_t _mv = (uint16_t)(0xc0); bus_write16(g_m68k.a[6] + 0xa, _mv); M68K_TST16(_mv); }
    func_table_call(0x00EB9E);
    func_table_call(0x00EDC6);
    func_table_call(0x00EDF4);
    func_table_call(0x00EEA6);
    func_table_call(0x014760);
    func_table_call(0x019F82);
    func_table_call(0x014160);
    func_table_call(0x01229E);
    func_table_call(0x013546);
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(0x101238, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00BA62-$00BAB6  (16 instructions, 84 bytes) */
void jt_00BA62(void) {
    g_m68k.a[6] = 0x101508;
    func_table_call(0x00EEA6);
    func_table_call(0x00FA18);
    func_table_call(0x00F9B2);
    func_table_call(0x014160);
    func_table_call(0x01229E);
    func_table_call(0x011694);
    M68K_CMP16(g_m68k.d[0], 0x0);
    if (M68K_CC_NE) goto loc_00BAB0;
    M68K_CMP16(bus_read16(0x10042C), 0x1);
    if (M68K_CC_NE) goto loc_00BAA2;
    func_table_call(0x00F8AE);
loc_00BAA2:
    func_table_call(0x001340);
    { uint16_t _mv = (uint16_t)(0x2); bus_write16(0x101238, _mv); M68K_TST16(_mv); }
loc_00BAB0:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00BAB6-$00BAD4  (5 instructions, 30 bytes) */
void jt_00BAB6(void) {
    M68K_CMP16(bus_read16(0x101210), 0x1);
    if (M68K_CC_NE) goto loc_00BAC6;
    func_table_call(0x00FC74);
loc_00BAC6:
    { uint16_t _mv = (uint16_t)(0x3); bus_write16(0x101238, _mv); M68K_TST16(_mv); }
    { func_table_call(0x00BAD6); return; }
    /* WARNING: function did not end with RTS */
}

/* $00BAD6-$00BB6A  (27 instructions, 148 bytes) */
void jt_00BAD6(void) {
    g_m68k.a[6] = 0x101508;
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0xa), 0x100);
    if (M68K_CC_LT) goto loc_00BB2A;
    { uint16_t _mv = (uint16_t)(0x100); bus_write16(g_m68k.a[6] + 0xa, _mv); M68K_TST16(_mv); }
    func_table_call(0x00EB9E);
    func_table_call(0x00EDC6);
    func_table_call(0x00EDF4);
    func_table_call(0x00EEA6);
    func_table_call(0x00FA18);
    func_table_call(0x00F9B2);
    func_table_call(0x014160);
    func_table_call(0x01229E);
    func_table_call(0x013546);
    { uint16_t _mv = (uint16_t)(0x4); bus_write16(0x101238, _mv); M68K_TST16(_mv); }
    goto loc_00BB64;
loc_00BB2A:
    { uint32_t _ea = (g_m68k.a[6] + 0xa); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    func_table_call(0x00EB9E);
    func_table_call(0x00EDC6);
    func_table_call(0x00EDF4);
    func_table_call(0x00EEA6);
    func_table_call(0x00FA18);
    func_table_call(0x00F9B2);
    func_table_call(0x014160);
    func_table_call(0x01229E);
    func_table_call(0x013546);
loc_00BB64:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00BB6A-$00BB7C  (4 instructions, 18 bytes) */
void jt_00BB6A(void) {
    func_table_call(0xbb92);
    { uint16_t _mv = (uint16_t)(0x5); bus_write16(0x101238, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00BB7C-$00BB92  (7 instructions, 22 bytes) */
void jt_00BB7C(void) {
    func_table_call(0xbbbc);
    M68K_CMP16(g_m68k.d[0], 0x0);
    if (M68K_CC_NE) goto loc_00BB8C;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    goto loc_00BB90;
loc_00BB8C:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
loc_00BB90:
    return;
}

/* $00BB92-$00BBBC  (8 instructions, 42 bytes) */
void sub_00BB92(void) {
    g_m68k.a[6] = 0x10123A;
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[6] + 0x0, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0xfff6); bus_write16(g_m68k.a[6] + 0x6, _mv); M68K_TST16(_mv); }
    bus_write16(g_m68k.a[6] + 0x8, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    func_table_call(0x012202);
    { uint32_t _mv = (uint32_t)(g_m68k.a[0]); bus_write32(g_m68k.a[6] + 0xa, _mv); M68K_TST32(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x7fff)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x012256);
    /* WARNING: function did not end with RTS */
}

/* $00BBBC-$00BBFE  (15 instructions, 66 bytes) */
void sub_00BBBC(void) {
    g_m68k.a[6] = 0x10123A;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x0))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[0] = bus_read32(0xbbfe + (int16_t)(uint16_t)g_m68k.d[0]);
    func_table_call(g_m68k.a[0]);
    g_m68k.a[7] -= 2; bus_write16(g_m68k.a[7], g_m68k.d[0]);
    g_m68k.a[6] = 0x101508;
    func_table_call(0x00EEA6);
    func_table_call(0x00FA18);
    func_table_call(0x00F9B2);
    func_table_call(0x014160);
    func_table_call(0x01229E);
    g_m68k.d[0] = (uint32_t)(int32_t)(int16_t)bus_read16(g_m68k.a[7]); g_m68k.a[7] += 2;
    return;
}

/* $00BC22-$00BC2C  (2 instructions, 10 bytes) */
void jt_00BC22(void) {
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(g_m68k.a[6] + 0x0, _mv); M68K_TST16(_mv); }
    { func_table_call(0xbc2c); return; }
    /* WARNING: function did not end with RTS */
}

/* $00BC2C-$00BC94  (25 instructions, 104 bytes) */
void jt_00BC2C(void) {
    { uint32_t _ea = (g_m68k.a[6] + 0x8); uint16_t _tmp = bus_read16(_ea); M68K_SUB16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    if (M68K_CC_PL) goto loc_00BC8E;
    g_m68k.a[5] = 0x00BE26;
    { uint32_t _ea = (g_m68k.a[6] + 0x6); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0xa); bus_write16(_ea, _tmp); }
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x6))); M68K_TST16((uint16_t)g_m68k.d[6]);
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.d[6])); bus_write16(g_m68k.a[6] + 0x8, _mv); M68K_TST16(_mv); }
    if (M68K_CC_NE) goto loc_00BC54;
    { uint16_t _mv = (uint16_t)(0x2); bus_write16(g_m68k.a[6] + 0x0, _mv); M68K_TST16(_mv); }
    goto loc_00BC8E;
loc_00BC54:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[5] + 0x2 + (int16_t)(uint16_t)g_m68k.d[6]))); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x015256);
    g_m68k.a[0] = bus_read32(g_m68k.a[6] + 0xa);
    g_m68k.a[3] = 0x080014;
    g_m68k.a[3] = bus_read32(g_m68k.a[3]);
    g_m68k.a[3] = bus_read32(g_m68k.a[3] + 0x0);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[5] + 0x4 + (int16_t)(uint16_t)g_m68k.d[6]))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[3] = bus_read32(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    func_table_call(0x012270);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[5] + 0x6 + (int16_t)(uint16_t)g_m68k.d[6]))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[5] + 0x8 + (int16_t)(uint16_t)g_m68k.d[6]))); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x01225C);
loc_00BC8E:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00BC94-$00BD02  (25 instructions, 110 bytes) */
void jt_00BC94(void) {
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[6] + 0x2, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1853)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x015256);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x011F22);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x34)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x2))); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.a[3] = 0x00BDF6;
    func_table_call(0x012036);
    g_m68k.a[0] = bus_read32(g_m68k.a[6] + 0xa);
    g_m68k.a[3] = 0x080014;
    g_m68k.a[3] = bus_read32(g_m68k.a[3]);
    g_m68k.a[3] = bus_read32(g_m68k.a[3] + 0x0);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x4)); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[3] = bus_read32(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    func_table_call(0x012270);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x40)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x50)); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x01225C);
    { uint16_t _mv = (uint16_t)(0x3); bus_write16(g_m68k.a[6] + 0x0, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00BD02-$00BD3A  (12 instructions, 56 bytes) */
void jt_00BD02(void) {
    { uint32_t _ea = (g_m68k.a[6] + 0x2); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0x10); bus_write16(_ea, _tmp); }
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x2), 0x100);
    if (M68K_CC_LT) goto loc_00BD1C;
    { uint16_t _mv = (uint16_t)(0x100); bus_write16(g_m68k.a[6] + 0x2, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x4); bus_write16(g_m68k.a[6] + 0x0, _mv); M68K_TST16(_mv); }
loc_00BD1C:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x34)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x2))); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.a[3] = 0x00BDF6;
    func_table_call(0x012036);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00BD3A-$00BD4C  (4 instructions, 18 bytes) */
void jt_00BD3A(void) {
    { uint16_t _mv = (uint16_t)(0x10); bus_write16(g_m68k.a[6] + 0x8, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x5); bus_write16(g_m68k.a[6] + 0x0, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00BD4C-$00BD5E  (5 instructions, 18 bytes) */
void jt_00BD4C(void) {
    { uint32_t _ea = (g_m68k.a[6] + 0x8); uint16_t _tmp = bus_read16(_ea); M68K_SUB16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    if (M68K_CC_PL) goto loc_00BD58;
    { uint16_t _mv = (uint16_t)(0x6); bus_write16(g_m68k.a[6] + 0x0, _mv); M68K_TST16(_mv); }
loc_00BD58:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00BD5E-$00BD80  (8 instructions, 34 bytes) */
void jt_00BD5E(void) {
    { uint16_t _mv = (uint16_t)(0x100); bus_write16(g_m68k.a[6] + 0x4, _mv); M68K_TST16(_mv); }
    g_m68k.a[0] = bus_read32(g_m68k.a[6] + 0xa);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x4))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x012266);
    { uint16_t _mv = (uint16_t)(0x7); bus_write16(g_m68k.a[6] + 0x0, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00BD80-$00BDE6  (24 instructions, 102 bytes) */
void jt_00BD80(void) {
    { uint32_t _ea = (g_m68k.a[6] + 0x4); uint16_t _tmp = bus_read16(_ea); M68K_SUB16(_tmp, 0x18); bus_write16(_ea, _tmp); }
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x4), 0x1);
    if (M68K_CC_GT) goto loc_00BD94;
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(g_m68k.a[6] + 0x4, _mv); M68K_TST16(_mv); }
loc_00BD94:
    g_m68k.a[0] = bus_read32(g_m68k.a[6] + 0xa);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x4))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x012266);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x4))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x28)); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x00F4DE);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[1])); M68K_TST16((uint16_t)g_m68k.d[2]);
    M68K_ADD16(g_m68k.d[2], 0x40);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x4))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x60)); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x00F4DE);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[1])); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], 0x40);
    func_table_call(0x01225C);
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x4), 0x1);
    if (M68K_CC_GT) goto loc_00BDE0;
    { uint16_t _mv = (uint16_t)(0x8); bus_write16(g_m68k.a[6] + 0x0, _mv); M68K_TST16(_mv); }
loc_00BDE0:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00BDE6-$00BDF6  (4 instructions, 16 bytes) */
void jt_00BDE6(void) {
    g_m68k.a[0] = bus_read32(g_m68k.a[6] + 0xa);
    func_table_call(0x012252);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00BE50-$00BE90  (12 instructions, 64 bytes) */
void sub_00BE50(void) {
    M68K_CMP16(bus_read16(0x101206), 0x0);
    if (M68K_CC_NE) goto loc_00BE64;
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(0x101248, _mv); M68K_TST16(_mv); }
    goto loc_00BE6C;
loc_00BE64:
    { uint16_t _mv = (uint16_t)(0x2); bus_write16(0x101248, _mv); M68K_TST16(_mv); }
loc_00BE6C:
    func_table_call(0x0146E2);
    g_m68k.a[6] = 0x101508;
    func_table_call(0x00EEA6);
    func_table_call(0x00D6DA);
    func_table_call(0x01229E);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00BE90-$00BEA2  (6 instructions, 18 bytes) */
void sub_00BE90(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x101248))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[0] = bus_read32(0xbea2 + (int16_t)(uint16_t)g_m68k.d[0]);
    func_table_call(g_m68k.a[0]);
    return;
}

/* $00BEBA-$00BEEA  (11 instructions, 48 bytes) */
void jt_00BEBA(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0xc3)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x015256);
    func_table_call(0x001336);
    g_m68k.d[0] = (uint32_t)(int32_t)(int8_t)(0x1); M68K_TST32(g_m68k.d[0]);
    func_table_call(0x011646);
    g_m68k.d[0] = (uint32_t)(int32_t)(int8_t)(0x0); M68K_TST32(g_m68k.d[0]);
    g_m68k.d[1] = (uint32_t)(int32_t)(int8_t)(0x0); M68K_TST32(g_m68k.d[1]);
    func_table_call(0x011602);
    { uint16_t _mv = (uint16_t)(0x5); bus_write16(0x101248, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00BEEA-$00BF08  (8 instructions, 30 bytes) */
void jt_00BEEA(void) {
    func_table_call(0x011694);
    M68K_CMP16(g_m68k.d[0], 0x0);
    if (M68K_CC_NE) goto loc_00BF02;
    func_table_call(0x001340);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    goto loc_00BF06;
loc_00BF02:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
loc_00BF06:
    return;
}

/* $00BF08-$00BF2C  (8 instructions, 36 bytes) */
void jt_00BF08(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x185e)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x015256);
    func_table_call(0x00BF7A);
    M68K_CMP16(g_m68k.d[0], 0x0);
    if (M68K_CC_NE) goto loc_00BF26;
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(0x101248, _mv); M68K_TST16(_mv); }
loc_00BF26:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00BF2C-$00BF46  (6 instructions, 26 bytes) */
void jt_00BF2C(void) {
    func_table_call(0x00C01E);
    M68K_CMP16(g_m68k.d[0], 0x0);
    if (M68K_CC_NE) goto loc_00BF40;
    { uint16_t _mv = (uint16_t)(0x4); bus_write16(0x101248, _mv); M68K_TST16(_mv); }
loc_00BF40:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00BF46-$00BF60  (6 instructions, 26 bytes) */
void jt_00BF46(void) {
    func_table_call(0x00C170);
    M68K_CMP16(g_m68k.d[0], 0x0);
    if (M68K_CC_NE) goto loc_00BF5A;
    { uint16_t _mv = (uint16_t)(0x3); bus_write16(0x101248, _mv); M68K_TST16(_mv); }
loc_00BF5A:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00BF60-$00BF7A  (6 instructions, 26 bytes) */
void jt_00BF60(void) {
    func_table_call(0x00C204);
    M68K_CMP16(g_m68k.d[0], 0x0);
    if (M68K_CC_NE) goto loc_00BF74;
    { uint16_t _mv = (uint16_t)(0x4); bus_write16(0x101248, _mv); M68K_TST16(_mv); }
loc_00BF74:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00BF7A-$00C000  (27 instructions, 134 bytes) */
void sub_00BF7A(void) {
    g_m68k.a[6] = 0x101508;
    func_table_call(0x00EEA6);
    func_table_call(0x00D6DA);
    func_table_call(0x014160);
    func_table_call(0x01229E);
    g_m68k.a[6] = 0x10124A;
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[6] + 0x0, _mv); M68K_TST16(_mv); }
    func_table_call(0x012202);
    { uint32_t _mv = (uint32_t)(g_m68k.a[0]); bus_write32(g_m68k.a[6] + 0x6, _mv); M68K_TST32(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x7fff)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x012256);
    g_m68k.a[2] = 0x080014;
    g_m68k.a[2] = bus_read32(g_m68k.a[2]);
    g_m68k.a[2] = bus_read32(g_m68k.a[2] + 0x4);
    g_m68k.a[3] = bus_read32(g_m68k.a[2] + 0x8);
    func_table_call(0x012270);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x50)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x60)); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x01225C);
    func_table_call(0x012202);
    { uint32_t _mv = (uint32_t)(g_m68k.a[0]); bus_write32(g_m68k.a[6] + 0xa, _mv); M68K_TST32(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x7fff)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x012256);
    M68K_CMP16(bus_read16(0x101202), 0x6);
    if (M68K_CC_LT) { func_table_call(0x00C000); return; }
    g_m68k.a[3] = bus_read32(g_m68k.a[2] + 0x10);
    { func_table_call(0x00C004); return; }
    /* WARNING: function did not end with RTS */
}

/* $00C000-$00C01E  (7 instructions, 30 bytes) */
void jt_00C000(void) {
    g_m68k.a[3] = bus_read32(g_m68k.a[2] + 0xc);
loc_00C004:
    func_table_call(0x012270);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x40)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0xa0)); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x01225C);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00C01E-$00C05A  (14 instructions, 60 bytes) */
void sub_00C01E(void) {
    g_m68k.a[6] = 0x10124A;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x0))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[0] = bus_read32(0xc05a + (int16_t)(uint16_t)g_m68k.d[0]);
    func_table_call(g_m68k.a[0]);
    g_m68k.a[7] -= 2; bus_write16(g_m68k.a[7], g_m68k.d[0]);
    g_m68k.a[6] = 0x101508;
    func_table_call(0x00EEA6);
    func_table_call(0x00D6DA);
    func_table_call(0x014160);
    func_table_call(0x01229E);
    g_m68k.d[0] = (uint32_t)(int32_t)(int16_t)bus_read16(g_m68k.a[7]); g_m68k.a[7] += 2;
    return;
}

/* $00C06A-$00C0B6  (16 instructions, 76 bytes) */
void jt_00C06A(void) {
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[6] + 0x4, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x011F22);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x34)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x4))); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.a[3] = 0x01FEC6;
    func_table_call(0x012036);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x36)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x4))); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.a[3] = 0x01FE96;
    func_table_call(0x012036);
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(g_m68k.a[6] + 0x0, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00C0B6-$00C10C  (19 instructions, 86 bytes) */
void jt_00C0B6(void) {
    { uint32_t _ea = (g_m68k.a[6] + 0x4); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0x8); bus_write16(_ea, _tmp); }
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x4), 0x100);
    if (M68K_CC_LT) goto loc_00C0C8;
    { uint16_t _mv = (uint16_t)(0x100); bus_write16(g_m68k.a[6] + 0x4, _mv); M68K_TST16(_mv); }
loc_00C0C8:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x34)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x4))); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.a[3] = 0x01FEC6;
    func_table_call(0x012036);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x36)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x4))); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.a[3] = 0x01FE96;
    func_table_call(0x012036);
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x4), 0x100);
    if (M68K_CC_LT) goto loc_00C106;
    { uint16_t _mv = (uint16_t)(0x2); bus_write16(g_m68k.a[6] + 0x0, _mv); M68K_TST16(_mv); }
loc_00C106:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00C10C-$00C11E  (4 instructions, 18 bytes) */
void jt_00C10C(void) {
    { uint16_t _mv = (uint16_t)(0x78); bus_write16(g_m68k.a[6] + 0x2, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x3); bus_write16(g_m68k.a[6] + 0x0, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00C11E-$00C170  (20 instructions, 82 bytes) */
void jt_00C11E(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1011FC))); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x010E10);
    M68K_CMP16(g_m68k.d[0], 0x1);
    if (M68K_CC_NE) goto loc_00C134;
    bus_write16(g_m68k.a[6] + 0x2, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
loc_00C134:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1011FC))); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x010E5C);
    M68K_CMP16(g_m68k.d[0], 0x1);
    if (M68K_CC_NE) goto loc_00C14A;
    bus_write16(g_m68k.a[6] + 0x2, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
loc_00C14A:
    { uint32_t _ea = (g_m68k.a[6] + 0x2); uint16_t _tmp = bus_read16(_ea); M68K_SUB16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    if (M68K_CC_PL) goto loc_00C16A;
    g_m68k.a[0] = bus_read32(g_m68k.a[6] + 0x6);
    func_table_call(0x012252);
    g_m68k.a[0] = bus_read32(g_m68k.a[6] + 0xa);
    func_table_call(0x012252);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    goto loc_00C16E;
loc_00C16A:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
loc_00C16E:
    return;
}

/* $00C170-$00C1EC  (24 instructions, 124 bytes) */
void sub_00C170(void) {
    g_m68k.a[6] = 0x101258;
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[6] + 0x0, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x78); bus_write16(g_m68k.a[6] + 0x2, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x40); bus_write16(g_m68k.a[6] + 0x4, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0xffd0); bus_write16(g_m68k.a[6] + 0x6, _mv); M68K_TST16(_mv); }
    bus_write32(g_m68k.a[6] + 0x8, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    func_table_call(0x012202);
    { uint32_t _mv = (uint32_t)(g_m68k.a[0]); bus_write32(g_m68k.a[6] + 0xc, _mv); M68K_TST32(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x7fff)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x012256);
    g_m68k.a[2] = 0x080014;
    g_m68k.a[2] = bus_read32(g_m68k.a[2]);
    g_m68k.a[2] = bus_read32(g_m68k.a[2] + 0x4);
    g_m68k.a[3] = bus_read32(g_m68k.a[2] + 0x0);
    func_table_call(0x012270);
    func_table_call(0x012202);
    { uint32_t _mv = (uint32_t)(g_m68k.a[0]); bus_write32(g_m68k.a[6] + 0x10, _mv); M68K_TST32(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x7fff)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x012256);
    g_m68k.a[3] = bus_read32(g_m68k.a[2] + 0x4);
    func_table_call(0x012270);
    func_table_call(0x00C314);
    g_m68k.a[6] = 0x101508;
    func_table_call(0x00EEA6);
    /* WARNING: function did not end with RTS */
}

/* $00C1EC-$00C204  (5 instructions, 24 bytes) */
void jt_00C1EC(void) {
    func_table_call(0x00D6DA);
    func_table_call(0x014160);
    func_table_call(0x01229E);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00C204-$00C240  (14 instructions, 60 bytes) */
void sub_00C204(void) {
    g_m68k.a[6] = 0x101258;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x0))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[0] = bus_read32(0xc240 + (int16_t)(uint16_t)g_m68k.d[0]);
    func_table_call(g_m68k.a[0]);
    g_m68k.a[7] -= 2; bus_write16(g_m68k.a[7], g_m68k.d[0]);
    g_m68k.a[6] = 0x101508;
    func_table_call(0x00EEA6);
    func_table_call(0x00D6DA);
    func_table_call(0x014160);
    func_table_call(0x01229E);
    g_m68k.d[0] = (uint32_t)(int32_t)(int16_t)bus_read16(g_m68k.a[7]); g_m68k.a[7] += 2;
    return;
}

/* $00C250-$00C25C  (3 instructions, 12 bytes) */
void jt_00C250(void) {
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(g_m68k.a[6] + 0x0, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00C25C-$00C294  (12 instructions, 56 bytes) */
void jt_00C25C(void) {
    { uint32_t _ea = (g_m68k.a[6] + 0x8); uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, 0x1800); bus_write32(_ea, _tmp); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x8))); M68K_TST16((uint16_t)g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[6] + 0x6); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[0]); bus_write16(_ea, _tmp); }
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x6), 0x60);
    if (M68K_CC_LT) goto loc_00C27A;
    { uint16_t _mv = (uint16_t)(0x60); bus_write16(g_m68k.a[6] + 0x6, _mv); M68K_TST16(_mv); }
loc_00C27A:
    func_table_call(0x00C314);
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x6), 0x60);
    if (M68K_CC_LT) goto loc_00C28E;
    { uint16_t _mv = (uint16_t)(0x2); bus_write16(g_m68k.a[6] + 0x0, _mv); M68K_TST16(_mv); }
loc_00C28E:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00C294-$00C2AA  (5 instructions, 22 bytes) */
void jt_00C294(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1860)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x015256);
    { uint16_t _mv = (uint16_t)(0x3); bus_write16(g_m68k.a[6] + 0x0, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00C2AA-$00C314  (24 instructions, 106 bytes) */
void jt_00C2AA(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1011FC))); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x010E10);
    M68K_CMP16(g_m68k.d[0], 0x1);
    if (M68K_CC_NE) goto loc_00C2C0;
    bus_write16(g_m68k.a[6] + 0x2, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
loc_00C2C0:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1011FC))); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x010E5C);
    M68K_CMP16(g_m68k.d[0], 0x1);
    if (M68K_CC_NE) goto loc_00C2D6;
    bus_write16(g_m68k.a[6] + 0x2, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
loc_00C2D6:
    { uint32_t _ea = (g_m68k.a[6] + 0x2); uint16_t _tmp = bus_read16(_ea); M68K_SUB16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    if (M68K_CC_PL) goto loc_00C2F6;
    g_m68k.a[0] = bus_read32(g_m68k.a[6] + 0xc);
    func_table_call(0x012252);
    g_m68k.a[0] = bus_read32(g_m68k.a[6] + 0x10);
    func_table_call(0x012252);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    goto loc_00C312;
loc_00C2F6:
    g_m68k.a[6] = 0x101508;
    func_table_call(0x00EEA6);
    func_table_call(0x00D6DA);
    func_table_call(0x01229E);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
loc_00C312:
    return;
}

/* $00C314-$00C34A  (13 instructions, 54 bytes) */
void sub_00C314(void) {
    g_m68k.a[0] = bus_read32(g_m68k.a[6] + 0xc);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x4))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x6))); M68K_TST16((uint16_t)g_m68k.d[2]);
    M68K_ADD16(g_m68k.d[0], 0x0);
    M68K_ADD16(g_m68k.d[2], 0x0);
    func_table_call(0x01225C);
    g_m68k.a[0] = bus_read32(g_m68k.a[6] + 0x10);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x4))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x6))); M68K_TST16((uint16_t)g_m68k.d[2]);
    M68K_ADD16(g_m68k.d[0], 0x10);
    M68K_ADD16(g_m68k.d[2], 0x20);
    func_table_call(0x01225C);
    return;
}

/* $00C34A-$00C3A4  (23 instructions, 90 bytes) */
void sub_00C34A(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[6]);
    g_m68k.a[5] = 0x108000;
    M68K_TST16(bus_read16(g_m68k.a[5] + (-0x6dfe)));
    if (M68K_CC_EQ) goto loc_00C39E;
    g_m68k.d[0] = 0; g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[5] + (-0x7bd0)))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_AND16(g_m68k.d[0], 0xff);
    M68K_DIVU(g_m68k.d[0], 0xc);
    M68K_SWAP(g_m68k.d[0]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[5] + (-0x6b0a), _mv); M68K_TST16(_mv); }
    g_m68k.a[6] = (g_m68k.a[5] + (-0x6d94));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(0x2)); M68K_TST16((uint16_t)g_m68k.d[7]);
loc_00C376:
    { uint16_t _mv = (uint16_t)(0x2); bus_write16(g_m68k.a[5] + (-0x6b0c), _mv); M68K_TST16(_mv); }
    { uint32_t _ea = (g_m68k.a[5] + (-0x6b0c)); uint16_t _tmp = bus_read16(_ea); M68K_SUB16(_tmp, g_m68k.d[7]); bus_write16(_ea, _tmp); }
    func_table_call(0xc3a4);
    g_m68k.a[6] += 0xd8;
    { uint32_t _ea = (g_m68k.a[5] + (-0x6b0a)); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    M68K_CMP16(bus_read16(g_m68k.a[5] + (-0x6b0a)), 0xc);
    if (M68K_CC_CS) goto loc_00C39A;
    bus_write16(g_m68k.a[5] + (-0x6b0a), 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
loc_00C39A:
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[7]; _cnt--; g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_00C376; } }
loc_00C39E:
    g_m68k.a[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}

/* $00C3A4-$00C558  (114 instructions, 436 bytes) */
void sub_00C3A4(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[7]);
    g_m68k.a[1] = 0x0206F6;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[5] + (-0x6b0a)))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST8((uint8_t)g_m68k.d[0]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.a[1] = bus_read32(0x0209EA);
    g_m68k.a[2] = (g_m68k.a[6] + 0x0);
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(0x2b)); M68K_TST16((uint16_t)g_m68k.d[7]);
loc_00C3C8:
    { uint16_t _mv = (uint16_t)(_postinc16(1)); bus_write16(g_m68k.a[2], _mv); g_m68k.a[2] += 2; M68K_TST16(_mv); }
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[7]; _cnt--; g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_00C3C8; } }
    g_m68k.a[1] = bus_read32(0x0209EE);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[5] + (-0x6dfe)))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[1] = bus_read32(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    g_m68k.a[2] = (g_m68k.a[6] + 0x80);
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(0x15)); M68K_TST16((uint16_t)g_m68k.d[7]);
loc_00C3E8:
    { uint16_t _mv = (uint16_t)(_postinc16(1)); bus_write16(g_m68k.a[2], _mv); g_m68k.a[2] += 2; M68K_TST16(_mv); }
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[7]; _cnt--; g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_00C3E8; } }
    g_m68k.a[1] = bus_read32(0x0209F2);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[6])); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[1] = bus_read32(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    g_m68k.a[2] = (g_m68k.a[6] + 0x58);
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(0x5)); M68K_TST16((uint16_t)g_m68k.d[7]);
loc_00C406:
    { uint16_t _mv = (uint16_t)(_postinc16(1)); bus_write16(g_m68k.a[2], _mv); g_m68k.a[2] += 2; M68K_TST16(_mv); }
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[7]; _cnt--; g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_00C406; } }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[6])); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0xca86);
    g_m68k.a[1] = bus_read32(0x0209F6);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[5] + (-0x6e08)))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[1] = bus_read32(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[6])); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[1] = bus_read32(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    g_m68k.a[2] = (g_m68k.a[6] + 0x78);
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(0x3)); M68K_TST16((uint16_t)g_m68k.d[7]);
loc_00C436:
    { uint16_t _mv = (uint16_t)(_postinc16(1)); bus_write16(g_m68k.a[2], _mv); g_m68k.a[2] += 2; M68K_TST16(_mv); }
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[7]; _cnt--; g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_00C436; } }
    { uint16_t _mv = (uint16_t)(0x9ff); bus_write16(g_m68k.a[6] + 0x78, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[6] + 0xac, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[5] + (-0x6dfe))); bus_write16(g_m68k.a[6] + 0xae, _mv); M68K_TST16(_mv); }
    g_m68k.a[1] = 0x0206F6;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[5] + (-0x6b0a)))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[1] + 0x1 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST8((uint8_t)g_m68k.d[0]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[6] + 0xb0, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[6]); bus_write16(g_m68k.a[6] + 0xb2, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[6] + 0x82)); bus_write16(g_m68k.a[6] + 0xc0, _mv); M68K_TST16(_mv); }
    func_table_call(0xcaa8);
    func_table_call(0xcae4);
    g_m68k.a[1] = 0x021048;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[5] + (-0x6dfe)))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[1] = bus_read32(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[5] + (-0x6b0c)))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST8((uint8_t)g_m68k.d[0]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[6] + 0xd0, _mv); M68K_TST16(_mv); }
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_LSL16(g_m68k.d[0], 0x3);
    M68K_ADD16(g_m68k.d[1], g_m68k.d[1]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[1]);
    g_m68k.a[1] = 0x02101E;
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[5] + (-0x6dfe)))); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_ADD16(g_m68k.d[1], g_m68k.d[1]);
    M68K_ADD16(g_m68k.d[1], g_m68k.d[1]);
    g_m68k.a[1] = bus_read32(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[1]);
    g_m68k.a[1] = (g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[1] + 0x0)); bus_write16(g_m68k.a[6] + 0x8c, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[1] + 0x2)); bus_write16(g_m68k.a[6] + 0x90, _mv); M68K_TST16(_mv); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[1] + 0xa))); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[1] + 0xc))); M68K_TST16((uint16_t)g_m68k.d[3]);
    M68K_SUB16(g_m68k.d[2], bus_read16(g_m68k.a[6] + 0x8c));
    M68K_SUB16(g_m68k.d[3], bus_read16(g_m68k.a[6] + 0x90));
    func_table_call(0x01014C);
    M68K_LSL16(g_m68k.d[0], 0x8);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[6] + 0xa8, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[6] + 0xaa, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[5] + (-0x6b0c)))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[6] + 0x10); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[0]); bus_write16(_ea, _tmp); }
    func_table_call(0x012202);
    { uint32_t _mv = (uint32_t)(g_m68k.a[0]); bus_write32(g_m68k.a[6] + 0xb4, _mv); M68K_TST32(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x12))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], bus_read16(g_m68k.a[6] + 0x10));
    func_table_call(0x012256);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xb2))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], 0xf0);
    M68K_ADD16(g_m68k.d[0], bus_read16(g_m68k.a[6] + 0xb0));
    M68K_OR16(g_m68k.d[0], 0xff00);
    func_table_call(0x012280);
    func_table_call(0x012202);
    { uint32_t _mv = (uint32_t)(g_m68k.a[0]); bus_write32(g_m68k.a[6] + 0xbc, _mv); M68K_TST32(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x16))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], bus_read16(g_m68k.a[6] + 0x10));
    func_table_call(0x012256);
    func_table_call(0x012202);
    { uint32_t _mv = (uint32_t)(g_m68k.a[0]); bus_write32(g_m68k.a[6] + 0xb8, _mv); M68K_TST32(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x14))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], bus_read16(g_m68k.a[6] + 0x10));
    func_table_call(0x012256);
    func_table_call(0xd1be);
    func_table_call(0xd1ee);
    g_m68k.d[7] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}

/* $00C558-$00C598  (16 instructions, 64 bytes) */
void sub_00C558(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    g_m68k.a[5] = 0x108000;
    M68K_TST16(bus_read16(g_m68k.a[5] + (-0x6dfe)));
    if (M68K_CC_EQ) goto loc_00C592;
    bus_write16(g_m68k.a[5] + (-0x6b08), 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    bus_write16(g_m68k.a[5] + (-0x6b06), 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    g_m68k.a[4] = g_m68k.a[6];
    g_m68k.a[6] = (g_m68k.a[5] + (-0x6d94));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(0x2)); M68K_TST16((uint16_t)g_m68k.d[7]);
loc_00C57A:
    { uint16_t _mv = (uint16_t)(0x2); bus_write16(g_m68k.a[5] + (-0x6b0c), _mv); M68K_TST16(_mv); }
    { uint32_t _ea = (g_m68k.a[5] + (-0x6b0c)); uint16_t _tmp = bus_read16(_ea); M68K_SUB16(_tmp, g_m68k.d[7]); bus_write16(_ea, _tmp); }
    func_table_call(0xc598);
    g_m68k.a[6] += 0xd8;
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[7]; _cnt--; g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_00C57A; } }
loc_00C592:
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}

/* $00C598-$00C5C0  (12 instructions, 40 bytes) */
void sub_00C598(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[7]);
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x0), 0x1);
    if (M68K_CC_NE) goto loc_00C5A8;
    func_table_call(0xc814);
loc_00C5A8:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xac))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[0] = bus_read32(0xc5c0 + (int16_t)(uint16_t)g_m68k.d[0]);
    func_table_call(g_m68k.a[0]);
    func_table_call(0xc8a8);
    g_m68k.d[7] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}

/* $00C5E0-$00C5EA  (2 instructions, 10 bytes) */
void jt_00C5E0(void) {
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(g_m68k.a[6] + 0xac, _mv); M68K_TST16(_mv); }
    { func_table_call(0x00C5EA); return; }
    /* WARNING: function did not end with RTS */
}

/* $00C5EA-$00C66E  (34 instructions, 132 bytes) */
void jt_00C5EA(void) {
    func_table_call(0xc8f0);
    func_table_call(0xc9f4);
    func_table_call(0xca2e);
    func_table_call(0xca58);
    func_table_call(0xd1be);
    func_table_call(0xcc08);
    func_table_call(0xcd2e);
    func_table_call(0xcea6);
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x0), 0x0);
    if (M68K_CC_NE) goto loc_00C61A;
    func_table_call(0xcaa8);
    func_table_call(0xcae4);
loc_00C61A:
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x0), 0x0);
    if (M68K_CC_NE) goto loc_00C632;
    func_table_call(0xcb02);
    func_table_call(0xcbb4);
    func_table_call(0xd0ac);
    func_table_call(0xd0f8);
loc_00C632:
    func_table_call(0xcfba);
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x0), 0x0);
    if (M68K_CC_NE) goto loc_00C642;
    func_table_call(0xd080);
loc_00C642:
    func_table_call(0xd18a);
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x0), 0x0);
    if (M68K_CC_NE) goto loc_00C652;
    func_table_call(0xd142);
loc_00C652:
    func_table_call(0xd102);
    func_table_call(0xc904);
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x0), 0x0);
    if (M68K_CC_NE) goto loc_00C668;
    func_table_call(0xd1ee);
    goto loc_00C66C;
loc_00C668:
    func_table_call(0xd212);
loc_00C66C:
    return;
}

/* $00C66E-$00C69E  (11 instructions, 48 bytes) */
void jt_00C66E(void) {
    bus_write32(g_m68k.a[6] + 0xc6, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xaa))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], 0x400);
    M68K_ROL16(g_m68k.d[0], 0x5);
    M68K_AND16(g_m68k.d[0], 0x1f);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[6] + 0xc6, _mv); M68K_TST16(_mv); }
    M68K_ADD16(g_m68k.d[0], 0x280);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[6] + 0xca, _mv); M68K_TST16(_mv); }
    { uint32_t _mv = (uint32_t)(0x28000); bus_write32(g_m68k.a[6] + 0xc2, _mv); M68K_TST32(_mv); }
    { uint16_t _mv = (uint16_t)(0x5); bus_write16(g_m68k.a[6] + 0xac, _mv); M68K_TST16(_mv); }
    { func_table_call(0x00C71A); return; }
    /* WARNING: function did not end with RTS */
}

/* $00C69E-$00C6A4  (2 instructions, 6 bytes) */
void jt_00C69E(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}
