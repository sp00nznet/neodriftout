/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $00CA58 - $00DEB4 */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

/* $00CA58-$00CA86  (14 instructions, 46 bytes) */
void sub_00CA58(void) {
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x8c))); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x90))); M68K_TST16((uint16_t)g_m68k.d[2]);
    M68K_SUB16(g_m68k.d[1], bus_read16(g_m68k.a[6] + 0xa4));
    M68K_SUB16(g_m68k.d[2], bus_read16(g_m68k.a[6] + 0xa6));
    M68K_ADD16(g_m68k.d[1], 0x31f);
    M68K_ADD16(g_m68k.d[2], 0x17f);
    g_m68k.d[0] = (uint32_t)(int32_t)(int8_t)(0x0); M68K_TST32(g_m68k.d[0]);
    M68K_CMP16(g_m68k.d[1], 0x640);
    if (M68K_CC_HI) goto loc_00CA80;
    M68K_CMP16(g_m68k.d[2], 0x300);
    if (M68K_CC_HI) goto loc_00CA80;
    g_m68k.d[0] = (uint32_t)(int32_t)(int8_t)(0x1); M68K_TST32(g_m68k.d[0]);
loc_00CA80:
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[6] + 0xce, _mv); M68K_TST16(_mv); }
    return;
}

/* $00CAA8-$00CAE4  (19 instructions, 60 bytes) */
void sub_00CAA8(void) {
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0xce), 0x0);
    if (M68K_CC_NE) goto loc_00CAB6;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x80))); M68K_TST16((uint16_t)g_m68k.d[0]);
    goto loc_00CABA;
loc_00CAB6:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x28))); M68K_TST16((uint16_t)g_m68k.d[0]);
loc_00CABA:
    g_m68k.a[0] = bus_read32(g_m68k.a[6] + 0x60);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[0] = (g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    g_m68k.a[0] = bus_read32(g_m68k.a[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xe))); M68K_TST16((uint16_t)g_m68k.d[0]);
    if (M68K_CC_PL) goto loc_00CAD0;
    M68K_NEG16(g_m68k.d[0]);
loc_00CAD0:
    M68K_LSR16(g_m68k.d[0], 0x5);
    M68K_AND16(g_m68k.d[0], 0xfff8);
    g_m68k.a[0] = (g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(_postinc32(0)); bus_write32(g_m68k.a[6] + 0x3a, _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[0])); bus_write32(g_m68k.a[6] + 0x3e, _mv); M68K_TST32(_mv); }
    return;
}

/* $00CAE4-$00CB02  (9 instructions, 30 bytes) */
void sub_00CAE4(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x28))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_CMP16(g_m68k.d[0], bus_read16(g_m68k.a[6] + 0x2c));
    if (M68K_CC_EQ) goto loc_00CB00;
    g_m68k.a[0] = bus_read32(g_m68k.a[6] + 0x7c);
    M68K_LSL16(g_m68k.d[0], 0x3);
    g_m68k.a[0] = (g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(_postinc32(0)); bus_write32(g_m68k.a[6] + 0x42, _mv); M68K_TST32(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[0])); bus_write16(g_m68k.a[6] + 0x46, _mv); M68K_TST16(_mv); }
loc_00CB00:
    return;
}

/* $00CB02-$00CBB4  (55 instructions, 178 bytes) */
void sub_00CB02(void) {
    g_m68k.a[0] = 0x02101E;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[5] + (-0x6dfe)))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[0] = bus_read32(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xd0))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_LSL16(g_m68k.d[0], 0x3);
    M68K_ADD16(g_m68k.d[1], g_m68k.d[1]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[1]);
    g_m68k.a[0] = (g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[0] + 0x0))); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[0] + 0x2))); M68K_TST16((uint16_t)g_m68k.d[3]);
    M68K_SUB16(g_m68k.d[2], bus_read16(g_m68k.a[6] + 0x8c));
    M68K_SUB16(g_m68k.d[3], bus_read16(g_m68k.a[6] + 0x90));
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[2])); M68K_TST16((uint16_t)g_m68k.d[4]);
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[3])); M68K_TST16((uint16_t)g_m68k.d[5]);
    func_table_call(0x01014C);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xaa))); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_ADD16(g_m68k.d[1], 0x80);
    M68K_LSR16(g_m68k.d[1], 0x8);
    M68K_TST16(g_m68k.d[4]);
    if (M68K_CC_PL) goto loc_00CB4E;
    M68K_NEG16(g_m68k.d[4]);
loc_00CB4E:
    M68K_TST16(g_m68k.d[5]);
    if (M68K_CC_PL) goto loc_00CB54;
    M68K_NEG16(g_m68k.d[5]);
loc_00CB54:
    M68K_MULU(g_m68k.d[4], g_m68k.d[4]);
    M68K_MULU(g_m68k.d[5], g_m68k.d[5]);
    M68K_ADD32(g_m68k.d[5], g_m68k.d[4]);
    M68K_CMP32(g_m68k.d[5], 0x3000);
    if (M68K_CC_CC) goto loc_00CB6C;
    M68K_SUB8(g_m68k.d[0], g_m68k.d[1]);
    M68K_ADD8(g_m68k.d[0], 0x8);
    M68K_AND8(g_m68k.d[0], 0xf0);
    goto loc_00CB74;
loc_00CB6C:
    M68K_SUB8(g_m68k.d[0], g_m68k.d[1]);
    M68K_ADD8(g_m68k.d[0], 0x2);
    M68K_AND8(g_m68k.d[0], 0xfc);
loc_00CB74:
    if (M68K_CC_PL) goto loc_00CB7E;
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(g_m68k.a[6] + 0x30, _mv); M68K_TST16(_mv); }
    goto loc_00CB8E;
loc_00CB7E:
    if (M68K_CC_NE) goto loc_00CB88;
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[6] + 0x30, _mv); M68K_TST16(_mv); }
    goto loc_00CB8E;
loc_00CB88:
    { uint16_t _mv = (uint16_t)(0x2); bus_write16(g_m68k.a[6] + 0x30, _mv); M68K_TST16(_mv); }
loc_00CB8E:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xe))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_CMP16(g_m68k.d[0], bus_read16(g_m68k.a[0] + 0x8));
    if (M68K_CC_LE) goto loc_00CBA6;
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[6] + 0x34, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(g_m68k.a[6] + 0x36, _mv); M68K_TST16(_mv); }
    goto loc_00CBB2;
loc_00CBA6:
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(g_m68k.a[6] + 0x34, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[6] + 0x36, _mv); M68K_TST16(_mv); }
loc_00CBB2:
    return;
}

/* $00CBB4-$00CC08  (25 instructions, 84 bytes) */
void sub_00CBB4(void) {
    g_m68k.d[0] = (uint32_t)(int32_t)(int8_t)(0x0); M68K_TST32(g_m68k.d[0]);
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x30), 0x0);
    if (M68K_CC_EQ) goto loc_00CC02;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xe))); M68K_TST16((uint16_t)g_m68k.d[0]);
    if (M68K_CC_PL) goto loc_00CBC6;
    M68K_NEG16(g_m68k.d[0]);
