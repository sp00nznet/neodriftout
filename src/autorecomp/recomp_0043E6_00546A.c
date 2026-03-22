/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $0043E6 - $00546A */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

/* $0043E6-$004400  (6 instructions, 26 bytes) */
void jt_0043E6(void) {
    g_m68k.a[7] -= 2; bus_write16(g_m68k.a[7], m68k_get_sr());
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[7]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    g_m68k.a[1] = 0x1004B4;
    g_m68k.a[2] = bus_read32(0x080008);
    g_m68k.a[2] = bus_read32(g_m68k.a[2] + (-0x4));
    g_m68k.a[2] = bus_read32(g_m68k.a[2] + 0x8);
    /* WARNING: function did not end with RTS */
}

/* $004400-$004446  (18 instructions, 70 bytes) */
void jt_004400(void) {
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x20)); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0x6)); M68K_TST16((uint16_t)g_m68k.d[3]);
loc_00440A:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x10)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x8)); M68K_TST16((uint16_t)g_m68k.d[1]);
loc_004412:
    func_table_call(0x00433E);
    g_m68k.a[1] += (int16_t)(uint16_t)(0xa);
    g_m68k.a[2] += (int16_t)(uint16_t)(0x4);
    M68K_SUB16(g_m68k.d[4], 0x10);
    M68K_ADD16(g_m68k.d[0], 0x20);
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[1]; _cnt--; g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_004412; } }
    M68K_ADD16(g_m68k.d[4], 0x60);
    M68K_ADD16(g_m68k.d[2], 0x20);
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[3]; _cnt--; g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_00440A; } }
    bus_write16(0x1004AC, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[7] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    m68k_set_sr(_postinc16(7));
    return;
}

/* $004446-$004498  (17 instructions, 82 bytes) */
void jt_004446(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[7]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    g_m68k.a[1] = 0x1004B4;
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(0x3e)); M68K_TST16((uint16_t)g_m68k.d[7]);
loc_004454:
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1004AC))); M68K_TST16((uint16_t)g_m68k.d[1]);
    func_table_call(0x004366);
    g_m68k.a[1] += (int16_t)(uint16_t)(0xa);
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[7]; _cnt--; g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_004454; } }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1004AC))); M68K_TST16((uint16_t)g_m68k.d[2]);
    { uint32_t _ea = 0x1004AC; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0x10); bus_write16(_ea, _tmp); }
    g_m68k.a[0] = 0x0;
    g_m68k.a[1] -= (int16_t)(uint16_t)(0xa);
    M68K_ADD16(g_m68k.d[2], bus_read16(g_m68k.a[1] + 0x0));
    M68K_CMP16(g_m68k.d[2], 0x100);
    if (M68K_CC_LE) goto loc_004492;
    g_m68k.a[0] = 0x1f09e;
loc_004492:
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[7] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}

/* $004498-$0044F0  (21 instructions, 88 bytes) */
void jt_004498(void) {
    g_m68k.a[7] -= 2; bus_write16(g_m68k.a[7], m68k_get_sr());
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[7]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x10)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x100)); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0x100)); M68K_TST16((uint16_t)g_m68k.d[3]);
    g_m68k.a[4] = bus_read32(0x080008);
    g_m68k.a[4] = bus_read32(g_m68k.a[4] + (-0x4));
    g_m68k.a[4] = bus_read32(g_m68k.a[4] + 0xc);
    g_m68k.a[5] = bus_read32(0x080008);
    g_m68k.a[5] = bus_read32(g_m68k.a[5] + (-0x4));
    g_m68k.a[5] = bus_read32(g_m68k.a[5] + 0x10);
    func_table_call(0x01348E);
    g_m68k.a[1] = 0x1004B4;
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(0x3e)); M68K_TST16((uint16_t)g_m68k.d[7]);
loc_0044DA:
    func_table_call(0x0043D2);
    g_m68k.a[1] += (int16_t)(uint16_t)(0xa);
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[7]; _cnt--; g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_0044DA; } }
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[7] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    m68k_set_sr(_postinc16(7));
    return;
}

/* $0044F0-$004500  (4 instructions, 16 bytes) */
void sub_0044F0(void) {
    g_m68k.a[7] -= 2; bus_write16(g_m68k.a[7], m68k_get_sr());
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[7]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); bus_write16(g_m68k.a[1] + 0x0, _mv); M68K_TST16(_mv); }
    func_table_call(0x012202);
    /* WARNING: function did not end with RTS */
}

/* $004500-$004530  (13 instructions, 48 bytes) */
void jt_004500(void) {
    { uint32_t _mv = (uint32_t)(g_m68k.a[0]); bus_write32(g_m68k.a[1] + 0x2, _mv); M68K_TST32(_mv); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[1] + 0x6, _mv); M68K_TST16(_mv); }
    M68K_AND16(g_m68k.d[2], 0xff);
    M68K_ADD16(g_m68k.d[2], g_m68k.d[2]);
    M68K_ADD16(g_m68k.d[2], g_m68k.d[2]);
    g_m68k.a[3] = bus_read32(0x080008);
    g_m68k.a[3] = bus_read32(g_m68k.a[3] + (-0x4));
    g_m68k.a[3] = bus_read32(g_m68k.a[3] + 0x4);
    g_m68k.a[3] = bus_read32(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[2]);
    func_table_call(0x012270);
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[7] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    m68k_set_sr(_postinc16(7));
    return;
}

/* $004530-$0045AE  (37 instructions, 126 bytes) */
void sub_004530(void) {
    g_m68k.a[7] -= 2; bus_write16(g_m68k.a[7], m68k_get_sr());
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[7]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    g_m68k.a[0] = bus_read32(g_m68k.a[1] + 0x2);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_ADD16(g_m68k.d[1], bus_read16(g_m68k.a[1] + 0x0));
    M68K_CMP16(g_m68k.d[1], 0x1);
    if (M68K_CC_LT) goto loc_0045A0;
    M68K_CMP16(g_m68k.d[1], 0x100);
    if (M68K_CC_LE) goto loc_004554;
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x100)); M68K_TST16((uint16_t)g_m68k.d[1]);
loc_004554:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[1])); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[1])); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x012266);
    M68K_LSR16(g_m68k.d[0], 0x4);
    M68K_CMP16(g_m68k.d[0], 0x10);
    if (M68K_CC_CS) goto loc_00456C;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0xf)); M68K_TST16((uint16_t)g_m68k.d[0]);
loc_00456C:
    M68K_ADD16(g_m68k.d[0], 0xff90);
    func_table_call(0x012280);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[1] + 0x6))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_SUB16(g_m68k.d[0], 0xa0);
    M68K_MULS(g_m68k.d[0], g_m68k.d[1]);
    M68K_ASR16(g_m68k.d[0], 0x8);
    M68K_ADD16(g_m68k.d[0], 0xa0);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0xffc0)); M68K_TST16((uint16_t)g_m68k.d[2]);
    M68K_MULS(g_m68k.d[2], g_m68k.d[1]);
    M68K_ASR16(g_m68k.d[2], 0x8);
    M68K_ADD16(g_m68k.d[2], 0x80);
    M68K_LSR16(g_m68k.d[1], 0x4);
    M68K_SUB16(g_m68k.d[0], g_m68k.d[1]);
    M68K_SUB16(g_m68k.d[2], g_m68k.d[1]);
    func_table_call(0x01225C);
    g_m68k.d[0] = (uint32_t)(int32_t)(int8_t)(0x1); M68K_TST32(g_m68k.d[0]);
loc_0045A0:
    func_table_call(0x012286);
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[7] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    m68k_set_sr(_postinc16(7));
    return;
}

