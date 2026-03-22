/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $00FC9E - $010EA8 */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

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

/* $00FD1C-$00FD34  (7 instructions, 24 bytes) */
void sub_00FD1C(void) {
    g_m68k.a[3] = 0x0278C6;
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[3] = bus_read32(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x71ba)); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x10052);
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

/* $010002-$01000C  (1 instructions, 10 bytes) */
void jt_010002(void) {
    { uint16_t _mv = (uint16_t)(bus_read16(0x103334)); bus_write16(0x1016C4, _mv); M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $010004-$010008  (1 instructions, 4 bytes) */
void jt_010004(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x34); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $010006-$01000A  (1 instructions, 4 bytes) */
void jt_010006(void) {
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[4] + 0x10 + (int16_t)(uint16_t)g_m68k.d[0])); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $010008-$01000C  (1 instructions, 4 bytes) */
void jt_010008(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xc4); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $01000A-$01000C  (1 instructions, 2 bytes) */
void jt_01000A(void) {
    { uint8_t _mv = (uint8_t)(g_m68k.d[4]); bus_write8(g_m68k.a[3], _mv); g_m68k.a[3] += 1; M68K_TST8(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $01000C-$010010  (1 instructions, 4 bytes) */
void jt_01000C(void) {
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    /* WARNING: function did not end with RTS */
}

/* $010010-$010014  (1 instructions, 4 bytes) */
void jt_010010(void) {
    M68K_CMP16(g_m68k.d[0], 0xa);
    /* WARNING: function did not end with RTS */
}

/* $010014-$01001C  (2 instructions, 8 bytes) */
void jt_010014(void) {
    if (M68K_CC_LE) { func_table_call(0x01001C); return; }
    bus_write32(0x1016D0, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $010018-$01001C  (1 instructions, 4 bytes) */
void jt_010018(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xd0); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $01001A-$01001C  (1 instructions, 2 bytes) */
void jt_01001A(void) {
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[0])); bus_write8(g_m68k.a[3], _mv); g_m68k.a[3] += 1; M68K_TST8(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $01001C-$010020  (2 instructions, 4 bytes) */
void jt_01001C(void) {
    M68K_TST16(g_m68k.d[0]);
    if (M68K_CC_MI) { func_table_call(0x010050); return; }
    /* WARNING: function did not end with RTS */
}

/* $010020-$01002E  (6 instructions, 14 bytes) */
void jt_010020(void) {
    M68K_CMP16(g_m68k.d[0], 0xa);
    if (M68K_CC_GT) { func_table_call(0x010050); return; }
    g_m68k.d[1] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[1]);
    M68K_SWAP(g_m68k.d[1]);
    M68K_TST16(g_m68k.d[1]);
    if (M68K_CC_NE) { func_table_call(0x010050); return; }
    /* WARNING: function did not end with RTS */
}

/* $01002E-$010038  (3 instructions, 10 bytes) */
void jt_01002E(void) {
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1016D0))); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_BSET(g_m68k.d[1], g_m68k.d[0]);
    if (M68K_CC_NE) { func_table_call(0x010050); return; }
    /* WARNING: function did not end with RTS */
}

/* $010038-$01003E  (1 instructions, 6 bytes) */
void jt_010038(void) {
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); bus_write16(0x1016D0, _mv); M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $01003C-$010044  (2 instructions, 8 bytes) */
void jt_01003C(void) {
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[0])); bus_write8(g_m68k.a[3], _mv); g_m68k.a[3] += 1; M68K_TST8(_mv); }
    g_m68k.a[0] = 0x026F30;
    /* WARNING: function did not end with RTS */
}

