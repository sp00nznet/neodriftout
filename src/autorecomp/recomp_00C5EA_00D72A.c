/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $00C5EA - $00D72A */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

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

/* $00C6A4-$00C71A  (32 instructions, 118 bytes) */
void jt_00C6A4(void) {
    bus_write32(g_m68k.a[6] + 0xc6, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xa8))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], 0x400);
    M68K_ROL16(g_m68k.d[0], 0x5);
    M68K_AND16(g_m68k.d[0], 0x1f);
    g_m68k.a[0] = 0x00DCC4;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST8((uint8_t)g_m68k.d[0]);
    M68K_EXT16(g_m68k.d[0]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[6] + 0xcc, _mv); M68K_TST16(_mv); }
    M68K_TST16(bus_read16(g_m68k.a[6] + 0xd2));
    if (M68K_CC_NE) goto loc_00C6D2;
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xe))); M68K_TST16((uint16_t)g_m68k.d[1]);
    goto loc_00C6D6;
loc_00C6D2:
    func_table_call(0xc7ea);
loc_00C6D6:
    if (M68K_CC_PL) goto loc_00C6DA;
    M68K_NEG16(g_m68k.d[1]);
loc_00C6DA:
    M68K_LSR16(g_m68k.d[1], 0x7);
    M68K_AND16(g_m68k.d[1], 0x1f);
    M68K_ADD16(g_m68k.d[1], g_m68k.d[1]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xaa))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], 0x400);
    M68K_ROL16(g_m68k.d[0], 0x5);
    M68K_AND16(g_m68k.d[0], 0x1f);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[6] + 0xc6, _mv); M68K_TST16(_mv); }
    g_m68k.a[0] = 0x00DCE4;
    M68K_ADD16(g_m68k.d[0], bus_read16(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[1]));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[6] + 0xca, _mv); M68K_TST16(_mv); }
    M68K_ADD16(g_m68k.d[1], g_m68k.d[1]);
    g_m68k.a[0] = 0x00DD24;
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[1])); bus_write32(g_m68k.a[6] + 0xc2, _mv); M68K_TST32(_mv); }
    { uint16_t _mv = (uint16_t)(0x5); bus_write16(g_m68k.a[6] + 0xac, _mv); M68K_TST16(_mv); }
    { func_table_call(0x00C71A); return; }
    /* WARNING: function did not end with RTS */
}

/* $00C71A-$00C7A8  (37 instructions, 142 bytes) */
void jt_00C71A(void) {
    func_table_call(0xc8f0);
    func_table_call(0xc9f4);
    func_table_call(0xca2e);
    func_table_call(0xca58);
    func_table_call(0xd1be);
    func_table_call(0xcc08);
    func_table_call(0xcd2e);
    func_table_call(0xcf38);
    g_m68k.d[0] = bus_read32(g_m68k.a[6] + 0xc2); M68K_TST32((uint32_t)g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[6] + 0xc6); uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[0]); bus_write32(_ea, _tmp); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xca))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_CMP16(g_m68k.d[0], bus_read16(g_m68k.a[6] + 0xc6));
    if (M68K_CC_GT) goto loc_00C758;
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[6] + 0xac, _mv); M68K_TST16(_mv); }
    { func_table_call(0xc5e0); return; }
loc_00C758:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xc6))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_AND16(g_m68k.d[0], 0x1f);
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0xcc), 0xffff);
    if (M68K_CC_NE) goto loc_00C774;
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x20)); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_SUB16(g_m68k.d[0], g_m68k.d[1]);
    M68K_AND16(g_m68k.d[0], 0x1f);
loc_00C774:
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[6] + 0x4c, _mv); M68K_TST16(_mv); }
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x0), 0x0);
    if (M68K_CC_NE) goto loc_00C78C;
    func_table_call(0xd0cc);
    func_table_call(0xd0f8);
    func_table_call(0xd142);
loc_00C78C:
    func_table_call(0xd102);
    func_table_call(0xc904);
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x0), 0x0);
    if (M68K_CC_NE) goto loc_00C7A2;
    func_table_call(0xd1ee);
    goto loc_00C7A6;
loc_00C7A2:
    func_table_call(0xd212);
loc_00C7A6:
    return;
}

/* $00C7A8-$00C7B2  (2 instructions, 10 bytes) */
void jt_00C7A8(void) {
    { uint16_t _mv = (uint16_t)(0x7); bus_write16(g_m68k.a[6] + 0xac, _mv); M68K_TST16(_mv); }
    { func_table_call(0x00C7B2); return; }
    /* WARNING: function did not end with RTS */
}

/* $00C7B2-$00C7B8  (2 instructions, 6 bytes) */
void jt_00C7B2(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00C7EA-$00C814  (12 instructions, 42 bytes) */
void sub_00C7EA(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[4] + 0xdc))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_SUB16(g_m68k.d[0], bus_read16(g_m68k.a[6] + 0xa8));
    M68K_LSR16(g_m68k.d[0], 0x6);
    M68K_ADD16(g_m68k.d[0], 0x100);
    M68K_AND16(g_m68k.d[0], 0x3ff);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[0] = 0x027A3A;
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_MULS(g_m68k.d[1], bus_read16(g_m68k.a[4] + 0x14));
    M68K_ASR32(g_m68k.d[1], 0x8);
    M68K_SUB16(g_m68k.d[1], bus_read16(g_m68k.a[6] + 0xe));
    return;
}

/* $00C8F0-$00C904  (4 instructions, 20 bytes) */
void sub_00C8F0(void) {
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[4] + 0xa)); bus_write16(g_m68k.a[6] + 0x4, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[4] + 0xd8)); bus_write16(g_m68k.a[6] + 0xa4, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[4] + 0xda)); bus_write16(g_m68k.a[6] + 0xa6, _mv); M68K_TST16(_mv); }
    return;
}

