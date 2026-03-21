/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $00E292 - $010004 */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

/* $00E292-$00E2B0  (7 instructions, 30 bytes) */
void jt_00E292(void) {
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x2), 0x0);
    if (M68K_CC_NE) goto loc_00E2A0;
    { uint16_t _mv = (uint16_t)(0xb4); bus_write16(g_m68k.a[6] + 0x152, _mv); M68K_TST16(_mv); }
loc_00E2A0:
    { uint32_t _ea = (g_m68k.a[6] + 0x2); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(g_m68k.a[6] + 0x0, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00E2B0-$00E2C4  (5 instructions, 20 bytes) */
void jt_00E2B0(void) {
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x34), 0x10);
    if (M68K_CC_NE) goto loc_00E2BE;
    { uint32_t _ea = 0x101504; uint16_t _tmp = bus_read16(_ea); M68K_SUB16(_tmp, 0x1); bus_write16(_ea, _tmp); }
loc_00E2BE:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00E2C4-$00E326  (21 instructions, 98 bytes) */
void jt_00E2C4(void) {
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x34), 0xf);
    if (M68K_CC_NE) goto loc_00E320;
    M68K_CMP16(bus_read16(0x103332), 0x1);
    if (M68K_CC_NE) goto loc_00E2F0;
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x2), 0x0);
    if (M68K_CC_NE) goto loc_00E2E4;
    { uint16_t _mv = (uint16_t)(0xb4); bus_write16(g_m68k.a[6] + 0x152, _mv); M68K_TST16(_mv); }
loc_00E2E4:
    { uint32_t _ea = (g_m68k.a[6] + 0x2); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(g_m68k.a[6] + 0x0, _mv); M68K_TST16(_mv); }
    goto loc_00E320;
loc_00E2F0:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x101504))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_CMP16(g_m68k.d[0], bus_read16(0x101502));
    if (M68K_CC_NE) goto loc_00E31A;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x185d)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x015256);
    func_table_call(0x0149BA);
    { uint32_t _ea = 0x101502; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    func_table_call(0x016AA8);
loc_00E31A:
    { uint32_t _ea = 0x101504; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0x1); bus_write16(_ea, _tmp); }
loc_00E320:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00E326-$00E32C  (2 instructions, 6 bytes) */
void jt_00E326(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00E32C-$00E378  (18 instructions, 76 bytes) */
void jt_00E32C(void) {
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x34), 0x11);
    if (M68K_CC_NE) goto loc_00E372;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x186f)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x015256);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x14))); M68K_TST16((uint16_t)g_m68k.d[0]);
    if (M68K_CC_PL) goto loc_00E346;
    M68K_NEG16(g_m68k.d[0]);
loc_00E346:
    M68K_LSR16(g_m68k.d[0], 0x7);
    M68K_AND16(g_m68k.d[0], 0x7f);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[0] = 0x00E378;
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0])); bus_write16(g_m68k.a[6] + 0x2a, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[6] + 0x26, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(g_m68k.a[6] + 0x4, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[6] + 0x38, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[6] + 0x3a, _mv); M68K_TST16(_mv); }
loc_00E372:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00EB9E-$00EBD4  (19 instructions, 54 bytes) */
void sub_00EB9E(void) {
    g_m68k.d[0] = (uint32_t)(int32_t)(int8_t)(0x0); M68K_TST32(g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xc8))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_EXT32(g_m68k.d[0]);
    M68K_LSL32(g_m68k.d[0], 0x8);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xa))); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_DIVS(g_m68k.d[0], g_m68k.d[1]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xc0))); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_SUB16(g_m68k.d[1], g_m68k.d[0]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); bus_write16(g_m68k.a[6] + 0xd8, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (uint32_t)(int32_t)(int8_t)(0x0); M68K_TST32(g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xcc))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_EXT32(g_m68k.d[0]);
    M68K_LSL32(g_m68k.d[0], 0x8);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xa))); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_DIVS(g_m68k.d[0], g_m68k.d[1]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xc4))); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_SUB16(g_m68k.d[1], g_m68k.d[0]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); bus_write16(g_m68k.a[6] + 0xda, _mv); M68K_TST16(_mv); }
    return;
}

/* $00EDC6-$00EDF4  (12 instructions, 46 bytes) */
void sub_00EDC6(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xa))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_CMP16(g_m68k.d[0], bus_read16(g_m68k.a[6] + 0xc));
    if (M68K_CC_EQ) goto loc_00EDF2;
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[6] + 0xc, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xa))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x60))); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0xf4de);
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); bus_write16(g_m68k.a[6] + 0xe, _mv); M68K_TST16(_mv); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x62))); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0xf4de);
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); bus_write16(g_m68k.a[6] + 0x10, _mv); M68K_TST16(_mv); }
loc_00EDF2:
    return;
}

/* $00EDF4-$00EEA6  (44 instructions, 178 bytes) */
void sub_00EDF4(void) {
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[7]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x118))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_SUB16(g_m68k.d[0], bus_read16(g_m68k.a[6] + 0xd8));
    if (M68K_CC_PL) goto loc_00EE04;
    M68K_NEG16(g_m68k.d[0]);