loc_00CBC6:
    M68K_LSR16(g_m68k.d[0], 0x3);
    M68K_AND16(g_m68k.d[0], 0xfffe);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.a[3] = bus_read32(g_m68k.a[6] + 0x5c);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x36), 0x1);
    if (M68K_CC_NE) goto loc_00CBF8;
    g_m68k.a[3] = 0x020676;
    M68K_LSR16(g_m68k.d[1], 0x2);
    M68K_AND16(g_m68k.d[1], 0xfffe);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[1]))); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_MULU(g_m68k.d[0], g_m68k.d[1]);
    M68K_ADD32(g_m68k.d[0], 0x50);
    M68K_LSR32(g_m68k.d[0], 0x8);
loc_00CBF8:
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x30), 0x2);
    if (M68K_CC_EQ) goto loc_00CC02;
    M68K_NEG16(g_m68k.d[0]);
loc_00CC02:
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[6] + 0x38, _mv); M68K_TST16(_mv); }
    return;
}

/* $00CC08-$00CCEE  (58 instructions, 230 bytes) */
void sub_00CC08(void) {
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0xce), 0x0);
    if (M68K_CC_NE) goto loc_00CC2A;
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[6] + 0x28)); bus_write16(g_m68k.a[6] + 0x2c, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[6] + 0x28, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[6] + 0x2e, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x2); bus_write16(g_m68k.a[6] + 0x26, _mv); M68K_TST16(_mv); }
    return;
loc_00CC2A:
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[6] + 0x28)); bus_write16(g_m68k.a[6] + 0x2c, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x8c))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x90))); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x013E74);
    M68K_AND16(g_m68k.d[0], 0x7f);
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0xd0), 0x1);
    if (M68K_CC_NE) goto loc_00CC54;
    M68K_CMP16(g_m68k.d[0], 0xe);
    if (M68K_CC_NE) goto loc_00CC54;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x7f)); M68K_TST16((uint16_t)g_m68k.d[0]);
loc_00CC54:
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[7] -= 2; bus_write16(g_m68k.a[7], _mv); M68K_TST16(_mv); }
    func_table_call(0xd4a6);
    M68K_TST16(bus_read16(g_m68k.a[6] + 0xd2));
    if (M68K_CC_EQ) goto loc_00CC64;
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[6] + 0xd4)); bus_write16(g_m68k.a[7], _mv); M68K_TST16(_mv); }
loc_00CC64:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(_postinc16(7))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_CMP16(g_m68k.d[0], 0x1f);
    if (M68K_CC_GT) goto loc_00CC8C;
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[6] + 0x26)); bus_write16(g_m68k.a[6] + 0x2a, _mv); M68K_TST16(_mv); }
    M68K_ROR16(g_m68k.d[0], 0x5);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[6] + 0x2e, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[6] + 0x26, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[6] + 0x80)); bus_write16(g_m68k.a[6] + 0x28, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[6] + 0x82)); bus_write16(g_m68k.a[6] + 0xc0, _mv); M68K_TST16(_mv); }
    return;
loc_00CC8C:
    M68K_CMP16(g_m68k.d[0], 0x3f);
    if (M68K_CC_GT) goto loc_00CCB2;
    M68K_SUB16(g_m68k.d[0], 0x20);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    { uint16_t _mv = (uint16_t)(bus_read16(0xccee + (int16_t)(uint16_t)g_m68k.d[0])); bus_write16(g_m68k.a[6] + 0x2e, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(g_m68k.a[6] + 0x26, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[6] + 0x80)); bus_write16(g_m68k.a[6] + 0x28, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[6] + 0x82)); bus_write16(g_m68k.a[6] + 0xc0, _mv); M68K_TST16(_mv); }
    return;
loc_00CCB2:
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[5] + (-0x6dfe)))); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_ADD16(g_m68k.d[1], g_m68k.d[1]);
    M68K_ADD16(g_m68k.d[1], g_m68k.d[1]);
    g_m68k.a[0] = 0x02070E;
    g_m68k.a[0] = (g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[1]);
    g_m68k.a[0] = bus_read32(g_m68k.a[0]);
    M68K_SUB16(g_m68k.d[0], 0x40);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST8((uint8_t)g_m68k.d[1]);
    M68K_EXT16(g_m68k.d[1]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); bus_write16(g_m68k.a[6] + 0x28, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[6] + 0x2e, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x2); bus_write16(g_m68k.a[6] + 0x26, _mv); M68K_TST16(_mv); }
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[0] + 0x1 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST8((uint8_t)g_m68k.d[1]);
    M68K_EXT16(g_m68k.d[1]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); bus_write16(g_m68k.a[6] + 0xc0, _mv); M68K_TST16(_mv); }
    return;
}

/* $00CD2E-$00CDC0  (44 instructions, 146 bytes) */
void sub_00CD2E(void) {
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x26), 0x0);
    if (M68K_CC_EQ) goto loc_00CD4C;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x28))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[0] = 0x00CDC0;
    g_m68k.a[0] = bus_read32(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    func_table_call(g_m68k.a[0]);
    goto loc_00CDBE;
loc_00CD4C:
    M68K_TST16(bus_read16(g_m68k.a[6] + 0xd2));
    if (M68K_CC_EQ) goto loc_00CD58;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x4)); M68K_TST16((uint16_t)g_m68k.d[0]);
    goto loc_00CDBE;
loc_00CD58:
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0xe), 0x8ff);
    if (M68K_CC_GT) goto loc_00CD66;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x4)); M68K_TST16((uint16_t)g_m68k.d[0]);
    goto loc_00CDBE;
loc_00CD66:
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[7]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x2e))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_EXT32(g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xa8))); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_EXT32(g_m68k.d[1]);
    g_m68k.d[2] = g_m68k.d[1]; M68K_TST32((uint32_t)g_m68k.d[2]);
    M68K_SUB32(g_m68k.d[0], g_m68k.d[1]);
    if (M68K_CC_PL) goto loc_00CD82;
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(0xffff)); M68K_TST16((uint16_t)g_m68k.d[7]);
    M68K_NEG32(g_m68k.d[0]);
loc_00CD82:
    M68K_ADD32(g_m68k.d[1], g_m68k.d[0]);
    M68K_ADD32(g_m68k.d[2], 0x8000);
    M68K_CMP32(g_m68k.d[1], g_m68k.d[2]);
    if (M68K_CC_LE) goto loc_00CDA6;
    M68K_NEG16(g_m68k.d[7]);
    M68K_SUB32(g_m68k.d[0], 0x8000);
    g_m68k.d[1] = 0x8000; M68K_TST32((uint32_t)g_m68k.d[1]);
    M68K_SUB32(g_m68k.d[1], g_m68k.d[0]);
    g_m68k.d[0] = g_m68k.d[1]; M68K_TST32((uint32_t)g_m68k.d[0]);
    M68K_AND32(g_m68k.d[0], 0x7fff);