/* $010040-$01004A  (3 instructions, 10 bytes) */
void jt_010040(void) {
    M68K_OR8(g_m68k.d[2], 0x30);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST16((uint16_t)g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $01004A-$010050  (1 instructions, 6 bytes) */
void jt_01004A(void) {
    func_table_call(0x015256);
    /* WARNING: function did not end with RTS */
}

/* $010050-$010052  (1 instructions, 2 bytes) */
void jt_010050(void) {
    return;
}

/* $010052-$010058  (1 instructions, 6 bytes) */
void sub_010052(void) {
    g_m68k.a[2] = 0x3C0002;
    /* WARNING: function did not end with RTS */
}

/* $010056-$01005C  (3 instructions, 6 bytes) */
void jt_010056(void) {
    M68K_OR8(g_m68k.d[2], 0x1b);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(_postinc16(3))); M68K_TST16((uint16_t)g_m68k.d[3]);
    M68K_SUB16(g_m68k.d[3], 0x1);
    /* WARNING: function did not end with RTS */
}

/* $01005C-$010080  (11 instructions, 36 bytes) */
void jt_01005C(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(_postinc16(3))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_SUB16(g_m68k.d[0], 0x1);
    m68k_set_sr(m68k_get_sr() | 0x700);
    { uint16_t _mv = (uint16_t)(0x20); bus_write16(g_m68k.a[2] + 0x2, _mv); M68K_TST16(_mv); }
loc_01006A:
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2] + (-0x2), _mv); M68K_TST16(_mv); }
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[3])); M68K_TST16((uint16_t)g_m68k.d[1]);
loc_010070:
    { uint16_t _mv = (uint16_t)(_postinc16(3)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[1]; _cnt--; g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_010070; } }
    M68K_ADD16(g_m68k.d[2], 0x1);
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[0]; _cnt--; g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_01006A; } }
    m68k_set_sr(m68k_get_sr() & 0xf8ff);
    /* WARNING: function did not end with RTS */
}

/* $010080-$010082  (1 instructions, 2 bytes) */
void jt_010080(void) {
    return;
}

/* $010082-$0100B8  (18 instructions, 54 bytes) */
void sub_010082(void) {
    M68K_LSL16(g_m68k.d[4], 0x6);
    M68K_LSL16(g_m68k.d[4], 0x6);
    g_m68k.a[2] = 0x3C0002;
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(_postinc16(3))); M68K_TST16((uint16_t)g_m68k.d[3]);
    M68K_SUB16(g_m68k.d[3], 0x1);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(_postinc16(3))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_SUB16(g_m68k.d[0], 0x1);
    m68k_set_sr(m68k_get_sr() | 0x700);
    { uint16_t _mv = (uint16_t)(0x20); bus_write16(g_m68k.a[2] + 0x2, _mv); M68K_TST16(_mv); }
loc_01009E:
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2] + (-0x2), _mv); M68K_TST16(_mv); }
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[3])); M68K_TST16((uint16_t)g_m68k.d[1]);
loc_0100A4:
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(_postinc16(3))); M68K_TST16((uint16_t)g_m68k.d[5]);
    M68K_AND16(g_m68k.d[5], 0xfff);
    M68K_OR16(g_m68k.d[5], g_m68k.d[4]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[5]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[1]; _cnt--; g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_0100A4; } }
    M68K_ADD16(g_m68k.d[2], 0x1);
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[0]; _cnt--; g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_01009E; } }
    /* WARNING: function did not end with RTS */
}

/* $0100B8-$0100BE  (2 instructions, 6 bytes) */
void jt_0100B8(void) {
    m68k_set_sr(m68k_get_sr() & 0xf8ff);
    return;
}

/* $0100BE-$0100C4  (1 instructions, 6 bytes) */
void sub_0100BE(void) {
    g_m68k.a[3] = 0x0277F2;
    /* WARNING: function did not end with RTS */
}

/* $0100C0-$0100C8  (2 instructions, 8 bytes) */
void jt_0100C0(void) {
    M68K_OR8(g_m68k.d[2], 0xf2);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x711a)); M68K_TST16((uint16_t)g_m68k.d[2]);
    /* WARNING: function did not end with RTS */
}

/* $0100C8-$0100D0  (2 instructions, 8 bytes) */
void jt_0100C8(void) {
    func_table_call(0x10052);
    func_table_call(0x100d2);
    /* WARNING: function did not end with RTS */
}

/* $0100D0-$0100D2  (1 instructions, 2 bytes) */
void jt_0100D0(void) {
    return;
}

