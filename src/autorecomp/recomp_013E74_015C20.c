/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $013E74 - $015C20 */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

/* $013E74-$013F6A  (87 instructions, 246 bytes) */
void sub_013E74(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[1]);
    g_m68k.d[1] = (uint32_t)(int32_t)(int8_t)(0x80); M68K_TST32(g_m68k.d[1]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[2])); M68K_TST16((uint16_t)g_m68k.d[3]);
    M68K_AND16(g_m68k.d[3], g_m68k.d[1]);
    M68K_SWAP(g_m68k.d[3]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[3]);
    M68K_AND16(g_m68k.d[3], g_m68k.d[1]);
    g_m68k.d[1] = (uint32_t)(int32_t)(int8_t)(0xff); M68K_TST32(g_m68k.d[1]);
    g_m68k.d[4] = (uint32_t)(int32_t)(int8_t)(0x3); M68K_TST32(g_m68k.d[4]);
    g_m68k.a[5] = 0x1027DE;
loc_013E8E:
    M68K_CMP32(g_m68k.d[3], bus_read32(g_m68k.a[5]));
    if (M68K_CC_EQ) goto loc_013EC0;
    g_m68k.a[5] += 0x8;
    M68K_ADD16(g_m68k.d[1], 0x1);
    M68K_CMP16(g_m68k.d[1], g_m68k.d[4]);
    if (M68K_CC_NE) goto loc_013E8E;
    g_m68k.a[4] = g_m68k.a[5];
    g_m68k.a[3] = _predec32(4);
    g_m68k.a[4] -= 0x4;
    M68K_SUB16(g_m68k.d[1], 0x1);
loc_013EA4:
    { uint32_t _mv = (uint32_t)(_predec32(4)); g_m68k.a[5] -= 4; bus_write32(g_m68k.a[5], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(4)); g_m68k.a[5] -= 4; bus_write32(g_m68k.a[5], _mv); M68K_TST32(_mv); }
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[1]; _cnt--; g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_013EA4; } }
    { uint32_t _mv = (uint32_t)(g_m68k.d[3]); bus_write32(g_m68k.a[4], _mv); g_m68k.a[4] += 4; M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(g_m68k.a[3]); bus_write32(g_m68k.a[4], _mv); M68K_TST32(_mv); }
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    func_table_call(0x013EF4); /* loc_013EF4 */
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    goto loc_013EDC;
loc_013EC0:
    g_m68k.a[4] = g_m68k.a[5];
    g_m68k.a[5] += 0x4;
    g_m68k.a[3] = _postinc32(5);
    M68K_TST16(g_m68k.d[1]);
    if (M68K_CC_MI) goto loc_013EDC;
    g_m68k.a[4] = g_m68k.a[5];
    g_m68k.a[4] -= 0x8;
loc_013ED0:
    { uint32_t _mv = (uint32_t)(_predec32(4)); g_m68k.a[5] -= 4; bus_write32(g_m68k.a[5], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(4)); g_m68k.a[5] -= 4; bus_write32(g_m68k.a[5], _mv); M68K_TST32(_mv); }
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[1]; _cnt--; g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_013ED0; } }
    { uint32_t _mv = (uint32_t)(g_m68k.d[3]); bus_write32(g_m68k.a[4], _mv); g_m68k.a[4] += 4; M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(g_m68k.a[3]); bus_write32(g_m68k.a[4], _mv); M68K_TST32(_mv); }
loc_013EDC:
    M68K_LSR16(g_m68k.d[0], 0x3);
    M68K_AND16(g_m68k.d[0], 0xf);
    M68K_ADD16(g_m68k.d[2], g_m68k.d[2]);
    M68K_AND16(g_m68k.d[2], 0xf0);
    M68K_OR16(g_m68k.d[0], g_m68k.d[2]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST8((uint8_t)g_m68k.d[0]);
    g_m68k.d[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
loc_013EF4:
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_LSR16(g_m68k.d[1], 0x8);
    M68K_EXT32(g_m68k.d[1]);
    M68K_DIVU(g_m68k.d[1], bus_read16(0x102BFE));
    M68K_SWAP(g_m68k.d[1]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[2])); M68K_TST16((uint16_t)g_m68k.d[3]);
    M68K_LSR16(g_m68k.d[3], 0x8);
    M68K_EXT32(g_m68k.d[3]);
    M68K_DIVU(g_m68k.d[3], bus_read16(0x102C00));
    M68K_SWAP(g_m68k.d[3]);
    M68K_MULU(g_m68k.d[3], bus_read16(0x102BFE));
    M68K_ADD16(g_m68k.d[3], g_m68k.d[1]);
    M68K_ADD16(g_m68k.d[3], g_m68k.d[3]);
    g_m68k.a[4] = bus_read32(0x102C02);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.d[3]))); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_ADD16(g_m68k.d[1], g_m68k.d[1]);
    M68K_ADD16(g_m68k.d[1], g_m68k.d[1]);
    g_m68k.a[4] = bus_read32(0x102C08);
    g_m68k.a[4] = bus_read32(g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.d[1]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_AND16(g_m68k.d[1], 0x80);
    M68K_LSR16(g_m68k.d[1], 0x5);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[2])); M68K_TST16((uint16_t)g_m68k.d[3]);
    M68K_AND16(g_m68k.d[3], 0x80);
    M68K_LSR16(g_m68k.d[3], 0x4);
    M68K_OR16(g_m68k.d[1], g_m68k.d[3]);
    g_m68k.a[4] = bus_read32(g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.d[1]);
    g_m68k.a[5] = 0x014068;
loc_013F4E:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[0]);
    if (M68K_CC_MI) goto loc_013F58;
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); bus_write8(g_m68k.a[3], _mv); g_m68k.a[3] += 1; M68K_TST8(_mv); }
    goto loc_013F4E;
loc_013F58:
    M68K_ADD8(g_m68k.d[0], g_m68k.d[0]);
    if (M68K_CC_EQ) { func_table_call(0x01406C); return; }
    M68K_AND16(g_m68k.d[0], 0xff);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[1]);
    M68K_NEG16(g_m68k.d[0]);
    { func_table_call((g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.d[0])); return; }
    /* WARNING: function did not end with RTS */
}

