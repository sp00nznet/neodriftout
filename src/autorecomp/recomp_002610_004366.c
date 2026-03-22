/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $002610 - $004366 */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

/* $002610-$0026B8  (40 instructions, 168 bytes) */
void jt_002610(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    func_table_call(0x011F22);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    func_table_call(0x003070); /* sub_003070 */
    func_table_call(0x00338C); /* loc_00338C */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x4)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x0028C6); /* sub_0028C6 */
    func_table_call(0x0028EC); /* sub_0028EC */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x6)); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[4] = bus_read32(0x08002C);
    g_m68k.a[4] = (g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    g_m68k.a[5] = (g_m68k.a[4] + 0xc);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x10)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x60)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x100)); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0x100)); M68K_TST16((uint16_t)g_m68k.d[3]);
    func_table_call(0x01348E);
    g_m68k.a[6] = 0x003418;
    g_m68k.a[5] = bus_read32(0x10046E);
    g_m68k.a[0] = _postinc32(5);
    func_table_call(0x002928); /* sub_002928 */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    func_table_call(0x012286);
    g_m68k.a[6] = 0x003420;
    g_m68k.a[0] = _postinc32(5);
    func_table_call(0x002928); /* sub_002928 */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    g_m68k.a[6] = 0x003428;
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[7]);
loc_00268C:
    g_m68k.a[0] = _postinc32(5);
    func_table_call(0x002928); /* sub_002928 */
    func_table_call(0x012286);
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[7]; _cnt--; g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_00268C; } }
    g_m68k.a[6] = bus_read32(0x100472);
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[6] + 0x14)); bus_write16(0x10047A, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x8); bus_write16(0x10048A, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $0026B8-$0027F6  (65 instructions, 318 bytes) */
void jt_0026B8(void) {
    g_m68k.a[6] = bus_read32(0x100472);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x8))); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x002FB4); /* sub_002FB4 */
    func_table_call(0x00295A); /* loc_00295A */
    M68K_CMP16(g_m68k.d[1], 0x0);
    if (M68K_CC_EQ) goto loc_002706;
    { uint32_t _ea = 0x10047A; uint16_t _tmp = bus_read16(_ea); M68K_SUB16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    if (M68K_CC_PL) goto loc_0027E4;
    func_table_call(0x000A26);
    func_table_call(0x0133FA);
    func_table_call(0x0120E0);
    g_m68k.a[0] = bus_read32(0x10046E);
    func_table_call(0x0110A2);
    { uint16_t _mv = (uint16_t)(0x9); bus_write16(0x10048A, _mv); M68K_TST16(_mv); }
    goto loc_0027E4;
loc_002706:
    { uint32_t _ea = 0x100482; uint16_t _tmp = bus_read16(_ea); M68K_SUB16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    if (M68K_CC_PL) goto loc_00272C;
    bus_write16(0x100482, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    g_m68k.a[5] = bus_read32(0x10046E);
    g_m68k.a[0] = bus_read32(g_m68k.a[5]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x012286);
    func_table_call(0x0029B6); /* loc_0029B6 */
loc_00272C:
    { uint32_t _ea = 0x100484; uint16_t _tmp = bus_read16(_ea); M68K_SUB16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    if (M68K_CC_PL) goto loc_0027E4;
    { uint32_t _ea = 0x100486; uint16_t _tmp = bus_read16(_ea); M68K_SUB16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    if (M68K_CC_MI) goto loc_00274E;
    if (M68K_CC_NE) goto loc_002754;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x184c)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x015256);
loc_00274E:
    bus_write16(0x100486, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
loc_002754:
    { uint32_t _ea = 0x100488; uint16_t _tmp = bus_read16(_ea); M68K_SUB16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    if (M68K_CC_MI) goto loc_00276C;
    if (M68K_CC_NE) goto loc_002772;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x184d)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x015256);
loc_00276C:
    bus_write16(0x100488, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
loc_002772:
    bus_write16(0x100484, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    g_m68k.a[0] = 0x003438;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x7219)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x9)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x300)); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x011A34);
    g_m68k.a[0] = 0x00344C;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x721a)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x9)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x300)); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x011A34);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.a[6] = 0x003428;
    g_m68k.a[5] = bus_read32(0x10046E);
    g_m68k.a[5] = (g_m68k.a[5] + 0x8);
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[7]);
loc_0027C0:
    g_m68k.a[0] = _postinc32(5);
    func_table_call(0x012286);
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[7]; _cnt--; g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_0027C0; } }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x011F22);
    g_m68k.a[6] = bus_read32(0x100472);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xa))); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x002FE6); /* loc_002FE6 */
loc_0027E4:
    func_table_call(0x01229E);
    func_table_call(0x013546);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $0027F6-$002800  (2 instructions, 10 bytes) */
void jt_0027F6(void) {
    M68K_TST16(bus_read16(0x10036E));
    if (M68K_CC_PL) { func_table_call(0x002806); return; }
    /* WARNING: function did not end with RTS */
}

