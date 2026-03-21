/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $019DF8 - $01BB16 */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

/* $019DF8-$019E04  (3 instructions, 12 bytes) */
void jt_019DF8(void) {
    M68K_OR8(g_m68k.d[1], 0x4);
    M68K_OR8(g_m68k.d[1], 0x2a);
    M68K_OR8(g_m68k.d[1], 0x2c);
    /* WARNING: function did not end with RTS */
}

/* $019E04-$019E18  (5 instructions, 20 bytes) */
void jt_019E04(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x20)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x50)); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x4000)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0x176)); M68K_TST16((uint16_t)g_m68k.d[3]);
    { func_table_call(0x016B04); return; }
    /* WARNING: function did not end with RTS */
}

/* $019E18-$019E24  (3 instructions, 12 bytes) */
void jt_019E18(void) {
    M68K_OR8(g_m68k.d[1], 0x24);
    M68K_OR8(g_m68k.d[1], 0x2a);
    M68K_OR8(g_m68k.d[1], 0x2c);
    /* WARNING: function did not end with RTS */
}

/* $019E24-$019F42  (60 instructions, 286 bytes) */
void jt_019E24(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x18)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x48)); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x4000)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0x177)); M68K_TST16((uint16_t)g_m68k.d[3]);
    { func_table_call(0x016B04); return; }
    g_m68k.a[7] -= 2; bus_write16(g_m68k.a[7], m68k_get_sr());
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[7]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); bus_write16(0x103466, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(3)); bus_write16(0x103468, _mv); M68K_TST16(_mv); }
    { uint32_t _ea = 0x103468; uint16_t _tmp = bus_read16(_ea); M68K_SUB16(_tmp, 0x2); bus_write16(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(0x10346A, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(0x10346C, _mv); M68K_TST16(_mv); }
    g_m68k.a[4] = 0x10346E;
    g_m68k.a[5] = 0x10347E;
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x103468))); M68K_TST16((uint16_t)g_m68k.d[1]);
loc_019E6E:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(_postinc16(3))); M68K_TST16((uint16_t)g_m68k.d[0]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[4], _mv); g_m68k.a[4] += 2; M68K_TST16(_mv); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[3]))); M68K_TST16((uint16_t)g_m68k.d[2]);
    M68K_SUB16(g_m68k.d[0], g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[5], _mv); g_m68k.a[5] += 2; M68K_TST16(_mv); }
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[1]; _cnt--; g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_019E6E; } }
    func_table_call(0x012202);
    { uint32_t _mv = (uint32_t)(g_m68k.a[0]); bus_write32(0x10348E, _mv); M68K_TST32(_mv); }
    if (M68K_CC_NE) goto loc_019E92;
    M68K_TST32(bus_read32(0xA007777));
loc_019E92:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x7001)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x012256);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x118)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x40)); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x01225C);
    func_table_call(0x012202);
    { uint32_t _mv = (uint32_t)(g_m68k.a[0]); bus_write32(0x103492, _mv); M68K_TST32(_mv); }
    if (M68K_CC_NE) goto loc_019EC0;
    M68K_TST32(bus_read32(0xA007777));
loc_019EC0:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x7000)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x012256);
    g_m68k.a[3] = bus_read32(0x080008);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x4c)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.a[3] = bus_read32(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    func_table_call(0x012270);
    func_table_call(0x012202);
    { uint32_t _mv = (uint32_t)(g_m68k.a[0]); bus_write32(0x103496, _mv); M68K_TST32(_mv); }
    if (M68K_CC_NE) goto loc_019EF4;
    M68K_TST32(bus_read32(0xA007777));
loc_019EF4:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x7002)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x012256);
    g_m68k.a[3] = bus_read32(0x080008);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x50)); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_CMP16(bus_read16(0x103466), 0x0);
    if (M68K_CC_EQ) goto loc_019F28;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x54)); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_CMP16(bus_read16(0x103466), 0x1);
    if (M68K_CC_EQ) goto loc_019F28;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x58)); M68K_TST16((uint16_t)g_m68k.d[0]);
loc_019F28:
    g_m68k.a[3] = bus_read32(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    func_table_call(0x012270);
    { uint16_t _mv = (uint16_t)(0xa); bus_write16(0x10349A, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[7] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    m68k_set_sr(_postinc16(7));
    return;
}

/* $019F42-$019F74  (11 instructions, 50 bytes) */
void sub_019F42(void) {
    g_m68k.a[7] -= 2; bus_write16(g_m68k.a[7], m68k_get_sr());
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[7]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    g_m68k.a[0] = bus_read32(0x103496);
    func_table_call(0x012252);
    g_m68k.a[0] = bus_read32(0x103492);
    func_table_call(0x012252);
    g_m68k.a[0] = bus_read32(0x10348E);
    func_table_call(0x012252);
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[7] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    m68k_set_sr(_postinc16(7));
    return;
}

/* $019F74-$019F82  (3 instructions, 14 bytes) */
void sub_019F74(void) {
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(0x10346A, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(0x10346C, _mv); M68K_TST16(_mv); }
    return;
}

/* $019F82-$01A03C  (44 instructions, 186 bytes) */
void sub_019F82(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    g_m68k.a[0] = bus_read32(0x10348E);
    g_m68k.a[3] = bus_read32(0x080008);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x10346A))); M68K_TST16((uint16_t)g_m68k.d[2]);
    if (M68K_CC_NE) goto loc_019FB2;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x48)); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_TST16(bus_read16(0x103468));
    if (M68K_CC_EQ) goto loc_019FE4;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x34)); M68K_TST16((uint16_t)g_m68k.d[0]);
    goto loc_019FE4;