loc_00CDA6:
    M68K_CMP32(g_m68k.d[0], 0x6660);
    if (M68K_CC_LE) goto loc_00CDB4;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x4)); M68K_TST16((uint16_t)g_m68k.d[0]);
    goto loc_00CDBE;
loc_00CDB4:
    func_table_call(0x00D63E);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x4)); M68K_TST16((uint16_t)g_m68k.d[0]);
loc_00CDBE:
    return;
}

/* $00CE08-$00CE0E  (2 instructions, 6 bytes) */
void jt_00CE08(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00CE0E-$00CE14  (2 instructions, 6 bytes) */
void jt_00CE0E(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00CE14-$00CE1A  (2 instructions, 6 bytes) */
void jt_00CE14(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00CE1A-$00CE20  (2 instructions, 6 bytes) */
void jt_00CE1A(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00CE20-$00CE26  (2 instructions, 6 bytes) */
void jt_00CE20(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00CE26-$00CE66  (16 instructions, 64 bytes) */
void jt_00CE26(void) {
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x2c), 0x11);
    if (M68K_CC_NE) goto loc_00CE60;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xe))); M68K_TST16((uint16_t)g_m68k.d[0]);
    if (M68K_CC_PL) goto loc_00CE36;
    M68K_NEG16(g_m68k.d[0]);
loc_00CE36:
    M68K_LSR16(g_m68k.d[0], 0x7);
    M68K_AND16(g_m68k.d[0], 0x7f);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[0] = 0xce66;
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0])); bus_write16(g_m68k.a[6] + 0x22, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[6] + 0x1e, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(g_m68k.a[6] + 0x0, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[6] + 0x30, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[6] + 0x32, _mv); M68K_TST16(_mv); }
loc_00CE60:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00CEA6-$00CEBA  (6 instructions, 20 bytes) */
void sub_00CEA6(void) {
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0xce), 0x0);
    if (M68K_CC_NE) goto loc_00CEB0;
    return;
loc_00CEB0:
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0xceba + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST16((uint16_t)g_m68k.d[0]);
    { func_table_call((0xceba + (int16_t)(uint16_t)g_m68k.d[0])); return; }
    /* WARNING: function did not end with RTS */
}

/* $00CF38-$00CF42  (3 instructions, 10 bytes) */
void sub_00CF38(void) {
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0xcf42 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST16((uint16_t)g_m68k.d[0]);
    { func_table_call((0xcf42 + (int16_t)(uint16_t)g_m68k.d[0])); return; }
    /* WARNING: function did not end with RTS */
}

/* $00CFBA-$00D080  (59 instructions, 198 bytes) */
void sub_00CFBA(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x38))); M68K_TST16((uint16_t)g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[6] + 0xaa); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[0]); bus_write16(_ea, _tmp); }
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[7]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xaa))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_EXT32(g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xa8))); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_EXT32(g_m68k.d[1]);
    g_m68k.d[2] = g_m68k.d[1]; M68K_TST32((uint32_t)g_m68k.d[2]);
    M68K_SUB32(g_m68k.d[0], g_m68k.d[1]);
    if (M68K_CC_PL) goto loc_00CFDE;
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(0xffff)); M68K_TST16((uint16_t)g_m68k.d[7]);
    M68K_NEG32(g_m68k.d[0]);
loc_00CFDE:
    M68K_ADD32(g_m68k.d[1], g_m68k.d[0]);
    M68K_ADD32(g_m68k.d[2], 0x8000);
    M68K_CMP32(g_m68k.d[1], g_m68k.d[2]);
    if (M68K_CC_LE) goto loc_00D002;
    M68K_NEG16(g_m68k.d[7]);
    M68K_SUB32(g_m68k.d[0], 0x8000);
    g_m68k.d[1] = 0x8000; M68K_TST32((uint32_t)g_m68k.d[1]);
    M68K_SUB32(g_m68k.d[1], g_m68k.d[0]);
    g_m68k.d[0] = g_m68k.d[1]; M68K_TST32((uint32_t)g_m68k.d[0]);
    M68K_AND32(g_m68k.d[0], 0x7fff);
loc_00D002:
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[6] + 0x1c, _mv); M68K_TST16(_mv); }
    M68K_CMP16(g_m68k.d[0], 0x2000);
    if (M68K_CC_LS) goto loc_00D014;
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(g_m68k.a[6] + 0x1c, _mv); M68K_TST16(_mv); }
loc_00D014:
    M68K_CMP16(g_m68k.d[0], 0x4000);
    if (M68K_CC_LS) goto loc_00D034;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x4000)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xaa))); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_SUB16(g_m68k.d[1], 0x4000);
    M68K_CMP16(g_m68k.d[7], 0xffff);
    if (M68K_CC_NE) goto loc_00D030;
    M68K_ADD16(g_m68k.d[1], 0x8000);
loc_00D030:
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); bus_write16(g_m68k.a[6] + 0xa8, _mv); M68K_TST16(_mv); }
loc_00D034:
    { uint16_t _mv = (uint16_t)(g_m68k.d[7]); bus_write16(g_m68k.a[6] + 0x18, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[6] + 0x1a, _mv); M68K_TST16(_mv); }
    M68K_CMP16(g_m68k.d[0], 0x40);
    if (M68K_CC_CC) goto loc_00D04A;
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[6] + 0xaa)); bus_write16(g_m68k.a[6] + 0xa8, _mv); M68K_TST16(_mv); }
    goto loc_00D07E;
loc_00D04A:
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x36))); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_LSL16(g_m68k.d[1], 0x1);
    M68K_OR16(g_m68k.d[1], bus_read16(g_m68k.a[6] + 0x34));
    M68K_ADD16(g_m68k.d[1], g_m68k.d[1]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x3a + (int16_t)(uint16_t)g_m68k.d[1]))); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x26), 0x1);
    if (M68K_CC_NE) goto loc_00D068;
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[1])); M68K_TST16((uint16_t)g_m68k.d[6]);
    M68K_ADD16(g_m68k.d[1], g_m68k.d[1]);
    M68K_ADD16(g_m68k.d[1], g_m68k.d[6]);
loc_00D068:
    M68K_MULU(g_m68k.d[0], g_m68k.d[1]);
    M68K_ADD32(g_m68k.d[0], 0x8000);
    M68K_SWAP(g_m68k.d[0]);
    M68K_CMP16(g_m68k.d[7], 0xffff);
    if (M68K_CC_NE) goto loc_00D07A;
    M68K_NEG16(g_m68k.d[0]);
loc_00D07A:
    { uint32_t _ea = (g_m68k.a[6] + 0xa8); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[0]); bus_write16(_ea, _tmp); }
loc_00D07E:
    return;
}

/* $00D080-$00D0AC  (14 instructions, 44 bytes) */
void sub_00D080(void) {
    g_m68k.a[0] = 0x0202F6;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x1a))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_LSR16(g_m68k.d[0], 0x6);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xe))); M68K_TST16((uint16_t)g_m68k.d[1]);
    if (M68K_CC_PL) goto loc_00D09A;
    M68K_NEG16(g_m68k.d[1]);