/* $00C904-$00C9F4  (76 instructions, 240 bytes) */
void sub_00C904(void) {
    g_m68k.a[5] = 0x108000;
    g_m68k.a[0] = 0x02101E;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[5] + (-0x6dfe)))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[0] = bus_read32(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    M68K_TST16(bus_read16(g_m68k.a[6] + 0xd0));
    if (M68K_CC_NE) goto loc_00C93A;
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[0] + 0x0)); bus_write16(g_m68k.a[6] + 0x8c, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[0] + 0x2)); bus_write16(g_m68k.a[6] + 0x90, _mv); M68K_TST16(_mv); }
    { uint32_t _ea = (g_m68k.a[6] + 0xd0); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(0xa); bus_write16(g_m68k.a[6] + 0xe, _mv); M68K_TST16(_mv); }
    return;
loc_00C93A:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xd0))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_LSL16(g_m68k.d[0], 0x3);
    M68K_ADD16(g_m68k.d[1], g_m68k.d[1]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[1]);
    g_m68k.a[0] = (g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    g_m68k.d[1] = (uint32_t)(int32_t)(int8_t)(0x0); M68K_TST32(g_m68k.d[1]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x8c))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_SUB16(g_m68k.d[0], bus_read16(g_m68k.a[0] + 0x0));
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[0] + 0x4))); M68K_TST16((uint16_t)g_m68k.d[4]);
    M68K_LSR16(g_m68k.d[4], 0x1);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[4]);
    M68K_CMP16(g_m68k.d[0], bus_read16(g_m68k.a[0] + 0x4));
    if (M68K_CC_CC) goto loc_00C966;
    M68K_ADD16(g_m68k.d[1], 0x1);
    goto loc_00C968;
loc_00C966:
    goto loc_00C9A6;
loc_00C968:
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x90))); M68K_TST16((uint16_t)g_m68k.d[2]);
    M68K_SUB16(g_m68k.d[2], bus_read16(g_m68k.a[0] + 0x2));
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[0] + 0x6))); M68K_TST16((uint16_t)g_m68k.d[4]);
    M68K_LSR16(g_m68k.d[4], 0x1);
    M68K_ADD16(g_m68k.d[2], g_m68k.d[4]);
    M68K_CMP16(g_m68k.d[2], bus_read16(g_m68k.a[0] + 0x6));
    if (M68K_CC_CC) goto loc_00C988;
    M68K_TST16(g_m68k.d[1]);
    if (M68K_CC_EQ) goto loc_00C986;
    { uint32_t _ea = (g_m68k.a[6] + 0xd0); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0x1); bus_write16(_ea, _tmp); }
loc_00C986:
    goto loc_00C98A;
loc_00C988:
    goto loc_00C9A6;
loc_00C98A:
    g_m68k.a[0] = 0x02103A;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[5] + (-0x6dfe)))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_CMP16(g_m68k.d[0], bus_read16(g_m68k.a[6] + 0xd0));
    if (M68K_CC_HI) goto loc_00C9A4;
    bus_write16(g_m68k.a[6] + 0xd0, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
loc_00C9A4:
    return;
loc_00C9A6:
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0xd0), 0x1);
    if (M68K_CC_HI) goto loc_00C9B0;
    return;
loc_00C9B0:
    g_m68k.a[0] -= 0x14;
    g_m68k.d[1] = (uint32_t)(int32_t)(int8_t)(0x0); M68K_TST32(g_m68k.d[1]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x8c))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_SUB16(g_m68k.d[0], bus_read16(g_m68k.a[0] + 0x0));
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[0] + 0x4))); M68K_TST16((uint16_t)g_m68k.d[4]);
    M68K_LSR16(g_m68k.d[4], 0x1);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[4]);
    M68K_CMP16(g_m68k.d[0], bus_read16(g_m68k.a[0] + 0x4));
    if (M68K_CC_CC) goto loc_00C9D2;
    M68K_ADD16(g_m68k.d[1], 0x1);
    goto loc_00C9D4;
loc_00C9D2:
    return;
loc_00C9D4:
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x90))); M68K_TST16((uint16_t)g_m68k.d[2]);
    M68K_SUB16(g_m68k.d[2], bus_read16(g_m68k.a[0] + 0x2));
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[0] + 0x6))); M68K_TST16((uint16_t)g_m68k.d[4]);
    M68K_LSR16(g_m68k.d[4], 0x1);
    M68K_ADD16(g_m68k.d[2], g_m68k.d[4]);
    M68K_CMP16(g_m68k.d[2], bus_read16(g_m68k.a[0] + 0x6));
    if (M68K_CC_CC) goto loc_00C9F2;
    M68K_TST16(g_m68k.d[1]);
    if (M68K_CC_EQ) goto loc_00C9F2;
    { uint32_t _ea = (g_m68k.a[6] + 0xd0); uint16_t _tmp = bus_read16(_ea); M68K_SUB16(_tmp, 0x1); bus_write16(_ea, _tmp); }
loc_00C9F2:
    return;
}

/* $00C9F4-$00CA2E  (16 instructions, 58 bytes) */
void sub_00C9F4(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x8c))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x90))); M68K_TST16((uint16_t)g_m68k.d[2]);
    M68K_SUB16(g_m68k.d[0], bus_read16(g_m68k.a[6] + 0xa4));
    M68K_SUB16(g_m68k.d[2], bus_read16(g_m68k.a[6] + 0xa6));
    M68K_MULS(g_m68k.d[0], bus_read16(g_m68k.a[6] + 0x4));
    M68K_MULS(g_m68k.d[2], bus_read16(g_m68k.a[6] + 0x4));
    M68K_ASR32(g_m68k.d[0], 0x8);
    M68K_ASR32(g_m68k.d[2], 0x8);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[6] + 0xd6, _mv); M68K_TST16(_mv); }
    M68K_SUB16(g_m68k.d[0], bus_read16(g_m68k.a[6] + 0x58));
    M68K_SUB16(g_m68k.d[2], bus_read16(g_m68k.a[6] + 0x5a));
    M68K_ADD16(g_m68k.d[0], bus_read16(g_m68k.a[6] + 0x8));
    M68K_ADD16(g_m68k.d[2], bus_read16(g_m68k.a[6] + 0xa));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[6] + 0x94, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[6] + 0x98, _mv); M68K_TST16(_mv); }
    return;
}

