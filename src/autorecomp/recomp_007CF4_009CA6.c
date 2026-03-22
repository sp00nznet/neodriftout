/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $007CF4 - $009CA6 */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

/* $007CF4-$007D0E  (6 instructions, 26 bytes) */
void jt_007CF4(void) {
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[4])); bus_write8(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.d[0])); /* UNHANDLED_WRITE: (invalid.w) = _mv */ M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[0], 0xee);
    M68K_OR8(g_m68k.d[0], 0xc);
    M68K_OR8(g_m68k.d[0], 0x2a);
    M68K_OR8(g_m68k.d[0], 0xec);
    /* WARNING: function did not end with RTS */
}

/* $007D0C-$007D26  (8 instructions, 26 bytes) */
void jt_007D0C(void) {
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[4] + 0x0)); bus_write8(0x14000000, _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x14);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[4]))); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_OR8(g_m68k.d[0], 0x28);
    M68K_OR8(g_m68k.d[0], 0x3c);
    M68K_OR8(g_m68k.d[0], 0x50);
    M68K_OR8(g_m68k.d[0], 0xc0);
    /* WARNING: function did not end with RTS */
}

/* $007D24-$007D56  (13 instructions, 50 bytes) */
void jt_007D24(void) {
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); bus_write8(g_m68k.a[1], _mv); g_m68k.a[1] += 1; M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[0], 0xfc);
    M68K_OR8(g_m68k.d[0], 0x38);
    M68K_OR8(g_m68k.d[0], 0x74);
    M68K_OR8(g_m68k.d[0], 0xb0);
    M68K_OR8(g_m68k.d[0], 0xec);
    M68K_OR8(g_m68k.d[0], 0x8);
    M68K_OR8(g_m68k.d[0], 0x12);
    M68K_OR8(g_m68k.d[0], 0x1c);
    M68K_OR8(g_m68k.d[0], 0x26);
    M68K_OR8(g_m68k.d[0], 0x30);
    M68K_OR8(g_m68k.d[0], 0x3a);
    M68K_OR8(g_m68k.d[0], 0xe7);
    /* WARNING: function did not end with RTS */
}

/* $007D54-$007D98  (20 instructions, 68 bytes) */
void sub_007D54(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[0]; uint16_t _tmp = bus_read16(_ea); M68K_ASR16(_tmp, 1); bus_write16(_ea, _tmp); }
    g_m68k.a[2] = 0x100002;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x101212))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
loc_007D66:
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[2] = bus_read32(g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    g_m68k.d[1] = bus_read32(g_m68k.a[2]); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x101506))); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x007D98);
    g_m68k.a[0] = 0x100002;
loc_007D7E:
    M68K_OR8(g_m68k.d[2], 0x39);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x101212))); M68K_TST16((uint16_t)g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x12); bus_write8(_ea, _tmp); }
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[0] = bus_read32(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); bus_write16(g_m68k.a[0] + 0x8, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
loc_007D96:
    return;
}

/* $007D98-$007DC8  (16 instructions, 48 bytes) */
void sub_007D98(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    g_m68k.a[1] = 0x007DC8;
    M68K_ADD16(g_m68k.d[2], g_m68k.d[2]);
    M68K_ADD16(g_m68k.d[2], g_m68k.d[2]);
    g_m68k.a[1] = bus_read32(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[2]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x5)); M68K_TST16((uint16_t)g_m68k.d[0]);
loc_007DAE:
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[2]);
    M68K_ADD16(g_m68k.d[2], g_m68k.d[2]);
    M68K_ADD16(g_m68k.d[2], g_m68k.d[2]);
    g_m68k.d[2] = bus_read32(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[2]); M68K_TST32((uint32_t)g_m68k.d[2]);
    M68K_CMP32(g_m68k.d[1], g_m68k.d[2]);
    if (!(M68K_CC_HI)) { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[0]; _cnt--; g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_007DAE; } }
    M68K_ADD16(g_m68k.d[0], 0x1);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}

/* $007DD4-$007DEE  (7 instructions, 26 bytes) */
void jt_007DD4(void) {
    if (M68K_CC_LE) { func_table_call(0x007D66); return; }
    M68K_OR8(g_m68k.d[0], 0xd4);
    M68K_OR8(g_m68k.d[0], 0x18);
    M68K_OR8(g_m68k.d[0], 0x5c);
    M68K_OR8(g_m68k.d[0], 0xa0);
    M68K_OR8(g_m68k.d[0], 0xe4);
    M68K_OR8(g_m68k.d[0], 0x90);
    /* WARNING: function did not end with RTS */
}

