/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $005354 - $006704 */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

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

/* $00546A-$005490  (12 instructions, 38 bytes) */
void sub_00546A(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    M68K_TST16(g_m68k.d[0]);
    if (M68K_CC_NE) goto loc_00547C;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x53)); M68K_TST16((uint16_t)g_m68k.d[0]);
    goto loc_005480;
loc_00547C:
    M68K_ADD16(g_m68k.d[0], 0x40);
loc_005480:
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[2] + 0x4 + (int16_t)(uint16_t)g_m68k.d[0])); bus_write32(g_m68k.a[3], _mv); g_m68k.a[3] += 4; M68K_TST32(_mv); }
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}

/* $005490-$0054C8  (14 instructions, 56 bytes) */
void jt_005490(void) {
    g_m68k.a[7] -= 2; bus_write16(g_m68k.a[7], m68k_get_sr());
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[7]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    g_m68k.a[1] = 0x100C70;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0xa)); M68K_TST16((uint16_t)g_m68k.d[1]);
loc_0054A2:
    func_table_call(0x005102);
    g_m68k.a[1] += (int16_t)(uint16_t)(0x58);
    M68K_ADD16(g_m68k.d[0], 0x1);
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[1]; _cnt--; g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_0054A2; } }
    { uint16_t _mv = (uint16_t)(0x148); bus_write16(0x10099A, _mv); M68K_TST16(_mv); }
    bus_write16(0x10103C, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[7] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    m68k_set_sr(_postinc16(7));
    return;
}

/* $0054C8-$005504  (14 instructions, 60 bytes) */
void jt_0054C8(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[7]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    g_m68k.a[1] = 0x100C70;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x10099A))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0xa)); M68K_TST16((uint16_t)g_m68k.d[1]);
loc_0054DE:
    func_table_call(0x00515C);
    M68K_ADD16(g_m68k.d[3], 0x1);
    g_m68k.a[1] += (int16_t)(uint16_t)(0x58);
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[1]; _cnt--; g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_0054DE; } }
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x101212))); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_MULU(g_m68k.d[1], 0x18);
    M68K_CMP16(g_m68k.d[0], g_m68k.d[1]);
    if (M68K_CC_GT) { func_table_call(0x005526); return; }
    bus_write16(0x10103E, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $005500-$00557C  (27 instructions, 124 bytes) */
void jt_005500(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x3e); bus_write8(_ea, _tmp); }
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x10103C))); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_CMP16(g_m68k.d[1], 0x3c);
    if (M68K_CC_CC) goto loc_005526;
    M68K_ADD16(g_m68k.d[1], 0x1);
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); bus_write16(0x10103C, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(0x10103E, _mv); M68K_TST16(_mv); }
    goto loc_005528;
loc_005526:
    M68K_SUB16(g_m68k.d[0], 0x1);
loc_005528:
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(0x10099A, _mv); M68K_TST16(_mv); }
    g_m68k.a[0] = 0x0;
    M68K_CMP16(g_m68k.d[0], 0xffc0);
    if (M68K_CC_GE) goto loc_005542;
    g_m68k.a[0] = 0x1;
loc_005542:
    g_m68k.a[7] -= 2; bus_write16(g_m68k.a[7], m68k_get_sr());
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[7]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    M68K_CMP16(bus_read16(0x10103C), 0x1);
    if (M68K_CC_NE) goto loc_005570;
    M68K_CMP16(bus_read16(0x101212), 0x3);
    if (M68K_CC_CC) goto loc_005570;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x186c)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x015256);
    func_table_call(0x015256);
loc_005570:
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[7] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    m68k_set_sr(_postinc16(7));
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[7] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}

/* $00557C-$0055A2  (10 instructions, 38 bytes) */
void jt_00557C(void) {
    g_m68k.a[7] -= 2; bus_write16(g_m68k.a[7], m68k_get_sr());
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[7]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    g_m68k.a[1] = 0x100C70;
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0xa)); M68K_TST16((uint16_t)g_m68k.d[1]);
loc_00558C:
    func_table_call(0x005148);
    g_m68k.a[1] += (int16_t)(uint16_t)(0x58);
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[1]; _cnt--; g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_00558C; } }
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[7] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    m68k_set_sr(_postinc16(7));
    return;
}

/* $0055A2-$005600  (18 instructions, 94 bytes) */
void sub_0055A2(void) {
    g_m68k.a[5] = 0x108000;
    func_table_call(0x0120E0);
    func_table_call(0x0133FA);
    func_table_call(0x000A26);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0x100)); M68K_TST16((uint16_t)g_m68k.d[3]);
    func_table_call(0x57ba);
    func_table_call(0x5980);
    func_table_call(0x01229E);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x8)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x015256);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x2a)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x015256);
    g_m68k.d[0] = (uint32_t)(int32_t)(int8_t)(0x0); M68K_TST32(g_m68k.d[0]);
    func_table_call(0x011F22);
    { uint16_t _mv = (uint16_t)(0x80); bus_write16(g_m68k.a[5] + (-0x6ea2), _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x80); bus_write16(g_m68k.a[5] + (-0x6ea4), _mv); M68K_TST16(_mv); }
    { uint8_t _mv = (uint8_t)(0x0); bus_write8(g_m68k.a[5] + (-0x6ea0), _mv); M68K_TST8(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[5] + (-0x6ea8), _mv); M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $005600-$005606  (2 instructions, 6 bytes) */
void jt_005600(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $005606-$005618  (5 instructions, 18 bytes) */
void sub_005606(void) {
    g_m68k.a[5] = 0x108000;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[5] + (-0x6ea8)))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.a[0] = bus_read32(0x5618 + (int16_t)(uint16_t)g_m68k.d[0]);
    func_table_call(g_m68k.a[0]);
    return;
}

