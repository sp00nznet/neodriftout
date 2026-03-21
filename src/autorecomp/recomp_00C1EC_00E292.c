/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $00C1EC - $00E292 */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

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

/* $00D72A-$00D956  (116 instructions, 556 bytes) */
void sub_00D72A(void) {
    M68K_CMP16(bus_read16(0x1014FC), 0x1);
    if (M68K_CC_NE) goto loc_00D746;
    func_table_call(0x00D6EC);
    { uint32_t _mv = (uint32_t)(g_m68k.a[0]); bus_write32(0x1014FE, _mv); M68K_TST32(_mv); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(0x1011FA, _mv); M68K_TST16(_mv); }
loc_00D746:
    bus_write16(0x101502, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    bus_write16(0x101504, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    func_table_call(0x0169C4);
    func_table_call(0x00F8D0);
    func_table_call(0x00F8FE);
    func_table_call(0x00F942);
    func_table_call(0x00F9E6);
    func_table_call(0x00F87A);
    func_table_call(0x00FC84);
    g_m68k.a[1] = bus_read32(0x0236FE);
    g_m68k.a[2] = (g_m68k.a[6] + 0x0);
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(0x2f)); M68K_TST16((uint16_t)g_m68k.d[7]);
loc_00D78A:
    { uint16_t _mv = (uint16_t)(_postinc16(1)); bus_write16(g_m68k.a[2], _mv); g_m68k.a[2] += 2; M68K_TST16(_mv); }
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[7]; _cnt--; g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_00D78A; } }
    g_m68k.a[1] = bus_read32(0x023702);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x101202))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[1] = bus_read32(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    g_m68k.a[2] = (g_m68k.a[6] + 0xb2);
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(0x18)); M68K_TST16((uint16_t)g_m68k.d[7]);
loc_00D7AC:
    { uint16_t _mv = (uint16_t)(_postinc16(1)); bus_write16(g_m68k.a[2], _mv); g_m68k.a[2] += 2; M68K_TST16(_mv); }
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[7]; _cnt--; g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_00D7AC; } }
    g_m68k.a[1] = bus_read32(0x023706);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x101506))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[1] = bus_read32(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1011FA))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[1] = bus_read32(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    g_m68k.a[2] = (g_m68k.a[6] + 0x60);
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(0x5)); M68K_TST16((uint16_t)g_m68k.d[7]);
loc_00D7DC:
    { uint16_t _mv = (uint16_t)(_postinc16(1)); bus_write16(g_m68k.a[2], _mv); g_m68k.a[2] += 2; M68K_TST16(_mv); }
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[7]; _cnt--; g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_00D7DC; } }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1011FA))); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0xe070);
    g_m68k.a[1] = bus_read32(0x02370A);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1011F8))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[1] = bus_read32(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1011FA))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[1] = bus_read32(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    g_m68k.a[2] = (g_m68k.a[6] + 0x80);
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(0x18)); M68K_TST16((uint16_t)g_m68k.d[7]);
loc_00D816:
    { uint16_t _mv = (uint16_t)(_postinc16(1)); bus_write16(g_m68k.a[2], _mv); g_m68k.a[2] += 2; M68K_TST16(_mv); }
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[7]; _cnt--; g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_00D816; } }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[6] + 0xe4, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(0x101202)); bus_write16(g_m68k.a[6] + 0xe6, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(0x1011FC)); bus_write16(g_m68k.a[6] + 0xe8, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(0x1011FA)); bus_write16(g_m68k.a[6] + 0xea, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[6] + 0xb4)); bus_write16(g_m68k.a[6] + 0xf8, _mv); M68K_TST16(_mv); }
    bus_write16(g_m68k.a[6] + 0x108, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[6] + 0x10a, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x50); bus_write16(g_m68k.a[6] + 0x10c, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[6] + 0x10c)); bus_write16(g_m68k.a[6] + 0x10e, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[6] + 0xde)); bus_write16(g_m68k.a[6] + 0x110, _mv); M68K_TST16(_mv); }
    bus_write16(g_m68k.a[6] + 0x112, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[6] + 0x114, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0xa); bus_write16(g_m68k.a[6] + 0x116, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[6] + 0x11c, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[6] + 0x11e, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[6] + 0x122, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[6] + 0x120, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[6] + 0x124, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[6] + 0x124)); bus_write16(g_m68k.a[6] + 0x128, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[6] + 0x126, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[6] + 0x126)); bus_write16(g_m68k.a[6] + 0x12a, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[6] + 0x8a)); bus_write16(g_m68k.a[6] + 0x12c, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0xffff); bus_write16(g_m68k.a[6] + 0x12e, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[6] + 0x130, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[6] + 0x132, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x3e8); bus_write16(g_m68k.a[6] + 0x134, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x64); bus_write16(g_m68k.a[6] + 0x136, _mv); M68K_TST16(_mv); }
    func_table_call(0x00F7C0);
    func_table_call(0xf2a2);
    func_table_call(0xe530);
    func_table_call(0xe55e);
    func_table_call(0x012202);
    { uint32_t _mv = (uint32_t)(g_m68k.a[0]); bus_write32(g_m68k.a[6] + 0xec, _mv); M68K_TST32(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x18))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], bus_read16(g_m68k.a[6] + 0x16));
    func_table_call(0x012256);
    func_table_call(0x012202);
    { uint32_t _mv = (uint32_t)(g_m68k.a[0]); bus_write32(g_m68k.a[6] + 0xf4, _mv); M68K_TST32(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x1c))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], bus_read16(g_m68k.a[6] + 0x16));
    func_table_call(0x012256);
    func_table_call(0x012202);
    { uint32_t _mv = (uint32_t)(g_m68k.a[0]); bus_write32(g_m68k.a[6] + 0xf0, _mv); M68K_TST32(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x1a))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], bus_read16(g_m68k.a[6] + 0x16));
    func_table_call(0x012256);
    bus_write32(g_m68k.a[6] + 0xfe, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    bus_write16(g_m68k.a[6] + 0x102, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    bus_write32(g_m68k.a[6] + 0xfa, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[6] + 0x104, _mv); M68K_TST16(_mv); }
    bus_write16(g_m68k.a[6] + 0x106, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    func_table_call(0xf172);
    func_table_call(0xedc6);
    func_table_call(0xeb9e);
    func_table_call(0xeea6);
    func_table_call(0xf1c6);
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[6] + 0xd8)); bus_write16(g_m68k.a[6] + 0x118, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[6] + 0xda)); bus_write16(g_m68k.a[6] + 0x11a, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00D956-$00DA72  (62 instructions, 284 bytes) */
void sub_00D956(void) {
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[6] + 0x11e)); bus_write16(g_m68k.a[6] + 0x122, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[6] + 0x124)); bus_write16(g_m68k.a[6] + 0x128, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[6] + 0x126)); bus_write16(g_m68k.a[6] + 0x12a, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[6] + 0x124, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[6] + 0x126, _mv); M68K_TST16(_mv); }
    { uint32_t _ea = (g_m68k.a[6] + 0x136); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    func_table_call(0x00F3E2);
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[6] + 0x14)); bus_write16(g_m68k.a[6] + 0x108, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[6] + 0x4)); bus_write16(g_m68k.a[6] + 0x10a, _mv); M68K_TST16(_mv); }
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x4), 0x1);
    if (M68K_CC_NE) goto loc_00D996;
    func_table_call(0xdfc8);