/* $0045C2-$004666  (42 instructions, 164 bytes) */
void jt_0045C2(void) {
    g_m68k.a[7] -= 2; bus_write16(g_m68k.a[7], m68k_get_sr());
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[7]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    g_m68k.a[1] = 0x10072C;
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x30)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.a[7] -= 2; bus_write16(g_m68k.a[7], m68k_get_sr());
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[7]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    g_m68k.a[2] = 0x10076E;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x101202))); M68K_TST16((uint16_t)g_m68k.d[0]);
    if (M68K_CC_NE) goto loc_00460E;
    { uint8_t _mv = (uint8_t)(0x50); bus_write8(g_m68k.a[2], _mv); g_m68k.a[2] += 1; M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(0x52); bus_write8(g_m68k.a[2], _mv); g_m68k.a[2] += 1; M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(0x41); bus_write8(g_m68k.a[2], _mv); g_m68k.a[2] += 1; M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(0x43); bus_write8(g_m68k.a[2], _mv); g_m68k.a[2] += 1; M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(0x54); bus_write8(g_m68k.a[2], _mv); g_m68k.a[2] += 1; M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(0x49); bus_write8(g_m68k.a[2], _mv); g_m68k.a[2] += 1; M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(0x43); bus_write8(g_m68k.a[2], _mv); g_m68k.a[2] += 1; M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(0x45); bus_write8(g_m68k.a[2], _mv); g_m68k.a[2] += 1; M68K_TST8(_mv); }
    goto loc_004630;
loc_00460E:
    { uint8_t _mv = (uint8_t)(0x20); bus_write8(g_m68k.a[2], _mv); g_m68k.a[2] += 1; M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(0x53); bus_write8(g_m68k.a[2], _mv); g_m68k.a[2] += 1; M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(0x54); bus_write8(g_m68k.a[2], _mv); g_m68k.a[2] += 1; M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(0x41); bus_write8(g_m68k.a[2], _mv); g_m68k.a[2] += 1; M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(0x47); bus_write8(g_m68k.a[2], _mv); g_m68k.a[2] += 1; M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(0x45); bus_write8(g_m68k.a[2], _mv); g_m68k.a[2] += 1; M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(0x30); bus_write8(g_m68k.a[2], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(0x20); bus_write8(g_m68k.a[2], _mv); g_m68k.a[2] += 1; M68K_TST8(_mv); }
loc_004630:
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[7] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    m68k_set_sr(_postinc16(7));
    g_m68k.a[2] = 0x10076E;
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0x7)); M68K_TST16((uint16_t)g_m68k.d[3]);
loc_004640:
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(2))); M68K_TST8((uint8_t)g_m68k.d[2]);
    func_table_call(0x0044F0);
    g_m68k.a[1] += (int16_t)(uint16_t)(0x8);
    M68K_SUB16(g_m68k.d[1], 0x20);
    M68K_ADD16(g_m68k.d[0], 0x20);
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[3]; _cnt--; g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_004640; } }
    bus_write16(0x1004AC, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[7] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    m68k_set_sr(_postinc16(7));
    return;
}

/* $004666-$0046B8  (17 instructions, 82 bytes) */
void jt_004666(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[7]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    g_m68k.a[1] = 0x10072C;
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(0x7)); M68K_TST16((uint16_t)g_m68k.d[7]);
loc_004674:
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1004AC))); M68K_TST16((uint16_t)g_m68k.d[1]);
    func_table_call(0x004530);
    g_m68k.a[1] += (int16_t)(uint16_t)(0x8);
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[7]; _cnt--; g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_004674; } }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1004AC))); M68K_TST16((uint16_t)g_m68k.d[2]);
    { uint32_t _ea = 0x1004AC; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0x20); bus_write16(_ea, _tmp); }
    g_m68k.a[0] = 0x0;
    g_m68k.a[1] -= (int16_t)(uint16_t)(0x8);
    M68K_ADD16(g_m68k.d[2], bus_read16(g_m68k.a[1] + 0x0));
    M68K_CMP16(g_m68k.d[2], 0x100);
    if (M68K_CC_LE) goto loc_0046B2;
    g_m68k.a[0] = 0x1f0ae;
loc_0046B2:
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[7] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}

/* $0046B8-$0046C6  (5 instructions, 14 bytes) */
void jt_0046B8(void) {
    g_m68k.a[7] -= 2; bus_write16(g_m68k.a[7], m68k_get_sr());
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[7]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[7] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    m68k_set_sr(_postinc16(7));
    return;
}

/* $0046C6-$004700  (16 instructions, 58 bytes) */
void sub_0046C6(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_MULS(g_m68k.d[1], 0x18);
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); bus_write16(g_m68k.a[1] + 0x0, _mv); M68K_TST16(_mv); }
    g_m68k.a[6] = 0x1000B2;
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x101202))); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_ADD16(g_m68k.d[1], g_m68k.d[1]);
    M68K_ADD16(g_m68k.d[1], g_m68k.d[1]);
    g_m68k.a[6] = bus_read32(g_m68k.a[6] + 0 + (int16_t)(uint16_t)g_m68k.d[1]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_ADD16(g_m68k.d[1], g_m68k.d[1]);
    M68K_ADD16(g_m68k.d[1], g_m68k.d[1]);
    g_m68k.a[6] = bus_read32(g_m68k.a[6] + 0 + (int16_t)(uint16_t)g_m68k.d[1]);
    func_table_call(0x004826); /* loc_004826 */
    func_table_call(0x012202);
    { uint32_t _mv = (uint32_t)(g_m68k.a[0]); bus_write32(g_m68k.a[1] + 0x2, _mv); M68K_TST32(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $004700-$00471A  (6 instructions, 26 bytes) */
void jt_004700(void) {
    if (M68K_CC_NE) goto loc_00470A;
    M68K_TST16(bus_read16(0x77777777));
loc_00470A:
    g_m68k.a[3] = (g_m68k.a[1] + 0x6);
    func_table_call(0x012270);
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}

/* $00471A-$00472E  (5 instructions, 20 bytes) */
void sub_00471A(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]);
    g_m68k.a[0] = bus_read32(g_m68k.a[1] + 0x2);
    func_table_call(0x012252);
    g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}

/* $00472E-$004802  (57 instructions, 212 bytes) */
void sub_00472E(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    g_m68k.a[0] = bus_read32(g_m68k.a[1] + 0x2);
    M68K_NEG16(g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], bus_read16(g_m68k.a[1] + 0x0));
    M68K_CMP16(g_m68k.d[0], 0xffc0);
    if (M68K_CC_LT) goto loc_00474C;
    M68K_CMP16(g_m68k.d[0], 0x40);
    if (M68K_CC_LE) goto loc_004752;
loc_00474C:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { func_table_call(0x00481A); return; }
loc_004752:
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_SUB16(g_m68k.d[1], 0x7);
    M68K_CMP16(g_m68k.d[1], 0xffc0);
    if (M68K_CC_GE) goto loc_004760;
    g_m68k.d[1] = (uint32_t)(int32_t)(int8_t)(0xc0); M68K_TST32(g_m68k.d[1]);
loc_004760:
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[2]);
    M68K_ADD16(g_m68k.d[2], 0x7);
    M68K_CMP16(g_m68k.d[2], 0x40);
    if (M68K_CC_LE) goto loc_00476E;
    g_m68k.d[2] = (uint32_t)(int32_t)(int8_t)(0x40); M68K_TST32(g_m68k.d[2]);
