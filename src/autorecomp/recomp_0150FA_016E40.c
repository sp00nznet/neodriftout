/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $0150FA - $016E40 */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

/* $0150FA-$015108  (3 instructions, 14 bytes) */
void sub_0150FA(void) {
    bus_write16(0x100370, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    bus_write16(0x100372, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    return;
}

/* $015108-$015146  (13 instructions, 62 bytes) */
void sub_015108(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[1]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(0x1032A6, _mv); M68K_TST16(_mv); }
    bus_write16(0x1032A8, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    bus_write16(0x1032AA, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    g_m68k.a[5] = 0x1032AC;
    { uint32_t _mv = (uint32_t)(g_m68k.a[5]); bus_write32(0x1032BC, _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(g_m68k.a[5]); bus_write32(0x1032C0, _mv); M68K_TST32(_mv); }
    g_m68k.d[1] = (uint32_t)(int32_t)(int8_t)(0x7); M68K_TST32(g_m68k.d[1]);
loc_015132:
    bus_write16(g_m68k.a[5], 0); g_m68k.a[5] += 2; g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[1]; _cnt--; g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_015132; } }
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(0x100370, _mv); M68K_TST16(_mv); }
    g_m68k.d[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}

/* $015150-$015256  (51 instructions, 262 bytes) */
void sub_015150(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    M68K_TST16(bus_read16(0x1032AA));
    if (M68K_CC_EQ) goto loc_015168;
    { uint32_t _ea = 0x1032AA; uint16_t _tmp = bus_read16(_ea); M68K_SUB16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    if (M68K_CC_NE) goto loc_015250;
loc_015168:
    M68K_TST16(bus_read16(0x100370));
    if (M68K_CC_EQ) goto loc_0151C0;
    M68K_CMP16(bus_read16(0x100370), 0x1);
    if (M68K_CC_NE) goto loc_01519A;
    { uint8_t _mv = (uint8_t)(0x3); bus_write8(0x320000, _mv); M68K_TST8(_mv); }
    { uint16_t _mv = (uint16_t)(0x2); bus_write16(0x100370, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x4); bus_write16(0x1032AA, _mv); M68K_TST16(_mv); }
    goto loc_015250;
loc_01519A:
    g_m68k.d[0] = (uint32_t)(int32_t)(int8_t)(0x4); M68K_TST32(g_m68k.d[0]);
    M68K_TST16(bus_read16(0x1032A6));
    if (M68K_CC_EQ) goto loc_0151A8;
    g_m68k.d[0] = (uint32_t)(int32_t)(int8_t)(0x7); M68K_TST32(g_m68k.d[0]);
loc_0151A8:
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); bus_write8(0x320000, _mv); M68K_TST8(_mv); }
    bus_write16(0x100370, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint16_t _mv = (uint16_t)(0x2); bus_write16(0x1032AA, _mv); M68K_TST16(_mv); }
    goto loc_015250;
loc_0151C0:
    M68K_TST16(bus_read16(0x100372));
    if (M68K_CC_EQ) goto loc_0151EE;
    M68K_TST16(bus_read16(0x1032A8));
    if (M68K_CC_NE) goto loc_0151EE;
    { uint8_t _mv = (uint8_t)(0x7f); bus_write8(0x320000, _mv); M68K_TST8(_mv); }
    bus_write16(0x100372, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint16_t _mv = (uint16_t)(0x2); bus_write16(0x1032AA, _mv); M68K_TST16(_mv); }
    goto loc_015250;
loc_0151EE:
    g_m68k.a[4] = bus_read32(0x1032BC);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[4]))); M68K_TST16((uint16_t)g_m68k.d[0]);
    if (M68K_CC_EQ) goto loc_015250;
    M68K_TST16(bus_read16(0x1032A8));
    if (M68K_CC_NE) goto loc_015224;
    M68K_CMP16(g_m68k.d[0], 0xff);
    if (M68K_CC_HI) goto loc_015210;
    goto loc_015224;
loc_015210:
    M68K_LSR16(g_m68k.d[0], 0x8);
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); bus_write8(0x320000, _mv); M68K_TST8(_mv); }
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(0x1032A8, _mv); M68K_TST16(_mv); }
    goto loc_015248;
loc_015224:
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); bus_write8(0x320000, _mv); M68K_TST8(_mv); }
    bus_write16(g_m68k.a[4], 0); g_m68k.a[4] += 2; g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP32(g_m68k.a[4], 0x1032bc);
    if (M68K_CC_NE) goto loc_01523C;
    g_m68k.a[4] = 0x1032AC;
loc_01523C:
    { uint32_t _mv = (uint32_t)(g_m68k.a[4]); bus_write32(0x1032BC, _mv); M68K_TST32(_mv); }
    bus_write16(0x1032A8, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
loc_015248:
    { uint16_t _mv = (uint16_t)(0x2); bus_write16(0x1032AA, _mv); M68K_TST16(_mv); }
loc_015250:
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}

/* $015256-$015282  (11 instructions, 44 bytes) */
void sub_015256(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[4]);
    g_m68k.a[4] = bus_read32(0x1032C0);
loc_015260:
    M68K_TST16(bus_read16(g_m68k.a[4]));
    if (M68K_CC_NE) goto loc_015260;
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[4], _mv); g_m68k.a[4] += 2; M68K_TST16(_mv); }
    M68K_CMP32(g_m68k.a[4], 0x1032bc);
    if (M68K_CC_NE) goto loc_015276;
    g_m68k.a[4] = 0x1032AC;
loc_015276:
    { uint32_t _mv = (uint32_t)(g_m68k.a[4]); bus_write32(0x1032C0, _mv); M68K_TST32(_mv); }
    g_m68k.a[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}