/* $002800-$00284E  (14 instructions, 78 bytes) */
void jt_002800(void) {
    bus_write16(0x10036E, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
loc_002806:
    { uint32_t _ea = 0x10036E; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    M68K_CMP16(bus_read16(0x10036E), 0x6);
    if (M68K_CC_LE) goto loc_00281E;
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(0x10036E, _mv); M68K_TST16(_mv); }
loc_00281E:
    { uint16_t _mv = (uint16_t)(bus_read16(0x10036E)); bus_write16(0x101202, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x00D704);
    func_table_call(0x01C77A);
    M68K_CMP16(g_m68k.d[0], 0x0);
    if (M68K_CC_NE) goto loc_002848;
    { uint16_t _mv = (uint16_t)(0xa); bus_write16(0x10048A, _mv); M68K_TST16(_mv); }
loc_002848:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00284E-$002868  (5 instructions, 26 bytes) */
void jt_00284E(void) {
    func_table_call(0x01C788);
    M68K_CMP16(g_m68k.d[0], 0x0);
    if (M68K_CC_NE) goto loc_002864;
    { uint16_t _mv = (uint16_t)(0xb); bus_write16(0x10048A, _mv); M68K_TST16(_mv); }
loc_002864:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $002868-$00286A  (1 instructions, 2 bytes) */
void jt_002868(void) {
    return;
}

/* $00286A-$00288C  (7 instructions, 34 bytes) */
void jt_00286A(void) {
    func_table_call(0x000A26);
    func_table_call(0x005B96);
    M68K_CMP16(g_m68k.d[0], 0x0);
    if (M68K_CC_NE) goto loc_002886;
    { uint16_t _mv = (uint16_t)(0xc); bus_write16(0x10048A, _mv); M68K_TST16(_mv); }
loc_002886:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00288C-$0028A8  (6 instructions, 28 bytes) */
void jt_00288C(void) {
    func_table_call(0x005BDA);
    M68K_CMP16(g_m68k.d[0], 0x0);
    if (M68K_CC_NE) goto loc_0028A2;
    { uint16_t _mv = (uint16_t)(0xd); bus_write16(0x10048A, _mv); M68K_TST16(_mv); }
loc_0028A2:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $0028A8-$0028C6  (6 instructions, 30 bytes) */
void jt_0028A8(void) {
    func_table_call(0x0120E0);
    func_table_call(0x0133FA);
    g_m68k.a[0] = bus_read32(0x10046E);
    func_table_call(0x0110A2);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $0028C6-$0028EC  (9 instructions, 38 bytes) */
void sub_0028C6(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    func_table_call(0x010F96);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    bus_write32(0x10046E, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    func_table_call(0x010FCC);
    { uint32_t _mv = (uint32_t)(g_m68k.a[0]); bus_write32(0x10046E, _mv); M68K_TST32(_mv); }
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}

/* $0028EC-$002900  (5 instructions, 20 bytes) */
void sub_0028EC(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    g_m68k.a[6] = bus_read32(0x10046E);
    M68K_SUB16(g_m68k.d[0], 0x1);
loc_0028F8:
    func_table_call(0x012202);
    { uint32_t _mv = (uint32_t)(g_m68k.a[0]); bus_write32(g_m68k.a[6], _mv); g_m68k.a[6] += 4; M68K_TST32(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $002900-$00290A  (3 instructions, 10 bytes) */
void jt_002900(void) {
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[0]; _cnt--; g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { func_table_call(0x0028F8); return; } }
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}

/* $002928-$002A14  (59 instructions, 236 bytes) */
void sub_002928(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(_postinc16(6))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[3] = bus_read32(0x08002C);
    g_m68k.a[3] = bus_read32(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    func_table_call(0x012270);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(_postinc16(6))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(_postinc16(6))); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x01225C);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(_postinc16(6))); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x012256);
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
loc_00295A:
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    g_m68k.d[2] = bus_read32(0x100476); M68K_TST32((uint32_t)g_m68k.d[2]);
    g_m68k.a[6] = bus_read32(0x100472);
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[6] + 0x1e));
    M68K_SWAP(g_m68k.d[2]);
    M68K_CMP16(g_m68k.d[2], 0x100);
    if (M68K_CC_LS) goto loc_002982;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x100)); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[1]);
loc_002982:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x10)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x01352A);
    M68K_SWAP(g_m68k.d[2]);
    { uint32_t _mv = (uint32_t)(g_m68k.d[2]); bus_write32(0x100476, _mv); M68K_TST32(_mv); }
    M68K_SWAP(g_m68k.d[2]);
    g_m68k.a[0] = bus_read32(0x10046E);
    g_m68k.a[0] = bus_read32(g_m68k.a[0] + 0x4);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x100)); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_SUB16(g_m68k.d[0], g_m68k.d[2]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    func_table_call(0x01225C);
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
loc_0029B6:
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x100480))); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_CMP16(g_m68k.d[1], 0xef);
    if (M68K_CC_LS) goto loc_0029D2;
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0xef)); M68K_TST16((uint16_t)g_m68k.d[1]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); bus_write16(0x100480, _mv); M68K_TST16(_mv); }
loc_0029D2:
    g_m68k.a[5] = bus_read32(0x10046E);
    g_m68k.a[0] = bus_read32(g_m68k.a[5]);
    M68K_ADD16(g_m68k.d[1], g_m68k.d[1]);
    g_m68k.a[6] = 0x002A14;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0 + (int16_t)(uint16_t)g_m68k.d[1]))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.a[6] = 0x002BF4;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0 + (int16_t)(uint16_t)g_m68k.d[1]))); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x01225C);
    g_m68k.a[6] = 0x002DD4;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0 + (int16_t)(uint16_t)g_m68k.d[1]))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x012266);
    { uint32_t _ea = 0x100480; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}