loc_00D996:
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x0), 0x1);
    if (M68K_CC_NE) goto loc_00D9F6;
    { uint32_t _ea = (g_m68k.a[6] + 0x152); uint16_t _tmp = bus_read16(_ea); M68K_SUB16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    if (M68K_CC_GE) goto loc_00D9C8;
    M68K_CMP16(bus_read16(0x103332), 0x0);
    if (M68K_CC_NE) goto loc_00D9B8;
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(0x101208, _mv); M68K_TST16(_mv); }
    goto loc_00D9C0;
loc_00D9B8:
    { uint16_t _mv = (uint16_t)(0xffff); bus_write16(0x101208, _mv); M68K_TST16(_mv); }
loc_00D9C0:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
loc_00D9C8:
    func_table_call(0xf4b4);
    M68K_CMP16(g_m68k.d[0], 0x0);
    if (M68K_CC_NE) goto loc_00D9F4;
    M68K_CMP16(bus_read16(0x103332), 0x0);
    if (M68K_CC_NE) goto loc_00D9E6;
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(0x101208, _mv); M68K_TST16(_mv); }
    goto loc_00D9EE;
loc_00D9E6:
    { uint16_t _mv = (uint16_t)(0xffff); bus_write16(0x101208, _mv); M68K_TST16(_mv); }
loc_00D9EE:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
loc_00D9F4:
    goto loc_00DA1A;
