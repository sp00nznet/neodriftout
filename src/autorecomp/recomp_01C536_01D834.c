/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $01C536 - $01D834 */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

/* $01C536-$01C55C  (8 instructions, 38 bytes) */
void sub_01C536(void) {
    M68K_CMP16(bus_read16(0x1034FC), 0x14);
    if (M68K_CC_NE) goto loc_01C554;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x101202))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1c55c + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x015256);
loc_01C554:
    { uint32_t _ea = 0x1034FC; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    return;
}

/* $01C77A-$01C788  (3 instructions, 14 bytes) */
void sub_01C77A(void) {
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(0x1035AC, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $01C788-$01C79A  (6 instructions, 18 bytes) */
void sub_01C788(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1035AC))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[0] = bus_read32(0x1c79a + (int16_t)(uint16_t)g_m68k.d[0]);
    func_table_call(g_m68k.a[0]);
    return;
}

/* $01C7AA-$01C7BE  (4 instructions, 20 bytes) */
void jt_01C7AA(void) {
    func_table_call(0x00B978);
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(0x1035AC, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $01C7BE-$01C7D8  (6 instructions, 26 bytes) */
void jt_01C7BE(void) {
    func_table_call(0x00B98C);
    M68K_CMP16(g_m68k.d[0], 0x0);
    if (M68K_CC_NE) goto loc_01C7D2;
    { uint16_t _mv = (uint16_t)(0x2); bus_write16(0x1035AC, _mv); M68K_TST16(_mv); }
loc_01C7D2:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $01C7D8-$01C806  (8 instructions, 46 bytes) */
void jt_01C7D8(void) {
    { uint16_t _mv = (uint16_t)(0x4b0); bus_write16(0x1035AE, _mv); M68K_TST16(_mv); }
    func_table_call(0x00FD74);
    func_table_call(0x00FDB8);
    func_table_call(0x00FE60);
    func_table_call(0x0100BE);
    { uint16_t _mv = (uint16_t)(0x3); bus_write16(0x1035AC, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $01C806-$01C876  (22 instructions, 112 bytes) */
void jt_01C806(void) {
    { uint32_t _ea = 0x1035AE; uint16_t _tmp = bus_read16(_ea); M68K_SUB16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    if (M68K_CC_PL) goto loc_01C828;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x6)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x015256);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x9)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x015256);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    goto loc_01C874;
loc_01C828:
    g_m68k.a[6] = 0x101508;
    func_table_call(0x00D956);
    func_table_call(0x00FE0A);
    func_table_call(0x00FECC);
    func_table_call(0x0100D2);
    func_table_call(0x00F6EC);
    func_table_call(0x00F5DA);
    func_table_call(0x014760);
    func_table_call(0x019F82);
    func_table_call(0x014160);
    func_table_call(0x01229E);
    func_table_call(0x013546);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
loc_01C874:
    return;
}

/* $01C876-$01C996  (58 instructions, 288 bytes) */
void sub_01C876(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[1]);
    func_table_call(0x000A26);
    func_table_call(0x0120E0);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x011F22);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x40)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0xb)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.a[3] = 0x01D298;
    func_table_call(0x012036);
    g_m68k.a[1] = 0x1035B2;
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0xd)); M68K_TST16((uint16_t)g_m68k.d[1]);
loc_01C8B2:
    func_table_call(0x012202);
    { uint32_t _mv = (uint32_t)(g_m68k.a[0]); bus_write32(g_m68k.a[1], _mv); g_m68k.a[1] += 4; M68K_TST32(_mv); }
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[1]; _cnt--; g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_01C8B2; } }
    g_m68k.a[1] = 0x01C996;
loc_01C8C4:
    g_m68k.a[0] = _postinc32(1);
    M68K_CMP32(g_m68k.a[0], 0x0);
    if (M68K_CC_EQ) goto loc_01C8E8;
    g_m68k.a[0] = bus_read32(g_m68k.a[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(_postinc16(1))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(_postinc16(1))); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x01225C);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(_postinc16(1))); M68K_TST16((uint16_t)g_m68k.d[0]);
    if (M68K_CC_EQ) goto loc_01C8C4;
    func_table_call(0x012256);
    goto loc_01C8C4;
loc_01C8E8:
    g_m68k.a[0] = bus_read32(0x1035DA);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x012286);
    g_m68k.a[1] = bus_read32(0x01D4D8);
    g_m68k.a[2] = 0x01CA26;
    g_m68k.a[4] = bus_read32(g_m68k.a[1] + 0x0);