/* $002FB4-$003018  (24 instructions, 100 bytes) */
void sub_002FB4(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint32_t _ea = 0x10047C; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[2]); bus_write16(_ea, _tmp); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x10047C))); M68K_TST16((uint16_t)g_m68k.d[2]);
    M68K_CMP16(g_m68k.d[2], 0x100);
    if (M68K_CC_CS) goto loc_002FDC;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x100)); M68K_TST16((uint16_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(0x10047C, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
loc_002FDC:
    func_table_call(0x003070); /* sub_003070 */
    g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
loc_002FE6:
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint32_t _ea = 0x10047E; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[2]); bus_write16(_ea, _tmp); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x10047E))); M68K_TST16((uint16_t)g_m68k.d[2]);
    M68K_CMP16(g_m68k.d[2], 0x100);
    if (M68K_CC_CS) goto loc_00300E;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x100)); M68K_TST16((uint16_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(0x10047E, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
loc_00300E:
    func_table_call(0x00338C); /* loc_00338C */
    g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}

/* $003018-$00302A  (4 instructions, 18 bytes) */
void sub_003018(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint32_t _ea = 0x10047C; uint16_t _tmp = bus_read16(_ea); M68K_SUB16(_tmp, g_m68k.d[2]); bus_write16(_ea, _tmp); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x10047C))); M68K_TST16((uint16_t)g_m68k.d[2]);
    /* WARNING: function did not end with RTS */
}

/* $00302A-$003044  (7 instructions, 26 bytes) */
void jt_00302A(void) {
    if (M68K_CC_PL) goto loc_00303A;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(0x10047C, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
loc_00303A:
    func_table_call(0x003070); /* sub_003070 */
    g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}

/* $003070-$00308C  (7 instructions, 28 bytes) */
void sub_003070(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x40)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x10)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.a[3] = 0x308c;
    func_table_call(0x012036);
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}

/* $003200-$003202  (1 instructions, 2 bytes) */
void jt_003200(void) {
    M68K_BTST(bus_read8(g_m68k.a[5]), g_m68k.d[7]);
    /* WARNING: function did not end with RTS */
}

/* $003228-$00323C  (9 instructions, 20 bytes) */
void jt_003228(void) {
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x0); bus_write8(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[1])); g_m68k.a[7] -= 1; bus_write8(g_m68k.a[7], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[1])); g_m68k.a[0] -= 1; bus_write8(g_m68k.a[0], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[7])); g_m68k.a[3] -= 1; bus_write8(g_m68k.a[3], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(5)); g_m68k.a[3] -= 1; bus_write8(g_m68k.a[3], _mv); M68K_TST8(_mv); }
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[3]))); M68K_TST8((uint8_t)g_m68k.d[5]);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[2])); g_m68k.a[2] -= 1; bus_write8(g_m68k.a[2], _mv); M68K_TST8(_mv); }
    M68K_BTST(bus_read8(g_m68k.a[7]), g_m68k.d[4]);
    { uint8_t _mv = (uint8_t)(_postinc8(7)); g_m68k.a[7] -= 1; bus_write8(g_m68k.a[7], _mv); M68K_TST8(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $00323C-$003254  (8 instructions, 24 bytes) */
void jt_00323C(void) {
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[7])); g_m68k.a[3] -= 1; bus_write8(g_m68k.a[3], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[7] -= 1; bus_write8(g_m68k.a[7], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x0); bus_write8(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[2] -= 1; bus_write8(g_m68k.a[2], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x0); bus_write8(_ea, _tmp); }
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[6]);
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x0); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $003300-$0033A8  (10 instructions, 168 bytes) */
void jt_003300(void) {
    M68K_OR8(g_m68k.d[0], 0x1);
    M68K_OR8(g_m68k.d[5], 0x0);
    M68K_BTST(g_m68k.d[2], g_m68k.d[3]);
loc_00338C:
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x50)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x2)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.a[3] = 0x33a8;
    func_table_call(0x012036);
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}

/* $0033C0-$0033CC  (4 instructions, 12 bytes) */
void jt_0033C0(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x0); bus_write8(_ea, _tmp); }
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(7))); M68K_TST8((uint8_t)g_m68k.d[6]);
    M68K_ADD8(g_m68k.d[4], 0xb);
    M68K_BTST(g_m68k.d[2], g_m68k.d[3]);
    /* WARNING: function did not end with RTS */
}