loc_00476E:
    g_m68k.a[2] = 0x01ECD6;
    M68K_AND16(g_m68k.d[1], 0xff);
    M68K_ADD16(g_m68k.d[1], g_m68k.d[1]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.d[1]))); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_MULS(g_m68k.d[1], 0x30);
    M68K_AND16(g_m68k.d[2], 0xff);
    M68K_ADD16(g_m68k.d[2], g_m68k.d[2]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.d[2]))); M68K_TST16((uint16_t)g_m68k.d[2]);
    M68K_MULS(g_m68k.d[2], 0x30);
    M68K_SUB16(g_m68k.d[2], g_m68k.d[1]);
    M68K_AND32(g_m68k.d[2], 0xffff);
    M68K_DIVS(g_m68k.d[2], 0x10);
    if (M68K_CC_NE) goto loc_0047A4;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[2]);
loc_0047A4:
    M68K_CMP16(g_m68k.d[2], 0x100);
    if (M68K_CC_LS) goto loc_0047B0;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x100)); M68K_TST16((uint16_t)g_m68k.d[2]);
loc_0047B0:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x100)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x012266);
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[2])); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_LSR16(g_m68k.d[0], 0x4);
    M68K_NEG16(g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], 0x10);
    M68K_CMP16(g_m68k.d[0], 0x10);
    if (M68K_CC_CS) goto loc_0047D4;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0xf)); M68K_TST16((uint16_t)g_m68k.d[0]);
loc_0047D4:
    M68K_EOR16(g_m68k.d[0], 0xf);
    M68K_CMP16(g_m68k.d[3], bus_read16(0x101214));
    if (M68K_CC_EQ) goto loc_0047EA;
    M68K_ADD16(g_m68k.d[0], 0xff90);
    goto loc_0047FC;
loc_0047EA:
    M68K_ADD16(g_m68k.d[0], 0xffa0);
    M68K_TST16(bus_read16(0x100998));
    if (M68K_CC_EQ) goto loc_0047FC;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0xffaf)); M68K_TST16((uint16_t)g_m68k.d[0]);
loc_0047FC:
    func_table_call(0x012280);
    /* WARNING: function did not end with RTS */
}

/* $004800-$0048BA  (51 instructions, 186 bytes) */
void jt_004800(void) {
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); bus_write32(g_m68k.a[1], _mv); M68K_TST32(_mv); }
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x10)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[1])); M68K_TST16((uint16_t)g_m68k.d[2]);
    M68K_ADD16(g_m68k.d[2], 0xa080);
    M68K_LSR16(g_m68k.d[2], 0x8);
    func_table_call(0x01225C);
    g_m68k.d[0] = (uint32_t)(int32_t)(int8_t)(0x1); M68K_TST32(g_m68k.d[0]);
loc_00481A:
    func_table_call(0x012286);
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
loc_004826:
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[1]);
    g_m68k.a[3] = (g_m68k.a[1] + 0x6);
    { uint16_t _mv = (uint16_t)(0x12); bus_write16(g_m68k.a[3], _mv); g_m68k.a[3] += 2; M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(g_m68k.a[3], _mv); g_m68k.a[3] += 2; M68K_TST16(_mv); }
    g_m68k.a[2] = bus_read32(0x080008);
    g_m68k.a[2] = bus_read32(g_m68k.a[2] + (-0x4));
    g_m68k.a[2] = bus_read32(g_m68k.a[2] + 0x0);
    g_m68k.a[2] = bus_read32(g_m68k.a[2]);
    func_table_call(0x00487E); /* loc_00487E */
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[2] + 0x4)); bus_write32(g_m68k.a[3], _mv); g_m68k.a[3] += 4; M68K_TST32(_mv); }
    g_m68k.a[1] = (g_m68k.a[6] + 0x4);
    func_table_call(0x0048BA);
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[2] + 0x4)); bus_write32(g_m68k.a[3], _mv); g_m68k.a[3] += 4; M68K_TST32(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x0))); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x00491A);
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[2] + 0x4)); bus_write32(g_m68k.a[3], _mv); g_m68k.a[3] += 4; M68K_TST32(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xa))); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x004A30);
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[2] + 0x4)); bus_write32(g_m68k.a[3], _mv); g_m68k.a[3] += 4; M68K_TST32(_mv); }
    g_m68k.a[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
loc_00487E:
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], 0x1);
    M68K_AND32(g_m68k.d[0], 0xffff);
    M68K_DIVU(g_m68k.d[0], 0xa);
    if (M68K_CC_NE) goto loc_004896;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0xffd0)); M68K_TST16((uint16_t)g_m68k.d[0]);
loc_004896:
    M68K_ADD16(g_m68k.d[0], 0x30);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[2] + 0x4 + (int16_t)(uint16_t)g_m68k.d[0])); bus_write32(g_m68k.a[3], _mv); g_m68k.a[3] += 4; M68K_TST32(_mv); }
    M68K_SWAP(g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], 0x30);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[2] + 0x4 + (int16_t)(uint16_t)g_m68k.d[0])); bus_write32(g_m68k.a[3], _mv); g_m68k.a[3] += 4; M68K_TST32(_mv); }
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}

/* $0048BA-$004900  (23 instructions, 70 bytes) */
void sub_0048BA(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    g_m68k.a[7] -= 2; bus_write16(g_m68k.a[7], m68k_get_sr());
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[7]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    M68K_TST8(bus_read8(g_m68k.a[1] + 0x0));
    if (M68K_CC_NE) goto loc_0048D8;
    bus_write8(g_m68k.a[1] + 0x1, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    bus_write8(g_m68k.a[1] + 0x2, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    goto loc_0048E4;
loc_0048D8:
    M68K_TST8(bus_read8(g_m68k.a[1] + 0x1));
    if (M68K_CC_NE) goto loc_0048E4;
    bus_write8(g_m68k.a[1] + 0x2, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
loc_0048E4:
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[7] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    m68k_set_sr(_postinc16(7));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(1))); M68K_TST8((uint8_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[2] + 0x4 + (int16_t)(uint16_t)g_m68k.d[0])); bus_write32(g_m68k.a[3], _mv); g_m68k.a[3] += 4; M68K_TST32(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(1))); M68K_TST8((uint8_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $004900-$00491A  (10 instructions, 26 bytes) */
void jt_004900(void) {
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[2] + 0x4 + (int16_t)(uint16_t)g_m68k.d[0])); bus_write32(g_m68k.a[3], _mv); g_m68k.a[3] += 4; M68K_TST32(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(1))); M68K_TST8((uint8_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[2] + 0x4 + (int16_t)(uint16_t)g_m68k.d[0])); bus_write32(g_m68k.a[3], _mv); g_m68k.a[3] += 4; M68K_TST32(_mv); }
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}

/* $00491A-$00495A  (19 instructions, 64 bytes) */
void sub_00491A(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    g_m68k.a[4] = g_m68k.a[3];
    g_m68k.a[1] = 0x100994;
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    func_table_call(0x011120);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x7)); M68K_TST16((uint16_t)g_m68k.d[0]);
loc_004932:
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(3))); M68K_TST8((uint8_t)g_m68k.d[1]);
    M68K_CMP8(g_m68k.d[1], 0x20);
    if (M68K_CC_NE) goto loc_004940;
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(0x000000))); M68K_TST8((uint8_t)g_m68k.d[1]);
loc_004940:
    M68K_AND16(g_m68k.d[1], 0xff);
    M68K_ADD16(g_m68k.d[1], g_m68k.d[1]);
    M68K_ADD16(g_m68k.d[1], g_m68k.d[1]);
    M68K_ADD16(g_m68k.d[1], g_m68k.d[1]);
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[2] + 0x4 + (int16_t)(uint16_t)g_m68k.d[1])); bus_write32(g_m68k.a[4], _mv); g_m68k.a[4] += 4; M68K_TST32(_mv); }
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[0]; _cnt--; g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_004932; } }
    g_m68k.a[3] = g_m68k.a[4];
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}