/* $005634-$005654  (8 instructions, 32 bytes) */
void jt_005634(void) {
    bus_write16(g_m68k.a[5] + (-0x6ea6), 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    g_m68k.a[0] = 0x5654;
    g_m68k.a[1] = (g_m68k.a[5] + (-0x6ed0));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(0x13)); M68K_TST16((uint16_t)g_m68k.d[7]);
loc_005644:
    { uint16_t _mv = (uint16_t)(_postinc16(0)); bus_write16(g_m68k.a[1], _mv); g_m68k.a[1] += 2; M68K_TST16(_mv); }
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[7]; _cnt--; g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_005644; } }
    { uint16_t _mv = (uint16_t)(0x4); bus_write16(g_m68k.a[5] + (-0x6ea8), _mv); M68K_TST16(_mv); }
    { func_table_call(0x567c); return; }
    /* WARNING: function did not end with RTS */
}

/* $00567C-$0056A6  (11 instructions, 42 bytes) */
void jt_00567C(void) {
    { uint32_t _ea = (g_m68k.a[5] + (-0x6ea6)); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[5] + (-0x6ea6)))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_AND16(g_m68k.d[0], 0x1);
    if (M68K_CC_NE) goto loc_0056A0;
    func_table_call(0x59e4);
    func_table_call(0x01229E);
    M68K_CMP16(g_m68k.d[0], 0x0);
    if (M68K_CC_NE) goto loc_0056A0;
    { uint16_t _mv = (uint16_t)(0x8); bus_write16(g_m68k.a[5] + (-0x6ea8), _mv); M68K_TST16(_mv); }
loc_0056A0:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $0056A6-$0056CA  (8 instructions, 36 bytes) */
void jt_0056A6(void) {
    M68K_CMP16(bus_read16(g_m68k.a[5] + (-0x7bd8)), 0x2);
    if (M68K_CC_NE) goto loc_0056B6;
    { uint16_t _mv = (uint16_t)(0x19); bus_write16(g_m68k.a[5] + (-0x6ea6), _mv); M68K_TST16(_mv); }
    goto loc_0056BC;
loc_0056B6:
    { uint16_t _mv = (uint16_t)(0x1e); bus_write16(g_m68k.a[5] + (-0x6ea6), _mv); M68K_TST16(_mv); }
loc_0056BC:
    func_table_call(0x5af2);
    { uint16_t _mv = (uint16_t)(0xc); bus_write16(g_m68k.a[5] + (-0x6ea8), _mv); M68K_TST16(_mv); }
    { func_table_call(0x56ca); return; }
    /* WARNING: function did not end with RTS */
}

/* $0056CA-$005700  (13 instructions, 54 bytes) */
void jt_0056CA(void) {
    func_table_call(0x5b42);
    func_table_call(0x01229E);
    { uint32_t _ea = (g_m68k.a[5] + (-0x6ea6)); uint16_t _tmp = bus_read16(_ea); M68K_SUB16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    if (M68K_CC_PL) goto loc_0056FC;
    M68K_CMP16(bus_read16(g_m68k.a[5] + (-0x6e04)), 0x0);
    if (M68K_CC_NE) goto loc_0056EA;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(0x10FD97))); M68K_TST8((uint8_t)g_m68k.d[0]);
    goto loc_0056F0;
loc_0056EA:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(0x10FD9D))); M68K_TST8((uint8_t)g_m68k.d[0]);
loc_0056F0:
    M68K_AND8(g_m68k.d[0], 0x10);
    if (M68K_CC_EQ) goto loc_0056FC;
    { uint8_t _mv = (uint8_t)(0x1); bus_write8(g_m68k.a[5] + (-0x6ea0), _mv); M68K_TST8(_mv); }
loc_0056FC:
    g_m68k.a[0] = (g_m68k.a[5] + (-0x6f70));
    /* WARNING: function did not end with RTS */
}

/* $005700-$005720  (8 instructions, 32 bytes) */
void jt_005700(void) {
    M68K_CMP16(bus_read16(g_m68k.a[0] + 0x4e), 0x70);
    if (M68K_CC_HI) goto loc_00570E;
    { uint16_t _mv = (uint16_t)(0x10); bus_write16(g_m68k.a[5] + (-0x6ea8), _mv); M68K_TST16(_mv); }
loc_00570E:
    M68K_CMP8(bus_read8(g_m68k.a[5] + (-0x6ea0)), 0x1);
    if (M68K_CC_NE) goto loc_00571A;
    func_table_call(0x5a52);
loc_00571A:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $005720-$005740  (7 instructions, 32 bytes) */
void jt_005720(void) {
    M68K_CMP16(bus_read16(g_m68k.a[5] + (-0x7bd8)), 0x2);
    if (M68K_CC_NE) goto loc_005730;
    { uint16_t _mv = (uint16_t)(0xfa); bus_write16(g_m68k.a[5] + (-0x6ea6), _mv); M68K_TST16(_mv); }
    goto loc_005736;
loc_005730:
    { uint16_t _mv = (uint16_t)(0x12c); bus_write16(g_m68k.a[5] + (-0x6ea6), _mv); M68K_TST16(_mv); }
loc_005736:
    { uint16_t _mv = (uint16_t)(0x14); bus_write16(g_m68k.a[5] + (-0x6ea8), _mv); M68K_TST16(_mv); }
    { func_table_call(0x5740); return; }
    /* WARNING: function did not end with RTS */
}

/* $005740-$00578E  (19 instructions, 78 bytes) */
void jt_005740(void) {
    { uint32_t _ea = (g_m68k.a[5] + (-0x6ea6)); uint16_t _tmp = bus_read16(_ea); M68K_SUB16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    if (M68K_CC_PL) goto loc_00574C;
    { uint16_t _mv = (uint16_t)(0x18); bus_write16(g_m68k.a[5] + (-0x6ea8), _mv); M68K_TST16(_mv); }
loc_00574C:
    M68K_CMP16(bus_read16(g_m68k.a[5] + (-0x6ea6)), 0x7f);
    if (M68K_CC_HI) goto loc_00575A;
    { uint8_t _mv = (uint8_t)(0x1); bus_write8(g_m68k.a[5] + (-0x6ea0), _mv); M68K_TST8(_mv); }
loc_00575A:
    M68K_CMP16(bus_read16(g_m68k.a[5] + (-0x6e04)), 0x0);
    if (M68K_CC_NE) goto loc_00576A;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(0x10FD97))); M68K_TST8((uint8_t)g_m68k.d[0]);
    goto loc_005770;
loc_00576A:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(0x10FD9D))); M68K_TST8((uint8_t)g_m68k.d[0]);
loc_005770:
    M68K_AND8(g_m68k.d[0], 0x10);
    if (M68K_CC_EQ) goto loc_00577C;
    { uint8_t _mv = (uint8_t)(0x1); bus_write8(g_m68k.a[5] + (-0x6ea0), _mv); M68K_TST8(_mv); }