loc_019FB2:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x40)); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_CMP16(g_m68k.d[2], bus_read16(0x103468));
    if (M68K_CC_NE) goto loc_019FD4;
    M68K_BTST(bus_read8(0x10346B), 0x0);
    if (M68K_CC_NE) goto loc_019FE4;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x44)); M68K_TST16((uint16_t)g_m68k.d[0]);
    if (M68K_CC_NE) goto loc_019FE4;
loc_019FD4:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x38)); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_BTST(g_m68k.d[2], 0x0);
    if (M68K_CC_NE) goto loc_019FE4;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x3c)); M68K_TST16((uint16_t)g_m68k.d[0]);
loc_019FE4:
    g_m68k.a[3] = bus_read32(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    func_table_call(0x012270);
    g_m68k.a[4] = 0x10346E;
    g_m68k.a[5] = 0x10347E;
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x10346A))); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_ADD16(g_m68k.d[1], g_m68k.d[1]);
    g_m68k.d[0] = (uint32_t)(int32_t)(int8_t)(0x1); M68K_TST32(g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x10346C))); M68K_TST16((uint16_t)g_m68k.d[2]);
    M68K_SUB16(g_m68k.d[2], bus_read16(g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.d[1]));
    if (M68K_CC_GT) goto loc_01A030;
    M68K_NEG16(g_m68k.d[2]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x100)); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_CMP16(g_m68k.d[2], bus_read16(g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.d[1]));
    if (M68K_CC_GT) goto loc_01A030;
    M68K_EXT32(g_m68k.d[2]);
    M68K_LSL32(g_m68k.d[2], 0x8);
    M68K_DIVU(g_m68k.d[2], bus_read16(g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.d[1]));
    if (M68K_CC_NE) goto loc_01A02E;
    g_m68k.d[2] = (uint32_t)(int32_t)(int8_t)(0x1); M68K_TST32(g_m68k.d[2]);
loc_01A02E:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[2])); M68K_TST16((uint16_t)g_m68k.d[0]);
loc_01A030:
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x100)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.a[0] = bus_read32(0x103492);
    /* WARNING: function did not end with RTS */
}

/* $01A038-$01A094  (23 instructions, 92 bytes) */
void jt_01A038(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x92); bus_write8(_ea, _tmp); }
    func_table_call(0x012266);
    M68K_SUB16(g_m68k.d[2], 0x1);
    M68K_NOT8(g_m68k.d[2]);
    M68K_LSR16(g_m68k.d[2], 0x2);
    M68K_ADD16(g_m68k.d[2], 0x51);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x118)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x01225C);
    M68K_SUB16(g_m68k.d[2], 0x8);
    g_m68k.a[0] = bus_read32(0x103496);
    func_table_call(0x01225C);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0xfffe)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x10349A))); M68K_TST16((uint16_t)g_m68k.d[2]);
    M68K_ADD16(g_m68k.d[2], 0x1);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(0x10349A, _mv); M68K_TST16(_mv); }
    M68K_AND16(g_m68k.d[2], 0x7f);
    if (M68K_CC_EQ) goto loc_01A088;
    M68K_CMP16(g_m68k.d[2], 0x5);
    if (M68K_CC_EQ) goto loc_01A088;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
loc_01A088:
    func_table_call(0x012280);
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}

/* $01A094-$01A118  (30 instructions, 132 bytes) */
void sub_01A094(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[7]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]);
    g_m68k.a[5] = 0x108000;
    { uint16_t _mv = (uint16_t)(0xffff); g_m68k.a[7] -= 2; bus_write16(g_m68k.a[7], _mv); M68K_TST16(_mv); }
    func_table_call(0x1a860);
    M68K_TST8(bus_read8(0x10FDC6));
    if (M68K_CC_NE) goto loc_01A10C;
    M68K_BTST(bus_read8(0x10FDD1), 0x0);
    if (M68K_CC_EQ) goto loc_01A10C;
    func_table_call(0x1a87e);
    M68K_TST8(bus_read8(0x10FDC6));
    if (M68K_CC_NE) goto loc_01A10C;
    func_table_call(0x0120E0);
    func_table_call(0x0133FA);
    func_table_call(0x000A26);
    func_table_call(0x1a3ae);
    g_m68k.d[5] = (uint32_t)(int32_t)(int8_t)(0x0); M68K_TST32(g_m68k.d[5]);
    func_table_call(0x1a474);
    { uint8_t _mv = (uint8_t)(0x0); bus_write8(g_m68k.a[5] + (-0x4b06), _mv); M68K_TST8(_mv); }
    func_table_call(0x1a5ac);
    func_table_call(0x1a608);
    func_table_call(0x1a620);
    func_table_call(0x1a6a0);
    { uint16_t _mv = (uint16_t)(0xffff); bus_write16(g_m68k.a[5] + (-0x4b0a), _mv); M68K_TST16(_mv); }
    { uint8_t _mv = (uint8_t)(0xff); bus_write8(g_m68k.a[5] + (-0x4b07), _mv); M68K_TST8(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[5] + (-0x4b0e), _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[7], _mv); M68K_TST16(_mv); }
loc_01A10C:
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(_postinc16(7))); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[7] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}

/* $01A118-$01A136  (9 instructions, 30 bytes) */
void sub_01A118(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[7]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]);
    g_m68k.a[5] = 0x108000;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[5] + (-0x4b0e)))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[0] = bus_read32(0x1a136 + (int16_t)(uint16_t)g_m68k.d[0]);
    func_table_call(g_m68k.a[0]);
    g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[7] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}