/* $015282-$015354  (38 instructions, 210 bytes) */
void sub_015282(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]);
    func_table_call(0xC004C8);
    func_table_call(0x000A26);
    func_table_call(0x0120E0);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x40)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x5)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x100)); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.a[3] = 0x01555E;
    func_table_call(0x012036);
    func_table_call(0x012202);
    { uint32_t _mv = (uint32_t)(g_m68k.a[0]); bus_write32(0x1032C4, _mv); M68K_TST32(_mv); }
    func_table_call(0x012202);
    { uint32_t _mv = (uint32_t)(g_m68k.a[0]); bus_write32(0x1032C8, _mv); M68K_TST32(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x30)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x30)); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x01225C);
    g_m68k.a[0] = bus_read32(0x1032C4);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x80)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x60)); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x01225C);
    g_m68k.a[1] = 0x01564E;
    g_m68k.a[3] = bus_read32(g_m68k.a[1] + 0x24);
    func_table_call(0x012270);
    g_m68k.a[0] = bus_read32(0x1032C8);
    g_m68k.a[3] = bus_read32(g_m68k.a[1] + 0x28);
    func_table_call(0x012270);
    { uint16_t _mv = (uint16_t)(0x9); bus_write16(0x1032CC, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x3c); bus_write16(0x1032CE, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x100); bus_write16(0x1032D0, _mv); M68K_TST16(_mv); }
    bus_write16(0x10041A, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint16_t _mv = (uint16_t)(0x28); bus_write16(0x1032D2, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0xffff); bus_write16(0x1032D4, _mv); M68K_TST16(_mv); }
    func_table_call(0x001340);
    func_table_call(0x0013E6);
    func_table_call(0x0014A6);
    g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $015354-$0154DC  (81 instructions, 392 bytes) */
void sub_015354(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]);
    M68K_CMP16(bus_read16(0x1032D4), 0x0);
    if (M68K_CC_NE) goto loc_015386;
    { uint32_t _ea = 0x1032D2; uint16_t _tmp = bus_read16(_ea); M68K_SUB16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    if (M68K_CC_LE) goto loc_015376;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    goto loc_0154B8;
loc_015376:
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(0x10120C, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    goto loc_0154B8;
loc_015386:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x100420))); M68K_TST16((uint16_t)g_m68k.d[0]);
    if (M68K_CC_EQ) goto loc_0153A8;
    { uint16_t _mv = (uint16_t)(0x9); bus_write16(0x1032CC, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x3c); bus_write16(0x1032CE, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x100); bus_write16(0x1032D0, _mv); M68K_TST16(_mv); }
loc_0153A8:
    M68K_TST16(bus_read16(0x10041A));
    if (M68K_CC_EQ) goto loc_0153CC;
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(0x1032D4, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x186e)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x015256);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    goto loc_0154B8;
loc_0153CC:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1032CC))); M68K_TST16((uint16_t)g_m68k.d[0]);
    if (M68K_CC_PL) goto loc_0153E6;
    { uint16_t _mv = (uint16_t)(0xffff); bus_write16(0x10120C, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    goto loc_0154B8;
loc_0153E6:
    g_m68k.a[0] = bus_read32(0x1032C4);
    g_m68k.a[1] = 0x1564e;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1032CC))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[3] = bus_read32(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    func_table_call(0x012270);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x100)); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1032CE))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[1] = 0x154e4;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x012266);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[2]);
    M68K_ASR16(g_m68k.d[2], 0x3);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0xa0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_SUB16(g_m68k.d[0], g_m68k.d[2]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x60)); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x01225C);
    func_table_call(0x01229E);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1032CE))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_CMP16(g_m68k.d[0], 0x3c);
    if (M68K_CC_NE) goto loc_01546A;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0xca)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x015256);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1032CC))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_CMP16(g_m68k.d[0], 0x3);
    if (M68K_CC_HI) goto loc_01546A;
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x154dc + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x015256);
loc_01546A:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x010E36);
    M68K_CMP16(g_m68k.d[0], 0x1);
    if (M68K_CC_EQ) goto loc_01548E;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x010E36);
    M68K_CMP16(g_m68k.d[0], 0x1);
    if (M68K_CC_NE) goto loc_015496;
loc_01548E:
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(0x1032CE, _mv); M68K_TST16(_mv); }
loc_015496:
    { uint32_t _ea = 0x1032CE; uint16_t _tmp = bus_read16(_ea); M68K_SUB16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    if (M68K_CC_PL) goto loc_0154B4;
    { uint16_t _mv = (uint16_t)(0x3c); bus_write16(0x1032CE, _mv); M68K_TST16(_mv); }
    { uint32_t _ea = 0x1032CC; uint16_t _tmp = bus_read16(_ea); M68K_SUB16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(0x100); bus_write16(0x1032D0, _mv); M68K_TST16(_mv); }
loc_0154B4:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
loc_0154B8:
    M68K_CMP16(g_m68k.d[0], 0x0);
    if (M68K_CC_NE) goto loc_0154D6;
    g_m68k.a[0] = bus_read32(0x1032C4);
    func_table_call(0x012252);
    g_m68k.a[0] = bus_read32(0x1032C8);
    func_table_call(0x012252);
loc_0154D6:
    g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}