/* $003428-$003440  (5 instructions, 24 bytes) */
void jt_003428(void) {
    M68K_OR8(g_m68k.d[2], 0x10);
    { uint32_t _ea = (g_m68k.a[0] + 0x4); uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x1); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xc0); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[1], 0x20);
    { uint16_t _mv = (uint16_t)(bus_read16(0x39362056)); g_m68k.a[0] -= 2; bus_write16(g_m68k.a[0], _mv); M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $00343C-$003440  (1 instructions, 4 bytes) */
void jt_00343C(void) {
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[6] + 0x56 + (int16_t)(uint16_t)g_m68k.d[2])); g_m68k.a[4] -= 2; bus_write16(g_m68k.a[4], _mv); M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $003462-$0034BC  (16 instructions, 90 bytes) */
void sub_003462(void) {
    func_table_call(0x000A26);
    func_table_call(0x0120E0);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x100)); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x003B34); /* loc_003B34 */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    func_table_call(0x011602);
    bus_write16(0x10049E, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    bus_write16(0x1004A8, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    bus_write16(0x1004AA, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    bus_write8(0x1004A6, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint16_t _mv = (uint16_t)(0x18); bus_write16(0x1004A4, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x3b); bus_write16(0x10049C, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x140); bus_write16(0x1004A0, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0xff00); bus_write16(0x1004A2, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x20)); M68K_TST16((uint16_t)g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0034BC-$0034D8  (6 instructions, 28 bytes) */
void jt_0034BC(void) {
    func_table_call(0x00382A);
    func_table_call(0x003850);
    func_table_call(0x0039B0); /* loc_0039B0 */
    bus_write16(0x1011FA, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $0034D8-$0034F0  (7 instructions, 24 bytes) */
void sub_0034D8(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1004A8))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[0] = bus_read32(0x34f0 + (int16_t)(uint16_t)g_m68k.d[0]);
    func_table_call(g_m68k.a[0]);
    func_table_call(0x01229E);
    return;
}

/* $003504-$003566  (21 instructions, 98 bytes) */
void jt_003504(void) {
    g_m68k.a[5] = bus_read32(0x10048C);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(0x3)); M68K_TST16((uint16_t)g_m68k.d[7]);
loc_003510:
    g_m68k.a[0] = _postinc32(5);
    func_table_call(0x012286);
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[7]; _cnt--; g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_003510; } }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(0x1b)); M68K_TST16((uint16_t)g_m68k.d[7]);
loc_003524:
    g_m68k.a[0] = _postinc32(5);
    func_table_call(0x012286);
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[7]; _cnt--; g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_003524; } }
    func_table_call(0x00386E); /* loc_00386E */
    { uint32_t _ea = 0x10049E; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    M68K_CMP16(bus_read16(0x10049E), 0x1d);
    if (M68K_CC_LS) goto loc_003560;
    { uint16_t _mv = (uint16_t)(0x1d); bus_write16(0x10049E, _mv); M68K_TST16(_mv); }
    { uint32_t _ea = 0x10049C; uint16_t _tmp = bus_read16(_ea); M68K_SUB16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    if (M68K_CC_PL) goto loc_003560;
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(0x1004A8, _mv); M68K_TST16(_mv); }
loc_003560:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $003566-$00362A  (44 instructions, 196 bytes) */
void jt_003566(void) {
    M68K_CMP16(bus_read16(0x1004A0), 0x20);
    if (M68K_CC_GE) goto loc_00357A;
    { uint16_t _mv = (uint16_t)(0x20); bus_write16(0x1004A0, _mv); M68K_TST16(_mv); }
loc_00357A:
    M68K_CMP16(bus_read16(0x1004A2), 0x20);
    if (M68K_CC_LT) goto loc_00359E;
    { uint16_t _mv = (uint16_t)(0x20); bus_write16(0x1004A2, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0xd1); bus_write16(0x10049C, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x2); bus_write16(0x1004A8, _mv); M68K_TST16(_mv); }
loc_00359E:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1011FA))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[6] = 0x0035B6;
    g_m68k.a[6] = bus_read32(g_m68k.a[6] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    goto loc_0035C2;
    M68K_OR8(g_m68k.d[0], 0x50);
    M68K_OR8(g_m68k.d[0], 0x60);
    M68K_OR8(g_m68k.d[0], 0x70);
loc_0035C2:
    g_m68k.a[5] = bus_read32(0x10048C);
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[7]);
loc_0035CC:
    g_m68k.a[0] = _postinc32(5);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(_postinc16(6))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[3] = bus_read32(0x080040);
    g_m68k.a[3] = bus_read32(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    func_table_call(0x012270);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1004A0))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], _postinc16(6));
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(_postinc16(6))); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x01225C);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_CMP16(g_m68k.d[1], 0x140);
    if (M68K_CC_LE) goto loc_003604;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
loc_003604:
    func_table_call(0x012286);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(_postinc16(6))); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x012256);
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[7]; _cnt--; g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_0035CC; } }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1011FA))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[6] = 0x00362E;
    g_m68k.a[6] = bus_read32(g_m68k.a[6] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $003628-$003640  (6 instructions, 24 bytes) */
void jt_003628(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    goto loc_00363A;
    M68K_OR8(g_m68k.d[0], 0x80);
    M68K_OR8(g_m68k.d[0], 0x90);
    M68K_OR8(g_m68k.d[0], 0xa0);
loc_00363A:
    g_m68k.a[5] = bus_read32(0x10048C);
    /* WARNING: function did not end with RTS */
}

/* $00363C-$0036A4  (27 instructions, 104 bytes) */
void jt_00363C(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x8c); bus_write8(_ea, _tmp); }
    g_m68k.a[5] = (g_m68k.a[5] + 0x8);
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[7]);
loc_003648:
    g_m68k.a[0] = _postinc32(5);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(_postinc16(6))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[3] = bus_read32(0x080040);
    g_m68k.a[3] = bus_read32(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    func_table_call(0x012270);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1004A2))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], _postinc16(6));
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(_postinc16(6))); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x01225C);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_CMP16(g_m68k.d[1], 0xff80);
    if (M68K_CC_GE) goto loc_003680;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
