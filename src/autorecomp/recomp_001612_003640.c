/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $001612 - $003640 */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

/* $001612-$00161C  (4 instructions, 10 bytes) */
void jt_001612(void) {
    if (M68K_CC_NE) { func_table_call(0x001626); return; }
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[0] = bus_read32(0x1650 + (int16_t)(uint16_t)g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $00161C-$001626  (2 instructions, 10 bytes) */
void jt_00161C(void) {
    { uint16_t _mv = (uint16_t)(0x28); bus_write16(0x10045C, _mv); M68K_TST16(_mv); }
    { func_table_call(0x001634); return; }
    /* WARNING: function did not end with RTS */
}

/* $001626-$001634  (2 instructions, 14 bytes) */
void jt_001626(void) {
    g_m68k.a[0] = 0x0016C2;
    { uint16_t _mv = (uint16_t)(0x14); bus_write16(0x10045C, _mv); M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $001630-$001650  (7 instructions, 32 bytes) */
void jt_001630(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x5c); bus_write8(_ea, _tmp); }
loc_001634:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x70f5)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x9)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x300)); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x011A34);
    { uint32_t _ea = 0x10045A; uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, 0xffff); bus_write16(_ea, _tmp); }
    return;
}

/* $0016DE-$00174E  (24 instructions, 112 bytes) */
void sub_0016DE(void) {
    func_table_call(0x0120E0);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x01690E);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x12)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x17)); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.a[3] = 0x00174E;
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0xffff)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0x93)); M68K_TST16((uint16_t)g_m68k.d[3]);
    func_table_call(0x014AF0);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x10)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x1a)); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.a[3] = 0x001753;
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0xffff)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0x93)); M68K_TST16((uint16_t)g_m68k.d[3]);
    func_table_call(0x014AF0);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x10)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x1b)); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.a[3] = 0x001766;
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0xffff)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0x93)); M68K_TST16((uint16_t)g_m68k.d[3]);
    func_table_call(0x014AF0);
    func_table_call(0x0017E0);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00177C-$0017D6  (22 instructions, 90 bytes) */
void sub_00177C(void) {
    M68K_TST16(bus_read16(0x10041A));
    if (M68K_CC_EQ) goto loc_001794;
    func_table_call(0x0018A2);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    goto loc_0017D4;
loc_001794:
    g_m68k.d[0] = (uint32_t)(int32_t)(int8_t)(0x0); M68K_TST32(g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(0x10FDDA))); M68K_TST8((uint8_t)g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_LSR8(g_m68k.d[0], 0x4);
    M68K_AND16(g_m68k.d[1], 0xf);
    g_m68k.a[3] = 0x10045E;
    { uint8_t _mv = (uint8_t)(bus_read8(0x17d6 + (int16_t)(uint16_t)g_m68k.d[0])); bus_write8(g_m68k.a[3], _mv); g_m68k.a[3] += 1; M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(0x17d6 + (int16_t)(uint16_t)g_m68k.d[1])); bus_write8(g_m68k.a[3], _mv); g_m68k.a[3] += 1; M68K_TST8(_mv); }
    bus_write8(g_m68k.a[3], 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    g_m68k.a[3] = 0x10045E;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x13)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x18)); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0xffff)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0x93)); M68K_TST16((uint16_t)g_m68k.d[3]);
    func_table_call(0x014AF0);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
loc_0017D4:
    return;
}

/* $0017E0-$001802  (7 instructions, 34 bytes) */
void sub_0017E0(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x40)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x10)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x100)); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.a[3] = 0x18ba;
    func_table_call(0x012036);
    func_table_call(0x012202);
    { uint32_t _mv = (uint32_t)(g_m68k.a[0]); bus_write32(0x100462, _mv); M68K_TST32(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $001800-$0018A2  (35 instructions, 162 bytes) */
void jt_001800(void) {
    { uint32_t _ea = g_m68k.a[2]; uint16_t _tmp = bus_read16(_ea); M68K_SUB16(_tmp, 0x303c); bus_write16(_ea, _tmp); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x3c);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[2]);
    M68K_OR8(g_m68k.d[0], 0xb9);
    func_table_call(0x01225C);
    M68K_OR8(g_m68k.d[1], 0x5c);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x012256);
    g_m68k.a[3] = 0x001DFE;
    func_table_call(0x012270);
    func_table_call(0x012202);
    { uint32_t _mv = (uint32_t)(g_m68k.a[0]); bus_write32(0x100466, _mv); M68K_TST32(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x10)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x28)); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x01225C);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x012256);
    g_m68k.a[3] = 0x001BBA;
    func_table_call(0x012270);
    func_table_call(0x012202);
    { uint32_t _mv = (uint32_t)(g_m68k.a[0]); bus_write32(0x10046A, _mv); M68K_TST32(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x18)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0xc8)); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x01225C);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x012256);
    g_m68k.a[3] = 0x002302;
    func_table_call(0x012270);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x3)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x4)); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.a[3] = 0x01EC2E;
    func_table_call(0x014B38);
    func_table_call(0x01229E);
    return;
}

