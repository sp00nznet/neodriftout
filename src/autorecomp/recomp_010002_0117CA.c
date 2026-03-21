/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $010002 - $0117CA */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

/* $010002-$01000C  (1 instructions, 10 bytes) */
void jt_010002(void) {
    { uint16_t _mv = (uint16_t)(bus_read16(0x103334)); bus_write16(0x1016C4, _mv); M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $010004-$010008  (1 instructions, 4 bytes) */
void jt_010004(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x34); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $010006-$01000A  (1 instructions, 4 bytes) */
void jt_010006(void) {
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[4] + 0x10 + (int16_t)(uint16_t)g_m68k.d[0])); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $010008-$01000C  (1 instructions, 4 bytes) */
void jt_010008(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xc4); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $01000A-$01000C  (1 instructions, 2 bytes) */
void jt_01000A(void) {
    { uint8_t _mv = (uint8_t)(g_m68k.d[4]); bus_write8(g_m68k.a[3], _mv); g_m68k.a[3] += 1; M68K_TST8(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $01000C-$010010  (1 instructions, 4 bytes) */
void jt_01000C(void) {
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    /* WARNING: function did not end with RTS */
}

/* $010010-$010014  (1 instructions, 4 bytes) */
void jt_010010(void) {
    M68K_CMP16(g_m68k.d[0], 0xa);
    /* WARNING: function did not end with RTS */
}

/* $010014-$01001C  (2 instructions, 8 bytes) */
void jt_010014(void) {
    if (M68K_CC_LE) { func_table_call(0x01001C); return; }
    bus_write32(0x1016D0, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $010018-$01001C  (1 instructions, 4 bytes) */
void jt_010018(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xd0); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $01001A-$01001C  (1 instructions, 2 bytes) */
void jt_01001A(void) {
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[0])); bus_write8(g_m68k.a[3], _mv); g_m68k.a[3] += 1; M68K_TST8(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $01001C-$010020  (2 instructions, 4 bytes) */
void jt_01001C(void) {
    M68K_TST16(g_m68k.d[0]);
    if (M68K_CC_MI) { func_table_call(0x010050); return; }
    /* WARNING: function did not end with RTS */
}

/* $010020-$01002E  (6 instructions, 14 bytes) */
void jt_010020(void) {
    M68K_CMP16(g_m68k.d[0], 0xa);
    if (M68K_CC_GT) { func_table_call(0x010050); return; }
    g_m68k.d[1] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[1]);
    M68K_SWAP(g_m68k.d[1]);
    M68K_TST16(g_m68k.d[1]);
    if (M68K_CC_NE) { func_table_call(0x010050); return; }
    /* WARNING: function did not end with RTS */
}

/* $01002E-$010038  (3 instructions, 10 bytes) */
void jt_01002E(void) {
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1016D0))); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_BSET(g_m68k.d[1], g_m68k.d[0]);
    if (M68K_CC_NE) { func_table_call(0x010050); return; }
    /* WARNING: function did not end with RTS */
}

/* $010038-$01003E  (1 instructions, 6 bytes) */
void jt_010038(void) {
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); bus_write16(0x1016D0, _mv); M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $01003C-$010044  (2 instructions, 8 bytes) */
void jt_01003C(void) {
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[0])); bus_write8(g_m68k.a[3], _mv); g_m68k.a[3] += 1; M68K_TST8(_mv); }
    g_m68k.a[0] = 0x026F30;
    /* WARNING: function did not end with RTS */
}