loc_00D9F6:
    M68K_BTST(bus_read8(0x100000), 0x0);
    if (M68K_CC_NE) goto loc_00DA1A;
    func_table_call(0x016A44);
    M68K_CMP16(g_m68k.d[0], 0xffff);
    if (M68K_CC_NE) goto loc_00DA1A;
    { uint16_t _mv = (uint16_t)(0xffff); bus_write16(0x101208, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
loc_00DA1A:
    func_table_call(0xf40a);
    func_table_call(0xf33a);
    func_table_call(0x00F264);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xe4))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[0] = bus_read32(0xda72 + (int16_t)(uint16_t)g_m68k.d[0]);
    func_table_call(g_m68k.a[0]);
    func_table_call(0xf130);
    func_table_call(0x00F80C);
    func_table_call(0x00F8DA);
    func_table_call(0x00F908);
    func_table_call(0x00F94C);
    func_table_call(0x00FA18);
    func_table_call(0x00F884);
    func_table_call(0x00FC9E);
    func_table_call(0xf386);
    func_table_call(0xf204);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00DAA2-$00DAAC  (2 instructions, 10 bytes) */
void jt_00DAA2(void) {
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(g_m68k.a[6] + 0xe4, _mv); M68K_TST16(_mv); }
    { func_table_call(0x00DAAC); return; }
    /* WARNING: function did not end with RTS */
}

/* $00DAAC-$00DBB6  (69 instructions, 266 bytes) */
void jt_00DAAC(void) {
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x104), 0x1);
    if (M68K_CC_NE) goto loc_00DAC8;
    { uint32_t _ea = (g_m68k.a[6] + 0x106); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x106), 0xe);
    if (M68K_CC_LT) goto loc_00DAC6;
    { uint16_t _mv = (uint16_t)(0xb); bus_write16(g_m68k.a[6] + 0xe4, _mv); M68K_TST16(_mv); }
loc_00DAC6:
    goto loc_00DACC;
loc_00DAC8:
    bus_write16(g_m68k.a[6] + 0x106, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
loc_00DACC:
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x0), 0x0);
    if (M68K_CC_NE) goto loc_00DADE;
    func_table_call(0xe4a6);
    func_table_call(0xedc6);
    goto loc_00DAE6;
loc_00DADE:
    func_table_call(0xe4fc);
    func_table_call(0xedc6);
loc_00DAE6:
    func_table_call(0xe092);
    func_table_call(0xf360);
    func_table_call(0xe19e);
    func_table_call(0xe3b8);
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x4), 0x0);
    if (M68K_CC_NE) goto loc_00DB06;
    func_table_call(0xe530);
    func_table_call(0xe55e);
loc_00DB06:
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x0), 0x0);
    if (M68K_CC_NE) goto loc_00DB1E;
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x4), 0x0);
    if (M68K_CC_NE) goto loc_00DB1E;
    func_table_call(0xe57c);
    func_table_call(0xe632);
loc_00DB1E:
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x4), 0x0);
    if (M68K_CC_NE) goto loc_00DB2A;
    func_table_call(0xe770);
loc_00DB2A:
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x0), 0x0);
    if (M68K_CC_NE) goto loc_00DB54;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x3c))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_OR16(g_m68k.d[0], bus_read16(g_m68k.a[6] + 0x3e));
    if (M68K_CC_NE) goto loc_00DB48;
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x4), 0x0);
    if (M68K_CC_NE) goto loc_00DB48;
    func_table_call(0xe7f0);
loc_00DB48:
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x4), 0x0);
    if (M68K_CC_NE) goto loc_00DB54;
    func_table_call(0xe826);
loc_00DB54:
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x4), 0x0);
    if (M68K_CC_NE) goto loc_00DB60;
    func_table_call(0xe830);
loc_00DB60:
    func_table_call(0xe8ba);
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x4), 0x0);
    if (M68K_CC_NE) goto loc_00DB70;
    func_table_call(0xea12);
loc_00DB70:
    func_table_call(0xebd4);
    func_table_call(0xea42);
    func_table_call(0xeaa8);
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x0), 0x0);
    if (M68K_CC_NE) goto loc_00DB92;
    func_table_call(0xeae8);
    func_table_call(0xeb44);
    func_table_call(0xeb9e);
    goto loc_00DB96;
loc_00DB92:
    func_table_call(0xeb74);
loc_00DB96:
    func_table_call(0xedf4);
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x4), 0x0);
    if (M68K_CC_NE) goto loc_00DBAC;
    func_table_call(0xf2fa);
    func_table_call(0xeea6);
    goto loc_00DBB0;
loc_00DBAC:
    func_table_call(0xeebc);
loc_00DBB0:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00DBB6-$00DBBA  (1 instructions, 4 bytes) */
void jt_00DBB6(void) {
    { func_table_call(0xdbf0); return; }
    /* WARNING: function did not end with RTS */
}