/* $0018A2-$0018BA  (6 instructions, 24 bytes) */
void sub_0018A2(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x2)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.a[1] = 0x100462;
loc_0018AC:
    g_m68k.a[0] = _postinc32(1);
    func_table_call(0x012252);
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[0]; _cnt--; g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_0018AC; } }
    return;
}

/* $001900-$001942  (30 instructions, 66 bytes) */
void jt_001900(void) {
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(7))); M68K_TST8((uint8_t)g_m68k.d[3]);
    M68K_BTST(bus_read8(g_m68k.a[7]), g_m68k.d[7]);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[1])); g_m68k.a[7] -= 1; bus_write8(g_m68k.a[7], _mv); M68K_TST8(_mv); }
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(7))); M68K_TST8((uint8_t)g_m68k.d[4]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(1))); M68K_TST8((uint8_t)g_m68k.d[2]);
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[6]))); M68K_TST8((uint8_t)g_m68k.d[7]);
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(6))); M68K_TST8((uint8_t)g_m68k.d[5]);
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(3))); M68K_TST8((uint8_t)g_m68k.d[4]);
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(2))); M68K_TST8((uint8_t)g_m68k.d[7]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(6))); M68K_TST8((uint8_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(5))); M68K_TST8((uint8_t)g_m68k.d[6]);
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(6))); M68K_TST8((uint8_t)g_m68k.d[7]);
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(6))); M68K_TST8((uint8_t)g_m68k.d[7]);
    /* TODO $00191A: movep.w $f1e(a7), d7  [0F 0F 0F 1E] */
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(6))); M68K_TST8((uint8_t)g_m68k.d[7]);
    { uint8_t _mv = (uint8_t)(_postinc8(2)); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[7]))); M68K_TST8((uint8_t)g_m68k.d[5]);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[7])); g_m68k.a[3] -= 1; bus_write8(g_m68k.a[3], _mv); M68K_TST8(_mv); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[3]))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[0])); g_m68k.a[1] -= 1; bus_write8(g_m68k.a[1], _mv); M68K_TST8(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[0]))); M68K_TST8((uint8_t)g_m68k.d[0]);
    /* TODO $00192C: movep.w $c1f(a4), d6  [0D 0C 0C 1F] */
    /* TODO $001930: movep.w $1506(a4), d6  [0D 0C 15 06] */
    M68K_BTST(bus_read8(g_m68k.a[4]), g_m68k.d[3]);
    { uint8_t _mv = (uint8_t)(_postinc8(6)); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[7]);
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(7))); M68K_TST8((uint8_t)g_m68k.d[4]);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[5])); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[7])); g_m68k.a[7] -= 1; bus_write8(g_m68k.a[7], _mv); M68K_TST8(_mv); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(1))); M68K_TST8((uint8_t)g_m68k.d[2]);
    /* WARNING: function did not end with RTS */
}

/* $001B00-$001B0C  (4 instructions, 12 bytes) */
void jt_001B00(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, 0x9); bus_write8(_ea, _tmp); }
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[7]);
    M68K_BTST(bus_read8(g_m68k.a[7]), g_m68k.d[6]);
    /* WARNING: function did not end with RTS */
}

/* $001D00-$001D0A  (4 instructions, 10 bytes) */
void jt_001D00(void) {
    /* TODO $001D00: dc.w $4b00  [4B 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $001D06: dc.w $f914  [F9 14] */
    /* TODO $001D08: dc.w $4b00  [4B 00] */
    /* WARNING: function did not end with RTS */
}

/* $001E00-$001E0A  (4 instructions, 10 bytes) */
void jt_001E00(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xde); bus_write8(_ea, _tmp); }
    /* TODO $001E04: dc.w $4d00  [4D 00] */
    /* TODO $001E06: dc.w $edee  [ED EE] */
    /* TODO $001E08: dc.w $4d00  [4D 00] */
    /* WARNING: function did not end with RTS */
}

/* $001F00-$001F02  (1 instructions, 2 bytes) */
void jt_001F00(void) {
    /* TODO $001F00: dc.w $4d00  [4D 00] */
    /* WARNING: function did not end with RTS */
}

