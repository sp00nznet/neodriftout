/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $0114C6 - $0127FA */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

/* $0114C6-$011522  (30 instructions, 92 bytes) */
void sub_0114C6(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[1]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[5]))); M68K_TST16((uint16_t)g_m68k.d[0]);
    if (M68K_CC_GT) goto loc_0114E4;
    { uint32_t _ea = g_m68k.a[6]; uint16_t _tmp = bus_read16(_ea); M68K_SUB16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6]))); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_CMP16(g_m68k.d[1], 0xffff);
    if (M68K_CC_EQ) goto loc_0114F0;
    M68K_LSL16(g_m68k.d[1], 0x3);
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[1])); bus_write16(g_m68k.a[5], _mv); M68K_TST16(_mv); }
    goto loc_0114EA;
loc_0114E4:
    { uint32_t _ea = g_m68k.a[5]; uint16_t _tmp = bus_read16(_ea); M68K_SUB16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6]))); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_LSL16(g_m68k.d[1], 0x3);
loc_0114EA:
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[3]);
    goto loc_0114F8;
loc_0114F0:
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[3]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[1]);
loc_0114F8:
    g_m68k.a[0] = _postinc32(1);
    M68K_CMP32(g_m68k.a[0], 0x0);
    if (M68K_CC_EQ) goto loc_01151A;
    g_m68k.a[0] = bus_read32(g_m68k.a[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(_postinc16(1))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(_postinc16(1))); M68K_TST16((uint16_t)g_m68k.d[2]);
    M68K_ADD16(g_m68k.d[0], bus_read16(g_m68k.a[3] + 0x2 + (int16_t)(uint16_t)g_m68k.d[1]));
    M68K_ADD16(g_m68k.d[2], bus_read16(g_m68k.a[3] + 0x4 + (int16_t)(uint16_t)g_m68k.d[1]));
    func_table_call(0x01225C);
    goto loc_0114F8;
loc_01151A:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[3])); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}

/* $011522-$011548  (12 instructions, 38 bytes) */
void sub_011522(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[1]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x7)); M68K_TST16((uint16_t)g_m68k.d[2]);
loc_01152A:
    g_m68k.a[0] = _postinc32(5);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(1))); M68K_TST8((uint8_t)g_m68k.d[1]);
    M68K_ADD16(g_m68k.d[1], g_m68k.d[1]);
    M68K_ADD16(g_m68k.d[1], g_m68k.d[1]);
    g_m68k.a[3] = bus_read32(g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.d[1]);
    func_table_call(0x012270);
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[2]; _cnt--; g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_01152A; } }
    g_m68k.d[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}

/* $011548-$01154E  (2 instructions, 6 bytes) */
void sub_011548(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(0x11550 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST8((uint8_t)g_m68k.d[0]);
    return;
}

/* $011602-$011646  (12 instructions, 68 bytes) */
void sub_011602(void) {
    M68K_BTST(g_m68k.d[0], 0x0);
    if (M68K_CC_EQ) goto loc_01161C;
    { uint16_t _mv = (uint16_t)(0x23); bus_write16(0x1016F0, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(0x1016F6, _mv); M68K_TST16(_mv); }
    goto loc_01162C;
loc_01161C:
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(0x1016F0, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(0x1016F6, _mv); M68K_TST16(_mv); }
loc_01162C:
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); bus_write16(0x1016F4, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); bus_write16(0x1016F2, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(0x1016F8, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $011646-$011694  (18 instructions, 78 bytes) */
void sub_011646(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[1]);
    m68k_set_sr(m68k_get_sr() | 0x700);
    { uint16_t _mv = (uint16_t)(0x7000); bus_write16(0x3C0000, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(0x3C0004, _mv); M68K_TST16(_mv); }
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x4ff)); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_BTST(g_m68k.d[0], 0x0);
    if (M68K_CC_NE) goto loc_011670;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x4020)); M68K_TST16((uint16_t)g_m68k.d[0]);
    goto loc_011674;
loc_011670:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x40ff)); M68K_TST16((uint16_t)g_m68k.d[0]);
loc_011674:
    g_m68k.a[0] = 0x3C0002;
loc_01167A:
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[0], _mv); M68K_TST16(_mv); }
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[1]; _cnt--; g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_01167A; } }
    func_table_call(0x0118EA);
    m68k_set_sr(m68k_get_sr() & 0xf8ff);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}

/* $011694-$0117CA  (70 instructions, 310 bytes) */
void sub_011694(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[1]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1016F8))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_CMP16(g_m68k.d[0], 0x0);
    if (M68K_CC_EQ) goto loc_0117BA;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1016F2))); M68K_TST16((uint16_t)g_m68k.d[0]);
    if (M68K_CC_EQ) goto loc_0116BA;
    { uint32_t _ea = 0x1016F2; uint16_t _tmp = bus_read16(_ea); M68K_SUB16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    goto loc_0117B0;
loc_0116BA:
    { uint16_t _mv = (uint16_t)(bus_read16(0x1016F4)); bus_write16(0x1016F2, _mv); M68K_TST16(_mv); }
    m68k_set_sr(m68k_get_sr() | 0x700);
    { uint16_t _mv = (uint16_t)(0xffe1); bus_write16(0x3C0004, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1016F6))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_BTST(g_m68k.d[0], 0x0);
    if (M68K_CC_NE) goto loc_0116E6;
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(0x4020)); M68K_TST16((uint16_t)g_m68k.d[4]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    goto loc_0116EE;
loc_0116E6:
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(0x40ff)); M68K_TST16((uint16_t)g_m68k.d[4]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0xffff)); M68K_TST16((uint16_t)g_m68k.d[0]);
loc_0116EE:
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1016F0))); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[1])); M68K_TST16((uint16_t)g_m68k.d[2]);
    M68K_ADD16(g_m68k.d[1], g_m68k.d[0]);
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[5]);
    M68K_EXT32(g_m68k.d[5]);
    M68K_ADD32(g_m68k.d[5], g_m68k.d[5]);
    M68K_ADD32(g_m68k.d[5], g_m68k.d[5]);
    M68K_ADD16(g_m68k.d[2], g_m68k.d[2]);
    M68K_ADD16(g_m68k.d[2], g_m68k.d[2]);
    g_m68k.a[1] = 0x0117CA;
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[2])); bus_write16(0x3C0000, _mv); M68K_TST16(_mv); }
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[1] + 0x2 + (int16_t)(uint16_t)g_m68k.d[2]))); M68K_TST16((uint16_t)g_m68k.d[3]);
    g_m68k.a[0] = 0x3C0002;