loc_01C908:
    g_m68k.a[0] = _postinc32(2);
    M68K_CMP32(g_m68k.a[0], 0x0);
    if (M68K_CC_EQ) goto loc_01C924;
    g_m68k.a[0] = bus_read32(g_m68k.a[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(_postinc16(2))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.a[3] = bus_read32(g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    func_table_call(0x012270);
    goto loc_01C908;
loc_01C924:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1e)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x5)); M68K_TST16((uint16_t)g_m68k.d[1]);
    func_table_call(0x010EF4);
    { uint32_t _mv = (uint32_t)(0x2a2a2b); bus_write32(0x1035F6, _mv); M68K_TST32(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(0x1035FA, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0xe4b); bus_write16(0x1035EA, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x1e); bus_write16(0x1035EC, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(0x1035EE, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(0x1035F0, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(0x1035F2, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x78); bus_write16(0x1035F4, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(0x1035FE, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(0x103600, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(0x103604, _mv); M68K_TST16(_mv); }
    g_m68k.d[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $01CA78-$01CAC2  (19 instructions, 74 bytes) */
void sub_01CA78(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[1]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1035F0))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[0] = bus_read32(0x1cac2 + (int16_t)(uint16_t)g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[0], 0x0);
    if (M68K_CC_EQ) goto loc_01CAA6;
    func_table_call(g_m68k.a[0]);
    M68K_CMP16(g_m68k.d[0], 0x0);
    if (M68K_CC_NE) goto loc_01CAB2;
    { uint32_t _ea = 0x1035F0; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    goto loc_01CAB2;
loc_01CAA6:
    func_table_call(0x01229E);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    goto loc_01CABC;
loc_01CAB2:
    func_table_call(0x01229E);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
loc_01CABC:
    g_m68k.d[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}

/* $01CAF4-$01CB36  (14 instructions, 66 bytes) */
void jt_01CAF4(void) {
    func_table_call(0x01D1CE);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1011FC))); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x010E36);
    M68K_CMP16(g_m68k.d[0], 0x1);
    if (M68K_CC_NE) goto loc_01CB20;
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(0x1035F4, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0xc7)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x015256);
loc_01CB20:
    { uint32_t _ea = 0x1035F4; uint16_t _tmp = bus_read16(_ea); M68K_SUB16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    if (M68K_CC_LE) goto loc_01CB30;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    goto loc_01CB34;
loc_01CB30:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
loc_01CB34:
    return;
}

/* $01CB36-$01CB7C  (17 instructions, 70 bytes) */
void jt_01CB36(void) {
    func_table_call(0x01D1CE);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1035F2))); M68K_TST16((uint16_t)g_m68k.d[3]);
    M68K_ADD16(g_m68k.d[3], 0x15);
    M68K_CMP16(g_m68k.d[3], 0x100);
    if (M68K_CC_LS) goto loc_01CB58;
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0x100)); M68K_TST16((uint16_t)g_m68k.d[3]);
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[4]);
    goto loc_01CB5C;
loc_01CB58:
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[4]);
loc_01CB5C:
    { uint16_t _mv = (uint16_t)(g_m68k.d[3]); bus_write16(0x1035F2, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x40)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0xb)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[3])); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.a[3] = 0x01D298;
    func_table_call(0x012036);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[4])); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $01CB7C-$01CBF6  (35 instructions, 122 bytes) */
void jt_01CB7C(void) {
    func_table_call(0x01D1CE);
    g_m68k.a[1] = 0x1035CE;
    g_m68k.a[2] = 0x01D4D8;
    g_m68k.a[2] = bus_read32(g_m68k.a[2]);
    g_m68k.a[4] = 0x1035F6;
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1035FA))); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[1])); M68K_TST16((uint16_t)g_m68k.d[3]);
    M68K_SUB16(g_m68k.d[3], 0x1);
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(0x3)); M68K_TST16((uint16_t)g_m68k.d[4]);
loc_01CBA4:
    M68K_CMP16(g_m68k.d[4], g_m68k.d[1]);
    if (M68K_CC_GE) goto loc_01CBD8;
    M68K_CMP16(g_m68k.d[4], g_m68k.d[3]);
    if (M68K_CC_NE) goto loc_01CBD2;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.d[4]))); M68K_TST8((uint8_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[3] = bus_read32(g_m68k.a[2] + 0x4);
    g_m68k.a[3] = bus_read32(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[4])); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[0] = bus_read32(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    func_table_call(0x012270);
loc_01CBD2:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    goto loc_01CBDC;
loc_01CBD8:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
loc_01CBDC:
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[4])); M68K_TST16((uint16_t)g_m68k.d[2]);
    M68K_ADD16(g_m68k.d[2], g_m68k.d[2]);
    M68K_ADD16(g_m68k.d[2], g_m68k.d[2]);
    g_m68k.a[0] = bus_read32(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[2]);
    func_table_call(0x012286);
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[4]; _cnt--; g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_01CBA4; } }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $01CBF6-$01CC44  (18 instructions, 78 bytes) */
void jt_01CBF6(void) {
    func_table_call(0x01D1CE);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1035F2))); M68K_TST16((uint16_t)g_m68k.d[3]);
    M68K_SUB16(g_m68k.d[3], 0xf);
    M68K_CMP16(g_m68k.d[3], 0x0);
    if (M68K_CC_GE) goto loc_01CC18;
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[3]);
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[4]);
    goto loc_01CC1C;