loc_00577C:
    M68K_CMP8(bus_read8(g_m68k.a[5] + (-0x6ea0)), 0x1);
    if (M68K_CC_NE) goto loc_005788;
    func_table_call(0x5a52);
loc_005788:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00578E-$0057BA  (9 instructions, 44 bytes) */
void jt_00578E(void) {
    func_table_call(0x0120E0);
    func_table_call(0x0133FA);
    func_table_call(0x000A26);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x5)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x015256);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x8)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x015256);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $0057BA-$005800  (18 instructions, 70 bytes) */
void sub_0057BA(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x40)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x5)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[3])); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.a[3] = 0x5800;
    func_table_call(0x012036);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x4d)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x2)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[3])); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.a[3] = 0x58f0;
    func_table_call(0x012036);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0xff)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[3])); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.a[3] = 0x5950;
    func_table_call(0x012036);
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}

/* $005980-$0059E4  (23 instructions, 100 bytes) */
void sub_005980(void) {
    g_m68k.a[1] = (g_m68k.a[5] + (-0x6f20));
    g_m68k.a[2] = bus_read32(0x01F8F2);
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(0x13)); M68K_TST16((uint16_t)g_m68k.d[7]);
loc_00598E:
    func_table_call(0x012202);
    { uint32_t _mv = (uint32_t)(g_m68k.a[0]); bus_write32(g_m68k.a[1], _mv); g_m68k.a[1] += 4; M68K_TST32(_mv); }
    g_m68k.a[3] = _postinc32(2);
    func_table_call(0x012270);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x012286);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0xffec)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x012256);
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[7]; _cnt--; g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_00598E; } }
    g_m68k.a[1] = (g_m68k.a[5] + (-0x6fc0));
    g_m68k.a[2] = bus_read32(0x01F49E);
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(0x13)); M68K_TST16((uint16_t)g_m68k.d[7]);
loc_0059C4:
    func_table_call(0x012202);
    { uint32_t _mv = (uint32_t)(g_m68k.a[0]); bus_write32(g_m68k.a[1], _mv); g_m68k.a[1] += 4; M68K_TST32(_mv); }
    g_m68k.a[3] = _postinc32(2);
    func_table_call(0x012270);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x012286);
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[7]; _cnt--; g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_0059C4; } }
    return;
}

/* $0059E4-$005A52  (37 instructions, 110 bytes) */
void sub_0059E4(void) {
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    g_m68k.a[1] = (g_m68k.a[5] + (-0x6ed0));
    g_m68k.a[2] = (g_m68k.a[5] + (-0x6f20));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(0x13)); M68K_TST16((uint16_t)g_m68k.d[7]);
loc_0059F4:
    g_m68k.a[0] = _postinc32(2);
    { uint32_t _ea = g_m68k.a[1]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    if (M68K_CC_PL) goto loc_0059FE;
    /* nop */
    goto loc_005A3A;
loc_0059FE:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x012286);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[1] + (-0x2)))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_CMP16(g_m68k.d[0], 0xf);
    if (M68K_CC_HI) goto loc_005A38;
    M68K_ADD16(g_m68k.d[0], 0x1);
    M68K_LSL16(g_m68k.d[0], 0x4);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x100)); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x012266);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[1])); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_LSL16(g_m68k.d[0], 0x4);
    M68K_ADD16(g_m68k.d[0], 0x7);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[1] + (-0x2)))); M68K_TST16((uint16_t)g_m68k.d[3]);
    M68K_LSR16(g_m68k.d[3], 0x1);
    M68K_SUB16(g_m68k.d[0], g_m68k.d[3]);
    g_m68k.d[2] = (uint32_t)(int32_t)(int8_t)(0x0); M68K_TST32(g_m68k.d[2]);
    func_table_call(0x01225C);
    goto loc_005A3A;
loc_005A38:
    M68K_ADD16(g_m68k.d[4], 0x1);
loc_005A3A:
    M68K_ADD16(g_m68k.d[1], 0x1);
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[7]; _cnt--; g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_0059F4; } }
    M68K_CMP16(g_m68k.d[4], 0x14);
    if (M68K_CC_CS) goto loc_005A4C;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    goto loc_005A50;
loc_005A4C:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
loc_005A50:
    return;
}