/* $004A00-$004A30  (19 instructions, 48 bytes) */
void jt_004A00(void) {
    M68K_OR8(g_m68k.d[4], 0x40);
    M68K_SWAP(g_m68k.d[0]);
    M68K_DIVU(g_m68k.d[0], 0x6);
    M68K_SWAP(g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], 0x30);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[2] + 0x4 + (int16_t)(uint16_t)g_m68k.d[0])); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_postinc32(7)); bus_write32(g_m68k.a[3], _mv); g_m68k.a[3] += 4; M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_postinc32(7)); bus_write32(g_m68k.a[3], _mv); g_m68k.a[3] += 4; M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_postinc32(7)); bus_write32(g_m68k.a[3], _mv); g_m68k.a[3] += 4; M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_postinc32(7)); bus_write32(g_m68k.a[3], _mv); g_m68k.a[3] += 4; M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_postinc32(7)); bus_write32(g_m68k.a[3], _mv); g_m68k.a[3] += 4; M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_postinc32(7)); bus_write32(g_m68k.a[3], _mv); g_m68k.a[3] += 4; M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_postinc32(7)); bus_write32(g_m68k.a[3], _mv); g_m68k.a[3] += 4; M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_postinc32(7)); bus_write32(g_m68k.a[3], _mv); g_m68k.a[3] += 4; M68K_TST32(_mv); }
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}

/* $004A30-$004A56  (12 instructions, 38 bytes) */
void sub_004A30(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    M68K_TST16(g_m68k.d[0]);
    if (M68K_CC_NE) goto loc_004A42;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x53)); M68K_TST16((uint16_t)g_m68k.d[0]);
    goto loc_004A46;
loc_004A42:
    M68K_ADD16(g_m68k.d[0], 0x40);
loc_004A46:
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[2] + 0x4 + (int16_t)(uint16_t)g_m68k.d[0])); bus_write32(g_m68k.a[3], _mv); g_m68k.a[3] += 4; M68K_TST32(_mv); }
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}

/* $004A56-$004AE4  (34 instructions, 142 bytes) */
void jt_004A56(void) {
    g_m68k.a[7] -= 2; bus_write16(g_m68k.a[7], m68k_get_sr());
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[7]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x011F22);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x90)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x10)); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.a[3] = 0x01EF36;
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0xf)); M68K_TST16((uint16_t)g_m68k.d[3]);
loc_004A7C:
    func_table_call(0x012036);
    M68K_ADD16(g_m68k.d[0], 0x1);
    M68K_ADD16(g_m68k.d[2], 0x10);
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[3]; _cnt--; g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_004A7C; } }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0xa0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x10)); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.a[3] = 0x01EF66;
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0xf)); M68K_TST16((uint16_t)g_m68k.d[3]);
loc_004AA2:
    func_table_call(0x012036);
    M68K_ADD16(g_m68k.d[0], 0x1);
    M68K_ADD16(g_m68k.d[2], 0x10);
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[3]; _cnt--; g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_004AA2; } }
    g_m68k.a[1] = 0x100782;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x5)); M68K_TST16((uint16_t)g_m68k.d[1]);
loc_004ABE:
    func_table_call(0x0046C6);
    g_m68k.a[1] += (int16_t)(uint16_t)(0x58);
    M68K_ADD16(g_m68k.d[0], 0x1);
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[1]; _cnt--; g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_004ABE; } }
    { uint16_t _mv = (uint16_t)(0xd0); bus_write16(0x1004AC, _mv); M68K_TST16(_mv); }
    bus_write16(0x100996, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[7] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    m68k_set_sr(_postinc16(7));
    return;
}

/* $004AE4-$004B00  (6 instructions, 28 bytes) */
void jt_004AE4(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[7]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    g_m68k.a[1] = 0x100782;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1004AC))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x5)); M68K_TST16((uint16_t)g_m68k.d[1]);
loc_004AFA:
    func_table_call(0x00472E);
    /* WARNING: function did not end with RTS */
}

/* $004B00-$004B64  (23 instructions, 100 bytes) */
void jt_004B00(void) {
    M68K_ADD16(g_m68k.d[3], 0x1);
    g_m68k.a[1] += (int16_t)(uint16_t)(0x58);
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[1]; _cnt--; g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { func_table_call(0x004AFA); return; } }
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x101214))); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_MULU(g_m68k.d[1], 0x18);
    M68K_CMP16(g_m68k.d[0], g_m68k.d[1]);
    if (M68K_CC_GT) goto loc_004B42;
    bus_write16(0x100998, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x100996))); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_CMP16(g_m68k.d[1], 0x3c);
    if (M68K_CC_CC) goto loc_004B42;
    M68K_ADD16(g_m68k.d[1], 0x1);
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); bus_write16(0x100996, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(0x100998, _mv); M68K_TST16(_mv); }
    goto loc_004B44;
loc_004B42:
    M68K_SUB16(g_m68k.d[0], 0x1);
loc_004B44:
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(0x1004AC, _mv); M68K_TST16(_mv); }
    g_m68k.a[0] = 0x0;
    M68K_CMP16(g_m68k.d[0], 0xffc0);
    if (M68K_CC_GE) goto loc_004B5E;
    g_m68k.a[0] = 0x1;
loc_004B5E:
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[7] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}

/* $004B64-$004B8A  (10 instructions, 38 bytes) */
void jt_004B64(void) {
    g_m68k.a[7] -= 2; bus_write16(g_m68k.a[7], m68k_get_sr());
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[7]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    g_m68k.a[1] = 0x100782;
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x5)); M68K_TST16((uint16_t)g_m68k.d[1]);
loc_004B74:
    func_table_call(0x00471A);
    g_m68k.a[1] += (int16_t)(uint16_t)(0x58);
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[1]; _cnt--; g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_004B74; } }
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[7] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    m68k_set_sr(_postinc16(7));
    return;
}

/* $004B8A-$004BEC  (20 instructions, 98 bytes) */
void sub_004B8A(void) {
    g_m68k.a[7] -= 2; bus_write16(g_m68k.a[7], m68k_get_sr());
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[7]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    func_table_call(0x000A26);
    g_m68k.a[3] = 0x01F43A;
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
    g_m68k.a[3] = 0x01F2BA;
    func_table_call(0x012036);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x011F22);
    /* WARNING: function did not end with RTS */
}