loc_01171C:
    { uint16_t _mv = (uint16_t)(g_m68k.d[4]); bus_write16(g_m68k.a[0], _mv); M68K_TST16(_mv); }
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[3]; _cnt--; g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_01171C; } }
    g_m68k.a[1] += g_m68k.d[5];
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[2])); bus_write16(0x3C0000, _mv); M68K_TST16(_mv); }
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[1] + 0x2 + (int16_t)(uint16_t)g_m68k.d[2]))); M68K_TST16((uint16_t)g_m68k.d[3]);
    g_m68k.a[0] = 0x3C0002;
loc_011736:
    { uint16_t _mv = (uint16_t)(0x437f); bus_write16(g_m68k.a[0], _mv); M68K_TST16(_mv); }
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[3]; _cnt--; g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_011736; } }
    g_m68k.a[1] = 0x01185A;
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[2])); bus_write16(0x3C0000, _mv); M68K_TST16(_mv); }
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[1] + 0x2 + (int16_t)(uint16_t)g_m68k.d[2]))); M68K_TST16((uint16_t)g_m68k.d[3]);
    g_m68k.a[0] = 0x3C0002;
loc_011756:
    { uint16_t _mv = (uint16_t)(g_m68k.d[4]); bus_write16(g_m68k.a[0], _mv); M68K_TST16(_mv); }
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[3]; _cnt--; g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_011756; } }
    g_m68k.a[1] += g_m68k.d[5];
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[2])); bus_write16(0x3C0000, _mv); M68K_TST16(_mv); }
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[1] + 0x2 + (int16_t)(uint16_t)g_m68k.d[2]))); M68K_TST16((uint16_t)g_m68k.d[3]);
    g_m68k.a[0] = 0x3C0002;
loc_011770:
    { uint16_t _mv = (uint16_t)(0x437b); bus_write16(g_m68k.a[0], _mv); M68K_TST16(_mv); }
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[3]; _cnt--; g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_011770; } }
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); bus_write16(0x1016F0, _mv); M68K_TST16(_mv); }
    if (M68K_CC_EQ) goto loc_0117A4;
    M68K_CMP16(g_m68k.d[1], 0x22);
    if (M68K_CC_LS) goto loc_0117B0;
    { uint16_t _mv = (uint16_t)(0x7460); bus_write16(0x3C0000, _mv); M68K_TST16(_mv); }
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0x1f)); M68K_TST16((uint16_t)g_m68k.d[3]);
    g_m68k.a[0] = 0x3C0002;
loc_01179C:
    { uint16_t _mv = (uint16_t)(0x4020); bus_write16(g_m68k.a[0], _mv); M68K_TST16(_mv); }
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[3]; _cnt--; g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_01179C; } }
loc_0117A4:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(0x1016F8, _mv); M68K_TST16(_mv); }
    goto loc_0117BA;
loc_0117B0:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(0x1016F8, _mv); M68K_TST16(_mv); }
loc_0117BA:
    func_table_call(0x0118EA);
    m68k_set_sr(m68k_get_sr() & 0xf8ff);
    g_m68k.d[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}

/* $0118A8-$0118EC  (17 instructions, 68 bytes) */
void jt_0118A8(void) {
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xeb); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xea); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[5]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xe9); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xe8); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xe7); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xe6); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xe5); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xe4); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xe3); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xe2); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[5]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xe1); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xe0); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xc0); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xa0); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x80); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x60); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xf9); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0118EA-$011932  (16 instructions, 72 bytes) */
void sub_0118EA(void) {
    g_m68k.a[0] = 0x3C0002;
    m68k_set_ccr(m68k_get_ccr() | 0x2);
    { uint16_t _mv = (uint16_t)(0x20); bus_write16(g_m68k.a[0] + 0x2, _mv); M68K_TST16(_mv); }
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x20)); M68K_TST16((uint16_t)g_m68k.d[1]);
    { uint16_t _mv = (uint16_t)(0x7020); bus_write16(g_m68k.a[0] + (-0x2), _mv); M68K_TST16(_mv); }
    func_table_call(0x11932);
    func_table_call(0x11932);
    { uint16_t _mv = (uint16_t)(0x703f); bus_write16(g_m68k.a[0] + (-0x2), _mv); M68K_TST16(_mv); }
    func_table_call(0x11932);
    func_table_call(0x11932);
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(g_m68k.a[0] + 0x2, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x7000); bus_write16(g_m68k.a[0] + (-0x2), _mv); M68K_TST16(_mv); }
    func_table_call(0x11980);
    { uint16_t _mv = (uint16_t)(0x74e0); bus_write16(g_m68k.a[0] + (-0x2), _mv); M68K_TST16(_mv); }
    func_table_call(0x11980);
    return;
}