/* $005A52-$005A72  (9 instructions, 32 bytes) */
void sub_005A52(void) {
    { uint32_t _ea = (g_m68k.a[5] + (-0x6ea4)); uint16_t _tmp = bus_read16(_ea); M68K_SUB16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    if (M68K_CC_PL) goto loc_005A60;
    { uint16_t _mv = (uint16_t)(0x18); bus_write16(g_m68k.a[5] + (-0x6ea8), _mv); M68K_TST16(_mv); }
    return;
loc_005A60:
    g_m68k.a[0] = 0x5a72;
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[5] + (-0x6ea4)))); M68K_TST16((uint16_t)g_m68k.d[3]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[3]))); M68K_TST8((uint8_t)g_m68k.d[3]);
    func_table_call(0x57ba);
    return;
}

/* $005AF2-$005B1A  (13 instructions, 40 bytes) */
void sub_005AF2(void) {
    g_m68k.a[0] = bus_read32(0x01F49E);
    g_m68k.a[1] = 0x5b1a;
    g_m68k.a[2] = (g_m68k.a[5] + (-0x6f70));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(0x13)); M68K_TST16((uint16_t)g_m68k.d[7]);
loc_005B04:
    g_m68k.a[3] = _postinc32(0);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[3]))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_LSL16(g_m68k.d[0], 0x3);
    M68K_SUB16(g_m68k.d[0], 0xa0);
    M68K_NEG16(g_m68k.d[0]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); g_m68k.a[2] += 2; M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(1)); bus_write16(g_m68k.a[2], _mv); g_m68k.a[2] += 2; M68K_TST16(_mv); }
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[7]; _cnt--; g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_005B04; } }
    return;
}

/* $005B42-$005B96  (23 instructions, 84 bytes) */
void sub_005B42(void) {
    { uint32_t _ea = (g_m68k.a[5] + (-0x6ea2)); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0x80); bus_write16(_ea, _tmp); }
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[5] + (-0x6ea2)))); M68K_TST16((uint16_t)g_m68k.d[3]);
    M68K_LSR16(g_m68k.d[3], 0x8);
    { uint32_t _ea = (g_m68k.a[5] + (-0x6ea2)); uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, 0xff); bus_write16(_ea, _tmp); }
    g_m68k.a[1] = (g_m68k.a[5] + (-0x6fc0));
    g_m68k.a[2] = (g_m68k.a[5] + (-0x6f70));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(0x13)); M68K_TST16((uint16_t)g_m68k.d[7]);
loc_005B60:
    g_m68k.a[0] = _postinc32(1);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(_postinc16(2))); M68K_TST16((uint16_t)g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[2]; uint16_t _tmp = bus_read16(_ea); M68K_SUB16(_tmp, g_m68k.d[3]); bus_write16(_ea, _tmp); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(_postinc16(2))); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x01225C);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[2])); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_ADD16(g_m68k.d[1], 0x10);
    M68K_CMP16(g_m68k.d[1], 0x110);
    if (M68K_CC_HI) goto loc_005B86;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x012286);
    goto loc_005B90;
loc_005B86:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x012286);
loc_005B90:
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[7]; _cnt--; g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_005B60; } }
    return;
}

/* $005B96-$005BDA  (14 instructions, 68 bytes) */
void sub_005B96(void) {
    func_table_call(0x000A26);
    func_table_call(0x0120E0);
    func_table_call(0x0133FA);
    func_table_call(0x005EFA); /* loc_005EFA */
    { uint16_t _mv = (uint16_t)(0x12b); bus_write16(0x101166, _mv); M68K_TST16(_mv); }
    bus_write16(0x101168, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x29)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x005CD2); /* loc_005CD2 */
    func_table_call(0x005CF8); /* loc_005CF8 */
    func_table_call(0x005D6C); /* loc_005D6C */
    func_table_call(0x005D16); /* loc_005D16 */
    func_table_call(0x01229E);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $005BDA-$005BF2  (7 instructions, 24 bytes) */
void sub_005BDA(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x101168))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[0] = bus_read32(0x5bf2 + (int16_t)(uint16_t)g_m68k.d[0]);
    func_table_call(g_m68k.a[0]);
    func_table_call(0x01229E);
    return;
}

/* $005BFE-$005C04  (1 instructions, 6 bytes) */
void jt_005BFE(void) {
    g_m68k.a[0] = 0x0061E2;
    /* WARNING: function did not end with RTS */
}

/* $005C00-$005C4C  (17 instructions, 76 bytes) */
void jt_005C00(void) {
    M68K_OR8(g_m68k.d[0], 0xe2);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x708a)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(0x4)); M68K_TST16((uint16_t)g_m68k.d[7]);