/* $004BEC-$004CB4  (47 instructions, 200 bytes) */
void jt_004BEC(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x90)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x10)); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.a[3] = 0x01F31A;
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0xf)); M68K_TST16((uint16_t)g_m68k.d[3]);
loc_004C02:
    func_table_call(0x012036);
    M68K_ADD16(g_m68k.d[0], 0x1);
    M68K_ADD16(g_m68k.d[2], 0x10);
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[3]; _cnt--; g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_004C02; } }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0xa0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x10)); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.a[3] = 0x01F34A;
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0xf)); M68K_TST16((uint16_t)g_m68k.d[3]);
loc_004C28:
    func_table_call(0x012036);
    M68K_ADD16(g_m68k.d[0], 0x1);
    M68K_ADD16(g_m68k.d[2], 0x10);
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[3]; _cnt--; g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_004C28; } }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0xb0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x10)); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.a[3] = 0x01F2EA;
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0xf)); M68K_TST16((uint16_t)g_m68k.d[3]);
loc_004C4E:
    func_table_call(0x012036);
    M68K_ADD16(g_m68k.d[0], 0x1);
    M68K_ADD16(g_m68k.d[2], 0x10);
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[3]; _cnt--; g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_004C4E; } }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x10)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x100)); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0x100)); M68K_TST16((uint16_t)g_m68k.d[3]);
    g_m68k.a[4] = bus_read32(0x080008);
    g_m68k.a[4] = bus_read32(g_m68k.a[4] + (-0x4));
    g_m68k.a[4] = bus_read32(g_m68k.a[4] + 0xc);
    g_m68k.a[5] = bus_read32(0x080008);
    g_m68k.a[5] = bus_read32(g_m68k.a[5] + (-0x4));
    g_m68k.a[5] = bus_read32(g_m68k.a[5] + 0x10);
    func_table_call(0x01348E);
    g_m68k.a[0] = 0x01F482;
    { uint32_t _mv = (uint32_t)(g_m68k.a[0]); bus_write32(0x10099C, _mv); M68K_TST32(_mv); }
    g_m68k.a[0] = bus_read32(g_m68k.a[0] + 0x0);
    func_table_call(g_m68k.a[0]);
    bus_write16(0x1009A0, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[7] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    m68k_set_sr(_postinc16(7));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $004CB4-$004D00  (15 instructions, 76 bytes) */
void sub_004CB4(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1011FC))); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x010E10);
    M68K_CMP16(g_m68k.d[0], 0x1);
    if (M68K_CC_EQ) { func_table_call(0x004D08); return; }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1011FC))); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x010E10);
    M68K_CMP16(g_m68k.d[0], 0x1);
    if (M68K_CC_EQ) { func_table_call(0x004D08); return; }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1011FC))); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x010E5C);
    M68K_CMP16(g_m68k.d[0], 0x1);
    if (M68K_CC_EQ) { func_table_call(0x004D08); return; }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1011FC))); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x010E5C);
    M68K_CMP16(g_m68k.d[0], 0x1);
    /* WARNING: function did not end with RTS */
}

/* $004D00-$004DAA  (38 instructions, 170 bytes) */
void jt_004D00(void) {
    if (M68K_CC_EQ) goto loc_004D08;
    goto loc_004D24;
loc_004D08:
    M68K_TST16(bus_read16(0x1009A0));
    if (M68K_CC_EQ) goto loc_004D2C;
    func_table_call(0x0120E0);
    func_table_call(0x0133FA);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
loc_004D24:
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(0x1009A0, _mv); M68K_TST16(_mv); }
loc_004D2C:
    g_m68k.a[7] -= 2; bus_write16(g_m68k.a[7], m68k_get_sr());
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[7]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    g_m68k.a[0] = bus_read32(0x10099C);
    g_m68k.a[0] = bus_read32(g_m68k.a[0] + 0x4);
    func_table_call(g_m68k.a[0]);
    func_table_call(0x01229E);
    func_table_call(0x013546);
    M68K_CMP32(g_m68k.a[0], 0x0);
    if (M68K_CC_EQ) goto loc_004D84;
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]);
    g_m68k.a[0] = bus_read32(0x10099C);
    bus_write32(0x10099C, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    g_m68k.a[0] = bus_read32(g_m68k.a[0] + 0x8);
    func_table_call(g_m68k.a[0]);
    g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    M68K_CMP32(g_m68k.a[0], 0x1);
    if (M68K_CC_EQ) goto loc_004D84;
    { uint32_t _mv = (uint32_t)(g_m68k.a[0]); bus_write32(0x10099C, _mv); M68K_TST32(_mv); }
    g_m68k.a[0] = bus_read32(g_m68k.a[0] + 0x0);
    func_table_call(g_m68k.a[0]);
loc_004D84:
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[7] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    m68k_set_sr(_postinc16(7));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_TST32(bus_read32(0x10099C));
    if (M68K_CC_NE) goto loc_004DA8;
    func_table_call(0x0120E0);
    func_table_call(0x0133FA);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
loc_004DA8:
    return;
}

/* $004DAA-$004DD2  (10 instructions, 40 bytes) */
void sub_004DAA(void) {
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

/* $004DD2-$004E02  (13 instructions, 48 bytes) */
void sub_004DD2(void) {
    g_m68k.a[7] -= 2; bus_write16(g_m68k.a[7], m68k_get_sr());
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[7]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    g_m68k.a[0] = bus_read32(g_m68k.a[1] + 0x2);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_ADD16(g_m68k.d[1], bus_read16(g_m68k.a[1] + 0x0));
    M68K_CMP16(g_m68k.d[1], 0x1);
    if (M68K_CC_LT) { func_table_call(0x004E30); return; }
    M68K_CMP16(g_m68k.d[1], 0x100);
    if (M68K_CC_LE) goto loc_004DF6;
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x100)); M68K_TST16((uint16_t)g_m68k.d[1]);
loc_004DF6:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x100)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[1])); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x012266);
    /* WARNING: function did not end with RTS */
}

/* $004E00-$004E3E  (18 instructions, 62 bytes) */
void jt_004E00(void) {
    g_m68k.a[1] = _predec32(6);
    M68K_LSR16(g_m68k.d[2], 0x4);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[2])); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_NEG16(g_m68k.d[2]);
    M68K_ADD16(g_m68k.d[2], bus_read16(g_m68k.a[1] + 0x8));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[1] + 0x6))); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x01225C);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[1])); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_CMP16(g_m68k.d[0], 0x10);
    if (M68K_CC_CS) goto loc_004E24;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0xf)); M68K_TST16((uint16_t)g_m68k.d[0]);
loc_004E24:
    M68K_ADD16(g_m68k.d[0], 0xffb0);
    func_table_call(0x012280);
    g_m68k.d[0] = (uint32_t)(int32_t)(int8_t)(0x1); M68K_TST32(g_m68k.d[0]);
loc_004E30:
    func_table_call(0x012286);
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[7] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    m68k_set_sr(_postinc16(7));
    return;
}

/* $004E3E-$004E52  (5 instructions, 20 bytes) */
void sub_004E3E(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]);
    g_m68k.a[0] = bus_read32(g_m68k.a[1] + 0x2);
    func_table_call(0x012252);
    g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}

/* $004E52-$004EB2  (24 instructions, 96 bytes) */
void jt_004E52(void) {
    g_m68k.a[7] -= 2; bus_write16(g_m68k.a[7], m68k_get_sr());
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[7]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    g_m68k.a[1] = 0x1009A2;
    g_m68k.a[2] = bus_read32(0x080008);
    g_m68k.a[2] = bus_read32(g_m68k.a[2] + (-0x4));
    g_m68k.a[2] = bus_read32(g_m68k.a[2] + 0x8);
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x20)); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0x6)); M68K_TST16((uint16_t)g_m68k.d[3]);
loc_004E76:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x10)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x8)); M68K_TST16((uint16_t)g_m68k.d[1]);
loc_004E7E:
    func_table_call(0x004DAA);
    g_m68k.a[1] += (int16_t)(uint16_t)(0xa);
    g_m68k.a[2] += (int16_t)(uint16_t)(0x4);
    M68K_SUB16(g_m68k.d[4], 0x10);
    M68K_ADD16(g_m68k.d[0], 0x20);
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[1]; _cnt--; g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_004E7E; } }
    M68K_ADD16(g_m68k.d[4], 0x60);
    M68K_ADD16(g_m68k.d[2], 0x20);
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[3]; _cnt--; g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_004E76; } }
    bus_write16(0x10099A, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[7] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    m68k_set_sr(_postinc16(7));
    return;
}