/* $01567A-$015686  (5 instructions, 12 bytes) */
void jt_01567A(void) {
    M68K_OR8(g_m68k.d[4], 0x8);
    M68K_ROL32(g_m68k.d[0], g_m68k.d[1]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_ROL32(g_m68k.d[7], g_m68k.d[1]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $0156FE-$015706  (2 instructions, 8 bytes) */
void jt_0156FE(void) {
    M68K_OR8(g_m68k.d[4], 0x8);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $015782-$01578E  (5 instructions, 12 bytes) */
void jt_015782(void) {
    M68K_OR8(g_m68k.d[4], 0x8);
    M68K_ROL32(g_m68k.d[0], g_m68k.d[1]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_ROL32(g_m68k.d[7], g_m68k.d[1]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $015806-$015812  (5 instructions, 12 bytes) */
void jt_015806(void) {
    M68K_OR8(g_m68k.d[4], 0x8);
    M68K_ROL32(g_m68k.d[0], g_m68k.d[1]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_ROL32(g_m68k.d[7], g_m68k.d[1]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $015858-$01586E  (9 instructions, 22 bytes) */
void jt_015858(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint32_t _ea = g_m68k.a[7]; uint16_t _tmp = bus_read16(_ea); M68K_LSL16(_tmp, 1); bus_write16(_ea, _tmp); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint32_t _ea = (g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 2); uint16_t _tmp = bus_read16(_ea); M68K_LSL16(_tmp, 1); bus_write16(_ea, _tmp); }
    { uint32_t _ea = 0x004200; uint16_t _tmp = bus_read16(_ea); M68K_LSL16(_tmp, 1); bus_write16(_ea, _tmp); }
    M68K_ASR8(g_m68k.d[5], 0x2);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_ROL32(g_m68k.d[3], g_m68k.d[1]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $01588A-$015892  (3 instructions, 8 bytes) */
void jt_01588A(void) {
    M68K_OR8(g_m68k.d[4], 0x8);
    M68K_LSR8(g_m68k.d[5], 0x2);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $01590E-$015916  (3 instructions, 8 bytes) */
void jt_01590E(void) {
    M68K_OR8(g_m68k.d[4], 0x8);
    M68K_LSR8(g_m68k.d[5], 0x2);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $015992-$01599E  (5 instructions, 12 bytes) */
void jt_015992(void) {
    M68K_OR8(g_m68k.d[4], 0x8);
    M68K_ROL32(g_m68k.d[0], g_m68k.d[1]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_ROL32(g_m68k.d[7], g_m68k.d[1]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $015A16-$015A1E  (3 instructions, 8 bytes) */
void jt_015A16(void) {
    M68K_OR8(g_m68k.d[4], 0x8);
    M68K_LSR8(g_m68k.d[5], 0x2);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $015A9A-$015AA6  (5 instructions, 12 bytes) */
void jt_015A9A(void) {
    M68K_OR8(g_m68k.d[4], 0x8);
    M68K_ROL32(g_m68k.d[0], g_m68k.d[1]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_ROL32(g_m68k.d[7], g_m68k.d[1]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $015B1E-$015B2A  (5 instructions, 12 bytes) */
void jt_015B1E(void) {
    M68K_OR8(g_m68k.d[4], 0x8);
    M68K_ROL32(g_m68k.d[0], g_m68k.d[1]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_ROL32(g_m68k.d[7], g_m68k.d[1]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $015C16-$015C20  (2 instructions, 10 bytes) */
void sub_015C16(void) {
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(0x1011FA, _mv); M68K_TST16(_mv); }
    return;
}

/* $015C20-$015C9C  (22 instructions, 124 bytes) */
void sub_015C20(void) {
    func_table_call(0x000A26);
    func_table_call(0x0120E0);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    func_table_call(0x011F22);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    func_table_call(0x015E9E); /* loc_015E9E */
    { uint32_t _mv = (uint32_t)(0xff900000); bus_write32(0x10331A, _mv); M68K_TST32(_mv); }
    { uint16_t _mv = (uint16_t)(0x4b0); bus_write16(0x103324, _mv); M68K_TST16(_mv); }
    { uint8_t _mv = (uint8_t)(0x3b); bus_write8(0x103326, _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(0x2); bus_write8(0x103327, _mv); M68K_TST8(_mv); }
    bus_write8(0x103328, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint16_t _mv = (uint16_t)(0x14a); bus_write16(0x10331E, _mv); M68K_TST16(_mv); }
    { uint8_t _mv = (uint8_t)(0xf); bus_write8(0x103329, _mv); M68K_TST8(_mv); }
    bus_write32(0x10332A, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    bus_write16(0x10332E, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    bus_write8(0x103330, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    func_table_call(0x015DCA); /* loc_015DCA */
    func_table_call(0x016196); /* loc_016196 */
    func_table_call(0x01615A); /* loc_01615A */
    func_table_call(0x01229E);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $015C9C-$015CB6  (8 instructions, 26 bytes) */
void sub_015C9C(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(0x103330))); M68K_TST8((uint8_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[0] = bus_read32(0x15cb6 + (int16_t)(uint16_t)g_m68k.d[0]);
    func_table_call(g_m68k.a[0]);
    func_table_call(0x01229E);
    return;
}

/* $015CD6-$015CF0  (7 instructions, 26 bytes) */
void jt_015CD6(void) {
    func_table_call(0x0162D4); /* loc_0162D4 */
    func_table_call(0x0163F2); /* loc_0163F2 */
    func_table_call(0x015E22); /* loc_015E22 */
    func_table_call(0x016554); /* loc_016554 */
    func_table_call(0x016590); /* loc_016590 */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $015CF0-$015D0A  (7 instructions, 26 bytes) */
void jt_015CF0(void) {
    func_table_call(0x0162D4); /* loc_0162D4 */
    func_table_call(0x0161CC); /* loc_0161CC */
    func_table_call(0x0163F2); /* loc_0163F2 */
    func_table_call(0x016554); /* loc_016554 */
    func_table_call(0x016590); /* loc_016590 */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $015D0A-$015D38  (11 instructions, 46 bytes) */
void jt_015D0A(void) {
    { uint32_t _ea = 0x103324; uint16_t _tmp = bus_read16(_ea); M68K_SUB16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    func_table_call(0x0162D4); /* loc_0162D4 */
    func_table_call(0x01632A); /* loc_01632A */
    func_table_call(0x0163F2); /* loc_0163F2 */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1011FA))); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x0163BE); /* loc_0163BE */
    func_table_call(0x016224); /* loc_016224 */
    func_table_call(0x016554); /* loc_016554 */
    func_table_call(0x016590); /* loc_016590 */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $015D38-$015D60  (10 instructions, 40 bytes) */
void jt_015D38(void) {
    { uint32_t _ea = 0x103324; uint16_t _tmp = bus_read16(_ea); M68K_SUB16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    func_table_call(0x0162D4); /* loc_0162D4 */
    func_table_call(0x01632A); /* loc_01632A */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x3)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x0163BE); /* loc_0163BE */
    func_table_call(0x01666E); /* loc_01666E */
    func_table_call(0x016554); /* loc_016554 */
    func_table_call(0x016590); /* loc_016590 */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $015D60-$015D88  (10 instructions, 40 bytes) */
void jt_015D60(void) {
    { uint32_t _ea = 0x103324; uint16_t _tmp = bus_read16(_ea); M68K_SUB16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    func_table_call(0x0162D4); /* loc_0162D4 */
    func_table_call(0x01632A); /* loc_01632A */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x3)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x0163BE); /* loc_0163BE */
    func_table_call(0x0166E8); /* loc_0166E8 */
    func_table_call(0x016554); /* loc_016554 */
    func_table_call(0x016590); /* loc_016590 */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $015D88-$015DA6  (8 instructions, 30 bytes) */
void jt_015D88(void) {
    func_table_call(0x0162D4); /* loc_0162D4 */
    func_table_call(0x0165DA); /* loc_0165DA */
    func_table_call(0x016620); /* loc_016620 */
    func_table_call(0x0163F2); /* loc_0163F2 */
    func_table_call(0x016554); /* loc_016554 */
    func_table_call(0x016590); /* loc_016590 */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $015DA6-$015DC0  (7 instructions, 26 bytes) */
void jt_015DA6(void) {
    func_table_call(0x0162D4); /* loc_0162D4 */
    func_table_call(0x0163F2); /* loc_0163F2 */
    func_table_call(0x015E72); /* loc_015E72 */
    func_table_call(0x016554); /* loc_016554 */
    func_table_call(0x016590); /* loc_016590 */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $015DC0-$015EBA  (59 instructions, 250 bytes) */
void jt_015DC0(void) {
    func_table_call(0x015E02); /* loc_015E02 */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
loc_015DCA:
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[7]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    g_m68k.a[6] = 0x1032D6;
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(0x10)); M68K_TST16((uint16_t)g_m68k.d[7]);
loc_015DD8:
    func_table_call(0x012202);
    { uint32_t _mv = (uint32_t)(g_m68k.a[0]); bus_write32(g_m68k.a[6], _mv); g_m68k.a[6] += 4; M68K_TST32(_mv); }
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[7]; _cnt--; g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_015DD8; } }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    g_m68k.a[6] = 0x1032E6;
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(0xc)); M68K_TST16((uint16_t)g_m68k.d[7]);
loc_015DF0:
    g_m68k.a[0] = _postinc32(6);
    func_table_call(0x012286);
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[7]; _cnt--; g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_015DF0; } }
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[7] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
loc_015E02:
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[7]);
    g_m68k.a[6] = 0x1032D6;
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(0x10)); M68K_TST16((uint16_t)g_m68k.d[7]);
loc_015E10:
    g_m68k.a[0] = _postinc32(6);
    func_table_call(0x012252);
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[7]; _cnt--; g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_015E10; } }
    g_m68k.d[7] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
loc_015E22:
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[7]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    { uint32_t _ea = 0x103322; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0xc); bus_write16(_ea, _tmp); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x103322))); M68K_TST16((uint16_t)g_m68k.d[2]);
    M68K_CMP16(g_m68k.d[2], 0x100);
    if (M68K_CC_CS) goto loc_015E68;
    { uint8_t _mv = (uint8_t)(0x1); bus_write8(0x103330, _mv); M68K_TST8(_mv); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x100)); M68K_TST16((uint16_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(0x103322, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.a[6] = 0x103302;
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(0x2)); M68K_TST16((uint16_t)g_m68k.d[7]);
loc_015E5C:
    g_m68k.a[0] = _postinc32(6);
    func_table_call(0x012286);
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[7]; _cnt--; g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_015E5C; } }
loc_015E68:
    func_table_call(0x015E9E); /* loc_015E9E */
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[7] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
loc_015E72:
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]);
    { uint32_t _ea = 0x103322; uint16_t _tmp = bus_read16(_ea); M68K_SUB16(_tmp, 0x8); bus_write16(_ea, _tmp); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x103322))); M68K_TST16((uint16_t)g_m68k.d[2]);
    M68K_CMP16(g_m68k.d[2], 0x0);
    if (M68K_CC_GT) goto loc_015E94;
    { uint8_t _mv = (uint8_t)(0x7); bus_write8(0x103330, _mv); M68K_TST8(_mv); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
loc_015E94:
    func_table_call(0x015E9E); /* loc_015E9E */
    g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
loc_015E9E:
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x40)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0xe)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.a[3] = 0x15eba;
    func_table_call(0x012036);
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}

/* $016040-$016304  (98 instructions, 708 bytes) */
void jt_016040(void) {
    M68K_SUB8(g_m68k.d[4], 0xa);
    M68K_BTST(g_m68k.d[4], g_m68k.d[2]);
    M68K_BTST(g_m68k.d[6], g_m68k.d[5]);
    /* TODO $016048: movep.w $706(a4), d2  [05 0C 07 06] */
loc_01615A:
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1e)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0xf)); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x011AC6);
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
loc_016172:
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[7]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.a[6] = 0x1032D6;
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(0x10)); M68K_TST16((uint16_t)g_m68k.d[7]);
loc_016184:
    g_m68k.a[0] = _postinc32(6);
    func_table_call(0x012286);
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[7]; _cnt--; g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_016184; } }
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[7] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
loc_016196:
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[7]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    g_m68k.a[5] = 0x1032D6;
    g_m68k.a[6] = 0x016766;
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(0xa)); M68K_TST16((uint16_t)g_m68k.d[7]);
loc_0161AA:
    g_m68k.a[0] = _postinc32(5);
    func_table_call(0x01647E); /* loc_01647E */
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[7]; _cnt--; g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_0161AA; } }
    func_table_call(0x01632A); /* loc_01632A */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1011FA))); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x0163BE); /* loc_0163BE */
    func_table_call(0x0163F2); /* loc_0163F2 */
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[7] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
loc_0161CC:
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[7]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    { uint32_t _ea = 0x10331E; uint16_t _tmp = bus_read16(_ea); M68K_SUB16(_tmp, 0x8); bus_write16(_ea, _tmp); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_CMP16(bus_read16(0x10331E), 0xd0);
    if (M68K_CC_LS) goto loc_0161E8;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
loc_0161E8:
    g_m68k.a[6] = 0x10330E;
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(0x2)); M68K_TST16((uint16_t)g_m68k.d[7]);
loc_0161F2:
    g_m68k.a[0] = _postinc32(6);
    func_table_call(0x012286);
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[7]; _cnt--; g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_0161F2; } }
    M68K_CMP16(bus_read16(0x10331E), 0x30);
    if (M68K_CC_HI) goto loc_01621E;
    { uint16_t _mv = (uint16_t)(0x30); bus_write16(0x10331E, _mv); M68K_TST16(_mv); }
    { uint8_t _mv = (uint8_t)(0x2); bus_write8(0x103330, _mv); M68K_TST8(_mv); }
    func_table_call(0x016172); /* loc_016172 */