loc_01CC18:
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[4]);
loc_01CC1C:
    { uint16_t _mv = (uint16_t)(g_m68k.d[3]); bus_write16(0x1035F2, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x40)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0xb)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[3])); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.a[3] = 0x01D298;
    func_table_call(0x012036);
    { uint32_t _ea = 0x1035F2; uint16_t _tmp = bus_read16(_ea); M68K_SUB16(_tmp, 0xf); bus_write16(_ea, _tmp); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[4])); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $01CC44-$01CC60  (7 instructions, 28 bytes) */
void jt_01CC44(void) {
    g_m68k.a[1] = 0x1035B2;
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0xd)); M68K_TST16((uint16_t)g_m68k.d[1]);
loc_01CC4E:
    g_m68k.a[0] = _postinc32(1);
    func_table_call(0x012252);
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[1]; _cnt--; g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_01CC4E; } }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $01CC60-$01CDF0  (94 instructions, 400 bytes) */
void jt_01CC60(void) {
    func_table_call(0x01D1CE);
    { uint32_t _ea = 0x1035EA; uint16_t _tmp = bus_read16(_ea); M68K_SUB16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    M68K_CMP16(bus_read16(0x1035EA), 0x0);
    if (M68K_CC_GT) goto loc_01CCA6;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1035FA))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.a[0] = 0x1035F6;
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST8((uint8_t)g_m68k.d[1]);
    M68K_CMP8(g_m68k.d[1], 0x2b);
    if (M68K_CC_EQ) goto loc_01CC9E;
    M68K_CMP8(g_m68k.d[1], 0x2c);
    if (M68K_CC_EQ) goto loc_01CC9E;
    { uint32_t _ea = 0x1035FA; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0x1); bus_write16(_ea, _tmp); }
loc_01CC9E:
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[3]);
    goto loc_01CD38;
loc_01CCA6:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1011FC))); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x010E36);
    M68K_CMP16(g_m68k.d[0], 0x1);
    if (M68K_CC_NE) goto loc_01CCF0;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1035FA))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.a[3] = 0x1035F6;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST8((uint8_t)g_m68k.d[0]);
    M68K_AND16(g_m68k.d[0], 0xff);
    M68K_CMP16(g_m68k.d[0], 0x2b);
    if (M68K_CC_NE) goto loc_01CCDC;
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[3]);
    goto loc_01CD38;
loc_01CCDC:
    M68K_CMP16(g_m68k.d[0], 0x2c);
    if (M68K_CC_NE) goto loc_01CCEA;
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0x4)); M68K_TST16((uint16_t)g_m68k.d[3]);
    goto loc_01CD38;
loc_01CCEA:
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0x8)); M68K_TST16((uint16_t)g_m68k.d[3]);
    goto loc_01CD38;
loc_01CCF0:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1011FC))); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x010E82);
    M68K_CMP16(g_m68k.d[0], 0x1);
    if (M68K_CC_NE) goto loc_01CD0A;
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0x4)); M68K_TST16((uint16_t)g_m68k.d[3]);
    goto loc_01CD38;
loc_01CD0A:
    func_table_call(0x010F18);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[3]);
    M68K_AND16(g_m68k.d[3], 0xc);
    if (M68K_CC_EQ) goto loc_01CD34;
    func_table_call(0x01CFD6);
    M68K_AND16(g_m68k.d[0], 0x4);
    if (M68K_CC_EQ) goto loc_01CD2E;
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0x10)); M68K_TST16((uint16_t)g_m68k.d[3]);
    goto loc_01CD38;
loc_01CD2E:
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0xc)); M68K_TST16((uint16_t)g_m68k.d[3]);
    goto loc_01CD38;
loc_01CD34:
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0x14)); M68K_TST16((uint16_t)g_m68k.d[3]);
loc_01CD38:
    g_m68k.a[3] = 0x01CDF0;
    g_m68k.a[3] = bus_read32(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[3]);
    func_table_call(g_m68k.a[3]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1035FE))); M68K_TST16((uint16_t)g_m68k.d[0]);
    if (M68K_CC_EQ) goto loc_01CD54;
    func_table_call(0x015256);
loc_01CD54:
    M68K_CMP16(g_m68k.d[4], 0x0);
    if (M68K_CC_EQ) goto loc_01CDEC;
    g_m68k.a[1] = 0x1035CE;
    g_m68k.a[2] = 0x01D4D8;
    g_m68k.a[2] = bus_read32(g_m68k.a[2]);
    g_m68k.a[4] = 0x1035F6;
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1035FA))); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.a[0] = bus_read32(0x1035DA);
    M68K_CMP16(g_m68k.d[1], 0x3);
    if (M68K_CC_NE) goto loc_01CD90;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x012286);
    goto loc_01CD9E;
loc_01CD90:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x012286);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x2)); M68K_TST16((uint16_t)g_m68k.d[1]);
loc_01CD9E:
    g_m68k.a[5] = 0x1035CE;