/* $004EB2-$004EFE  (15 instructions, 76 bytes) */
void jt_004EB2(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[7]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    g_m68k.a[1] = 0x1009A2;
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(0x3e)); M68K_TST16((uint16_t)g_m68k.d[7]);
loc_004EC0:
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x10099A))); M68K_TST16((uint16_t)g_m68k.d[1]);
    func_table_call(0x004DD2);
    g_m68k.a[1] += (int16_t)(uint16_t)(0xa);
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[7]; _cnt--; g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_004EC0; } }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x10099A))); M68K_TST16((uint16_t)g_m68k.d[2]);
    { uint32_t _ea = 0x10099A; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0x10); bus_write16(_ea, _tmp); }
    g_m68k.a[0] = 0x0;
    g_m68k.a[1] -= (int16_t)(uint16_t)(0xa);
    M68K_ADD16(g_m68k.d[2], bus_read16(g_m68k.a[1] + 0x0));
    M68K_CMP16(g_m68k.d[2], 0x100);
    if (M68K_CC_LE) { func_table_call(0x004EFE); return; }
    g_m68k.a[0] = 0x1f482;
    /* WARNING: function did not end with RTS */
}

/* $004EFA-$004F02  (2 instructions, 8 bytes) */
void jt_004EFA(void) {
    M68K_OR8(g_m68k.d[1], 0x82);
loc_004EFE:
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[7] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    /* WARNING: function did not end with RTS */
}

/* $004F00-$004F04  (2 instructions, 4 bytes) */
void jt_004F00(void) {
    g_m68k.d[7] = (uint32_t)(int32_t)(int8_t)(0xff); M68K_TST32(g_m68k.d[7]);
    return;
}

/* $004F04-$004F5C  (21 instructions, 88 bytes) */
void jt_004F04(void) {
    g_m68k.a[7] -= 2; bus_write16(g_m68k.a[7], m68k_get_sr());
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[7]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x10)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x100)); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0x100)); M68K_TST16((uint16_t)g_m68k.d[3]);
    g_m68k.a[4] = bus_read32(0x080008);
    g_m68k.a[4] = bus_read32(g_m68k.a[4] + (-0x4));
    g_m68k.a[4] = bus_read32(g_m68k.a[4] + 0xc);
    g_m68k.a[5] = bus_read32(0x080008);
    g_m68k.a[5] = bus_read32(g_m68k.a[5] + (-0x4));
    g_m68k.a[5] = bus_read32(g_m68k.a[5] + 0x10);
    func_table_call(0x01348E);
    g_m68k.a[1] = 0x1009A2;
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(0x3e)); M68K_TST16((uint16_t)g_m68k.d[7]);
loc_004F46:
    func_table_call(0x004E3E);
    g_m68k.a[1] += (int16_t)(uint16_t)(0xa);
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[7]; _cnt--; g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_004F46; } }
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[7] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    m68k_set_sr(_postinc16(7));
    return;
}

/* $004F5C-$004F9C  (17 instructions, 64 bytes) */
void sub_004F5C(void) {
    g_m68k.a[7] -= 2; bus_write16(g_m68k.a[7], m68k_get_sr());
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[7]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); bus_write16(g_m68k.a[1] + 0x0, _mv); M68K_TST16(_mv); }
    func_table_call(0x012202);
    { uint32_t _mv = (uint32_t)(g_m68k.a[0]); bus_write32(g_m68k.a[1] + 0x2, _mv); M68K_TST32(_mv); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[1] + 0x6, _mv); M68K_TST16(_mv); }
    M68K_AND16(g_m68k.d[2], 0xff);
    M68K_ADD16(g_m68k.d[2], g_m68k.d[2]);
    M68K_ADD16(g_m68k.d[2], g_m68k.d[2]);
    g_m68k.a[3] = bus_read32(0x080008);
    g_m68k.a[3] = bus_read32(g_m68k.a[3] + (-0x4));
    g_m68k.a[3] = bus_read32(g_m68k.a[3] + 0x4);
    g_m68k.a[3] = bus_read32(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[2]);
    func_table_call(0x012270);
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[7] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    m68k_set_sr(_postinc16(7));
    return;
}

/* $004F9C-$005000  (29 instructions, 100 bytes) */
void sub_004F9C(void) {
    g_m68k.a[7] -= 2; bus_write16(g_m68k.a[7], m68k_get_sr());
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[7]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    g_m68k.a[0] = bus_read32(g_m68k.a[1] + 0x2);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_ADD16(g_m68k.d[1], bus_read16(g_m68k.a[1] + 0x0));
    M68K_CMP16(g_m68k.d[1], 0x1);
    if (M68K_CC_LT) { func_table_call(0x00500C); return; }
    M68K_CMP16(g_m68k.d[1], 0x100);
    if (M68K_CC_LE) goto loc_004FC0;
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x100)); M68K_TST16((uint16_t)g_m68k.d[1]);
loc_004FC0:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[1])); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[1])); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x012266);
    M68K_LSR16(g_m68k.d[0], 0x4);
    M68K_CMP16(g_m68k.d[0], 0x10);
    if (M68K_CC_CS) goto loc_004FD8;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0xf)); M68K_TST16((uint16_t)g_m68k.d[0]);
loc_004FD8:
    M68K_ADD16(g_m68k.d[0], 0xff90);
    func_table_call(0x012280);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[1] + 0x6))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_SUB16(g_m68k.d[0], 0xa0);
    M68K_MULS(g_m68k.d[0], g_m68k.d[1]);
    M68K_ASR16(g_m68k.d[0], 0x8);
    M68K_ADD16(g_m68k.d[0], 0xa0);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0xffc0)); M68K_TST16((uint16_t)g_m68k.d[2]);
    M68K_MULS(g_m68k.d[2], g_m68k.d[1]);
    M68K_ASR16(g_m68k.d[2], 0x8);
    M68K_ADD16(g_m68k.d[2], 0x80);
    M68K_LSR16(g_m68k.d[1], 0x4);
    /* WARNING: function did not end with RTS */
}

/* $005000-$00501A  (8 instructions, 26 bytes) */
void jt_005000(void) {
    M68K_SUB16(g_m68k.d[0], g_m68k.d[1]);
    M68K_SUB16(g_m68k.d[2], g_m68k.d[1]);
    func_table_call(0x01225C);
    g_m68k.d[0] = (uint32_t)(int32_t)(int8_t)(0x1); M68K_TST32(g_m68k.d[0]);
loc_00500C:
    func_table_call(0x012286);
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[7] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    m68k_set_sr(_postinc16(7));
    return;
}

/* $00502E-$0050A2  (30 instructions, 116 bytes) */
void jt_00502E(void) {
    g_m68k.a[7] -= 2; bus_write16(g_m68k.a[7], m68k_get_sr());
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[7]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    g_m68k.a[1] = 0x100C1A;
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x40)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.a[7] -= 2; bus_write16(g_m68k.a[7], m68k_get_sr());
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[7]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    g_m68k.a[2] = 0x100C5C;
    { uint8_t _mv = (uint8_t)(0x20); bus_write8(g_m68k.a[2], _mv); g_m68k.a[2] += 1; M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(0x54); bus_write8(g_m68k.a[2], _mv); g_m68k.a[2] += 1; M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(0x4f); bus_write8(g_m68k.a[2], _mv); g_m68k.a[2] += 1; M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(0x54); bus_write8(g_m68k.a[2], _mv); g_m68k.a[2] += 1; M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(0x41); bus_write8(g_m68k.a[2], _mv); g_m68k.a[2] += 1; M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(0x4c); bus_write8(g_m68k.a[2], _mv); g_m68k.a[2] += 1; M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(0x20); bus_write8(g_m68k.a[2], _mv); g_m68k.a[2] += 1; M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(0x20); bus_write8(g_m68k.a[2], _mv); g_m68k.a[2] += 1; M68K_TST8(_mv); }
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[7] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    m68k_set_sr(_postinc16(7));
    g_m68k.a[2] = 0x100C5C;
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0x7)); M68K_TST16((uint16_t)g_m68k.d[3]);
loc_00507C:
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(2))); M68K_TST8((uint8_t)g_m68k.d[2]);
    func_table_call(0x004F5C);
    g_m68k.a[1] += (int16_t)(uint16_t)(0x8);
    M68K_SUB16(g_m68k.d[1], 0x20);
    M68K_ADD16(g_m68k.d[0], 0x20);
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[3]; _cnt--; g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_00507C; } }
    bus_write16(0x10099A, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[7] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    m68k_set_sr(_postinc16(7));
    return;
}