loc_00EE04:
    M68K_CMP16(g_m68k.d[0], 0x80);
    if (M68K_CC_LE) goto loc_00EE0E;
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[7]);
loc_00EE0E:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x11a))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_SUB16(g_m68k.d[0], bus_read16(g_m68k.a[6] + 0xda));
    if (M68K_CC_PL) goto loc_00EE1A;
    M68K_NEG16(g_m68k.d[0]);
loc_00EE1A:
    M68K_CMP16(g_m68k.d[0], 0x80);
    if (M68K_CC_LE) goto loc_00EE24;
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[7]);
loc_00EE24:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xa))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x013538);
    func_table_call(0x014152);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xd8))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xda))); M68K_TST16((uint16_t)g_m68k.d[2]);
    M68K_CMP16(g_m68k.d[7], 0x1);
    if (M68K_CC_NE) goto loc_00EE66;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xd8))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xda))); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xa))); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[2])); M68K_TST16((uint16_t)g_m68k.d[3]);
    g_m68k.a[4] = bus_read32(0x101672);
    g_m68k.a[5] = bus_read32(0x101676);
    func_table_call(0x01348E);
    goto loc_00EE6C;
loc_00EE66:
    func_table_call(0x01352A);
loc_00EE6C:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xd8))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xda))); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x014144);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xc0))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xc4))); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x014752);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x101502))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xc4))); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x019F74);
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[6] + 0xd8)); bus_write16(g_m68k.a[6] + 0x118, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[6] + 0xda)); bus_write16(g_m68k.a[6] + 0x11a, _mv); M68K_TST16(_mv); }
    return;
}

/* $00EEA6-$00EEBC  (6 instructions, 22 bytes) */
void sub_00EEA6(void) {
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x6), 0x1);
    if (M68K_CC_NE) goto loc_00EEBA;
    func_table_call(0xeee2);
    func_table_call(0xef44);
    func_table_call(0xf0aa);
loc_00EEBA:
    return;
}

/* $00F130-$00F172  (17 instructions, 66 bytes) */
void sub_00F130(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xcc))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], bus_read16(g_m68k.a[6] + 0x16));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[7]);
    g_m68k.a[0] = bus_read32(g_m68k.a[6] + 0xec);
    M68K_ADD16(g_m68k.d[0], bus_read16(g_m68k.a[6] + 0x18));
    M68K_ADD16(g_m68k.d[0], bus_read16(g_m68k.a[6] + 0x28));
    func_table_call(0x012256);
    g_m68k.a[0] = bus_read32(g_m68k.a[6] + 0xf4);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[7])); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], bus_read16(g_m68k.a[6] + 0x1c));
    M68K_ADD16(g_m68k.d[0], bus_read16(g_m68k.a[6] + 0x28));
    func_table_call(0x012256);
    g_m68k.a[0] = bus_read32(g_m68k.a[6] + 0xf0);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[7])); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], bus_read16(g_m68k.a[6] + 0x1a));
    func_table_call(0x012256);
    return;
}

/* $00F172-$00F19E  (10 instructions, 44 bytes) */
void sub_00F172(void) {
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(g_m68k.a[6] + 0x6, _mv); M68K_TST16(_mv); }
    func_table_call(0xebd4);
    g_m68k.d[0] = (uint32_t)(int32_t)(int8_t)(0x1); M68K_TST32(g_m68k.d[0]);
    g_m68k.a[0] = bus_read32(g_m68k.a[6] + 0xec);
    func_table_call(0x012286);
    g_m68k.a[0] = bus_read32(g_m68k.a[6] + 0xf4);
    func_table_call(0x012286);
    g_m68k.a[0] = bus_read32(g_m68k.a[6] + 0xf0);
    func_table_call(0x012286);
    return;
}

/* $00F19E-$00F1C6  (9 instructions, 40 bytes) */
void sub_00F19E(void) {
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[6] + 0x6, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (uint32_t)(int32_t)(int8_t)(0x0); M68K_TST32(g_m68k.d[0]);
    g_m68k.a[0] = bus_read32(g_m68k.a[6] + 0xec);
    func_table_call(0x012286);
    g_m68k.a[0] = bus_read32(g_m68k.a[6] + 0xf4);
    func_table_call(0x012286);
    g_m68k.a[0] = bus_read32(g_m68k.a[6] + 0xf0);
    func_table_call(0x012286);
    return;
}

/* $00F264-$00F29C  (14 instructions, 56 bytes) */
void sub_00F264(void) {
    { uint32_t _ea = (g_m68k.a[6] + 0x116); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x116), 0xa);
    if (M68K_CC_CS) goto loc_00F29A;
    M68K_TST16(bus_read16(0x1014F8));
    if (M68K_CC_EQ) goto loc_00F29A;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1871)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x015256);
    func_table_call(0x00F8E2);
    bus_write16(g_m68k.a[6] + 0x116, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x14))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_MULS(g_m68k.d[0], 0xc0);
    M68K_LSR32(g_m68k.d[0], 0x8);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[6] + 0x14, _mv); M68K_TST16(_mv); }
loc_00F29A:
    return;
}