/* $007DEC-$007E06  (7 instructions, 26 bytes) */
void jt_007DEC(void) {
    if (M68K_CC_LE) { func_table_call(0x007D7E); return; }
    M68K_OR8(g_m68k.d[0], 0xd4);
    M68K_OR8(g_m68k.d[0], 0x18);
    M68K_OR8(g_m68k.d[0], 0x5c);
    M68K_OR8(g_m68k.d[0], 0xa0);
    M68K_OR8(g_m68k.d[0], 0xe4);
    M68K_OR8(g_m68k.d[0], 0x90);
    /* WARNING: function did not end with RTS */
}

/* $007E04-$007E1E  (7 instructions, 26 bytes) */
void jt_007E04(void) {
    if (M68K_CC_LE) { func_table_call(0x007D96); return; }
    M68K_OR8(g_m68k.d[0], 0xd4);
    M68K_OR8(g_m68k.d[0], 0x18);
    M68K_OR8(g_m68k.d[0], 0x5c);
    M68K_OR8(g_m68k.d[0], 0xa0);
    M68K_OR8(g_m68k.d[0], 0xe4);
    M68K_OR8(g_m68k.d[0], 0xb9);
    /* WARNING: function did not end with RTS */
}

/* $007E1C-$007E86  (21 instructions, 106 bytes) */
void sub_007E1C(void) {
    func_table_call(0x000A26);
    M68K_OR8(g_m68k.d[0], 0x26);
    func_table_call(0x0120E0);
    func_table_call(0x0133FA);
    func_table_call(0x008172); /* loc_008172 */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x4)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x015256);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x7)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x015256);
    bus_write16(0x1011AE, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    bus_write16(0x1011A8, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint16_t _mv = (uint16_t)(0x3c); bus_write16(0x1011AA, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x3c); bus_write16(0x1011AC, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x2)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x007F0C);
    func_table_call(0x007F32);
    func_table_call(0x00805C); /* loc_00805C */
    func_table_call(0x007F50); /* loc_007F50 */
    func_table_call(0x01229E);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $007E86-$007ED2  (17 instructions, 76 bytes) */
void sub_007E86(void) {
    M68K_CMP16(bus_read16(0x1011AE), 0x1);
    if (M68K_CC_CS) goto loc_007EA6;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1011A8))); M68K_TST16((uint16_t)g_m68k.d[1]);
    { uint32_t _ea = 0x1011AC; uint16_t _tmp = bus_read16(_ea); M68K_SUB16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    if (M68K_CC_PL) goto loc_007ED0;
loc_007EA6:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1011AE))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[0] = bus_read32(0x7ed2 + (int16_t)(uint16_t)g_m68k.d[0]);
    func_table_call(g_m68k.a[0]);
    func_table_call(0x01229E);
    { uint32_t _ea = 0x1011AA; uint16_t _tmp = bus_read16(_ea); M68K_SUB16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    if (M68K_CC_MI) goto loc_007ECA;
    if (M68K_CC_NE) goto loc_007ED0;
loc_007ECA:
    bus_write16(0x1011AA, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
loc_007ED0:
    return;
}

/* $007F0C-$007F32  (9 instructions, 38 bytes) */
void sub_007F0C(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    func_table_call(0x010F96);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    bus_write32(0x1011A4, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    func_table_call(0x010FCC);
    { uint32_t _mv = (uint32_t)(g_m68k.a[0]); bus_write32(0x1011A4, _mv); M68K_TST32(_mv); }
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}

/* $007F32-$008002  (46 instructions, 208 bytes) */
void sub_007F32(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    g_m68k.a[6] = bus_read32(0x1011A4);
    M68K_SUB16(g_m68k.d[0], 0x1);
loc_007F3E:
    func_table_call(0x012202);
    { uint32_t _mv = (uint32_t)(g_m68k.a[0]); bus_write32(g_m68k.a[6], _mv); g_m68k.a[6] += 4; M68K_TST32(_mv); }
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[0]; _cnt--; g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_007F3E; } }
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
loc_007F50:
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[7]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    g_m68k.a[5] = bus_read32(0x1011A4);
    g_m68k.a[6] = 0x008492;
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[7]);
loc_007F64:
    g_m68k.a[0] = _postinc32(5);
    func_table_call(0x00802A); /* loc_00802A */
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[7]; _cnt--; g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_007F64; } }
    g_m68k.a[0] = 0x0084B4;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x7219)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x9)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x300)); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x011A34);
    g_m68k.a[0] = 0x0084C8;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x721a)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x9)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x300)); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x011A34);
    g_m68k.a[0] = 0x0084A2;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x7255)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0xb)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x360)); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x011A34);
    g_m68k.a[0] = 0x0084A8;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x7257)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0xb)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x360)); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x011A34);
    g_m68k.a[0] = 0x0084B2;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x7215)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0xb)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x300)); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x011A34);
    g_m68k.a[0] = 0x0084B2;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x7217)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0xb)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x300)); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x011A34);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x7215)); M68K_TST16((uint16_t)g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $008000-$008192  (46 instructions, 402 bytes) */
void jt_008000(void) {
    g_m68k.d[1] = (uint32_t)(int32_t)(int8_t)(0x15); M68K_TST32(g_m68k.d[1]);
    M68K_TST16(bus_read16(0x1011A8));
    if (M68K_CC_EQ) goto loc_008010;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x7217)); M68K_TST16((uint16_t)g_m68k.d[0]);