/* $014000-$014072  (55 instructions, 114 bytes) */
void jt_014000(void) {
    { uint8_t _mv = (uint8_t)(g_m68k.d[1]); bus_write8(g_m68k.a[3], _mv); g_m68k.a[3] += 1; M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[1]); bus_write8(g_m68k.a[3], _mv); g_m68k.a[3] += 1; M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[1]); bus_write8(g_m68k.a[3], _mv); g_m68k.a[3] += 1; M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[1]); bus_write8(g_m68k.a[3], _mv); g_m68k.a[3] += 1; M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[1]); bus_write8(g_m68k.a[3], _mv); g_m68k.a[3] += 1; M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[1]); bus_write8(g_m68k.a[3], _mv); g_m68k.a[3] += 1; M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[1]); bus_write8(g_m68k.a[3], _mv); g_m68k.a[3] += 1; M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[1]); bus_write8(g_m68k.a[3], _mv); g_m68k.a[3] += 1; M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[1]); bus_write8(g_m68k.a[3], _mv); g_m68k.a[3] += 1; M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[1]); bus_write8(g_m68k.a[3], _mv); g_m68k.a[3] += 1; M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[1]); bus_write8(g_m68k.a[3], _mv); g_m68k.a[3] += 1; M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[1]); bus_write8(g_m68k.a[3], _mv); g_m68k.a[3] += 1; M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[1]); bus_write8(g_m68k.a[3], _mv); g_m68k.a[3] += 1; M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[1]); bus_write8(g_m68k.a[3], _mv); g_m68k.a[3] += 1; M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[1]); bus_write8(g_m68k.a[3], _mv); g_m68k.a[3] += 1; M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[1]); bus_write8(g_m68k.a[3], _mv); g_m68k.a[3] += 1; M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[1]); bus_write8(g_m68k.a[3], _mv); g_m68k.a[3] += 1; M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[1]); bus_write8(g_m68k.a[3], _mv); g_m68k.a[3] += 1; M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[1]); bus_write8(g_m68k.a[3], _mv); g_m68k.a[3] += 1; M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[1]); bus_write8(g_m68k.a[3], _mv); g_m68k.a[3] += 1; M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[1]); bus_write8(g_m68k.a[3], _mv); g_m68k.a[3] += 1; M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[1]); bus_write8(g_m68k.a[3], _mv); g_m68k.a[3] += 1; M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[1]); bus_write8(g_m68k.a[3], _mv); g_m68k.a[3] += 1; M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[1]); bus_write8(g_m68k.a[3], _mv); g_m68k.a[3] += 1; M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[1]); bus_write8(g_m68k.a[3], _mv); g_m68k.a[3] += 1; M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[1]); bus_write8(g_m68k.a[3], _mv); g_m68k.a[3] += 1; M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[1]); bus_write8(g_m68k.a[3], _mv); g_m68k.a[3] += 1; M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[1]); bus_write8(g_m68k.a[3], _mv); g_m68k.a[3] += 1; M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[1]); bus_write8(g_m68k.a[3], _mv); g_m68k.a[3] += 1; M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[1]); bus_write8(g_m68k.a[3], _mv); g_m68k.a[3] += 1; M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[1]); bus_write8(g_m68k.a[3], _mv); g_m68k.a[3] += 1; M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[1]); bus_write8(g_m68k.a[3], _mv); g_m68k.a[3] += 1; M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[1]); bus_write8(g_m68k.a[3], _mv); g_m68k.a[3] += 1; M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[1]); bus_write8(g_m68k.a[3], _mv); g_m68k.a[3] += 1; M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[1]); bus_write8(g_m68k.a[3], _mv); g_m68k.a[3] += 1; M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[1]); bus_write8(g_m68k.a[3], _mv); g_m68k.a[3] += 1; M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[1]); bus_write8(g_m68k.a[3], _mv); g_m68k.a[3] += 1; M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[1]); bus_write8(g_m68k.a[3], _mv); g_m68k.a[3] += 1; M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[1]); bus_write8(g_m68k.a[3], _mv); g_m68k.a[3] += 1; M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[1]); bus_write8(g_m68k.a[3], _mv); g_m68k.a[3] += 1; M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[1]); bus_write8(g_m68k.a[3], _mv); g_m68k.a[3] += 1; M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[1]); bus_write8(g_m68k.a[3], _mv); g_m68k.a[3] += 1; M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[1]); bus_write8(g_m68k.a[3], _mv); g_m68k.a[3] += 1; M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[1]); bus_write8(g_m68k.a[3], _mv); g_m68k.a[3] += 1; M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[1]); bus_write8(g_m68k.a[3], _mv); g_m68k.a[3] += 1; M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[1]); bus_write8(g_m68k.a[3], _mv); g_m68k.a[3] += 1; M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[1]); bus_write8(g_m68k.a[3], _mv); g_m68k.a[3] += 1; M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[1]); bus_write8(g_m68k.a[3], _mv); g_m68k.a[3] += 1; M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[1]); bus_write8(g_m68k.a[3], _mv); g_m68k.a[3] += 1; M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[1]); bus_write8(g_m68k.a[3], _mv); g_m68k.a[3] += 1; M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[1]); bus_write8(g_m68k.a[3], _mv); g_m68k.a[3] += 1; M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[1]); bus_write8(g_m68k.a[3], _mv); g_m68k.a[3] += 1; M68K_TST8(_mv); }
    { func_table_call(0x013F4E); return; }
loc_01406C:
    g_m68k.a[3] -= (int16_t)(uint16_t)(0x100);
    return;
}

/* $014072-$01410E  (36 instructions, 156 bytes) */
void sub_014072(void) {
    g_m68k.a[7] -= 2; bus_write16(g_m68k.a[7], m68k_get_sr());
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[7]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    g_m68k.a[0] = 0x103220;
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[0] + 0x0, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); bus_write16(g_m68k.a[0] + 0x2, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[0] + 0x4, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[3]); bus_write16(g_m68k.a[0] + 0x6, _mv); M68K_TST16(_mv); }
    g_m68k.a[0] = 0x103228;
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[0] + 0x0, _mv); M68K_TST16(_mv); }
    M68K_ADD16(g_m68k.d[1], 0x200);
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); bus_write16(g_m68k.a[0] + 0x2, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[0] + 0x4, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[3]); bus_write16(g_m68k.a[0] + 0x6, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(0x10320C, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(0x10320E, _mv); M68K_TST16(_mv); }
    { uint32_t _mv = (uint32_t)(g_m68k.a[4]); bus_write32(0x103210, _mv); M68K_TST32(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(5)); bus_write16(0x103214, _mv); M68K_TST16(_mv); }
    { uint32_t _mv = (uint32_t)(g_m68k.a[5]); bus_write32(0x103216, _mv); M68K_TST32(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(6)); bus_write16(0x10321A, _mv); M68K_TST16(_mv); }
    { uint32_t _mv = (uint32_t)(g_m68k.a[6]); bus_write32(0x10321C, _mv); M68K_TST32(_mv); }
    g_m68k.a[1] = 0x102C0C;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x40)); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.d[1] = (uint32_t)(int32_t)(int8_t)(0x17); M68K_TST32(g_m68k.d[1]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
loc_0140E0:
    bus_write32(g_m68k.a[1], 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    func_table_call(0x012202);
    { uint32_t _mv = (uint32_t)(g_m68k.a[0]); bus_write32(g_m68k.a[1] + 0x8, _mv); M68K_TST32(_mv); }
    if (M68K_CC_NE) goto loc_0140F6;
    M68K_TST32(bus_read32(0x7007777));
loc_0140F6:
    func_table_call(0x012286);
    g_m68k.a[1] += (int16_t)(uint16_t)(g_m68k.d[2]);
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[1]; _cnt--; g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_0140E0; } }
    func_table_call(0x014160); /* sub_014160 */
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[7] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    m68k_set_sr(_postinc16(7));
    return;
}