/* $01A14A-$01A1CA  (28 instructions, 128 bytes) */
void sub_01A14A(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[7]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]);
    g_m68k.a[5] = 0x108000;
    { uint16_t _mv = (uint16_t)(0xffff); g_m68k.a[7] -= 2; bus_write16(g_m68k.a[7], _mv); M68K_TST16(_mv); }
    { uint8_t _mv = (uint8_t)(0xff); bus_write8(g_m68k.a[5] + (-0x4b08), _mv); M68K_TST8(_mv); }
    func_table_call(0x1a860);
    M68K_CMP8(bus_read8(0x10FDC6), 0x80);
    if (M68K_CC_EQ) goto loc_01A1BE;
    M68K_BTST(bus_read8(0x10FDD1), 0x0);
    if (M68K_CC_EQ) goto loc_01A17C;
    { uint8_t _mv = (uint8_t)(0x0); bus_write8(g_m68k.a[5] + (-0x4b08), _mv); M68K_TST8(_mv); }
loc_01A17C:
    func_table_call(0x0120E0);
    func_table_call(0x0133FA);
    func_table_call(0x000A26);
    func_table_call(0x1a3ae);
    g_m68k.d[5] = (uint32_t)(int32_t)(int8_t)(0x1); M68K_TST32(g_m68k.d[5]);
    func_table_call(0x1a474);
    { uint8_t _mv = (uint8_t)(0xff); bus_write8(g_m68k.a[5] + (-0x4b06), _mv); M68K_TST8(_mv); }
    func_table_call(0x1a5ac);
    func_table_call(0x1a608);
    func_table_call(0x1a620);
    func_table_call(0x1a6a0);
    { uint16_t _mv = (uint16_t)(0xffff); bus_write16(g_m68k.a[5] + (-0x4b0a), _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[5] + (-0x4b0e), _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[7], _mv); M68K_TST16(_mv); }
loc_01A1BE:
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(_postinc16(7))); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[7] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}

/* $01A1CA-$01A1E8  (9 instructions, 30 bytes) */
void sub_01A1CA(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[7]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]);
    g_m68k.a[5] = 0x108000;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[5] + (-0x4b0e)))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[0] = bus_read32(0x1a1e8 + (int16_t)(uint16_t)g_m68k.d[0]);
    func_table_call(g_m68k.a[0]);
    g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[7] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}

/* $01A1FC-$01A236  (15 instructions, 58 bytes) */
void jt_01A1FC(void) {
    { uint32_t _ea = (g_m68k.a[5] + (-0x4b0c)); uint16_t _tmp = bus_read16(_ea); M68K_SUB16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    func_table_call(0x1a620);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x1a6c6);
    func_table_call(0x1a5ac);
    func_table_call(0x01229E);
    M68K_CMP16(g_m68k.d[0], 0x1);
    if (M68K_CC_EQ) goto loc_01A230;
    M68K_CMP16(g_m68k.d[1], 0x0);
    if (M68K_CC_NE) goto loc_01A22A;
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(g_m68k.a[5] + (-0x4b0e), _mv); M68K_TST16(_mv); }
    goto loc_01A230;
loc_01A22A:
    { uint16_t _mv = (uint16_t)(0x2); bus_write16(g_m68k.a[5] + (-0x4b0e), _mv); M68K_TST16(_mv); }
loc_01A230:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $01A236-$01A274  (15 instructions, 62 bytes) */
void jt_01A236(void) {
    func_table_call(0x1a87e);
    M68K_TST8(bus_read8(0x10FDC6));
    if (M68K_CC_NE) goto loc_01A256;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[1]);
    func_table_call(0x1a7aa);
    { uint8_t _mv = (uint8_t)(0x0); bus_write8(g_m68k.a[5] + (-0x4b07), _mv); M68K_TST8(_mv); }
    goto loc_01A268;
loc_01A256:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0xffff)); M68K_TST16((uint16_t)g_m68k.d[1]);
    func_table_call(0x1a7aa);
    { uint8_t _mv = (uint8_t)(0xff); bus_write8(g_m68k.a[5] + (-0x4b07), _mv); M68K_TST8(_mv); }