/* $00F29C-$00F2A2  (2 instructions, 6 bytes) */
void sub_00F29C(void) {
    bus_write16(g_m68k.a[6] + 0x13a, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    return;
}

/* $00F326-$00F33A  (4 instructions, 20 bytes) */
void sub_00F326(void) {
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[6] + 0x38, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[6] + 0x3c, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[6] + 0x3e, _mv); M68K_TST16(_mv); }
    return;
}

/* $00F354-$00F360  (3 instructions, 12 bytes) */
void sub_00F354(void) {
    bus_write16(g_m68k.a[6] + 0x134, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(g_m68k.a[6] + 0x132, _mv); M68K_TST16(_mv); }
    return;
}

/* $00F3E2-$00F40A  (12 instructions, 40 bytes) */
void sub_00F3E2(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x14))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x108))); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_CMP16(g_m68k.d[0], g_m68k.d[1]);
    if (M68K_CC_GE) goto loc_00F3F6;
    { uint16_t _mv = (uint16_t)(0x2); bus_write16(g_m68k.a[6] + 0x11c, _mv); M68K_TST16(_mv); }
    goto loc_00F408;
loc_00F3F6:
    M68K_CMP16(g_m68k.d[0], g_m68k.d[1]);
    if (M68K_CC_LE) goto loc_00F402;
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(g_m68k.a[6] + 0x11c, _mv); M68K_TST16(_mv); }
    goto loc_00F408;
loc_00F402:
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[6] + 0x11c, _mv); M68K_TST16(_mv); }
loc_00F408:
    return;
}

/* $00F4DE-$00F4EA  (5 instructions, 12 bytes) */
void sub_00F4DE(void) {
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x100)); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_SUB16(g_m68k.d[1], g_m68k.d[0]);
    M68K_MULS(g_m68k.d[1], g_m68k.d[2]);
    M68K_LSR16(g_m68k.d[1], 0x8);
    return;
}

/* $00F5DA-$00F696  (51 instructions, 188 bytes) */
void sub_00F5DA(void) {
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x2c), 0x0);
    if (M68K_CC_NE) goto loc_00F5E4;
    return;
loc_00F5E4:
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x30), 0x0);
    if (M68K_CC_NE) goto loc_00F5FE;
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x11e), 0x0);
    if (M68K_CC_NE) goto loc_00F5FE;
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x22), 0x1);
    if (M68K_CC_EQ) goto loc_00F5FE;
    return;
loc_00F5FE:
    { uint32_t _ea = (g_m68k.a[6] + 0x50); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    g_m68k.a[0] = 0x026BC0;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x14))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_LSR16(g_m68k.d[0], 0x5);
    M68K_AND16(g_m68k.d[0], 0x7c);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_CMP16(g_m68k.d[1], bus_read16(g_m68k.a[6] + 0x50));
    if (M68K_CC_HI) goto loc_00F694;
    bus_write16(g_m68k.a[6] + 0x50, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[0] + 0x2 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xf8))); M68K_TST16((uint16_t)g_m68k.d[3]);
    M68K_AND16(g_m68k.d[3], 0xff);
    M68K_CMP8(g_m68k.d[3], 0xff);
    if (M68K_CC_EQ) goto loc_00F694;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xdc))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], 0x400);
    M68K_ROL16(g_m68k.d[0], 0x5);
    M68K_AND16(g_m68k.d[0], 0x1f);
    M68K_ADD16(g_m68k.d[0], 0x11);
    { uint32_t _ea = (g_m68k.a[6] + 0x52); uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, 0xffff); bus_write16(_ea, _tmp); }
    if (M68K_CC_EQ) goto loc_00F654;
    M68K_SUB16(g_m68k.d[0], 0x3);
loc_00F654:
    M68K_AND16(g_m68k.d[0], 0x1f);
    g_m68k.a[0] = 0x026C40;
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST8((uint8_t)g_m68k.d[2]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[0] + 0x1 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST8((uint8_t)g_m68k.d[0]);
    M68K_EXT16(g_m68k.d[2]);
    M68K_EXT16(g_m68k.d[0]);
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x22), 0x1);
    if (M68K_CC_NE) goto loc_00F67A;
    M68K_ASR16(g_m68k.d[2], 0x1);
    M68K_ASR16(g_m68k.d[0], 0x1);
loc_00F67A:
    M68K_MULS(g_m68k.d[0], bus_read16(g_m68k.a[6] + 0xa));
    M68K_ASR32(g_m68k.d[0], 0x8);
    M68K_MULS(g_m68k.d[2], bus_read16(g_m68k.a[6] + 0xa));
    M68K_ASR32(g_m68k.d[2], 0x8);
    M68K_ADD16(g_m68k.d[0], bus_read16(g_m68k.a[6] + 0xc0));
    M68K_ADD16(g_m68k.d[2], bus_read16(g_m68k.a[6] + 0xc4));
    func_table_call(0x01458C);
loc_00F694:
    return;
}

