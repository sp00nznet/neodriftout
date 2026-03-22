/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $00F9E6 - $010104 */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

/* $00F9E6-$00FA0C  (6 instructions, 38 bytes) */
void sub_00F9E6(void) {
    { uint16_t _mv = (uint16_t)(0xffff); bus_write16(0x101694, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(0x101696, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x2); bus_write16(0x101690, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(0x101698, _mv); M68K_TST16(_mv); }
    func_table_call(0xfa0c);
    return;
}

/* $00FA0C-$00FA18  (3 instructions, 12 bytes) */
void sub_00FA0C(void) {
    func_table_call(0xfc12);
    bus_write16(0x101692, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
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

/* $00FBE0-$00FC0A  (9 instructions, 42 bytes) */
void sub_00FBE0(void) {
    M68K_CMP16(g_m68k.d[0], 0xffff);
    if (M68K_CC_EQ) goto loc_00FC08;
    { uint16_t _mv = (uint16_t)(0xffff); bus_write16(0x101694, _mv); M68K_TST16(_mv); }
    g_m68k.a[0] = 0x026EE0;
    M68K_LSL16(g_m68k.d[0], 0x3);
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[0] + 0x4 + (int16_t)(uint16_t)g_m68k.d[0])); bus_write16(0x101692, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[0] + 0x2 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x015256);
loc_00FC08:
    return;
}

/* $00FC0A-$00FC12  (2 instructions, 8 bytes) */
void sub_00FC0A(void) {
    func_table_call(0x00FC20);
    return;
}

/* $00FC20-$00FC48  (10 instructions, 40 bytes) */
void sub_00FC20(void) {
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x101686))); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[1])); M68K_TST16((uint16_t)g_m68k.d[2]);
    M68K_ADD16(g_m68k.d[2], 0x2);
    M68K_AND16(g_m68k.d[2], 0x7);
    M68K_CMP16(g_m68k.d[2], bus_read16(0x101684));
    if (M68K_CC_EQ) goto loc_00FC46;
    g_m68k.a[0] = 0x101688;
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[1], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(0x101686, _mv); M68K_TST16(_mv); }
loc_00FC46:
    return;
}

/* $00FC48-$00FC74  (11 instructions, 44 bytes) */
void sub_00FC48(void) {
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x101684))); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_CMP16(g_m68k.d[1], bus_read16(0x101686));
    if (M68K_CC_EQ) goto loc_00FC6E;
    g_m68k.a[0] = 0x101688;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[1]))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[1], 0x2);
    M68K_AND16(g_m68k.d[1], 0x7);
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); bus_write16(0x101684, _mv); M68K_TST16(_mv); }
    goto loc_00FC72;
loc_00FC6E:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0xffff)); M68K_TST16((uint16_t)g_m68k.d[0]);
loc_00FC72:
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