/* $00DBEA-$00DBF0  (2 instructions, 6 bytes) */
void jt_00DBEA(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00DBF0-$00DC6C  (32 instructions, 124 bytes) */
void jt_00DBF0(void) {
    func_table_call(0x00F326);
    bus_write32(g_m68k.a[6] + 0x14a, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xdc))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], 0x400);
    M68K_ROL16(g_m68k.d[0], 0x5);
    M68K_AND16(g_m68k.d[0], 0x1f);
    g_m68k.a[0] = 0x00DCC4;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST8((uint8_t)g_m68k.d[0]);
    M68K_EXT16(g_m68k.d[0]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[6] + 0x150, _mv); M68K_TST16(_mv); }
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x14))); M68K_TST16((uint16_t)g_m68k.d[1]);
    if (M68K_CC_PL) goto loc_00DC20;
    M68K_NEG16(g_m68k.d[1]);
loc_00DC20:
    M68K_LSR16(g_m68k.d[1], 0x7);
    M68K_AND16(g_m68k.d[1], 0x1f);
    M68K_ADD16(g_m68k.d[1], g_m68k.d[1]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xde))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], 0x400);
    M68K_ROL16(g_m68k.d[0], 0x5);
    M68K_AND16(g_m68k.d[0], 0x1f);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[6] + 0x14a, _mv); M68K_TST16(_mv); }
    g_m68k.a[0] = 0x00DCE4;
    M68K_TST16(bus_read16(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[1]));
    if (M68K_CC_EQ) goto loc_00DC4C;
    func_table_call(0x00F354);
loc_00DC4C:
    M68K_ADD16(g_m68k.d[0], bus_read16(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[1]));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[6] + 0x14e, _mv); M68K_TST16(_mv); }
    M68K_ADD16(g_m68k.d[1], g_m68k.d[1]);
    g_m68k.a[0] = 0x00DD24;
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[1])); bus_write32(g_m68k.a[6] + 0x146, _mv); M68K_TST32(_mv); }
    { uint16_t _mv = (uint16_t)(0x5); bus_write16(g_m68k.a[6] + 0xe4, _mv); M68K_TST16(_mv); }
    { func_table_call(0xdda4); return; }
    /* WARNING: function did not end with RTS */
}

/* $00DDA4-$00DE6A  (52 instructions, 198 bytes) */
void jt_00DDA4(void) {
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x0), 0x0);
    if (M68K_CC_NE) goto loc_00DDB6;
    func_table_call(0xe4a6);
    func_table_call(0xedc6);
    goto loc_00DDBE;
loc_00DDB6:
    func_table_call(0xe4fc);
    func_table_call(0xedc6);
loc_00DDBE:
    func_table_call(0xe092);
    func_table_call(0xf360);
    func_table_call(0xe19e);
    func_table_call(0xe432);
    g_m68k.d[0] = bus_read32(g_m68k.a[6] + 0x146); M68K_TST32((uint32_t)g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[6] + 0x14a); uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[0]); bus_write32(_ea, _tmp); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x14e))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_CMP16(g_m68k.d[0], bus_read16(g_m68k.a[6] + 0x14a));
    if (M68K_CC_GT) goto loc_00DDF0;
    bus_write16(g_m68k.a[6] + 0x106, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[6] + 0xe4, _mv); M68K_TST16(_mv); }
    { func_table_call(0xdaa2); return; }
loc_00DDF0:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x14a))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_AND16(g_m68k.d[0], 0x1f);
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x150), 0xffff);
    if (M68K_CC_NE) goto loc_00DE0C;
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x20)); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_SUB16(g_m68k.d[0], g_m68k.d[1]);
    M68K_AND16(g_m68k.d[0], 0x1f);
loc_00DE0C:
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[6] + 0x54, _mv); M68K_TST16(_mv); }
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x0), 0x0);
    if (M68K_CC_NE) goto loc_00DE2C;
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x4), 0x0);
    if (M68K_CC_NE) goto loc_00DE28;
    func_table_call(0xe7f0);
    func_table_call(0xe826);
loc_00DE28:
    func_table_call(0xea42);
loc_00DE2C:
    func_table_call(0xeaa8);
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x0), 0x0);
    if (M68K_CC_NE) goto loc_00DE46;
    func_table_call(0xeae8);
    func_table_call(0xeb44);
    func_table_call(0xeb9e);
    goto loc_00DE4A;
loc_00DE46:
    func_table_call(0xeb74);