/* $0100D2-$010104  (12 instructions, 50 bytes) */
void sub_0100D2(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x101666))); M68K_TST16((uint16_t)g_m68k.d[0]);
    if (M68K_CC_PL) goto loc_0100DC;
    M68K_NEG16(g_m68k.d[0]);
loc_0100DC:
    g_m68k.a[0] = 0x027316;
    M68K_LSR16(g_m68k.d[0], 0x4);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0])); bus_write32(0x1016D8, _mv); M68K_TST32(_mv); }
    g_m68k.a[0] = 0x027296;
    g_m68k.a[1] = 0x027716;
    g_m68k.d[0] = (uint32_t)(int32_t)(int8_t)(0x0); M68K_TST32(g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(0x1016D8))); M68K_TST8((uint8_t)g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $010100-$01014C  (21 instructions, 76 bytes) */
void jt_010100(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xd8); bus_write8(_ea, _tmp); }
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.a[3] = bus_read32(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x7059)); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x10052);
    g_m68k.d[0] = (uint32_t)(int32_t)(int8_t)(0x0); M68K_TST32(g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(0x1016D9))); M68K_TST8((uint8_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.a[3] = bus_read32(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x7099)); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x10052);
    g_m68k.d[0] = (uint32_t)(int32_t)(int8_t)(0x0); M68K_TST32(g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(0x1016DA))); M68K_TST8((uint8_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.a[3] = bus_read32(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x70d9)); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x10052);
    return;
}

/* $01014C-$01018E  (24 instructions, 66 bytes) */
void sub_01014C(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[1]);
    M68K_TST16(g_m68k.d[3]);
    if (M68K_CC_MI) goto loc_01016C;
    M68K_TST16(g_m68k.d[2]);
    if (M68K_CC_MI) goto loc_01015E;
    func_table_call(0x1018e);
    goto loc_010188;
loc_01015E:
    M68K_NEG16(g_m68k.d[2]);
    func_table_call(0x1018e);
    M68K_NEG16(g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], 0x80);
    goto loc_010188;
loc_01016C:
    M68K_NEG16(g_m68k.d[3]);
    M68K_TST16(g_m68k.d[2]);
    if (M68K_CC_PL) goto loc_01017E;
    M68K_NEG16(g_m68k.d[2]);
    func_table_call(0x1018e);
    M68K_ADD16(g_m68k.d[0], 0x80);
    goto loc_010188;
loc_01017E:
    func_table_call(0x1018e);
    M68K_NEG16(g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], 0x100);
loc_010188:
    g_m68k.d[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}

/* $01018E-$0101E0  (32 instructions, 82 bytes) */
void sub_01018E(void) {
    M68K_TST16(g_m68k.d[2]);
    if (M68K_CC_EQ) goto loc_0101DA;
    M68K_EXT32(g_m68k.d[3]);
    M68K_LSL32(g_m68k.d[3], 0x8);
    M68K_DIVU(g_m68k.d[3], g_m68k.d[2]);
    if (M68K_CC_VS) goto loc_0101DA;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[3])); M68K_TST16((uint16_t)g_m68k.d[0]);
    if (M68K_CC_MI) goto loc_0101DA;
    M68K_SWAP(g_m68k.d[3]);
    M68K_LSR16(g_m68k.d[2], 0x1);
    M68K_CMP16(g_m68k.d[3], g_m68k.d[2]);
    if (M68K_CC_CS) goto loc_0101A8;
    M68K_ADD16(g_m68k.d[0], 0x1);
loc_0101A8:
    M68K_CMP16(g_m68k.d[0], 0x517c);
    if (M68K_CC_CC) goto loc_0101DA;
    M68K_CMP16(g_m68k.d[0], 0x1b27);
    if (M68K_CC_CC) goto loc_0101D4;
    M68K_CMP16(g_m68k.d[0], 0x1047);
    if (M68K_CC_CC) goto loc_0101CE;
    M68K_CMP16(g_m68k.d[0], 0xb9d);
    if (M68K_CC_CC) goto loc_0101C8;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(0x101e0 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST8((uint8_t)g_m68k.d[0]);
    M68K_EXT16(g_m68k.d[0]);
    return;
loc_0101C8:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x3d)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
loc_0101CE:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x3e)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
loc_0101D4:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x3f)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
loc_0101DA:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x40)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $010C42-$010D7E  (79 instructions, 316 bytes) */
void jt_010C42(void) {
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3d)); M68K_TST16((uint16_t)g_m68k.d[6]);
    /* WARNING: function did not end with RTS */
}