loc_01A268:
    { uint16_t _mv = (uint16_t)(0x2); bus_write16(g_m68k.a[5] + (-0x4b0e), _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $01A274-$01A294  (7 instructions, 32 bytes) */
void jt_01A274(void) {
    M68K_CMP16(bus_read16(g_m68k.a[5] + (-0x7bd8)), 0x2);
    if (M68K_CC_NE) goto loc_01A284;
    { uint16_t _mv = (uint16_t)(0x64); bus_write16(g_m68k.a[5] + (-0x4b0c), _mv); M68K_TST16(_mv); }
    goto loc_01A28A;
loc_01A284:
    { uint16_t _mv = (uint16_t)(0x78); bus_write16(g_m68k.a[5] + (-0x4b0c), _mv); M68K_TST16(_mv); }
loc_01A28A:
    { uint16_t _mv = (uint16_t)(0x3); bus_write16(g_m68k.a[5] + (-0x4b0e), _mv); M68K_TST16(_mv); }
    { func_table_call(0x1a294); return; }
    /* WARNING: function did not end with RTS */
}

/* $01A294-$01A2B6  (8 instructions, 34 bytes) */
void jt_01A294(void) {
    func_table_call(0x1a834);
    func_table_call(0x01229E);
    { uint32_t _ea = (g_m68k.a[5] + (-0x4b0c)); uint16_t _tmp = bus_read16(_ea); M68K_SUB16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    M68K_CMP16(bus_read16(g_m68k.a[5] + (-0x4b0c)), 0x0);
    if (M68K_CC_GT) goto loc_01A2B0;
    { uint16_t _mv = (uint16_t)(0x4); bus_write16(g_m68k.a[5] + (-0x4b0e), _mv); M68K_TST16(_mv); }
loc_01A2B0:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $01A2B6-$01A2E0  (10 instructions, 42 bytes) */
void jt_01A2B6(void) {
    func_table_call(0x0120E0);
    func_table_call(0x0133FA);
    func_table_call(0x000A26);
    M68K_CMP8(bus_read8(g_m68k.a[5] + (-0x4b07)), 0x0);
    if (M68K_CC_NE) goto loc_01A2D6;
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[1]);
    goto loc_01A2DA;
loc_01A2D6:
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0xffff)); M68K_TST16((uint16_t)g_m68k.d[1]);
loc_01A2DA:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $01A2E0-$01A31A  (15 instructions, 58 bytes) */
void jt_01A2E0(void) {
    { uint32_t _ea = (g_m68k.a[5] + (-0x4b0c)); uint16_t _tmp = bus_read16(_ea); M68K_SUB16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    func_table_call(0x1a620);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x1a6c6);
    func_table_call(0x1a5ac);
    func_table_call(0x01229E);
    M68K_CMP16(g_m68k.d[0], 0x1);
    if (M68K_CC_EQ) goto loc_01A314;
    M68K_CMP16(g_m68k.d[1], 0x0);
    if (M68K_CC_NE) goto loc_01A30E;
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(g_m68k.a[5] + (-0x4b0e), _mv); M68K_TST16(_mv); }
    goto loc_01A314;
loc_01A30E:
    { uint16_t _mv = (uint16_t)(0x2); bus_write16(g_m68k.a[5] + (-0x4b0e), _mv); M68K_TST16(_mv); }
loc_01A314:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $01A31A-$01A354  (15 instructions, 58 bytes) */
void jt_01A31A(void) {
    func_table_call(0x1a762);
    func_table_call(0x1a8b6);
    func_table_call(0x1a914);
    M68K_TST8(bus_read8(0x10FDC6));
    if (M68K_CC_NE) goto loc_01A33C;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[1]);
    func_table_call(0x1a7aa);
    goto loc_01A348;
loc_01A33C:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0xffff)); M68K_TST16((uint16_t)g_m68k.d[1]);
    func_table_call(0x1a7aa);