/* $011932-$011980  (39 instructions, 78 bytes) */
void sub_011932(void) {
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); bus_write16(g_m68k.a[0], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); bus_write16(g_m68k.a[0], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); bus_write16(g_m68k.a[0], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); bus_write16(g_m68k.a[0], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); bus_write16(g_m68k.a[0], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); bus_write16(g_m68k.a[0], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); bus_write16(g_m68k.a[0], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); bus_write16(g_m68k.a[0], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); bus_write16(g_m68k.a[0], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); bus_write16(g_m68k.a[0], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); bus_write16(g_m68k.a[0], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); bus_write16(g_m68k.a[0], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); bus_write16(g_m68k.a[0], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); bus_write16(g_m68k.a[0], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); bus_write16(g_m68k.a[0], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); bus_write16(g_m68k.a[0], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); bus_write16(g_m68k.a[0], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); bus_write16(g_m68k.a[0], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); bus_write16(g_m68k.a[0], _mv); M68K_TST16(_mv); }
    /* nop */
    return;
}

/* $011980-$011A02  (65 instructions, 130 bytes) */
void sub_011980(void) {
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); bus_write16(g_m68k.a[0], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); bus_write16(g_m68k.a[0], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); bus_write16(g_m68k.a[0], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); bus_write16(g_m68k.a[0], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); bus_write16(g_m68k.a[0], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); bus_write16(g_m68k.a[0], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); bus_write16(g_m68k.a[0], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); bus_write16(g_m68k.a[0], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); bus_write16(g_m68k.a[0], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); bus_write16(g_m68k.a[0], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); bus_write16(g_m68k.a[0], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); bus_write16(g_m68k.a[0], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); bus_write16(g_m68k.a[0], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); bus_write16(g_m68k.a[0], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); bus_write16(g_m68k.a[0], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); bus_write16(g_m68k.a[0], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); bus_write16(g_m68k.a[0], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); bus_write16(g_m68k.a[0], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); bus_write16(g_m68k.a[0], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); bus_write16(g_m68k.a[0], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); bus_write16(g_m68k.a[0], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); bus_write16(g_m68k.a[0], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); bus_write16(g_m68k.a[0], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); bus_write16(g_m68k.a[0], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); bus_write16(g_m68k.a[0], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); bus_write16(g_m68k.a[0], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); bus_write16(g_m68k.a[0], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); bus_write16(g_m68k.a[0], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); bus_write16(g_m68k.a[0], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); bus_write16(g_m68k.a[0], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); bus_write16(g_m68k.a[0], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); bus_write16(g_m68k.a[0], _mv); M68K_TST16(_mv); }
    /* nop */
    return;
}

/* $011A02-$011A10  (5 instructions, 14 bytes) */
void sub_011A02(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]);
loc_011A06:
    { uint8_t _mv = (uint8_t)(_postinc8(0)); bus_write8(g_m68k.a[1], _mv); g_m68k.a[1] += 1; M68K_TST8(_mv); }
    if (M68K_CC_NE) goto loc_011A06;
    g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}

/* $011A10-$011A34  (14 instructions, 36 bytes) */
void sub_011A10(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]);
loc_011A14:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(0))); M68K_TST8((uint8_t)g_m68k.d[0]);
    M68K_CMP8(g_m68k.d[0], _postinc8(1));
    if (M68K_CC_EQ) goto loc_011A22;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0xffff)); M68K_TST16((uint16_t)g_m68k.d[0]);
    goto loc_011A2E;
    goto loc_011A2C;
loc_011A22:
    M68K_TST8(g_m68k.d[0]);
    if (M68K_CC_NE) goto loc_011A2C;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    goto loc_011A2E;
loc_011A2C:
    goto loc_011A14;
loc_011A2E:
    g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}

/* $011A34-$011A62  (15 instructions, 46 bytes) */
void sub_011A34(void) {
    g_m68k.a[1] = 0x3C0002;
    M68K_ROR16(g_m68k.d[1], 0x4);
    m68k_set_sr(m68k_get_sr() | 0x700);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[1] + (-0x2), _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x20); bus_write16(g_m68k.a[1] + 0x2, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(0))); M68K_TST8((uint8_t)g_m68k.d[0]);
loc_011A4C:
    if (M68K_CC_EQ) goto loc_011A5C;
    M68K_AND16(g_m68k.d[0], 0xff);
    M68K_OR16(g_m68k.d[0], g_m68k.d[1]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(0))); M68K_TST8((uint8_t)g_m68k.d[0]);
    goto loc_011A4C;
loc_011A5C:
    m68k_set_sr(m68k_get_sr() & 0xf8ff);
    return;
}

/* $011A62-$011AC6  (30 instructions, 100 bytes) */
void sub_011A62(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    g_m68k.a[2] = 0x3C0002;
    M68K_ROR16(g_m68k.d[1], 0x4);
    m68k_set_sr(m68k_get_sr() | 0x700);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2] + (-0x2), _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(0))); M68K_TST8((uint8_t)g_m68k.d[0]);
loc_011A78:
    if (M68K_CC_EQ) goto loc_011ABC;
    M68K_AND16(g_m68k.d[0], 0xff);
    M68K_LSL16(g_m68k.d[0], 0x3);
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(g_m68k.a[2] + 0x2, _mv); M68K_TST16(_mv); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST16((uint16_t)g_m68k.d[2]);
    M68K_OR16(g_m68k.d[2], g_m68k.d[1]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x1f); bus_write16(g_m68k.a[2] + 0x2, _mv); M68K_TST16(_mv); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[1] + 0x4 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST16((uint16_t)g_m68k.d[2]);
    M68K_OR16(g_m68k.d[2], g_m68k.d[1]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(g_m68k.a[2] + 0x2, _mv); M68K_TST16(_mv); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[1] + 0x2 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST16((uint16_t)g_m68k.d[2]);
    M68K_OR16(g_m68k.d[2], g_m68k.d[1]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x1f); bus_write16(g_m68k.a[2] + 0x2, _mv); M68K_TST16(_mv); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[1] + 0x6 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST16((uint16_t)g_m68k.d[2]);
    M68K_OR16(g_m68k.d[2], g_m68k.d[1]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(0))); M68K_TST8((uint8_t)g_m68k.d[0]);
    goto loc_011A78;