/* $010040-$01004A  (3 instructions, 10 bytes) */
void jt_010040(void) {
    M68K_OR8(g_m68k.d[2], 0x30);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST16((uint16_t)g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $01004A-$010050  (1 instructions, 6 bytes) */
void jt_01004A(void) {
    func_table_call(0x015256);
    /* WARNING: function did not end with RTS */
}

/* $010050-$010052  (1 instructions, 2 bytes) */
void jt_010050(void) {
    return;
}

/* $010056-$01005C  (2 instructions, 6 bytes) */
void jt_010056(void) {
    M68K_OR8(g_m68k.d[2], 0x1b);
    M68K_SUB16(g_m68k.d[3], 0x1);
    /* WARNING: function did not end with RTS */
}

/* $01005C-$010080  (11 instructions, 36 bytes) */
void jt_01005C(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(_postinc16(3))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_SUB16(g_m68k.d[0], 0x1);
    m68k_set_sr(m68k_get_sr() | 0x700);
    { uint16_t _mv = (uint16_t)(0x20); bus_write16(g_m68k.a[2] + 0x2, _mv); M68K_TST16(_mv); }
loc_01006A:
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(g_m68k.a[2] + (-0x2), _mv); M68K_TST16(_mv); }
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[3])); M68K_TST16((uint16_t)g_m68k.d[1]);
loc_010070:
    { uint16_t _mv = (uint16_t)(_postinc16(3)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[1]; _cnt--; g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_010070; } }
    M68K_ADD16(g_m68k.d[2], 0x1);
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[0]; _cnt--; g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_01006A; } }
    m68k_set_sr(m68k_get_sr() & 0xf8ff);
    /* WARNING: function did not end with RTS */
}

/* $010080-$010082  (1 instructions, 2 bytes) */
void jt_010080(void) {
    return;
}

/* $0100B8-$0100BE  (2 instructions, 6 bytes) */
void jt_0100B8(void) {
    m68k_set_sr(m68k_get_sr() & 0xf8ff);
    return;
}

/* $0100BE-$0100C4  (1 instructions, 6 bytes) */
void sub_0100BE(void) {
    g_m68k.a[3] = 0x0277F2;
    /* WARNING: function did not end with RTS */
}

/* $0100C0-$0100C8  (2 instructions, 8 bytes) */
void jt_0100C0(void) {
    M68K_OR8(g_m68k.d[2], 0xf2);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x711a)); M68K_TST16((uint16_t)g_m68k.d[2]);
    /* WARNING: function did not end with RTS */
}

/* $0100C8-$0100D0  (2 instructions, 8 bytes) */
void jt_0100C8(void) {
    func_table_call(0x10052);
    func_table_call(0x100d2);
    /* WARNING: function did not end with RTS */
}

/* $0100D0-$0100D2  (1 instructions, 2 bytes) */
void jt_0100D0(void) {
    return;
}

/* $0100D2-$010104  (12 instructions, 50 bytes) */
void sub_0100D2(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x101666))); M68K_TST16((uint16_t)g_m68k.d[0]);
    if (M68K_CC_PL) goto loc_0100DC;
    M68K_NEG16(g_m68k.d[0]);
loc_0100DC:
    g_m68k.a[0] = 0x027316;
    M68K_LSR16(g_m68k.d[0], 0x4);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0])); bus_write32(0x1016D8, _mv); M68K_TST32(_mv); }
    g_m68k.a[0] = 0x027296;
    g_m68k.a[1] = 0x027716;
    g_m68k.d[0] = (uint32_t)(int32_t)(int8_t)(0x0); M68K_TST32(g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(0x1016D8))); M68K_TST8((uint8_t)g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $010100-$01014C  (21 instructions, 76 bytes) */
void jt_010100(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xd8); bus_write8(_ea, _tmp); }
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.a[3] = bus_read32(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x7059)); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x10052);
    g_m68k.d[0] = (uint32_t)(int32_t)(int8_t)(0x0); M68K_TST32(g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(0x1016D9))); M68K_TST8((uint8_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.a[3] = bus_read32(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x7099)); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x10052);
    g_m68k.d[0] = (uint32_t)(int32_t)(int8_t)(0x0); M68K_TST32(g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(0x1016DA))); M68K_TST8((uint8_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.a[3] = bus_read32(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x70d9)); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x10052);
    return;
}

/* $01014C-$01018E  (24 instructions, 66 bytes) */
void sub_01014C(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[1]);
    M68K_TST16(g_m68k.d[3]);
    if (M68K_CC_MI) goto loc_01016C;
    M68K_TST16(g_m68k.d[2]);
    if (M68K_CC_MI) goto loc_01015E;
    func_table_call(0x1018e);
    goto loc_010188;