loc_01A348:
    { uint16_t _mv = (uint16_t)(0x2); bus_write16(g_m68k.a[5] + (-0x4b0e), _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $01A354-$01A374  (7 instructions, 32 bytes) */
void jt_01A354(void) {
    M68K_CMP16(bus_read16(g_m68k.a[5] + (-0x7bd8)), 0x2);
    if (M68K_CC_NE) goto loc_01A364;
    { uint16_t _mv = (uint16_t)(0x64); bus_write16(g_m68k.a[5] + (-0x4b0c), _mv); M68K_TST16(_mv); }
    goto loc_01A36A;
loc_01A364:
    { uint16_t _mv = (uint16_t)(0x78); bus_write16(g_m68k.a[5] + (-0x4b0c), _mv); M68K_TST16(_mv); }
loc_01A36A:
    { uint16_t _mv = (uint16_t)(0x3); bus_write16(g_m68k.a[5] + (-0x4b0e), _mv); M68K_TST16(_mv); }
    { func_table_call(0x1a374); return; }
    /* WARNING: function did not end with RTS */
}

/* $01A374-$01A396  (8 instructions, 34 bytes) */
void jt_01A374(void) {
    func_table_call(0x1a834);
    func_table_call(0x01229E);
    { uint32_t _ea = (g_m68k.a[5] + (-0x4b0c)); uint16_t _tmp = bus_read16(_ea); M68K_SUB16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    M68K_CMP16(bus_read16(g_m68k.a[5] + (-0x4b0c)), 0x0);
    if (M68K_CC_GT) goto loc_01A390;
    { uint16_t _mv = (uint16_t)(0x4); bus_write16(g_m68k.a[5] + (-0x4b0e), _mv); M68K_TST16(_mv); }
loc_01A390:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $01A396-$01A3AE  (5 instructions, 24 bytes) */
void jt_01A396(void) {
    func_table_call(0x0120E0);
    func_table_call(0x0133FA);
    func_table_call(0x000A26);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $01A840-$01A860  (9 instructions, 32 bytes) */
void jt_01A840(void) {
    g_m68k.d[0] = (uint32_t)(int32_t)(int8_t)(0x1); M68K_TST32(g_m68k.d[0]);
    goto loc_01A846;
    g_m68k.d[0] = (uint32_t)(int32_t)(int8_t)(0x0); M68K_TST32(g_m68k.d[0]);
loc_01A846:
    g_m68k.a[0] = bus_read32(g_m68k.a[5] + (-0x4b22));
    func_table_call(0x012286);
    g_m68k.a[0] = bus_read32(g_m68k.a[5] + (-0x4b1e));
    func_table_call(0x012286);
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}

/* $01ACD6-$01AD06  (23 instructions, 48 bytes) */
void jt_01ACD6(void) {
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_SUB8(g_m68k.d[4], 0x8);
    /* WARNING: function did not end with RTS */
}

/* $01AD62-$01ADB0  (34 instructions, 78 bytes) */
void jt_01AD62(void) {
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], g_m68k.d[5]);
    M68K_BTST(g_m68k.d[5], g_m68k.d[2]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_BTST(g_m68k.d[1], g_m68k.d[0]);
    /* TODO $01AD90: movep.w $909(a1), d2  [05 09 09 09] */
    /* TODO $01AD94: movep.w $d0d(a1), d4  [09 09 0D 0D] */
    M68K_BCLR(g_m68k.d[0], g_m68k.d[6]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_BTST(g_m68k.d[1], g_m68k.d[0]);
    /* TODO $01AD9E: movep.w $909(a1), d0  [01 09 09 09] */
    /* TODO $01ADA2: movep.w $d11(a1), d4  [09 09 0D 11] */
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); bus_write8(g_m68k.a[0] + (-0x80) + (int16_t)(uint16_t)g_m68k.a[0], _mv); M68K_TST8(_mv); }
    M68K_BTST(g_m68k.d[1], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(_postinc8(1)); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(1)); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $01ADEE-$01AE1E  (22 instructions, 48 bytes) */
void jt_01ADEE(void) {
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], g_m68k.d[6]);
    M68K_ADD8(g_m68k.d[6], 0x80);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_AND8(g_m68k.d[2], 0x6);
    /* WARNING: function did not end with RTS */
}

/* $01AE7A-$01AF06  (64 instructions, 140 bytes) */
void jt_01AE7A(void) {
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_BTST(g_m68k.d[7], g_m68k.d[3]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], g_m68k.d[3]);
    M68K_BTST(g_m68k.d[7], g_m68k.d[1]);
    /* TODO $01AE9C: movep.w -$7f80(a3), d3  [07 0B 80 80] */
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_BTST(g_m68k.d[3], g_m68k.d[1]);
    M68K_BTST(g_m68k.d[3], g_m68k.d[1]);
    /* TODO $01AEAA: movep.w $b0b(a3), d5  [0B 0B 0B 0B] */
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_BTST(g_m68k.d[3], g_m68k.d[1]);
    { uint8_t _mv = (uint8_t)(g_m68k.d[3]); g_m68k.a[7] -= 1; bus_write8(g_m68k.a[7], _mv); M68K_TST8(_mv); }
    /* TODO $01AEB8: movep.w $b0b(a3), d5  [0B 0B 0B 0B] */
    M68K_BCLR(g_m68k.d[0], g_m68k.d[7]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(_postinc8(7)); g_m68k.a[7] -= 1; bus_write8(g_m68k.a[7], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(3)); g_m68k.a[7] -= 1; bus_write8(g_m68k.a[7], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(3)); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    /* TODO $01AEC8: movep.w $f0f(a3), d5  [0B 0B 0F 0F] */
    M68K_BCLR(g_m68k.d[0], g_m68k.d[7]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(_postinc8(3)); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(3)); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[3])); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[3])); g_m68k.a[1] -= 1; bus_write8(g_m68k.a[1], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); bus_write8(g_m68k.a[1] + (-0x80) + (int16_t)(uint16_t)g_m68k.a[0], _mv); M68K_TST8(_mv); }
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(_postinc8(3)); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[7])); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[3])); g_m68k.a[1] -= 1; bus_write8(g_m68k.a[1], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); bus_write8(g_m68k.a[1] + (-0x80) + (int16_t)(uint16_t)g_m68k.a[0], _mv); M68K_TST8(_mv); }
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[7])); g_m68k.a[3] -= 1; bus_write8(g_m68k.a[3], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[3])); g_m68k.a[3] -= 1; bus_write8(g_m68k.a[3], _mv); M68K_TST8(_mv); }
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $01AF06-$01AF18  (9 instructions, 18 bytes) */
void jt_01AF06(void) {
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $01AF92-$01AFD0  (28 instructions, 62 bytes) */
void jt_01AF92(void) {
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    /* TODO $01AFA4: movep.w $980(a1), d2  [05 09 09 80] */
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], g_m68k.d[5]);
    M68K_BTST(g_m68k.d[5], g_m68k.d[2]);
    /* TODO $01AFB4: movep.w -$7f80(a1), d4  [09 09 80 80] */
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], g_m68k.d[5]);
    M68K_BTST(g_m68k.d[5], g_m68k.d[2]);
    /* TODO $01AFC2: movep.w $d80(a5), d2  [05 0D 0D 80] */
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], g_m68k.d[1]);
    M68K_BTST(g_m68k.d[5], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $01B01E-$01B050  (20 instructions, 50 bytes) */
void jt_01B01E(void) {
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD8(g_m68k.d[6], 0xa);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], g_m68k.d[6]);
    M68K_ADD8(g_m68k.d[6], 0xa);
    M68K_EOR32(g_m68k.d[0], 0x80808080);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], g_m68k.d[2]);
    M68K_ADD8(g_m68k.d[6], 0xe);
    /* WARNING: function did not end with RTS */
}