/* $00F6E6-$00F6EC  (2 instructions, 6 bytes) */
void sub_00F6E6(void) {
    bus_write16(g_m68k.a[6] + 0x13c, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    return;
}

/* $00F6EC-$00F7C0  (55 instructions, 212 bytes) */
void sub_00F6EC(void) {
    { uint32_t _ea = (g_m68k.a[6] + 0x13c); uint16_t _tmp = bus_read16(_ea); M68K_SUB16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x13c), 0x0);
    if (M68K_CC_GT) goto loc_00F7BE;
    { uint32_t _ea = (g_m68k.a[6] + 0x13c); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x22), 0x1);
    if (M68K_CC_NE) goto loc_00F70C;
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[7]);
    goto loc_00F726;
loc_00F70C:
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x11e), 0x1);
    if (M68K_CC_NE) goto loc_00F722;
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x14), 0x200);
    if (M68K_CC_LT) goto loc_00F720;
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[7]);
loc_00F720:
    goto loc_00F726;
loc_00F722:
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[7]);
loc_00F726:
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x30), 0x0);
    if (M68K_CC_EQ) goto loc_00F73A;
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x30), 0x2);
    if (M68K_CC_EQ) goto loc_00F73A;
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[7]);
loc_00F73A:
    M68K_CMP16(g_m68k.d[7], 0x1);
    if (M68K_CC_NE) goto loc_00F7BE;
    g_m68k.a[0] = 0x026C80;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x14))); M68K_TST16((uint16_t)g_m68k.d[0]);
    if (M68K_CC_PL) goto loc_00F750;
    M68K_NEG16(g_m68k.d[0]);
loc_00F750:
    M68K_LSR16(g_m68k.d[0], 0x7);
    M68K_AND16(g_m68k.d[0], 0x1f);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST8((uint8_t)g_m68k.d[0]);
    M68K_AND16(g_m68k.d[0], 0xff);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[6] + 0x13c, _mv); M68K_TST16(_mv); }
    g_m68k.a[0] = 0x026CA0;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xdc))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ROL16(g_m68k.d[0], 0x5);
    M68K_AND16(g_m68k.d[0], 0x1f);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST16((uint16_t)g_m68k.d[3]);
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x30), 0x2);
    if (M68K_CC_NE) goto loc_00F784;
    M68K_ADD16(g_m68k.d[3], 0x20);
loc_00F784:
    g_m68k.d[1] = (uint32_t)(int32_t)(int8_t)(0x0); M68K_TST32(g_m68k.d[1]);
    g_m68k.a[0] = 0x026CE0;
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x54))); M68K_TST16((uint16_t)g_m68k.d[7]);
    M68K_LSL16(g_m68k.d[7], 0x3);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xc0))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], bus_read16(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[7]));
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xc4))); M68K_TST16((uint16_t)g_m68k.d[2]);
    M68K_ADD16(g_m68k.d[2], bus_read16(g_m68k.a[0] + 0x2 + (int16_t)(uint16_t)g_m68k.d[7]));
    func_table_call(0x01458C);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xc0))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], bus_read16(g_m68k.a[0] + 0x4 + (int16_t)(uint16_t)g_m68k.d[7]));
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xc4))); M68K_TST16((uint16_t)g_m68k.d[2]);
    M68K_ADD16(g_m68k.d[2], bus_read16(g_m68k.a[0] + 0x6 + (int16_t)(uint16_t)g_m68k.d[7]));
    func_table_call(0x01458C);
loc_00F7BE:
    return;
}

/* $00F7C0-$00F7D6  (4 instructions, 22 bytes) */
void sub_00F7C0(void) {
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[6] + 0x13e, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[6] + 0x140, _mv); M68K_TST16(_mv); }
    { uint32_t _mv = (uint32_t)(0x26ea0); bus_write32(g_m68k.a[6] + 0x142, _mv); M68K_TST32(_mv); }
    return;
}

/* $00F80C-$00F87A  (29 instructions, 110 bytes) */
void sub_00F80C(void) {
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x13e), 0x1);
    if (M68K_CC_NE) goto loc_00F878;
    { uint32_t _ea = (g_m68k.a[6] + 0x140); uint16_t _tmp = bus_read16(_ea); M68K_SUB16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x140), 0x0);
    if (M68K_CC_GT) goto loc_00F878;
    g_m68k.a[0] = bus_read32(g_m68k.a[6] + 0x142);
    M68K_CMP16(bus_read16(g_m68k.a[0]), 0xffff);
    if (M68K_CC_NE) goto loc_00F832;
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[6] + 0x13e, _mv); M68K_TST16(_mv); }
    goto loc_00F878;
loc_00F832:
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[0])); bus_write16(g_m68k.a[6] + 0x140, _mv); M68K_TST16(_mv); }
    { uint32_t _ea = (g_m68k.a[6] + 0x142); uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, 0x2); bus_write32(_ea, _tmp); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0xc0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x015256);
    g_m68k.a[0] = 0x026DE0;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x54))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0xc)); M68K_TST16((uint16_t)g_m68k.d[3]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[0] + 0x2 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST16((uint16_t)g_m68k.d[2]);
    M68K_ADD16(g_m68k.d[2], bus_read16(g_m68k.a[6] + 0xc4));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x26))); M68K_TST16((uint16_t)g_m68k.d[7]);
    M68K_LSR16(g_m68k.d[7], 0x8);
    M68K_SUB16(g_m68k.d[2], g_m68k.d[7]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], bus_read16(g_m68k.a[6] + 0xc0));
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x80)); M68K_TST16((uint16_t)g_m68k.d[1]);
    func_table_call(0x01458C);