loc_008010:
    g_m68k.a[0] = 0x0084B0;
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0xb)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x300)); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x011A34);
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[7] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
loc_00802A:
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(_postinc16(6))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[3] = bus_read32(0x08003C);
    g_m68k.a[3] = bus_read32(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    func_table_call(0x012270);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(_postinc16(6))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(_postinc16(6))); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x01225C);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(_postinc16(6))); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x012256);
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
loc_00805C:
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x2)); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[4] = bus_read32(0x08003C);
    g_m68k.a[4] = (g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    g_m68k.a[5] = (g_m68k.a[4] + 0x8);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x100)); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0x100)); M68K_TST16((uint16_t)g_m68k.d[3]);
    func_table_call(0x01348E);
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
loc_008172:
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x40)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x10)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x100)); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.a[3] = 0x8192;
    func_table_call(0x012036);
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}

/* $008300-$008308  (3 instructions, 8 bytes) */
void jt_008300(void) {
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[7] -= 1; bus_write8(g_m68k.a[7], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(7)); g_m68k.a[7] -= 1; bus_write8(g_m68k.a[7], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x15); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0084DE-$008628  (67 instructions, 330 bytes) */
void sub_0084DE(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]);
    func_table_call(0x000A26);
    func_table_call(0x0120E0);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x011F22);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x40)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x11)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.a[3] = 0x008888;
    func_table_call(0x012036);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x4)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.a[1] = 0x1011B0;