/* $01B0AA-$01B0E8  (30 instructions, 62 bytes) */
void jt_01B0AA(void) {
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_BTST(g_m68k.d[7], g_m68k.d[1]);
    M68K_BTST(g_m68k.d[7], g_m68k.d[3]);
    M68K_BCLR(g_m68k.d[0], g_m68k.d[5]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_BTST(g_m68k.d[7], g_m68k.d[1]);
    M68K_BTST(g_m68k.d[7], g_m68k.d[3]);
    M68K_BCLR(g_m68k.d[0], g_m68k.d[5]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_BTST(g_m68k.d[7], g_m68k.d[1]);
    /* TODO $01B0DA: movep.w $b0f(a3), d3  [07 0B 0B 0F] */
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(_postinc8(7)); g_m68k.a[7] -= 1; bus_write8(g_m68k.a[7], _mv); M68K_TST8(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $01B136-$01B13A  (2 instructions, 4 bytes) */
void jt_01B136(void) {
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $01B1C2-$01B24E  (63 instructions, 140 bytes) */
void jt_01B1C2(void) {
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], g_m68k.d[5]);
    /* TODO $01B1D6: movep.w $90d(a1), d4  [09 09 09 0D] */
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], g_m68k.d[5]);
    /* TODO $01B1E4: movep.w $90d(a1), d4  [09 09 09 0D] */
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_BTST(g_m68k.d[5], g_m68k.d[0]);
    /* TODO $01B1F2: movep.w $90d(a1), d2  [05 09 09 0D] */
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_BTST(g_m68k.d[1], g_m68k.d[0]);
    M68K_BTST(bus_read8(g_m68k.a[1]), g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[1])); g_m68k.a[0] -= 1; bus_write8(g_m68k.a[0], _mv); M68K_TST8(_mv); }
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_BTST(g_m68k.d[1], g_m68k.d[0]);
    M68K_BTST(bus_read8(g_m68k.a[1]), g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[1])); g_m68k.a[0] -= 1; bus_write8(g_m68k.a[0], _mv); M68K_TST8(_mv); }
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], g_m68k.d[1]);
    M68K_BTST(g_m68k.d[1], g_m68k.d[0]);
    M68K_BTST(bus_read8(g_m68k.a[1]), g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); bus_write8(g_m68k.a[0] + (-0x80) + (int16_t)(uint16_t)g_m68k.a[0], _mv); M68K_TST8(_mv); }
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], _postinc8(5));
    { uint8_t _mv = (uint8_t)(_postinc8(1)); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[5])); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); bus_write8(g_m68k.a[2] + (-0x80) + (int16_t)(uint16_t)g_m68k.a[0], _mv); M68K_TST8(_mv); }
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], _postinc8(5));
    { uint8_t _mv = (uint8_t)(_postinc8(1)); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(1)); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); bus_write8(g_m68k.a[2] + (-0x80) + (int16_t)(uint16_t)g_m68k.a[0], _mv); M68K_TST8(_mv); }
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], _postinc8(5));
    { uint8_t _mv = (uint8_t)(_postinc8(1)); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(1)); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); bus_write8(g_m68k.a[2] + (-0x80) + (int16_t)(uint16_t)g_m68k.a[0], _mv); M68K_TST8(_mv); }
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $01B24E-$01B270  (16 instructions, 34 bytes) */
void jt_01B24E(void) {
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD8(g_m68k.d[6], 0xa);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], g_m68k.d[6]);
    /* WARNING: function did not end with RTS */
}

/* $01B2DA-$01B366  (63 instructions, 140 bytes) */
void jt_01B2DA(void) {
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], g_m68k.d[7]);
    /* TODO $01B2F0: movep.w -$7f80(a3), d3  [07 0B 80 80] */
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_BTST(g_m68k.d[7], g_m68k.d[3]);
    /* TODO $01B2FE: movep.w $b80(a3), d5  [0B 0B 0B 80] */
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], g_m68k.d[3]);
    /* TODO $01B30A: movep.w $b0b(a3), d1  [03 0B 0B 0B] */
    M68K_BCLR(g_m68k.d[0], g_m68k.d[5]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_BTST(g_m68k.d[3], g_m68k.d[1]);
    M68K_BTST(bus_read8(g_m68k.a[3]), g_m68k.d[1]);
    /* TODO $01B31A: movep.w $f80(a7), d5  [0B 0F 0F 80] */
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], _postinc8(7));
    M68K_BTST(g_m68k.d[3], g_m68k.d[1]);
    M68K_BTST(bus_read8(g_m68k.a[3]), g_m68k.d[1]);
    /* TODO $01B328: movep.w $f80(a7), d7  [0F 0F 0F 80] */
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(_postinc8(7)); g_m68k.a[7] -= 1; bus_write8(g_m68k.a[7], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[3]); g_m68k.a[7] -= 1; bus_write8(g_m68k.a[7], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[3])); g_m68k.a[1] -= 1; bus_write8(g_m68k.a[1], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[3])); g_m68k.a[1] -= 1; bus_write8(g_m68k.a[1], _mv); M68K_TST8(_mv); }
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(_postinc8(3)); g_m68k.a[7] -= 1; bus_write8(g_m68k.a[7], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(3)); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[3])); g_m68k.a[3] -= 1; bus_write8(g_m68k.a[3], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); bus_write8(g_m68k.a[1] + (-0x80) + (int16_t)(uint16_t)g_m68k.a[0], _mv); M68K_TST8(_mv); }
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(_postinc8(3)); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(3)); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[3])); g_m68k.a[3] -= 1; bus_write8(g_m68k.a[3], _mv); M68K_TST8(_mv); }
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[7])); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); bus_write8(g_m68k.a[3] + (-0x80) + (int16_t)(uint16_t)g_m68k.a[0], _mv); M68K_TST8(_mv); }
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $01B366-$01B37C  (11 instructions, 22 bytes) */
void jt_01B366(void) {
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $01B3F2-$01B47E  (66 instructions, 140 bytes) */
void jt_01B3F2(void) {
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    /* TODO $01B408: movep.w -$7f80(a1), d4  [09 09 80 80] */
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    /* TODO $01B414: movep.w $90d(a1), d2  [05 09 09 0D] */
    M68K_BCLR(g_m68k.d[0], g_m68k.d[6]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_BTST(g_m68k.d[5], g_m68k.d[2]);
    M68K_BTST(g_m68k.d[5], g_m68k.d[2]);
    /* TODO $01B424: movep.w $d0d(a5), d6  [0D 0D 0D 0D] */
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], g_m68k.d[1]);
    M68K_BTST(g_m68k.d[5], g_m68k.d[2]);
    M68K_BTST(g_m68k.d[5], g_m68k.d[2]);
    M68K_BTST(bus_read8(g_m68k.a[1]), g_m68k.d[6]);
    /* TODO $01B434: movep.w -$7f80(a5), d6  [0D 0D 80 80] */
    M68K_OR8(g_m68k.d[0], g_m68k.d[1]);
    M68K_BTST(g_m68k.d[1], g_m68k.d[0]);
    M68K_BTST(g_m68k.d[5], g_m68k.d[2]);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[5])); g_m68k.a[2] -= 1; bus_write8(g_m68k.a[2], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[1])); g_m68k.a[2] -= 1; bus_write8(g_m68k.a[2], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[1])); g_m68k.a[0] -= 1; bus_write8(g_m68k.a[0], _mv); M68K_TST8(_mv); }
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], _postinc8(5));
    { uint8_t _mv = (uint8_t)(_postinc8(5)); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[5])); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[5])); g_m68k.a[2] -= 1; bus_write8(g_m68k.a[2], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[5])); g_m68k.a[2] -= 1; bus_write8(g_m68k.a[2], _mv); M68K_TST8(_mv); }
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], _postinc8(5));
    { uint8_t _mv = (uint8_t)(_postinc8(5)); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[5])); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[5])); g_m68k.a[2] -= 1; bus_write8(g_m68k.a[2], _mv); M68K_TST8(_mv); }
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(_postinc8(1)); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(1)); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $01B47E-$01B4A2  (18 instructions, 36 bytes) */
void jt_01B47E(void) {
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], g_m68k.d[6]);
    /* WARNING: function did not end with RTS */
}