loc_01621E:
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[7] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
loc_016224:
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    M68K_CMP16(bus_read16(0x103324), 0x0);
    if (M68K_CC_LE) goto loc_0162BC;
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1011FA))); M68K_TST16((uint16_t)g_m68k.d[1]);
    func_table_call(0x011AE0);
    M68K_BTST(g_m68k.d[0], 0x2);
    if (M68K_CC_EQ) goto loc_01627A;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0xc4)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x015256);
    M68K_SUB16(g_m68k.d[1], 0x1);
    M68K_CMP16(g_m68k.d[1], 0x0);
    if (M68K_CC_GE) goto loc_016260;
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x2)); M68K_TST16((uint16_t)g_m68k.d[1]);
loc_016260:
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); bus_write16(0x1011FA, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x200); bus_write16(0x103320, _mv); M68K_TST16(_mv); }
    { uint8_t _mv = (uint8_t)(0x3); bus_write8(0x103330, _mv); M68K_TST8(_mv); }
    goto loc_0162CE;
loc_01627A:
    M68K_BTST(g_m68k.d[0], 0x3);
    if (M68K_CC_EQ) goto loc_0162B4;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0xc4)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x015256);
    M68K_ADD16(g_m68k.d[1], 0x1);
    M68K_CMP16(g_m68k.d[1], 0x2);
    if (M68K_CC_LS) goto loc_01629A;
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[1]);
loc_01629A:
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); bus_write16(0x1011FA, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x200); bus_write16(0x103320, _mv); M68K_TST16(_mv); }
    { uint8_t _mv = (uint8_t)(0x4); bus_write8(0x103330, _mv); M68K_TST8(_mv); }
    goto loc_0162CE;