/* $0050A2-$0050F4  (17 instructions, 82 bytes) */
void jt_0050A2(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[7]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    g_m68k.a[1] = 0x100C1A;
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(0x7)); M68K_TST16((uint16_t)g_m68k.d[7]);
loc_0050B0:
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x10099A))); M68K_TST16((uint16_t)g_m68k.d[1]);
    func_table_call(0x004F9C);
    g_m68k.a[1] += (int16_t)(uint16_t)(0x8);
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[7]; _cnt--; g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_0050B0; } }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x10099A))); M68K_TST16((uint16_t)g_m68k.d[2]);
    { uint32_t _ea = 0x10099A; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0x20); bus_write16(_ea, _tmp); }
    g_m68k.a[0] = 0x0;
    g_m68k.a[1] -= (int16_t)(uint16_t)(0x8);
    M68K_ADD16(g_m68k.d[2], bus_read16(g_m68k.a[1] + 0x0));
    M68K_CMP16(g_m68k.d[2], 0x100);
    if (M68K_CC_LE) goto loc_0050EE;
    g_m68k.a[0] = 0x1f492;
loc_0050EE:
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[7] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}

/* $0050F4-$005102  (5 instructions, 14 bytes) */
void jt_0050F4(void) {
    g_m68k.a[7] -= 2; bus_write16(g_m68k.a[7], m68k_get_sr());
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[7]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[7] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    m68k_set_sr(_postinc16(7));
    return;
}

/* $005102-$005148  (18 instructions, 70 bytes) */
void sub_005102(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_MULS(g_m68k.d[1], 0x18);
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); bus_write16(g_m68k.a[1] + 0x0, _mv); M68K_TST16(_mv); }
    g_m68k.a[6] = 0x100002;
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_ADD16(g_m68k.d[1], g_m68k.d[1]);
    M68K_ADD16(g_m68k.d[1], g_m68k.d[1]);
    g_m68k.a[6] = bus_read32(g_m68k.a[6] + 0 + (int16_t)(uint16_t)g_m68k.d[1]);
    func_table_call(0x005260); /* loc_005260 */
    func_table_call(0x012202);
    { uint32_t _mv = (uint32_t)(g_m68k.a[0]); bus_write32(g_m68k.a[1] + 0x2, _mv); M68K_TST32(_mv); }
    if (M68K_CC_NE) goto loc_005138;
    M68K_TST16(bus_read16(0x77777777));
loc_005138:
    g_m68k.a[3] = (g_m68k.a[1] + 0x6);
    func_table_call(0x012270);
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}

/* $005148-$00515C  (5 instructions, 20 bytes) */
void sub_005148(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]);
    g_m68k.a[0] = bus_read32(g_m68k.a[1] + 0x2);
    func_table_call(0x012252);
    g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}

/* $00515C-$0052F4  (115 instructions, 408 bytes) */
void sub_00515C(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    g_m68k.a[0] = bus_read32(g_m68k.a[1] + 0x2);
    M68K_NEG16(g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], bus_read16(g_m68k.a[1] + 0x0));
    M68K_CMP16(g_m68k.d[0], 0xffc0);
    if (M68K_CC_LT) goto loc_00517A;
    M68K_CMP16(g_m68k.d[0], 0x40);
    if (M68K_CC_LE) goto loc_005180;
loc_00517A:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    goto loc_005254;
loc_005180:
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_SUB16(g_m68k.d[1], 0x7);
    M68K_CMP16(g_m68k.d[1], 0xffc0);
    if (M68K_CC_GE) goto loc_00518E;
    g_m68k.d[1] = (uint32_t)(int32_t)(int8_t)(0xc0); M68K_TST32(g_m68k.d[1]);
loc_00518E:
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[2]);
    M68K_ADD16(g_m68k.d[2], 0x7);
    M68K_CMP16(g_m68k.d[2], 0x40);
    if (M68K_CC_LE) goto loc_00519C;
    g_m68k.d[2] = (uint32_t)(int32_t)(int8_t)(0x40); M68K_TST32(g_m68k.d[2]);
loc_00519C:
    g_m68k.a[2] = 0x01F0BA;
    M68K_AND16(g_m68k.d[1], 0xff);
    M68K_ADD16(g_m68k.d[1], g_m68k.d[1]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.d[1]))); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_MULS(g_m68k.d[1], 0x30);
    M68K_AND16(g_m68k.d[2], 0xff);
    M68K_ADD16(g_m68k.d[2], g_m68k.d[2]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.d[2]))); M68K_TST16((uint16_t)g_m68k.d[2]);
    M68K_MULS(g_m68k.d[2], 0x30);
    M68K_SUB16(g_m68k.d[2], g_m68k.d[1]);
    M68K_AND32(g_m68k.d[2], 0xffff);
    M68K_DIVS(g_m68k.d[2], 0x10);
    if (M68K_CC_NE) goto loc_0051D2;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[2]);
loc_0051D2:
    M68K_CMP16(g_m68k.d[2], 0x100);
    if (M68K_CC_LS) goto loc_0051DE;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x100)); M68K_TST16((uint16_t)g_m68k.d[2]);
loc_0051DE:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x100)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x012266);
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[2])); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_MULU(g_m68k.d[0], g_m68k.d[2]);
    M68K_LSR32(g_m68k.d[0], 0x8);
    M68K_MULU(g_m68k.d[0], g_m68k.d[2]);
    M68K_LSR32(g_m68k.d[0], 0x8);
    M68K_MULU(g_m68k.d[0], g_m68k.d[2]);
    M68K_LSR32(g_m68k.d[0], 0x8);
    M68K_MULU(g_m68k.d[0], g_m68k.d[2]);
    M68K_LSR32(g_m68k.d[0], 0x8);
    M68K_MULU(g_m68k.d[0], g_m68k.d[2]);
    M68K_LSR32(g_m68k.d[0], 0x8);
    M68K_LSR16(g_m68k.d[0], 0x4);
    M68K_NEG16(g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], 0x10);
    M68K_CMP16(g_m68k.d[0], 0x10);
    if (M68K_CC_CS) goto loc_005216;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0xf)); M68K_TST16((uint16_t)g_m68k.d[0]);
loc_005216:
    M68K_CMP16(g_m68k.d[3], bus_read16(0x101212));
    if (M68K_CC_EQ) goto loc_005228;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0xff9f)); M68K_TST16((uint16_t)g_m68k.d[0]);
    goto loc_005236;
loc_005228:
    M68K_ADD16(g_m68k.d[0], 0xffa0);
    M68K_TST16(bus_read16(0x10103E));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0xffaf)); M68K_TST16((uint16_t)g_m68k.d[0]);
loc_005236:
    func_table_call(0x012280);
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x10)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[1])); M68K_TST16((uint16_t)g_m68k.d[2]);
    M68K_ADD16(g_m68k.d[2], 0xa080);
    M68K_LSR16(g_m68k.d[2], 0x8);
    func_table_call(0x01225C);
    g_m68k.d[0] = (uint32_t)(int32_t)(int8_t)(0x1); M68K_TST32(g_m68k.d[0]);