loc_011ABC:
    m68k_set_sr(m68k_get_sr() & 0xf8ff);
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}

/* $011AC6-$011AE0  (5 instructions, 26 bytes) */
void sub_011AC6(void) {
    bus_write16(0x1016FA, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    bus_write8(0x1016FC, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); bus_write8(0x1016FD, _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[2]); bus_write8(0x1016FE, _mv); M68K_TST8(_mv); }
    return;
}

/* $011AE0-$011B66  (30 instructions, 134 bytes) */
void sub_011AE0(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[1]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(0x10FD96))); M68K_TST8((uint8_t)g_m68k.d[1]);
    M68K_CMP16(bus_read16(0x1011FC), 0x0);
    if (M68K_CC_EQ) goto loc_011AFC;
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(0x10FD9C))); M68K_TST8((uint8_t)g_m68k.d[1]);
loc_011AFC:
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(0x1016FA))); M68K_TST8((uint8_t)g_m68k.d[3]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(0x1016FB))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint8_t _mv = (uint8_t)(g_m68k.d[1]); bus_write8(0x1016FB, _mv); M68K_TST8(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[1])); M68K_TST8((uint8_t)g_m68k.d[0]);
    M68K_AND8(g_m68k.d[1], 0xf);
    M68K_AND8(g_m68k.d[2], 0xf);
    M68K_CMP8(g_m68k.d[2], g_m68k.d[1]);
    if (M68K_CC_NE) goto loc_011B40;
    M68K_SUB8(g_m68k.d[3], 0x1);
    M68K_CMP8(g_m68k.d[3], bus_read8(0x1016FE));
    if (M68K_CC_EQ) goto loc_011B4C;
    if (M68K_CC_GT) goto loc_011B56;
    M68K_CMP8(g_m68k.d[3], 0x0);
    if (M68K_CC_GT) goto loc_011B56;
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(0x1016FE))); M68K_TST8((uint8_t)g_m68k.d[3]);
    goto loc_011B4C;
loc_011B40:
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(0x1016FD))); M68K_TST8((uint8_t)g_m68k.d[3]);
    M68K_ADD8(g_m68k.d[3], bus_read8(0x1016FE));
loc_011B4C:
    M68K_AND8(g_m68k.d[0], 0xf0);
    M68K_OR8(g_m68k.d[0], g_m68k.d[1]);
    goto loc_011B5A;
loc_011B56:
    M68K_AND8(g_m68k.d[0], 0xf0);
loc_011B5A:
    { uint8_t _mv = (uint8_t)(g_m68k.d[3]); bus_write8(0x1016FA, _mv); M68K_TST8(_mv); }
    g_m68k.d[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}

/* $011B96-$011BA8  (9 instructions, 18 bytes) */
void sub_011B96(void) {
    { uint32_t _mv = (uint32_t)(_postinc32(4)); bus_write32(g_m68k.a[5], _mv); g_m68k.a[5] += 4; M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_postinc32(4)); bus_write32(g_m68k.a[5], _mv); g_m68k.a[5] += 4; M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_postinc32(4)); bus_write32(g_m68k.a[5], _mv); g_m68k.a[5] += 4; M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_postinc32(4)); bus_write32(g_m68k.a[5], _mv); g_m68k.a[5] += 4; M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_postinc32(4)); bus_write32(g_m68k.a[5], _mv); g_m68k.a[5] += 4; M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_postinc32(4)); bus_write32(g_m68k.a[5], _mv); g_m68k.a[5] += 4; M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_postinc32(4)); bus_write32(g_m68k.a[5], _mv); g_m68k.a[5] += 4; M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_postinc32(4)); bus_write32(g_m68k.a[5], _mv); g_m68k.a[5] += 4; M68K_TST32(_mv); }
    return;
}

/* $011C68-$011CAA  (33 instructions, 66 bytes) */
void sub_011C68(void) {
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    return;
}

/* $011CAA-$011DAA  (128 instructions, 256 bytes) */
void sub_011CAA(void) {
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    /* WARNING: function did not end with RTS */
}

/* $011DAA-$011EAC  (129 instructions, 258 bytes) */
void sub_011DAA(void) {
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    return;
}

/* $011EAC-$011EEE  (33 instructions, 66 bytes) */
void sub_011EAC(void) {
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[3], _mv); g_m68k.a[3] += 2; M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[3], _mv); g_m68k.a[3] += 2; M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[3], _mv); g_m68k.a[3] += 2; M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[3], _mv); g_m68k.a[3] += 2; M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[3], _mv); g_m68k.a[3] += 2; M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[3], _mv); g_m68k.a[3] += 2; M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[3], _mv); g_m68k.a[3] += 2; M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[3], _mv); g_m68k.a[3] += 2; M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[3], _mv); g_m68k.a[3] += 2; M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[3], _mv); g_m68k.a[3] += 2; M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[3], _mv); g_m68k.a[3] += 2; M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[3], _mv); g_m68k.a[3] += 2; M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[3], _mv); g_m68k.a[3] += 2; M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[3], _mv); g_m68k.a[3] += 2; M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[3], _mv); g_m68k.a[3] += 2; M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[3], _mv); g_m68k.a[3] += 2; M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[3], _mv); g_m68k.a[3] += 2; M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[3], _mv); g_m68k.a[3] += 2; M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[3], _mv); g_m68k.a[3] += 2; M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[3], _mv); g_m68k.a[3] += 2; M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[3], _mv); g_m68k.a[3] += 2; M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[3], _mv); g_m68k.a[3] += 2; M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[3], _mv); g_m68k.a[3] += 2; M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[3], _mv); g_m68k.a[3] += 2; M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[3], _mv); g_m68k.a[3] += 2; M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[3], _mv); g_m68k.a[3] += 2; M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[3], _mv); g_m68k.a[3] += 2; M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[3], _mv); g_m68k.a[3] += 2; M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[3], _mv); g_m68k.a[3] += 2; M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[3], _mv); g_m68k.a[3] += 2; M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[3], _mv); g_m68k.a[3] += 2; M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[3], _mv); g_m68k.a[3] += 2; M68K_TST16(_mv); }
    return;
}