loc_00F878:
    return;
}

/* $00F87A-$00F884  (2 instructions, 10 bytes) */
void sub_00F87A(void) {
    { uint16_t _mv = (uint16_t)(0x6); bus_write16(0x10167A, _mv); M68K_TST16(_mv); }
    return;
}

/* $00F884-$00F8AE  (9 instructions, 42 bytes) */
void sub_00F884(void) {
    { uint32_t _ea = 0x10167A; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x11e), 0x1);
    if (M68K_CC_NE) goto loc_00F8AC;
    M68K_CMP16(bus_read16(0x10167A), 0x5);
    if (M68K_CC_LS) goto loc_00F8AC;
    bus_write16(0x10167A, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0xd6)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x015256);
loc_00F8AC:
    return;
}

/* $00F8AE-$00F8C2  (5 instructions, 20 bytes) */
void sub_00F8AE(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x101202))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0xf8c2 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x015256);
    return;
}

/* $00F8D0-$00F8DA  (2 instructions, 10 bytes) */
void sub_00F8D0(void) {
    { uint16_t _mv = (uint16_t)(0xb); bus_write16(0x10167C, _mv); M68K_TST16(_mv); }
    return;
}

/* $00F8DA-$00F8E2  (2 instructions, 8 bytes) */
void sub_00F8DA(void) {
    { uint32_t _ea = 0x10167C; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    return;
}

/* $00F8E2-$00F8FE  (6 instructions, 28 bytes) */
void sub_00F8E2(void) {
    M68K_CMP16(bus_read16(0x10167C), 0xa);
    if (M68K_CC_LS) goto loc_00F8FC;
    bus_write16(0x10167C, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0xd1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x015256);
loc_00F8FC:
    return;
}

/* $00F8FE-$00F908  (2 instructions, 10 bytes) */
void sub_00F8FE(void) {
    { uint16_t _mv = (uint16_t)(0xb); bus_write16(0x10167E, _mv); M68K_TST16(_mv); }
    return;
}

/* $00F908-$00F942  (13 instructions, 58 bytes) */
void sub_00F908(void) {
    { uint32_t _ea = 0x10167E; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x3e), 0x1);
    if (M68K_CC_NE) goto loc_00F940;
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x22), 0x1);
    if (M68K_CC_EQ) goto loc_00F940;
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x14), 0x400);
    if (M68K_CC_LT) goto loc_00F940;
    M68K_CMP16(bus_read16(0x10167E), 0x5);
    if (M68K_CC_LS) goto loc_00F940;
    bus_write16(0x10167E, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0xd6)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x015256);
loc_00F940:
    return;
}

/* $00F942-$00F94C  (2 instructions, 10 bytes) */
void sub_00F942(void) {
    { uint16_t _mv = (uint16_t)(0x6); bus_write16(0x101680, _mv); M68K_TST16(_mv); }
    return;
}

/* $00F94C-$00F984  (13 instructions, 56 bytes) */
void sub_00F94C(void) {
    { uint32_t _ea = 0x101680; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x22), 0x1);
    if (M68K_CC_NE) goto loc_00F982;
    M68K_CMP16(bus_read16(0x101680), 0x5);
    if (M68K_CC_LS) goto loc_00F982;
    bus_write16(0x101680, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    g_m68k.a[0] = 0x00F984;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x30))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST16((uint16_t)g_m68k.d[0]);
    if (M68K_CC_MI) goto loc_00F982;
    func_table_call(0x015256);
loc_00F982:
    return;
}

/* $00F9A8-$00F9B2  (2 instructions, 10 bytes) */
void sub_00F9A8(void) {
    { uint16_t _mv = (uint16_t)(0x6); bus_write16(0x101682, _mv); M68K_TST16(_mv); }
    return;
}

/* $00F9B2-$00F9E6  (11 instructions, 52 bytes) */
void sub_00F9B2(void) {
    { uint32_t _ea = 0x101682; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1011FC))); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x010E10);
    M68K_CMP16(g_m68k.d[0], 0x1);
    if (M68K_CC_NE) goto loc_00F9E4;
    M68K_CMP16(bus_read16(0x101682), 0x5);
    if (M68K_CC_LS) goto loc_00F9E4;
    bus_write16(0x101682, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0xd4)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x015256);
loc_00F9E4:
    return;
}

/* $00F9E6-$00FA0C  (6 instructions, 38 bytes) */
void sub_00F9E6(void) {
    { uint16_t _mv = (uint16_t)(0xffff); bus_write16(0x101694, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(0x101696, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x2); bus_write16(0x101690, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(0x101698, _mv); M68K_TST16(_mv); }
    func_table_call(0xfa0c);
    return;
}

/* $00FA18-$00FB78  (79 instructions, 352 bytes) */
void sub_00FA18(void) {
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x4), 0x1);
    if (M68K_CC_NE) goto loc_00FA44;
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x10a), 0x1);
    if (M68K_CC_EQ) goto loc_00FA40;
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(0x101690, _mv); M68K_TST16(_mv); }
    func_table_call(0xfa0c);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x9)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0xfc0a);