loc_00D09A:
    M68K_CMP16(g_m68k.d[1], 0x800);
    if (M68K_CC_LE) goto loc_00D0AA;
    M68K_MULS(g_m68k.d[0], bus_read16(g_m68k.a[6] + 0xe));
    M68K_ASR32(g_m68k.d[0], 0x8);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[6] + 0xe, _mv); M68K_TST16(_mv); }
loc_00D0AA:
    return;
}

/* $00D0AC-$00D0CC  (9 instructions, 32 bytes) */
void sub_00D0AC(void) {
    g_m68k.d[0] = (uint32_t)(int32_t)(int8_t)(0x0); M68K_TST32(g_m68k.d[0]);
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x34), 0x1);
    if (M68K_CC_NE) goto loc_00D0BA;
    M68K_ADD16(g_m68k.d[0], bus_read16(g_m68k.a[6] + 0x42));
loc_00D0BA:
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x36), 0x1);
    if (M68K_CC_NE) goto loc_00D0C6;
    M68K_SUB16(g_m68k.d[0], bus_read16(g_m68k.a[6] + 0x44));
loc_00D0C6:
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[6] + 0xc, _mv); M68K_TST16(_mv); }
    return;
}

/* $00D0CC-$00D0F8  (15 instructions, 44 bytes) */
void sub_00D0CC(void) {
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xe))); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_ADD16(g_m68k.d[1], bus_read16(g_m68k.a[6] + 0x46));
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x46))); M68K_TST16((uint16_t)g_m68k.d[2]);
    M68K_ADD16(g_m68k.d[2], g_m68k.d[2]);
    M68K_CMP16(g_m68k.d[1], g_m68k.d[2]);
    if (M68K_CC_HI) goto loc_00D0E6;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xe))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_NEG16(g_m68k.d[0]);
    goto loc_00D0F2;
loc_00D0E6:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x46))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_TST16(bus_read16(g_m68k.a[6] + 0xe));
    if (M68K_CC_MI) goto loc_00D0F2;
    M68K_NEG16(g_m68k.d[0]);
loc_00D0F2:
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[6] + 0xc, _mv); M68K_TST16(_mv); }
    return;
}

/* $00D0F8-$00D102  (3 instructions, 10 bytes) */
void sub_00D0F8(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xc))); M68K_TST16((uint16_t)g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[6] + 0xe); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[0]); bus_write16(_ea, _tmp); }
    return;
}

/* $00D102-$00D142  (18 instructions, 64 bytes) */
void sub_00D102(void) {
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[6] + 0x8c)); bus_write32(g_m68k.a[6] + 0x84, _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[6] + 0x90)); bus_write32(g_m68k.a[6] + 0x88, _mv); M68K_TST32(_mv); }
    g_m68k.a[3] = 0x027A3A;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xa8))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_LSR16(g_m68k.d[0], 0x6);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_ADD16(g_m68k.d[1], g_m68k.d[1]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[1]))); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_ADD16(g_m68k.d[0], 0x100);
    M68K_AND16(g_m68k.d[0], 0x3ff);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xe))); M68K_TST16((uint16_t)g_m68k.d[2]);
    M68K_MULS(g_m68k.d[0], g_m68k.d[2]);
    M68K_MULS(g_m68k.d[1], g_m68k.d[2]);
    { uint32_t _ea = (g_m68k.a[6] + 0x8c); uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[0]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[6] + 0x90); uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    return;
}

/* $00D142-$00D18A  (21 instructions, 72 bytes) */
void sub_00D142(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xe))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x28), 0x8);
    if (M68K_CC_LT) goto loc_00D16E;
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x28), 0xd);
    if (M68K_CC_GT) goto loc_00D16E;
    M68K_CMP16(g_m68k.d[0], 0x6ff);
    if (M68K_CC_LE) goto loc_00D17A;
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x34), 0x1);
    if (M68K_CC_NE) goto loc_00D168;
    M68K_SUB16(g_m68k.d[0], bus_read16(g_m68k.a[6] + 0x44));
loc_00D168:
    M68K_SUB16(g_m68k.d[0], 0x12);
    goto loc_00D17A;
loc_00D16E:
    M68K_CMP16(g_m68k.d[0], bus_read16(g_m68k.a[6] + 0x78));
    if (M68K_CC_LE) goto loc_00D17A;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x78))); M68K_TST16((uint16_t)g_m68k.d[0]);
    goto loc_00D184;
loc_00D17A:
    M68K_CMP16(g_m68k.d[0], bus_read16(g_m68k.a[6] + 0x7a));
    if (M68K_CC_GE) goto loc_00D184;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x7a))); M68K_TST16((uint16_t)g_m68k.d[0]);
loc_00D184:
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[6] + 0xe, _mv); M68K_TST16(_mv); }
    return;
}

/* $00D18A-$00D1BE  (17 instructions, 52 bytes) */
void sub_00D18A(void) {
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x2), 0x0);
    if (M68K_CC_NE) goto loc_00D194;
    return;
loc_00D194:
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x18))); M68K_TST16((uint16_t)g_m68k.d[7]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x1a))); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xaa))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_TST16(g_m68k.d[7]);
    if (M68K_CC_PL) goto loc_00D1A8;
    M68K_SUB16(g_m68k.d[0], g_m68k.d[6]);
    goto loc_00D1AA;
loc_00D1A8:
    M68K_ADD16(g_m68k.d[0], g_m68k.d[6]);
loc_00D1AA:
    M68K_ADD16(g_m68k.d[0], 0x400);
    M68K_AND16(g_m68k.d[0], 0xffff);
    M68K_ROL16(g_m68k.d[0], 0x5);
    M68K_AND16(g_m68k.d[0], 0x1f);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[6] + 0x4c, _mv); M68K_TST16(_mv); }
    return;
}

/* $00D1BE-$00D1EE  (12 instructions, 48 bytes) */
void sub_00D1BE(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x4))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_CMP16(g_m68k.d[0], bus_read16(g_m68k.a[6] + 0x6));
    if (M68K_CC_EQ) goto loc_00D1EC;
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[6] + 0x6, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x4))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x58))); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x00F4DE);
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); bus_write16(g_m68k.a[6] + 0x8, _mv); M68K_TST16(_mv); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x5a))); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x00F4DE);
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); bus_write16(g_m68k.a[6] + 0xa, _mv); M68K_TST16(_mv); }
loc_00D1EC:
    return;
}

/* $00D1EE-$00D212  (10 instructions, 36 bytes) */
void sub_00D1EE(void) {
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x2), 0x1);
    if (M68K_CC_NE) goto loc_00D204;
    func_table_call(0xd246);
    func_table_call(0xd29c);
    func_table_call(0xd3f0);
    goto loc_00D210;
loc_00D204:
    func_table_call(0xd47c);
    func_table_call(0xd48a);
    func_table_call(0xd498);
loc_00D210:
    return;
}