loc_005C0C:
    g_m68k.a[1] = 0x02823A;
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x8)); M68K_TST16((uint16_t)g_m68k.d[1]);
    func_table_call(0x011A62);
    g_m68k.a[0] = (g_m68k.a[0] + 0x4);
    M68K_ADD16(g_m68k.d[0], 0x4);
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[7]; _cnt--; g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_005C0C; } }
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    func_table_call(0x005DA2); /* loc_005DA2 */
    { uint32_t _ea = 0x101166; uint16_t _tmp = bus_read16(_ea); M68K_SUB16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    if (M68K_CC_PL) goto loc_005C46;
    { uint16_t _mv = (uint16_t)(0x12b); bus_write16(0x101166, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(0x101168, _mv); M68K_TST16(_mv); }
loc_005C46:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $005C4C-$005CAE  (21 instructions, 98 bytes) */
void jt_005C4C(void) {
    g_m68k.a[0] = 0x0061F6;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x708a)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(0x3)); M68K_TST16((uint16_t)g_m68k.d[7]);
loc_005C5A:
    g_m68k.a[1] = 0x02823A;
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x8)); M68K_TST16((uint16_t)g_m68k.d[1]);
    func_table_call(0x011A62);
    g_m68k.a[0] = (g_m68k.a[0] + 0x4);
    M68K_ADD16(g_m68k.d[0], 0x4);
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[7]; _cnt--; g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_005C5A; } }
    g_m68k.a[0] = 0x006206;
    g_m68k.a[1] = 0x02823A;
    M68K_SUB16(g_m68k.d[0], 0x40);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x8)); M68K_TST16((uint16_t)g_m68k.d[1]);
    func_table_call(0x011A62);
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(0x5)); M68K_TST16((uint16_t)g_m68k.d[4]);
    func_table_call(0x005DA2); /* loc_005DA2 */
    { uint32_t _ea = 0x101166; uint16_t _tmp = bus_read16(_ea); M68K_SUB16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    if (M68K_CC_PL) goto loc_005CA8;
    { uint16_t _mv = (uint16_t)(0x2); bus_write16(0x101168, _mv); M68K_TST16(_mv); }
loc_005CA8:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $005CAE-$005F1A  (158 instructions, 620 bytes) */
void jt_005CAE(void) {
    func_table_call(0x0120E0);
    func_table_call(0x0133FA);
    g_m68k.a[0] = bus_read32(0x101162);
    func_table_call(0x0110A2);
    func_table_call(0x000A26);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
loc_005CD2:
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    func_table_call(0x010F96);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    bus_write32(0x101162, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    func_table_call(0x010FCC);
    { uint32_t _mv = (uint32_t)(g_m68k.a[0]); bus_write32(0x101162, _mv); M68K_TST32(_mv); }
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
loc_005CF8:
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    g_m68k.a[6] = bus_read32(0x101162);
    M68K_SUB16(g_m68k.d[0], 0x1);
loc_005D04:
    func_table_call(0x012202);
    { uint32_t _mv = (uint32_t)(g_m68k.a[0]); bus_write32(g_m68k.a[6], _mv); g_m68k.a[6] += 4; M68K_TST32(_mv); }
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[0]; _cnt--; g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_005D04; } }
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
loc_005D16:
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[7]);
    g_m68k.a[6] = 0x00609A;
    g_m68k.a[5] = bus_read32(0x101162);
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(0x28)); M68K_TST16((uint16_t)g_m68k.d[7]);
loc_005D2A:
    g_m68k.a[0] = _postinc32(5);
    func_table_call(0x005D3A); /* loc_005D3A */
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[7]; _cnt--; g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_005D2A; } }
    g_m68k.d[7] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
loc_005D3A:
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(_postinc16(6))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[3] = bus_read32(0x080030);
    g_m68k.a[3] = bus_read32(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    func_table_call(0x012270);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(_postinc16(6))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(_postinc16(6))); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x01225C);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(_postinc16(6))); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x012256);
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
loc_005D6C:
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0xe)); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[4] = bus_read32(0x080030);
    g_m68k.a[4] = (g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    g_m68k.a[5] = (g_m68k.a[4] + 0x8);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x10)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x100)); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0x100)); M68K_TST16((uint16_t)g_m68k.d[3]);
    func_table_call(0x01348E);
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
loc_005DA2:
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0x73ca)); M68K_TST16((uint16_t)g_m68k.d[3]);
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(0x4)); M68K_TST16((uint16_t)g_m68k.d[7]);
loc_005DAE:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[4])); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[0] = 0x100002;
    g_m68k.a[0] = bus_read32(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    g_m68k.d[0] = _postinc32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    func_table_call(0x005DE8); /* loc_005DE8 */
    func_table_call(0x005E9E); /* loc_005E9E */
    g_m68k.a[1] = 0x02823A;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[3])); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x7)); M68K_TST16((uint16_t)g_m68k.d[1]);
    func_table_call(0x011A62);
    M68K_ADD16(g_m68k.d[3], 0x4);
    M68K_ADD16(g_m68k.d[4], 0x1);
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[7]; _cnt--; g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_005DAE; } }
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
loc_005DE8:
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    M68K_ADD32(g_m68k.d[0], 0x8000);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_SWAP(g_m68k.d[0]);
    g_m68k.d[1] = (uint32_t)(int32_t)(int8_t)(0x0); M68K_TST32(g_m68k.d[1]);
    g_m68k.d[2] = (uint32_t)(int32_t)(int8_t)(0x0); M68K_TST32(g_m68k.d[2]);
    M68K_DIVU(g_m68k.d[0], 0x3c);
    M68K_SWAP(g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(0x5e62 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST8((uint8_t)g_m68k.d[1]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_SWAP(g_m68k.d[0]);
    M68K_DIVU(g_m68k.d[1], 0xa);
    M68K_SWAP(g_m68k.d[1]);
    M68K_OR8(g_m68k.d[2], g_m68k.d[1]);
    M68K_LSL32(g_m68k.d[2], 0x4);
    M68K_SWAP(g_m68k.d[1]);
    M68K_OR8(g_m68k.d[2], g_m68k.d[1]);
    M68K_LSL32(g_m68k.d[2], 0x4);
    M68K_OR8(g_m68k.d[2], 0xb);
    M68K_LSL32(g_m68k.d[2], 0x4);
    M68K_DIVU(g_m68k.d[0], 0x3c);
    M68K_SWAP(g_m68k.d[0]);
    g_m68k.d[1] = (uint32_t)(int32_t)(int8_t)(0x0); M68K_TST32(g_m68k.d[1]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_DIVU(g_m68k.d[1], 0xa);
    M68K_SWAP(g_m68k.d[1]);
    M68K_OR8(g_m68k.d[2], g_m68k.d[1]);
    M68K_LSL32(g_m68k.d[2], 0x4);
    M68K_SWAP(g_m68k.d[1]);
    M68K_OR8(g_m68k.d[2], g_m68k.d[1]);
    M68K_LSL32(g_m68k.d[2], 0x4);
    M68K_OR8(g_m68k.d[2], 0xa);
    M68K_LSL32(g_m68k.d[2], 0x4);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_SWAP(g_m68k.d[0]);
    M68K_DIVU(g_m68k.d[0], 0xa);
    M68K_SWAP(g_m68k.d[0]);
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    M68K_LSL32(g_m68k.d[2], 0x4);
    M68K_SWAP(g_m68k.d[0]);
    M68K_CMP16(g_m68k.d[0], 0x0);
    if (M68K_CC_HI) goto loc_005E5A;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0xc)); M68K_TST16((uint16_t)g_m68k.d[0]);
loc_005E5A:
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
loc_005E9E:
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[7]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    M68K_CMP16(g_m68k.d[4], 0x5);
    if (M68K_CC_CS) goto loc_005EAC;
    M68K_SUB16(g_m68k.d[4], 0x5);
loc_005EAC:
    M68K_LSL16(g_m68k.d[4], 0x5);
    M68K_ADD16(g_m68k.d[4], 0x4);
    g_m68k.a[6] = bus_read32(0x101162);
    g_m68k.a[6] = (g_m68k.a[6] + 0 + (int16_t)(uint16_t)g_m68k.d[4]);
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(0x7)); M68K_TST16((uint16_t)g_m68k.d[7]);
loc_005EBE:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    g_m68k.a[0] = _postinc32(6);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[2])); M68K_TST8((uint8_t)g_m68k.d[0]);
    M68K_LSR32(g_m68k.d[2], 0x4);
    M68K_AND8(g_m68k.d[0], 0xf);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(0x5eec + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST8((uint8_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[3] = bus_read32(0x080030);
    g_m68k.a[3] = bus_read32(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    func_table_call(0x012270);
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[7]; _cnt--; g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_005EBE; } }
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[7] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
loc_005EFA:
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x40)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x8)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x100)); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.a[3] = 0x5f1a;
    func_table_call(0x012036);
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}