loc_01015E:
    M68K_NEG16(g_m68k.d[2]);
    func_table_call(0x1018e);
    M68K_NEG16(g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], 0x80);
    goto loc_010188;
loc_01016C:
    M68K_NEG16(g_m68k.d[3]);
    M68K_TST16(g_m68k.d[2]);
    if (M68K_CC_PL) goto loc_01017E;
    M68K_NEG16(g_m68k.d[2]);
    func_table_call(0x1018e);
    M68K_ADD16(g_m68k.d[0], 0x80);
    goto loc_010188;
loc_01017E:
    func_table_call(0x1018e);
    M68K_NEG16(g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], 0x100);
loc_010188:
    g_m68k.d[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}

/* $010C42-$010D7E  (79 instructions, 316 bytes) */
void jt_010C42(void) {
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3c)); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x3c3d)); M68K_TST16((uint16_t)g_m68k.d[6]);
    /* WARNING: function did not end with RTS */
}

/* $010DE2-$010E10  (14 instructions, 46 bytes) */
void sub_010DE2(void) {
    g_m68k.a[7] -= 2; bus_write16(g_m68k.a[7], g_m68k.d[1]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(0x10FDAD))); M68K_TST8((uint8_t)g_m68k.d[1]);
    M68K_CMP16(g_m68k.d[0], 0x0);
    if (M68K_CC_NE) goto loc_010DF8;
    M68K_AND8(g_m68k.d[1], 0x2);
    goto loc_010DFC;
loc_010DF8:
    M68K_AND8(g_m68k.d[1], 0x8);
loc_010DFC:
    M68K_TST8(g_m68k.d[1]);
    if (M68K_CC_EQ) goto loc_010E06;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    goto loc_010E0A;
loc_010E06:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
loc_010E0A:
    g_m68k.d[1] = (uint32_t)(int32_t)(int16_t)bus_read16(g_m68k.a[7]); g_m68k.a[7] += 2;
    return;
}

/* $010E10-$010E36  (11 instructions, 38 bytes) */
void sub_010E10(void) {
    M68K_CMP16(g_m68k.d[0], 0x0);
    if (M68K_CC_NE) goto loc_010E1E;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(0x10FD96))); M68K_TST8((uint8_t)g_m68k.d[0]);
    goto loc_010E24;
loc_010E1E:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(0x10FD9C))); M68K_TST8((uint8_t)g_m68k.d[0]);
loc_010E24:
    M68K_AND8(g_m68k.d[0], 0x10);
    if (M68K_CC_EQ) goto loc_010E30;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    goto loc_010E34;
loc_010E30:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
loc_010E34:
    return;
}

/* $010E36-$010E5C  (11 instructions, 38 bytes) */
void sub_010E36(void) {
    M68K_CMP16(g_m68k.d[0], 0x0);
    if (M68K_CC_NE) goto loc_010E44;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(0x10FD97))); M68K_TST8((uint8_t)g_m68k.d[0]);
    goto loc_010E4A;
loc_010E44:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(0x10FD9D))); M68K_TST8((uint8_t)g_m68k.d[0]);
loc_010E4A:
    M68K_AND8(g_m68k.d[0], 0x10);
    if (M68K_CC_EQ) goto loc_010E56;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    goto loc_010E5A;
loc_010E56:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
loc_010E5A:
    return;
}

/* $010E5C-$010E82  (11 instructions, 38 bytes) */
void sub_010E5C(void) {
    M68K_CMP16(g_m68k.d[0], 0x0);
    if (M68K_CC_NE) goto loc_010E6A;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(0x10FD96))); M68K_TST8((uint8_t)g_m68k.d[0]);
    goto loc_010E70;
loc_010E6A:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(0x10FD9C))); M68K_TST8((uint8_t)g_m68k.d[0]);
loc_010E70:
    M68K_AND8(g_m68k.d[0], 0x20);
    if (M68K_CC_EQ) goto loc_010E7C;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    goto loc_010E80;