/* $00CA2E-$00CA58  (11 instructions, 42 bytes) */
void sub_00CA2E(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x94))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x98))); M68K_TST16((uint16_t)g_m68k.d[2]);
    M68K_ADD16(g_m68k.d[0], 0x60);
    M68K_ADD16(g_m68k.d[2], 0x40);
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[6] + 0x2, _mv); M68K_TST16(_mv); }
    M68K_CMP16(g_m68k.d[0], 0x1a0);
    if (M68K_CC_HI) goto loc_00CA56;
    M68K_CMP16(g_m68k.d[2], 0x140);
    if (M68K_CC_HI) goto loc_00CA56;
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(g_m68k.a[6] + 0x2, _mv); M68K_TST16(_mv); }
loc_00CA56:
    return;
}

/* $00CA58-$00CA86  (14 instructions, 46 bytes) */
void sub_00CA58(void) {
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x8c))); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x90))); M68K_TST16((uint16_t)g_m68k.d[2]);
    M68K_SUB16(g_m68k.d[1], bus_read16(g_m68k.a[6] + 0xa4));
    M68K_SUB16(g_m68k.d[2], bus_read16(g_m68k.a[6] + 0xa6));
    M68K_ADD16(g_m68k.d[1], 0x31f);
    M68K_ADD16(g_m68k.d[2], 0x17f);
    g_m68k.d[0] = (uint32_t)(int32_t)(int8_t)(0x0); M68K_TST32(g_m68k.d[0]);
    M68K_CMP16(g_m68k.d[1], 0x640);
    if (M68K_CC_HI) goto loc_00CA80;
    M68K_CMP16(g_m68k.d[2], 0x300);
    if (M68K_CC_HI) goto loc_00CA80;
    g_m68k.d[0] = (uint32_t)(int32_t)(int8_t)(0x1); M68K_TST32(g_m68k.d[0]);
loc_00CA80:
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[6] + 0xce, _mv); M68K_TST16(_mv); }
    return;
}

/* $00CAA8-$00CAE4  (19 instructions, 60 bytes) */
void sub_00CAA8(void) {
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0xce), 0x0);
    if (M68K_CC_NE) goto loc_00CAB6;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x80))); M68K_TST16((uint16_t)g_m68k.d[0]);
    goto loc_00CABA;
loc_00CAB6:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x28))); M68K_TST16((uint16_t)g_m68k.d[0]);
loc_00CABA:
    g_m68k.a[0] = bus_read32(g_m68k.a[6] + 0x60);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[0] = (g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    g_m68k.a[0] = bus_read32(g_m68k.a[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xe))); M68K_TST16((uint16_t)g_m68k.d[0]);
    if (M68K_CC_PL) goto loc_00CAD0;
    M68K_NEG16(g_m68k.d[0]);
loc_00CAD0:
    M68K_LSR16(g_m68k.d[0], 0x5);
    M68K_AND16(g_m68k.d[0], 0xfff8);
    g_m68k.a[0] = (g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(_postinc32(0)); bus_write32(g_m68k.a[6] + 0x3a, _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[0])); bus_write32(g_m68k.a[6] + 0x3e, _mv); M68K_TST32(_mv); }
    return;
}

/* $00CAE4-$00CB02  (9 instructions, 30 bytes) */
void sub_00CAE4(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x28))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_CMP16(g_m68k.d[0], bus_read16(g_m68k.a[6] + 0x2c));
    if (M68K_CC_EQ) goto loc_00CB00;
    g_m68k.a[0] = bus_read32(g_m68k.a[6] + 0x7c);
    M68K_LSL16(g_m68k.d[0], 0x3);
    g_m68k.a[0] = (g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(_postinc32(0)); bus_write32(g_m68k.a[6] + 0x42, _mv); M68K_TST32(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[0])); bus_write16(g_m68k.a[6] + 0x46, _mv); M68K_TST16(_mv); }
loc_00CB00:
    return;
}

/* $00CB02-$00CBB4  (55 instructions, 178 bytes) */
void sub_00CB02(void) {
    g_m68k.a[0] = 0x02101E;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[5] + (-0x6dfe)))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[0] = bus_read32(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xd0))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_LSL16(g_m68k.d[0], 0x3);
    M68K_ADD16(g_m68k.d[1], g_m68k.d[1]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[1]);
    g_m68k.a[0] = (g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[0] + 0x0))); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[0] + 0x2))); M68K_TST16((uint16_t)g_m68k.d[3]);
    M68K_SUB16(g_m68k.d[2], bus_read16(g_m68k.a[6] + 0x8c));
    M68K_SUB16(g_m68k.d[3], bus_read16(g_m68k.a[6] + 0x90));
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[2])); M68K_TST16((uint16_t)g_m68k.d[4]);
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[3])); M68K_TST16((uint16_t)g_m68k.d[5]);
    func_table_call(0x01014C);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xaa))); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_ADD16(g_m68k.d[1], 0x80);
    M68K_LSR16(g_m68k.d[1], 0x8);
    M68K_TST16(g_m68k.d[4]);
    if (M68K_CC_PL) goto loc_00CB4E;
    M68K_NEG16(g_m68k.d[4]);
loc_00CB4E:
    M68K_TST16(g_m68k.d[5]);
    if (M68K_CC_PL) goto loc_00CB54;
    M68K_NEG16(g_m68k.d[5]);
loc_00CB54:
    M68K_MULU(g_m68k.d[4], g_m68k.d[4]);
    M68K_MULU(g_m68k.d[5], g_m68k.d[5]);
    M68K_ADD32(g_m68k.d[5], g_m68k.d[4]);
    M68K_CMP32(g_m68k.d[5], 0x3000);
    if (M68K_CC_CC) goto loc_00CB6C;
    M68K_SUB8(g_m68k.d[0], g_m68k.d[1]);
    M68K_ADD8(g_m68k.d[0], 0x8);
    M68K_AND8(g_m68k.d[0], 0xf0);
    goto loc_00CB74;
loc_00CB6C:
    M68K_SUB8(g_m68k.d[0], g_m68k.d[1]);
    M68K_ADD8(g_m68k.d[0], 0x2);
    M68K_AND8(g_m68k.d[0], 0xfc);
loc_00CB74:
    if (M68K_CC_PL) goto loc_00CB7E;
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(g_m68k.a[6] + 0x30, _mv); M68K_TST16(_mv); }
    goto loc_00CB8E;
