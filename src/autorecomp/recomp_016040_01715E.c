/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $016040 - $01715E */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

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