loc_00FA40:
    goto loc_00FA5A;
loc_00FA44:
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x10a), 0x1);
    if (M68K_CC_NE) goto loc_00FA5A;
    { uint16_t _mv = (uint16_t)(0x2); bus_write16(0x101690, _mv); M68K_TST16(_mv); }
    func_table_call(0xfa0c);
loc_00FA5A:
    M68K_CMP16(bus_read16(0x101690), 0x1);
    if (M68K_CC_EQ) goto loc_00FB26;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x14))); M68K_TST16((uint16_t)g_m68k.d[0]);
    if (M68K_CC_PL) goto loc_00FA76;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    goto loc_00FA8C;
loc_00FA76:
    M68K_LSR16(g_m68k.d[0], 0x7);
    M68K_AND16(g_m68k.d[0], 0x1f);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[0] = 0x00FB78;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_AND16(g_m68k.d[0], 0xf);
loc_00FA8C:
    M68K_CMP16(bus_read16(0x101690), 0x2);
    if (M68K_CC_NE) goto loc_00FABA;
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(0x101696, _mv); M68K_TST16(_mv); }
    g_m68k.a[0] = 0x00FBB8;
    M68K_LSL16(g_m68k.d[0], 0x3);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0xfc0a);
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(0x101690, _mv); M68K_TST16(_mv); }
    goto loc_00FB26;
loc_00FABA:
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x101696))); M68K_TST16((uint16_t)g_m68k.d[1]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(0x101696, _mv); M68K_TST16(_mv); }
    M68K_CMP16(g_m68k.d[0], g_m68k.d[1]);
    if (M68K_CC_EQ) goto loc_00FB00;
    bus_write16(0x101698, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP16(g_m68k.d[0], g_m68k.d[1]);
    if (M68K_CC_LE) goto loc_00FAE0;
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x2)); M68K_TST16((uint16_t)g_m68k.d[1]);
    goto loc_00FAEA;
loc_00FAE0:
    M68K_CMP16(g_m68k.d[0], g_m68k.d[1]);
    if (M68K_CC_GE) goto loc_00FAEA;
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x4)); M68K_TST16((uint16_t)g_m68k.d[1]);
loc_00FAEA:
    g_m68k.a[0] = 0x00FBB8;
    M68K_LSL16(g_m68k.d[0], 0x3);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[1]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0xfc0a);
    goto loc_00FB26;
loc_00FB00:
    { uint32_t _ea = 0x101698; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    M68K_CMP16(bus_read16(0x101698), 0x5);
    if (M68K_CC_NE) goto loc_00FB26;
    M68K_CMP16(g_m68k.d[0], 0x1);
    if (M68K_CC_NE) goto loc_00FB26;
    g_m68k.a[0] = 0x00FBB8;
    M68K_LSL16(g_m68k.d[0], 0x3);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0xfc0a);
loc_00FB26:
    { uint32_t _ea = 0x101692; uint16_t _tmp = bus_read16(_ea); M68K_SUB16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    M68K_TST16(bus_read16(0x101692));
    if (M68K_CC_PL) goto loc_00FB76;
    { uint32_t _ea = 0x101692; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    func_table_call(0xfc48);
    M68K_CMP16(g_m68k.d[0], 0xffff);
    if (M68K_CC_EQ) goto loc_00FB76;
    g_m68k.a[7] -= 2; bus_write16(g_m68k.a[7], g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x101694))); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0xfbe0);
    g_m68k.d[0] = (uint32_t)(int32_t)(int16_t)bus_read16(g_m68k.a[7]); g_m68k.a[7] += 2;
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(0x101694, _mv); M68K_TST16(_mv); }
    g_m68k.a[0] = 0x026EE0;
    M68K_LSL16(g_m68k.d[0], 0x3);
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[0] + 0x4 + (int16_t)(uint16_t)g_m68k.d[0])); bus_write16(0x101692, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x015256);
loc_00FB76:
    return;
}

/* $00FC74-$00FC84  (4 instructions, 16 bytes) */
void sub_00FC74(void) {
    g_m68k.a[3] = 0x027936;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x7045)); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x10052);
    return;
}

