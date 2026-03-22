/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $016BF0 - $01729E */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

/* $016BF0-$016BF2  (1 instructions, 2 bytes) */
void jt_016BF0(void) {
    return;
}

/* $016BF2-$016E40  (147 instructions, 590 bytes) */
void jt_016BF2(void) {
    M68K_TST16(bus_read16(g_m68k.a[1] + 0x12));
    if (M68K_CC_NE) goto loc_016CE6;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x10165E))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_SUB16(g_m68k.d[0], bus_read16(g_m68k.a[1] + 0xc));
    if (M68K_CC_CC) goto loc_016C0A;
    M68K_NEG16(g_m68k.d[0]);
loc_016C0A:
    M68K_CMP16(g_m68k.d[0], 0x30);
    if (M68K_CC_CC) goto loc_016CBE;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x101660))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_SUB16(g_m68k.d[0], bus_read16(g_m68k.a[1] + 0xe));
    if (M68K_CC_CC) goto loc_016C22;
    M68K_NEG16(g_m68k.d[0]);
loc_016C22:
    M68K_CMP16(g_m68k.d[0], 0x30);
    if (M68K_CC_CC) goto loc_016CBE;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0xd2)); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_CMP16(bus_read16(g_m68k.a[1] + 0x10), 0x5a);
    if (M68K_CC_CS) goto loc_016C3C;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0xce)); M68K_TST16((uint16_t)g_m68k.d[0]);
loc_016C3C:
    func_table_call(0x015256);
    { uint32_t _ea = (g_m68k.a[1] + 0x12); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    bus_write16(g_m68k.a[1] + 0x14, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    g_m68k.d[0] = 0; g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[1] + 0xc))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_SWAP(g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); bus_write32(g_m68k.a[1] + 0x16, _mv); M68K_TST32(_mv); }
    g_m68k.d[0] = 0; g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[1] + 0xe))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_SWAP(g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); bus_write32(g_m68k.a[1] + 0x1a, _mv); M68K_TST32(_mv); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[1] + 0xc))); M68K_TST16((uint16_t)g_m68k.d[2]);
    M68K_SUB16(g_m68k.d[2], bus_read16(0x10165E));
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[1] + 0xe))); M68K_TST16((uint16_t)g_m68k.d[3]);
    M68K_SUB16(g_m68k.d[3], bus_read16(0x101660));
    func_table_call(0x01014C);
    M68K_LSL16(g_m68k.d[0], 0x8);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[1] + 0x1e, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x101662))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_MULS(g_m68k.d[0], 0xe0);
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); bus_write32(g_m68k.a[1] + 0x20, _mv); M68K_TST32(_mv); }
    bus_write32(g_m68k.a[1] + 0x24, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); bus_write32(g_m68k.a[1] + 0x28, _mv); M68K_TST32(_mv); }
    bus_write32(g_m68k.a[1] + 0x2c, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint32_t _mv = (uint32_t)(0x8000); bus_write32(g_m68k.a[1] + 0x30, _mv); M68K_TST32(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[1] + 0xc))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[1] + 0xe))); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x100)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0x6)); M68K_TST16((uint16_t)g_m68k.d[3]);
    func_table_call(0x01458C);
    goto loc_016CE6;