loc_0162B4:
    M68K_BTST(g_m68k.d[0], 0x4);
    if (M68K_CC_EQ) goto loc_0162CE;
loc_0162BC:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0xc5)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x015256);
    { uint8_t _mv = (uint8_t)(0x5); bus_write8(0x103330, _mv); M68K_TST8(_mv); }
loc_0162CE:
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
loc_0162D4:
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[7]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    g_m68k.d[0] = bus_read32(0x10331A); M68K_TST32((uint32_t)g_m68k.d[0]);
    M68K_ADD32(g_m68k.d[0], 0xaa7e);
    M68K_SWAP(g_m68k.d[0]);
    M68K_CMP16(g_m68k.d[0], 0x150);
    if (M68K_CC_LT) goto loc_0162F4;
    M68K_SUB16(g_m68k.d[0], 0x1c0);
loc_0162F4:
    M68K_SWAP(g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); bus_write32(0x10331A, _mv); M68K_TST32(_mv); }
    M68K_SWAP(g_m68k.d[0]);
    g_m68k.a[6] = 0x1032D6;
    /* WARNING: function did not end with RTS */
}

/* $016300-$016604  (186 instructions, 772 bytes) */
void jt_016300(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xd6); bus_write8(_ea, _tmp); }
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(0x3)); M68K_TST16((uint16_t)g_m68k.d[7]);
loc_016308:
    g_m68k.a[0] = _postinc32(6);
    M68K_CMP16(g_m68k.d[0], 0x150);
    if (M68K_CC_LT) goto loc_016316;
    M68K_SUB16(g_m68k.d[0], 0x1c0);
loc_016316:
    func_table_call(0x01225C);
    M68K_ADD16(g_m68k.d[0], 0x70);
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[7]; _cnt--; g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_016308; } }
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[7] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
loc_01632A:
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[7]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    M68K_CMP16(bus_read16(0x103324), 0x0);
    if (M68K_CC_MI) goto loc_01636E;
    { uint32_t _ea = 0x103326; uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, 0x1); bus_write8(_ea, _tmp); }
    if (M68K_CC_PL) goto loc_01636E;
    { uint8_t _mv = (uint8_t)(0x3b); bus_write8(0x103326, _mv); M68K_TST8(_mv); }
    { uint32_t _ea = 0x103328; uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, 0x1); bus_write8(_ea, _tmp); }
    if (M68K_CC_PL) goto loc_01636E;
    { uint8_t _mv = (uint8_t)(0x9); bus_write8(0x103328, _mv); M68K_TST8(_mv); }
    { uint32_t _ea = 0x103327; uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, 0x1); bus_write8(_ea, _tmp); }
    if (M68K_CC_PL) goto loc_01636E;
    bus_write8(0x103327, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
loc_01636E:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    g_m68k.a[6] = 0x1032F6;
    g_m68k.a[5] = 0x103327;
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[7]);
loc_016380:
    g_m68k.a[0] = _postinc32(6);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(5))); M68K_TST8((uint8_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[3] = (0x163aa + (int16_t)(uint16_t)g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[3]))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[3] = bus_read32(0x080010);
    g_m68k.a[3] = bus_read32(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    func_table_call(0x012270);
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[7]; _cnt--; g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_016380; } }
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[7] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
loc_0163BE:
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[0] = bus_read32(0x1032FE);
    g_m68k.a[6] = (0x163ea + (int16_t)(uint16_t)g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6]))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[3] = bus_read32(0x080010);
    g_m68k.a[3] = bus_read32(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    func_table_call(0x012270);
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
loc_0163F2:
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1011FA))); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x01640A); /* loc_01640A */
    func_table_call(0x016444); /* loc_016444 */
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
loc_01640A:
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    g_m68k.a[0] = bus_read32(0x103302);
    g_m68k.a[6] = 0x0167BE;
    func_table_call(0x0164B0); /* loc_0164B0 */
    g_m68k.a[0] = bus_read32(0x103306);
    g_m68k.a[6] = 0x0167EE;
    func_table_call(0x0164B0); /* loc_0164B0 */
    g_m68k.a[0] = bus_read32(0x10330A);
    g_m68k.a[6] = 0x01681E;
    func_table_call(0x0164FC); /* loc_0164FC */
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
loc_016444:
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    g_m68k.a[0] = bus_read32(0x10330E);
    g_m68k.a[6] = 0x0167D6;
    func_table_call(0x0164B0); /* loc_0164B0 */
    g_m68k.a[0] = bus_read32(0x103312);
    g_m68k.a[6] = 0x016806;
    func_table_call(0x0164B0); /* loc_0164B0 */
    g_m68k.a[0] = bus_read32(0x103316);
    g_m68k.a[6] = 0x016896;
    func_table_call(0x0164FC); /* loc_0164FC */
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
loc_01647E:
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(_postinc16(6))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[3] = bus_read32(0x080010);
    g_m68k.a[3] = bus_read32(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    func_table_call(0x012270);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(_postinc16(6))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(_postinc16(6))); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x01225C);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(_postinc16(6))); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x012256);
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
loc_0164B0:
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    M68K_LSL16(g_m68k.d[0], 0x3);
    g_m68k.a[6] = (g_m68k.a[6] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(_postinc16(6))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[3] = bus_read32(0x080010);
    g_m68k.a[3] = bus_read32(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    func_table_call(0x012270);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x10331E))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], _postinc16(6));
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(_postinc16(6))); M68K_TST16((uint16_t)g_m68k.d[2]);
    M68K_CMP8(bus_read8(0x10332B), 0x0);
    if (M68K_CC_EQ) goto loc_0164E8;
    M68K_SUB16(g_m68k.d[2], 0x1);