/* $00D212-$00D246  (15 instructions, 52 bytes) */
void sub_00D212(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x4))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_MULU(g_m68k.d[0], bus_read16(g_m68k.a[6] + 0x1e));
    M68K_ASR32(g_m68k.d[0], 0x8);
    M68K_ASR32(g_m68k.d[0], 0x8);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[6] + 0x20, _mv); M68K_TST16(_mv); }
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x2), 0x1);
    if (M68K_CC_NE) goto loc_00D238;
    func_table_call(0xd246);
    func_table_call(0xd2ea);
    func_table_call(0xd3f0);
    goto loc_00D244;
loc_00D238:
    func_table_call(0xd47c);
    func_table_call(0xd48a);
    func_table_call(0xd498);
loc_00D244:
    return;
}

/* $00D4D4-$00D50C  (14 instructions, 56 bytes) */
void sub_00D4D4(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[7]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    g_m68k.a[5] = 0x108000;
    M68K_TST16(bus_read16(g_m68k.a[5] + (-0x6dfe)));
    if (M68K_CC_EQ) goto loc_00D506;
    g_m68k.a[4] = g_m68k.a[6];
    g_m68k.a[6] = (g_m68k.a[5] + (-0x6d94));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(0x2)); M68K_TST16((uint16_t)g_m68k.d[7]);
loc_00D4EE:
    { uint16_t _mv = (uint16_t)(0x2); bus_write16(g_m68k.a[5] + (-0x6b0c), _mv); M68K_TST16(_mv); }
    { uint32_t _ea = (g_m68k.a[5] + (-0x6b0c)); uint16_t _tmp = bus_read16(_ea); M68K_SUB16(_tmp, g_m68k.d[7]); bus_write16(_ea, _tmp); }
    func_table_call(0xd1ee);
    g_m68k.a[6] += 0xd8;
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[7]; _cnt--; g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_00D4EE; } }
loc_00D506:
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[7] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}

/* $00D566-$00D588  (8 instructions, 34 bytes) */
void sub_00D566(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[6]);
    g_m68k.a[6] = 0x10126C;
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(0x2)); M68K_TST16((uint16_t)g_m68k.d[7]);
loc_00D574:
    func_table_call(0xd588);
    g_m68k.a[6] += 0xd8;
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[7]; _cnt--; g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_00D574; } }
    g_m68k.a[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}

/* $00D588-$00D63E  (49 instructions, 182 bytes) */
void sub_00D588(void) {
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0xce), 0x0);
    if (M68K_CC_EQ) goto loc_00D63C;
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x24), 0x0);
    if (M68K_CC_EQ) goto loc_00D63C;
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x28), 0x0);
    if (M68K_CC_NE) goto loc_00D5AE;
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x1c), 0x1);
    if (M68K_CC_NE) goto loc_00D63C;
loc_00D5AE:
    { uint32_t _ea = (g_m68k.a[6] + 0x48); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    g_m68k.a[0] = 0x02092A;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xe))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_LSR16(g_m68k.d[0], 0x5);
    M68K_AND16(g_m68k.d[0], 0x7c);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_CMP16(g_m68k.d[1], bus_read16(g_m68k.a[6] + 0x48));
    if (M68K_CC_HI) goto loc_00D63C;
    bus_write16(g_m68k.a[6] + 0x48, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[0] + 0x2 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xc0))); M68K_TST16((uint16_t)g_m68k.d[3]);
    M68K_AND16(g_m68k.d[3], 0xff);
    M68K_CMP8(g_m68k.d[3], 0xff);
    if (M68K_CC_EQ) goto loc_00D63C;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xa8))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], 0x400);
    M68K_ROL16(g_m68k.d[0], 0x5);
    M68K_AND16(g_m68k.d[0], 0x1f);
    M68K_ADD16(g_m68k.d[0], 0x11);
    { uint32_t _ea = (g_m68k.a[6] + 0x4a); uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, 0xffff); bus_write16(_ea, _tmp); }
    if (M68K_CC_EQ) goto loc_00D5FE;
    M68K_SUB16(g_m68k.d[0], 0x3);
loc_00D5FE:
    M68K_AND16(g_m68k.d[0], 0x1f);
    g_m68k.a[0] = 0x0209AA;
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST8((uint8_t)g_m68k.d[2]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[0] + 0x1 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST8((uint8_t)g_m68k.d[0]);
    M68K_EXT16(g_m68k.d[2]);
    M68K_EXT16(g_m68k.d[0]);
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x1c), 0x1);
    if (M68K_CC_NE) goto loc_00D622;
    M68K_ASR16(g_m68k.d[2], 0x1);
    M68K_ASR16(g_m68k.d[0], 0x1);
loc_00D622:
    M68K_MULS(g_m68k.d[0], bus_read16(g_m68k.a[6] + 0x4));
    M68K_ASR32(g_m68k.d[0], 0x8);
    M68K_MULS(g_m68k.d[2], bus_read16(g_m68k.a[6] + 0x4));
    M68K_ASR32(g_m68k.d[2], 0x8);
    M68K_ADD16(g_m68k.d[0], bus_read16(g_m68k.a[6] + 0x8c));
    M68K_ADD16(g_m68k.d[2], bus_read16(g_m68k.a[6] + 0x90));
    func_table_call(0x01458C);
loc_00D63C:
    return;
}

/* $00D63E-$00D68C  (22 instructions, 78 bytes) */
void sub_00D63E(void) {
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x24), 0x0);
    if (M68K_CC_EQ) goto loc_00D68A;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xa8))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], 0x400);
    M68K_ROL16(g_m68k.d[0], 0x5);
    M68K_AND16(g_m68k.d[0], 0x1f);
    g_m68k.a[0] = 0x0209AA;
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST8((uint8_t)g_m68k.d[2]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[0] + 0x1 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST8((uint8_t)g_m68k.d[0]);
    M68K_EXT16(g_m68k.d[2]);
    M68K_EXT16(g_m68k.d[0]);
    M68K_MULS(g_m68k.d[0], bus_read16(g_m68k.a[6] + 0x4));
    M68K_ASR32(g_m68k.d[0], 0x8);
    M68K_MULS(g_m68k.d[2], bus_read16(g_m68k.a[6] + 0x4));
    M68K_ASR32(g_m68k.d[2], 0x8);
    M68K_ADD16(g_m68k.d[0], bus_read16(g_m68k.a[6] + 0x8c));
    M68K_ADD16(g_m68k.d[2], bus_read16(g_m68k.a[6] + 0x90));
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x80)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0x6)); M68K_TST16((uint16_t)g_m68k.d[3]);
    func_table_call(0x01458C);
loc_00D68A:
    return;
}