/* $006000-$006006  (2 instructions, 6 bytes) */
void jt_006000(void) {
    { uint8_t _mv = (uint8_t)(_postinc8(7)); g_m68k.a[7] -= 1; bus_write8(g_m68k.a[7], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x0); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $006004-$006016  (6 instructions, 18 bytes) */
void jt_006004(void) {
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[7] -= 1; bus_write8(g_m68k.a[7], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(7)); g_m68k.a[7] -= 1; bus_write8(g_m68k.a[7], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x9); bus_write8(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[3] -= 1; bus_write8(g_m68k.a[3], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[0], 0xa);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $006200-$00620E  (4 instructions, 14 bytes) */
void jt_006200(void) {
    /* TODO $006200: nbcd.b d0  [48 00] */
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[4])); bus_write16(g_m68k.a[4] + 0x4800, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[0] + 0x48 + (int16_t)(uint16_t)g_m68k.d[5])); g_m68k.a[0] -= 2; bus_write16(g_m68k.a[0], _mv); M68K_TST16(_mv); }
    M68K_OR8(g_m68k.d[0], 0xe7);
    /* WARNING: function did not end with RTS */
}

/* $00620C-$006314  (52 instructions, 264 bytes) */
void sub_00620C(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    /* TODO $00620E: dc.w $fefe  [FE FE] */
    func_table_call(0x000A26);
    func_table_call(0x0120E0);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x00D722);
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(0x101202, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(0x1011FA, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1011FA))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], 0x12);
    func_table_call(0x01690E);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x40)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x6)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x100)); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.a[3] = 0x006990;
    func_table_call(0x012036);
    g_m68k.a[1] = 0x10116A;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x2)); M68K_TST16((uint16_t)g_m68k.d[0]);
loc_006268:
    func_table_call(0x012202);
    { uint32_t _mv = (uint32_t)(g_m68k.a[0]); bus_write32(g_m68k.a[1], _mv); g_m68k.a[1] += 4; M68K_TST32(_mv); }
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[0]; _cnt--; g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_006268; } }
    g_m68k.a[0] = bus_read32(0x10116A);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x01225C);
    g_m68k.a[3] = bus_read32(0x006AB0);
    g_m68k.a[3] = bus_read32(g_m68k.a[3] + 0x8);
    func_table_call(0x012270);
    g_m68k.a[0] = bus_read32(0x10116E);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x100)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x01225C);
    g_m68k.a[3] = bus_read32(0x006AB0);
    g_m68k.a[3] = bus_read32(g_m68k.a[3] + 0x8);
    func_table_call(0x012270);
    g_m68k.a[0] = bus_read32(0x101172);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x30)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x20)); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x01225C);
    g_m68k.a[3] = bus_read32(0x006AB0);
    g_m68k.a[3] = bus_read32(g_m68k.a[3] + 0xc);
    func_table_call(0x012270);
    func_table_call(0x0065F2);
    func_table_call(0x006314);
    func_table_call(0x01229E);
    func_table_call(0x006388);
    func_table_call(0x0063F4);
    g_m68k.a[6] = 0x101508;
    func_table_call(0x00633A);
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $006314-$00633A  (6 instructions, 38 bytes) */
void sub_006314(void) {
    g_m68k.a[0] = 0x00666A;
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[0])); bus_write16(0x101180, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[0] + 0x2)); bus_write16(0x101186, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(0x101182, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(0x10117E, _mv); M68K_TST16(_mv); }
    return;
}