loc_003680:
    func_table_call(0x012286);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(_postinc16(6))); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x012256);
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[7]; _cnt--; g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_003648; } }
    { uint32_t _ea = 0x1004A0; uint16_t _tmp = bus_read16(_ea); M68K_SUB16(_tmp, 0x8); bus_write16(_ea, _tmp); }
    { uint32_t _ea = 0x1004A2; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0x8); bus_write16(_ea, _tmp); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $0036A4-$0037AE  (47 instructions, 266 bytes) */
void jt_0036A4(void) {
    g_m68k.a[6] = bus_read32(0x100490);
    M68K_CMP16(bus_read16(0x1011FA), 0x0);
    if (M68K_CC_EQ) goto loc_0036CE;
    g_m68k.a[6] = bus_read32(0x100494);
    M68K_CMP16(bus_read16(0x1011FA), 0x1);
    if (M68K_CC_EQ) goto loc_0036CE;
    g_m68k.a[6] = bus_read32(0x100498);
loc_0036CE:
    func_table_call(0x00F172);
    { uint16_t _mv = (uint16_t)(0xe0); bus_write16(g_m68k.a[6] + 0xc8, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x50); bus_write16(g_m68k.a[6] + 0xcc, _mv); M68K_TST16(_mv); }
    M68K_CMP16(bus_read16(0x1011FA), 0x0);
    if (M68K_CC_NE) goto loc_0036F2;
    { uint16_t _mv = (uint16_t)(0x48); bus_write16(g_m68k.a[6] + 0xcc, _mv); M68K_TST16(_mv); }
loc_0036F2:
    { uint32_t _ea = 0x1004A4; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, 0x1f); bus_write16(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(bus_read16(0x1004A4)); bus_write16(g_m68k.a[6] + 0x54, _mv); M68K_TST16(_mv); }
    func_table_call(0x00EEA6);
    M68K_BTST(bus_read8(0x1004A6), 0x1);
    if (M68K_CC_EQ) goto loc_003720;
    { uint32_t _ea = 0x1004A4; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    bus_write8(0x1004A6, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
loc_003720:
    { uint32_t _ea = 0x1004A6; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, 0x1); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x10049C; uint16_t _tmp = bus_read16(_ea); M68K_SUB16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    if (M68K_CC_PL) goto loc_0037A8;
    bus_write16(0x10049C, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_TST16(bus_read16(0x1004AA));
    if (M68K_CC_NE) goto loc_003746;
    func_table_call(0x001336);
loc_003746:
    func_table_call(0x011694);
    M68K_CMP16(g_m68k.d[0], 0x1);
    if (M68K_CC_EQ) goto loc_0037A8;
    func_table_call(0x001340);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    g_m68k.a[5] = bus_read32(0x10048C);
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(0x1f)); M68K_TST16((uint16_t)g_m68k.d[7]);
loc_003766:
    g_m68k.a[0] = _postinc32(5);
    func_table_call(0x012286);
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[7]; _cnt--; g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_003766; } }
    func_table_call(0x00F19E);
    { uint16_t _mv = (uint16_t)(0xe0); bus_write16(g_m68k.a[6] + 0xc8, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x190); bus_write16(g_m68k.a[6] + 0xcc, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x18); bus_write16(g_m68k.a[6] + 0x54, _mv); M68K_TST16(_mv); }
    bus_write8(0x1004A6, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint16_t _mv = (uint16_t)(0x18); bus_write16(0x1004A4, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x1d); bus_write16(0x10049C, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x3); bus_write16(0x1004A8, _mv); M68K_TST16(_mv); }
loc_0037A8:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $0037AE-$003812  (18 instructions, 100 bytes) */
void jt_0037AE(void) {
    { uint32_t _ea = 0x10049C; uint16_t _tmp = bus_read16(_ea); M68K_SUB16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    if (M68K_CC_PL) goto loc_00380C;
    func_table_call(0x000A26);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    func_table_call(0x011602);
    { uint16_t _mv = (uint16_t)(0x4); bus_write16(0x1004A8, _mv); M68K_TST16(_mv); }
    M68K_CMP16(bus_read16(0x1011FA), 0x2);
    if (M68K_CC_CC) goto loc_00380C;
    { uint32_t _ea = 0x1011FA; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    bus_write16(0x1004AA, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    bus_write16(0x10049E, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint16_t _mv = (uint16_t)(0x3b); bus_write16(0x10049C, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x140); bus_write16(0x1004A0, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0xff00); bus_write16(0x1004A2, _mv); M68K_TST16(_mv); }
    bus_write16(0x1004A8, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
loc_00380C:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $003812-$00382A  (5 instructions, 24 bytes) */
void jt_003812(void) {
    func_table_call(0x0120E0);
    g_m68k.a[0] = bus_read32(0x10048C);
    func_table_call(0x0110A2);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00382A-$003850  (9 instructions, 38 bytes) */
void sub_00382A(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    func_table_call(0x010F96);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    bus_write32(0x10048C, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    func_table_call(0x010FCC);
    { uint32_t _mv = (uint32_t)(g_m68k.a[0]); bus_write32(0x10048C, _mv); M68K_TST32(_mv); }
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}

/* $003850-$003A2C  (68 instructions, 476 bytes) */
void sub_003850(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    g_m68k.a[6] = bus_read32(0x10048C);
    M68K_SUB16(g_m68k.d[0], 0x1);
loc_00385C:
    func_table_call(0x012202);
    { uint32_t _mv = (uint32_t)(g_m68k.a[0]); bus_write32(g_m68k.a[6], _mv); g_m68k.a[6] += 4; M68K_TST32(_mv); }
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[0]; _cnt--; g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_00385C; } }
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
loc_00386E:
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1011FA))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[6] = 0x00388A;
    g_m68k.a[6] = bus_read32(g_m68k.a[6] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    goto loc_003896;
    M68K_OR8(g_m68k.d[0], 0xb0);
    M68K_OR8(g_m68k.d[0], 0x90);
    M68K_OR8(g_m68k.d[0], 0x70);
loc_003896:
    g_m68k.a[5] = bus_read32(0x10048C);
    g_m68k.a[5] = (g_m68k.a[5] + 0x10);
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(0x1b)); M68K_TST16((uint16_t)g_m68k.d[7]);
loc_0038A4:
    g_m68k.a[0] = _postinc32(5);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x10049E))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[3] = 0x003942;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x100)); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x012266);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(_postinc16(6))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[3] = bus_read32(0x080040);
    g_m68k.a[3] = bus_read32(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    func_table_call(0x012270);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x10049E))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[3] = 0x003906;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], _postinc16(6));
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(_postinc16(6))); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x01225C);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(_postinc16(6))); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x012256);
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[7]; _cnt--; g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_0038A4; } }
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
loc_0039B0:
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    func_table_call(0x0169A8);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x00D722);
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(0x101202, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x00D704);
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(0x1011FC, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x156)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x010FCC);
    { uint32_t _mv = (uint32_t)(g_m68k.a[0]); bus_write32(0x100490, _mv); M68K_TST32(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x156)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x010FCC);
    { uint32_t _mv = (uint32_t)(g_m68k.a[0]); bus_write32(0x100494, _mv); M68K_TST32(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x156)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x010FCC);
    { uint32_t _mv = (uint32_t)(g_m68k.a[0]); bus_write32(0x100498, _mv); M68K_TST32(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(0x1011FA, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1011FA))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], 0x12);
    func_table_call(0x01690E);
    g_m68k.a[6] = bus_read32(0x100490);
    /* WARNING: function did not end with RTS */
}