/* $011EEE-$011F22  (12 instructions, 52 bytes) */
void sub_011EEE(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[1]);
    g_m68k.a[5] = 0x101700;
    { uint32_t _mv = (uint32_t)(g_m68k.a[5]); bus_write32(0x101B14, _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(g_m68k.a[5]); bus_write32(0x101B18, _mv); M68K_TST32(_mv); }
    g_m68k.d[1] = (uint32_t)(int32_t)(int8_t)(0x1c); M68K_TST32(g_m68k.d[1]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x24)); M68K_TST16((uint16_t)g_m68k.d[2]);
loc_011F0A:
    bus_write32(g_m68k.a[5], 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    g_m68k.a[5] += (int16_t)(uint16_t)(g_m68k.d[2]);
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[1]; _cnt--; g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_011F0A; } }
    { uint32_t _mv = (uint32_t)(0x28a52); bus_write32(0x101B1C, _mv); M68K_TST32(_mv); }
    g_m68k.d[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}

/* $011F22-$011F3E  (7 instructions, 28 bytes) */
void sub_011F22(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    g_m68k.a[3] = 0x028A4A;
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[0])); bus_write32(0x101B1C, _mv); M68K_TST32(_mv); }
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}

/* $011F3E-$011F7C  (16 instructions, 62 bytes) */
void sub_011F3E(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    g_m68k.a[4] = bus_read32(0x101B18);
    g_m68k.d[2] = 0x101b14; M68K_TST32((uint32_t)g_m68k.d[2]);
loc_011F4E:
    g_m68k.d[0] = bus_read32(g_m68k.a[4]); M68K_TST32((uint32_t)g_m68k.d[0]);
    if (M68K_CC_EQ) goto loc_011F6A;
    bus_write32(g_m68k.a[4], 0); g_m68k.a[4] += 4; g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    g_m68k.a[5] = g_m68k.d[0];
    func_table_call(0x011B96);
    M68K_CMP32(g_m68k.a[4], g_m68k.d[2]);
    if (M68K_CC_NE) goto loc_011F4E;
    g_m68k.a[4] = 0x101700;
    goto loc_011F4E;
loc_011F6A:
    { uint32_t _mv = (uint32_t)(g_m68k.a[4]); bus_write32(0x101B18, _mv); M68K_TST32(_mv); }
    bus_write16(0x400000, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}

/* $012036-$0120E0  (55 instructions, 170 bytes) */
void sub_012036(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    M68K_AND16(g_m68k.d[2], 0xfff8);
    M68K_ADD16(g_m68k.d[2], g_m68k.d[2]);
    M68K_ADD16(g_m68k.d[2], g_m68k.d[2]);
    g_m68k.a[4] = bus_read32(0x101B1C);
    g_m68k.a[4] += (int16_t)(uint16_t)(g_m68k.d[2]);
    g_m68k.a[5] = bus_read32(0x101B14);
    g_m68k.d[5] = 0x101b14; M68K_TST32((uint32_t)g_m68k.d[5]);
    M68K_LSL16(g_m68k.d[0], 0x5);
    g_m68k.a[6] = 0x400000;
    g_m68k.a[6] += (int16_t)(uint16_t)(g_m68k.d[0]);
    g_m68k.d[6] = (uint32_t)(int32_t)(int8_t)(0x20); M68K_TST32(g_m68k.d[6]);
    g_m68k.d[4] = (uint32_t)(int32_t)(int8_t)(0x1f); M68K_TST32(g_m68k.d[4]);
    M68K_SUB16(g_m68k.d[1], 0x1);
loc_012066:
    M68K_TST32(bus_read32(g_m68k.a[5]));
    if (M68K_CC_NE) goto loc_012066;
    g_m68k.a[5] += 0x4;
    g_m68k.d[3] = (uint32_t)(int32_t)(int8_t)(0xf); M68K_TST32(g_m68k.d[3]);
loc_01206E:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(3))); M68K_TST8((uint8_t)g_m68k.d[0]);
    M68K_AND16(g_m68k.d[0], g_m68k.d[4]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST8((uint8_t)g_m68k.d[0]);
    M68K_EXT16(g_m68k.d[0]);
    M68K_LSL16(g_m68k.d[0], 0x7);
    M68K_BCLR(g_m68k.d[0], 0x7);
    if (M68K_CC_EQ) goto loc_012086;
    M68K_OR16(g_m68k.d[0], 0x4000);
loc_012086:
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(3))); M68K_TST8((uint8_t)g_m68k.d[0]);
    M68K_AND16(g_m68k.d[0], g_m68k.d[4]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST8((uint8_t)g_m68k.d[0]);
    M68K_EXT16(g_m68k.d[0]);
    M68K_LSL16(g_m68k.d[0], 0x3);
    M68K_BCLR(g_m68k.d[0], 0x3);
    if (M68K_CC_EQ) goto loc_0120A0;
    M68K_OR16(g_m68k.d[0], 0x2000);
loc_0120A0:
    M68K_OR16(g_m68k.d[2], g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(3))); M68K_TST8((uint8_t)g_m68k.d[0]);
    M68K_AND16(g_m68k.d[0], g_m68k.d[4]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST8((uint8_t)g_m68k.d[0]);
    M68K_EXT16(g_m68k.d[0]);
    M68K_LSR16(g_m68k.d[0], 0x1);
    if (M68K_CC_CC) goto loc_0120B6;
    M68K_OR16(g_m68k.d[0], 0x1000);
loc_0120B6:
    M68K_OR16(g_m68k.d[2], g_m68k.d[0]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[5], _mv); g_m68k.a[5] += 2; M68K_TST16(_mv); }
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[3]; _cnt--; g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_01206E; } }
    { uint32_t _mv = (uint32_t)(g_m68k.a[6]); bus_write32(g_m68k.a[5] + (-0x24), _mv); M68K_TST32(_mv); }
    g_m68k.a[6] += (int16_t)(uint16_t)(g_m68k.d[6]);
    M68K_CMP32(g_m68k.a[5], g_m68k.d[5]);
    if (M68K_CC_NE) goto loc_0120D0;
    g_m68k.a[5] = 0x101700;