/* $01410E-$014144  (15 instructions, 54 bytes) */
void sub_01410E(void) {
    g_m68k.a[7] -= 2; bus_write16(g_m68k.a[7], m68k_get_sr());
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[7]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    g_m68k.a[1] = 0x102C0C;
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(0x40)); M68K_TST16((uint16_t)g_m68k.d[4]);
    g_m68k.d[5] = (uint32_t)(int32_t)(int8_t)(0x17); M68K_TST32(g_m68k.d[5]);
loc_014120:
    M68K_TST32(bus_read32(g_m68k.a[1]));
    if (M68K_CC_EQ) goto loc_01412C;
    func_table_call(0x014240);
loc_01412C:
    g_m68k.a[0] = bus_read32(g_m68k.a[1] + 0x8);
    func_table_call(0x012252);
    g_m68k.a[1] += (int16_t)(uint16_t)(g_m68k.d[4]);
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[5]; _cnt--; g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_014120; } }
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[7] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    m68k_set_sr(_postinc16(7));
    return;
}

/* $014144-$014152  (3 instructions, 14 bytes) */
void sub_014144(void) {
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(0x103220, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(0x103222, _mv); M68K_TST16(_mv); }
    return;
}

/* $014152-$014160  (3 instructions, 14 bytes) */
void sub_014152(void) {
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(0x103224, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(0x103226, _mv); M68K_TST16(_mv); }
    return;
}

/* $014160-$0141AA  (18 instructions, 74 bytes) */
void sub_014160(void) {
    g_m68k.a[7] -= 2; bus_write16(g_m68k.a[7], m68k_get_sr());
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[7]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    func_table_call(0x014256);
    g_m68k.a[1] = 0x102C0C;
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(0x40)); M68K_TST16((uint16_t)g_m68k.d[4]);
    g_m68k.d[5] = (uint32_t)(int32_t)(int8_t)(0x17); M68K_TST32(g_m68k.d[5]);
    g_m68k.a[4] = 0x103220;
loc_01417E:
    g_m68k.d[0] = bus_read32(g_m68k.a[1]); M68K_TST32((uint32_t)g_m68k.d[0]);
    if (M68K_CC_EQ) goto loc_014188;
    g_m68k.a[0] = g_m68k.d[0];
    func_table_call(g_m68k.a[0]);
loc_014188:
    g_m68k.a[1] += (int16_t)(uint16_t)(g_m68k.d[4]);
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[5]; _cnt--; g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_01417E; } }
    { uint32_t _mv = (uint32_t)(bus_read32(0x103220)); bus_write32(0x103228, _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(bus_read32(0x103224)); bus_write32(0x10322C, _mv); M68K_TST32(_mv); }
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[7] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    m68k_set_sr(_postinc16(7));
    return;
}

/* $0141AA-$0141FA  (22 instructions, 80 bytes) */
void sub_0141AA(void) {
    g_m68k.a[0] = bus_read32(g_m68k.a[1] + 0x8);
    M68K_NEG16(g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], bus_read16(g_m68k.a[1] + 0xc));
    M68K_SUB16(g_m68k.d[0], bus_read16(g_m68k.a[4] + 0x0));
    M68K_MULS(g_m68k.d[0], bus_read16(g_m68k.a[4] + 0x4));
    M68K_ASR32(g_m68k.d[0], 0x8);
    M68K_NEG16(g_m68k.d[2]);
    M68K_ADD16(g_m68k.d[2], bus_read16(g_m68k.a[1] + 0xe));
    M68K_SUB16(g_m68k.d[2], bus_read16(g_m68k.a[4] + 0x2));
    M68K_MULS(g_m68k.d[2], bus_read16(g_m68k.a[4] + 0x6));
    M68K_ASR32(g_m68k.d[2], 0x8);
    func_table_call(0x01225C);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[4] + 0x4))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[4] + 0x6))); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x012266);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[1] + 0xe))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_SUB16(g_m68k.d[0], bus_read16(g_m68k.a[4] + 0x2));
    M68K_MULS(g_m68k.d[0], bus_read16(g_m68k.a[4] + 0x6));
    M68K_ASR32(g_m68k.d[0], 0x8);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[1]);
    func_table_call(0x012256);
    return;
}

/* $0141FA-$014240  (19 instructions, 70 bytes) */
void sub_0141FA(void) {
    g_m68k.a[1] = 0x102C0C;
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0x40)); M68K_TST16((uint16_t)g_m68k.d[3]);
    g_m68k.d[1] = (uint32_t)(int32_t)(int8_t)(0x17); M68K_TST32(g_m68k.d[1]);
loc_014206:
    M68K_TST32(bus_read32(g_m68k.a[1]));
    if (M68K_CC_EQ) goto loc_01421A;
    g_m68k.a[1] += (int16_t)(uint16_t)(g_m68k.d[3]);
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[1]; _cnt--; g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_014206; } }
    g_m68k.a[1] = 0x000000;
    goto loc_01423E;
loc_01421A:
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[2] + 0x8)); bus_write32(g_m68k.a[1], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[2] + 0x4)); bus_write32(g_m68k.a[1] + 0x4, _mv); M68K_TST32(_mv); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[1] + 0xc, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[1] + 0xe, _mv); M68K_TST16(_mv); }
    g_m68k.a[0] = bus_read32(g_m68k.a[1] + 0x8);
    g_m68k.d[0] = (uint32_t)(int32_t)(int8_t)(0x1); M68K_TST32(g_m68k.d[0]);
    func_table_call(0x012286);
    g_m68k.a[0] = bus_read32(g_m68k.a[2] + 0x0);
    func_table_call(g_m68k.a[0]);
loc_01423E:
    return;
}