/* $003A2C-$003B50  (52 instructions, 292 bytes) */
void jt_003A2C(void) {
    func_table_call(0x00D72A);
    func_table_call(0x00F29C);
    { uint16_t _mv = (uint16_t)(0x100); bus_write16(g_m68k.a[6] + 0x8, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x100); bus_write16(g_m68k.a[6] + 0xa, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x100); bus_write16(g_m68k.a[6] + 0xc, _mv); M68K_TST16(_mv); }
    func_table_call(0x00F130);
    func_table_call(0x00F19E);
    { uint16_t _mv = (uint16_t)(0xe0); bus_write16(g_m68k.a[6] + 0xc8, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x190); bus_write16(g_m68k.a[6] + 0xcc, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x18); bus_write16(g_m68k.a[6] + 0x54, _mv); M68K_TST16(_mv); }
    func_table_call(0x00EEA6);
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(0x1011FA, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1011FA))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], 0x12);
    func_table_call(0x01690E);
    g_m68k.a[6] = bus_read32(0x100494);
    func_table_call(0x00D72A);
    func_table_call(0x00F29C);
    { uint16_t _mv = (uint16_t)(0x100); bus_write16(g_m68k.a[6] + 0x8, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x100); bus_write16(g_m68k.a[6] + 0xa, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x100); bus_write16(g_m68k.a[6] + 0xc, _mv); M68K_TST16(_mv); }
    func_table_call(0x00F130);
    func_table_call(0x00F19E);
    { uint16_t _mv = (uint16_t)(0xe0); bus_write16(g_m68k.a[6] + 0xc8, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x190); bus_write16(g_m68k.a[6] + 0xcc, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x18); bus_write16(g_m68k.a[6] + 0x54, _mv); M68K_TST16(_mv); }
    func_table_call(0x00EEA6);
    { uint16_t _mv = (uint16_t)(0x2); bus_write16(0x1011FA, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1011FA))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], 0x12);
    func_table_call(0x01690E);
    g_m68k.a[6] = bus_read32(0x100498);
    func_table_call(0x00D72A);
    func_table_call(0x00F29C);
    { uint16_t _mv = (uint16_t)(0x100); bus_write16(g_m68k.a[6] + 0x8, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x100); bus_write16(g_m68k.a[6] + 0xa, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x100); bus_write16(g_m68k.a[6] + 0xc, _mv); M68K_TST16(_mv); }
    func_table_call(0x00F130);
    func_table_call(0x00F19E);
    { uint16_t _mv = (uint16_t)(0xe0); bus_write16(g_m68k.a[6] + 0xc8, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x190); bus_write16(g_m68k.a[6] + 0xcc, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x18); bus_write16(g_m68k.a[6] + 0x54, _mv); M68K_TST16(_mv); }
    func_table_call(0x00EEA6);
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
loc_003B34:
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x40)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x10)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.a[3] = 0x3b50;
    func_table_call(0x012036);
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}