loc_00851A:
    func_table_call(0x012202);
    { uint32_t _mv = (uint32_t)(g_m68k.a[0]); bus_write32(g_m68k.a[1], _mv); g_m68k.a[1] += 4; M68K_TST32(_mv); }
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[0]; _cnt--; g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_00851A; } }
    g_m68k.a[1] = bus_read32(0x008BE8);
    g_m68k.a[0] = bus_read32(0x1011B0);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x01225C);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x012256);
    g_m68k.a[3] = bus_read32(g_m68k.a[1]);
    func_table_call(0x012270);
    g_m68k.a[0] = bus_read32(0x1011B4);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x01225C);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0xffff)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x012256);
    g_m68k.a[3] = bus_read32(g_m68k.a[1] + 0x4);
    func_table_call(0x012270);
    g_m68k.a[0] = bus_read32(0x1011B8);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0xa0)); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x01225C);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x3)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x012256);
    g_m68k.a[3] = bus_read32(g_m68k.a[1] + 0x8);
    func_table_call(0x012270);
    g_m68k.a[0] = bus_read32(0x1011BC);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x80)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x80)); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x01225C);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x012256);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1011FA))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[3] = bus_read32(g_m68k.a[1] + 0xc + (int16_t)(uint16_t)g_m68k.d[0]);
    func_table_call(0x012270);
    g_m68k.a[0] = bus_read32(0x1011C0);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x80)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x60)); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x01225C);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x2)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x012256);
    g_m68k.a[3] = bus_read32(g_m68k.a[1] + 0x18);
    func_table_call(0x012270);
    bus_write16(0x1011C4, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    bus_write16(0x1011C6, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    bus_write16(0x1011C8, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint16_t _mv = (uint16_t)(0x82); bus_write16(0x1011CA, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x78); bus_write16(0x1011CC, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}

/* $008628-$008642  (8 instructions, 26 bytes) */
void sub_008628(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[1]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1011C6))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[0] = bus_read32(0x8642 + (int16_t)(uint16_t)g_m68k.d[0]);
    func_table_call(g_m68k.a[0]);
    g_m68k.d[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}

/* $00865E-$008678  (6 instructions, 26 bytes) */
void jt_00865E(void) {
    func_table_call(0x008732);
    M68K_CMP16(g_m68k.d[0], 0x0);
    if (M68K_CC_NE) goto loc_008672;
    { uint32_t _ea = 0x1011C6; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0x1); bus_write16(_ea, _tmp); }
loc_008672:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $0086AC-$0086C6  (6 instructions, 26 bytes) */
void jt_0086AC(void) {
    func_table_call(0x008758);
    M68K_CMP16(g_m68k.d[0], 0x0);
    if (M68K_CC_NE) goto loc_0086C0;
    { uint32_t _ea = 0x1011C6; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0x1); bus_write16(_ea, _tmp); }
loc_0086C0:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $0086C6-$0086E6  (7 instructions, 32 bytes) */
void jt_0086C6(void) {
    func_table_call(0x008810);
    func_table_call(0x008778);
    M68K_CMP16(g_m68k.d[0], 0x0);
    if (M68K_CC_NE) goto loc_0086E0;
    { uint32_t _ea = 0x1011C6; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0x1); bus_write16(_ea, _tmp); }
loc_0086E0:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $0086E6-$00870C  (8 instructions, 38 bytes) */
void jt_0086E6(void) {
    func_table_call(0x008810);
    { uint32_t _ea = 0x1011CA; uint16_t _tmp = bus_read16(_ea); M68K_SUB16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    if (M68K_CC_GT) goto loc_008706;
    { uint32_t _ea = 0x1011C6; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(0x82); bus_write16(0x1011CA, _mv); M68K_TST16(_mv); }
    goto loc_00870A;
loc_008706:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
loc_00870A:
    return;
}

/* $00870C-$00872C  (7 instructions, 32 bytes) */
void jt_00870C(void) {
    func_table_call(0x008810);
    func_table_call(0x0087C4);
    M68K_CMP16(g_m68k.d[0], 0x0);
    if (M68K_CC_NE) goto loc_008726;
    { uint32_t _ea = 0x1011C6; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0x1); bus_write16(_ea, _tmp); }
loc_008726:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00872C-$008732  (2 instructions, 6 bytes) */
void jt_00872C(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $008732-$008748  (6 instructions, 22 bytes) */
void sub_008732(void) {
    { uint32_t _ea = 0x1011CC; uint16_t _tmp = bus_read16(_ea); M68K_SUB16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    if (M68K_CC_LE) goto loc_008742;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    goto loc_008746;
loc_008742:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
loc_008746:
    return;
}

/* $008758-$008768  (4 instructions, 16 bytes) */
void sub_008758(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x2c)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x015256);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $008778-$0087C4  (15 instructions, 76 bytes) */
void sub_008778(void) {
    { uint32_t _ea = 0x1011C8; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0x8); bus_write16(_ea, _tmp); }
    M68K_CMP16(bus_read16(0x1011C8), 0x100);
    if (M68K_CC_LE) goto loc_008792;
    { uint16_t _mv = (uint16_t)(0x100); bus_write16(0x1011C8, _mv); M68K_TST16(_mv); }
loc_008792:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x40)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x11)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1011C8))); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.a[3] = 0x008888;
    func_table_call(0x012036);
    M68K_CMP16(bus_read16(0x1011C8), 0x100);
    if (M68K_CC_CS) goto loc_0087BE;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    goto loc_0087C2;
loc_0087BE:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
loc_0087C2:
    return;
}