loc_00DE4A:
    func_table_call(0xedf4);
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x4), 0x0);
    if (M68K_CC_NE) goto loc_00DE60;
    func_table_call(0xf2fa);
    func_table_call(0xeea6);
    goto loc_00DE64;
loc_00DE60:
    func_table_call(0xeebc);
loc_00DE64:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00DE6A-$00DE74  (2 instructions, 10 bytes) */
void jt_00DE6A(void) {
    { uint16_t _mv = (uint16_t)(0x7); bus_write16(g_m68k.a[6] + 0xe4, _mv); M68K_TST16(_mv); }
    { func_table_call(0x00DE74); return; }
    /* WARNING: function did not end with RTS */
}

/* $00DE74-$00DE7A  (2 instructions, 6 bytes) */
void jt_00DE74(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00DE7A-$00DE84  (2 instructions, 10 bytes) */
void jt_00DE7A(void) {
    { uint16_t _mv = (uint16_t)(0x9); bus_write16(g_m68k.a[6] + 0xe4, _mv); M68K_TST16(_mv); }
    { func_table_call(0x00DE84); return; }
    /* WARNING: function did not end with RTS */
}

/* $00DE84-$00DEB4  (12 instructions, 48 bytes) */
void jt_00DE84(void) {
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0xa), 0x100);
    if (M68K_CC_LT) goto loc_00DE9A;
    { uint16_t _mv = (uint16_t)(0x100); bus_write16(g_m68k.a[6] + 0xa, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[6] + 0xe4, _mv); M68K_TST16(_mv); }
    goto loc_00DEAE;
loc_00DE9A:
    { uint32_t _ea = (g_m68k.a[6] + 0xa); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    func_table_call(0xeb9e);
    func_table_call(0xedc6);
    func_table_call(0xedf4);
    func_table_call(0xeea6);
loc_00DEAE:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00DEB4-$00DF02  (17 instructions, 78 bytes) */
void sub_00DEB4(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x01690E);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x12)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(0x2)); M68K_TST16((uint16_t)g_m68k.d[7]);
loc_00DEC6:
    func_table_call(0x01690E);
    M68K_ADD16(g_m68k.d[0], 0x1);
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[7]; _cnt--; g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_00DEC6; } }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x15)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x01690E);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x16)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x01690E);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x101202))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], 0x17);
    func_table_call(0x01690E);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1e)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x01690E);
    return;
}

/* $00DF02-$00DFAC  (39 instructions, 170 bytes) */
void sub_00DF02(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[6]);
    g_m68k.a[0] = 0x200000;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xe6))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[0] = bus_read32(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    func_table_call(0xedc6);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xd8))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xda))); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xa))); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xa))); M68K_TST16((uint16_t)g_m68k.d[3]);
    g_m68k.a[4] = bus_read32(g_m68k.a[0] + 0x0);
    { uint32_t _mv = (uint32_t)(g_m68k.a[4]); bus_write32(0x101672, _mv); M68K_TST32(_mv); }
    g_m68k.a[5] = bus_read32(g_m68k.a[0] + 0x4);
    { uint32_t _mv = (uint32_t)(g_m68k.a[5]); bus_write32(0x101676, _mv); M68K_TST32(_mv); }
    func_table_call(0x01348E);
    g_m68k.a[4] = bus_read32(g_m68k.a[0] + 0x8);
    g_m68k.a[5] = bus_read32(g_m68k.a[0] + 0xc);
    func_table_call(0x013E14);
    g_m68k.a[4] = bus_read32(g_m68k.a[0] + 0x10);
    g_m68k.a[5] = bus_read32(g_m68k.a[0] + 0x14);
    g_m68k.a[6] = 0x02E794;
    func_table_call(0x014072);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xc0))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xc4))); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.a[4] = bus_read32(g_m68k.a[0] + 0x18);
    func_table_call(0x014652);
    g_m68k.a[3] = 0x02240E;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x101202))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[3] = bus_read32(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    g_m68k.d[0] = (uint32_t)(int32_t)(int8_t)(0x0); M68K_TST32(g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1011FA))); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xc4))); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x019E38);
    func_table_call(0x014584);
    g_m68k.a[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}

/* $00DFAC-$00DFC0  (4 instructions, 20 bytes) */
void sub_00DFAC(void) {
    func_table_call(0x01410E);
    func_table_call(0x019F42);
    func_table_call(0x0133FA);
    return;
}

/* $00DFC0-$00DFC8  (2 instructions, 8 bytes) */
void sub_00DFC0(void) {
    func_table_call(0x0120E0);
    return;
}

/* $00E28C-$00E292  (2 instructions, 6 bytes) */
void jt_00E28C(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}