loc_01CDA4:
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[1])); M68K_TST16((uint16_t)g_m68k.d[2]);
    M68K_ADD16(g_m68k.d[2], g_m68k.d[2]);
    M68K_ADD16(g_m68k.d[2], g_m68k.d[2]);
    g_m68k.a[0] = bus_read32(g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.d[2]);
    M68K_CMP16(g_m68k.d[1], bus_read16(0x1035FA));
    if (M68K_CC_NE) goto loc_01CDC6;
    func_table_call(0x01CF9A);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0x8)); M68K_TST16((uint16_t)g_m68k.d[3]);
    goto loc_01CDCA;
loc_01CDC6:
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0x4)); M68K_TST16((uint16_t)g_m68k.d[3]);
loc_01CDCA:
    g_m68k.a[3] = bus_read32(g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.d[3]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.d[1]))); M68K_TST8((uint8_t)g_m68k.d[3]);
    M68K_ADD16(g_m68k.d[3], g_m68k.d[3]);
    M68K_ADD16(g_m68k.d[3], g_m68k.d[3]);
    g_m68k.a[3] = bus_read32(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[3]);
    func_table_call(0x012270);
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[1]; _cnt--; g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_01CDA4; } }
    func_table_call(0x01CFE8);
loc_01CDEC:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[4])); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $01CE08-$01CE5A  (18 instructions, 82 bytes) */
void jt_01CE08(void) {
    g_m68k.a[0] = 0x1035F6;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1035FA))); M68K_TST16((uint16_t)g_m68k.d[0]);
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(0x1035EA, _mv); M68K_TST16(_mv); }
loc_01CE1C:
    M68K_CMP16(g_m68k.d[0], 0x3);
    if (M68K_CC_HI) goto loc_01CE2E;
    { uint8_t _mv = (uint8_t)(0x2b); bus_write8(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0], _mv); M68K_TST8(_mv); }
    M68K_ADD16(g_m68k.d[0], 0x1);
    goto loc_01CE1C;
loc_01CE2E:
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x3)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.a[1] = 0x1011FE;
loc_01CE38:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[1]))); M68K_TST8((uint8_t)g_m68k.d[0]);
    func_table_call(0x011548);
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); bus_write8(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[1], _mv); M68K_TST8(_mv); }
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[1]; _cnt--; g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_01CE38; } }
    { uint16_t _mv = (uint16_t)(0xc7); bus_write16(0x1035FE, _mv); M68K_TST16(_mv); }
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[4]);
    return;
}

/* $01CE5A-$01CEA4  (16 instructions, 74 bytes) */
void jt_01CE5A(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1035FA))); M68K_TST16((uint16_t)g_m68k.d[0]);
    if (M68K_CC_EQ) goto loc_01CE9E;
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[0] = 0x1035CE;
    g_m68k.a[0] = bus_read32(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x012286);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1035FA))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.a[0] = 0x1035F6;
    { uint8_t _mv = (uint8_t)(0x2a); bus_write8(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0], _mv); M68K_TST8(_mv); }
    M68K_SUB16(g_m68k.d[0], 0x1);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(0x1035FA, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0xc6); bus_write16(0x1035FE, _mv); M68K_TST16(_mv); }
loc_01CE9E:
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[4]);
    return;
}

/* $01CEA4-$01CEFA  (19 instructions, 86 bytes) */
void jt_01CEA4(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1035FA))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[0] = 0x1035CE;
    g_m68k.a[0] = bus_read32(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x012286);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1035FA))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], 0x1);
    g_m68k.a[0] = 0x1035F6;
    M68K_CMP16(g_m68k.d[0], 0x3);
    if (M68K_CC_EQ) goto loc_01CEE0;
    { uint8_t _mv = (uint8_t)(0x0); bus_write8(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0], _mv); M68K_TST8(_mv); }
    goto loc_01CEE6;
loc_01CEE0:
    { uint8_t _mv = (uint8_t)(0x2b); bus_write8(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0], _mv); M68K_TST8(_mv); }
loc_01CEE6:
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(0x1035FA, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0xc7); bus_write16(0x1035FE, _mv); M68K_TST16(_mv); }
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[4]);
    return;
}

/* $01CEFA-$01CF44  (19 instructions, 74 bytes) */
void jt_01CEFA(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1035FA))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.a[0] = 0x1035F6;
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST8((uint8_t)g_m68k.d[1]);
    M68K_CMP16(g_m68k.d[0], 0x3);
    if (M68K_CC_CS) goto loc_01CF22;
    M68K_SUB16(g_m68k.d[1], 0x2b);
    M68K_EOR16(g_m68k.d[1], 0x1);
    M68K_ADD16(g_m68k.d[1], 0x2b);
    goto loc_01CF32;
loc_01CF22:
    M68K_CMP16(g_m68k.d[1], 0x2c);
    if (M68K_CC_CS) goto loc_01CF30;
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[1]);
    goto loc_01CF32;
loc_01CF30:
    M68K_ADD16(g_m68k.d[1], 0x1);