loc_00CB7E:
    if (M68K_CC_NE) goto loc_00CB88;
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[6] + 0x30, _mv); M68K_TST16(_mv); }
    goto loc_00CB8E;
loc_00CB88:
    { uint16_t _mv = (uint16_t)(0x2); bus_write16(g_m68k.a[6] + 0x30, _mv); M68K_TST16(_mv); }
loc_00CB8E:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xe))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_CMP16(g_m68k.d[0], bus_read16(g_m68k.a[0] + 0x8));
    if (M68K_CC_LE) goto loc_00CBA6;
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[6] + 0x34, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(g_m68k.a[6] + 0x36, _mv); M68K_TST16(_mv); }
    goto loc_00CBB2;
loc_00CBA6:
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(g_m68k.a[6] + 0x34, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[6] + 0x36, _mv); M68K_TST16(_mv); }
loc_00CBB2:
    return;
}

/* $00CBB4-$00CC08  (25 instructions, 84 bytes) */
void sub_00CBB4(void) {
    g_m68k.d[0] = (uint32_t)(int32_t)(int8_t)(0x0); M68K_TST32(g_m68k.d[0]);
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x30), 0x0);
    if (M68K_CC_EQ) goto loc_00CC02;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xe))); M68K_TST16((uint16_t)g_m68k.d[0]);
    if (M68K_CC_PL) goto loc_00CBC6;
    M68K_NEG16(g_m68k.d[0]);
loc_00CBC6:
    M68K_LSR16(g_m68k.d[0], 0x3);
    M68K_AND16(g_m68k.d[0], 0xfffe);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.a[3] = bus_read32(g_m68k.a[6] + 0x5c);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x36), 0x1);
    if (M68K_CC_NE) goto loc_00CBF8;
    g_m68k.a[3] = 0x020676;
    M68K_LSR16(g_m68k.d[1], 0x2);
    M68K_AND16(g_m68k.d[1], 0xfffe);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[1]))); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_MULU(g_m68k.d[0], g_m68k.d[1]);
    M68K_ADD32(g_m68k.d[0], 0x50);
    M68K_LSR32(g_m68k.d[0], 0x8);
loc_00CBF8:
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x30), 0x2);
    if (M68K_CC_EQ) goto loc_00CC02;
    M68K_NEG16(g_m68k.d[0]);
loc_00CC02:
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[6] + 0x38, _mv); M68K_TST16(_mv); }
    return;
}

/* $00CC08-$00CCEE  (58 instructions, 230 bytes) */
void sub_00CC08(void) {
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0xce), 0x0);
    if (M68K_CC_NE) goto loc_00CC2A;
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[6] + 0x28)); bus_write16(g_m68k.a[6] + 0x2c, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[6] + 0x28, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[6] + 0x2e, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x2); bus_write16(g_m68k.a[6] + 0x26, _mv); M68K_TST16(_mv); }
    return;
loc_00CC2A:
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[6] + 0x28)); bus_write16(g_m68k.a[6] + 0x2c, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x8c))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x90))); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x013E74);
    M68K_AND16(g_m68k.d[0], 0x7f);
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0xd0), 0x1);
    if (M68K_CC_NE) goto loc_00CC54;
    M68K_CMP16(g_m68k.d[0], 0xe);
    if (M68K_CC_NE) goto loc_00CC54;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x7f)); M68K_TST16((uint16_t)g_m68k.d[0]);
loc_00CC54:
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[7] -= 2; bus_write16(g_m68k.a[7], _mv); M68K_TST16(_mv); }
    func_table_call(0xd4a6);
    M68K_TST16(bus_read16(g_m68k.a[6] + 0xd2));
    if (M68K_CC_EQ) goto loc_00CC64;
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[6] + 0xd4)); bus_write16(g_m68k.a[7], _mv); M68K_TST16(_mv); }
loc_00CC64:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(_postinc16(7))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_CMP16(g_m68k.d[0], 0x1f);
    if (M68K_CC_GT) goto loc_00CC8C;
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[6] + 0x26)); bus_write16(g_m68k.a[6] + 0x2a, _mv); M68K_TST16(_mv); }
    M68K_ROR16(g_m68k.d[0], 0x5);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[6] + 0x2e, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[6] + 0x26, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[6] + 0x80)); bus_write16(g_m68k.a[6] + 0x28, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[6] + 0x82)); bus_write16(g_m68k.a[6] + 0xc0, _mv); M68K_TST16(_mv); }
    return;
loc_00CC8C:
    M68K_CMP16(g_m68k.d[0], 0x3f);
    if (M68K_CC_GT) goto loc_00CCB2;
    M68K_SUB16(g_m68k.d[0], 0x20);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    { uint16_t _mv = (uint16_t)(bus_read16(0xccee + (int16_t)(uint16_t)g_m68k.d[0])); bus_write16(g_m68k.a[6] + 0x2e, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(g_m68k.a[6] + 0x26, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[6] + 0x80)); bus_write16(g_m68k.a[6] + 0x28, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[6] + 0x82)); bus_write16(g_m68k.a[6] + 0xc0, _mv); M68K_TST16(_mv); }
    return;
loc_00CCB2:
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[5] + (-0x6dfe)))); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_ADD16(g_m68k.d[1], g_m68k.d[1]);
    M68K_ADD16(g_m68k.d[1], g_m68k.d[1]);
    g_m68k.a[0] = 0x02070E;
    g_m68k.a[0] = (g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[1]);
    g_m68k.a[0] = bus_read32(g_m68k.a[0]);
    M68K_SUB16(g_m68k.d[0], 0x40);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST8((uint8_t)g_m68k.d[1]);
    M68K_EXT16(g_m68k.d[1]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); bus_write16(g_m68k.a[6] + 0x28, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[6] + 0x2e, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x2); bus_write16(g_m68k.a[6] + 0x26, _mv); M68K_TST16(_mv); }
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[0] + 0x1 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST8((uint8_t)g_m68k.d[1]);
    M68K_EXT16(g_m68k.d[1]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); bus_write16(g_m68k.a[6] + 0xc0, _mv); M68K_TST16(_mv); }
    return;
}

