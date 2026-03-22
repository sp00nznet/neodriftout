/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $00EB74 - $00F9E6 */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

/* $00EB74-$00EB9E  (13 instructions, 42 bytes) */
void sub_00EB74(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xc0))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_SUB16(g_m68k.d[0], bus_read16(g_m68k.a[6] + 0xd8));
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xa))); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_MULS(g_m68k.d[0], g_m68k.d[1]);
    M68K_ASR32(g_m68k.d[0], 0x8);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[6] + 0xc8, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xc4))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_SUB16(g_m68k.d[0], bus_read16(g_m68k.a[6] + 0xda));
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xa))); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_MULS(g_m68k.d[0], g_m68k.d[1]);
    M68K_ASR32(g_m68k.d[0], 0x8);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[6] + 0xcc, _mv); M68K_TST16(_mv); }
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

/* $00EBD4-$00EBD8  (1 instructions, 4 bytes) */
void sub_00EBD4(void) {
    { func_table_call(0xed2e); return; }
    /* WARNING: function did not end with RTS */
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

/* $00EEBC-$00EEE2  (11 instructions, 38 bytes) */
void sub_00EEBC(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xa))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_MULU(g_m68k.d[0], bus_read16(g_m68k.a[6] + 0x26));
    M68K_ASR32(g_m68k.d[0], 0x8);
    M68K_ASR32(g_m68k.d[0], 0x8);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[6] + 0x28, _mv); M68K_TST16(_mv); }
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x6), 0x1);
    if (M68K_CC_NE) goto loc_00EEE0;
    func_table_call(0xeee2);
    func_table_call(0xef9e);
    func_table_call(0xf0aa);
loc_00EEE0:
    return;
}

/* $00EEE2-$00EF44  (24 instructions, 98 bytes) */
void sub_00EEE2(void) {
    g_m68k.a[0] = bus_read32(g_m68k.a[6] + 0xec);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xa))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xa))); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x012266);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x54))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[3] = bus_read32(g_m68k.a[6] + 0x6c);
    g_m68k.a[3] = bus_read32(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    func_table_call(0x012270);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xc8))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xcc))); M68K_TST16((uint16_t)g_m68k.d[2]);
    { uint32_t _ea = (g_m68k.a[6] + 0x56); uint16_t _tmp = bus_read16(_ea); M68K_SUB16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    if (M68K_CC_GE) goto loc_00EF28;
    { uint32_t _ea = (g_m68k.a[6] + 0x58); uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, 0xffff); bus_write16(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[6] + 0x138)); bus_write16(g_m68k.a[6] + 0x56, _mv); M68K_TST16(_mv); }
    M68K_SUB16(g_m68k.d[2], bus_read16(g_m68k.a[6] + 0x13a));
loc_00EF28:
    M68K_SUB16(g_m68k.d[0], bus_read16(g_m68k.a[6] + 0x60));
    M68K_SUB16(g_m68k.d[2], bus_read16(g_m68k.a[6] + 0x62));
    M68K_ADD16(g_m68k.d[0], bus_read16(g_m68k.a[6] + 0xe));
    M68K_ADD16(g_m68k.d[2], bus_read16(g_m68k.a[6] + 0x10));
    M68K_SUB16(g_m68k.d[2], bus_read16(g_m68k.a[6] + 0x28));
    func_table_call(0x01225C);
    return;
}

/* $00EF44-$00EF9E  (23 instructions, 90 bytes) */
void sub_00EF44(void) {
    g_m68k.a[0] = bus_read32(g_m68k.a[6] + 0xf0);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xa))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xa))); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x012266);
    g_m68k.d[0] = (uint32_t)(int32_t)(int8_t)(0x0); M68K_TST32(g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[6] + 0x5a); uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, 0xffff); bus_write16(_ea, _tmp); }
    if (M68K_CC_EQ) goto loc_00EF96;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x54))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[3] = bus_read32(g_m68k.a[6] + 0x70);
    g_m68k.a[3] = bus_read32(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    func_table_call(0x012270);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xc8))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xcc))); M68K_TST16((uint16_t)g_m68k.d[2]);
    M68K_SUB16(g_m68k.d[0], bus_read16(g_m68k.a[6] + 0x60));
    M68K_SUB16(g_m68k.d[2], bus_read16(g_m68k.a[6] + 0x62));
    M68K_ADD16(g_m68k.d[0], bus_read16(g_m68k.a[6] + 0xe));
    M68K_ADD16(g_m68k.d[2], bus_read16(g_m68k.a[6] + 0x10));
    func_table_call(0x01225C);
    g_m68k.d[0] = (uint32_t)(int32_t)(int8_t)(0x1); M68K_TST32(g_m68k.d[0]);