loc_0120D0:
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[1]; _cnt--; g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_012066; } }
    { uint32_t _mv = (uint32_t)(g_m68k.a[5]); bus_write32(0x101B14, _mv); M68K_TST32(_mv); }
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}

/* $0120E0-$012188  (37 instructions, 168 bytes) */
void sub_0120E0(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    g_m68k.a[7] -= 2; bus_write16(g_m68k.a[7], m68k_get_sr());
    m68k_set_sr(m68k_get_sr() | 0x700);
    g_m68k.a[2] = 0x3C0002;
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(g_m68k.a[2] + 0x2, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2] + (-0x2), _mv); M68K_TST16(_mv); }
    func_table_call(0x011DAA);
    { uint16_t _mv = (uint16_t)(0x8200); bus_write16(g_m68k.a[2] + (-0x2), _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint16_t _mv = (uint16_t)(0x8240); bus_write16(g_m68k.a[2] + (-0x2), _mv); M68K_TST16(_mv); }
    func_table_call(0x011CAA);
    { uint16_t _mv = (uint16_t)(0x82c0); bus_write16(g_m68k.a[2] + (-0x2), _mv); M68K_TST16(_mv); }
    func_table_call(0x011CAA);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint16_t _mv = (uint16_t)(0x1000); bus_write16(g_m68k.a[2] + (-0x2), _mv); M68K_TST16(_mv); }
    g_m68k.d[1] = (uint32_t)(int32_t)(int8_t)(0x7f); M68K_TST32(g_m68k.d[1]);
loc_012130:
    func_table_call(0x011DAA);
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[1]; _cnt--; g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_012130; } }
    { uint16_t _mv = (uint16_t)(0x3000); bus_write16(g_m68k.a[2] + (-0x2), _mv); M68K_TST16(_mv); }
    g_m68k.d[1] = (uint32_t)(int32_t)(int8_t)(0x7f); M68K_TST32(g_m68k.d[1]);
loc_012142:
    func_table_call(0x011DAA);
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[1]; _cnt--; g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_012142; } }
    { uint32_t _mv = (uint32_t)(0x29292); bus_write32(0x102226, _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(0x2929a); bus_write32(0x10222A, _mv); M68K_TST32(_mv); }
    bus_write16(0x102224, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    g_m68k.a[2] = 0x101B20;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x16)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[1] = (uint32_t)(int32_t)(int8_t)(0x3f); M68K_TST32(g_m68k.d[1]);
loc_012172:
    bus_write16(g_m68k.a[2], 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    g_m68k.a[2] += (int16_t)(uint16_t)(g_m68k.d[0]);
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[1]; _cnt--; g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_012172; } }
    bus_write16(0x1020A0, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    m68k_set_sr(_postinc16(7));
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}

/* $012188-$012202  (32 instructions, 122 bytes) */
void sub_012188(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    g_m68k.a[5] = 0x102224;
    M68K_TST16(bus_read16(g_m68k.a[5]));
    if (M68K_CC_EQ) goto loc_0121FC;
    bus_write16(g_m68k.a[5], 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    g_m68k.a[2] = 0x3C0002;
    g_m68k.a[4] = 0x102226;
    g_m68k.a[5] = 0x10222A;
    g_m68k.a[0] = bus_read32(g_m68k.a[4]);
    g_m68k.a[1] = bus_read32(g_m68k.a[5]);
    { uint32_t _mv = (uint32_t)(g_m68k.a[1]); bus_write32(g_m68k.a[4], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(g_m68k.a[0]); bus_write32(g_m68k.a[5], _mv); M68K_TST32(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x10222E))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[5] = 0x011CA8;
    g_m68k.a[5] -= (int16_t)(uint16_t)(g_m68k.d[0]);
    g_m68k.a[4] = 0x102330;
    g_m68k.a[7] -= 2; bus_write16(g_m68k.a[7], m68k_get_sr());
    m68k_set_sr(m68k_get_sr() | 0x700);
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[1] + 0x4)); bus_write16(g_m68k.a[2] + (-0x2), _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(g_m68k.a[2] + 0x2, _mv); M68K_TST16(_mv); }
    func_table_call(g_m68k.a[5]);
    m68k_set_sr(_postinc16(7));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    g_m68k.a[7] -= 2; bus_write16(g_m68k.a[7], m68k_get_sr());
    m68k_set_sr(m68k_get_sr() | 0x700);
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[0] + 0x4)); bus_write16(g_m68k.a[2] + (-0x2), _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(g_m68k.a[2] + 0x2, _mv); M68K_TST16(_mv); }
    func_table_call(0x011CAA);
    m68k_set_sr(_postinc16(7));