/* $00FC84-$00FC9E  (4 instructions, 26 bytes) */
void sub_00FC84(void) {
    { uint16_t _mv = (uint16_t)(0xf); bus_write16(0x10169E, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(0x10169A, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(0x10169C, _mv); M68K_TST16(_mv); }
    return;
}

/* $00FC9E-$00FD1C  (25 instructions, 126 bytes) */
void sub_00FC9E(void) {
    M68K_CMP16(bus_read16(0x10169A), 0x0);
    if (M68K_CC_NE) goto loc_00FCD6;
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x130), 0x1);
    if (M68K_CC_NE) goto loc_00FCD4;
    { uint32_t _ea = 0x10169E; uint16_t _tmp = bus_read16(_ea); M68K_SUB16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    M68K_TST16(bus_read16(0x10169E));
    if (M68K_CC_PL) goto loc_00FCD4;
    { uint32_t _ea = 0x10169E; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(0xf); bus_write16(0x10169E, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(0x10169A, _mv); M68K_TST16(_mv); }
loc_00FCD4:
    goto loc_00FD02;
loc_00FCD6:
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x130), 0x0);
    if (M68K_CC_NE) goto loc_00FD02;
    { uint32_t _ea = 0x10169E; uint16_t _tmp = bus_read16(_ea); M68K_SUB16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    M68K_TST16(bus_read16(0x10169E));
    if (M68K_CC_PL) goto loc_00FD02;
    { uint32_t _ea = 0x10169E; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(0xf); bus_write16(0x10169E, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(0x10169A, _mv); M68K_TST16(_mv); }
loc_00FD02:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x10169A))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_CMP16(g_m68k.d[0], bus_read16(0x10169C));
    if (M68K_CC_EQ) goto loc_00FD1A;
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(0x10169C, _mv); M68K_TST16(_mv); }
    func_table_call(0xfd1c);
loc_00FD1A:
    return;
}

/* $00FD34-$00FD4E  (6 instructions, 26 bytes) */
void sub_00FD34(void) {
    g_m68k.a[0] = 0x00FD68;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x726e)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x9)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x300)); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x011A34);
    return;
}

/* $00FD4E-$00FD68  (6 instructions, 26 bytes) */
void sub_00FD4E(void) {
    g_m68k.a[0] = 0x00FD6E;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x726e)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x9)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x300)); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x011A34);
    return;
}

/* $00FD74-$00FDB8  (17 instructions, 68 bytes) */
void sub_00FD74(void) {
    M68K_TST16(bus_read16(0x101202));
    if (M68K_CC_NE) goto loc_00FD8C;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x735a)); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.a[3] = 0x0277FE;
    func_table_call(0x10052);
    goto loc_00FDB6;
loc_00FD8C:
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x735a)); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.a[3] = 0x02782E;
    func_table_call(0x10052);
    g_m68k.a[3] = 0x027852;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x101202))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[3] = bus_read32(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x747a)); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x10052);
loc_00FDB6:
    return;
}

/* $00FDB8-$00FDFC  (18 instructions, 68 bytes) */
void sub_00FDB8(void) {
    g_m68k.a[0] = 0x1016AA;
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(0x7)); M68K_TST16((uint16_t)g_m68k.d[7]);
loc_00FDC2:
    bus_write32(g_m68k.a[0], 0); g_m68k.a[0] += 4; g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[7]; _cnt--; g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_00FDC2; } }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x7)); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_LSL16(g_m68k.d[0], 0x5);
    M68K_ADD16(g_m68k.d[0], 0x3);
    M68K_ADD16(g_m68k.d[0], 0x7000);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(0x1016C2, _mv); M68K_TST16(_mv); }
    g_m68k.a[0] = 0x00FDFC;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x2)); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_LSL16(g_m68k.d[0], 0x5);
    M68K_ADD16(g_m68k.d[0], 0x3);
    M68K_ADD16(g_m68k.d[0], 0x7000);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x9)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x300)); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x011A34);
    return;
}

/* $00FE0A-$00FE60  (15 instructions, 86 bytes) */
void sub_00FE0A(void) {
    { uint32_t _mv = (uint32_t)(bus_read32(0x10333C)); bus_write32(0x1016D4, _mv); M68K_TST32(_mv); }
    { uint32_t _ea = 0x1016D4; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, 0x8000); bus_write32(_ea, _tmp); }
    g_m68k.a[1] = 0x1016D4;
    func_table_call(0x011120);
    g_m68k.a[1] = 0x1016AA;
    { uint32_t _mv = (uint32_t)(_postinc32(3)); bus_write32(g_m68k.a[1], _mv); g_m68k.a[1] += 4; M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[3])); bus_write32(g_m68k.a[1], _mv); M68K_TST32(_mv); }
    { uint8_t _mv = (uint8_t)(0x27); bus_write8(0x1016AC, _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(0x22); bus_write8(0x1016AF, _mv); M68K_TST8(_mv); }
    g_m68k.a[0] = 0x1016AA;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1016C2))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x9)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x300)); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x011A34);
    return;
}

/* $00FE60-$00FEB8  (18 instructions, 88 bytes) */
void sub_00FE60(void) {
    bus_write32(0x1016D0, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint16_t _mv = (uint16_t)(bus_read16(0x103334)); bus_write16(0x1016C4, _mv); M68K_TST16(_mv); }
    bus_write32(0x1016C6, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    bus_write32(0x1016CA, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint16_t _mv = (uint16_t)(0x8); bus_write16(0x1016CE, _mv); M68K_TST16(_mv); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x20)); M68K_TST16((uint16_t)g_m68k.d[2]);
    M68K_LSL16(g_m68k.d[2], 0x5);
    M68K_ADD16(g_m68k.d[2], 0x6);
    M68K_ADD16(g_m68k.d[2], 0x7000);
    g_m68k.a[3] = 0x00FEC0;
    func_table_call(0x10052);
    g_m68k.a[0] = 0x00FEC6;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x7424)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x9)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x300)); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x011A34);
    func_table_call(0xfecc);
    return;
}