/* $003E50-$003E60  (3 instructions, 16 bytes) */
void jt_003E50(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[0]; uint32_t _tmp = bus_read32(_ea); M68K_OR32(_tmp, 0x40001); bus_write32(_ea, _tmp); }
    M68K_OR32(g_m68k.d[0], 0x900004);
    /* WARNING: function did not end with RTS */
}

/* $003E60-$003E70  (3 instructions, 16 bytes) */
void jt_003E60(void) {
    M68K_OR8(g_m68k.d[2], 0x0);
    { uint32_t _ea = g_m68k.a[0]; uint32_t _tmp = bus_read32(_ea); M68K_OR32(_tmp, 0x40003); bus_write32(_ea, _tmp); }
    M68K_OR32(g_m68k.d[0], 0x900004);
    /* WARNING: function did not end with RTS */
}

/* $003E70-$003E80  (3 instructions, 16 bytes) */
void jt_003E70(void) {
    M68K_OR8(g_m68k.d[4], 0x0);
    { uint32_t _ea = g_m68k.a[0]; uint32_t _tmp = bus_read32(_ea); M68K_OR32(_tmp, 0x40005); bus_write32(_ea, _tmp); }
    M68K_OR32(g_m68k.d[0], 0x900004);
    /* WARNING: function did not end with RTS */
}

/* $003E80-$003E90  (4 instructions, 16 bytes) */
void jt_003E80(void) {
    M68K_OR8(g_m68k.d[6], 0x0);
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x4); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[7], 0x80);
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x4); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $003F90-$003FC2  (11 instructions, 50 bytes) */
void jt_003F90(void) {
    { uint32_t _ea = (g_m68k.a[0] + 0x10); uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x0); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x29);
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x10); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x2a);
    M68K_OR16(g_m68k.d[0], 0x10);
    M68K_OR8(g_m68k.d[0], 0x2b);
    { uint32_t _ea = g_m68k.a[0]; uint16_t _tmp = bus_read16(_ea); M68K_OR16(_tmp, 0x10); bus_write16(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x2c);
    M68K_OR32(g_m68k.d[0], 0x100000);
    { uint32_t _ea = (g_m68k.a[5] + 0x10); uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xa0); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x2e);
    /* WARNING: function did not end with RTS */
}

/* $004000-$004028  (9 instructions, 40 bytes) */
void jt_004000(void) {
    { uint32_t _ea = (g_m68k.a[6] + 0x10 + (int16_t)(uint16_t)g_m68k.d[0]); uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x0); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[2], 0x37);
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x10); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[2], 0x38);
    M68K_OR16(g_m68k.d[0], 0x10);
    M68K_OR8(g_m68k.d[2], 0x39);
    { uint32_t _ea = g_m68k.a[0]; uint16_t _tmp = bus_read16(_ea); M68K_OR16(_tmp, 0x10); bus_write16(_ea, _tmp); }
    M68K_OR8(g_m68k.d[2], 0x3a);
    M68K_OR32(g_m68k.d[0], 0x100002);
    /* WARNING: function did not end with RTS */
}

/* $004070-$004090  (8 instructions, 32 bytes) */
void jt_004070(void) {
    M68K_OR16(g_m68k.d[4], 0x0);
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x0); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[5], 0x20);
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x0); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[6], 0x40);
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x0); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[7], 0x60);
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x0); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $004100-$004150  (20 instructions, 80 bytes) */
void jt_004100(void) {
    { uint32_t _ea = g_m68k.a[6]; uint16_t _tmp = bus_read16(_ea); M68K_OR16(_tmp, 0x80); bus_write16(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x2); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[7]; uint16_t _tmp = bus_read16(_ea); M68K_OR16(_tmp, 0xa0); bus_write16(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x2); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[0]; uint16_t _tmp = bus_read16(_ea); M68K_OR16(_tmp, 0xc0); bus_write16(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x2); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[1]; uint16_t _tmp = bus_read16(_ea); M68K_OR16(_tmp, 0x0); bus_write16(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x3); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[2]; uint16_t _tmp = bus_read16(_ea); M68K_OR16(_tmp, 0x20); bus_write16(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x3); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint16_t _tmp = bus_read16(_ea); M68K_OR16(_tmp, 0x40); bus_write16(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x3); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[4]; uint16_t _tmp = bus_read16(_ea); M68K_OR16(_tmp, 0x60); bus_write16(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x3); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[5]; uint16_t _tmp = bus_read16(_ea); M68K_OR16(_tmp, 0x80); bus_write16(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x3); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[6]; uint16_t _tmp = bus_read16(_ea); M68K_OR16(_tmp, 0xa0); bus_write16(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x3); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[7]; uint16_t _tmp = bus_read16(_ea); M68K_OR16(_tmp, 0xc0); bus_write16(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x3); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $004150-$004202  (39 instructions, 178 bytes) */
void sub_004150(void) {
    g_m68k.a[7] -= 2; bus_write16(g_m68k.a[7], m68k_get_sr());
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[7]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    func_table_call(0x000A26);
    g_m68k.a[3] = 0x01F056;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x2)); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x014B38);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x26)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x014B38);
    func_table_call(0x0120E0);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x9)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x012296);
    func_table_call(0x0133FA);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x80)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x8)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x100)); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.a[3] = 0x01EED6;
    func_table_call(0x012036);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x011F22);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x90)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x10)); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.a[3] = 0x01EF36;
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0xf)); M68K_TST16((uint16_t)g_m68k.d[3]);
loc_0041C8:
    func_table_call(0x012036);
    M68K_ADD16(g_m68k.d[0], 0x1);
    M68K_ADD16(g_m68k.d[2], 0x10);
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[3]; _cnt--; g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_0041C8; } }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0xa0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x10)); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.a[3] = 0x01EF66;
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0xf)); M68K_TST16((uint16_t)g_m68k.d[3]);
loc_0041EE:
    func_table_call(0x012036);
    M68K_ADD16(g_m68k.d[0], 0x1);
    M68K_ADD16(g_m68k.d[2], 0x10);
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[3]; _cnt--; g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_0041EE; } }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0xb0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $004200-$004248  (20 instructions, 72 bytes) */
void jt_004200(void) {
    { uint32_t _ea = (g_m68k.a[0] + 0x3c + (int16_t)(uint16_t)g_m68k.d[3]); uint32_t _tmp = bus_read32(_ea); M68K_OR32(_tmp, 0x323c0001); bus_write32(_ea, _tmp); }
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x10)); M68K_TST16((uint16_t)g_m68k.d[2]);
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xf9); bus_write8(_ea, _tmp); }
    g_m68k.a[3] = 0x01EF06;
    M68K_OR8(g_m68k.d[1], 0x6);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0xf)); M68K_TST16((uint16_t)g_m68k.d[3]);