loc_010E7C:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
loc_010E80:
    return;
}

/* $010E82-$010EA8  (11 instructions, 38 bytes) */
void sub_010E82(void) {
    M68K_CMP16(g_m68k.d[0], 0x0);
    if (M68K_CC_NE) goto loc_010E90;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(0x10FD97))); M68K_TST8((uint8_t)g_m68k.d[0]);
    goto loc_010E96;
loc_010E90:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(0x10FD9D))); M68K_TST8((uint8_t)g_m68k.d[0]);
loc_010E96:
    M68K_AND8(g_m68k.d[0], 0x20);
    if (M68K_CC_EQ) goto loc_010EA2;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    goto loc_010EA6;
loc_010EA2:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
loc_010EA6:
    return;
}

/* $010EF4-$010F18  (10 instructions, 36 bytes) */
void sub_010EF4(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    g_m68k.a[1] = 0x1016DA;
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); bus_write8(0x1016DE, _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[1]); bus_write8(0x1016E0, _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); bus_write8(g_m68k.a[1], _mv); g_m68k.a[1] += 1; M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); bus_write8(g_m68k.a[1], _mv); g_m68k.a[1] += 1; M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); bus_write8(g_m68k.a[1], _mv); g_m68k.a[1] += 1; M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); bus_write8(g_m68k.a[1], _mv); M68K_TST8(_mv); }
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}

/* $010F18-$010F90  (32 instructions, 120 bytes) */
void sub_010F18(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[1]);
    M68K_CMP16(bus_read16(0x1011FC), 0x1);
    if (M68K_CC_EQ) goto loc_010F36;
    g_m68k.a[2] = 0x10FD96;
    g_m68k.a[3] = 0x10FD97;
    goto loc_010F42;
loc_010F36:
    g_m68k.a[2] = 0x10FD9C;
    g_m68k.a[3] = 0x10FD9D;
loc_010F42:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    g_m68k.a[4] = 0x1016DA;
loc_010F4E:
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(0x10f90 + (int16_t)(uint16_t)g_m68k.d[3]))); M68K_TST8((uint8_t)g_m68k.d[1]);
    if (M68K_CC_MI) goto loc_010F8A;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[3]))); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_AND16(g_m68k.d[2], g_m68k.d[1]);
    if (M68K_CC_EQ) goto loc_010F6C;
    { uint8_t _mv = (uint8_t)(bus_read8(0x1016DE)); bus_write8(g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.d[3], _mv); M68K_TST8(_mv); }
    M68K_OR16(g_m68k.d[0], g_m68k.d[1]);
    goto loc_010F86;
loc_010F6C:
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[2]))); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_AND16(g_m68k.d[2], g_m68k.d[1]);
    if (M68K_CC_EQ) goto loc_010F86;
    { uint32_t _ea = (g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.d[3]); uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, 0x1); bus_write8(_ea, _tmp); }
    if (M68K_CC_NE) goto loc_010F86;
    { uint8_t _mv = (uint8_t)(bus_read8(0x1016E0)); bus_write8(g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.d[3], _mv); M68K_TST8(_mv); }
    M68K_OR16(g_m68k.d[0], g_m68k.d[1]);
loc_010F86:
    M68K_ADD16(g_m68k.d[3], 0x1);
    goto loc_010F4E;
loc_010F8A:
    g_m68k.d[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}

/* $010F96-$010FBC  (9 instructions, 38 bytes) */
void sub_010F96(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[7]);
    g_m68k.a[0] = 0x103610;
    { uint32_t _mv = (uint32_t)(g_m68k.a[0]); bus_write32(0x1016E2, _mv); M68K_TST32(_mv); }
    g_m68k.a[1] = 0x010FBC;
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(0x3)); M68K_TST16((uint16_t)g_m68k.d[7]);
loc_010FB0:
    { uint32_t _mv = (uint32_t)(_postinc32(1)); bus_write32(g_m68k.a[0], _mv); g_m68k.a[0] += 4; M68K_TST32(_mv); }
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[7]; _cnt--; g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_010FB0; } }
    g_m68k.d[7] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}