/* $0087C4-$008810  (15 instructions, 76 bytes) */
void sub_0087C4(void) {
    { uint32_t _ea = 0x1011C8; uint16_t _tmp = bus_read16(_ea); M68K_SUB16(_tmp, 0x4); bus_write16(_ea, _tmp); }
    M68K_CMP16(bus_read16(0x1011C8), 0x0);
    if (M68K_CC_HI) goto loc_0087DE;
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(0x1011C8, _mv); M68K_TST16(_mv); }
loc_0087DE:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x40)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x11)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1011C8))); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.a[3] = 0x008888;
    func_table_call(0x012036);
    M68K_CMP16(bus_read16(0x1011C8), 0x0);
    if (M68K_CC_HI) goto loc_00880A;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    goto loc_00880E;
loc_00880A:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
loc_00880E:
    return;
}

/* $008810-$00884E  (14 instructions, 62 bytes) */
void sub_008810(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1011C4))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], 0x1);
    M68K_AND16(g_m68k.d[0], 0x3f);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(0x1011C4, _mv); M68K_TST16(_mv); }
    M68K_SUB16(g_m68k.d[0], 0x1e);
    M68K_AND16(g_m68k.d[0], 0x8000);
    M68K_ROL16(g_m68k.d[0], 0x3);
    g_m68k.a[1] = bus_read32(0x008BE8);
    g_m68k.a[3] = bus_read32(g_m68k.a[1] + 0x18 + (int16_t)(uint16_t)g_m68k.d[0]);
    g_m68k.a[0] = bus_read32(0x1011C0);
    func_table_call(0x012270);
    func_table_call(0x01229E);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $008BEC-$008C0C  (8 instructions, 32 bytes) */
void jt_008BEC(void) {
    M68K_OR8(g_m68k.d[0], 0xc);
    M68K_OR8(g_m68k.d[0], 0x10);
    M68K_OR8(g_m68k.d[0], 0x14);
    M68K_OR8(g_m68k.d[0], 0xf8);
    M68K_OR8(g_m68k.d[0], 0x3c);
    M68K_OR8(g_m68k.d[0], 0x80);
    M68K_OR8(g_m68k.d[0], 0xc4);
    M68K_OR8(g_m68k.d[0], 0x8);
    /* WARNING: function did not end with RTS */
}

/* $008C0C-$008C6A  (38 instructions, 94 bytes) */
void jt_008C0C(void) {
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x10); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $008C20: dc.w $f274  [F2 74] */
    /* TODO $008C22: dc.w $4700  [47 00] */
    /* TODO $008C24: dc.w $f282  [F2 82] */
    /* TODO $008C26: nbcd.b d0  [48 00] */
    /* TODO $008C28: dc.w $f290  [F2 90] */
    /* TODO $008C2A: nbcd.b d0  [48 00] */
    /* TODO $008C2C: dc.w $f29f  [F2 9F] */
    M68K_NOT8(g_m68k.d[0]);
    /* TODO $008C30: dc.w $f2ab  [F2 AB] */
    M68K_NOT8(g_m68k.d[0]);
    /* TODO $008C34: dc.w $f2ba  [F2 BA] */
    /* TODO $008C36: dc.w $4700  [47 00] */
    /* TODO $008C38: dc.w $f2c9  [F2 C9] */
    /* TODO $008C3A: dc.w $4700  [47 00] */
    /* TODO $008C3C: dc.w $f2d7  [F2 D7] */
    /* TODO $008C3E: dc.w $4700  [47 00] */
    /* TODO $008C40: dc.w $f2e3  [F2 E3] */
    M68K_NOT8(g_m68k.d[0]);
    /* TODO $008C44: dc.w $f2db  [F2 DB] */
    /* TODO $008C46: dc.w $4300  [43 00] */
    /* TODO $008C48: dc.w $f2f2  [F2 F2] */
    /* TODO $008C4A: dc.w $4300  [43 00] */
    /* TODO $008C4C: dc.w $f2f5  [F2 F5] */
    /* TODO $008C4E: dc.w $4300  [43 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $008C60: dc.w $f275  [F2 75] */
    M68K_NOT8(g_m68k.d[0]);
    /* TODO $008C64: dc.w $f283  [F2 83] */
    M68K_NOT8(g_m68k.d[0]);
    /* TODO $008C68: dc.w $f291  [F2 91] */
    /* WARNING: function did not end with RTS */
}