loc_0121FC:
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}

/* $012202-$012252  (19 instructions, 80 bytes) */
void sub_012202(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[1]);
    g_m68k.a[0] = 0x101B20;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x16)); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.d[1] = (uint32_t)(int32_t)(int8_t)(0x3f); M68K_TST32(g_m68k.d[1]);
loc_012212:
    M68K_TST16(bus_read16(g_m68k.a[0]));
    if (M68K_CC_EQ) goto loc_012226;
    g_m68k.a[0] += (int16_t)(uint16_t)(g_m68k.d[2]);
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[1]; _cnt--; g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_012212; } }
    g_m68k.a[0] = 0x000000;
    goto loc_01224C;
loc_012226:
    { uint32_t _mv = (uint32_t)(0x10000); bus_write32(g_m68k.a[0], _mv); g_m68k.a[0] += 4; M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(0x200020); bus_write32(g_m68k.a[0], _mv); g_m68k.a[0] += 4; M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(0x1000100); bus_write32(g_m68k.a[0], _mv); g_m68k.a[0] += 4; M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(0x40004); bus_write32(g_m68k.a[0], _mv); g_m68k.a[0] += 4; M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(0x292a2); bus_write32(g_m68k.a[0], _mv); g_m68k.a[0] += 4; M68K_TST32(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[0], _mv); g_m68k.a[0] += 2; M68K_TST16(_mv); }
    g_m68k.a[0] -= (int16_t)(uint16_t)(0x16);
loc_01224C:
    g_m68k.d[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}

/* $012252-$012256  (2 instructions, 4 bytes) */
void sub_012252(void) {
    bus_write16(g_m68k.a[0], 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    return;
}

/* $012256-$01225C  (2 instructions, 6 bytes) */
void sub_012256(void) {
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[0] + 0x2, _mv); M68K_TST16(_mv); }
    return;
}

/* $01225C-$012266  (3 instructions, 10 bytes) */
void sub_01225C(void) {
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[0] + 0x4, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[0] + 0x6, _mv); M68K_TST16(_mv); }
    return;
}

/* $012266-$012270  (3 instructions, 10 bytes) */
void sub_012266(void) {
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[0] + 0x8, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[0] + 0xa, _mv); M68K_TST16(_mv); }
    return;
}

/* $012270-$012280  (5 instructions, 16 bytes) */
void sub_012270(void) {
    { uint16_t _mv = (uint16_t)(_postinc16(3)); bus_write16(g_m68k.a[0] + 0xc, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(3)); bus_write16(g_m68k.a[0] + 0xe, _mv); M68K_TST16(_mv); }
    { uint32_t _mv = (uint32_t)(g_m68k.a[3]); bus_write32(g_m68k.a[0] + 0x10, _mv); M68K_TST32(_mv); }
    g_m68k.a[3] -= 0x4;
    return;
}

/* $012280-$012286  (2 instructions, 6 bytes) */
void sub_012280(void) {
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[0] + 0x14, _mv); M68K_TST16(_mv); }
    return;
}

/* $012286-$012296  (6 instructions, 16 bytes) */
void sub_012286(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    M68K_NEG16(g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], 0x2);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[0], _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}

/* $012296-$01229E  (2 instructions, 8 bytes) */
void sub_012296(void) {
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(0x1020A0, _mv); M68K_TST16(_mv); }
    return;
}

/* $01229E-$0123C4  (71 instructions, 294 bytes) */
void sub_01229E(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[7]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    g_m68k.a[2] = 0x3C0002;
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], 0x0122C4);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1020A0))); M68K_TST16((uint16_t)g_m68k.d[0]);
    if (M68K_CC_EQ) { func_table_call(0x0133A0); return; }
    M68K_CMP16(g_m68k.d[0], 0x8);
    if (M68K_CC_LS) { func_table_call(0x013362); return; }
    { func_table_call(0x013330); return; }
loc_0122C4:
    M68K_TST16(bus_read16(0x102224));
    if (M68K_CC_NE) goto loc_0122C4;
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0x80)); M68K_TST16((uint16_t)g_m68k.d[3]);
    g_m68k.a[1] = bus_read32(0x10222A);
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[1] + 0x0))); M68K_TST16((uint16_t)g_m68k.d[4]);
    g_m68k.d[5] = 0x102230; M68K_TST32((uint32_t)g_m68k.d[5]);
    g_m68k.d[6] = 0x102330; M68K_TST32((uint32_t)g_m68k.d[6]);
    g_m68k.d[7] = 0x102430; M68K_TST32((uint32_t)g_m68k.d[7]);
    g_m68k.a[3] = 0x1020A4;
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1020A2))); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_SUB16(g_m68k.d[1], 0x1);
    if (M68K_CC_MI) goto loc_01232A;
loc_0122FE:
    g_m68k.a[0] = bus_read32(g_m68k.a[3] + 0x2);
    M68K_SUB16(g_m68k.d[3], bus_read16(g_m68k.a[0] + 0xc));
    if (M68K_CC_PL) goto loc_012312;
    M68K_ADD16(g_m68k.d[3], bus_read16(g_m68k.a[0] + 0xc));
    goto loc_01232A;