loc_00EF96:
    func_table_call(0x012286);
    return;
}

/* $00F0AA-$00F126  (33 instructions, 124 bytes) */
void sub_00F0AA(void) {
    g_m68k.a[0] = bus_read32(g_m68k.a[6] + 0xf4);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xa))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xa))); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x012266);
    M68K_TST16(bus_read16(g_m68k.a[6] + 0x14));
    if (M68K_CC_EQ) goto loc_00F0D4;
    { uint32_t _ea = (g_m68k.a[6] + 0x5c); uint16_t _tmp = bus_read16(_ea); M68K_SUB16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    if (M68K_CC_GE) goto loc_00F0D4;
    { uint32_t _ea = (g_m68k.a[6] + 0x5e); uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, 0xffff); bus_write16(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(g_m68k.a[6] + 0x5c, _mv); M68K_TST16(_mv); }
loc_00F0D4:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x38))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[3] = bus_read32(g_m68k.a[6] + 0x74 + (int16_t)(uint16_t)g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x54))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_LSL16(g_m68k.d[0], 0x3);
    M68K_TST16(bus_read16(g_m68k.a[6] + 0x5e));
    if (M68K_CC_EQ) goto loc_00F0EE;
    M68K_ADD16(g_m68k.d[0], 0x4);
loc_00F0EE:
    g_m68k.a[3] = bus_read32(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    func_table_call(0x012270);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xc8))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xcc))); M68K_TST16((uint16_t)g_m68k.d[2]);
    M68K_SUB16(g_m68k.d[0], bus_read16(g_m68k.a[6] + 0x60));
    M68K_SUB16(g_m68k.d[2], bus_read16(g_m68k.a[6] + 0x62));
    M68K_ADD16(g_m68k.d[0], bus_read16(g_m68k.a[6] + 0xe));
    M68K_ADD16(g_m68k.d[2], bus_read16(g_m68k.a[6] + 0x10));
    M68K_SUB16(g_m68k.d[2], bus_read16(g_m68k.a[6] + 0x28));
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x26), 0x800);
    if (M68K_CC_LE) goto loc_00F11E;
    M68K_ADD16(g_m68k.d[2], 0x2);
loc_00F11E:
    func_table_call(0x01225C);
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

/* $00F1C6-$00F204  (11 instructions, 62 bytes) */
void sub_00F1C6(void) {
    g_m68k.a[0] = 0x10165E;
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[6] + 0xc0)); bus_write16(g_m68k.a[0] + 0x0, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[6] + 0xc4)); bus_write16(g_m68k.a[0] + 0x2, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[6] + 0x14)); bus_write16(g_m68k.a[0] + 0x4, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[6] + 0xdc)); bus_write16(g_m68k.a[0] + 0x6, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[6] + 0x14)); bus_write16(g_m68k.a[0] + 0x8, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[6] + 0xc8)); bus_write16(g_m68k.a[0] + 0xc, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[6] + 0xcc)); bus_write16(g_m68k.a[0] + 0xe, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[6] + 0xa)); bus_write16(g_m68k.a[0] + 0x10, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[6] + 0x28)); bus_write16(g_m68k.a[0] + 0x12, _mv); M68K_TST16(_mv); }
    return;
}

/* $00F204-$00F264  (21 instructions, 96 bytes) */
void sub_00F204(void) {
    g_m68k.a[0] = 0x10165E;
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x26), 0x1400);
    if (M68K_CC_GT) goto loc_00F220;
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[6] + 0xc0)); bus_write16(g_m68k.a[0] + 0x0, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[6] + 0xc4)); bus_write16(g_m68k.a[0] + 0x2, _mv); M68K_TST16(_mv); }
    goto loc_00F22C;
loc_00F220:
    { uint16_t _mv = (uint16_t)(0x8000); bus_write16(g_m68k.a[0] + 0x0, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x8000); bus_write16(g_m68k.a[0] + 0x2, _mv); M68K_TST16(_mv); }