/* $002100-$00213E  (31 instructions, 62 bytes) */
void jt_002100(void) {
    /* TODO $002100: dc.w $4d03  [4D 03] */
    /* TODO $002102: dc.w $edea  [ED EA] */
    /* TODO $002104: dc.w $4d00  [4D 00] */
    /* TODO $002106: dc.w $edfa  [ED FA] */
    /* TODO $002108: dc.w $4d00  [4D 00] */
    M68K_LSR8(g_m68k.d[2], 0x7);
    /* TODO $00210C: dc.w $4d00  [4D 00] */
    M68K_ROR8(g_m68k.d[2], 0x7);
    /* TODO $002110: dc.w $4d00  [4D 00] */
    M68K_LSR8(g_m68k.d[2], g_m68k.d[7]);
    /* TODO $002114: dc.w $4d00  [4D 00] */
    M68K_ROR8(g_m68k.d[2], g_m68k.d[7]);
    /* TODO $002118: dc.w $4d00  [4D 00] */
    M68K_LSR16(g_m68k.d[2], 0x7);
    /* TODO $00211C: dc.w $4d00  [4D 00] */
    M68K_ROR16(g_m68k.d[2], 0x7);
    /* TODO $002120: dc.w $4d00  [4D 00] */
    /* TODO $002122: roxr.w #$7, d5  [EE 55] */
    /* TODO $002124: dc.w $4d03  [4D 03] */
    M68K_ASR16(g_m68k.d[5], 0x7);
    /* TODO $002128: dc.w $4d03  [4D 03] */
    /* TODO $00212A: roxr.l #$7, d5  [EE 35] */
    /* TODO $00212C: dc.w $4d03  [4D 03] */
    M68K_ASR8(g_m68k.d[5], g_m68k.d[7]);
    /* TODO $002130: dc.w $4d03  [4D 03] */
    /* TODO $002132: roxr.b #$7, d5  [EE 15] */
    /* TODO $002134: dc.w $4d03  [4D 03] */
    M68K_ASR8(g_m68k.d[5], 0x7);
    /* TODO $002138: dc.w $4d03  [4D 03] */
    /* TODO $00213A: dc.w $edf5  [ED F5] */
    /* TODO $00213C: dc.w $4d03  [4D 03] */
    /* WARNING: function did not end with RTS */
}

/* $002200-$00223E  (31 instructions, 62 bytes) */
void jt_002200(void) {
    /* TODO $002200: dc.w $4d03  [4D 03] */
    M68K_ROR16(g_m68k.d[5], g_m68k.d[7]);
    /* TODO $002204: dc.w $4d03  [4D 03] */
    M68K_ROR16(g_m68k.d[1], g_m68k.d[7]);
    /* TODO $002208: dc.w $4d03  [4D 03] */
    /* TODO $00220A: roxr.w d7, d5  [EE 75] */
    /* TODO $00220C: dc.w $4d03  [4D 03] */
    /* TODO $00220E: roxr.w d7, d1  [EE 71] */
    /* TODO $002210: dc.w $4d03  [4D 03] */
    M68K_LSR16(g_m68k.d[5], g_m68k.d[7]);
    /* TODO $002214: dc.w $4d03  [4D 03] */
    M68K_LSR16(g_m68k.d[1], g_m68k.d[7]);
    /* TODO $002218: dc.w $4d03  [4D 03] */
    M68K_ASR16(g_m68k.d[5], g_m68k.d[7]);
    /* TODO $00221C: dc.w $4d03  [4D 03] */
    M68K_ASR16(g_m68k.d[1], g_m68k.d[7]);
    /* TODO $002220: dc.w $4d03  [4D 03] */
    /* TODO $002222: roxr.w #$7, d1  [EE 51] */
    /* TODO $002224: dc.w $4d03  [4D 03] */
    M68K_ASR16(g_m68k.d[1], 0x7);
    /* TODO $002228: dc.w $4d03  [4D 03] */
    /* TODO $00222A: roxr.l #$7, d1  [EE 31] */
    /* TODO $00222C: dc.w $4d03  [4D 03] */
    M68K_ASR8(g_m68k.d[1], g_m68k.d[7]);
    /* TODO $002230: dc.w $4d03  [4D 03] */
    /* TODO $002232: roxr.b #$7, d1  [EE 11] */
    /* TODO $002234: dc.w $4d03  [4D 03] */
    M68K_ASR8(g_m68k.d[1], 0x7);
    /* TODO $002238: dc.w $4d03  [4D 03] */
    /* TODO $00223A: dc.w $edf1  [ED F1] */
    /* TODO $00223C: dc.w $4d03  [4D 03] */
    /* WARNING: function did not end with RTS */
}