/* $014240-$014256  (7 instructions, 22 bytes) */
void sub_014240(void) {
    g_m68k.a[0] = bus_read32(g_m68k.a[1] + 0x4);
    func_table_call(g_m68k.a[0]);
    g_m68k.a[0] = bus_read32(g_m68k.a[1] + 0x8);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    func_table_call(0x012286);
    bus_write32(g_m68k.a[1], 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    return;
}

/* $014256-$014584  (215 instructions, 814 bytes) */
void sub_014256(void) {
    g_m68k.d[1] = (uint32_t)(int32_t)(int8_t)(0x28); M68K_TST32(g_m68k.d[1]);
    g_m68k.d[2] = (uint32_t)(int32_t)(int8_t)(0x54); M68K_TST32(g_m68k.d[2]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0x1ff)); M68K_TST16((uint16_t)g_m68k.d[3]);
    g_m68k.a[4] = 0x103230;
    g_m68k.a[5] = 0x103238;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x103220))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_SUB16(g_m68k.d[0], g_m68k.d[1]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[4] + 0x0, _mv); M68K_TST16(_mv); }
    M68K_ADD16(g_m68k.d[0], g_m68k.d[3]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[4] + 0x4, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x103222))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_SUB16(g_m68k.d[0], g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[4] + 0x2, _mv); M68K_TST16(_mv); }
    M68K_ADD16(g_m68k.d[0], g_m68k.d[3]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[4] + 0x6, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x103228))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_SUB16(g_m68k.d[0], g_m68k.d[1]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[5] + 0x0, _mv); M68K_TST16(_mv); }
    M68K_ADD16(g_m68k.d[0], g_m68k.d[3]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[5] + 0x4, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x10322A))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_SUB16(g_m68k.d[0], g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[5] + 0x2, _mv); M68K_TST16(_mv); }
    M68K_ADD16(g_m68k.d[0], g_m68k.d[3]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[5] + 0x6, _mv); M68K_TST16(_mv); }
    g_m68k.a[4] = 0x103230;
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[4] + 0x0))); M68K_TST16((uint16_t)g_m68k.d[4]);
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[4] + 0x2))); M68K_TST16((uint16_t)g_m68k.d[5]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[4] + 0x4))); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[4] + 0x6))); M68K_TST16((uint16_t)g_m68k.d[7]);
    g_m68k.a[1] = 0x102C0C;
    g_m68k.a[4] = (uint32_t)(int32_t)(int16_t)(uint16_t)(0x40);
    g_m68k.a[5] = 0x103248;
    { uint16_t _mv = (uint16_t)(0x18); bus_write16(g_m68k.a[5], _mv); M68K_TST16(_mv); }
loc_0142DC:
    M68K_TST32(bus_read32(g_m68k.a[1]));
    if (M68K_CC_EQ) goto loc_014308;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[1] + 0xc))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_CMP16(g_m68k.d[0], g_m68k.d[4]);
    if (M68K_CC_LT) goto loc_014302;
    M68K_CMP16(g_m68k.d[0], g_m68k.d[6]);
    if (M68K_CC_GT) goto loc_014302;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[1] + 0xe))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_CMP16(g_m68k.d[0], g_m68k.d[5]);
    if (M68K_CC_LT) goto loc_014302;
    M68K_CMP16(g_m68k.d[0], g_m68k.d[7]);
    if (M68K_CC_LE) goto loc_014308;
loc_014302:
    func_table_call(0x014240);
loc_014308:
    g_m68k.a[1] += (int16_t)(uint16_t)(g_m68k.a[4]);
    { uint32_t _ea = g_m68k.a[5]; uint16_t _tmp = bus_read16(_ea); M68K_SUB16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    if (M68K_CC_NE) goto loc_0142DC;
    g_m68k.a[4] = 0x103230;
    g_m68k.a[5] = 0x103238;
    g_m68k.a[6] = 0x103240;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[4] + 0x0))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_CMP16(g_m68k.d[0], bus_read16(g_m68k.a[5] + 0x0));
    if (M68K_CC_EQ) goto loc_014374;
    if (M68K_CC_LT) goto loc_014354;
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[5] + 0x4)); bus_write16(g_m68k.a[6] + 0x0, _mv); M68K_TST16(_mv); }
    { uint32_t _ea = (g_m68k.a[6] + 0x0); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[5] + 0x2)); bus_write16(g_m68k.a[6] + 0x2, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[4] + 0x4)); bus_write16(g_m68k.a[6] + 0x4, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[5] + 0x6)); bus_write16(g_m68k.a[6] + 0x6, _mv); M68K_TST16(_mv); }
    func_table_call(0x0143DC); /* loc_0143DC */
    goto loc_014374;
loc_014354:
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[4] + 0x0)); bus_write16(g_m68k.a[6] + 0x0, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[5] + 0x2)); bus_write16(g_m68k.a[6] + 0x2, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[5] + 0x0)); bus_write16(g_m68k.a[6] + 0x4, _mv); M68K_TST16(_mv); }
    { uint32_t _ea = (g_m68k.a[6] + 0x4); uint16_t _tmp = bus_read16(_ea); M68K_SUB16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[5] + 0x6)); bus_write16(g_m68k.a[6] + 0x6, _mv); M68K_TST16(_mv); }
    func_table_call(0x0143DC); /* loc_0143DC */
loc_014374:
    g_m68k.a[4] = 0x103230;
    g_m68k.a[5] = 0x103238;
    g_m68k.a[6] = 0x103240;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[4] + 0x2))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_CMP16(g_m68k.d[0], bus_read16(g_m68k.a[5] + 0x2));
    if (M68K_CC_EQ) goto loc_0143DA;
    if (M68K_CC_LT) goto loc_0143BA;
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[4] + 0x0)); bus_write16(g_m68k.a[6] + 0x0, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[5] + 0x6)); bus_write16(g_m68k.a[6] + 0x2, _mv); M68K_TST16(_mv); }
    { uint32_t _ea = (g_m68k.a[6] + 0x2); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[4] + 0x4)); bus_write16(g_m68k.a[6] + 0x4, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[4] + 0x6)); bus_write16(g_m68k.a[6] + 0x6, _mv); M68K_TST16(_mv); }
    func_table_call(0x0144B0); /* loc_0144B0 */
    goto loc_0143DA;
loc_0143BA:
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[4] + 0x0)); bus_write16(g_m68k.a[6] + 0x0, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[4] + 0x2)); bus_write16(g_m68k.a[6] + 0x2, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[4] + 0x4)); bus_write16(g_m68k.a[6] + 0x4, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[5] + 0x2)); bus_write16(g_m68k.a[6] + 0x6, _mv); M68K_TST16(_mv); }
    { uint32_t _ea = (g_m68k.a[6] + 0x6); uint16_t _tmp = bus_read16(_ea); M68K_SUB16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    func_table_call(0x0144B0); /* loc_0144B0 */
loc_0143DA:
    return;
loc_0143DC:
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x0))); M68K_TST16((uint16_t)g_m68k.d[4]);
    M68K_AND16(g_m68k.d[4], 0xff00);
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[4])); M68K_TST16((uint16_t)g_m68k.d[5]);
    M68K_LSR16(g_m68k.d[5], 0x8);
    M68K_EXT32(g_m68k.d[5]);
    M68K_DIVU(g_m68k.d[5], bus_read16(0x10320C));
    M68K_SWAP(g_m68k.d[5]);