loc_0164E8:
    func_table_call(0x01225C);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6]))); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x012256);
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
loc_0164FC:
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[2]);
    M68K_LSL16(g_m68k.d[2], 0x3);
    M68K_LSL16(g_m68k.d[0], 0x5);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[2]);
    g_m68k.a[6] = (g_m68k.a[6] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(0x10332C))); M68K_TST8((uint8_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[2]);
    M68K_LSL16(g_m68k.d[0], 0x3);
    M68K_ADD16(g_m68k.d[2], g_m68k.d[2]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[2]);
    g_m68k.a[6] = (g_m68k.a[6] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(_postinc16(6))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[3] = bus_read32(0x080010);
    g_m68k.a[3] = bus_read32(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    func_table_call(0x012270);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(_postinc16(6))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], bus_read16(0x10331E));
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(_postinc16(6))); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x01225C);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6]))); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x012256);
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
loc_016554:
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(0x10332E))); M68K_TST8((uint8_t)g_m68k.d[0]);
    M68K_CMP8(g_m68k.d[0], 0x0);
    if (M68K_CC_GT) goto loc_016582;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(0x10332B))); M68K_TST8((uint8_t)g_m68k.d[0]);
    M68K_ADD8(g_m68k.d[0], 0x1);
    M68K_CMP8(g_m68k.d[0], 0x2);
    if (M68K_CC_CS) goto loc_016578;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
loc_016578:
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); bus_write8(0x10332B, _mv); M68K_TST8(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0x2)); M68K_TST8((uint8_t)g_m68k.d[0]);
loc_016582:
    M68K_SUB8(g_m68k.d[0], 0x1);
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); bus_write8(0x10332E, _mv); M68K_TST8(_mv); }
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
loc_016590:
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(0x10332F))); M68K_TST8((uint8_t)g_m68k.d[0]);
    M68K_CMP8(g_m68k.d[0], 0x0);
    if (M68K_CC_GT) goto loc_0165CC;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(0x10332C))); M68K_TST8((uint8_t)g_m68k.d[0]);
    M68K_ADD8(g_m68k.d[0], 0x1);
    M68K_CMP8(g_m68k.d[0], 0x4);
    if (M68K_CC_CS) goto loc_0165B4;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
loc_0165B4:
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); bus_write8(0x10332C, _mv); M68K_TST8(_mv); }
    M68K_MULU(g_m68k.d[0], 0xa);
    g_m68k.a[6] = 0x01681E;
    g_m68k.a[6] = (g_m68k.a[6] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x8))); M68K_TST16((uint16_t)g_m68k.d[0]);
loc_0165CC:
    M68K_SUB8(g_m68k.d[0], 0x1);
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); bus_write8(0x10332F, _mv); M68K_TST8(_mv); }
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
loc_0165DA:
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(0x10332A))); M68K_TST8((uint8_t)g_m68k.d[0]);
    M68K_CMP8(g_m68k.d[0], 0x0);
    if (M68K_CC_GT) { func_table_call(0x016612); return; }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(0x10332D))); M68K_TST8((uint8_t)g_m68k.d[0]);
    M68K_ADD8(g_m68k.d[0], 0x1);
    M68K_CMP8(g_m68k.d[0], 0x2);
    if (M68K_CC_CS) goto loc_0165FE;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
loc_0165FE:
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); bus_write8(0x10332D, _mv); M68K_TST8(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $016600-$016704  (55 instructions, 260 bytes) */
void jt_016600(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x2d); bus_write8(_ea, _tmp); }
    M68K_LSL16(g_m68k.d[0], 0x2);
    g_m68k.a[6] = 0x16666;
    g_m68k.a[6] = (g_m68k.a[6] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x2))); M68K_TST16((uint16_t)g_m68k.d[0]);
loc_016612:
    M68K_SUB8(g_m68k.d[0], 0x1);
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); bus_write8(0x10332A, _mv); M68K_TST8(_mv); }
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
loc_016620:
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[7]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    { uint32_t _ea = 0x103329; uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, 0x1); bus_write8(_ea, _tmp); }
    if (M68K_CC_EQ) goto loc_016658;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(0x10332D))); M68K_TST8((uint8_t)g_m68k.d[0]);
    M68K_LSL16(g_m68k.d[0], 0x2);
    g_m68k.a[6] = (0x16666 + (int16_t)(uint16_t)g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6]))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.a[6] = 0x103302;
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(0x5)); M68K_TST16((uint16_t)g_m68k.d[7]);
loc_016648:
    g_m68k.a[0] = _postinc32(6);
    func_table_call(0x012280);
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[7]; _cnt--; g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_016648; } }
    goto loc_016660;
loc_016658:
    { uint8_t _mv = (uint8_t)(0x6); bus_write8(0x103330, _mv); M68K_TST8(_mv); }
loc_016660:
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[7] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
loc_01666E:
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    { uint32_t _ea = 0x103320; uint16_t _tmp = bus_read16(_ea); M68K_SUB16(_tmp, 0x20); bus_write16(_ea, _tmp); }
    { uint32_t _ea = 0x10331E; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0x20); bus_write16(_ea, _tmp); }
    M68K_CMP16(bus_read16(0x103320), 0x0);
    if (M68K_CC_GT) goto loc_01669E;
    { uint16_t _mv = (uint16_t)(0x30); bus_write16(0x10331E, _mv); M68K_TST16(_mv); }
    { uint8_t _mv = (uint8_t)(0x2); bus_write8(0x103330, _mv); M68K_TST8(_mv); }
loc_01669E:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1011FA))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_CMP16(bus_read16(0x103320), 0x160);
    if (M68K_CC_LT) goto loc_0166BC;
    M68K_ADD16(g_m68k.d[0], 0x1);
    M68K_CMP16(g_m68k.d[0], 0x2);
    if (M68K_CC_LS) goto loc_0166BC;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
loc_0166BC:
    func_table_call(0x016444); /* loc_016444 */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1011FA))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_CMP16(bus_read16(0x103320), 0xf0);
    if (M68K_CC_LT) goto loc_0166DE;
    M68K_ADD16(g_m68k.d[0], 0x1);
    M68K_CMP16(g_m68k.d[0], 0x2);
    if (M68K_CC_LS) goto loc_0166DE;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
loc_0166DE:
    func_table_call(0x01640A); /* loc_01640A */
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
loc_0166E8:
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    { uint32_t _ea = 0x103320; uint16_t _tmp = bus_read16(_ea); M68K_SUB16(_tmp, 0x20); bus_write16(_ea, _tmp); }
    { uint32_t _ea = 0x10331E; uint16_t _tmp = bus_read16(_ea); M68K_SUB16(_tmp, 0x20); bus_write16(_ea, _tmp); }
    M68K_CMP16(bus_read16(0x103320), 0x0);
    /* WARNING: function did not end with RTS */
}