/* $00633A-$006388  (12 instructions, 78 bytes) */
void sub_00633A(void) {
    func_table_call(0x00D72A);
    { uint16_t _mv = (uint16_t)(0x100); bus_write16(g_m68k.a[6] + 0x8, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x100); bus_write16(g_m68k.a[6] + 0xa, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x100); bus_write16(g_m68k.a[6] + 0xc, _mv); M68K_TST16(_mv); }
    func_table_call(0x00F130);
    { uint32_t _mv = (uint32_t)(0xa00000); bus_write32(g_m68k.a[6] + 0xc8, _mv); M68K_TST32(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(0x10118C, _mv); M68K_TST16(_mv); }
    { uint32_t _mv = (uint32_t)(0x1000000); bus_write32(g_m68k.a[6] + 0xcc, _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(0x180000); bus_write32(0x101188, _mv); M68K_TST32(_mv); }
    { uint16_t _mv = (uint16_t)(0x18); bus_write16(g_m68k.a[6] + 0x54, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x325); bus_write16(g_m68k.a[6] + 0x14, _mv); M68K_TST16(_mv); }
    return;
}

/* $006388-$0063F4  (21 instructions, 108 bytes) */
void sub_006388(void) {
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(0x101190, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(0x101192, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(0x101194, _mv); M68K_TST16(_mv); }
    func_table_call(0x012202);
    { uint32_t _mv = (uint32_t)(g_m68k.a[0]); bus_write32(0x101176, _mv); M68K_TST32(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x012286);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x101194))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[3] = 0x006920;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST16((uint16_t)g_m68k.d[2]);
    M68K_LSL16(g_m68k.d[2], 0x3);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x100)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x012266);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0xe8)); M68K_TST16((uint16_t)g_m68k.d[0]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(0x101196, _mv); M68K_TST16(_mv); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0xc0)); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x01225C);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x012256);
    return;
}

/* $0063F4-$00641A  (8 instructions, 38 bytes) */
void sub_0063F4(void) {
    func_table_call(0x012202);
    { uint32_t _mv = (uint32_t)(g_m68k.a[0]); bus_write32(0x10117A, _mv); M68K_TST32(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x10)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0xc0)); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x01225C);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x012256);
    return;
}

/* $00641A-$00646E  (17 instructions, 84 bytes) */
void sub_00641A(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[1]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1011FC))); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x010E36);
    M68K_CMP16(g_m68k.d[0], 0x1);
    if (M68K_CC_EQ) goto loc_00645E;
    g_m68k.a[6] = 0x101508;
    func_table_call(0x0064F4);
    func_table_call(0x0066A8);
    func_table_call(0x006486);
    func_table_call(0x01229E);
    func_table_call(0x0065FC);
    M68K_CMP16(g_m68k.d[0], 0x0);
    if (M68K_CC_NE) goto loc_006468;
loc_00645E:
    func_table_call(0x00646E);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
loc_006468:
    g_m68k.d[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}

/* $00646E-$006486  (6 instructions, 24 bytes) */
void sub_00646E(void) {
    g_m68k.a[1] = 0x10116A;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x2)); M68K_TST16((uint16_t)g_m68k.d[0]);
loc_006478:
    g_m68k.a[0] = _postinc32(1);
    func_table_call(0x012252);
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[0]; _cnt--; g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_006478; } }
    return;
}

/* $006486-$0064B4  (10 instructions, 46 bytes) */
void sub_006486(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x101180))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.a[1] = 0x0064B4;
    M68K_LSL16(g_m68k.d[0], 0x3);
    g_m68k.a[3] = bus_read32(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    g_m68k.a[0] = bus_read32(0x10117A);
    func_table_call(0x012270);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[1] + 0x6 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[1] + 0x4 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x01225C);
    return;
}

/* $0064B4-$0064E0  (11 instructions, 44 bytes) */
void jt_0064B4(void) {
    M68K_OR8(g_m68k.d[0], 0xb4);
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xc0); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0xb4);
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xc0); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0xb4);
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xc0); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x40);
    M68K_OR16(g_m68k.d[0], 0xc0);
    M68K_OR8(g_m68k.d[0], 0x58);
    M68K_OR16(g_m68k.d[0], 0xc0);
    M68K_OR8(g_m68k.d[0], 0x70);
    /* WARNING: function did not end with RTS */
}

/* $0064F4-$0065CA  (54 instructions, 214 bytes) */
void sub_0064F4(void) {
    g_m68k.a[1] = 0x0065CA;
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x101180))); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_ADD16(g_m68k.d[1], g_m68k.d[1]);
    M68K_ADD16(g_m68k.d[1], g_m68k.d[1]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[1]))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_EXT32(g_m68k.d[0]);
    g_m68k.d[2] = bus_read32(0x101188); M68K_TST32((uint32_t)g_m68k.d[2]);
    M68K_ADD32(g_m68k.d[2], g_m68k.d[0]);
    M68K_AND32(g_m68k.d[2], 0x1fffff);
    { uint32_t _mv = (uint32_t)(g_m68k.d[2]); bus_write32(0x101188, _mv); M68K_TST32(_mv); }
    M68K_SWAP(g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[6] + 0x54, _mv); M68K_TST16(_mv); }
    M68K_ADD16(g_m68k.d[1], 0x2);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[1]))); M68K_TST16((uint16_t)g_m68k.d[1]);
    { uint32_t _ea = (g_m68k.a[6] + 0x14); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[1]); bus_write16(_ea, _tmp); }
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x14))); M68K_TST16((uint16_t)g_m68k.d[1]);
    if (M68K_CC_EQ) goto loc_006562;
    if (M68K_CC_MI) goto loc_00654E;
    M68K_SUB16(g_m68k.d[1], 0x7);
    if (M68K_CC_LE) goto loc_006562;
    M68K_CMP16(g_m68k.d[1], 0x1200);
    if (M68K_CC_LS) goto loc_006566;
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x1200)); M68K_TST16((uint16_t)g_m68k.d[1]);
    goto loc_006566;