/* $00D68C-$00D694  (3 instructions, 8 bytes) */
void sub_00D68C(void) {
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0xd694 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00D6A8-$00D6C8  (7 instructions, 32 bytes) */
void sub_00D6A8(void) {
    M68K_CMP16(bus_read16(0x101222), 0x1);
    if (M68K_CC_NE) goto loc_00D6BA;
    func_table_call(0x00C34A);
    goto loc_00D6C6;
loc_00D6BA:
    bus_write16(0x1014F8, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    bus_write16(0x1014FA, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
loc_00D6C6:
    return;
}

/* $00D6C8-$00D6DA  (4 instructions, 18 bytes) */
void sub_00D6C8(void) {
    M68K_CMP16(bus_read16(0x101222), 0x1);
    if (M68K_CC_NE) goto loc_00D6D8;
    func_table_call(0x00C558);
loc_00D6D8:
    return;
}

/* $00D6DA-$00D6EC  (4 instructions, 18 bytes) */
void sub_00D6DA(void) {
    M68K_CMP16(bus_read16(0x101222), 0x1);
    if (M68K_CC_NE) goto loc_00D6EA;
    func_table_call(0x00D4D4);
loc_00D6EA:
    return;
}

/* $00D6EC-$00D704  (7 instructions, 24 bytes) */
void sub_00D6EC(void) {
    g_m68k.a[0] = 0x024F6C;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x101202))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[0] = bus_read32(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(_postinc16(0))); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00D704-$00D70C  (2 instructions, 8 bytes) */
void sub_00D704(void) {
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(0x1014FC, _mv); M68K_TST16(_mv); }
    return;
}

/* $00D70C-$00D71C  (5 instructions, 16 bytes) */
void sub_00D70C(void) {
    g_m68k.d[0] = (uint32_t)(int32_t)(int8_t)(0x0); M68K_TST32(g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(0x10FD83))); M68K_TST8((uint8_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0xd71c + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00D722-$00D72A  (2 instructions, 8 bytes) */
void sub_00D722(void) {
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(0x101506, _mv); M68K_TST16(_mv); }
    return;
}

/* $00D72A-$00D956  (116 instructions, 556 bytes) */
void sub_00D72A(void) {
    M68K_CMP16(bus_read16(0x1014FC), 0x1);
    if (M68K_CC_NE) goto loc_00D746;
    func_table_call(0x00D6EC);
    { uint32_t _mv = (uint32_t)(g_m68k.a[0]); bus_write32(0x1014FE, _mv); M68K_TST32(_mv); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(0x1011FA, _mv); M68K_TST16(_mv); }
loc_00D746:
    bus_write16(0x101502, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    bus_write16(0x101504, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    func_table_call(0x0169C4);
    func_table_call(0x00F8D0);
    func_table_call(0x00F8FE);
    func_table_call(0x00F942);
    func_table_call(0x00F9E6);
    func_table_call(0x00F87A);
    func_table_call(0x00FC84);
    g_m68k.a[1] = bus_read32(0x0236FE);
    g_m68k.a[2] = (g_m68k.a[6] + 0x0);
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(0x2f)); M68K_TST16((uint16_t)g_m68k.d[7]);
loc_00D78A:
    { uint16_t _mv = (uint16_t)(_postinc16(1)); bus_write16(g_m68k.a[2], _mv); g_m68k.a[2] += 2; M68K_TST16(_mv); }
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[7]; _cnt--; g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_00D78A; } }
    g_m68k.a[1] = bus_read32(0x023702);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x101202))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[1] = bus_read32(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    g_m68k.a[2] = (g_m68k.a[6] + 0xb2);
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(0x18)); M68K_TST16((uint16_t)g_m68k.d[7]);
loc_00D7AC:
    { uint16_t _mv = (uint16_t)(_postinc16(1)); bus_write16(g_m68k.a[2], _mv); g_m68k.a[2] += 2; M68K_TST16(_mv); }
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[7]; _cnt--; g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_00D7AC; } }
    g_m68k.a[1] = bus_read32(0x023706);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x101506))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[1] = bus_read32(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1011FA))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[1] = bus_read32(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    g_m68k.a[2] = (g_m68k.a[6] + 0x60);
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(0x5)); M68K_TST16((uint16_t)g_m68k.d[7]);
loc_00D7DC:
    { uint16_t _mv = (uint16_t)(_postinc16(1)); bus_write16(g_m68k.a[2], _mv); g_m68k.a[2] += 2; M68K_TST16(_mv); }
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[7]; _cnt--; g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_00D7DC; } }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1011FA))); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0xe070);
    g_m68k.a[1] = bus_read32(0x02370A);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1011F8))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[1] = bus_read32(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1011FA))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[1] = bus_read32(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    g_m68k.a[2] = (g_m68k.a[6] + 0x80);
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(0x18)); M68K_TST16((uint16_t)g_m68k.d[7]);
loc_00D816:
    { uint16_t _mv = (uint16_t)(_postinc16(1)); bus_write16(g_m68k.a[2], _mv); g_m68k.a[2] += 2; M68K_TST16(_mv); }
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[7]; _cnt--; g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_00D816; } }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[6] + 0xe4, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(0x101202)); bus_write16(g_m68k.a[6] + 0xe6, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(0x1011FC)); bus_write16(g_m68k.a[6] + 0xe8, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(0x1011FA)); bus_write16(g_m68k.a[6] + 0xea, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[6] + 0xb4)); bus_write16(g_m68k.a[6] + 0xf8, _mv); M68K_TST16(_mv); }
    bus_write16(g_m68k.a[6] + 0x108, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[6] + 0x10a, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x50); bus_write16(g_m68k.a[6] + 0x10c, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[6] + 0x10c)); bus_write16(g_m68k.a[6] + 0x10e, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[6] + 0xde)); bus_write16(g_m68k.a[6] + 0x110, _mv); M68K_TST16(_mv); }
    bus_write16(g_m68k.a[6] + 0x112, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[6] + 0x114, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0xa); bus_write16(g_m68k.a[6] + 0x116, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[6] + 0x11c, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[6] + 0x11e, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[6] + 0x122, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[6] + 0x120, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[6] + 0x124, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[6] + 0x124)); bus_write16(g_m68k.a[6] + 0x128, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[6] + 0x126, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[6] + 0x126)); bus_write16(g_m68k.a[6] + 0x12a, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[6] + 0x8a)); bus_write16(g_m68k.a[6] + 0x12c, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0xffff); bus_write16(g_m68k.a[6] + 0x12e, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[6] + 0x130, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[6] + 0x132, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x3e8); bus_write16(g_m68k.a[6] + 0x134, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x64); bus_write16(g_m68k.a[6] + 0x136, _mv); M68K_TST16(_mv); }
    func_table_call(0x00F7C0);
    func_table_call(0xf2a2);
    func_table_call(0xe530);
    func_table_call(0xe55e);
    func_table_call(0x012202);
    { uint32_t _mv = (uint32_t)(g_m68k.a[0]); bus_write32(g_m68k.a[6] + 0xec, _mv); M68K_TST32(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x18))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], bus_read16(g_m68k.a[6] + 0x16));
    func_table_call(0x012256);
    func_table_call(0x012202);
    { uint32_t _mv = (uint32_t)(g_m68k.a[0]); bus_write32(g_m68k.a[6] + 0xf4, _mv); M68K_TST32(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x1c))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], bus_read16(g_m68k.a[6] + 0x16));
    func_table_call(0x012256);
    func_table_call(0x012202);
    { uint32_t _mv = (uint32_t)(g_m68k.a[0]); bus_write32(g_m68k.a[6] + 0xf0, _mv); M68K_TST32(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x1a))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], bus_read16(g_m68k.a[6] + 0x16));
    func_table_call(0x012256);
    bus_write32(g_m68k.a[6] + 0xfe, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    bus_write16(g_m68k.a[6] + 0x102, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    bus_write32(g_m68k.a[6] + 0xfa, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[6] + 0x104, _mv); M68K_TST16(_mv); }
    bus_write16(g_m68k.a[6] + 0x106, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    func_table_call(0xf172);
    func_table_call(0xedc6);
    func_table_call(0xeb9e);
    func_table_call(0xeea6);
    func_table_call(0xf1c6);
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[6] + 0xd8)); bus_write16(g_m68k.a[6] + 0x118, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[6] + 0xda)); bus_write16(g_m68k.a[6] + 0x11a, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00D956-$00DA72  (62 instructions, 284 bytes) */
void sub_00D956(void) {
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[6] + 0x11e)); bus_write16(g_m68k.a[6] + 0x122, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[6] + 0x124)); bus_write16(g_m68k.a[6] + 0x128, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[6] + 0x126)); bus_write16(g_m68k.a[6] + 0x12a, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[6] + 0x124, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[6] + 0x126, _mv); M68K_TST16(_mv); }
    { uint32_t _ea = (g_m68k.a[6] + 0x136); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    func_table_call(0x00F3E2);
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[6] + 0x14)); bus_write16(g_m68k.a[6] + 0x108, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[6] + 0x4)); bus_write16(g_m68k.a[6] + 0x10a, _mv); M68K_TST16(_mv); }
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x4), 0x1);
    if (M68K_CC_NE) goto loc_00D996;
    func_table_call(0xdfc8);