loc_016CBE:
    g_m68k.a[0] = bus_read32(g_m68k.a[1] + 0x8);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[1] + 0x10))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[3] = bus_read32(0x08000C);
    g_m68k.a[3] = bus_read32(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    func_table_call(0x012270);
    g_m68k.d[0] = (uint32_t)(int32_t)(int8_t)(0x10); M68K_TST32(g_m68k.d[0]);
    g_m68k.d[2] = (uint32_t)(int32_t)(int8_t)(0x18); M68K_TST32(g_m68k.d[2]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { func_table_call(0x0141AA); return; }
loc_016CE6:
    M68K_TST16(bus_read16(g_m68k.a[1] + 0x14));
    if (M68K_CC_NE) goto loc_016DE0;
    g_m68k.d[2] = bus_read32(g_m68k.a[1] + 0x20); M68K_TST32((uint32_t)g_m68k.d[2]);
    M68K_LSR32(g_m68k.d[2], 0x8);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[1] + 0x1e))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], 0x4000);
    M68K_LSR16(g_m68k.d[0], 0x5);
    M68K_AND16(g_m68k.d[0], 0xfffe);
    g_m68k.a[3] = 0x027A3A;
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_MULS(g_m68k.d[1], g_m68k.d[2]);
    { uint32_t _ea = (g_m68k.a[1] + 0x16); uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[1] + 0x1e))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_LSR16(g_m68k.d[0], 0x5);
    M68K_AND16(g_m68k.d[0], 0xfffe);
    g_m68k.a[3] = 0x027A3A;
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_MULS(g_m68k.d[1], g_m68k.d[2]);
    { uint32_t _ea = (g_m68k.a[1] + 0x1a); uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    g_m68k.d[0] = bus_read32(g_m68k.a[1] + 0x24); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[1] = bus_read32(g_m68k.a[1] + 0x28); M68K_TST32((uint32_t)g_m68k.d[1]);
    M68K_ADD32(g_m68k.d[0], g_m68k.d[1]);
    if (M68K_CC_PL) goto loc_016D5A;
    M68K_NEG32(g_m68k.d[0]);
    M68K_NEG32(g_m68k.d[1]);
    M68K_LSR32(g_m68k.d[1], 0x1);
    M68K_CMP32(g_m68k.d[1], 0x10000);
    if (M68K_CC_CC) goto loc_016D52;
    { uint32_t _ea = (g_m68k.a[1] + 0x14); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    goto loc_016DE0;
loc_016D52:
    { uint32_t _ea = (g_m68k.a[1] + 0x20); uint16_t _tmp = bus_read16(_ea); M68K_ASR16(_tmp, 1); bus_write16(_ea, _tmp); }
    /* TODO $016D56: roxr.w $22(a1)  [E4 E9 00 22] */
loc_016D5A:
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); bus_write32(g_m68k.a[1] + 0x24, _mv); M68K_TST32(_mv); }
    M68K_SUB32(g_m68k.d[1], 0x10000);
    { uint32_t _mv = (uint32_t)(g_m68k.d[1]); bus_write32(g_m68k.a[1] + 0x28, _mv); M68K_TST32(_mv); }
    g_m68k.d[1] = bus_read32(g_m68k.a[1] + 0x2c); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[0] = bus_read32(g_m68k.a[1] + 0x30); M68K_TST32((uint32_t)g_m68k.d[0]);
    if (M68K_CC_MI) goto loc_016D8A;
    M68K_ADD32(g_m68k.d[1], g_m68k.d[0]);
    M68K_CMP32(g_m68k.d[1], 0xc0000);
    if (M68K_CC_CS) goto loc_016D9C;
    M68K_AND32(g_m68k.d[1], 0xffff);
    goto loc_016D9C;
loc_016D8A:
    M68K_ADD32(g_m68k.d[1], g_m68k.d[0]);
    if (M68K_CC_PL) goto loc_016D9C;
    M68K_AND32(g_m68k.d[1], 0xffff);
    M68K_OR32(g_m68k.d[1], 0xb0000);
loc_016D9C:
    { uint32_t _mv = (uint32_t)(g_m68k.d[1]); bus_write32(g_m68k.a[1] + 0x2c, _mv); M68K_TST32(_mv); }
    g_m68k.a[0] = bus_read32(g_m68k.a[1] + 0x8);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[1] + 0x10))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], bus_read16(g_m68k.a[1] + 0x2c));
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[3] = bus_read32(0x08000C);
    g_m68k.a[3] = bus_read32(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    func_table_call(0x012270);
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[1] + 0x16)); bus_write16(g_m68k.a[1] + 0xc, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[1] + 0x1a))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_SUB16(g_m68k.d[0], bus_read16(g_m68k.a[1] + 0x24));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[1] + 0xe, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (uint32_t)(int32_t)(int8_t)(0x10); M68K_TST32(g_m68k.d[0]);
    g_m68k.d[2] = (uint32_t)(int32_t)(int8_t)(0x18); M68K_TST32(g_m68k.d[2]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x4000)); M68K_TST16((uint16_t)g_m68k.d[1]);
    { func_table_call(0x0141AA); return; }