/* $008D00-$008D32  (21 instructions, 50 bytes) */
void jt_008D00(void) {
    /* TODO $008D00: dc.w $f2db  [F2 DB] */
    M68K_NOT8(g_m68k.d[0]);
    /* TODO $008D04: dc.w $f2ec  [F2 EC] */
    /* TODO $008D06: dc.w $4300  [43 00] */
    /* TODO $008D08: dc.w $f2f3  [F2 F3] */
    /* TODO $008D0A: dc.w $4300  [43 00] */
    /* TODO $008D0C: dc.w $f2f8  [F2 F8] */
    /* TODO $008D0E: dc.w $4300  [43 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $008D1C: dc.w $f26f  [F2 6F] */
    /* TODO $008D1E: dc.w $4b00  [4B 00] */
    /* TODO $008D20: dc.w $f277  [F2 77] */
    /* TODO $008D22: dc.w $4b00  [4B 00] */
    /* TODO $008D24: dc.w $f285  [F2 85] */
    /* TODO $008D26: dc.w $4b00  [4B 00] */
    /* TODO $008D28: dc.w $f294  [F2 94] */
    /* TODO $008D2A: dc.w $4b00  [4B 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $008D30: dc.w $f2af  [F2 AF] */
    /* WARNING: function did not end with RTS */
}

/* $008E00-$008E32  (21 instructions, 50 bytes) */
void jt_008E00(void) {
    /* TODO $008E00: dc.w $f2e7  [F2 E7] */
    /* TODO $008E02: dc.w $4300  [43 00] */
    /* TODO $008E04: dc.w $f2e5  [F2 E5] */
    /* TODO $008E06: dc.w $4300  [43 00] */
    /* TODO $008E08: dc.w $f2f3  [F2 F3] */
    /* TODO $008E0A: dc.w $4300  [43 00] */
    /* TODO $008E0C: dc.w $f2f8  [F2 F8] */
    /* TODO $008E0E: dc.w $4300  [43 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $008E20: dc.w $f27b  [F2 7B] */
    M68K_NOT8(g_m68k.d[0]);
    /* TODO $008E24: dc.w $f289  [F2 89] */
    M68K_NOT8(g_m68k.d[0]);
    /* TODO $008E28: dc.w $f298  [F2 98] */
    M68K_NOT8(g_m68k.d[0]);
    /* TODO $008E2C: dc.w $f2a5  [F2 A5] */
    M68K_NOT8(g_m68k.d[0]);
    /* TODO $008E30: dc.w $f2b3  [F2 B3] */
    /* WARNING: function did not end with RTS */
}