/* $00CD2E-$00CDC0  (44 instructions, 146 bytes) */
void sub_00CD2E(void) {
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x26), 0x0);
    if (M68K_CC_EQ) goto loc_00CD4C;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x28))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[0] = 0x00CDC0;
    g_m68k.a[0] = bus_read32(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    func_table_call(g_m68k.a[0]);
    goto loc_00CDBE;
loc_00CD4C:
    M68K_TST16(bus_read16(g_m68k.a[6] + 0xd2));
    if (M68K_CC_EQ) goto loc_00CD58;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x4)); M68K_TST16((uint16_t)g_m68k.d[0]);
    goto loc_00CDBE;
loc_00CD58:
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0xe), 0x8ff);
    if (M68K_CC_GT) goto loc_00CD66;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x4)); M68K_TST16((uint16_t)g_m68k.d[0]);
    goto loc_00CDBE;
loc_00CD66:
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[7]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x2e))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_EXT32(g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xa8))); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_EXT32(g_m68k.d[1]);
    g_m68k.d[2] = g_m68k.d[1]; M68K_TST32((uint32_t)g_m68k.d[2]);
    M68K_SUB32(g_m68k.d[0], g_m68k.d[1]);
    if (M68K_CC_PL) goto loc_00CD82;
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(0xffff)); M68K_TST16((uint16_t)g_m68k.d[7]);
    M68K_NEG32(g_m68k.d[0]);
loc_00CD82:
    M68K_ADD32(g_m68k.d[1], g_m68k.d[0]);
    M68K_ADD32(g_m68k.d[2], 0x8000);
    M68K_CMP32(g_m68k.d[1], g_m68k.d[2]);
    if (M68K_CC_LE) goto loc_00CDA6;
    M68K_NEG16(g_m68k.d[7]);
    M68K_SUB32(g_m68k.d[0], 0x8000);
    g_m68k.d[1] = 0x8000; M68K_TST32((uint32_t)g_m68k.d[1]);
    M68K_SUB32(g_m68k.d[1], g_m68k.d[0]);
    g_m68k.d[0] = g_m68k.d[1]; M68K_TST32((uint32_t)g_m68k.d[0]);
    M68K_AND32(g_m68k.d[0], 0x7fff);
loc_00CDA6:
    M68K_CMP32(g_m68k.d[0], 0x6660);
    if (M68K_CC_LE) goto loc_00CDB4;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x4)); M68K_TST16((uint16_t)g_m68k.d[0]);
    goto loc_00CDBE;
loc_00CDB4:
    func_table_call(0x00D63E);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x4)); M68K_TST16((uint16_t)g_m68k.d[0]);
loc_00CDBE:
    return;
}

/* $00CE08-$00CE0E  (2 instructions, 6 bytes) */
void jt_00CE08(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00CE0E-$00CE14  (2 instructions, 6 bytes) */
void jt_00CE0E(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00CE14-$00CE1A  (2 instructions, 6 bytes) */
void jt_00CE14(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00CE1A-$00CE20  (2 instructions, 6 bytes) */
void jt_00CE1A(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00CE20-$00CE26  (2 instructions, 6 bytes) */
void jt_00CE20(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00CE26-$00CE66  (16 instructions, 64 bytes) */
void jt_00CE26(void) {
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x2c), 0x11);
    if (M68K_CC_NE) goto loc_00CE60;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xe))); M68K_TST16((uint16_t)g_m68k.d[0]);
    if (M68K_CC_PL) goto loc_00CE36;
    M68K_NEG16(g_m68k.d[0]);
loc_00CE36:
    M68K_LSR16(g_m68k.d[0], 0x7);
    M68K_AND16(g_m68k.d[0], 0x7f);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[0] = 0xce66;
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0])); bus_write16(g_m68k.a[6] + 0x22, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[6] + 0x1e, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(g_m68k.a[6] + 0x0, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[6] + 0x30, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[6] + 0x32, _mv); M68K_TST16(_mv); }
loc_00CE60:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00CEA6-$00CEBA  (6 instructions, 20 bytes) */
void sub_00CEA6(void) {
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0xce), 0x0);
    if (M68K_CC_NE) goto loc_00CEB0;
    return;
loc_00CEB0:
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0xceba + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST16((uint16_t)g_m68k.d[0]);
    { func_table_call((0xceba + (int16_t)(uint16_t)g_m68k.d[0])); return; }
    /* WARNING: function did not end with RTS */
}

/* $00CF38-$00CF42  (3 instructions, 10 bytes) */
void sub_00CF38(void) {
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0xcf42 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST16((uint16_t)g_m68k.d[0]);
    { func_table_call((0xcf42 + (int16_t)(uint16_t)g_m68k.d[0])); return; }
    /* WARNING: function did not end with RTS */
}

/* $00CFBA-$00D080  (59 instructions, 198 bytes) */
void sub_00CFBA(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x38))); M68K_TST16((uint16_t)g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[6] + 0xaa); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[0]); bus_write16(_ea, _tmp); }
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[7]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xaa))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_EXT32(g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xa8))); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_EXT32(g_m68k.d[1]);
    g_m68k.d[2] = g_m68k.d[1]; M68K_TST32((uint32_t)g_m68k.d[2]);
    M68K_SUB32(g_m68k.d[0], g_m68k.d[1]);
    if (M68K_CC_PL) goto loc_00CFDE;
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(0xffff)); M68K_TST16((uint16_t)g_m68k.d[7]);
    M68K_NEG32(g_m68k.d[0]);
loc_00CFDE:
    M68K_ADD32(g_m68k.d[1], g_m68k.d[0]);
    M68K_ADD32(g_m68k.d[2], 0x8000);
    M68K_CMP32(g_m68k.d[1], g_m68k.d[2]);
    if (M68K_CC_LE) goto loc_00D002;
    M68K_NEG16(g_m68k.d[7]);
    M68K_SUB32(g_m68k.d[0], 0x8000);
    g_m68k.d[1] = 0x8000; M68K_TST32((uint32_t)g_m68k.d[1]);
    M68K_SUB32(g_m68k.d[1], g_m68k.d[0]);
    g_m68k.d[0] = g_m68k.d[1]; M68K_TST32((uint32_t)g_m68k.d[0]);
    M68K_AND32(g_m68k.d[0], 0x7fff);