loc_016DE0:
    M68K_CMP16(bus_read16(g_m68k.a[1] + 0x14), 0x1e);
    if (M68K_CC_NE) goto loc_016DF0;
    { func_table_call(0x014240); return; }
loc_016DF0:
    { uint32_t _ea = (g_m68k.a[1] + 0x14); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    g_m68k.a[0] = bus_read32(g_m68k.a[1] + 0x8);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[1] + 0x10))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], 0x4);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[3] = bus_read32(0x08000C);
    g_m68k.a[3] = bus_read32(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    func_table_call(0x012270);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[1] + 0x14))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_AND16(g_m68k.d[0], 0x1);
    func_table_call(0x012286);
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[1] + 0x16)); bus_write16(g_m68k.a[1] + 0xc, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[1] + 0x1a))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_SUB16(g_m68k.d[0], bus_read16(g_m68k.a[1] + 0x24));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[1] + 0xe, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (uint32_t)(int32_t)(int8_t)(0x10); M68K_TST32(g_m68k.d[0]);
    g_m68k.d[2] = (uint32_t)(int32_t)(int8_t)(0x18); M68K_TST32(g_m68k.d[2]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x4000)); M68K_TST16((uint16_t)g_m68k.d[1]);
    { func_table_call(0x0141AA); return; }
    /* WARNING: function did not end with RTS */
}

/* $016E40-$016E50  (4 instructions, 16 bytes) */
void jt_016E40(void) {
    bus_write16(g_m68k.a[1] + 0x12, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    func_table_call(0x012202);
    { uint32_t _mv = (uint32_t)(g_m68k.a[0]); bus_write32(g_m68k.a[1] + 0x14, _mv); M68K_TST32(_mv); }
    return;
}

/* $016E50-$016E62  (5 instructions, 18 bytes) */
void jt_016E50(void) {
    g_m68k.d[0] = bus_read32(g_m68k.a[1] + 0x14); M68K_TST32((uint32_t)g_m68k.d[0]);
    if (M68K_CC_EQ) goto loc_016E60;
    g_m68k.a[0] = g_m68k.d[0];
    func_table_call(0x012252);
loc_016E60:
    return;
}

/* $016E62-$016FDE  (95 instructions, 380 bytes) */
void jt_016E62(void) {
    { uint32_t _ea = (g_m68k.a[1] + 0xe); uint16_t _tmp = bus_read16(_ea); M68K_SUB16(_tmp, 0x4); bus_write16(_ea, _tmp); }
    M68K_TST16(bus_read16(g_m68k.a[1] + 0x10));
    if (M68K_CC_NE) goto loc_016F26;
    { uint32_t _ea = (g_m68k.a[1] + 0xc); uint16_t _tmp = bus_read16(_ea); M68K_SUB16(_tmp, 0xc); bus_write16(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[1] + 0x12); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[1] + 0x12); uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, 0xf); bus_write16(_ea, _tmp); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[1] + 0x12))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[3] = 0x02E714;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], 0xb4);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[3] = bus_read32(0x08000C);
    g_m68k.a[3] = bus_read32(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    g_m68k.a[0] = bus_read32(g_m68k.a[1] + 0x8);
    func_table_call(0x012270);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[1] + 0x12))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[3] = 0x02E734;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x10)); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[2], g_m68k.d[2]);
    M68K_ADD16(g_m68k.d[2], 0x1c);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    func_table_call(0x0141AA);
    M68K_TST32(bus_read32(g_m68k.a[1] + 0x14));
    if (M68K_CC_EQ) goto loc_016F24;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[1] + 0x12))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[3] = 0x02E714;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], 0xb5);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[3] = bus_read32(0x08000C);
    g_m68k.a[3] = bus_read32(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    g_m68k.a[0] = bus_read32(g_m68k.a[1] + 0x14);
    func_table_call(0x012270);
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[1] + 0x8)); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[1] + 0x14)); bus_write32(g_m68k.a[1] + 0x8, _mv); M68K_TST32(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x10)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x8)); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0xfff0)); M68K_TST16((uint16_t)g_m68k.d[1]);
    func_table_call(0x0141AA);
    { uint32_t _mv = (uint32_t)(_postinc32(7)); bus_write32(g_m68k.a[1] + 0x8, _mv); M68K_TST32(_mv); }