/* $008F00-$008F20  (12 instructions, 32 bytes) */
void jt_008F00(void) {
    /* TODO $008F00: dc.w $f2e8  [F2 E8] */
    /* TODO $008F02: dc.w $4300  [43 00] */
    /* TODO $008F04: dc.w $f2f1  [F2 F1] */
    /* TODO $008F06: dc.w $4300  [43 00] */
    /* TODO $008F08: dc.w $f2f3  [F2 F3] */
    /* TODO $008F0A: dc.w $4300  [43 00] */
    /* TODO $008F0C: dc.w $f2f8  [F2 F8] */
    /* TODO $008F0E: dc.w $4300  [43 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $009000-$00902C  (15 instructions, 44 bytes) */
void jt_009000(void) {
    /* TODO $009000: dc.w $f2e5  [F2 E5] */
    /* TODO $009002: dc.w $4300  [43 00] */
    /* TODO $009004: dc.w $f2f1  [F2 F1] */
    /* TODO $009006: dc.w $4300  [43 00] */
    /* TODO $009008: dc.w $f2f3  [F2 F3] */
    /* TODO $00900A: dc.w $4300  [43 00] */
    /* TODO $00900C: dc.w $f2f8  [F2 F8] */
    /* TODO $00900E: dc.w $4300  [43 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $009110-$009114  (1 instructions, 4 bytes) */
void jt_009110(void) {
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x10); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $009614-$009618  (1 instructions, 4 bytes) */
void jt_009614(void) {
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x6); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0097F8-$0097FC  (1 instructions, 4 bytes) */
void jt_0097F8(void) {
    M68K_OR8(g_m68k.d[4], 0x4);
    /* WARNING: function did not end with RTS */
}

/* $00983C-$009840  (1 instructions, 4 bytes) */
void jt_00983C(void) {
    M68K_OR8(g_m68k.d[4], 0x4);
    /* WARNING: function did not end with RTS */
}

/* $009880-$009884  (1 instructions, 4 bytes) */
void jt_009880(void) {
    M68K_OR8(g_m68k.d[4], 0x4);
    /* WARNING: function did not end with RTS */
}

/* $0098C4-$0098CC  (2 instructions, 8 bytes) */
void jt_0098C4(void) {
    M68K_OR8(g_m68k.d[4], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $009908-$009910  (2 instructions, 8 bytes) */
void jt_009908(void) {
    M68K_OR8(g_m68k.d[4], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $00994C-$009A02  (33 instructions, 182 bytes) */
void sub_00994C(void) {
    func_table_call(0x000A26);
    func_table_call(0x0120E0);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x40)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x5)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x100)); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.a[3] = 0x00A004;
    func_table_call(0x012036);
    func_table_call(0x012202);
    { uint32_t _mv = (uint32_t)(g_m68k.a[0]); bus_write32(0x1011CE, _mv); M68K_TST32(_mv); }
    func_table_call(0x012202);
    { uint32_t _mv = (uint32_t)(g_m68k.a[0]); bus_write32(0x1011D2, _mv); M68K_TST32(_mv); }
    g_m68k.a[0] = bus_read32(0x1011CE);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x28)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x80)); M68K_TST16((uint16_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(0x1011DC, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(0x1011DE, _mv); M68K_TST16(_mv); }
    func_table_call(0x01225C);
    g_m68k.a[0] = bus_read32(0x1011D2);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(0x1011E4, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(0x1011E6, _mv); M68K_TST16(_mv); }
    func_table_call(0x01225C);
    g_m68k.a[0] = bus_read32(0x1011CE);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0xa0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(0x1011DA, _mv); M68K_TST16(_mv); }
    func_table_call(0x012266);
    { uint16_t _mv = (uint16_t)(0x100); bus_write16(0x1011E2, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x100); bus_write16(0x1011E0, _mv); M68K_TST16(_mv); }
    g_m68k.a[0] = bus_read32(0x1011CE);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x012256);
    /* WARNING: function did not end with RTS */
}

/* $009A00-$009A82  (25 instructions, 130 bytes) */
void jt_009A00(void) {
    g_m68k.a[1] = bus_read32(g_m68k.a[6]);
    g_m68k.a[0] = bus_read32(0x1011D2);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x012256);
    g_m68k.a[0] = bus_read32(0x1011CE);
    g_m68k.a[3] = 0x00A124;
    g_m68k.a[3] = bus_read32(g_m68k.a[3]);
    func_table_call(0x012270);
    g_m68k.a[0] = bus_read32(0x1011D2);
    g_m68k.a[3] = 0x00A124;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1011FA))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[3] = bus_read32(g_m68k.a[3] + 0x4 + (int16_t)(uint16_t)g_m68k.d[0]);
    func_table_call(0x012270);
    func_table_call(0x01229E);
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(0x1011EA, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x78); bus_write16(0x1011D6, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x3c); bus_write16(0x1011D8, _mv); M68K_TST16(_mv); }
    func_table_call(0x001340);
    func_table_call(0x0013E6);
    func_table_call(0x0014A6);
    func_table_call(0x009B06);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $009A82-$009AF6  (29 instructions, 116 bytes) */
void sub_009A82(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[1]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1011EA))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_CMP16(g_m68k.d[0], 0x1);
    if (M68K_CC_LS) goto loc_009A9E;
    M68K_CMP16(g_m68k.d[0], 0x4);
    if (M68K_CC_CC) goto loc_009AEC;
    goto loc_009AC8;
loc_009A9E:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x010E36);
    M68K_CMP16(g_m68k.d[0], 0x1);
    if (M68K_CC_EQ) goto loc_009AC2;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x010E36);
    M68K_CMP16(g_m68k.d[0], 0x1);
    if (M68K_CC_NE) goto loc_009AC8;
loc_009AC2:
    { uint32_t _ea = 0x1011EA; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0x1); bus_write16(_ea, _tmp); }