loc_005254:
    func_table_call(0x012286);
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
loc_005260:
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[1]);
    g_m68k.a[3] = (g_m68k.a[1] + 0x6);
    { uint16_t _mv = (uint16_t)(0x12); bus_write16(g_m68k.a[3], _mv); g_m68k.a[3] += 2; M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(g_m68k.a[3], _mv); g_m68k.a[3] += 2; M68K_TST16(_mv); }
    g_m68k.a[2] = bus_read32(0x080008);
    g_m68k.a[2] = bus_read32(g_m68k.a[2] + (-0x4));
    g_m68k.a[2] = bus_read32(g_m68k.a[2] + 0x0);
    g_m68k.a[2] = bus_read32(g_m68k.a[2]);
    func_table_call(0x0052B8); /* loc_0052B8 */
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[2] + 0x4)); bus_write32(g_m68k.a[3], _mv); g_m68k.a[3] += 4; M68K_TST32(_mv); }
    g_m68k.a[1] = (g_m68k.a[6] + 0x4);
    func_table_call(0x0052F4);
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[2] + 0x4)); bus_write32(g_m68k.a[3], _mv); g_m68k.a[3] += 4; M68K_TST32(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x0))); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x005354);
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[2] + 0x4)); bus_write32(g_m68k.a[3], _mv); g_m68k.a[3] += 4; M68K_TST32(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x8))); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x00546A);
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[2] + 0x4)); bus_write32(g_m68k.a[3], _mv); g_m68k.a[3] += 4; M68K_TST32(_mv); }
    g_m68k.a[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
loc_0052B8:
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], 0x1);
    M68K_AND32(g_m68k.d[0], 0xffff);
    M68K_DIVU(g_m68k.d[0], 0xa);
    if (M68K_CC_NE) goto loc_0052D0;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0xffd0)); M68K_TST16((uint16_t)g_m68k.d[0]);
loc_0052D0:
    M68K_ADD16(g_m68k.d[0], 0x30);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[2] + 0x4 + (int16_t)(uint16_t)g_m68k.d[0])); bus_write32(g_m68k.a[3], _mv); g_m68k.a[3] += 4; M68K_TST32(_mv); }
    M68K_SWAP(g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], 0x30);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[2] + 0x4 + (int16_t)(uint16_t)g_m68k.d[0])); bus_write32(g_m68k.a[3], _mv); g_m68k.a[3] += 4; M68K_TST32(_mv); }
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}

/* $0052F4-$005302  (4 instructions, 14 bytes) */
void sub_0052F4(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    g_m68k.a[7] -= 2; bus_write16(g_m68k.a[7], m68k_get_sr());
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[7]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    M68K_TST8(bus_read8(g_m68k.a[1] + 0x0));
    /* WARNING: function did not end with RTS */
}

/* $005300-$005354  (30 instructions, 84 bytes) */
void jt_005300(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    if (M68K_CC_NE) goto loc_005312;
    bus_write8(g_m68k.a[1] + 0x1, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    bus_write8(g_m68k.a[1] + 0x2, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    goto loc_00531E;
loc_005312:
    M68K_TST8(bus_read8(g_m68k.a[1] + 0x1));
    if (M68K_CC_NE) goto loc_00531E;
    bus_write8(g_m68k.a[1] + 0x2, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
loc_00531E:
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[7] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    m68k_set_sr(_postinc16(7));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(1))); M68K_TST8((uint8_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[2] + 0x4 + (int16_t)(uint16_t)g_m68k.d[0])); bus_write32(g_m68k.a[3], _mv); g_m68k.a[3] += 4; M68K_TST32(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(1))); M68K_TST8((uint8_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[2] + 0x4 + (int16_t)(uint16_t)g_m68k.d[0])); bus_write32(g_m68k.a[3], _mv); g_m68k.a[3] += 4; M68K_TST32(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(1))); M68K_TST8((uint8_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[2] + 0x4 + (int16_t)(uint16_t)g_m68k.d[0])); bus_write32(g_m68k.a[3], _mv); g_m68k.a[3] += 4; M68K_TST32(_mv); }
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}

/* $005354-$005394  (19 instructions, 64 bytes) */
void sub_005354(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    g_m68k.a[4] = g_m68k.a[3];
    g_m68k.a[1] = 0x10103A;
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    func_table_call(0x011120);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x7)); M68K_TST16((uint16_t)g_m68k.d[0]);
loc_00536C:
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(3))); M68K_TST8((uint8_t)g_m68k.d[1]);
    M68K_CMP8(g_m68k.d[1], 0x20);
    if (M68K_CC_NE) goto loc_00537A;
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(0x000000))); M68K_TST8((uint8_t)g_m68k.d[1]);
loc_00537A:
    M68K_AND16(g_m68k.d[1], 0xff);
    M68K_ADD16(g_m68k.d[1], g_m68k.d[1]);
    M68K_ADD16(g_m68k.d[1], g_m68k.d[1]);
    M68K_ADD16(g_m68k.d[1], g_m68k.d[1]);
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[2] + 0x4 + (int16_t)(uint16_t)g_m68k.d[1])); bus_write32(g_m68k.a[4], _mv); g_m68k.a[4] += 4; M68K_TST32(_mv); }
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[0]; _cnt--; g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_00536C; } }
    g_m68k.a[3] = g_m68k.a[4];
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}

/* $005400-$00546A  (41 instructions, 106 bytes) */
void jt_005400(void) {
    M68K_SWAP(g_m68k.d[0]);
    M68K_DIVU(g_m68k.d[0], 0x6);
    M68K_SWAP(g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], 0x30);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[2] + 0x4 + (int16_t)(uint16_t)g_m68k.d[0])); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], _mv); M68K_TST32(_mv); }
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x27)); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_ADD16(g_m68k.d[1], g_m68k.d[1]);
    M68K_ADD16(g_m68k.d[1], g_m68k.d[1]);
    M68K_ADD16(g_m68k.d[1], g_m68k.d[1]);
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[2] + 0x4 + (int16_t)(uint16_t)g_m68k.d[1])); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], _mv); M68K_TST32(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_SWAP(g_m68k.d[0]);
    M68K_DIVU(g_m68k.d[0], 0xa);
    M68K_SWAP(g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], 0x30);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[2] + 0x4 + (int16_t)(uint16_t)g_m68k.d[0])); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], _mv); M68K_TST32(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_SWAP(g_m68k.d[0]);
    M68K_DIVU(g_m68k.d[0], 0x6);
    M68K_SWAP(g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], 0x30);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[2] + 0x4 + (int16_t)(uint16_t)g_m68k.d[0])); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_postinc32(7)); bus_write32(g_m68k.a[3], _mv); g_m68k.a[3] += 4; M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_postinc32(7)); bus_write32(g_m68k.a[3], _mv); g_m68k.a[3] += 4; M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_postinc32(7)); bus_write32(g_m68k.a[3], _mv); g_m68k.a[3] += 4; M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_postinc32(7)); bus_write32(g_m68k.a[3], _mv); g_m68k.a[3] += 4; M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_postinc32(7)); bus_write32(g_m68k.a[3], _mv); g_m68k.a[3] += 4; M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_postinc32(7)); bus_write32(g_m68k.a[3], _mv); g_m68k.a[3] += 4; M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_postinc32(7)); bus_write32(g_m68k.a[3], _mv); g_m68k.a[3] += 4; M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_postinc32(7)); bus_write32(g_m68k.a[3], _mv); g_m68k.a[3] += 4; M68K_TST32(_mv); }
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}