loc_01CF32:
    { uint8_t _mv = (uint8_t)(g_m68k.d[1]); bus_write8(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0], _mv); M68K_TST8(_mv); }
    { uint16_t _mv = (uint16_t)(0xc6); bus_write16(0x1035FE, _mv); M68K_TST16(_mv); }
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[4]);
    return;
}

/* $01CF44-$01CF8C  (19 instructions, 72 bytes) */
void jt_01CF44(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1035FA))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.a[0] = 0x1035F6;
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST8((uint8_t)g_m68k.d[1]);
    M68K_CMP16(g_m68k.d[0], 0x3);
    if (M68K_CC_LT) goto loc_01CF6C;
    M68K_SUB16(g_m68k.d[1], 0x2b);
    M68K_EOR16(g_m68k.d[1], 0x1);
    M68K_ADD16(g_m68k.d[1], 0x2b);
    goto loc_01CF7A;
loc_01CF6C:
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[1])); M68K_TST16((uint16_t)g_m68k.d[1]);
    if (M68K_CC_NE) goto loc_01CF78;
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x2c)); M68K_TST16((uint16_t)g_m68k.d[1]);
    goto loc_01CF7A;
loc_01CF78:
    M68K_SUB16(g_m68k.d[1], 0x1);
loc_01CF7A:
    { uint8_t _mv = (uint8_t)(g_m68k.d[1]); bus_write8(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0], _mv); M68K_TST8(_mv); }
    { uint16_t _mv = (uint16_t)(0xc6); bus_write16(0x1035FE, _mv); M68K_TST16(_mv); }
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[4]);
    return;
}

/* $01CF8C-$01CF9A  (3 instructions, 14 bytes) */
void jt_01CF8C(void) {
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(0x1035FE, _mv); M68K_TST16(_mv); }
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[4]);
    return;
}

/* $01CF9A-$01CFD6  (12 instructions, 60 bytes) */
void sub_01CF9A(void) {
    { uint32_t _ea = 0x1035EC; uint16_t _tmp = bus_read16(_ea); M68K_SUB16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    if (M68K_CC_GT) goto loc_01CFB4;
    { uint32_t _ea = 0x1035EE; uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(0x1e); bus_write16(0x1035EC, _mv); M68K_TST16(_mv); }
loc_01CFB4:
    g_m68k.a[0] = 0x1035CE;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1035FA))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[0] = bus_read32(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1035EE))); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x012286);
    return;
}

/* $01CFD6-$01CFE8  (3 instructions, 18 bytes) */
void sub_01CFD6(void) {
    { uint16_t _mv = (uint16_t)(0x1e); bus_write16(0x1035EC, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(0x1035EE, _mv); M68K_TST16(_mv); }
    return;
}

/* $01CFE8-$01D03E  (23 instructions, 86 bytes) */
void sub_01CFE8(void) {
    g_m68k.a[1] = bus_read32(0x01D4D8);
    g_m68k.a[1] = bus_read32(g_m68k.a[1] + 0xc);
    g_m68k.d[0] = 0; g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1035EA))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_CMP16(g_m68k.d[0], 0x1796);
    if (M68K_CC_LE) goto loc_01D006;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1796)); M68K_TST16((uint16_t)g_m68k.d[0]);
loc_01D006:
    M68K_DIVU(g_m68k.d[0], 0x3c);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.d[0] = bus_read32(0x1d03e + (int16_t)(uint16_t)g_m68k.d[0]); M68K_TST32((uint32_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[3] = bus_read32(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    g_m68k.a[0] = bus_read32(0x1035E6);
    func_table_call(0x012270);
    M68K_SWAP(g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[3] = bus_read32(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    g_m68k.a[0] = bus_read32(0x1035E2);
    func_table_call(0x012270);
    return;
}

/* $01D1CE-$01D290  (40 instructions, 194 bytes) */
void sub_01D1CE(void) {
    g_m68k.d[1] = bus_read32(0x103600); M68K_TST32((uint32_t)g_m68k.d[1]);
    M68K_ADD32(g_m68k.d[1], 0xaa7e);
    M68K_CMP32(g_m68k.d[1], 0x700000);
    if (M68K_CC_CS) goto loc_01D1F2;
    M68K_SUB32(g_m68k.d[1], 0x700000);
    { uint32_t _ea = 0x103604; uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, 0x4); bus_write16(_ea, _tmp); }
loc_01D1F2:
    { uint32_t _mv = (uint32_t)(g_m68k.d[1]); bus_write32(0x103600, _mv); M68K_TST32(_mv); }
    M68K_SWAP(g_m68k.d[1]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.a[0] = bus_read32(0x1035B2);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[1])); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], 0x190);
    func_table_call(0x01225C);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x103604))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.a[3] = bus_read32(0x1d290 + (int16_t)(uint16_t)g_m68k.d[0]);
    func_table_call(0x012270);
    g_m68k.a[0] = bus_read32(0x1035B6);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[1])); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], 0x0);
    func_table_call(0x01225C);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x103604))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_EOR16(g_m68k.d[0], 0x4);
    g_m68k.a[3] = bus_read32(0x1d290 + (int16_t)(uint16_t)g_m68k.d[0]);
    func_table_call(0x012270);
    g_m68k.a[0] = bus_read32(0x1035BA);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[1])); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], 0x70);
    func_table_call(0x01225C);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x103604))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.a[3] = bus_read32(0x1d290 + (int16_t)(uint16_t)g_m68k.d[0]);
    func_table_call(0x012270);
    g_m68k.a[0] = bus_read32(0x1035BE);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[1])); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], 0xe0);
    func_table_call(0x01225C);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x103604))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_EOR16(g_m68k.d[0], 0x4);
    g_m68k.a[3] = bus_read32(0x1d290 + (int16_t)(uint16_t)g_m68k.d[0]);
    func_table_call(0x012270);
    return;
}