/* $016700-$016766  (22 instructions, 102 bytes) */
void jt_016700(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x20); bus_write8(_ea, _tmp); }
    if (M68K_CC_GT) goto loc_016718;
    { uint16_t _mv = (uint16_t)(0x30); bus_write16(0x10331E, _mv); M68K_TST16(_mv); }
    { uint8_t _mv = (uint8_t)(0x2); bus_write8(0x103330, _mv); M68K_TST8(_mv); }
loc_016718:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1011FA))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_CMP16(bus_read16(0x103320), 0x160);
    if (M68K_CC_LT) goto loc_016738;
    M68K_SUB16(g_m68k.d[0], 0x1);
    M68K_CMP16(g_m68k.d[0], 0x0);
    if (M68K_CC_GE) goto loc_016738;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x2)); M68K_TST16((uint16_t)g_m68k.d[0]);
loc_016738:
    func_table_call(0x01640A); /* loc_01640A */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1011FA))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_CMP16(bus_read16(0x103320), 0xf0);
    if (M68K_CC_LT) goto loc_01675C;
    M68K_SUB16(g_m68k.d[0], 0x1);
    M68K_CMP16(g_m68k.d[0], 0x0);
    if (M68K_CC_GE) goto loc_01675C;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x2)); M68K_TST16((uint16_t)g_m68k.d[0]);
loc_01675C:
    func_table_call(0x016444); /* loc_016444 */
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}

/* $01690E-$016932  (12 instructions, 36 bytes) */
void sub_01690E(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    g_m68k.a[1] = 0x02A3B4;
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[1] = bus_read32(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
loc_016920:
    M68K_TST32(bus_read32(g_m68k.a[1]));
    if (M68K_CC_EQ) goto loc_01692C;
    g_m68k.a[3] = _postinc32(1);
    func_table_call(0x16932);
    goto loc_016920;
loc_01692C:
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}

/* $016932-$016950  (8 instructions, 30 bytes) */
void sub_016932(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[3]))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[3] + 0x2))); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x100)); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.a[3] = (g_m68k.a[3] + 0x4);
    func_table_call(0x012036);
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}

/* $016950-$01696C  (7 instructions, 28 bytes) */
void sub_016950(void) {
    g_m68k.a[5] = 0x1034B6;
    g_m68k.a[0] = 0x103340;
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(0x6)); M68K_TST16((uint16_t)g_m68k.d[7]);
loc_016960:
    g_m68k.a[1] = _postinc32(0);
    { uint32_t _mv = (uint32_t)(_postinc32(5)); bus_write32(g_m68k.a[1] + 0x1c, _mv); M68K_TST32(_mv); }
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[7]; _cnt--; g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_016960; } }
    return;
}

/* $01696C-$0169A8  (12 instructions, 60 bytes) */
void sub_01696C(void) {
    g_m68k.a[5] = 0x10349C;
    { uint16_t _mv = (uint16_t)(bus_read16(0x101202)); bus_write16(g_m68k.a[5] + 0x18, _mv); M68K_TST16(_mv); }
    g_m68k.a[5] = (g_m68k.a[5] + 0x1a);
    g_m68k.a[0] = 0x103340;
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x101202))); M68K_TST16((uint16_t)g_m68k.d[7]);
loc_01698A:
    g_m68k.a[1] = _postinc32(0);
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[1] + 0x1c)); bus_write32(g_m68k.a[5], _mv); g_m68k.a[5] += 4; M68K_TST32(_mv); }
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[7]; _cnt--; g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_01698A; } }
    g_m68k.a[0] = 0x1011FE;
    g_m68k.a[1] = 0x1034B0;
    func_table_call(0x011A02);
    return;
}

/* $0169A8-$0169C4  (7 instructions, 28 bytes) */
void sub_0169A8(void) {
    g_m68k.a[0] = 0x103340;
    g_m68k.a[1] = 0x10335C;
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(0x6)); M68K_TST16((uint16_t)g_m68k.d[7]);
loc_0169B8:
    { uint32_t _mv = (uint32_t)(g_m68k.a[1]); bus_write32(g_m68k.a[0], _mv); g_m68k.a[0] += 4; M68K_TST32(_mv); }
    g_m68k.a[1] = (g_m68k.a[1] + 0x22);
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[7]; _cnt--; g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_0169B8; } }
    return;
}

/* $0169C4-$016A44  (31 instructions, 128 bytes) */
void sub_0169C4(void) {
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(0x103332, _mv); M68K_TST16(_mv); }
    g_m68k.a[1] = 0x103340;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x101202))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[1] = bus_read32(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(0x10)); M68K_TST16((uint16_t)g_m68k.d[7]);
loc_0169E4:
    bus_write16(g_m68k.a[1], 0); g_m68k.a[1] += 2; g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[7]; _cnt--; g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_0169E4; } }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x101506))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.a[1] = 0x02DEB4;
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1011F8))); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_ADD16(g_m68k.d[1], g_m68k.d[1]);
    M68K_ADD16(g_m68k.d[1], g_m68k.d[1]);
    g_m68k.a[1] = bus_read32(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[1]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[1] = bus_read32(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[1] + 0x0)); bus_write32(0x103338, _mv); M68K_TST32(_mv); }
    g_m68k.a[0] = bus_read32(g_m68k.a[1] + 0x4);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x101202))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[0] = bus_read32(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    g_m68k.a[1] = 0x10344A;
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(0xd)); M68K_TST16((uint16_t)g_m68k.d[7]);
loc_016A30:
    { uint16_t _mv = (uint16_t)(_postinc16(0)); bus_write16(g_m68k.a[1], _mv); g_m68k.a[1] += 2; M68K_TST16(_mv); }
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[7]; _cnt--; g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_016A30; } }
    g_m68k.d[0] = bus_read32(0x10344A); M68K_TST32((uint32_t)g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); bus_write32(0x103334, _mv); M68K_TST32(_mv); }
    return;
}

/* $016A44-$016AA8  (22 instructions, 100 bytes) */
void sub_016A44(void) {
    g_m68k.a[0] = 0x103340;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x101202))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[0] = bus_read32(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x101502))); M68K_TST16((uint16_t)g_m68k.d[2]);
    M68K_ADD16(g_m68k.d[2], g_m68k.d[2]);
    M68K_ADD16(g_m68k.d[2], g_m68k.d[2]);
    g_m68k.d[1] = bus_read32(0x103338); M68K_TST32((uint32_t)g_m68k.d[1]);
    { uint32_t _ea = (g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[2]); uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[0] + 0x1c); uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[0] + 0x1c)); bus_write32(0x10333C, _mv); M68K_TST32(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[1] = bus_read32(0x103338); M68K_TST32((uint32_t)g_m68k.d[1]);
    { uint32_t _ea = 0x103334; uint32_t _tmp = bus_read32(_ea); M68K_SUB32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    M68K_TST32(bus_read32(0x103334));
    if (M68K_CC_GT) goto loc_016A98;
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(0x103332, _mv); M68K_TST16(_mv); }
loc_016A98:
    M68K_CMP16(bus_read16(0x103334), 0xfb50);
    if (M68K_CC_GT) goto loc_016AA6;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0xffff)); M68K_TST16((uint16_t)g_m68k.d[0]);