loc_00D002:
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[6] + 0x1c, _mv); M68K_TST16(_mv); }
    M68K_CMP16(g_m68k.d[0], 0x2000);
    if (M68K_CC_LS) goto loc_00D014;
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(g_m68k.a[6] + 0x1c, _mv); M68K_TST16(_mv); }
loc_00D014:
    M68K_CMP16(g_m68k.d[0], 0x4000);
    if (M68K_CC_LS) goto loc_00D034;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x4000)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xaa))); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_SUB16(g_m68k.d[1], 0x4000);
    M68K_CMP16(g_m68k.d[7], 0xffff);
    if (M68K_CC_NE) goto loc_00D030;
    M68K_ADD16(g_m68k.d[1], 0x8000);
loc_00D030:
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); bus_write16(g_m68k.a[6] + 0xa8, _mv); M68K_TST16(_mv); }
loc_00D034:
    { uint16_t _mv = (uint16_t)(g_m68k.d[7]); bus_write16(g_m68k.a[6] + 0x18, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[6] + 0x1a, _mv); M68K_TST16(_mv); }
    M68K_CMP16(g_m68k.d[0], 0x40);
    if (M68K_CC_CC) goto loc_00D04A;
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[6] + 0xaa)); bus_write16(g_m68k.a[6] + 0xa8, _mv); M68K_TST16(_mv); }
    goto loc_00D07E;
loc_00D04A:
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x36))); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_LSL16(g_m68k.d[1], 0x1);
    M68K_OR16(g_m68k.d[1], bus_read16(g_m68k.a[6] + 0x34));
    M68K_ADD16(g_m68k.d[1], g_m68k.d[1]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x3a + (int16_t)(uint16_t)g_m68k.d[1]))); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x26), 0x1);
    if (M68K_CC_NE) goto loc_00D068;
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[1])); M68K_TST16((uint16_t)g_m68k.d[6]);
    M68K_ADD16(g_m68k.d[1], g_m68k.d[1]);
    M68K_ADD16(g_m68k.d[1], g_m68k.d[6]);
loc_00D068:
    M68K_MULU(g_m68k.d[0], g_m68k.d[1]);
    M68K_ADD32(g_m68k.d[0], 0x8000);
    M68K_SWAP(g_m68k.d[0]);
    M68K_CMP16(g_m68k.d[7], 0xffff);
    if (M68K_CC_NE) goto loc_00D07A;
    M68K_NEG16(g_m68k.d[0]);
loc_00D07A:
    { uint32_t _ea = (g_m68k.a[6] + 0xa8); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[0]); bus_write16(_ea, _tmp); }
loc_00D07E:
    return;
}

/* $00D080-$00D0AC  (14 instructions, 44 bytes) */
void sub_00D080(void) {
    g_m68k.a[0] = 0x0202F6;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x1a))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_LSR16(g_m68k.d[0], 0x6);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xe))); M68K_TST16((uint16_t)g_m68k.d[1]);
    if (M68K_CC_PL) goto loc_00D09A;
    M68K_NEG16(g_m68k.d[1]);
loc_00D09A:
    M68K_CMP16(g_m68k.d[1], 0x800);
    if (M68K_CC_LE) goto loc_00D0AA;
    M68K_MULS(g_m68k.d[0], bus_read16(g_m68k.a[6] + 0xe));
    M68K_ASR32(g_m68k.d[0], 0x8);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[6] + 0xe, _mv); M68K_TST16(_mv); }
loc_00D0AA:
    return;
}

/* $00D0AC-$00D0CC  (9 instructions, 32 bytes) */
void sub_00D0AC(void) {
    g_m68k.d[0] = (uint32_t)(int32_t)(int8_t)(0x0); M68K_TST32(g_m68k.d[0]);
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x34), 0x1);
    if (M68K_CC_NE) goto loc_00D0BA;
    M68K_ADD16(g_m68k.d[0], bus_read16(g_m68k.a[6] + 0x42));
loc_00D0BA:
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x36), 0x1);
    if (M68K_CC_NE) goto loc_00D0C6;
    M68K_SUB16(g_m68k.d[0], bus_read16(g_m68k.a[6] + 0x44));
loc_00D0C6:
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[6] + 0xc, _mv); M68K_TST16(_mv); }
    return;
}

/* $00D0CC-$00D0F8  (15 instructions, 44 bytes) */
void sub_00D0CC(void) {
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xe))); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_ADD16(g_m68k.d[1], bus_read16(g_m68k.a[6] + 0x46));
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x46))); M68K_TST16((uint16_t)g_m68k.d[2]);
    M68K_ADD16(g_m68k.d[2], g_m68k.d[2]);
    M68K_CMP16(g_m68k.d[1], g_m68k.d[2]);
    if (M68K_CC_HI) goto loc_00D0E6;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xe))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_NEG16(g_m68k.d[0]);
    goto loc_00D0F2;
loc_00D0E6:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x46))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_TST16(bus_read16(g_m68k.a[6] + 0xe));
    if (M68K_CC_MI) goto loc_00D0F2;
    M68K_NEG16(g_m68k.d[0]);
loc_00D0F2:
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[6] + 0xc, _mv); M68K_TST16(_mv); }
    return;
}

/* $00D0F8-$00D102  (3 instructions, 10 bytes) */
void sub_00D0F8(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xc))); M68K_TST16((uint16_t)g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[6] + 0xe); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[0]); bus_write16(_ea, _tmp); }
    return;
}

/* $00D102-$00D142  (18 instructions, 64 bytes) */
void sub_00D102(void) {
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[6] + 0x8c)); bus_write32(g_m68k.a[6] + 0x84, _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[6] + 0x90)); bus_write32(g_m68k.a[6] + 0x88, _mv); M68K_TST32(_mv); }
    g_m68k.a[3] = 0x027A3A;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xa8))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_LSR16(g_m68k.d[0], 0x6);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_ADD16(g_m68k.d[1], g_m68k.d[1]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[1]))); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_ADD16(g_m68k.d[0], 0x100);
    M68K_AND16(g_m68k.d[0], 0x3ff);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xe))); M68K_TST16((uint16_t)g_m68k.d[2]);
    M68K_MULS(g_m68k.d[0], g_m68k.d[2]);
    M68K_MULS(g_m68k.d[1], g_m68k.d[2]);
    { uint32_t _ea = (g_m68k.a[6] + 0x8c); uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[0]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[6] + 0x90); uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    return;
}