loc_009AC8:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1011EA))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[1] = bus_read32(0x9af6 + (int16_t)(uint16_t)g_m68k.d[0]);
    func_table_call(g_m68k.a[1]);
    M68K_CMP16(g_m68k.d[0], 0x0);
    if (M68K_CC_NE) goto loc_009AF0;
    { uint32_t _ea = 0x1011EA; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    goto loc_009AF0;
loc_009AEC:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
loc_009AF0:
    g_m68k.a[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}

/* $009B00-$009B06  (2 instructions, 6 bytes) */
void jt_009B00(void) {
    g_m68k.a[5] -= bus_read32(g_m68k.a[2] + 0x0);
    M68K_SUB16(g_m68k.d[6], _predec16(4));
    /* WARNING: function did not end with RTS */
}

/* $009B06-$009B2A  (9 instructions, 36 bytes) */
void sub_009B06(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x10120A))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_CMP16(g_m68k.d[0], 0xffff);
    if (M68K_CC_EQ) goto loc_009B1A;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1861)); M68K_TST16((uint16_t)g_m68k.d[0]);
    goto loc_009B1E;
loc_009B1A:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x185f)); M68K_TST16((uint16_t)g_m68k.d[0]);
loc_009B1E:
    func_table_call(0x015256);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $009B2A-$009BA4  (26 instructions, 122 bytes) */
void jt_009B2A(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]);
    { uint32_t _ea = 0x1011D6; uint16_t _tmp = bus_read16(_ea); M68K_SUB16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    if (M68K_CC_NE) goto loc_009B40;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    goto loc_009B9E;
loc_009B40:
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1011DA))); M68K_TST16((uint16_t)g_m68k.d[2]);
    M68K_ADD16(g_m68k.d[2], 0x5);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[2])); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_LSR16(g_m68k.d[0], 0x3);
    { uint16_t _mv = (uint16_t)(0x80); bus_write16(0x1011DE, _mv); M68K_TST16(_mv); }
    { uint32_t _ea = 0x1011DE; uint16_t _tmp = bus_read16(_ea); M68K_SUB16(_tmp, g_m68k.d[0]); bus_write16(_ea, _tmp); }
    M68K_CMP16(g_m68k.d[2], 0x100);
    if (M68K_CC_LS) goto loc_009B6E;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x100)); M68K_TST16((uint16_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(0x60); bus_write16(0x1011DE, _mv); M68K_TST16(_mv); }
loc_009B6E:
    g_m68k.a[0] = bus_read32(0x1011CE);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(0x1011DA, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x100)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x012266);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x28)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1011DE))); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x01225C);
    func_table_call(0x01229E);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
loc_009B9E:
    g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}

/* $009BA4-$009BEA  (16 instructions, 70 bytes) */
void jt_009BA4(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]);
    { uint32_t _ea = 0x1011D8; uint16_t _tmp = bus_read16(_ea); M68K_SUB16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    if (M68K_CC_GT) goto loc_009BB8;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    goto loc_009BE4;
loc_009BB8:
    g_m68k.a[0] = bus_read32(0x1011CE);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x100)); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x100)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x012266);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x28)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x60)); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x01225C);
    func_table_call(0x01229E);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
loc_009BE4:
    g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}

/* $009BEA-$009C00  (5 instructions, 22 bytes) */
void jt_009BEA(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x011F22);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x40)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x5)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x000000))); M68K_TST16((uint16_t)g_m68k.d[2]);
    /* WARNING: function did not end with RTS */
}

/* $009C00-$009C64  (16 instructions, 100 bytes) */
void jt_009C00(void) {
    g_m68k.a[3] = 0x00A004;
    func_table_call(0x012036);
    g_m68k.a[0] = bus_read32(0x1011D2);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x012286);
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(0x1011E8, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(0x1011EE, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0xffff); bus_write16(0x1011EC, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x100); bus_write16(0x1011F0, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(0x1011F2, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0xffff); bus_write16(0x1011F4, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x100); bus_write16(0x1011F6, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0xc3)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x015256);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $009C64-$009CA6  (14 instructions, 66 bytes) */
void jt_009C64(void) {
    g_m68k.a[0] = bus_read32(0x1011D2);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1011E4))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1011E6))); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x01225C);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1011E2))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1011E0))); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x012266);
    func_table_call(0x01229E);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1011E8))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[1] = bus_read32(0x9ca6 + (int16_t)(uint16_t)g_m68k.d[0]);
    func_table_call(g_m68k.a[1]);
    return;
}