/* $010FCC-$011020  (20 instructions, 84 bytes) */
void sub_010FCC(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], 0xf);
    M68K_ASR16(g_m68k.d[0], 0x4);
    M68K_ADD16(g_m68k.d[0], 0x1);
    g_m68k.a[0] = bus_read32(0x1016E2);
loc_010FDE:
    M68K_CMP16(bus_read16(g_m68k.a[0] + 0x0), 0x1);
    if (M68K_CC_NE) goto loc_011006;
    M68K_CMP16(bus_read16(g_m68k.a[0] + 0x8), 0x0);
    if (M68K_CC_NE) goto loc_011000;
    g_m68k.a[0] = 0x0;
    { func_table_call(0x01109C); return; }
    goto loc_011004;
loc_011000:
    g_m68k.a[0] = bus_read32(g_m68k.a[0] + 0x8);
loc_011004:
    goto loc_010FDE;
loc_011006:
    M68K_CMP16(g_m68k.d[0], bus_read16(g_m68k.a[0] + 0x2));
    if (M68K_CC_GT) { func_table_call(0x011078); return; }
    M68K_CMP16(g_m68k.d[0], bus_read16(g_m68k.a[0] + 0x2));
    if (M68K_CC_NE) { func_table_call(0x011028); return; }
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(g_m68k.a[0] + 0x0, _mv); M68K_TST16(_mv); }
    g_m68k.a[0] = (g_m68k.a[0] + 0x10);
    /* WARNING: function did not end with RTS */
}

/* $011020-$0110A2  (32 instructions, 130 bytes) */
void jt_011020(void) {
    goto loc_01109C;
    goto loc_011074;
loc_011028:
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(g_m68k.a[0] + 0x0, _mv); M68K_TST16(_mv); }
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[0] + 0x2))); M68K_TST16((uint16_t)g_m68k.d[1]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[0] + 0x2, _mv); M68K_TST16(_mv); }
    M68K_SUB16(g_m68k.d[1], g_m68k.d[0]);
    g_m68k.a[1] = g_m68k.a[0];
    M68K_LSL16(g_m68k.d[0], 0x4);
    M68K_AND32(g_m68k.d[0], 0xffff);
    g_m68k.a[1] += g_m68k.d[0];
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[1] + 0x0, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); bus_write16(g_m68k.a[1] + 0x2, _mv); M68K_TST16(_mv); }
    { uint32_t _mv = (uint32_t)(g_m68k.a[0]); bus_write32(g_m68k.a[1] + 0x4, _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[0] + 0x8)); bus_write32(g_m68k.a[1] + 0x8, _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(g_m68k.a[1]); bus_write32(g_m68k.a[0] + 0x8, _mv); M68K_TST32(_mv); }
    M68K_TST32(bus_read32(g_m68k.a[1] + 0x8));
    if (M68K_CC_EQ) goto loc_01106C;
    g_m68k.a[2] = bus_read32(g_m68k.a[1] + 0x8);
    { uint32_t _mv = (uint32_t)(g_m68k.a[1]); bus_write32(g_m68k.a[2] + 0x4, _mv); M68K_TST32(_mv); }
loc_01106C:
    g_m68k.a[0] = (g_m68k.a[0] + 0x10);
    goto loc_01109C;
loc_011074:
    goto loc_011098;
loc_011078:
    M68K_CMP16(bus_read16(g_m68k.a[0] + 0x8), 0x0);
    if (M68K_CC_NE) goto loc_011090;
    g_m68k.a[0] = 0x0;
    goto loc_01109C;
    goto loc_011098;
loc_011090:
    g_m68k.a[0] = bus_read32(g_m68k.a[0] + 0x8);
    { func_table_call(0x010FDE); return; }
loc_011098:
    { func_table_call(0x010FDE); return; }
loc_01109C:
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}