/* $00D142-$00D18A  (21 instructions, 72 bytes) */
void sub_00D142(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xe))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x28), 0x8);
    if (M68K_CC_LT) goto loc_00D16E;
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x28), 0xd);
    if (M68K_CC_GT) goto loc_00D16E;
    M68K_CMP16(g_m68k.d[0], 0x6ff);
    if (M68K_CC_LE) goto loc_00D17A;
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x34), 0x1);
    if (M68K_CC_NE) goto loc_00D168;
    M68K_SUB16(g_m68k.d[0], bus_read16(g_m68k.a[6] + 0x44));
loc_00D168:
    M68K_SUB16(g_m68k.d[0], 0x12);
    goto loc_00D17A;
loc_00D16E:
    M68K_CMP16(g_m68k.d[0], bus_read16(g_m68k.a[6] + 0x78));
    if (M68K_CC_LE) goto loc_00D17A;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x78))); M68K_TST16((uint16_t)g_m68k.d[0]);
    goto loc_00D184;
loc_00D17A:
    M68K_CMP16(g_m68k.d[0], bus_read16(g_m68k.a[6] + 0x7a));
    if (M68K_CC_GE) goto loc_00D184;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x7a))); M68K_TST16((uint16_t)g_m68k.d[0]);
loc_00D184:
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[6] + 0xe, _mv); M68K_TST16(_mv); }
    return;
}

/* $00D18A-$00D1BE  (17 instructions, 52 bytes) */
void sub_00D18A(void) {
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x2), 0x0);
    if (M68K_CC_NE) goto loc_00D194;
    return;
loc_00D194:
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x18))); M68K_TST16((uint16_t)g_m68k.d[7]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x1a))); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xaa))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_TST16(g_m68k.d[7]);
    if (M68K_CC_PL) goto loc_00D1A8;
    M68K_SUB16(g_m68k.d[0], g_m68k.d[6]);
    goto loc_00D1AA;
loc_00D1A8:
    M68K_ADD16(g_m68k.d[0], g_m68k.d[6]);
loc_00D1AA:
    M68K_ADD16(g_m68k.d[0], 0x400);
    M68K_AND16(g_m68k.d[0], 0xffff);
    M68K_ROL16(g_m68k.d[0], 0x5);
    M68K_AND16(g_m68k.d[0], 0x1f);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[6] + 0x4c, _mv); M68K_TST16(_mv); }
    return;
}

/* $00D1BE-$00D1EE  (12 instructions, 48 bytes) */
void sub_00D1BE(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x4))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_CMP16(g_m68k.d[0], bus_read16(g_m68k.a[6] + 0x6));
    if (M68K_CC_EQ) goto loc_00D1EC;
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[6] + 0x6, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x4))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x58))); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x00F4DE);
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); bus_write16(g_m68k.a[6] + 0x8, _mv); M68K_TST16(_mv); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x5a))); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x00F4DE);
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); bus_write16(g_m68k.a[6] + 0xa, _mv); M68K_TST16(_mv); }
loc_00D1EC:
    return;
}

/* $00D1EE-$00D212  (10 instructions, 36 bytes) */
void sub_00D1EE(void) {
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x2), 0x1);
    if (M68K_CC_NE) goto loc_00D204;
    func_table_call(0xd246);
    func_table_call(0xd29c);
    func_table_call(0xd3f0);
    goto loc_00D210;
loc_00D204:
    func_table_call(0xd47c);
    func_table_call(0xd48a);
    func_table_call(0xd498);
loc_00D210:
    return;
}

/* $00D212-$00D246  (15 instructions, 52 bytes) */
void sub_00D212(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x4))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_MULU(g_m68k.d[0], bus_read16(g_m68k.a[6] + 0x1e));
    M68K_ASR32(g_m68k.d[0], 0x8);
    M68K_ASR32(g_m68k.d[0], 0x8);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[6] + 0x20, _mv); M68K_TST16(_mv); }
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x2), 0x1);
    if (M68K_CC_NE) goto loc_00D238;
    func_table_call(0xd246);
    func_table_call(0xd2ea);
    func_table_call(0xd3f0);
    goto loc_00D244;
loc_00D238:
    func_table_call(0xd47c);
    func_table_call(0xd48a);
    func_table_call(0xd498);
loc_00D244:
    return;
}

/* $00D4D4-$00D50C  (14 instructions, 56 bytes) */
void sub_00D4D4(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[7]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    g_m68k.a[5] = 0x108000;
    M68K_TST16(bus_read16(g_m68k.a[5] + (-0x6dfe)));
    if (M68K_CC_EQ) goto loc_00D506;
    g_m68k.a[4] = g_m68k.a[6];
    g_m68k.a[6] = (g_m68k.a[5] + (-0x6d94));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(0x2)); M68K_TST16((uint16_t)g_m68k.d[7]);
loc_00D4EE:
    { uint16_t _mv = (uint16_t)(0x2); bus_write16(g_m68k.a[5] + (-0x6b0c), _mv); M68K_TST16(_mv); }
    { uint32_t _ea = (g_m68k.a[5] + (-0x6b0c)); uint16_t _tmp = bus_read16(_ea); M68K_SUB16(_tmp, g_m68k.d[7]); bus_write16(_ea, _tmp); }
    func_table_call(0xd1ee);
    g_m68k.a[6] += 0xd8;
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[7]; _cnt--; g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_00D4EE; } }
loc_00D506:
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[7] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}

/* $00D566-$00D588  (8 instructions, 34 bytes) */
void sub_00D566(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[6]);
    g_m68k.a[6] = 0x10126C;
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(0x2)); M68K_TST16((uint16_t)g_m68k.d[7]);
loc_00D574:
    func_table_call(0xd588);
    g_m68k.a[6] += 0xd8;
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[7]; _cnt--; g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_00D574; } }
    g_m68k.a[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}

/* $00D588-$00D63E  (49 instructions, 182 bytes) */
void sub_00D588(void) {
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0xce), 0x0);
    if (M68K_CC_EQ) goto loc_00D63C;
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x24), 0x0);
    if (M68K_CC_EQ) goto loc_00D63C;
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x28), 0x0);
    if (M68K_CC_NE) goto loc_00D5AE;
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x1c), 0x1);
    if (M68K_CC_NE) goto loc_00D63C;