loc_00F22C:
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[6] + 0x14)); bus_write16(g_m68k.a[0] + 0x4, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[6] + 0xdc)); bus_write16(g_m68k.a[0] + 0x6, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[6] + 0xc8)); bus_write16(g_m68k.a[0] + 0xc, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[6] + 0xcc)); bus_write16(g_m68k.a[0] + 0xe, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[6] + 0xa)); bus_write16(g_m68k.a[0] + 0x10, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[6] + 0x28)); bus_write16(g_m68k.a[0] + 0x12, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x14))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_SWAP(g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_SUB32(g_m68k.d[0], bus_read32(g_m68k.a[0] + 0x8));
    M68K_ASR32(g_m68k.d[0], 0x4);
    { uint32_t _ea = (g_m68k.a[0] + 0x8); uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[0]); bus_write32(_ea, _tmp); }
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

/* $00F2A2-$00F2C6  (10 instructions, 36 bytes) */
void sub_00F2A2(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xe0))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_CMP16(g_m68k.d[0], 0xd);
    if (M68K_CC_NE) goto loc_00F2B0;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xb6))); M68K_TST16((uint16_t)g_m68k.d[0]);
loc_00F2B0:
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    { uint16_t _mv = (uint16_t)(bus_read16(0xf2c6 + (int16_t)(uint16_t)g_m68k.d[0])); bus_write16(g_m68k.a[6] + 0x138, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(0xf2c8 + (int16_t)(uint16_t)g_m68k.d[0])); bus_write16(g_m68k.a[6] + 0x13a, _mv); M68K_TST16(_mv); }
    bus_write16(g_m68k.a[6] + 0x56, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    return;
}

/* $00F2FA-$00F30A  (5 instructions, 16 bytes) */
void sub_00F2FA(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x30))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_CMP16(g_m68k.d[0], bus_read16(g_m68k.a[6] + 0x34));
    if (M68K_CC_EQ) goto loc_00F308;
    func_table_call(0xf2a2);
loc_00F308:
    return;
}

/* $00F326-$00F33A  (4 instructions, 20 bytes) */
void sub_00F326(void) {
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[6] + 0x38, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[6] + 0x3c, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[6] + 0x3e, _mv); M68K_TST16(_mv); }
    return;
}

/* $00F33A-$00F354  (6 instructions, 26 bytes) */
void sub_00F33A(void) {
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(g_m68k.a[6] + 0x132, _mv); M68K_TST16(_mv); }
    { uint32_t _ea = (g_m68k.a[6] + 0x134); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x134), 0x14);
    if (M68K_CC_LS) goto loc_00F352;
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[6] + 0x132, _mv); M68K_TST16(_mv); }
loc_00F352:
    return;
}

/* $00F354-$00F360  (3 instructions, 12 bytes) */
void sub_00F354(void) {
    bus_write16(g_m68k.a[6] + 0x134, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(g_m68k.a[6] + 0x132, _mv); M68K_TST16(_mv); }
    return;
}

/* $00F360-$00F386  (9 instructions, 38 bytes) */
void sub_00F360(void) {
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[6] + 0x130, _mv); M68K_TST16(_mv); }
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x4), 0x1);
    if (M68K_CC_EQ) goto loc_00F384;
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x30), 0x8);
    if (M68K_CC_LT) goto loc_00F384;
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x30), 0xd);
    if (M68K_CC_GT) goto loc_00F384;
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(g_m68k.a[6] + 0x130, _mv); M68K_TST16(_mv); }
loc_00F384:
    return;
}

/* $00F386-$00F3E2  (22 instructions, 92 bytes) */
void sub_00F386(void) {
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x12a), 0x1);
    if (M68K_CC_EQ) goto loc_00F3E0;
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x126), 0x1);
    if (M68K_CC_NE) goto loc_00F3E0;
    { uint32_t _ea = (g_m68k.a[6] + 0x12c); uint16_t _tmp = bus_read16(_ea); M68K_SUB16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x12c), 0x0);
    if (M68K_CC_GT) goto loc_00F3E0;
    { uint32_t _ea = (g_m68k.a[6] + 0x12e); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x12e), 0x4);
    if (M68K_CC_LT) goto loc_00F3B6;
    { uint16_t _mv = (uint16_t)(0x7fff); bus_write16(g_m68k.a[6] + 0x12c, _mv); M68K_TST16(_mv); }
    goto loc_00F3E0;
loc_00F3B6:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x12e))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_LSL16(g_m68k.d[0], 0x3);
    g_m68k.a[0] = (g_m68k.a[6] + 0x8a);
    g_m68k.a[0] = (g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[0] + 0x0)); bus_write16(g_m68k.a[6] + 0x12c, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[0] + 0x2)); bus_write16(g_m68k.a[6] + 0x80, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[0] + 0x4)); bus_write16(g_m68k.a[6] + 0x84, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x185f)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x015256);