/* $01B50A-$01B596  (66 instructions, 140 bytes) */
void jt_01B50A(void) {
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    /* TODO $01B52E: movep.w $b80(a3), d5  [0B 0B 0B 80] */
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], g_m68k.d[3]);
    M68K_BTST(g_m68k.d[3], g_m68k.d[1]);
    M68K_BTST(g_m68k.d[7], g_m68k.d[3]);
    M68K_BTST(g_m68k.d[7], g_m68k.d[3]);
    /* TODO $01B53C: movep.w $f0f(a3), d3  [07 0B 0F 0F] */
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], _postinc8(7));
    { uint8_t _mv = (uint8_t)(g_m68k.d[3]); g_m68k.a[7] -= 1; bus_write8(g_m68k.a[7], _mv); M68K_TST8(_mv); }
    M68K_BTST(g_m68k.d[7], g_m68k.d[3]);
    M68K_BTST(g_m68k.d[7], g_m68k.d[3]);
    /* TODO $01B54A: movep.w $f0f(a7), d3  [07 0F 0F 0F] */
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], _postinc8(7));
    { uint8_t _mv = (uint8_t)(_postinc8(7)); g_m68k.a[7] -= 1; bus_write8(g_m68k.a[7], _mv); M68K_TST8(_mv); }
    M68K_BTST(bus_read8(g_m68k.a[7]), g_m68k.d[3]);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[7])); g_m68k.a[3] -= 1; bus_write8(g_m68k.a[3], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[3])); g_m68k.a[3] -= 1; bus_write8(g_m68k.a[3], _mv); M68K_TST8(_mv); }
    /* TODO $01B55A: movep.w -$7f80(a7), d7  [0F 0F 80 80] */
    M68K_OR8(g_m68k.d[0], _postinc8(7));
    { uint8_t _mv = (uint8_t)(_postinc8(3)); g_m68k.a[7] -= 1; bus_write8(g_m68k.a[7], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[7])); g_m68k.a[3] -= 1; bus_write8(g_m68k.a[3], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[7])); g_m68k.a[3] -= 1; bus_write8(g_m68k.a[3], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[3])); g_m68k.a[3] -= 1; bus_write8(g_m68k.a[3], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[3])); g_m68k.a[1] -= 1; bus_write8(g_m68k.a[1], _mv); M68K_TST8(_mv); }
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], _postinc8(3));
    { uint8_t _mv = (uint8_t)(_postinc8(3)); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[7])); g_m68k.a[3] -= 1; bus_write8(g_m68k.a[3], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[7])); g_m68k.a[3] -= 1; bus_write8(g_m68k.a[3], _mv); M68K_TST8(_mv); }
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $01B596-$01B5C6  (23 instructions, 48 bytes) */
void jt_01B596(void) {
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], g_m68k.d[4]);
    M68K_SUB8(g_m68k.d[4], 0x8);
    /* WARNING: function did not end with RTS */
}

/* $01B622-$01B6AE  (66 instructions, 140 bytes) */
void jt_01B622(void) {
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], g_m68k.d[5]);
    M68K_BTST(g_m68k.d[5], g_m68k.d[2]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], g_m68k.d[1]);
    M68K_BTST(g_m68k.d[5], g_m68k.d[0]);
    /* TODO $01B650: movep.w $909(a1), d4  [09 09 09 09] */
    /* TODO $01B654: movep.w $d0d(a5), d4  [09 0D 0D 0D] */
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], g_m68k.d[1]);
    M68K_BTST(g_m68k.d[1], g_m68k.d[0]);
    /* TODO $01B65E: movep.w $909(a1), d4  [09 09 09 09] */
    /* TODO $01B662: movep.w $1111(a5), d4  [09 0D 11 11] */
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], g_m68k.d[1]);
    M68K_BTST(bus_read8(g_m68k.a[5]), g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(_postinc8(1)); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(1)); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[1])); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[1])); g_m68k.a[0] -= 1; bus_write8(g_m68k.a[0], _mv); M68K_TST8(_mv); }
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], _postinc8(5));
    { uint8_t _mv = (uint8_t)(_postinc8(5)); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(1)); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(1)); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[5]); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[1])); g_m68k.a[0] -= 1; bus_write8(g_m68k.a[0], _mv); M68K_TST8(_mv); }
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(_postinc8(1)); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(1)); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[5]); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    M68K_BTST(g_m68k.d[5], g_m68k.d[2]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $01B6AE-$01B6DE  (22 instructions, 48 bytes) */
void jt_01B6AE(void) {
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], g_m68k.d[2]);
    M68K_ADD8(g_m68k.d[6], 0xa);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], g_m68k.d[2]);
    M68K_AND8(g_m68k.d[2], 0xa);
    /* WARNING: function did not end with RTS */
}