loc_00D5AE:
    { uint32_t _ea = (g_m68k.a[6] + 0x48); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    g_m68k.a[0] = 0x02092A;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xe))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_LSR16(g_m68k.d[0], 0x5);
    M68K_AND16(g_m68k.d[0], 0x7c);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_CMP16(g_m68k.d[1], bus_read16(g_m68k.a[6] + 0x48));
    if (M68K_CC_HI) goto loc_00D63C;
    bus_write16(g_m68k.a[6] + 0x48, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[0] + 0x2 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xc0))); M68K_TST16((uint16_t)g_m68k.d[3]);
    M68K_AND16(g_m68k.d[3], 0xff);
    M68K_CMP8(g_m68k.d[3], 0xff);
    if (M68K_CC_EQ) goto loc_00D63C;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xa8))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], 0x400);
    M68K_ROL16(g_m68k.d[0], 0x5);
    M68K_AND16(g_m68k.d[0], 0x1f);
    M68K_ADD16(g_m68k.d[0], 0x11);
    { uint32_t _ea = (g_m68k.a[6] + 0x4a); uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, 0xffff); bus_write16(_ea, _tmp); }
    if (M68K_CC_EQ) goto loc_00D5FE;
    M68K_SUB16(g_m68k.d[0], 0x3);
loc_00D5FE:
    M68K_AND16(g_m68k.d[0], 0x1f);
    g_m68k.a[0] = 0x0209AA;
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST8((uint8_t)g_m68k.d[2]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[0] + 0x1 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST8((uint8_t)g_m68k.d[0]);
    M68K_EXT16(g_m68k.d[2]);
    M68K_EXT16(g_m68k.d[0]);
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x1c), 0x1);
    if (M68K_CC_NE) goto loc_00D622;
    M68K_ASR16(g_m68k.d[2], 0x1);
    M68K_ASR16(g_m68k.d[0], 0x1);
loc_00D622:
    M68K_MULS(g_m68k.d[0], bus_read16(g_m68k.a[6] + 0x4));
    M68K_ASR32(g_m68k.d[0], 0x8);
    M68K_MULS(g_m68k.d[2], bus_read16(g_m68k.a[6] + 0x4));
    M68K_ASR32(g_m68k.d[2], 0x8);
    M68K_ADD16(g_m68k.d[0], bus_read16(g_m68k.a[6] + 0x8c));
    M68K_ADD16(g_m68k.d[2], bus_read16(g_m68k.a[6] + 0x90));
    func_table_call(0x01458C);
loc_00D63C:
    return;
}

/* $00D63E-$00D68C  (22 instructions, 78 bytes) */
void sub_00D63E(void) {
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x24), 0x0);
    if (M68K_CC_EQ) goto loc_00D68A;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xa8))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], 0x400);
    M68K_ROL16(g_m68k.d[0], 0x5);
    M68K_AND16(g_m68k.d[0], 0x1f);
    g_m68k.a[0] = 0x0209AA;
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST8((uint8_t)g_m68k.d[2]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[0] + 0x1 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST8((uint8_t)g_m68k.d[0]);
    M68K_EXT16(g_m68k.d[2]);
    M68K_EXT16(g_m68k.d[0]);
    M68K_MULS(g_m68k.d[0], bus_read16(g_m68k.a[6] + 0x4));
    M68K_ASR32(g_m68k.d[0], 0x8);
    M68K_MULS(g_m68k.d[2], bus_read16(g_m68k.a[6] + 0x4));
    M68K_ASR32(g_m68k.d[2], 0x8);
    M68K_ADD16(g_m68k.d[0], bus_read16(g_m68k.a[6] + 0x8c));
    M68K_ADD16(g_m68k.d[2], bus_read16(g_m68k.a[6] + 0x90));
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x80)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0x6)); M68K_TST16((uint16_t)g_m68k.d[3]);
    func_table_call(0x01458C);
loc_00D68A:
    return;
}

/* $00D68C-$00D694  (3 instructions, 8 bytes) */
void sub_00D68C(void) {
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0xd694 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00D6A8-$00D6C8  (7 instructions, 32 bytes) */
void sub_00D6A8(void) {
    M68K_CMP16(bus_read16(0x101222), 0x1);
    if (M68K_CC_NE) goto loc_00D6BA;
    func_table_call(0x00C34A);
    goto loc_00D6C6;
loc_00D6BA:
    bus_write16(0x1014F8, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    bus_write16(0x1014FA, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
loc_00D6C6:
    return;
}

/* $00D6C8-$00D6DA  (4 instructions, 18 bytes) */
void sub_00D6C8(void) {
    M68K_CMP16(bus_read16(0x101222), 0x1);
    if (M68K_CC_NE) goto loc_00D6D8;
    func_table_call(0x00C558);
loc_00D6D8:
    return;
}

/* $00D6DA-$00D6EC  (4 instructions, 18 bytes) */
void sub_00D6DA(void) {
    M68K_CMP16(bus_read16(0x101222), 0x1);
    if (M68K_CC_NE) goto loc_00D6EA;
    func_table_call(0x00D4D4);
loc_00D6EA:
    return;
}

/* $00D6EC-$00D704  (7 instructions, 24 bytes) */
void sub_00D6EC(void) {
    g_m68k.a[0] = 0x024F6C;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x101202))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[0] = bus_read32(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(_postinc16(0))); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00D704-$00D70C  (2 instructions, 8 bytes) */
void sub_00D704(void) {
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(0x1014FC, _mv); M68K_TST16(_mv); }
    return;
}

/* $00D70C-$00D71C  (5 instructions, 16 bytes) */
void sub_00D70C(void) {
    g_m68k.d[0] = (uint32_t)(int32_t)(int8_t)(0x0); M68K_TST32(g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(0x10FD83))); M68K_TST8((uint8_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0xd71c + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00D722-$00D72A  (2 instructions, 8 bytes) */
void sub_00D722(void) {
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(0x101506, _mv); M68K_TST16(_mv); }
    return;
}