loc_0143F2:
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x2))); M68K_TST16((uint16_t)g_m68k.d[6]);
    M68K_AND16(g_m68k.d[6], 0xff00);
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[6])); M68K_TST16((uint16_t)g_m68k.d[7]);
    M68K_LSR16(g_m68k.d[7], 0x8);
    M68K_EXT32(g_m68k.d[7]);
    M68K_DIVU(g_m68k.d[7], bus_read16(0x10320E));
    M68K_SWAP(g_m68k.d[7]);
loc_014408:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[7])); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_MULU(g_m68k.d[0], bus_read16(0x10320C));
    M68K_ADD16(g_m68k.d[0], g_m68k.d[5]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[0] = bus_read32(0x103210);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[0] = bus_read32(0x103216);
    g_m68k.a[4] = bus_read32(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
loc_01442C:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[4]))); M68K_TST16((uint16_t)g_m68k.d[0]);
    if (M68K_CC_EQ) goto loc_014476;
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[4] + 0x2))); M68K_TST8((uint8_t)g_m68k.d[4]);
    M68K_CMP16(g_m68k.d[4], bus_read16(g_m68k.a[6] + 0x0));
    if (M68K_CC_LT) goto loc_014470;
    M68K_CMP16(g_m68k.d[4], bus_read16(g_m68k.a[6] + 0x4));
    if (M68K_CC_GT) goto loc_014470;
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[4] + 0x3))); M68K_TST8((uint8_t)g_m68k.d[6]);
    M68K_CMP16(g_m68k.d[6], bus_read16(g_m68k.a[6] + 0x2));
    if (M68K_CC_LT) goto loc_014470;
    M68K_CMP16(g_m68k.d[6], bus_read16(g_m68k.a[6] + 0x6));
    if (M68K_CC_GT) goto loc_014470;
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[0] = bus_read32(0x10321C);
    g_m68k.a[2] = bus_read32(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[4])); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[6])); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x0141FA); /* sub_0141FA */
loc_014470:
    g_m68k.a[4] += (int16_t)(uint16_t)(0x4);
    goto loc_01442C;
loc_014476:
    M68K_ADD16(g_m68k.d[7], 0x1);
    M68K_CMP16(g_m68k.d[7], bus_read16(0x10320E));
    if (M68K_CC_NE) goto loc_014484;
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
loc_014484:
    M68K_ADD16(g_m68k.d[6], 0x100);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP16(g_m68k.d[6], bus_read16(g_m68k.a[6] + 0x6));
    if (M68K_CC_LE) goto loc_014408;
    M68K_ADD16(g_m68k.d[5], 0x1);
    M68K_CMP16(g_m68k.d[5], bus_read16(0x10320C));
    if (M68K_CC_NE) goto loc_0144A0;
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
loc_0144A0:
    M68K_ADD16(g_m68k.d[4], 0x100);
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP16(g_m68k.d[4], bus_read16(g_m68k.a[6] + 0x4));
    if (M68K_CC_LE) goto loc_0143F2;
    return;
loc_0144B0:
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x2))); M68K_TST16((uint16_t)g_m68k.d[6]);
    M68K_AND16(g_m68k.d[6], 0xff00);
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[6])); M68K_TST16((uint16_t)g_m68k.d[7]);
    M68K_LSR16(g_m68k.d[7], 0x8);
    M68K_EXT32(g_m68k.d[7]);
    M68K_DIVU(g_m68k.d[7], bus_read16(0x10320E));
    M68K_SWAP(g_m68k.d[7]);
loc_0144C6:
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x0))); M68K_TST16((uint16_t)g_m68k.d[4]);
    M68K_AND16(g_m68k.d[4], 0xff00);
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[4])); M68K_TST16((uint16_t)g_m68k.d[5]);
    M68K_LSR16(g_m68k.d[5], 0x8);
    M68K_EXT32(g_m68k.d[5]);
    M68K_DIVU(g_m68k.d[5], bus_read16(0x10320C));
    M68K_SWAP(g_m68k.d[5]);
loc_0144DC:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[7])); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_MULU(g_m68k.d[0], bus_read16(0x10320C));
    M68K_ADD16(g_m68k.d[0], g_m68k.d[5]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[0] = bus_read32(0x103210);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[0] = bus_read32(0x103216);
    g_m68k.a[4] = bus_read32(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
loc_014500:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[4]))); M68K_TST16((uint16_t)g_m68k.d[0]);
    if (M68K_CC_EQ) goto loc_01454A;
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[4] + 0x2))); M68K_TST8((uint8_t)g_m68k.d[4]);
    M68K_CMP16(g_m68k.d[4], bus_read16(g_m68k.a[6] + 0x0));
    if (M68K_CC_LT) goto loc_014544;
    M68K_CMP16(g_m68k.d[4], bus_read16(g_m68k.a[6] + 0x4));
    if (M68K_CC_GT) goto loc_014544;
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[4] + 0x3))); M68K_TST8((uint8_t)g_m68k.d[6]);
    M68K_CMP16(g_m68k.d[6], bus_read16(g_m68k.a[6] + 0x2));
    if (M68K_CC_LT) goto loc_014544;
    M68K_CMP16(g_m68k.d[6], bus_read16(g_m68k.a[6] + 0x6));
    if (M68K_CC_GT) goto loc_014544;
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[0] = bus_read32(0x10321C);
    g_m68k.a[2] = bus_read32(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[4])); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[6])); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x0141FA); /* sub_0141FA */
loc_014544:
    g_m68k.a[4] += (int16_t)(uint16_t)(0x4);
    goto loc_014500;
loc_01454A:
    M68K_ADD16(g_m68k.d[5], 0x1);
    M68K_CMP16(g_m68k.d[5], bus_read16(0x10320C));
    if (M68K_CC_NE) goto loc_014558;
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
loc_014558:
    M68K_ADD16(g_m68k.d[4], 0x100);
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP16(g_m68k.d[4], bus_read16(g_m68k.a[6] + 0x4));
    if (M68K_CC_LE) goto loc_0144DC;
    M68K_ADD16(g_m68k.d[7], 0x1);
    M68K_CMP16(g_m68k.d[7], bus_read16(0x10320E));
    if (M68K_CC_NE) goto loc_014574;
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
loc_014574:
    M68K_ADD16(g_m68k.d[6], 0x100);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP16(g_m68k.d[6], bus_read16(g_m68k.a[6] + 0x6));
    if (M68K_CC_LE) goto loc_0144C6;
    return;
}