/* $002336-$00240E  (41 instructions, 216 bytes) */
void sub_002336(void) {
    M68K_TST16(bus_read16(0x10041A));
    if (M68K_CC_EQ) goto loc_002346;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
loc_002346:
    func_table_call(0x000A26);
    func_table_call(0x0120E0);
    func_table_call(0x0133FA);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    func_table_call(0x011F22);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    func_table_call(0x003070); /* loc_003070 */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x10042A))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[6] = 0x00240E;
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[6] + 0 + (int16_t)(uint16_t)g_m68k.d[0])); bus_write32(0x100472, _mv); M68K_TST32(_mv); }
    bus_write16(0x10048A, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    bus_write16(0x10047C, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    bus_write16(0x100480, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    bus_write16(0x100484, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint32_t _mv = (uint32_t)(0x600000); bus_write32(0x100476, _mv); M68K_TST32(_mv); }
    g_m68k.a[6] = bus_read32(0x100472);
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[6] + 0x16)); bus_write16(0x100482, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[6] + 0x18)); bus_write16(0x100484, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[6] + 0xc)); bus_write16(0x10047A, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[6] + 0x1a)); bus_write16(0x100486, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[6] + 0x1c)); bus_write16(0x100488, _mv); M68K_TST16(_mv); }
    M68K_CMP16(bus_read16(0x10036E), 0x5);
    if (M68K_CC_LS) goto loc_0023E4;
    if (M68K_CC_PL) goto loc_0023E4;
    bus_write16(0x10036E, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
loc_0023E4:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x0028C6); /* loc_0028C6 */
    func_table_call(0x0028EC); /* loc_0028EC */
    g_m68k.a[6] = 0x003408;
    g_m68k.a[5] = bus_read32(0x10046E);
    g_m68k.a[0] = bus_read32(g_m68k.a[5]);
    func_table_call(0x002928); /* sub_002928 */
    func_table_call(0x01229E);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $002416-$002450  (14 instructions, 58 bytes) */
void sub_002416(void) {
    M68K_TST16(bus_read16(0x10041A));
    if (M68K_CC_EQ) goto loc_00243E;
    func_table_call(0x0120E0);
    func_table_call(0x0133FA);
    g_m68k.a[0] = bus_read32(0x10046E);
    func_table_call(0x0110A2);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
loc_00243E:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x10048A))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[0] = bus_read32(0x2450 + (int16_t)(uint16_t)g_m68k.d[0]);
    func_table_call(g_m68k.a[0]);
    return;
}

/* $002488-$0024CA  (14 instructions, 66 bytes) */
void jt_002488(void) {
    g_m68k.a[6] = bus_read32(0x100472);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x0))); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x002FB4); /* loc_002FB4 */
    M68K_TST16(g_m68k.d[0]);
    if (M68K_CC_EQ) goto loc_0024C4;
    { uint32_t _ea = 0x10047A; uint16_t _tmp = bus_read16(_ea); M68K_SUB16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    if (M68K_CC_PL) goto loc_0024C4;
    g_m68k.a[6] = bus_read32(0x100472);
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[6] + 0xe)); bus_write16(0x10047A, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    func_table_call(0x011F22);
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(0x10048A, _mv); M68K_TST16(_mv); }
loc_0024C4:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $0024CA-$002508  (13 instructions, 62 bytes) */
void jt_0024CA(void) {
    g_m68k.a[6] = bus_read32(0x100472);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x2))); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x003018); /* loc_003018 */
    M68K_TST16(g_m68k.d[0]);
    if (M68K_CC_EQ) goto loc_002502;
    { uint32_t _ea = 0x10047A; uint16_t _tmp = bus_read16(_ea); M68K_SUB16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    if (M68K_CC_PL) goto loc_002502;
    func_table_call(0x0120E0);
    g_m68k.a[0] = bus_read32(0x10046E);
    func_table_call(0x0110A2);
    { uint16_t _mv = (uint16_t)(0x2); bus_write16(0x10048A, _mv); M68K_TST16(_mv); }
loc_002502:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $002508-$002558  (17 instructions, 80 bytes) */
void jt_002508(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    func_table_call(0x011F22);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    func_table_call(0x003070); /* loc_003070 */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x0028C6); /* loc_0028C6 */
    func_table_call(0x0028EC); /* loc_0028EC */
    g_m68k.a[6] = 0x003410;
    g_m68k.a[5] = bus_read32(0x10046E);
    g_m68k.a[0] = bus_read32(g_m68k.a[5]);
    func_table_call(0x002928);
    g_m68k.a[6] = bus_read32(0x100472);
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[6] + 0x10)); bus_write16(0x10047A, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x3); bus_write16(0x10048A, _mv); M68K_TST16(_mv); }
    func_table_call(0x01229E);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $002558-$00259A  (14 instructions, 66 bytes) */