loc_016F24:
    return;
loc_016F26:
    { uint32_t _ea = (g_m68k.a[1] + 0xc); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0xc); bus_write16(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[1] + 0x12); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[1] + 0x12); uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, 0xf); bus_write16(_ea, _tmp); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[1] + 0x12))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[3] = 0x02E754;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], 0xba);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[3] = bus_read32(0x08000C);
    g_m68k.a[3] = bus_read32(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    g_m68k.a[0] = bus_read32(g_m68k.a[1] + 0x8);
    func_table_call(0x012270);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[1] + 0x12))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[3] = 0x02E774;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x10)); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[2], g_m68k.d[2]);
    M68K_ADD16(g_m68k.d[2], 0x1c);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    func_table_call(0x0141AA);
    M68K_TST32(bus_read32(g_m68k.a[1] + 0x14));
    if (M68K_CC_EQ) goto loc_016FDC;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[1] + 0x12))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[3] = 0x02E754;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], 0xbb);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[3] = bus_read32(0x08000C);
    g_m68k.a[3] = bus_read32(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    g_m68k.a[0] = bus_read32(g_m68k.a[1] + 0x14);
    func_table_call(0x012270);
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[1] + 0x8)); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[1] + 0x14)); bus_write32(g_m68k.a[1] + 0x8, _mv); M68K_TST32(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x10)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x8)); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0xfff0)); M68K_TST16((uint16_t)g_m68k.d[1]);
    func_table_call(0x0141AA);
    { uint32_t _mv = (uint32_t)(_postinc32(7)); bus_write32(g_m68k.a[1] + 0x8, _mv); M68K_TST32(_mv); }
loc_016FDC:
    return;
}

/* $016FDE-$016FEA  (3 instructions, 12 bytes) */
void jt_016FDE(void) {
    M68K_OR8(g_m68k.d[1], 0xea);
    M68K_OR8(g_m68k.d[1], 0x2a);
    M68K_OR8(g_m68k.d[1], 0x2c);
    /* WARNING: function did not end with RTS */
}

/* $016FEA-$016FFE  (5 instructions, 20 bytes) */
void jt_016FEA(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x8)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x28)); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[3]);
    { func_table_call(0x016B04); return; }
    /* WARNING: function did not end with RTS */
}

/* $016FFE-$01700A  (3 instructions, 12 bytes) */
void jt_016FFE(void) {
    M68K_OR8(g_m68k.d[1], 0xa);
    M68K_OR8(g_m68k.d[1], 0x2a);
    M68K_OR8(g_m68k.d[1], 0x2c);
    /* WARNING: function did not end with RTS */
}

/* $01700A-$01701E  (5 instructions, 20 bytes) */
void jt_01700A(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x8)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x28)); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0x2)); M68K_TST16((uint16_t)g_m68k.d[3]);
    { func_table_call(0x016B04); return; }
    /* WARNING: function did not end with RTS */
}

/* $01701E-$01702A  (3 instructions, 12 bytes) */
void jt_01701E(void) {
    M68K_OR8(g_m68k.d[1], 0x2a);
    M68K_OR8(g_m68k.d[1], 0x2a);
    M68K_OR8(g_m68k.d[1], 0x2c);
    /* WARNING: function did not end with RTS */
}

/* $01702A-$01703E  (5 instructions, 20 bytes) */
void jt_01702A(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x8)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x28)); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0x3)); M68K_TST16((uint16_t)g_m68k.d[3]);
    { func_table_call(0x016B04); return; }
    /* WARNING: function did not end with RTS */
}

/* $01703E-$017042  (1 instructions, 4 bytes) */
void jt_01703E(void) {
    M68K_OR8(g_m68k.d[1], 0x4a);
    /* WARNING: function did not end with RTS */
}

