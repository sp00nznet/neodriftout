/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $012252 - $013292 */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

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

/* $01229E-$0122C4  (8 instructions, 38 bytes) */
void sub_01229E(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[7]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    g_m68k.a[2] = 0x3C0002;
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], 0x0122C4);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1020A0))); M68K_TST16((uint16_t)g_m68k.d[0]);
    if (M68K_CC_EQ) { func_table_call(0x0133A0); return; }
    M68K_CMP16(g_m68k.d[0], 0x8);
    if (M68K_CC_LS) { func_table_call(0x013362); return; }
    { func_table_call(0x013330); return; }
    /* WARNING: function did not end with RTS */
}

/* $0122C4-$012384  (44 instructions, 192 bytes) */
void sub_0122C4(void) {
    M68K_TST16(bus_read16(0x102224));
    if (M68K_CC_NE) { func_table_call(0x0122C4); return; }
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
    func_table_call(0x012384); /* sub_012384 */
    func_table_call(0x013166); /* sub_013166 */
    func_table_call(0x013246); /* sub_013246 */
    func_table_call(0x0132D4); /* sub_0132D4 */
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
}

/* $012384-$0123C4  (19 instructions, 64 bytes) */
void sub_012384(void) {
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

/* $0127FA-$012848  (33 instructions, 78 bytes) */
void jt_0127FA(void) {
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
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x2); bus_write16(g_m68k.a[2] + 0x2, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    return;
}

/* $012848-$012896  (34 instructions, 78 bytes) */
void jt_012848(void) {
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
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x2); bus_write16(g_m68k.a[2] + 0x2, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    return;
}

/* $012896-$01291C  (52 instructions, 134 bytes) */
void jt_012896(void) {
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
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x2); bus_write16(g_m68k.a[2] + 0x2, _mv); M68K_TST16(_mv); }
    return;
loc_0128E4:
    M68K_LSL16(g_m68k.d[2], 0x8);
    g_m68k.a[6] = 0x01291C;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[0] + 0xe))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_SUB16(g_m68k.d[0], 0x1);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[6] = bus_read32(g_m68k.a[6] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    g_m68k.a[4] = bus_read32(g_m68k.a[0] + 0x10);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[0] + 0xc))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_SUB16(g_m68k.d[0], 0x1);
loc_012904:
    m68k_set_sr(m68k_get_sr() | 0x700);
    { uint16_t _mv = (uint16_t)(g_m68k.d[4]); bus_write16(g_m68k.a[2] + (-0x2), _mv); M68K_TST16(_mv); }
    func_table_call(g_m68k.a[6]);
    m68k_set_sr(m68k_get_sr() & 0xf8ff);
    M68K_ADD16(g_m68k.d[4], 0x40);
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[0]; _cnt--; g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_012904; } }
    return;
}