void jt_002558(void) {
    g_m68k.a[6] = bus_read32(0x100472);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x4))); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x002FB4); /* loc_002FB4 */
    M68K_TST16(g_m68k.d[0]);
    if (M68K_CC_EQ) goto loc_002594;
    { uint32_t _ea = 0x10047A; uint16_t _tmp = bus_read16(_ea); M68K_SUB16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    if (M68K_CC_PL) goto loc_002594;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    func_table_call(0x011F22);
    g_m68k.a[6] = bus_read32(0x100472);
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[6] + 0x12)); bus_write16(0x10047A, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x4); bus_write16(0x10048A, _mv); M68K_TST16(_mv); }
loc_002594:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00259A-$0025D8  (13 instructions, 62 bytes) */
void jt_00259A(void) {
    g_m68k.a[6] = bus_read32(0x100472);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x6))); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x003018); /* loc_003018 */
    M68K_TST16(g_m68k.d[0]);
    if (M68K_CC_EQ) goto loc_0025D2;
    { uint32_t _ea = 0x10047A; uint16_t _tmp = bus_read16(_ea); M68K_SUB16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    if (M68K_CC_PL) goto loc_0025D2;
    func_table_call(0x0120E0);
    g_m68k.a[0] = bus_read32(0x10046E);
    func_table_call(0x0110A2);
    { uint16_t _mv = (uint16_t)(0x5); bus_write16(0x10048A, _mv); M68K_TST16(_mv); }
loc_0025D2:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $0025D8-$0025F4  (6 instructions, 28 bytes) */
void jt_0025D8(void) {
    func_table_call(0x003462);
    M68K_CMP16(g_m68k.d[0], 0x0);
    if (M68K_CC_NE) goto loc_0025EE;
    { uint16_t _mv = (uint16_t)(0x6); bus_write16(0x10048A, _mv); M68K_TST16(_mv); }
loc_0025EE:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $0025F4-$002610  (6 instructions, 28 bytes) */
void jt_0025F4(void) {
    func_table_call(0x0034D8);
    M68K_CMP16(g_m68k.d[0], 0x0);
    if (M68K_CC_NE) goto loc_00260A;
    { uint16_t _mv = (uint16_t)(0x7); bus_write16(0x10048A, _mv); M68K_TST16(_mv); }
loc_00260A:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $002610-$0026B8  (40 instructions, 168 bytes) */
void jt_002610(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    func_table_call(0x011F22);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    func_table_call(0x003070); /* loc_003070 */
    func_table_call(0x00338C); /* loc_00338C */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x4)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x0028C6); /* loc_0028C6 */
    func_table_call(0x0028EC); /* loc_0028EC */
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
    func_table_call(0x002FB4); /* loc_002FB4 */
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

/* $0028A8-$002900  (20 instructions, 88 bytes) */
void jt_0028A8(void) {
    func_table_call(0x0120E0);
    func_table_call(0x0133FA);
    g_m68k.a[0] = bus_read32(0x10046E);
    func_table_call(0x0110A2);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
loc_0028C6:
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    func_table_call(0x010F96);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    bus_write32(0x10046E, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    func_table_call(0x010FCC);
    { uint32_t _mv = (uint32_t)(g_m68k.a[0]); bus_write32(0x10046E, _mv); M68K_TST32(_mv); }
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
loc_0028EC:
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

/* $002928-$00302A  (87 instructions, 1794 bytes) */
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
loc_002FB4:
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
    func_table_call(0x003070); /* loc_003070 */
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
loc_003018:
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint32_t _ea = 0x10047C; uint16_t _tmp = bus_read16(_ea); M68K_SUB16(_tmp, g_m68k.d[2]); bus_write16(_ea, _tmp); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x10047C))); M68K_TST16((uint16_t)g_m68k.d[2]);
    /* WARNING: function did not end with RTS */
}

/* $00302A-$00308C  (14 instructions, 98 bytes) */
void jt_00302A(void) {
    if (M68K_CC_PL) goto loc_00303A;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(0x10047C, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
loc_00303A:
    func_table_call(0x003070); /* loc_003070 */
    g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
loc_003070:
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