/* $017040-$01704A  (3 instructions, 10 bytes) */
void jt_017040(void) {
    g_m68k.d[0] = (uint32_t)(int32_t)(int8_t)(0x4a); M68K_TST32(g_m68k.d[0]);
    M68K_OR8(g_m68k.d[1], 0x2a);
    M68K_OR8(g_m68k.d[1], 0x2c);
    /* WARNING: function did not end with RTS */
}

/* $01704A-$01705E  (5 instructions, 20 bytes) */
void jt_01704A(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x8)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x28)); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0x4)); M68K_TST16((uint16_t)g_m68k.d[3]);
    { func_table_call(0x016B04); return; }
    /* WARNING: function did not end with RTS */
}

/* $01705E-$01706A  (3 instructions, 12 bytes) */
void jt_01705E(void) {
    M68K_OR8(g_m68k.d[1], 0x6a);
    M68K_OR8(g_m68k.d[1], 0x2a);
    M68K_OR8(g_m68k.d[1], 0x2c);
    /* WARNING: function did not end with RTS */
}

/* $01706A-$01707E  (5 instructions, 20 bytes) */
void jt_01706A(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x8)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x28)); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0x5)); M68K_TST16((uint16_t)g_m68k.d[3]);
    { func_table_call(0x016B04); return; }
    /* WARNING: function did not end with RTS */
}

/* $01707E-$01708A  (3 instructions, 12 bytes) */
void jt_01707E(void) {
    M68K_OR8(g_m68k.d[1], 0x8a);
    M68K_OR8(g_m68k.d[1], 0x2a);
    M68K_OR8(g_m68k.d[1], 0x2c);
    /* WARNING: function did not end with RTS */
}

/* $01708A-$01709E  (5 instructions, 20 bytes) */
void jt_01708A(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x8)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x28)); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0x6)); M68K_TST16((uint16_t)g_m68k.d[3]);
    { func_table_call(0x016B04); return; }
    /* WARNING: function did not end with RTS */
}

/* $01709E-$0170AA  (3 instructions, 12 bytes) */
void jt_01709E(void) {
    M68K_OR8(g_m68k.d[1], 0xaa);
    M68K_OR8(g_m68k.d[1], 0x2a);
    M68K_OR8(g_m68k.d[1], 0x2c);
    /* WARNING: function did not end with RTS */
}

/* $0170AA-$0170BE  (5 instructions, 20 bytes) */
void jt_0170AA(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x8)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x28)); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0x7)); M68K_TST16((uint16_t)g_m68k.d[3]);
    { func_table_call(0x016B04); return; }
    /* WARNING: function did not end with RTS */
}

/* $0170BE-$0170CA  (3 instructions, 12 bytes) */
void jt_0170BE(void) {
    M68K_OR8(g_m68k.d[1], 0xca);
    M68K_OR8(g_m68k.d[1], 0x2a);
    M68K_OR8(g_m68k.d[1], 0x2c);
    /* WARNING: function did not end with RTS */
}

/* $0170CA-$0170DE  (5 instructions, 20 bytes) */
void jt_0170CA(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x8)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x28)); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0x8)); M68K_TST16((uint16_t)g_m68k.d[3]);
    { func_table_call(0x016B04); return; }
    /* WARNING: function did not end with RTS */
}

/* $0170DE-$0170EA  (3 instructions, 12 bytes) */
void jt_0170DE(void) {
    M68K_OR8(g_m68k.d[1], 0xea);
    M68K_OR8(g_m68k.d[1], 0x2a);
    M68K_OR8(g_m68k.d[1], 0x2c);
    /* WARNING: function did not end with RTS */
}

/* $0170EA-$0170FE  (5 instructions, 20 bytes) */
void jt_0170EA(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x8)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x28)); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0x9)); M68K_TST16((uint16_t)g_m68k.d[3]);
    { func_table_call(0x016B04); return; }
    /* WARNING: function did not end with RTS */
}