/* $01295C-$0129B0  (23 instructions, 84 bytes) */
void jt_01295C(void) {
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(g_m68k.a[2] + 0x2, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
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

/* $0129B0-$012A0A  (27 instructions, 90 bytes) */
void jt_0129B0(void) {
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(g_m68k.a[2] + 0x2, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
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

/* $012A0A-$012A6A  (31 instructions, 96 bytes) */
void jt_012A0A(void) {
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(g_m68k.a[2] + 0x2, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
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

/* $012A6A-$012AD0  (35 instructions, 102 bytes) */
void jt_012A6A(void) {
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(g_m68k.a[2] + 0x2, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
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

/* $012AD0-$012B3C  (39 instructions, 108 bytes) */
void jt_012AD0(void) {
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(g_m68k.a[2] + 0x2, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
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

/* $012B3C-$012BAE  (43 instructions, 114 bytes) */
void jt_012B3C(void) {
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(g_m68k.a[2] + 0x2, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
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

/* $012BAE-$012C26  (47 instructions, 120 bytes) */
void jt_012BAE(void) {
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(g_m68k.a[2] + 0x2, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
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

/* $012C26-$012CA4  (51 instructions, 126 bytes) */
void jt_012C26(void) {
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(g_m68k.a[2] + 0x2, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
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

/* $012CA4-$012D28  (55 instructions, 132 bytes) */
void jt_012CA4(void) {
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(g_m68k.a[2] + 0x2, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
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

/* $012D28-$012DB2  (59 instructions, 138 bytes) */
void jt_012D28(void) {
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(g_m68k.a[2] + 0x2, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(0x2); bus_write16(g_m68k.a[2] + 0x2, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    return;
}

/* $012DB2-$012E42  (63 instructions, 144 bytes) */
void jt_012DB2(void) {
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(g_m68k.a[2] + 0x2, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(0x2); bus_write16(g_m68k.a[2] + 0x2, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    return;
}

/* $012E42-$012ED8  (67 instructions, 150 bytes) */
void jt_012E42(void) {
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(g_m68k.a[2] + 0x2, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(0x2); bus_write16(g_m68k.a[2] + 0x2, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    return;
}

/* $012ED8-$012F74  (71 instructions, 156 bytes) */
void jt_012ED8(void) {
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(g_m68k.a[2] + 0x2, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(0x2); bus_write16(g_m68k.a[2] + 0x2, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    return;
}

/* $012F74-$013016  (75 instructions, 162 bytes) */
void jt_012F74(void) {
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(g_m68k.a[2] + 0x2, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(0x2); bus_write16(g_m68k.a[2] + 0x2, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    return;
}

/* $013016-$0130BE  (79 instructions, 168 bytes) */
void jt_013016(void) {
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(g_m68k.a[2] + 0x2, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(0x2); bus_write16(g_m68k.a[2] + 0x2, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    return;
}

/* $0130BE-$013166  (82 instructions, 168 bytes) */
void jt_0130BE(void) {
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(g_m68k.a[2] + 0x2, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    g_m68k.a[4] += 0x1;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* nop */
    return;
}

/* $013166-$0131AA  (21 instructions, 68 bytes) */
void sub_013166(void) {
    M68K_CMP16(bus_read16(g_m68k.a[0] + 0x8), 0x10);
    if (M68K_CC_CS) { func_table_call(0x01322E); return; }
    g_m68k.a[6] = 0x01322A;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[0] + 0xc))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[6] -= (int16_t)(uint16_t)(g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[0] + 0x8))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_LSL16(g_m68k.d[0], 0x4);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[2]);
    M68K_AND16(g_m68k.d[2], 0xf0);
    M68K_ADD16(g_m68k.d[2], g_m68k.d[2]);
    M68K_ADD16(g_m68k.d[2], g_m68k.d[2]);
    g_m68k.a[4] = 0x0292E2;
    g_m68k.a[4] += (int16_t)(uint16_t)(g_m68k.d[2]);
    M68K_SUB16(g_m68k.d[0], 0x100);
    M68K_AND16(g_m68k.d[0], 0xf00);
    M68K_ADD16(g_m68k.d[0], bus_read16(g_m68k.a[0] + 0xa));
    M68K_SUB16(g_m68k.d[0], 0x1);
    g_m68k.a[5] = g_m68k.d[5];
    { func_table_call(g_m68k.a[6]); return; }
    /* WARNING: function did not end with RTS */
}

/* $0131E2-$0131EA  (4 instructions, 8 bytes) */
void sub_0131E2(void) {
    M68K_ADD16(g_m68k.d[0], _postinc16(4));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[5], _mv); g_m68k.a[5] += 2; M68K_TST16(_mv); }
    M68K_ADD16(g_m68k.d[0], _postinc16(4));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[5], _mv); g_m68k.a[5] += 2; M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0131EA-$013212  (20 instructions, 40 bytes) */
void sub_0131EA(void) {
    M68K_ADD16(g_m68k.d[0], _postinc16(4));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[5], _mv); g_m68k.a[5] += 2; M68K_TST16(_mv); }
    M68K_ADD16(g_m68k.d[0], _postinc16(4));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[5], _mv); g_m68k.a[5] += 2; M68K_TST16(_mv); }
    M68K_ADD16(g_m68k.d[0], _postinc16(4));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[5], _mv); g_m68k.a[5] += 2; M68K_TST16(_mv); }
    M68K_ADD16(g_m68k.d[0], _postinc16(4));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[5], _mv); g_m68k.a[5] += 2; M68K_TST16(_mv); }
    M68K_ADD16(g_m68k.d[0], _postinc16(4));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[5], _mv); g_m68k.a[5] += 2; M68K_TST16(_mv); }
    M68K_ADD16(g_m68k.d[0], _postinc16(4));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[5], _mv); g_m68k.a[5] += 2; M68K_TST16(_mv); }
    M68K_ADD16(g_m68k.d[0], _postinc16(4));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[5], _mv); g_m68k.a[5] += 2; M68K_TST16(_mv); }
    M68K_ADD16(g_m68k.d[0], _postinc16(4));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[5], _mv); g_m68k.a[5] += 2; M68K_TST16(_mv); }
    M68K_ADD16(g_m68k.d[0], _postinc16(4));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[5], _mv); g_m68k.a[5] += 2; M68K_TST16(_mv); }
    M68K_ADD16(g_m68k.d[0], _postinc16(4));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[5], _mv); g_m68k.a[5] += 2; M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $013212-$01321A  (4 instructions, 8 bytes) */
void sub_013212(void) {
    M68K_ADD16(g_m68k.d[0], _postinc16(4));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[5], _mv); g_m68k.a[5] += 2; M68K_TST16(_mv); }
    M68K_ADD16(g_m68k.d[0], _postinc16(4));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[5], _mv); g_m68k.a[5] += 2; M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $01321A-$013246  (19 instructions, 44 bytes) */
void sub_01321A(void) {
    M68K_ADD16(g_m68k.d[0], _postinc16(4));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[5], _mv); g_m68k.a[5] += 2; M68K_TST16(_mv); }
    M68K_ADD16(g_m68k.d[0], _postinc16(4));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[5], _mv); g_m68k.a[5] += 2; M68K_TST16(_mv); }
    M68K_ADD16(g_m68k.d[0], _postinc16(4));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[5], _mv); g_m68k.a[5] += 2; M68K_TST16(_mv); }
    M68K_ADD16(g_m68k.d[0], _postinc16(4));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[5], _mv); g_m68k.a[5] += 2; M68K_TST16(_mv); }
    g_m68k.d[5] = g_m68k.a[5]; M68K_TST32((uint32_t)g_m68k.d[5]);
    return;