loc_00F3E0:
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

/* $00F40A-$00F460  (21 instructions, 86 bytes) */
void sub_00F40A(void) {
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x11c), 0x1);
    if (M68K_CC_NE) goto loc_00F454;
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x14), 0x0);
    if (M68K_CC_LE) goto loc_00F452;
    { uint32_t _ea = (g_m68k.a[6] + 0x120); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x11e), 0x1);
    if (M68K_CC_NE) goto loc_00F43C;
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x120), 0x5a);
    if (M68K_CC_LE) goto loc_00F43A;
    func_table_call(0x00F7D6);
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[6] + 0x11e, _mv); M68K_TST16(_mv); }
loc_00F43A:
    goto loc_00F452;
loc_00F43C:
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x14), 0x0);
    if (M68K_CC_LE) goto loc_00F452;
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x14), 0x400);
    if (M68K_CC_GE) goto loc_00F452;
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(g_m68k.a[6] + 0x11e, _mv); M68K_TST16(_mv); }
loc_00F452:
    goto loc_00F45E;
loc_00F454:
    bus_write16(g_m68k.a[6] + 0x120, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[6] + 0x11e, _mv); M68K_TST16(_mv); }
loc_00F45E:
    return;
}

/* $00F4B4-$00F4DE  (11 instructions, 42 bytes) */
void sub_00F4B4(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0xc8), 0xffc0);
    if (M68K_CC_LT) goto loc_00F4DC;
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0xc8), 0x17f);
    if (M68K_CC_GT) goto loc_00F4DC;
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0xcc), 0xffc0);
    if (M68K_CC_LT) goto loc_00F4DC;
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0xcc), 0x140);
    if (M68K_CC_GT) goto loc_00F4DC;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
loc_00F4DC:
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

/* $00F5C2-$00F5CA  (2 instructions, 8 bytes) */
void sub_00F5C2(void) {
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(g_m68k.a[6] + 0x2c, _mv); M68K_TST16(_mv); }
    return;
}

/* $00F5CA-$00F5D2  (2 instructions, 8 bytes) */
void sub_00F5CA(void) {
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[6] + 0x2c, _mv); M68K_TST16(_mv); }
    return;
}

/* $00F5D2-$00F5DA  (2 instructions, 8 bytes) */
void sub_00F5D2(void) {
    { uint16_t _mv = (uint16_t)(0x7ff0); bus_write16(g_m68k.a[6] + 0x50, _mv); M68K_TST16(_mv); }
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

/* $00F696-$00F6E6  (23 instructions, 80 bytes) */
void sub_00F696(void) {
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x2c), 0x0);
    if (M68K_CC_NE) goto loc_00F6A0;
    return;
loc_00F6A0:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xdc))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], 0x400);
    M68K_ROL16(g_m68k.d[0], 0x5);
    M68K_AND16(g_m68k.d[0], 0x1f);
    g_m68k.a[0] = 0x026C40;
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST8((uint8_t)g_m68k.d[2]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[0] + 0x1 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST8((uint8_t)g_m68k.d[0]);
    M68K_EXT16(g_m68k.d[2]);
    M68K_EXT16(g_m68k.d[0]);
    M68K_MULS(g_m68k.d[0], bus_read16(g_m68k.a[6] + 0xa));
    M68K_ASR32(g_m68k.d[0], 0x8);
    M68K_MULS(g_m68k.d[2], bus_read16(g_m68k.a[6] + 0xa));
    M68K_ASR32(g_m68k.d[2], 0x8);
    M68K_ADD16(g_m68k.d[0], bus_read16(g_m68k.a[6] + 0xc0));
    M68K_ADD16(g_m68k.d[2], bus_read16(g_m68k.a[6] + 0xc4));
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x80)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0x6)); M68K_TST16((uint16_t)g_m68k.d[3]);
    func_table_call(0x01458C);
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

/* $00F7D6-$00F80C  (12 instructions, 54 bytes) */
void sub_00F7D6(void) {
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x13e), 0x1);
    if (M68K_CC_EQ) goto loc_00F80A;
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(g_m68k.a[6] + 0x13e, _mv); M68K_TST16(_mv); }
    g_m68k.a[0] = 0x026E60;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x100430))); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x0010B8);
    M68K_AND16(g_m68k.d[0], 0xf);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0])); bus_write32(g_m68k.a[6] + 0x142, _mv); M68K_TST32(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[6] + 0x140, _mv); M68K_TST16(_mv); }
loc_00F80A:
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