loc_00D996:
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x0), 0x1);
    if (M68K_CC_NE) goto loc_00D9F6;
    { uint32_t _ea = (g_m68k.a[6] + 0x152); uint16_t _tmp = bus_read16(_ea); M68K_SUB16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    if (M68K_CC_GE) goto loc_00D9C8;
    M68K_CMP16(bus_read16(0x103332), 0x0);
    if (M68K_CC_NE) goto loc_00D9B8;
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(0x101208, _mv); M68K_TST16(_mv); }
    goto loc_00D9C0;
loc_00D9B8:
    { uint16_t _mv = (uint16_t)(0xffff); bus_write16(0x101208, _mv); M68K_TST16(_mv); }
loc_00D9C0:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
loc_00D9C8:
    func_table_call(0xf4b4);
    M68K_CMP16(g_m68k.d[0], 0x0);
    if (M68K_CC_NE) goto loc_00D9F4;
    M68K_CMP16(bus_read16(0x103332), 0x0);
    if (M68K_CC_NE) goto loc_00D9E6;
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(0x101208, _mv); M68K_TST16(_mv); }
    goto loc_00D9EE;
loc_00D9E6:
    { uint16_t _mv = (uint16_t)(0xffff); bus_write16(0x101208, _mv); M68K_TST16(_mv); }
loc_00D9EE:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
loc_00D9F4:
    goto loc_00DA1A;
loc_00D9F6:
    M68K_BTST(bus_read8(0x100000), 0x0);
    if (M68K_CC_NE) goto loc_00DA1A;
    func_table_call(0x016A44);
    M68K_CMP16(g_m68k.d[0], 0xffff);
    if (M68K_CC_NE) goto loc_00DA1A;
    { uint16_t _mv = (uint16_t)(0xffff); bus_write16(0x101208, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
loc_00DA1A:
    func_table_call(0xf40a);
    func_table_call(0xf33a);
    func_table_call(0x00F264);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xe4))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[0] = bus_read32(0xda72 + (int16_t)(uint16_t)g_m68k.d[0]);
    func_table_call(g_m68k.a[0]);
    func_table_call(0xf130);
    func_table_call(0x00F80C);
    func_table_call(0x00F8DA);
    func_table_call(0x00F908);
    func_table_call(0x00F94C);
    func_table_call(0x00FA18);
    func_table_call(0x00F884);
    func_table_call(0x00FC9E);
    func_table_call(0xf386);
    func_table_call(0xf204);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00DAA2-$00DAAC  (2 instructions, 10 bytes) */
void jt_00DAA2(void) {
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(g_m68k.a[6] + 0xe4, _mv); M68K_TST16(_mv); }
    { func_table_call(0x00DAAC); return; }
    /* WARNING: function did not end with RTS */
}

/* $00DAAC-$00DBB6  (69 instructions, 266 bytes) */
void jt_00DAAC(void) {
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x104), 0x1);
    if (M68K_CC_NE) goto loc_00DAC8;
    { uint32_t _ea = (g_m68k.a[6] + 0x106); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x106), 0xe);
    if (M68K_CC_LT) goto loc_00DAC6;
    { uint16_t _mv = (uint16_t)(0xb); bus_write16(g_m68k.a[6] + 0xe4, _mv); M68K_TST16(_mv); }
loc_00DAC6:
    goto loc_00DACC;
loc_00DAC8:
    bus_write16(g_m68k.a[6] + 0x106, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
loc_00DACC:
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x0), 0x0);
    if (M68K_CC_NE) goto loc_00DADE;
    func_table_call(0xe4a6);
    func_table_call(0xedc6);
    goto loc_00DAE6;
loc_00DADE:
    func_table_call(0xe4fc);
    func_table_call(0xedc6);
loc_00DAE6:
    func_table_call(0xe092);
    func_table_call(0xf360);
    func_table_call(0xe19e);
    func_table_call(0xe3b8);
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x4), 0x0);
    if (M68K_CC_NE) goto loc_00DB06;
    func_table_call(0xe530);
    func_table_call(0xe55e);
loc_00DB06:
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x0), 0x0);
    if (M68K_CC_NE) goto loc_00DB1E;
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x4), 0x0);
    if (M68K_CC_NE) goto loc_00DB1E;
    func_table_call(0xe57c);
    func_table_call(0xe632);
loc_00DB1E:
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x4), 0x0);
    if (M68K_CC_NE) goto loc_00DB2A;
    func_table_call(0xe770);
loc_00DB2A:
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x0), 0x0);
    if (M68K_CC_NE) goto loc_00DB54;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x3c))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_OR16(g_m68k.d[0], bus_read16(g_m68k.a[6] + 0x3e));
    if (M68K_CC_NE) goto loc_00DB48;
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x4), 0x0);
    if (M68K_CC_NE) goto loc_00DB48;
    func_table_call(0xe7f0);
loc_00DB48:
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x4), 0x0);
    if (M68K_CC_NE) goto loc_00DB54;
    func_table_call(0xe826);
loc_00DB54:
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x4), 0x0);
    if (M68K_CC_NE) goto loc_00DB60;
    func_table_call(0xe830);
loc_00DB60:
    func_table_call(0xe8ba);
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x4), 0x0);
    if (M68K_CC_NE) goto loc_00DB70;
    func_table_call(0xea12);