/* $014584-$01458C  (2 instructions, 8 bytes) */
void sub_014584(void) {
    bus_write16(0x10324A, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    return;
}

/* $01458C-$0145B2  (9 instructions, 38 bytes) */
void sub_01458C(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    M68K_CMP16(bus_read16(0x10324A), 0xa);
    if (M68K_CC_EQ) goto loc_0145AC;
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[1])); M68K_TST16((uint16_t)g_m68k.d[4]);
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[3])); M68K_TST16((uint16_t)g_m68k.d[5]);
    g_m68k.a[2] = 0x02A15A;
    func_table_call(0x0141FA);
loc_0145AC:
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}

/* $0145B2-$0145F8  (19 instructions, 70 bytes) */
void jt_0145B2(void) {
    { uint32_t _ea = 0x10324A; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[4]); bus_write16(g_m68k.a[1] + 0x16, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[5])); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_LSL16(g_m68k.d[0], 0x3);
    g_m68k.a[3] = 0x029EF2;
    g_m68k.a[3] += (int16_t)(uint16_t)(g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[3] + 0x0))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[0] = bus_read32(0x080004);
    g_m68k.a[0] += (int16_t)(uint16_t)(g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(g_m68k.a[0]); bus_write32(g_m68k.a[1] + 0x10, _mv); M68K_TST32(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[3] + 0x2))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_LSL16(g_m68k.d[0], 0x8);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[1] + 0x14, _mv); M68K_TST16(_mv); }
    bus_write16(g_m68k.a[1] + 0x18, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[3] + 0x4)); bus_write16(g_m68k.a[1] + 0x1a, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[3] + 0x6)); bus_write16(g_m68k.a[1] + 0x1c, _mv); M68K_TST16(_mv); }
    return;
}

/* $0145F8-$014600  (2 instructions, 8 bytes) */
void jt_0145F8(void) {
    { uint32_t _ea = 0x10324A; uint16_t _tmp = bus_read16(_ea); M68K_SUB16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    return;
}

/* $014600-$014652  (19 instructions, 82 bytes) */
void jt_014600(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[1] + 0x18))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], bus_read16(g_m68k.a[1] + 0x16));
    M68K_CMP16(g_m68k.d[0], bus_read16(g_m68k.a[1] + 0x14));
    if (M68K_CC_CS) goto loc_014616;
    { func_table_call(0x014240); return; }
loc_014616:
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[1] + 0x18, _mv); M68K_TST16(_mv); }
    g_m68k.a[0] = bus_read32(g_m68k.a[1] + 0x8);
    g_m68k.a[3] = bus_read32(g_m68k.a[1] + 0x10);
    M68K_LSR16(g_m68k.d[0], 0x6);
    M68K_AND16(g_m68k.d[0], 0xfffc);
    g_m68k.a[3] = bus_read32(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    func_table_call(0x012270);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[1] + 0x1a))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[1] + 0x1c))); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0xffdf)); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_CMP16(bus_read16(g_m68k.a[1] + 0x14), 0x600);
    if (M68K_CC_NE) goto loc_01464C;
    M68K_ADD16(g_m68k.d[1], 0x40);
loc_01464C:
    { func_table_call(0x0141AA); return; }
    /* WARNING: function did not end with RTS */
}

/* $014652-$0146E2  (30 instructions, 144 bytes) */
void sub_014652(void) {
    g_m68k.a[7] -= 2; bus_write16(g_m68k.a[7], m68k_get_sr());
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[7]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    bus_write32(0x10324C, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(0x10328C, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_postinc16(4)); bus_write16(0x10328E, _mv); M68K_TST16(_mv); }
    { uint32_t _mv = (uint32_t)(g_m68k.a[4]); bus_write32(0x103290, _mv); M68K_TST32(_mv); }
    g_m68k.a[4] -= 0x4;
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(0x103294, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(0x103296, _mv); M68K_TST16(_mv); }
    bus_write8(0x103298, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    bus_write16(0x10329A, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    func_table_call(0x012202);
    { uint32_t _mv = (uint32_t)(g_m68k.a[0]); bus_write32(0x10329C, _mv); M68K_TST32(_mv); }
    if (M68K_CC_NE) goto loc_0146A0;
    M68K_TST16(bus_read16(0x77777777));
loc_0146A0:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x7fff)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x012256);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x20)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x40)); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x01225C);
    g_m68k.a[3] = bus_read32(0x080008);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x5c)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.a[3] = bus_read32(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    func_table_call(0x012270);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    func_table_call(0x012286);
    bus_write16(0x1032A0, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[7] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    m68k_set_sr(_postinc16(7));
    return;
}

/* $0146E2-$014730  (20 instructions, 78 bytes) */
void sub_0146E2(void) {
    g_m68k.a[7] -= 2; bus_write16(g_m68k.a[7], m68k_get_sr());
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[7]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    g_m68k.a[0] = bus_read32(0x10329C);
    func_table_call(0x012252);
    func_table_call(0x014730); /* sub_014730 */
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[7] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    m68k_set_sr(_postinc16(7));
    return;
loc_014700:
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    func_table_call(0x014730); /* sub_014730 */
    g_m68k.a[1] = 0x10324C;
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[3] + 0x8)); bus_write32(g_m68k.a[1] + 0x0, _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[3] + 0x4)); bus_write32(g_m68k.a[1] + 0x4, _mv); M68K_TST32(_mv); }
    g_m68k.a[3] = bus_read32(g_m68k.a[3] + 0x0);
    func_table_call(g_m68k.a[3]);
    M68K_TST16(g_m68k.d[0]);
    if (M68K_CC_NE) goto loc_01472A;
    bus_write32(g_m68k.a[1] + 0x0, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
loc_01472A:
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}

/* $014730-$014752  (9 instructions, 34 bytes) */
void sub_014730(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[1]);
    g_m68k.a[1] = 0x10324C;
    M68K_TST32(bus_read32(g_m68k.a[1] + 0x0));
    if (M68K_CC_EQ) goto loc_01474C;
    g_m68k.a[3] = bus_read32(g_m68k.a[1] + 0x4);
    func_table_call(g_m68k.a[3]);
    bus_write32(g_m68k.a[1] + 0x0, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
loc_01474C:
    g_m68k.a[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}

/* $014752-$014760  (3 instructions, 14 bytes) */
void sub_014752(void) {
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(0x103294, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(0x103296, _mv); M68K_TST16(_mv); }
    return;
}

/* $014760-$014804  (40 instructions, 164 bytes) */
void sub_014760(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    M68K_TST16(bus_read16(0x10329A));
    if (M68K_CC_NE) goto loc_0147EA;
    g_m68k.a[0] = bus_read32(0x10329C);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1032A0))); M68K_TST16((uint16_t)g_m68k.d[2]);
    if (M68K_CC_EQ) goto loc_01478A;
    M68K_SUB16(g_m68k.d[2], 0x1);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(0x1032A0, _mv); M68K_TST16(_mv); }
    M68K_ADD16(g_m68k.d[0], 0x1);