/* $01D4DC-$01D4EC  (4 instructions, 16 bytes) */
void jt_01D4DC(void) {
    M68K_OR8(g_m68k.d[1], 0x14);
    M68K_OR8(g_m68k.d[1], 0x3c);
    M68K_OR8(g_m68k.d[1], 0xf0);
    M68K_OR8(g_m68k.d[1], 0xec);
    /* WARNING: function did not end with RTS */
}

/* $01D4EC-$01D514  (10 instructions, 40 bytes) */
void jt_01D4EC(void) {
    M68K_OR8(g_m68k.d[1], 0xf8);
    M68K_OR8(g_m68k.d[1], 0x0);
    M68K_OR8(g_m68k.d[1], 0x8);
    M68K_OR8(g_m68k.d[1], 0x10);
    M68K_OR8(g_m68k.d[1], 0x18);
    M68K_OR8(g_m68k.d[1], 0x20);
    M68K_OR8(g_m68k.d[1], 0x28);
    M68K_OR8(g_m68k.d[1], 0x30);
    M68K_OR8(g_m68k.d[1], 0x38);
    M68K_OR8(g_m68k.d[1], 0x40);
    /* WARNING: function did not end with RTS */
}

/* $01D514-$01D53C  (10 instructions, 40 bytes) */
void jt_01D514(void) {
    M68K_OR8(g_m68k.d[1], 0x58);
    M68K_OR8(g_m68k.d[1], 0x1c);
    M68K_OR8(g_m68k.d[1], 0xac);
    M68K_OR8(g_m68k.d[1], 0x14);
    M68K_OR8(g_m68k.d[1], 0x28);
    M68K_OR8(g_m68k.d[1], 0xe0);
    M68K_OR8(g_m68k.d[1], 0xf0);
    M68K_OR8(g_m68k.d[1], 0xf0);
    M68K_OR8(g_m68k.d[1], 0xd4);
    M68K_OR8(g_m68k.d[1], 0x48);
    /* WARNING: function did not end with RTS */
}

/* $01D53C-$01D5F0  (45 instructions, 180 bytes) */
void jt_01D53C(void) {
    M68K_OR8(g_m68k.d[1], 0xa4);
    M68K_OR8(g_m68k.d[1], 0xb8);
    M68K_OR8(g_m68k.d[1], 0xcc);
    M68K_OR8(g_m68k.d[1], 0xe0);
    M68K_OR8(g_m68k.d[1], 0xf4);
    M68K_OR8(g_m68k.d[1], 0x8);
    M68K_OR8(g_m68k.d[1], 0x1c);
    M68K_OR8(g_m68k.d[1], 0x30);
    M68K_OR8(g_m68k.d[1], 0x44);
    M68K_OR8(g_m68k.d[1], 0x58);
    M68K_OR8(g_m68k.d[1], 0x6c);
    M68K_OR8(g_m68k.d[1], 0x80);
    M68K_OR8(g_m68k.d[1], 0x94);
    M68K_OR8(g_m68k.d[1], 0xa8);
    M68K_OR8(g_m68k.d[1], 0xbc);
    M68K_OR8(g_m68k.d[1], 0xd0);
    M68K_OR8(g_m68k.d[1], 0xe4);
    M68K_OR8(g_m68k.d[1], 0xf8);
    M68K_OR8(g_m68k.d[1], 0xc);
    M68K_OR8(g_m68k.d[1], 0x20);
    M68K_OR8(g_m68k.d[1], 0x34);
    M68K_OR8(g_m68k.d[1], 0x48);
    M68K_OR8(g_m68k.d[1], 0x5c);
    M68K_OR8(g_m68k.d[1], 0x70);
    M68K_OR8(g_m68k.d[1], 0x84);
    M68K_OR8(g_m68k.d[1], 0x98);
    M68K_OR8(g_m68k.d[1], 0xac);
    M68K_OR8(g_m68k.d[1], 0xc0);
    M68K_OR8(g_m68k.d[1], 0xd4);
    M68K_OR8(g_m68k.d[1], 0xe8);
    M68K_OR8(g_m68k.d[1], 0xfc);
    M68K_OR8(g_m68k.d[1], 0x10);
    M68K_OR8(g_m68k.d[1], 0x24);
    M68K_OR8(g_m68k.d[1], 0x38);
    M68K_OR8(g_m68k.d[1], 0x4c);
    M68K_OR8(g_m68k.d[1], 0x60);
    M68K_OR8(g_m68k.d[1], 0x74);
    M68K_OR8(g_m68k.d[1], 0x88);
    M68K_OR8(g_m68k.d[1], 0x9c);
    M68K_OR8(g_m68k.d[1], 0xb0);
    M68K_OR8(g_m68k.d[1], 0xc4);
    M68K_OR8(g_m68k.d[1], 0xd8);
    M68K_OR8(g_m68k.d[1], 0x14);
    M68K_OR8(g_m68k.d[1], 0x84);
    M68K_OR8(g_m68k.d[1], 0x70);
    /* WARNING: function did not end with RTS */
}