loc_00DB70:
    func_table_call(0xebd4);
    func_table_call(0xea42);
    func_table_call(0xeaa8);
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x0), 0x0);
    if (M68K_CC_NE) goto loc_00DB92;
    func_table_call(0xeae8);
    func_table_call(0xeb44);
    func_table_call(0xeb9e);
    goto loc_00DB96;
loc_00DB92:
    func_table_call(0xeb74);
loc_00DB96:
    func_table_call(0xedf4);
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x4), 0x0);
    if (M68K_CC_NE) goto loc_00DBAC;
    func_table_call(0xf2fa);
    func_table_call(0xeea6);
    goto loc_00DBB0;
loc_00DBAC:
    func_table_call(0xeebc);
loc_00DBB0:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00DBB6-$00DBBA  (1 instructions, 4 bytes) */
void jt_00DBB6(void) {
    { func_table_call(0xdbf0); return; }
    /* WARNING: function did not end with RTS */
}

/* $00DBEA-$00DBF0  (2 instructions, 6 bytes) */
void jt_00DBEA(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00DBF0-$00DC6C  (32 instructions, 124 bytes) */
void jt_00DBF0(void) {
    func_table_call(0x00F326);
    bus_write32(g_m68k.a[6] + 0x14a, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xdc))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], 0x400);
    M68K_ROL16(g_m68k.d[0], 0x5);
    M68K_AND16(g_m68k.d[0], 0x1f);
    g_m68k.a[0] = 0x00DCC4;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST8((uint8_t)g_m68k.d[0]);
    M68K_EXT16(g_m68k.d[0]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[6] + 0x150, _mv); M68K_TST16(_mv); }
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x14))); M68K_TST16((uint16_t)g_m68k.d[1]);
    if (M68K_CC_PL) goto loc_00DC20;
    M68K_NEG16(g_m68k.d[1]);
loc_00DC20:
    M68K_LSR16(g_m68k.d[1], 0x7);
    M68K_AND16(g_m68k.d[1], 0x1f);
    M68K_ADD16(g_m68k.d[1], g_m68k.d[1]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xde))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], 0x400);
    M68K_ROL16(g_m68k.d[0], 0x5);
    M68K_AND16(g_m68k.d[0], 0x1f);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[6] + 0x14a, _mv); M68K_TST16(_mv); }
    g_m68k.a[0] = 0x00DCE4;
    M68K_TST16(bus_read16(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[1]));
    if (M68K_CC_EQ) goto loc_00DC4C;
    func_table_call(0x00F354);
loc_00DC4C:
    M68K_ADD16(g_m68k.d[0], bus_read16(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[1]));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[6] + 0x14e, _mv); M68K_TST16(_mv); }
    M68K_ADD16(g_m68k.d[1], g_m68k.d[1]);
    g_m68k.a[0] = 0x00DD24;
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[1])); bus_write32(g_m68k.a[6] + 0x146, _mv); M68K_TST32(_mv); }
    { uint16_t _mv = (uint16_t)(0x5); bus_write16(g_m68k.a[6] + 0xe4, _mv); M68K_TST16(_mv); }
    { func_table_call(0xdda4); return; }
    /* WARNING: function did not end with RTS */
}

/* $00DDA4-$00DE6A  (52 instructions, 198 bytes) */
void jt_00DDA4(void) {
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x0), 0x0);
    if (M68K_CC_NE) goto loc_00DDB6;
    func_table_call(0xe4a6);
    func_table_call(0xedc6);
    goto loc_00DDBE;
loc_00DDB6:
    func_table_call(0xe4fc);
    func_table_call(0xedc6);
loc_00DDBE:
    func_table_call(0xe092);
    func_table_call(0xf360);
    func_table_call(0xe19e);
    func_table_call(0xe432);
    g_m68k.d[0] = bus_read32(g_m68k.a[6] + 0x146); M68K_TST32((uint32_t)g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[6] + 0x14a); uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[0]); bus_write32(_ea, _tmp); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x14e))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_CMP16(g_m68k.d[0], bus_read16(g_m68k.a[6] + 0x14a));
    if (M68K_CC_GT) goto loc_00DDF0;
    bus_write16(g_m68k.a[6] + 0x106, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[6] + 0xe4, _mv); M68K_TST16(_mv); }
    { func_table_call(0xdaa2); return; }
loc_00DDF0:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x14a))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_AND16(g_m68k.d[0], 0x1f);
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x150), 0xffff);
    if (M68K_CC_NE) goto loc_00DE0C;
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x20)); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_SUB16(g_m68k.d[0], g_m68k.d[1]);
    M68K_AND16(g_m68k.d[0], 0x1f);
loc_00DE0C:
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[6] + 0x54, _mv); M68K_TST16(_mv); }
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x0), 0x0);
    if (M68K_CC_NE) goto loc_00DE2C;
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x4), 0x0);
    if (M68K_CC_NE) goto loc_00DE28;
    func_table_call(0xe7f0);
    func_table_call(0xe826);
loc_00DE28:
    func_table_call(0xea42);
loc_00DE2C:
    func_table_call(0xeaa8);
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x0), 0x0);
    if (M68K_CC_NE) goto loc_00DE46;
    func_table_call(0xeae8);
    func_table_call(0xeb44);
    func_table_call(0xeb9e);
    goto loc_00DE4A;
loc_00DE46:
    func_table_call(0xeb74);
loc_00DE4A:
    func_table_call(0xedf4);
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x4), 0x0);
    if (M68K_CC_NE) goto loc_00DE60;
    func_table_call(0xf2fa);
    func_table_call(0xeea6);
    goto loc_00DE64;
loc_00DE60:
    func_table_call(0xeebc);
loc_00DE64:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00DE6A-$00DE74  (2 instructions, 10 bytes) */
void jt_00DE6A(void) {
    { uint16_t _mv = (uint16_t)(0x7); bus_write16(g_m68k.a[6] + 0xe4, _mv); M68K_TST16(_mv); }
    { func_table_call(0x00DE74); return; }
    /* WARNING: function did not end with RTS */
}

/* $00DE74-$00DE7A  (2 instructions, 6 bytes) */
void jt_00DE74(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00DE7A-$00DE84  (2 instructions, 10 bytes) */
void jt_00DE7A(void) {
    { uint16_t _mv = (uint16_t)(0x9); bus_write16(g_m68k.a[6] + 0xe4, _mv); M68K_TST16(_mv); }
    { func_table_call(0x00DE84); return; }
    /* WARNING: function did not end with RTS */
}

/* $00DE84-$00DEB4  (12 instructions, 48 bytes) */
void jt_00DE84(void) {
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0xa), 0x100);
    if (M68K_CC_LT) goto loc_00DE9A;
    { uint16_t _mv = (uint16_t)(0x100); bus_write16(g_m68k.a[6] + 0xa, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[6] + 0xe4, _mv); M68K_TST16(_mv); }
    goto loc_00DEAE;
loc_00DE9A:
    { uint32_t _ea = (g_m68k.a[6] + 0xa); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    func_table_call(0xeb9e);
    func_table_call(0xedc6);
    func_table_call(0xedf4);
    func_table_call(0xeea6);
loc_00DEAE:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}