loc_016AA6:
    return;
}

/* $016AA8-$016AC4  (7 instructions, 28 bytes) */
void sub_016AA8(void) {
    g_m68k.a[0] = 0x10344A;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x101502))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.d[0] = bus_read32(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0]); M68K_TST32((uint32_t)g_m68k.d[0]);
    { uint32_t _ea = 0x103334; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[0]); bus_write32(_ea, _tmp); }
    return;
}

/* $016AC4-$016AE8  (10 instructions, 36 bytes) */
void sub_016AC4(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]);
    g_m68k.d[0] = (uint32_t)(int32_t)(int8_t)(0x0); M68K_TST32(g_m68k.d[0]);
    g_m68k.a[0] = 0x103340;
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(0x6)); M68K_TST16((uint16_t)g_m68k.d[7]);
loc_016AD4:
    g_m68k.a[1] = bus_read32(g_m68k.a[0]);
    M68K_ADD32(g_m68k.d[0], bus_read32(g_m68k.a[1] + 0x1c));
    g_m68k.a[0] = (g_m68k.a[0] + 0x4);
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[7]; _cnt--; g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_016AD4; } }
    g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}

/* $016AE8-$016B2A  (18 instructions, 66 bytes) */
void sub_016AE8(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]);
    g_m68k.a[0] = 0x103340;
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[0] = bus_read32(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    g_m68k.d[0] = bus_read32(g_m68k.a[0] + 0x1c); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
loc_016B04:
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[1] + 0x10, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[1] + 0x12, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); bus_write16(g_m68k.a[1] + 0x14, _mv); M68K_TST16(_mv); }
    M68K_ADD16(g_m68k.d[3], g_m68k.d[3]);
    M68K_ADD16(g_m68k.d[3], g_m68k.d[3]);
    g_m68k.a[3] = bus_read32(0x08000C);
    g_m68k.a[3] = bus_read32(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[3]);
    g_m68k.a[0] = bus_read32(g_m68k.a[1] + 0x8);
    func_table_call(0x012270);
    return;
}

/* $016B2A-$016B2C  (1 instructions, 2 bytes) */
void jt_016B2A(void) {
    return;
}

/* $016B2C-$016B4C  (8 instructions, 32 bytes) */
void jt_016B2C(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[1] + 0x10))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[1] + 0x12))); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[1] + 0x14))); M68K_TST16((uint16_t)g_m68k.d[1]);
    { func_table_call(0x0141AA); return; }
loc_016B3E:
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[1] + 0x10, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[1] + 0x12, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[3]); bus_write16(g_m68k.a[1] + 0x14, _mv); M68K_TST16(_mv); }
    return;
}

/* $016B4C-$016B4E  (1 instructions, 2 bytes) */
void jt_016B4C(void) {
    return;
}

/* $016B4E-$016B9A  (20 instructions, 76 bytes) */
void jt_016B4E(void) {
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[1] + 0x16))); M68K_TST16((uint16_t)g_m68k.d[3]);
    M68K_ADD16(g_m68k.d[3], 0x1);
    { uint16_t _mv = (uint16_t)(g_m68k.d[3]); bus_write16(g_m68k.a[1] + 0x16, _mv); M68K_TST16(_mv); }
    M68K_LSR16(g_m68k.d[3], 0x3);
    M68K_AND16(g_m68k.d[3], 0x1);
    M68K_ADD16(g_m68k.d[3], bus_read16(g_m68k.a[1] + 0x14));
    M68K_ADD16(g_m68k.d[3], g_m68k.d[3]);
    M68K_ADD16(g_m68k.d[3], g_m68k.d[3]);
    g_m68k.a[3] = bus_read32(0x08000C);
    g_m68k.a[3] = bus_read32(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[3]);
    g_m68k.a[0] = bus_read32(g_m68k.a[1] + 0x8);
    func_table_call(0x012270);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[1] + 0x10))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[1] + 0x12))); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[1]);
    { func_table_call(0x0141AA); return; }
loc_016B8C:
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[1] + 0x10, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[1] + 0x12, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[3]); bus_write16(g_m68k.a[1] + 0x14, _mv); M68K_TST16(_mv); }
    return;
}

/* $016B9A-$016B9C  (1 instructions, 2 bytes) */
void jt_016B9A(void) {
    return;
}

/* $016B9C-$016BF0  (24 instructions, 84 bytes) */
void jt_016B9C(void) {
    g_m68k.d[3] = 0; g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[1] + 0x16))); M68K_TST16((uint16_t)g_m68k.d[3]);
    M68K_ADD16(g_m68k.d[3], 0x1);
    { uint16_t _mv = (uint16_t)(g_m68k.d[3]); bus_write16(g_m68k.a[1] + 0x16, _mv); M68K_TST16(_mv); }
    M68K_LSR16(g_m68k.d[3], 0x1);
    M68K_DIVU(g_m68k.d[3], 0x6);
    M68K_SWAP(g_m68k.d[3]);
    M68K_CMP16(g_m68k.d[3], 0x4);
    if (M68K_CC_CS) goto loc_016BBC;
    M68K_NEG16(g_m68k.d[3]);
    M68K_ADD16(g_m68k.d[3], 0x6);
loc_016BBC:
    M68K_ADD16(g_m68k.d[3], bus_read16(g_m68k.a[1] + 0x14));
    M68K_ADD16(g_m68k.d[3], g_m68k.d[3]);
    M68K_ADD16(g_m68k.d[3], g_m68k.d[3]);
    g_m68k.a[3] = bus_read32(0x08000C);
    g_m68k.a[3] = bus_read32(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[3]);
    g_m68k.a[0] = bus_read32(g_m68k.a[1] + 0x8);
    func_table_call(0x012270);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[1] + 0x10))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[1] + 0x12))); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[1]);
    { func_table_call(0x0141AA); return; }
loc_016BEA:
    bus_write16(g_m68k.a[1] + 0x12, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    return;
}

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