loc_004214:
    func_table_call(0x012036);
    M68K_ADD16(g_m68k.d[0], 0x1);
    M68K_ADD16(g_m68k.d[2], 0x10);
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[3]; _cnt--; g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_004214; } }
    g_m68k.a[0] = 0x01F092;
    { uint32_t _mv = (uint32_t)(g_m68k.a[0]); bus_write32(0x1004AE, _mv); M68K_TST32(_mv); }
    g_m68k.a[0] = bus_read32(g_m68k.a[0] + 0x0);
    func_table_call(g_m68k.a[0]);
    bus_write16(0x1004B2, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[7] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    m68k_set_sr(_postinc16(7));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $004248-$004302  (39 instructions, 186 bytes) */
void sub_004248(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1011FC))); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x010E10);
    M68K_CMP16(g_m68k.d[0], 0x1);
    if (M68K_CC_EQ) goto loc_00429C;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1011FC))); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x010E10);
    M68K_CMP16(g_m68k.d[0], 0x1);
    if (M68K_CC_EQ) goto loc_00429C;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1011FC))); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x010E5C);
    M68K_CMP16(g_m68k.d[0], 0x1);
    if (M68K_CC_EQ) goto loc_00429C;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1011FC))); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x010E5C);
    M68K_CMP16(g_m68k.d[0], 0x1);
    if (M68K_CC_EQ) goto loc_00429C;
    goto loc_0042B8;
loc_00429C:
    M68K_TST16(bus_read16(0x1004B2));
    if (M68K_CC_EQ) goto loc_0042C0;
    func_table_call(0x0120E0);
    func_table_call(0x0133FA);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
loc_0042B8:
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(0x1004B2, _mv); M68K_TST16(_mv); }
loc_0042C0:
    g_m68k.a[7] -= 2; bus_write16(g_m68k.a[7], m68k_get_sr());
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[7]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    g_m68k.a[0] = bus_read32(0x1004AE);
    g_m68k.a[0] = bus_read32(g_m68k.a[0] + 0x4);
    func_table_call(g_m68k.a[0]);
    func_table_call(0x01229E);
    func_table_call(0x013546);
    M68K_CMP32(g_m68k.a[0], 0x0);
    if (M68K_CC_EQ) { func_table_call(0x004318); return; }
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]);
    g_m68k.a[0] = bus_read32(0x1004AE);
    bus_write32(0x1004AE, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    g_m68k.a[0] = bus_read32(g_m68k.a[0] + 0x8);
    func_table_call(g_m68k.a[0]);
    g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    /* WARNING: function did not end with RTS */
}

/* $004300-$00433E  (15 instructions, 62 bytes) */
void jt_004300(void) {
    M68K_BTST(g_m68k.d[0], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[0], 0x1);
    if (M68K_CC_EQ) goto loc_004318;
    { uint32_t _mv = (uint32_t)(g_m68k.a[0]); bus_write32(0x1004AE, _mv); M68K_TST32(_mv); }
    g_m68k.a[0] = bus_read32(g_m68k.a[0] + 0x0);
    func_table_call(g_m68k.a[0]);
loc_004318:
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[7] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    m68k_set_sr(_postinc16(7));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_TST32(bus_read32(0x1004AE));
    if (M68K_CC_NE) goto loc_00433C;
    func_table_call(0x0120E0);
    func_table_call(0x0133FA);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
loc_00433C:
    return;
}

/* $00433E-$004366  (10 instructions, 40 bytes) */
void sub_00433E(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[4]); bus_write16(g_m68k.a[1] + 0x0, _mv); M68K_TST16(_mv); }
    func_table_call(0x012202);
    { uint32_t _mv = (uint32_t)(g_m68k.a[0]); bus_write32(g_m68k.a[1] + 0x2, _mv); M68K_TST32(_mv); }
    g_m68k.a[3] = bus_read32(g_m68k.a[2]);
    func_table_call(0x012270);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[1] + 0x6, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[1] + 0x8, _mv); M68K_TST16(_mv); }
    g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}