/* $010DE2-$010E10  (14 instructions, 46 bytes) */
void sub_010DE2(void) {
    g_m68k.a[7] -= 2; bus_write16(g_m68k.a[7], g_m68k.d[1]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(0x10FDAD))); M68K_TST8((uint8_t)g_m68k.d[1]);
    M68K_CMP16(g_m68k.d[0], 0x0);
    if (M68K_CC_NE) goto loc_010DF8;
    M68K_AND8(g_m68k.d[1], 0x2);
    goto loc_010DFC;
loc_010DF8:
    M68K_AND8(g_m68k.d[1], 0x8);
loc_010DFC:
    M68K_TST8(g_m68k.d[1]);
    if (M68K_CC_EQ) goto loc_010E06;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    goto loc_010E0A;
loc_010E06:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
loc_010E0A:
    g_m68k.d[1] = (uint32_t)(int32_t)(int16_t)bus_read16(g_m68k.a[7]); g_m68k.a[7] += 2;
    return;
}

/* $010E10-$010E36  (11 instructions, 38 bytes) */
void sub_010E10(void) {
    M68K_CMP16(g_m68k.d[0], 0x0);
    if (M68K_CC_NE) goto loc_010E1E;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(0x10FD96))); M68K_TST8((uint8_t)g_m68k.d[0]);
    goto loc_010E24;
loc_010E1E:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(0x10FD9C))); M68K_TST8((uint8_t)g_m68k.d[0]);
loc_010E24:
    M68K_AND8(g_m68k.d[0], 0x10);
    if (M68K_CC_EQ) goto loc_010E30;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    goto loc_010E34;
loc_010E30:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
loc_010E34:
    return;
}

/* $010E36-$010E5C  (11 instructions, 38 bytes) */
void sub_010E36(void) {
    M68K_CMP16(g_m68k.d[0], 0x0);
    if (M68K_CC_NE) goto loc_010E44;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(0x10FD97))); M68K_TST8((uint8_t)g_m68k.d[0]);
    goto loc_010E4A;
loc_010E44:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(0x10FD9D))); M68K_TST8((uint8_t)g_m68k.d[0]);
loc_010E4A:
    M68K_AND8(g_m68k.d[0], 0x10);
    if (M68K_CC_EQ) goto loc_010E56;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    goto loc_010E5A;
loc_010E56:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
loc_010E5A:
    return;
}

/* $010E5C-$010E82  (11 instructions, 38 bytes) */
void sub_010E5C(void) {
    M68K_CMP16(g_m68k.d[0], 0x0);
    if (M68K_CC_NE) goto loc_010E6A;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(0x10FD96))); M68K_TST8((uint8_t)g_m68k.d[0]);
    goto loc_010E70;
loc_010E6A:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(0x10FD9C))); M68K_TST8((uint8_t)g_m68k.d[0]);
loc_010E70:
    M68K_AND8(g_m68k.d[0], 0x20);
    if (M68K_CC_EQ) goto loc_010E7C;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    goto loc_010E80;
loc_010E7C:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
loc_010E80:
    return;
}

/* $010E82-$010EA8  (11 instructions, 38 bytes) */
void sub_010E82(void) {
    M68K_CMP16(g_m68k.d[0], 0x0);
    if (M68K_CC_NE) goto loc_010E90;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(0x10FD97))); M68K_TST8((uint8_t)g_m68k.d[0]);
    goto loc_010E96;
loc_010E90:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(0x10FD9D))); M68K_TST8((uint8_t)g_m68k.d[0]);
loc_010E96:
    M68K_AND8(g_m68k.d[0], 0x20);
    if (M68K_CC_EQ) goto loc_010EA2;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    goto loc_010EA6;
loc_010EA2:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
loc_010EA6:
    return;
}