/* $0110A2-$011120  (30 instructions, 126 bytes) */
void sub_0110A2(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    g_m68k.a[0] = (g_m68k.a[0] + (-0x10));
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[0] + 0x0, _mv); M68K_TST16(_mv); }
    M68K_TST32(bus_read32(g_m68k.a[0] + 0x4));
    if (M68K_CC_EQ) goto loc_0110E6;
    g_m68k.a[1] = bus_read32(g_m68k.a[0] + 0x4);
    M68K_CMP16(bus_read16(g_m68k.a[1] + 0x0), 0x0);
    if (M68K_CC_NE) goto loc_0110E6;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[0] + 0x2))); M68K_TST16((uint16_t)g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[1] + 0x2); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[0]); bus_write16(_ea, _tmp); }
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[0] + 0x8)); bus_write32(g_m68k.a[1] + 0x8, _mv); M68K_TST32(_mv); }
    M68K_TST32(bus_read32(g_m68k.a[0] + 0x8));
    if (M68K_CC_EQ) goto loc_0110E4;
    g_m68k.a[0] = bus_read32(g_m68k.a[0] + 0x8);
    { uint32_t _mv = (uint32_t)(g_m68k.a[1]); bus_write32(g_m68k.a[0] + 0x4, _mv); M68K_TST32(_mv); }
loc_0110E4:
    g_m68k.a[0] = g_m68k.a[1];
loc_0110E6:
    M68K_TST32(bus_read32(g_m68k.a[0] + 0x8));
    if (M68K_CC_EQ) goto loc_01111A;
    g_m68k.a[1] = bus_read32(g_m68k.a[0] + 0x8);
    M68K_CMP16(bus_read16(g_m68k.a[1] + 0x0), 0x0);
    if (M68K_CC_NE) goto loc_01111A;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[1] + 0x2))); M68K_TST16((uint16_t)g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[0] + 0x2); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[0]); bus_write16(_ea, _tmp); }
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[1] + 0x8)); bus_write32(g_m68k.a[0] + 0x8, _mv); M68K_TST32(_mv); }
    M68K_TST32(bus_read32(g_m68k.a[1] + 0x8));
    if (M68K_CC_EQ) goto loc_01111A;
    g_m68k.a[1] = bus_read32(g_m68k.a[1] + 0x8);
    { uint32_t _mv = (uint32_t)(g_m68k.a[0]); bus_write32(g_m68k.a[1] + 0x4, _mv); M68K_TST32(_mv); }
loc_01111A:
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}

/* $011120-$011190  (34 instructions, 112 bytes) */
void sub_011120(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[1]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0xffff)); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0xffff)); M68K_TST16((uint16_t)g_m68k.d[3]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[1]))); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.a[3] = 0x1016E6;
    g_m68k.a[1] = g_m68k.a[3];
loc_011136:
    M68K_ADD16(g_m68k.d[3], 0x1);
    M68K_SUB16(g_m68k.d[1], 0xe10);
    if (M68K_CC_CC) goto loc_011136;
    M68K_ADD16(g_m68k.d[1], 0xe10);