/* $00FECC-$00FEE2  (4 instructions, 22 bytes) */
void sub_00FECC(void) {
    M68K_CMP16(bus_read16(0x103334), 0x0);
    if (M68K_CC_NE) { func_table_call(0x00FEFA); return; }
    { uint16_t _mv = (uint16_t)(0x7); bus_write16(0x1016CE, _mv); M68K_TST16(_mv); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x20)); M68K_TST16((uint16_t)g_m68k.d[2]);
    /* WARNING: function did not end with RTS */
}

/* $00FEE2-$00FFE0  (63 instructions, 254 bytes) */
void jt_00FEE2(void) {
    M68K_LSL16(g_m68k.d[2], 0x5);
    M68K_ADD16(g_m68k.d[2], 0x6);
    M68K_ADD16(g_m68k.d[2], 0x7000);
    g_m68k.a[3] = 0x00FEC0;
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1016CE))); M68K_TST16((uint16_t)g_m68k.d[4]);
    func_table_call(0x10082);
loc_00FEFA:
    g_m68k.d[0] = (uint32_t)(int32_t)(int8_t)(0x0); M68K_TST32(g_m68k.d[0]);
    g_m68k.d[0] = bus_read32(0x103334); M68K_TST32((uint32_t)g_m68k.d[0]);
    M68K_TST32(bus_read32(0x103334));
    if (M68K_CC_PL) goto loc_00FF0C;
    M68K_NEG32(g_m68k.d[0]);
loc_00FF0C:
    M68K_ADD32(g_m68k.d[0], 0x8000);
    M68K_LSR32(g_m68k.d[0], 0x8);
    M68K_LSR32(g_m68k.d[0], 0x8);
    if (M68K_CC_EQ) goto loc_00FF1C;
    M68K_DIVU(g_m68k.d[0], 0x3c);
loc_00FF1C:
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    M68K_CMP16(g_m68k.d[0], 0x64);
    if (M68K_CC_LE) goto loc_00FF2A;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x64)); M68K_TST16((uint16_t)g_m68k.d[0]);
loc_00FF2A:
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_ADD16(g_m68k.d[1], g_m68k.d[1]);
    g_m68k.a[0] = 0x026FC6;
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[1])); bus_write16(0x1016C6, _mv); M68K_TST16(_mv); }
    M68K_LSR32(g_m68k.d[0], 0x8);
    M68K_LSR32(g_m68k.d[0], 0x7);
    M68K_AND16(g_m68k.d[0], 0xfffe);
    g_m68k.a[0] = 0x02708E;
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0])); bus_write16(0x1016CA, _mv); M68K_TST16(_mv); }
    g_m68k.a[0] = 0x026F46;
    g_m68k.a[1] = 0x027106;
    g_m68k.d[0] = (uint32_t)(int32_t)(int8_t)(0x0); M68K_TST32(g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(0x1016C6))); M68K_TST8((uint8_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.a[3] = bus_read32(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x7383)); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1016CE))); M68K_TST16((uint16_t)g_m68k.d[4]);
    func_table_call(0x10082);
    g_m68k.d[0] = (uint32_t)(int32_t)(int8_t)(0x0); M68K_TST32(g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(0x1016C7))); M68K_TST8((uint8_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.a[3] = bus_read32(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x73c3)); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1016CE))); M68K_TST16((uint16_t)g_m68k.d[4]);
    func_table_call(0x10082);
    g_m68k.a[1] = 0x0271F6;
    g_m68k.d[0] = (uint32_t)(int32_t)(int8_t)(0x0); M68K_TST32(g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(0x1016CA))); M68K_TST8((uint8_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.a[3] = bus_read32(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x7425)); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1016CE))); M68K_TST16((uint16_t)g_m68k.d[4]);
    func_table_call(0x10082);
    g_m68k.d[0] = (uint32_t)(int32_t)(int8_t)(0x0); M68K_TST32(g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(0x1016CB))); M68K_TST8((uint8_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.a[3] = bus_read32(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x7465)); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1016CE))); M68K_TST16((uint16_t)g_m68k.d[4]);
    /* WARNING: function did not end with RTS */
}

/* $00FFE0-$010002  (8 instructions, 34 bytes) */
void jt_00FFE0(void) {
    func_table_call(0x10082);
    M68K_TST16(bus_read16(0x103334));
    if (M68K_CC_PL) { func_table_call(0x010002); return; }
    M68K_TST16(bus_read16(0x1016C4));
    if (M68K_CC_MI) { func_table_call(0x010002); return; }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x7345)); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.a[3] = 0x00FEB8;
    func_table_call(0x10052);
    /* WARNING: function did not end with RTS */
}

/* $010000-$010004  (1 instructions, 4 bytes) */
void jt_010000(void) {
    { uint32_t _ea = g_m68k.a[2]; uint16_t _tmp = bus_read16(_ea); M68K_OR16(_tmp, 0x33f9); bus_write16(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}