loc_012312:
    func_table_call(0x012384); /* loc_012384 */
    func_table_call(0x013166); /* loc_013166 */
    func_table_call(0x013246); /* loc_013246 */
    func_table_call(0x0132D4); /* loc_0132D4 */
    g_m68k.a[3] += (int16_t)(uint16_t)(0x6);
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[1]; _cnt--; g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_0122FE; } }
loc_01232A:
    M68K_NEG16(g_m68k.d[3]);
    M68K_ADD16(g_m68k.d[3], 0x80);
    { uint16_t _mv = (uint16_t)(g_m68k.d[3]); bus_write16(0x10222E, _mv); M68K_TST16(_mv); }
    M68K_ADD16(g_m68k.d[3], g_m68k.d[3]);
    g_m68k.a[3] = 0x011CA8;
    g_m68k.a[3] -= (int16_t)(uint16_t)(g_m68k.d[3]);
    g_m68k.a[4] = 0x102230;
    m68k_set_sr(m68k_get_sr() | 0x700);
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[1] + 0x2)); bus_write16(g_m68k.a[2] + (-0x2), _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(g_m68k.a[2] + 0x2, _mv); M68K_TST16(_mv); }
    func_table_call(g_m68k.a[3]);
    m68k_set_sr(m68k_get_sr() & 0xf8ff);
    g_m68k.a[4] = 0x102430;
    m68k_set_sr(m68k_get_sr() | 0x700);
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[1] + 0x6)); bus_write16(g_m68k.a[2] + (-0x2), _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(g_m68k.a[2] + 0x2, _mv); M68K_TST16(_mv); }
    func_table_call(g_m68k.a[3]);
    m68k_set_sr(m68k_get_sr() & 0xf8ff);
    { uint32_t _ea = 0x102224; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[7] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
loc_012384:
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[0] + 0x14))); M68K_TST16((uint16_t)g_m68k.d[2]);
    if (M68K_CC_NE) { func_table_call(0x0128E4); return; }
    g_m68k.a[6] = 0x0123C4;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[0] + 0xe))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_SUB16(g_m68k.d[0], 0x1);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[6] = bus_read32(g_m68k.a[6] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    g_m68k.a[4] = bus_read32(g_m68k.a[0] + 0x10);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[0] + 0xc))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_SUB16(g_m68k.d[0], 0x1);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x40)); M68K_TST16((uint16_t)g_m68k.d[2]);
loc_0123AE:
    m68k_set_sr(m68k_get_sr() | 0x700);
    { uint16_t _mv = (uint16_t)(g_m68k.d[4]); bus_write16(g_m68k.a[2] + (-0x2), _mv); M68K_TST16(_mv); }
    func_table_call(g_m68k.a[6]);
    m68k_set_sr(m68k_get_sr() & 0xf8ff);
    M68K_ADD16(g_m68k.d[4], g_m68k.d[2]);
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[0]; _cnt--; g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_0123AE; } }
    return;
}

/* $012404-$012452  (20 instructions, 78 bytes) */
void jt_012404(void) {
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(g_m68k.a[2] + 0x2, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x2); bus_write16(g_m68k.a[2] + 0x2, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    return;
}

/* $012452-$0124A0  (21 instructions, 78 bytes) */
void jt_012452(void) {
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(g_m68k.a[2] + 0x2, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x2); bus_write16(g_m68k.a[2] + 0x2, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    return;
}

/* $0124A0-$0124EE  (22 instructions, 78 bytes) */
void jt_0124A0(void) {
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(g_m68k.a[2] + 0x2, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x2); bus_write16(g_m68k.a[2] + 0x2, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    return;
}

/* $0124EE-$01253C  (23 instructions, 78 bytes) */
void jt_0124EE(void) {
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(g_m68k.a[2] + 0x2, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x2); bus_write16(g_m68k.a[2] + 0x2, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    return;
}

/* $01253C-$01258A  (24 instructions, 78 bytes) */
void jt_01253C(void) {
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(g_m68k.a[2] + 0x2, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x2); bus_write16(g_m68k.a[2] + 0x2, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    return;
}

/* $01258A-$0125D8  (25 instructions, 78 bytes) */
void jt_01258A(void) {
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(g_m68k.a[2] + 0x2, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x2); bus_write16(g_m68k.a[2] + 0x2, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    return;
}

/* $0125D8-$012626  (26 instructions, 78 bytes) */
void jt_0125D8(void) {
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(g_m68k.a[2] + 0x2, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x2); bus_write16(g_m68k.a[2] + 0x2, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    return;
}

/* $012626-$012674  (27 instructions, 78 bytes) */
void jt_012626(void) {
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(g_m68k.a[2] + 0x2, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x2); bus_write16(g_m68k.a[2] + 0x2, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    return;
}

/* $012674-$0126C2  (28 instructions, 78 bytes) */
void jt_012674(void) {
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(g_m68k.a[2] + 0x2, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x2); bus_write16(g_m68k.a[2] + 0x2, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    return;
}

/* $0126C2-$012710  (29 instructions, 78 bytes) */
void jt_0126C2(void) {
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(g_m68k.a[2] + 0x2, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x2); bus_write16(g_m68k.a[2] + 0x2, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    return;
}

/* $012710-$01275E  (30 instructions, 78 bytes) */
void jt_012710(void) {
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(g_m68k.a[2] + 0x2, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x2); bus_write16(g_m68k.a[2] + 0x2, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    return;
}

/* $01275E-$0127AC  (31 instructions, 78 bytes) */
void jt_01275E(void) {
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(g_m68k.a[2] + 0x2, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x2); bus_write16(g_m68k.a[2] + 0x2, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    return;
}

/* $0127AC-$0127FA  (32 instructions, 78 bytes) */
void jt_0127AC(void) {
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(g_m68k.a[2] + 0x2, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x2); bus_write16(g_m68k.a[2] + 0x2, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    return;
}