loc_011142:
    M68K_ADD16(g_m68k.d[2], 0x1);
    M68K_SUB16(g_m68k.d[1], 0x3c);
    if (M68K_CC_CC) goto loc_011142;
    M68K_ADD16(g_m68k.d[1], 0x3c);
    M68K_ADD16(g_m68k.d[1], g_m68k.d[1]);
    M68K_ADD16(g_m68k.d[2], g_m68k.d[2]);
    M68K_ADD16(g_m68k.d[3], g_m68k.d[3]);
    g_m68k.a[2] = 0x011280;
    g_m68k.a[2] = (g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.d[3]);
    { uint8_t _mv = (uint8_t)(_postinc8(2)); bus_write8(g_m68k.a[1], _mv); g_m68k.a[1] += 1; M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(2)); bus_write8(g_m68k.a[1], _mv); g_m68k.a[1] += 1; M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(0x27); bus_write8(g_m68k.a[1], _mv); g_m68k.a[1] += 1; M68K_TST8(_mv); }
    g_m68k.a[2] = 0x011208;
    g_m68k.a[2] = (g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.d[2]);
    { uint8_t _mv = (uint8_t)(_postinc8(2)); bus_write8(g_m68k.a[1], _mv); g_m68k.a[1] += 1; M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(2)); bus_write8(g_m68k.a[1], _mv); g_m68k.a[1] += 1; M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(0x22); bus_write8(g_m68k.a[1], _mv); g_m68k.a[1] += 1; M68K_TST8(_mv); }
    g_m68k.a[2] = 0x011190;
    g_m68k.a[2] = (g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.d[1]);
    { uint8_t _mv = (uint8_t)(_postinc8(2)); bus_write8(g_m68k.a[1], _mv); g_m68k.a[1] += 1; M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(2)); bus_write8(g_m68k.a[1], _mv); g_m68k.a[1] += 1; M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(0x0); bus_write8(g_m68k.a[1], _mv); M68K_TST8(_mv); }
    g_m68k.d[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}

/* $0112F8-$01135E  (31 instructions, 102 bytes) */
void sub_0112F8(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[1]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0xffff)); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0xffff)); M68K_TST16((uint16_t)g_m68k.d[3]);
loc_011304:
    M68K_ADD16(g_m68k.d[3], 0x1);
    M68K_SUB16(g_m68k.d[1], 0xe10);
    if (M68K_CC_CC) goto loc_011304;
    M68K_ADD16(g_m68k.d[1], 0xe10);
loc_011310:
    M68K_ADD16(g_m68k.d[2], 0x1);
    M68K_SUB16(g_m68k.d[1], 0x3c);
    if (M68K_CC_CC) goto loc_011310;
    M68K_ADD16(g_m68k.d[1], 0x3c);
    M68K_ADD16(g_m68k.d[1], g_m68k.d[1]);
    M68K_ADD16(g_m68k.d[2], g_m68k.d[2]);
    M68K_ADD16(g_m68k.d[3], g_m68k.d[3]);
    g_m68k.a[2] = 0x01144E;
    g_m68k.a[2] = (g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.d[3]);
    { uint8_t _mv = (uint8_t)(_postinc8(2)); bus_write8(g_m68k.a[1], _mv); g_m68k.a[1] += 1; M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(2)); bus_write8(g_m68k.a[1], _mv); g_m68k.a[1] += 1; M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(0xa); bus_write8(g_m68k.a[1], _mv); g_m68k.a[1] += 1; M68K_TST8(_mv); }
    g_m68k.a[2] = 0x0113D6;
    g_m68k.a[2] = (g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.d[2]);
    { uint8_t _mv = (uint8_t)(_postinc8(2)); bus_write8(g_m68k.a[1], _mv); g_m68k.a[1] += 1; M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(2)); bus_write8(g_m68k.a[1], _mv); g_m68k.a[1] += 1; M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(0xb); bus_write8(g_m68k.a[1], _mv); g_m68k.a[1] += 1; M68K_TST8(_mv); }
    g_m68k.a[2] = 0x01135E;
    g_m68k.a[2] = (g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.d[1]);
    { uint8_t _mv = (uint8_t)(_postinc8(2)); bus_write8(g_m68k.a[1], _mv); g_m68k.a[1] += 1; M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(2)); bus_write8(g_m68k.a[1], _mv); g_m68k.a[1] += 1; M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(0x0); bus_write8(g_m68k.a[1], _mv); M68K_TST8(_mv); }
    g_m68k.d[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}

/* $0113FC-$011410  (5 instructions, 20 bytes) */
void jt_0113FC(void) {
    /* TODO $0113FC: movep.w $200(a1), d0  [01 09 02 00] */
    M68K_AND8(g_m68k.d[1], 0x2);
    M68K_AND8(g_m68k.d[3], 0x4);
    M68K_AND8(g_m68k.d[5], 0x6);
    M68K_AND8(g_m68k.d[7], 0x8);
    /* WARNING: function did not end with RTS */
}

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