loc_01322E:
    g_m68k.a[5] = g_m68k.d[5];
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[0] + 0xa))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_SUB16(g_m68k.d[0], 0x1);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[0] + 0xc))); M68K_TST16((uint16_t)g_m68k.d[2]);
    M68K_SUB16(g_m68k.d[2], 0x1);
loc_01323C:
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[5], _mv); g_m68k.a[5] += 2; M68K_TST16(_mv); }
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[2]; _cnt--; g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_01323C; } }
    g_m68k.d[5] = g_m68k.a[5]; M68K_TST32((uint32_t)g_m68k.d[5]);
    return;
}

/* $013246-$013272  (14 instructions, 44 bytes) */
void sub_013246(void) {
    M68K_CMP16(bus_read16(g_m68k.a[0] + 0x8), 0x10);
    if (M68K_CC_CS) { func_table_call(0x0132B6); return; }
    g_m68k.a[5] = g_m68k.d[6];
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[0] + 0x6))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_NEG16(g_m68k.d[0]);
    M68K_LSL16(g_m68k.d[0], 0x7);
    M68K_OR16(g_m68k.d[0], bus_read16(g_m68k.a[0] + 0xe));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[5], _mv); g_m68k.a[5] += 2; M68K_TST16(_mv); }
    g_m68k.d[0] = (uint32_t)(int32_t)(int8_t)(0x40); M68K_TST32(g_m68k.d[0]);
    g_m68k.a[6] = 0x0132B2;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[0] + 0xc))); M68K_TST16((uint16_t)g_m68k.d[2]);
    M68K_ADD16(g_m68k.d[2], g_m68k.d[2]);
    g_m68k.a[6] -= (int16_t)(uint16_t)(g_m68k.d[2]);
    { func_table_call(g_m68k.a[6]); return; }
    /* WARNING: function did not end with RTS */
}

/* $01328E-$013292  (2 instructions, 4 bytes) */
void sub_01328E(void) {
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[5], _mv); g_m68k.a[5] += 2; M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[5], _mv); g_m68k.a[5] += 2; M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}