loc_01478A:
    func_table_call(0x012286);
    g_m68k.d[0] = 0; g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x103294))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_LSR16(g_m68k.d[0], 0x8);
    M68K_DIVU(g_m68k.d[0], bus_read16(0x10328C));
    M68K_SWAP(g_m68k.d[0]);
    g_m68k.d[2] = 0; g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x103296))); M68K_TST16((uint16_t)g_m68k.d[2]);
    M68K_LSR16(g_m68k.d[2], 0x8);
    M68K_DIVU(g_m68k.d[2], bus_read16(0x10328E));
    M68K_SWAP(g_m68k.d[2]);
    M68K_MULU(g_m68k.d[2], bus_read16(0x10328C));
    M68K_ADD16(g_m68k.d[0], g_m68k.d[2]);
    g_m68k.a[3] = bus_read32(0x103290);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST8((uint8_t)g_m68k.d[0]);
    if (M68K_CC_EQ) goto loc_0147EA;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(0x103298))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); bus_write8(0x103298, _mv); M68K_TST8(_mv); }
    M68K_CMP8(g_m68k.d[0], g_m68k.d[2]);
    if (M68K_CC_EQ) goto loc_0147EA;
    g_m68k.a[3] = 0x02A336;
    M68K_AND16(g_m68k.d[0], 0xff);
    func_table_call(0x014700); /* loc_014700 */
loc_0147EA:
    g_m68k.a[1] = 0x10324C;
    M68K_TST32(bus_read32(g_m68k.a[1] + 0x0));
    if (M68K_CC_EQ) goto loc_0147FE;
    g_m68k.a[3] = bus_read32(g_m68k.a[1] + 0x0);
    func_table_call(g_m68k.a[3]);
loc_0147FE:
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}

/* $014804-$014848  (17 instructions, 68 bytes) */
void jt_014804(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]);
    func_table_call(0x012202);
    { uint32_t _mv = (uint32_t)(g_m68k.a[0]); bus_write32(g_m68k.a[1] + 0x8, _mv); M68K_TST32(_mv); }
    if (M68K_CC_NE) goto loc_01481C;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    goto loc_014842;
loc_01481C:
    M68K_SUB16(g_m68k.d[0], 0x1);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[1] + 0xe, _mv); M68K_TST16(_mv); }
    g_m68k.a[3] = bus_read32(0x080008);
    g_m68k.a[3] = bus_read32(g_m68k.a[3] + 0x0);
    func_table_call(0x012270);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x7fff)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x012256);
    bus_write16(g_m68k.a[1] + 0xc, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    g_m68k.d[0] = (uint32_t)(int32_t)(int8_t)(0x1); M68K_TST32(g_m68k.d[0]);
loc_014842:
    g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}

/* $014848-$01485A  (4 instructions, 18 bytes) */
void jt_014848(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]);
    g_m68k.a[0] = bus_read32(g_m68k.a[1] + 0x8);
    func_table_call(0x012252);
    g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    /* WARNING: function did not end with RTS */
}

/* $014858-$01485C  (2 instructions, 4 bytes) */
void jt_014858(void) {
    M68K_BTST(g_m68k.d[0], g_m68k.d[0]);
    return;
}

/* $01485C-$0149BA  (87 instructions, 350 bytes) */
void jt_01485C(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    g_m68k.a[0] = bus_read32(g_m68k.a[1] + 0x8);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[1] + 0xc))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_CMP16(g_m68k.d[0], 0x10);
    if (M68K_CC_NE) goto loc_014874;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[1] + 0xc))); M68K_TST16((uint16_t)g_m68k.d[0]);
loc_014874:
    M68K_CMP16(g_m68k.d[0], 0xf);
    if (M68K_CC_LS) goto loc_0148A6;
    M68K_CMP16(g_m68k.d[0], 0x12);
    if (M68K_CC_LS) goto loc_0148E2;
    M68K_CMP16(g_m68k.d[0], 0x1a);
    if (M68K_CC_LS) goto loc_014948;
    M68K_CMP16(g_m68k.d[0], 0x37);
    if (M68K_CC_LS) goto loc_014962;
    M68K_CMP16(g_m68k.d[0], 0x3f);
    if (M68K_CC_LS) goto loc_014966;
    func_table_call(0x014730);
    goto loc_0149B0;
loc_0148A6:
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[1] + 0xc))); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_ADD16(g_m68k.d[1], g_m68k.d[1]);
    M68K_BCLR(g_m68k.d[1], 0x4);
    if (M68K_CC_EQ) goto loc_0148B6;
    M68K_ADD16(g_m68k.d[1], 0x1);
loc_0148B6:
    M68K_ADD16(g_m68k.d[1], g_m68k.d[1]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[1])); M68K_TST16((uint16_t)g_m68k.d[2]);
    M68K_ADD16(g_m68k.d[1], g_m68k.d[1]);
    M68K_ADD16(g_m68k.d[1], g_m68k.d[2]);
    g_m68k.a[3] = 0x02A342;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[1]))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[3] + 0x2 + (int16_t)(uint16_t)g_m68k.d[1]))); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x01225C);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[3] + 0x4 + (int16_t)(uint16_t)g_m68k.d[1]))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x012266);
    goto loc_0149B0;
loc_0148E2:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[1] + 0xc))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_CMP16(g_m68k.d[0], 0x10);
    if (M68K_CC_NE) goto loc_014908;
    g_m68k.a[3] = 0x02A166;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[1] + 0xe))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST16((uint16_t)g_m68k.d[0]);
    if (M68K_CC_EQ) goto loc_014908;
    func_table_call(0x015256);
loc_014908:
    g_m68k.a[3] = bus_read32(0x080008);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[1] + 0xe))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[3] = bus_read32(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    func_table_call(0x012270);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x88)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x40)); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x01225C);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x100)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x012266);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0xfffd)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x012280);
    goto loc_0149B0;
loc_014948:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_BTST(bus_read8((g_m68k.a[1] + 0xd)), 0x0);
    if (M68K_CC_EQ) goto loc_014958;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0xfffe)); M68K_TST16((uint16_t)g_m68k.d[0]);
loc_014958:
    func_table_call(0x012280);
    goto loc_0149B0;
loc_014962:
    goto loc_0149B0;