/* $01D5F0-$01D6A4  (45 instructions, 180 bytes) */
void jt_01D5F0(void) {
    M68K_OR8(g_m68k.d[1], 0x28);
    M68K_OR8(g_m68k.d[1], 0x3c);
    M68K_OR8(g_m68k.d[1], 0x50);
    M68K_OR8(g_m68k.d[1], 0x64);
    M68K_OR8(g_m68k.d[1], 0x78);
    M68K_OR8(g_m68k.d[1], 0x8c);
    M68K_OR8(g_m68k.d[1], 0xa0);
    M68K_OR8(g_m68k.d[1], 0xb4);
    M68K_OR8(g_m68k.d[1], 0xc8);
    M68K_OR8(g_m68k.d[1], 0xdc);
    M68K_OR8(g_m68k.d[1], 0xf0);
    M68K_OR8(g_m68k.d[1], 0x4);
    M68K_OR8(g_m68k.d[1], 0x18);
    M68K_OR8(g_m68k.d[1], 0x2c);
    M68K_OR8(g_m68k.d[1], 0x40);
    M68K_OR8(g_m68k.d[1], 0x54);
    M68K_OR8(g_m68k.d[1], 0x68);
    M68K_OR8(g_m68k.d[1], 0x7c);
    M68K_OR8(g_m68k.d[1], 0x90);
    M68K_OR8(g_m68k.d[1], 0xa4);
    M68K_OR8(g_m68k.d[1], 0xb8);
    M68K_OR8(g_m68k.d[1], 0xcc);
    M68K_OR8(g_m68k.d[1], 0xe0);
    M68K_OR8(g_m68k.d[1], 0xf4);
    M68K_OR8(g_m68k.d[1], 0x8);
    M68K_OR8(g_m68k.d[1], 0x1c);
    M68K_OR8(g_m68k.d[1], 0x30);
    M68K_OR8(g_m68k.d[1], 0x44);
    M68K_OR8(g_m68k.d[1], 0x58);
    M68K_OR8(g_m68k.d[1], 0x6c);
    M68K_OR8(g_m68k.d[1], 0x80);
    M68K_OR8(g_m68k.d[1], 0x94);
    M68K_OR8(g_m68k.d[1], 0xa8);
    M68K_OR8(g_m68k.d[1], 0xbc);
    M68K_OR8(g_m68k.d[1], 0xd0);
    M68K_OR8(g_m68k.d[1], 0xe4);
    M68K_OR8(g_m68k.d[1], 0xf8);
    M68K_OR8(g_m68k.d[1], 0xc);
    M68K_OR8(g_m68k.d[1], 0x20);
    M68K_OR8(g_m68k.d[1], 0x34);
    M68K_OR8(g_m68k.d[1], 0x48);
    M68K_OR8(g_m68k.d[1], 0x5c);
    M68K_OR8(g_m68k.d[1], 0x98);
    M68K_OR8(g_m68k.d[1], 0x0);
    M68K_OR8(g_m68k.d[1], 0xec);
    /* WARNING: function did not end with RTS */
}

/* $01D6A4-$01D6A8  (1 instructions, 4 bytes) */
void jt_01D6A4(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    /* WARNING: function did not end with RTS */
}