/* $0170FE-$01710A  (3 instructions, 12 bytes) */
void jt_0170FE(void) {
    M68K_OR8(g_m68k.d[1], 0xa);
    M68K_OR8(g_m68k.d[1], 0x2a);
    M68K_OR8(g_m68k.d[1], 0x2c);
    /* WARNING: function did not end with RTS */
}

/* $01710A-$01711E  (5 instructions, 20 bytes) */
void jt_01710A(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x8)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x28)); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0xa)); M68K_TST16((uint16_t)g_m68k.d[3]);
    { func_table_call(0x016B04); return; }
    /* WARNING: function did not end with RTS */
}

/* $01711E-$01712A  (3 instructions, 12 bytes) */
void jt_01711E(void) {
    M68K_OR8(g_m68k.d[1], 0x2a);
    M68K_OR8(g_m68k.d[1], 0x2a);
    M68K_OR8(g_m68k.d[1], 0x2c);
    /* WARNING: function did not end with RTS */
}

/* $01712A-$01713E  (5 instructions, 20 bytes) */
void jt_01712A(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x8)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x28)); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0xb)); M68K_TST16((uint16_t)g_m68k.d[3]);
    { func_table_call(0x016B04); return; }
    /* WARNING: function did not end with RTS */
}

/* $01713E-$01714A  (3 instructions, 12 bytes) */
void jt_01713E(void) {
    M68K_OR8(g_m68k.d[1], 0x4a);
    M68K_OR8(g_m68k.d[1], 0x2a);
    M68K_OR8(g_m68k.d[1], 0x2c);
    /* WARNING: function did not end with RTS */
}

/* $01714A-$01715E  (5 instructions, 20 bytes) */
void jt_01714A(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x8)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x28)); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0xc)); M68K_TST16((uint16_t)g_m68k.d[3]);
    { func_table_call(0x016B04); return; }
    /* WARNING: function did not end with RTS */
}

/* $01715E-$01716A  (3 instructions, 12 bytes) */
void jt_01715E(void) {
    M68K_OR8(g_m68k.d[1], 0x6a);
    M68K_OR8(g_m68k.d[1], 0x2a);
    M68K_OR8(g_m68k.d[1], 0x2c);
    /* WARNING: function did not end with RTS */
}

/* $01716A-$01717E  (5 instructions, 20 bytes) */
void jt_01716A(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x8)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x28)); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0xd)); M68K_TST16((uint16_t)g_m68k.d[3]);
    { func_table_call(0x016B04); return; }
    /* WARNING: function did not end with RTS */
}

/* $01717E-$01718A  (3 instructions, 12 bytes) */
void jt_01717E(void) {
    M68K_OR8(g_m68k.d[1], 0x8a);
    M68K_OR8(g_m68k.d[1], 0x2a);
    M68K_OR8(g_m68k.d[1], 0x2c);
    /* WARNING: function did not end with RTS */
}

/* $01718A-$01719E  (5 instructions, 20 bytes) */
void jt_01718A(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x8)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x28)); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0xe)); M68K_TST16((uint16_t)g_m68k.d[3]);
    { func_table_call(0x016B04); return; }
    /* WARNING: function did not end with RTS */
}

/* $01719E-$0171AA  (3 instructions, 12 bytes) */
void jt_01719E(void) {
    M68K_OR8(g_m68k.d[1], 0xaa);
    M68K_OR8(g_m68k.d[1], 0x2a);
    M68K_OR8(g_m68k.d[1], 0x2c);
    /* WARNING: function did not end with RTS */
}

/* $0171AA-$0171BE  (5 instructions, 20 bytes) */
void jt_0171AA(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x8)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x28)); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0xf)); M68K_TST16((uint16_t)g_m68k.d[3]);
    { func_table_call(0x016B04); return; }
    /* WARNING: function did not end with RTS */
}

/* $0171BE-$0171CA  (3 instructions, 12 bytes) */
void jt_0171BE(void) {
    M68K_OR8(g_m68k.d[1], 0xca);
    M68K_OR8(g_m68k.d[1], 0x2a);
    M68K_OR8(g_m68k.d[1], 0x2c);
    /* WARNING: function did not end with RTS */
}

