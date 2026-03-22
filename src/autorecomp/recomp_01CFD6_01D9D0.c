/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $01CFD6 - $01D9D0 */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

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

/* $01D834-$01D848  (9 instructions, 20 bytes) */
void jt_01D834(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    /* TODO $01D838: roxr.l d1, d3  [E2 B3] */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_LSL8(g_m68k.d[1], 0x1);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* TODO $01D840: roxr.l d1, d4  [E2 B4] */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_LSL32(g_m68k.d[5], 0x4);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $01D848-$01D858  (7 instructions, 16 bytes) */
void jt_01D848(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    /* TODO $01D84C: roxr.l d1, d3  [E2 B3] */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_ROL32(g_m68k.d[3], 0x4);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* TODO $01D854: roxr.l d1, d4  [E2 B4] */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $01D858-$01D85C  (2 instructions, 4 bytes) */
void jt_01D858(void) {
    M68K_ROL32(g_m68k.d[4], 0x4);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $01D85C-$01D870  (9 instructions, 20 bytes) */
void jt_01D85C(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    /* TODO $01D860: roxl.l #$4, d3  [E9 93] */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_ROL32(g_m68k.d[5], 0x4);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* TODO $01D868: roxl.l #$4, d4  [E9 94] */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_ROL32(g_m68k.d[6], 0x4);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $01D870-$01D884  (9 instructions, 20 bytes) */
void jt_01D870(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    /* TODO $01D874: roxl.l #$4, d5  [E9 95] */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_ROL32(g_m68k.d[7], 0x4);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_ROL16(g_m68k.d[3], g_m68k.d[4]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_LSL32(g_m68k.d[0], g_m68k.d[4]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $01D884-$01D898  (9 instructions, 20 bytes) */
void jt_01D884(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    /* TODO $01D888: roxl.l #$4, d5  [E9 95] */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_LSL32(g_m68k.d[4], g_m68k.d[4]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_ROL16(g_m68k.d[3], g_m68k.d[4]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_LSL32(g_m68k.d[5], g_m68k.d[4]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $01D898-$01D8AC  (9 instructions, 20 bytes) */
void jt_01D898(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_LSL32(g_m68k.d[1], g_m68k.d[4]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_LSL32(g_m68k.d[6], g_m68k.d[4]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_LSL32(g_m68k.d[2], g_m68k.d[4]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_LSL32(g_m68k.d[7], g_m68k.d[4]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $01D8AC-$01D8C0  (9 instructions, 20 bytes) */
void jt_01D8AC(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_LSL32(g_m68k.d[3], g_m68k.d[4]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* TODO $01D8B4: roxl.l d4, d0  [E9 B0] */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_LSL32(g_m68k.d[4], g_m68k.d[4]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* TODO $01D8BC: roxl.l d4, d1  [E9 B1] */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $01D8C0-$01D8D4  (9 instructions, 20 bytes) */
void jt_01D8C0(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_LSL32(g_m68k.d[5], g_m68k.d[4]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* TODO $01D8C8: roxl.l d4, d2  [E9 B2] */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_LSL32(g_m68k.d[6], g_m68k.d[4]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* TODO $01D8D0: roxl.l d4, d3  [E9 B3] */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $01D8D4-$01D8E8  (6 instructions, 20 bytes) */
void jt_01D8D4(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $01D8DC: roxl.l d4, d4  [E9 B4] */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $01D8E8-$01D8FC  (7 instructions, 20 bytes) */
void jt_01D8E8(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_LSL32(g_m68k.d[7], g_m68k.d[4]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* TODO $01D8F0: roxl.l d4, d5  [E9 B5] */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $01D8FC-$01D910  (9 instructions, 20 bytes) */
void jt_01D8FC(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_LSL32(g_m68k.d[0], g_m68k.d[4]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* TODO $01D904: roxl.l d4, d6  [E9 B6] */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_LSL32(g_m68k.d[1], g_m68k.d[4]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* TODO $01D90C: roxl.l d4, d7  [E9 B7] */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $01D910-$01D924  (9 instructions, 20 bytes) */
void jt_01D910(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_LSL32(g_m68k.d[2], g_m68k.d[4]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_ROL32(g_m68k.d[0], g_m68k.d[4]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_LSL32(g_m68k.d[3], g_m68k.d[4]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_ROL32(g_m68k.d[1], g_m68k.d[4]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $01D924-$01D938  (9 instructions, 20 bytes) */
void jt_01D924(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_ROL32(g_m68k.d[2], g_m68k.d[4]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_ROL32(g_m68k.d[5], g_m68k.d[4]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_ROL32(g_m68k.d[3], g_m68k.d[4]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_ROL32(g_m68k.d[6], g_m68k.d[4]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $01D938-$01D94C  (9 instructions, 20 bytes) */
void jt_01D938(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_LSR32(g_m68k.d[5], g_m68k.d[1]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_ROR32(g_m68k.d[1], g_m68k.d[1]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_LSR32(g_m68k.d[6], g_m68k.d[1]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_ROR32(g_m68k.d[2], g_m68k.d[1]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $01D94C-$01D960  (9 instructions, 20 bytes) */
void jt_01D94C(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_LSR32(g_m68k.d[7], g_m68k.d[1]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_ROR32(g_m68k.d[3], g_m68k.d[1]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* TODO $01D958: roxr.l d1, d0  [E2 B0] */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_ROR32(g_m68k.d[4], g_m68k.d[1]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $01D960-$01D974  (9 instructions, 20 bytes) */
void jt_01D960(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    /* TODO $01D964: roxr.l d1, d1  [E2 B1] */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_ROR32(g_m68k.d[5], g_m68k.d[1]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* TODO $01D96C: roxr.l d1, d2  [E2 B2] */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_ROR32(g_m68k.d[6], g_m68k.d[1]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $01D974-$01D984  (7 instructions, 16 bytes) */
void jt_01D974(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    /* TODO $01D978: roxr.l d1, d3  [E2 B3] */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_ROR32(g_m68k.d[7], g_m68k.d[1]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* TODO $01D980: roxr.l d1, d4  [E2 B4] */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $01D988-$01D990  (3 instructions, 8 bytes) */
void jt_01D988(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    /* TODO $01D98C: roxr.l d1, d5  [E2 B5] */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $01D99C-$01D9A4  (3 instructions, 8 bytes) */
void jt_01D99C(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    /* TODO $01D9A0: roxr.l d1, d7  [E2 B7] */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $01D9B0-$01D9C4  (9 instructions, 20 bytes) */
void jt_01D9B0(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_ROL32(g_m68k.d[4], g_m68k.d[4]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_ROL32(g_m68k.d[1], 0x4);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_LSL32(g_m68k.d[2], g_m68k.d[4]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_ROL32(g_m68k.d[7], g_m68k.d[4]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $01D9C4-$01D9D0  (5 instructions, 12 bytes) */
void jt_01D9C4(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    /* TODO $01D9C8: dc.w $e9c0  [E9 C0] */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* TODO $01D9CC: dc.w $e9c6  [E9 C6] */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}