/* $01B73A-$01B776  (29 instructions, 60 bytes) */
void jt_01B73A(void) {
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], g_m68k.d[7]);
    M68K_BCLR(g_m68k.d[0], g_m68k.d[3]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_BTST(g_m68k.d[3], g_m68k.d[1]);
    M68K_BTST(g_m68k.d[7], g_m68k.d[3]);
    M68K_BCLR(g_m68k.d[0], g_m68k.d[5]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], g_m68k.d[3]);
    M68K_BTST(g_m68k.d[3], g_m68k.d[1]);
    /* TODO $01B768: movep.w $b0b(a3), d5  [0B 0B 0B 0B] */
    M68K_BCLR(g_m68k.d[0], g_m68k.d[5]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], _postinc8(7));
    { uint8_t _mv = (uint8_t)(_postinc8(3)); g_m68k.a[7] -= 1; bus_write8(g_m68k.a[7], _mv); M68K_TST8(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $01B7C6-$01B7D8  (9 instructions, 18 bytes) */
void jt_01B7C6(void) {
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], g_m68k.d[4]);
    /* WARNING: function did not end with RTS */
}

/* $01B852-$01B880  (20 instructions, 46 bytes) */
void jt_01B852(void) {
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    /* TODO $01B856: movep.w -$7f80(a1), d2  [05 09 80 80] */
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_BTST(g_m68k.d[5], g_m68k.d[2]);
    /* TODO $01B864: movep.w $980(a1), d2  [05 09 09 80] */
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_BTST(g_m68k.d[5], g_m68k.d[0]);
    M68K_BTST(g_m68k.d[5], g_m68k.d[2]);
    /* TODO $01B874: movep.w -$7f80(a5), d4  [09 0D 80 80] */
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_BTST(g_m68k.d[1], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $01B8DE-$01B8E2  (2 instructions, 4 bytes) */
void jt_01B8DE(void) {
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $01B96A-$01B99A  (22 instructions, 48 bytes) */
void jt_01B96A(void) {
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], g_m68k.d[3]);
    M68K_BTST(g_m68k.d[7], g_m68k.d[3]);
    M68K_BTST(g_m68k.d[7], g_m68k.d[3]);
    M68K_BCLR(g_m68k.d[0], g_m68k.d[5]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], g_m68k.d[3]);
    M68K_BTST(g_m68k.d[7], g_m68k.d[1]);
    /* TODO $01B97E: movep.w $b80(a3), d3  [07 0B 0B 80] */
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], _postinc8(7));
    { uint8_t _mv = (uint8_t)(g_m68k.d[7]); g_m68k.a[7] -= 1; bus_write8(g_m68k.a[7], _mv); M68K_TST8(_mv); }
    /* TODO $01B98C: movep.w $f80(a7), d3  [07 0F 0F 80] */
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(_postinc8(7)); g_m68k.a[7] -= 1; bus_write8(g_m68k.a[7], _mv); M68K_TST8(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $01B9F6-$01B9FA  (2 instructions, 4 bytes) */
void jt_01B9F6(void) {
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $01BA82-$01BB0E  (64 instructions, 140 bytes) */
void jt_01BA82(void) {
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], g_m68k.d[5]);
    /* TODO $01BA88: movep.w $909(a1), d4  [09 09 09 09] */
    M68K_BCLR(g_m68k.d[0], g_m68k.d[6]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], g_m68k.d[5]);
    /* TODO $01BA96: movep.w $90d(a1), d2  [05 09 09 0D] */
    M68K_BCLR(g_m68k.d[0], g_m68k.d[6]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], g_m68k.d[1]);
    /* TODO $01BAA4: movep.w $911(a1), d0  [01 09 09 11] */
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); bus_write8(g_m68k.a[0] + (-0x80) + (int16_t)(uint16_t)g_m68k.a[0], _mv); M68K_TST8(_mv); }
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], g_m68k.d[1]);
    M68K_BTST(bus_read8(g_m68k.a[1]), g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[1])); g_m68k.a[0] -= 1; bus_write8(g_m68k.a[0], _mv); M68K_TST8(_mv); }
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_BTST(g_m68k.d[1], g_m68k.d[0]);
    M68K_BTST(bus_read8(g_m68k.a[1]), g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[1])); g_m68k.a[0] -= 1; bus_write8(g_m68k.a[0], _mv); M68K_TST8(_mv); }
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_BTST(g_m68k.d[1], g_m68k.d[0]);
    M68K_BTST(bus_read8(g_m68k.a[1]), g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[1])); g_m68k.a[0] -= 1; bus_write8(g_m68k.a[0], _mv); M68K_TST8(_mv); }
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_BTST(g_m68k.d[1], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[1])); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[1])); g_m68k.a[0] -= 1; bus_write8(g_m68k.a[0], _mv); M68K_TST8(_mv); }
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], _postinc8(5));
    { uint8_t _mv = (uint8_t)(_postinc8(1)); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[5])); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); bus_write8(g_m68k.a[2] + (-0x80) + (int16_t)(uint16_t)g_m68k.a[0], _mv); M68K_TST8(_mv); }
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], _postinc8(5));
    { uint8_t _mv = (uint8_t)(_postinc8(1)); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(1)); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); bus_write8(g_m68k.a[2] + (-0x80) + (int16_t)(uint16_t)g_m68k.a[0], _mv); M68K_TST8(_mv); }
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $01BB0E-$01BB16  (4 instructions, 8 bytes) */
void jt_01BB0E(void) {
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], g_m68k.d[6]);
    /* WARNING: function did not end with RTS */
}