/* $01D6B8-$01D6C4  (5 instructions, 12 bytes) */
void jt_01D6B8(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    /* TODO $01D6BC: roxr.l d1, d5  [E2 B5] */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_LSL8(g_m68k.d[7], 0x1);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $01D6CC-$01D6D0  (1 instructions, 4 bytes) */
void jt_01D6CC(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    /* WARNING: function did not end with RTS */
}

/* $01D6E0-$01D6F4  (9 instructions, 20 bytes) */
void jt_01D6E0(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_LSL8(g_m68k.d[1], 0x1);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_LSL8(g_m68k.d[3], 0x1);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_LSL8(g_m68k.d[2], 0x1);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_LSL8(g_m68k.d[4], 0x1);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $01D6F4-$01D708  (9 instructions, 20 bytes) */
void jt_01D6F4(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    /* TODO $01D6F8: roxr.l d1, d5  [E2 B5] */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_LSL8(g_m68k.d[7], 0x1);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_LSL8(g_m68k.d[3], 0x1);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_LSL8(g_m68k.d[5], 0x1);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $01D708-$01D71C  (9 instructions, 20 bytes) */
void jt_01D708(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    /* TODO $01D70C: roxr.l d1, d5  [E2 B5] */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_LSL8(g_m68k.d[5], 0x1);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_LSL8(g_m68k.d[3], 0x1);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_LSL8(g_m68k.d[0], 0x3);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $01D71C-$01D730  (9 instructions, 20 bytes) */
void jt_01D71C(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    /* TODO $01D720: roxl.w d4, d2  [E9 72] */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* TODO $01D724: roxl.w d4, d6  [E9 76] */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* TODO $01D728: roxl.w d4, d3  [E9 73] */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* TODO $01D72C: roxl.w d4, d7  [E9 77] */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $01D730-$01D744  (9 instructions, 20 bytes) */
void jt_01D730(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    /* TODO $01D734: roxl.w d4, d4  [E9 74] */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_LSL8(g_m68k.d[5], 0x1);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* TODO $01D73C: roxl.w d4, d5  [E9 75] */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_LSL8(g_m68k.d[6], 0x1);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $01D744-$01D758  (9 instructions, 20 bytes) */
void jt_01D744(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_ROL16(g_m68k.d[0], g_m68k.d[4]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_LSL32(g_m68k.d[2], 0x4);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_ROL16(g_m68k.d[1], g_m68k.d[4]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_LSL32(g_m68k.d[3], 0x4);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $01D758-$01D76C  (8 instructions, 20 bytes) */
void jt_01D758(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_LSL32(g_m68k.d[4], 0x4);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* TODO $01D764: roxr.l d1, d4  [E2 B4] */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_LSL32(g_m68k.d[5], 0x4);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $01D76C-$01D780  (9 instructions, 20 bytes) */
void jt_01D76C(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_ROL16(g_m68k.d[2], g_m68k.d[4]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_LSL32(g_m68k.d[6], 0x4);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_ROL16(g_m68k.d[3], g_m68k.d[4]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_LSL32(g_m68k.d[7], 0x4);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $01D780-$01D794  (8 instructions, 20 bytes) */
void jt_01D780(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    /* TODO $01D784: roxr.l d1, d3  [E2 B3] */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_LSL8(g_m68k.d[3], 0x1);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_LSL32(g_m68k.d[0], 0x4);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $01D794-$01D7A8  (9 instructions, 20 bytes) */
void jt_01D794(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_ROL16(g_m68k.d[4], g_m68k.d[4]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_LSL32(g_m68k.d[1], 0x4);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_ROL16(g_m68k.d[5], g_m68k.d[4]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_LSL32(g_m68k.d[2], 0x4);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $01D7A8-$01D7BC  (9 instructions, 20 bytes) */
void jt_01D7A8(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_ROL16(g_m68k.d[6], g_m68k.d[4]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_LSL32(g_m68k.d[3], 0x4);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_ROL16(g_m68k.d[7], g_m68k.d[4]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_LSL32(g_m68k.d[4], 0x4);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $01D7BC-$01D7D0  (9 instructions, 20 bytes) */
void jt_01D7BC(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_LSL32(g_m68k.d[0], 0x4);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_LSL32(g_m68k.d[5], 0x4);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_LSL8(g_m68k.d[2], 0x1);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_LSL8(g_m68k.d[4], 0x1);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $01D7D0-$01D7E4  (9 instructions, 20 bytes) */
void jt_01D7D0(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    /* TODO $01D7D4: roxr.l d1, d5  [E2 B5] */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_LSL8(g_m68k.d[5], 0x1);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_LSL32(g_m68k.d[1], 0x4);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_LSL32(g_m68k.d[6], 0x4);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $01D7E4-$01D7E8  (1 instructions, 4 bytes) */
void jt_01D7E4(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    /* WARNING: function did not end with RTS */
}

/* $01D7F8-$01D80C  (9 instructions, 20 bytes) */
void jt_01D7F8(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    /* TODO $01D7FC: roxr.l d1, d5  [E2 B5] */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_LSL8(g_m68k.d[5], 0x1);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* TODO $01D804: roxl.l #$4, d0  [E9 90] */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_ROL32(g_m68k.d[0], 0x4);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $01D80C-$01D81C  (7 instructions, 16 bytes) */
void jt_01D80C(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_LSL8(g_m68k.d[4], 0x1);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_LSL8(g_m68k.d[6], 0x1);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* TODO $01D818: roxr.l d1, d6  [E2 B6] */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $01D820-$01D834  (9 instructions, 20 bytes) */
void jt_01D820(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    /* TODO $01D824: roxl.l #$4, d1  [E9 91] */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_ROL32(g_m68k.d[1], 0x4);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* TODO $01D82C: roxl.l #$4, d2  [E9 92] */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_ROL32(g_m68k.d[2], 0x4);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}