/* $0171CA-$0171DE  (5 instructions, 20 bytes) */
void jt_0171CA(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x8)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x28)); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0x10)); M68K_TST16((uint16_t)g_m68k.d[3]);
    { func_table_call(0x016B04); return; }
    /* WARNING: function did not end with RTS */
}

/* $0171DE-$0171EA  (3 instructions, 12 bytes) */
void jt_0171DE(void) {
    M68K_OR8(g_m68k.d[1], 0xea);
    M68K_OR8(g_m68k.d[1], 0x2a);
    M68K_OR8(g_m68k.d[1], 0x2c);
    /* WARNING: function did not end with RTS */
}

/* $0171EA-$0171FE  (5 instructions, 20 bytes) */
void jt_0171EA(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x8)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x28)); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0x11)); M68K_TST16((uint16_t)g_m68k.d[3]);
    { func_table_call(0x016B04); return; }
    /* WARNING: function did not end with RTS */
}

/* $0171FE-$01720A  (3 instructions, 12 bytes) */
void jt_0171FE(void) {
    M68K_OR8(g_m68k.d[1], 0xa);
    M68K_OR8(g_m68k.d[1], 0x2a);
    M68K_OR8(g_m68k.d[1], 0x2c);
    /* WARNING: function did not end with RTS */
}

/* $01720A-$01721E  (5 instructions, 20 bytes) */
void jt_01720A(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x8)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x28)); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0x12)); M68K_TST16((uint16_t)g_m68k.d[3]);
    { func_table_call(0x016B04); return; }
    /* WARNING: function did not end with RTS */
}

/* $01721E-$01722A  (3 instructions, 12 bytes) */
void jt_01721E(void) {
    M68K_OR8(g_m68k.d[1], 0x2a);
    M68K_OR8(g_m68k.d[1], 0x2a);
    M68K_OR8(g_m68k.d[1], 0x2c);
    /* WARNING: function did not end with RTS */
}

/* $01722A-$01723E  (5 instructions, 20 bytes) */
void jt_01722A(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x8)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x28)); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0x13)); M68K_TST16((uint16_t)g_m68k.d[3]);
    { func_table_call(0x016B04); return; }
    /* WARNING: function did not end with RTS */
}

/* $01723E-$01724A  (3 instructions, 12 bytes) */
void jt_01723E(void) {
    M68K_OR8(g_m68k.d[1], 0x4a);
    M68K_OR8(g_m68k.d[1], 0x2a);
    M68K_OR8(g_m68k.d[1], 0x2c);
    /* WARNING: function did not end with RTS */
}

/* $01724A-$01725E  (5 instructions, 20 bytes) */
void jt_01724A(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x18)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x30)); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0x14)); M68K_TST16((uint16_t)g_m68k.d[3]);
    { func_table_call(0x016B04); return; }
    /* WARNING: function did not end with RTS */
}

/* $01725E-$01726A  (3 instructions, 12 bytes) */
void jt_01725E(void) {
    M68K_OR8(g_m68k.d[1], 0x6a);
    M68K_OR8(g_m68k.d[1], 0x2a);
    M68K_OR8(g_m68k.d[1], 0x2c);
    /* WARNING: function did not end with RTS */
}

/* $01726A-$01727E  (5 instructions, 20 bytes) */
void jt_01726A(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x18)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x30)); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0x15)); M68K_TST16((uint16_t)g_m68k.d[3]);
    { func_table_call(0x016B04); return; }
    /* WARNING: function did not end with RTS */
}

/* $01727E-$01728A  (3 instructions, 12 bytes) */
void jt_01727E(void) {
    M68K_OR8(g_m68k.d[1], 0x8a);
    M68K_OR8(g_m68k.d[1], 0x2a);
    M68K_OR8(g_m68k.d[1], 0x2c);
    /* WARNING: function did not end with RTS */
}

/* $01728A-$01729E  (5 instructions, 20 bytes) */
void jt_01728A(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x18)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x38)); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0x16)); M68K_TST16((uint16_t)g_m68k.d[3]);
    { func_table_call(0x016B04); return; }
    /* WARNING: function did not end with RTS */
}