loc_014966:
    g_m68k.a[3] = bus_read32(0x080008);
    g_m68k.a[3] = bus_read32(g_m68k.a[3] + 0x4);
    func_table_call(0x012270);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[1] + 0xc))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_SUB16(g_m68k.d[0], 0x38);
    M68K_NEG16(g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], 0x8);
    M68K_LSL16(g_m68k.d[0], 0x6);
    g_m68k.a[3] = 0x027A3A;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x100)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x012266);
    M68K_MULS(g_m68k.d[2], 0xffe8);
    M68K_ASR16(g_m68k.d[2], 0x8);
    M68K_ADD16(g_m68k.d[2], 0x58);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x88)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x01225C);
    goto loc_0149B0;
loc_0149B0:
    { uint32_t _ea = (g_m68k.a[1] + 0xc); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}

/* $0149BA-$0149C4  (2 instructions, 10 bytes) */
void sub_0149BA(void) {
    { uint16_t _mv = (uint16_t)(0x3c); bus_write16(0x1032A0, _mv); M68K_TST16(_mv); }
    return;
}

/* $0149E0-$014A7C  (35 instructions, 156 bytes) */
void jt_0149E0(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]);
    func_table_call(0x012202);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint32_t _mv = (uint32_t)(g_m68k.a[0]); bus_write32(g_m68k.a[1] + 0x8, _mv); M68K_TST32(_mv); }
    if (M68K_CC_EQ) goto loc_014A76;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x7fff)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x012256);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x20)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x40)); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x01225C);
    g_m68k.a[3] = bus_read32(0x080008);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x5c)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.a[3] = bus_read32(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    func_table_call(0x012270);
    func_table_call(0x012202);
    { uint32_t _mv = (uint32_t)(g_m68k.a[0]); bus_write32(g_m68k.a[1] + 0xc, _mv); M68K_TST32(_mv); }
    if (M68K_CC_NE) goto loc_014A3E;
    g_m68k.a[0] = bus_read32(g_m68k.a[1] + 0x8);
    func_table_call(0x012252);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    goto loc_014A76;
loc_014A3E:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x7fff)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x012256);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x50)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x80)); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x01225C);
    g_m68k.a[3] = bus_read32(0x080008);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x60)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.a[3] = bus_read32(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    func_table_call(0x012270);
    bus_write16(g_m68k.a[1] + 0x10, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    g_m68k.d[0] = (uint32_t)(int32_t)(int8_t)(0x1); M68K_TST32(g_m68k.d[0]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(0x10329A, _mv); M68K_TST16(_mv); }
loc_014A76:
    g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}

/* $014A7C-$014AA0  (8 instructions, 36 bytes) */
void jt_014A7C(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]);
    bus_write16(0x10329A, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    g_m68k.a[0] = bus_read32(g_m68k.a[1] + 0xc);
    func_table_call(0x012252);
    g_m68k.a[0] = bus_read32(g_m68k.a[1] + 0x8);
    func_table_call(0x012252);
    g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}

/* $014AA0-$014AF0  (20 instructions, 80 bytes) */
void jt_014AA0(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[1] + 0x10))); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0xfffe)); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_CMP16(g_m68k.d[1], 0x2);
    if (M68K_CC_CS) goto loc_014AC2;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP16(g_m68k.d[1], 0x3a);
    if (M68K_CC_CS) goto loc_014AC2;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0xfffd)); M68K_TST16((uint16_t)g_m68k.d[0]);
loc_014AC2:
    g_m68k.a[0] = bus_read32(g_m68k.a[1] + 0x8);
    func_table_call(0x012280);
    g_m68k.a[0] = bus_read32(g_m68k.a[1] + 0xc);
    func_table_call(0x012280);
    M68K_ADD16(g_m68k.d[1], 0x1);
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); bus_write16(g_m68k.a[1] + 0x10, _mv); M68K_TST16(_mv); }
    M68K_CMP16(g_m68k.d[1], 0x3c);
    if (M68K_CC_CS) goto loc_014AEA;
    func_table_call(0x014730);
loc_014AEA:
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}

/* $014AF0-$014B38  (22 instructions, 72 bytes) */
void sub_014AF0(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    g_m68k.a[2] = 0x3C0002;
    M68K_LSL16(g_m68k.d[0], 0x5);
    M68K_ADD16(g_m68k.d[2], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[2], 0x7000);
    M68K_LSL16(g_m68k.d[3], 0x8);
    m68k_set_sr(m68k_get_sr() | 0x700);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2] + (-0x2), _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x20); bus_write16(g_m68k.a[2] + 0x2, _mv); M68K_TST16(_mv); }
    M68K_SUB16(g_m68k.d[1], 0x1);
    if (M68K_CC_MI) goto loc_014B24;
loc_014B18:
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(3))); M68K_TST8((uint8_t)g_m68k.d[3]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[3]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[1]; _cnt--; g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_014B18; } }
    goto loc_014B2E;
loc_014B24:
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(3))); M68K_TST8((uint8_t)g_m68k.d[3]);
    if (M68K_CC_EQ) goto loc_014B2E;
    { uint16_t _mv = (uint16_t)(g_m68k.d[3]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    goto loc_014B24;
loc_014B2E:
    m68k_set_sr(m68k_get_sr() & 0xf8ff);
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}

/* $014B38-$014B78  (20 instructions, 64 bytes) */
void sub_014B38(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    g_m68k.a[2] = 0x3C0002;
    M68K_LSL16(g_m68k.d[0], 0x5);
    M68K_ADD16(g_m68k.d[2], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[2], 0x7000);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(_postinc16(3))); M68K_TST16((uint16_t)g_m68k.d[3]);
    M68K_SUB16(g_m68k.d[3], 0x1);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(_postinc16(3))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_SUB16(g_m68k.d[0], 0x1);
    m68k_set_sr(m68k_get_sr() | 0x700);
    { uint16_t _mv = (uint16_t)(0x20); bus_write16(g_m68k.a[2] + 0x2, _mv); M68K_TST16(_mv); }
loc_014B5C:
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2] + (-0x2), _mv); M68K_TST16(_mv); }
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[3])); M68K_TST16((uint16_t)g_m68k.d[1]);
loc_014B62:
    { uint16_t _mv = (uint16_t)(_postinc16(3)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[1]; _cnt--; g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_014B62; } }
    M68K_ADD16(g_m68k.d[2], 0x1);
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[0]; _cnt--; g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_014B5C; } }
    m68k_set_sr(m68k_get_sr() & 0xf8ff);
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}

/* $014BA8-$014BB2  (2 instructions, 10 bytes) */
void sub_014BA8(void) {
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(0x1032A2, _mv); M68K_TST16(_mv); }
    return;
}

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