loc_00654E:
    M68K_ADD16(g_m68k.d[1], 0x7);
    if (M68K_CC_PL) goto loc_006562;
    M68K_CMP16(g_m68k.d[1], 0xf800);
    if (M68K_CC_GE) goto loc_006566;
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0xf800)); M68K_TST16((uint16_t)g_m68k.d[1]);
    goto loc_006566;
loc_006562:
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[1]);
loc_006566:
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); bus_write16(g_m68k.a[6] + 0x14, _mv); M68K_TST16(_mv); }
    M68K_ASR16(g_m68k.d[1], 0x8);
    M68K_CMP16(g_m68k.d[2], 0x0);
    if (M68K_CC_NE) goto loc_0065AC;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x10118C))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_SUB16(g_m68k.d[0], g_m68k.d[1]);
    M68K_AND16(g_m68k.d[0], 0x1ff);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(0x10118C, _mv); M68K_TST16(_mv); }
    g_m68k.a[0] = bus_read32(0x10116A);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x01225C);
    g_m68k.a[0] = bus_read32(0x10116E);
    M68K_ADD16(g_m68k.d[0], 0x100);
    M68K_AND16(g_m68k.d[0], 0x1ff);
    func_table_call(0x01225C);
    goto loc_0065B8;
loc_0065AC:
    M68K_CMP16(g_m68k.d[2], 0x18);
    if (M68K_CC_NE) goto loc_0065B8;
    { uint32_t _ea = (g_m68k.a[6] + 0xcc); uint16_t _tmp = bus_read16(_ea); M68K_SUB16(_tmp, g_m68k.d[1]); bus_write16(_ea, _tmp); }
loc_0065B8:
    func_table_call(0x00EEA6);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x0065EA);
    return;
}

/* $0065EA-$0065F2  (2 instructions, 8 bytes) */
void sub_0065EA(void) {
    { uint32_t _ea = 0x101184; uint16_t _tmp = bus_read16(_ea); M68K_OR16(_tmp, g_m68k.d[0]); bus_write16(_ea, _tmp); }
    return;
}

/* $0065F2-$0065FC  (2 instructions, 10 bytes) */
void sub_0065F2(void) {
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(0x101184, _mv); M68K_TST16(_mv); }
    return;
}

/* $0065FC-$006602  (1 instructions, 6 bytes) */
void sub_0065FC(void) {
    g_m68k.a[0] = 0x00666A;
    /* WARNING: function did not end with RTS */
}

/* $006600-$0066A6  (35 instructions, 166 bytes) */
void jt_006600(void) {
    if (M68K_CC_NE) goto loc_00666C;
    M68K_CMP16(bus_read16(0x101186), 0x0);
    if (M68K_CC_EQ) goto loc_00661A;
    M68K_CMP16(bus_read16(0x101184), 0x1);
    if (M68K_CC_EQ) goto loc_00665E;
loc_00661A:
    { uint16_t _mv = (uint16_t)(bus_read16(0x101182)); bus_write16(0x10117E, _mv); M68K_TST16(_mv); }
    func_table_call(0x0065F2);
    { uint32_t _ea = 0x101182; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x101182))); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_ADD16(g_m68k.d[1], g_m68k.d[1]);
    M68K_ADD16(g_m68k.d[1], g_m68k.d[1]);
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[1])); bus_write16(0x101180, _mv); M68K_TST16(_mv); }
    M68K_CMP16(bus_read16(0x101180), 0xffff);
    if (M68K_CC_EQ) goto loc_006658;
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[0] + 0x2 + (int16_t)(uint16_t)g_m68k.d[1])); bus_write16(0x101186, _mv); M68K_TST16(_mv); }
    goto loc_00665E;
loc_006658:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    goto loc_006668;
loc_00665E:
    { uint32_t _ea = 0x101186; uint16_t _tmp = bus_read16(_ea); M68K_SUB16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
loc_006668:
    return;
loc_00666C:
    { uint32_t _ea = g_m68k.a[2]; uint16_t _tmp = bus_read16(_ea); M68K_OR16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x3); bus_write8(_ea, _tmp); }
    M68K_OR32(g_m68k.d[0], 0x20012);
    M68K_OR8(g_m68k.d[4], 0xa0);
    M68K_OR8(g_m68k.d[2], 0x12);
    M68K_OR8(g_m68k.d[0], 0x14);
    M68K_OR8(g_m68k.d[7], 0xa);
    M68K_OR8(g_m68k.d[1], 0x14);
    M68K_OR8(g_m68k.d[5], 0x78);
    M68K_OR8(g_m68k.d[7], 0x23);
    M68K_OR8(g_m68k.d[6], 0x62);
    M68K_OR8(g_m68k.d[7], 0x78);
    M68K_OR8(g_m68k.d[0], 0x14);
    M68K_OR8(g_m68k.d[7], 0x14);
    /* WARNING: function did not end with RTS */
}

/* $0066A8-$0066BA  (6 instructions, 18 bytes) */
void sub_0066A8(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x101180))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[0] = bus_read32(0x66ba + (int16_t)(uint16_t)g_m68k.d[0]);
    func_table_call(g_m68k.a[0]);
    return;
}

/* $0066E2-$0066F4  (4 instructions, 18 bytes) */
void jt_0066E2(void) {
    g_m68k.a[0] = bus_read32(0x101176);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x012286);
    return;
}

/* $0066F4-$006704  (3 instructions, 16 bytes) */
void jt_0066F4(void) {
    g_m68k.a[0] = bus_read32(0x101176);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x012286);
    /* WARNING: function did not end with RTS */
}
