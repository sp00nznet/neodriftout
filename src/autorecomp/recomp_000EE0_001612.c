/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $000EE0 - $001612 */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

/* $000EE0-$000EFC  (6 instructions, 28 bytes) */
void jt_000EE0(void) {
    func_table_call(0x0014F6);
    func_table_call(0x0016DE);
    M68K_CMP16(g_m68k.d[0], 0x0);
    if (M68K_CC_NE) goto loc_000EFA;
    { uint16_t _mv = (uint16_t)(0xd); bus_write16(0x100426, _mv); M68K_TST16(_mv); }
loc_000EFA:
    return;
}

/* $000EFC-$000F1E  (7 instructions, 34 bytes) */
void jt_000EFC(void) {
    func_table_call(0x0014F6);
    func_table_call(0x00177C);
    M68K_CMP16(g_m68k.d[0], 0x0);
    if (M68K_CC_NE) { func_table_call(0x000F26); return; }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1011FC))); M68K_TST16((uint16_t)g_m68k.d[1]);
    func_table_call(0x0009D6);
    /* WARNING: function did not end with RTS */
}

/* $000F1E-$000F28  (2 instructions, 10 bytes) */
void jt_000F1E(void) {
    { uint16_t _mv = (uint16_t)(0x2); bus_write16(0x100426, _mv); M68K_TST16(_mv); }
loc_000F26:
    return;
}

/* $000F28-$000F3E  (5 instructions, 22 bytes) */
void jt_000F28(void) {
    func_table_call(0x007E1C);
    M68K_CMP16(g_m68k.d[0], 0x0);
    if (M68K_CC_NE) goto loc_000F3C;
    { uint16_t _mv = (uint16_t)(0xf); bus_write16(0x100426, _mv); M68K_TST16(_mv); }
loc_000F3C:
    return;
}

/* $000F3E-$000F64  (9 instructions, 38 bytes) */
void jt_000F3E(void) {
    func_table_call(0x007E86);
    M68K_CMP16(g_m68k.d[0], 0x0);
    if (M68K_CC_NE) goto loc_000F62;
    M68K_CMP16(g_m68k.d[1], 0x0);
    if (M68K_CC_NE) goto loc_000F5A;
    { uint16_t _mv = (uint16_t)(0x2); bus_write16(0x100426, _mv); M68K_TST16(_mv); }
    goto loc_000F62;
loc_000F5A:
    { uint16_t _mv = (uint16_t)(0x10); bus_write16(0x100426, _mv); M68K_TST16(_mv); }
loc_000F62:
    return;
}

/* $000F64-$000F7C  (5 instructions, 24 bytes) */
void jt_000F64(void) {
    func_table_call(0x0072BC);
    M68K_CMP16(g_m68k.d[0], 0x0);
    if (M68K_CC_NE) goto loc_000F7A;
    { uint16_t _mv = (uint16_t)(0x11); bus_write16(0x100426, _mv); M68K_TST16(_mv); }
loc_000F7A:
    return;
}

/* $000F7C-$000F98  (6 instructions, 28 bytes) */
void jt_000F7C(void) {
    func_table_call(0x007314);
    M68K_CMP16(g_m68k.d[0], 0x0);
    if (M68K_CC_NE) goto loc_000F96;
    func_table_call(0x109e);
    { uint16_t _mv = (uint16_t)(0xe); bus_write16(0x100426, _mv); M68K_TST16(_mv); }
loc_000F96:
    return;
}

/* $000F98-$000FAE  (4 instructions, 22 bytes) */
void jt_000F98(void) {
    func_table_call(0x01C876);
    M68K_CMP16(g_m68k.d[0], 0x0);
    if (M68K_CC_NE) { func_table_call(0x000FAE); return; }
    { uint16_t _mv = (uint16_t)(0x13); bus_write16(0x100426, _mv); M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $000FAA-$000FB0  (2 instructions, 6 bytes) */
void jt_000FAA(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x26); bus_write8(_ea, _tmp); }
loc_000FAE:
    return;
}

/* $000FB0-$000FC8  (5 instructions, 24 bytes) */
void jt_000FB0(void) {
    func_table_call(0x01CA78);
    M68K_CMP16(g_m68k.d[0], 0x0);
    if (M68K_CC_NE) goto loc_000FC6;
    { uint16_t _mv = (uint16_t)(0x6); bus_write16(0x100426, _mv); M68K_TST16(_mv); }
loc_000FC6:
    return;
}

/* $000FE8-$001004  (5 instructions, 28 bytes) */
void sub_000FE8(void) {
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(0x100422, _mv); M68K_TST16(_mv); }
    M68K_TST16(bus_read16(0x10FE80));
    if (M68K_CC_NE) goto loc_001002;
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(0x100422, _mv); M68K_TST16(_mv); }
loc_001002:
    return;
}

/* $001004-$00102E  (10 instructions, 42 bytes) */
void sub_001004(void) {
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(0x10042A, _mv); M68K_TST16(_mv); }
    g_m68k.a[7] -= 2; bus_write16(g_m68k.a[7], g_m68k.d[0]);
    g_m68k.d[0] = (uint32_t)(int32_t)(int8_t)(0x0); M68K_TST32(g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(0x10FD83))); M68K_TST8((uint8_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x102e + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call((0x102e + (int16_t)(uint16_t)g_m68k.d[0]));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(0x100428, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (uint32_t)(int32_t)(int16_t)bus_read16(g_m68k.a[7]); g_m68k.a[7] += 2;
    return;
}

/* $0010D0-$001100  (12 instructions, 48 bytes) */
void sub_0010D0(void) {
    g_m68k.a[0] = 0x10002E;
    g_m68k.a[1] = 0x100002;
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(0xa)); M68K_TST16((uint16_t)g_m68k.d[7]);
loc_0010E0:
    { uint32_t _mv = (uint32_t)(g_m68k.a[0]); bus_write32(g_m68k.a[1], _mv); g_m68k.a[1] += 4; M68K_TST32(_mv); }
    g_m68k.a[0] = (g_m68k.a[0] + 0xc);
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[7]; _cnt--; g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_0010E0; } }
    g_m68k.a[0] = 0x01E97E;
    g_m68k.d[0] = (uint32_t)(int32_t)(int8_t)(0x0); M68K_TST32(g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(0x10FD83))); M68K_TST8((uint8_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[0] = bus_read32(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $001100-$001112  (5 instructions, 18 bytes) */
void jt_001100(void) {
    g_m68k.a[1] = 0x10002E;
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(0x41)); M68K_TST16((uint16_t)g_m68k.d[7]);
loc_00110A:
    { uint16_t _mv = (uint16_t)(_postinc16(0)); bus_write16(g_m68k.a[1], _mv); g_m68k.a[1] += 2; M68K_TST16(_mv); }
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[7]; _cnt--; g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_00110A; } }
    return;
}

/* $001112-$00113A  (10 instructions, 40 bytes) */
void sub_001112(void) {
    func_table_call(0x00D70C);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.a[0] = 0x100002;
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(0x9)); M68K_TST16((uint16_t)g_m68k.d[7]);
loc_001124:
    g_m68k.a[1] = _postinc32(0);
    g_m68k.d[1] = bus_read32(g_m68k.a[1] + 0x0); M68K_TST32((uint32_t)g_m68k.d[1]);
    func_table_call(0x007D98);
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); bus_write16(g_m68k.a[1] + 0x8, _mv); M68K_TST16(_mv); }
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[7]; _cnt--; g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_001124; } }
    return;
}

/* $00113A-$00117C  (23 instructions, 66 bytes) */
void sub_00113A(void) {
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.d[1] = (uint32_t)(int32_t)(int8_t)(0x4); M68K_TST32(g_m68k.d[1]);
loc_001140:
    M68K_CMP16(g_m68k.d[1], g_m68k.d[0]);
    if (M68K_CC_GE) goto loc_00117A;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[1])); M68K_TST16((uint16_t)g_m68k.d[2]);
    M68K_SUB16(g_m68k.d[2], 0x4);
loc_00114A:
    M68K_CMP16(g_m68k.d[2], 0x0);
    if (M68K_CC_LT) goto loc_001176;
    g_m68k.a[1] = bus_read32(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[2]);
    g_m68k.a[2] = bus_read32(g_m68k.a[0] + 0x4 + (int16_t)(uint16_t)g_m68k.d[2]);
    g_m68k.d[3] = bus_read32(g_m68k.a[2]); M68K_TST32((uint32_t)g_m68k.d[3]);
    M68K_CMP32(g_m68k.d[3], bus_read32(g_m68k.a[1]));
    if (M68K_CC_CC) goto loc_00116E;
    { uint32_t _mv = (uint32_t)(g_m68k.a[1]); bus_write32(g_m68k.a[0] + 0x4 + (int16_t)(uint16_t)g_m68k.d[2], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(g_m68k.a[2]); bus_write32(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[2], _mv); M68K_TST32(_mv); }
    goto loc_001172;
loc_00116E:
    goto loc_001176;
loc_001172:
    M68K_SUB16(g_m68k.d[2], 0x4);
    goto loc_00114A;
loc_001176:
    M68K_ADD16(g_m68k.d[1], 0x4);
    goto loc_001140;
loc_00117A:
    return;
}

/* $00117C-$001194  (7 instructions, 24 bytes) */
void sub_00117C(void) {
    g_m68k.a[2] = g_m68k.a[0];
    g_m68k.d[1] = (uint32_t)(int32_t)(int8_t)(0x0); M68K_TST32(g_m68k.d[1]);
loc_001180:
    M68K_CMP16(g_m68k.d[1], 0x28);
    if (M68K_CC_GT) { func_table_call(0x0011A2); return; }
    g_m68k.a[0] = bus_read32(g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.d[1]);
    g_m68k.a[0] = (g_m68k.a[0] + 0x4);
    func_table_call(0x011A10);
    /* WARNING: function did not end with RTS */
}

/* $001194-$0011A8  (9 instructions, 20 bytes) */
void jt_001194(void) {
    M68K_TST16(g_m68k.d[0]);
    if (M68K_CC_NE) goto loc_00119E;
    M68K_LSR16(g_m68k.d[1], 0x2);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[1])); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
loc_00119E:
    M68K_ADD16(g_m68k.d[1], 0x4);
    { func_table_call(0x001180); return; }
loc_0011A2:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0xa)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $0011A8-$0011B4  (3 instructions, 12 bytes) */
void sub_0011A8(void) {
    g_m68k.a[0] = 0x10002A;
    g_m68k.a[0] = bus_read32(g_m68k.a[0]);
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); bus_write32(g_m68k.a[0] + 0x0, _mv); M68K_TST32(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0011B2-$0011CE  (6 instructions, 28 bytes) */
void jt_0011B2(void) {
    M68K_OR8(g_m68k.d[0], 0x7c);
    { uint32_t _mv = (uint32_t)(0xffffff00); bus_write32(g_m68k.a[0] + 0x4, _mv); M68K_TST32(_mv); }
    g_m68k.a[0] = 0x100002;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0xb)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x00113A);
    return;
}

/* $0011CE-$0011D4  (1 instructions, 6 bytes) */
void sub_0011CE(void) {
    g_m68k.a[1] = 0x100002;
    /* WARNING: function did not end with RTS */
}

/* $0011D0-$0011EE  (7 instructions, 30 bytes) */
void jt_0011D0(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x2); bus_write8(_ea, _tmp); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x101212))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[1] = bus_read32(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    { uint16_t _mv = (uint16_t)(bus_read16(0x1011FA)); bus_write16(g_m68k.a[1] + 0xa, _mv); M68K_TST16(_mv); }
    g_m68k.a[1] = (g_m68k.a[1] + 0x4);
    /* WARNING: function did not end with RTS */
}

/* $0011EE-$0011FC  (3 instructions, 14 bytes) */
void jt_0011EE(void) {
    g_m68k.a[0] = 0x1011FE;
    func_table_call(0x011A02);
    return;
}

/* $0011FC-$00120C  (3 instructions, 16 bytes) */
void sub_0011FC(void) {
    g_m68k.a[0] = 0x1000CE;
    g_m68k.a[1] = 0x1000B2;
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(0x6)); M68K_TST16((uint16_t)g_m68k.d[7]);
    /* WARNING: function did not end with RTS */
}

/* $00120C-$00122C  (8 instructions, 32 bytes) */
void jt_00120C(void) {
    { uint32_t _mv = (uint32_t)(g_m68k.a[0]); bus_write32(g_m68k.a[1], _mv); g_m68k.a[1] += 4; M68K_TST32(_mv); }
    g_m68k.a[0] = (g_m68k.a[0] + 0x18);
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[7]; _cnt--; g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { { func_table_call(0x00120C); return; } } }
    g_m68k.a[0] = 0x100176;
    g_m68k.a[1] = 0x1000B2;
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(0x6)); M68K_TST16((uint16_t)g_m68k.d[7]);
loc_001226:
    g_m68k.a[2] = _postinc32(1);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x5)); M68K_TST16((uint16_t)g_m68k.d[6]);
    /* WARNING: function did not end with RTS */
}

/* $00122A-$001278  (23 instructions, 78 bytes) */
void jt_00122A(void) {
    M68K_OR8(g_m68k.d[5], 0xc8);
loc_00122C:
    { uint32_t _mv = (uint32_t)(g_m68k.a[0]); bus_write32(g_m68k.a[2], _mv); g_m68k.a[2] += 4; M68K_TST32(_mv); }
    g_m68k.a[0] = (g_m68k.a[0] + 0xc);
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[6]; _cnt--; g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_00122C; } }
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[7]; _cnt--; g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { func_table_call(0x001226); return; } }
    g_m68k.a[0] = 0x01EA0E;
    g_m68k.d[0] = (uint32_t)(int32_t)(int8_t)(0x0); M68K_TST32(g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(0x10FD83))); M68K_TST8((uint8_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[0] = bus_read32(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    g_m68k.a[1] = 0x1000B2;
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(0x6)); M68K_TST16((uint16_t)g_m68k.d[7]);
loc_00125A:
    g_m68k.a[2] = _postinc32(0);
    g_m68k.a[3] = _postinc32(1);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(0x5)); M68K_TST16((uint16_t)g_m68k.d[6]);
loc_001262:
    g_m68k.a[4] = _postinc32(3);
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(0x5)); M68K_TST16((uint16_t)g_m68k.d[5]);
loc_001268:
    { uint16_t _mv = (uint16_t)(_postinc16(2)); bus_write16(g_m68k.a[4], _mv); g_m68k.a[4] += 2; M68K_TST16(_mv); }
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[5]; _cnt--; g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_001268; } }
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[6]; _cnt--; g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_001262; } }
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[7]; _cnt--; g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_00125A; } }
    return;
}

/* $001278-$0012AC  (15 instructions, 52 bytes) */
void sub_001278(void) {
    func_table_call(0x00D70C);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.a[0] = 0x1000B2;
    g_m68k.d[0] = (uint32_t)(int32_t)(int8_t)(0x0); M68K_TST32(g_m68k.d[0]);
loc_001288:
    g_m68k.a[1] = _postinc32(0);
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(0x4)); M68K_TST16((uint16_t)g_m68k.d[7]);
loc_00128E:
    g_m68k.a[2] = _postinc32(1);
    g_m68k.d[1] = bus_read32(g_m68k.a[2] + 0x0); M68K_TST32((uint32_t)g_m68k.d[1]);
    func_table_call(0x007AC4);
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); bus_write16(g_m68k.a[2] + 0xa, _mv); M68K_TST16(_mv); }
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[7]; _cnt--; g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_00128E; } }
    M68K_ADD16(g_m68k.d[0], 0x1);
    M68K_CMP16(g_m68k.d[0], 0x7);
    if (M68K_CC_LT) goto loc_001288;
    return;
}

/* $0012AC-$0012C0  (5 instructions, 20 bytes) */
void sub_0012AC(void) {
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x101202))); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_ADD16(g_m68k.d[1], g_m68k.d[1]);
    M68K_ADD16(g_m68k.d[1], g_m68k.d[1]);
    g_m68k.a[0] = 0x1000B2;
    g_m68k.a[0] = bus_read32(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[1]);
    /* WARNING: function did not end with RTS */
}

/* $0012C0-$0012FA  (17 instructions, 58 bytes) */
void jt_0012C0(void) {
    g_m68k.a[1] = g_m68k.a[0];
    g_m68k.a[1] = (g_m68k.a[1] + 0x14);
    g_m68k.a[1] = bus_read32(g_m68k.a[1]);
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); bus_write32(g_m68k.a[1] + 0x0, _mv); M68K_TST32(_mv); }
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x6)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x00113A);
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x5)); M68K_TST16((uint16_t)g_m68k.d[1]);
loc_0012E2:
    g_m68k.a[1] = _postinc32(0);
    M68K_CMP32(g_m68k.d[0], bus_read32(g_m68k.a[1] + 0x0));
    if (M68K_CC_NE) goto loc_0012EE;
    goto loc_0012F2;
loc_0012EE:
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[1]; _cnt--; g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_0012E2; } }
loc_0012F2:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x5)); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_SUB16(g_m68k.d[0], g_m68k.d[1]);
    return;
}

/* $0012FA-$0012FE  (1 instructions, 4 bytes) */
void sub_0012FA(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[7]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0012FC-$001304  (2 instructions, 8 bytes) */
void jt_0012FC(void) {
    M68K_DIVS(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[0] = 0x1000B2;
    /* WARNING: function did not end with RTS */
}

/* $001300-$001336  (15 instructions, 54 bytes) */
void jt_001300(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xb2); bus_write8(_ea, _tmp); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x101202))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[0] = bus_read32(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x101214))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[0] = bus_read32(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    g_m68k.a[1] = 0x101216;
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(0xb)); M68K_TST16((uint16_t)g_m68k.d[7]);
loc_00132A:
    { uint8_t _mv = (uint8_t)(_postinc8(1)); bus_write8(g_m68k.a[0], _mv); g_m68k.a[0] += 1; M68K_TST8(_mv); }
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[7]; _cnt--; g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_00132A; } }
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[7] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}

/* $001336-$00133E  (1 instructions, 8 bytes) */
void sub_001336(void) {
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(0x100432, _mv); M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $001338-$001340  (3 instructions, 8 bytes) */
void jt_001338(void) {
    M68K_OR8(g_m68k.d[1], 0x10);
    { uint32_t _ea = /* UNHANDLED_ADDR: $10(invalid.w) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, 0x75); bus_write8(_ea, _tmp); }
    return;
}

/* $001340-$001352  (5 instructions, 18 bytes) */
void sub_001340(void) {
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(0x100432, _mv); M68K_TST16(_mv); }
    { uint32_t _ea = (g_m68k.a[2] + (-0x64) + (int16_t)(uint16_t)g_m68k.d[0]); uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, 0xba); bus_write8(_ea, _tmp); }
    func_table_call(0x13e6);
    func_table_call(0x14a6);
    return;
}

/* $001374-$00137E  (4 instructions, 10 bytes) */
void jt_001374(void) {
    if (M68K_CC_EQ) goto loc_00137C;
    M68K_ADD8(g_m68k.d[2], 0x30);
    { uint8_t _mv = (uint8_t)(g_m68k.d[2]); bus_write8(g_m68k.a[0], _mv); M68K_TST8(_mv); }
loc_00137C:
    return;
}

/* $0013B0-$0013DA  (8 instructions, 42 bytes) */
void jt_0013B0(void) {
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[4] + 0x75 + (int32_t)g_m68k.d[4]))); M68K_TST8((uint8_t)g_m68k.d[5]);
    g_m68k.a[0] = 0x0013DA;
    g_m68k.a[1] = 0x100434;
    func_table_call(0x011A02);
    g_m68k.a[0] = 0x0013DA;
    g_m68k.a[1] = 0x100440;
    func_table_call(0x011A02);
    return;
}

/* $0013E6-$0013EC  (1 instructions, 6 bytes) */
void sub_0013E6(void) {
    M68K_TST16(bus_read16(0x100432));
    /* WARNING: function did not end with RTS */
}

/* $0013EC-$001404  (6 instructions, 24 bytes) */
void jt_0013EC(void) {
    if (M68K_CC_EQ) goto loc_0013F0;
    return;
loc_0013F0:
    M68K_TST8(bus_read8(0x10FD82));
    if (M68K_CC_NE) { func_table_call(0x001424); return; }
    g_m68k.a[0] = bus_read32(0x100412);
    g_m68k.a[1] = 0x100434;
    /* WARNING: function did not end with RTS */
}

/* $001400-$001414  (5 instructions, 20 bytes) */
void jt_001400(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x34); bus_write8(_ea, _tmp); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x707d)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x137e);
    g_m68k.a[0] = bus_read32(0x100412);
    g_m68k.a[0] += 0x1;
    /* WARNING: function did not end with RTS */
}

/* $001414-$00143C  (9 instructions, 40 bytes) */
void jt_001414(void) {
    g_m68k.a[1] = 0x100440;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x737d)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x137e);
    { func_table_call(0x001476); return; }
loc_001424:
    M68K_TST16(bus_read16(0x10040E));
    if (M68K_CC_EQ) { func_table_call(0x001476); return; }
    M68K_CMP16(bus_read16(0x100428), 0x1);
    if (M68K_CC_NE) { func_table_call(0x001462); return; }
    g_m68k.a[0] = bus_read32(0x100412);
    /* WARNING: function did not end with RTS */
}

/* $00143C-$001450  (4 instructions, 20 bytes) */
void jt_00143C(void) {
    g_m68k.a[1] = 0x100434;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x707d)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x137e);
    g_m68k.a[0] = bus_read32(0x100412);
    /* WARNING: function did not end with RTS */
}

/* $001450-$001478  (10 instructions, 40 bytes) */
void jt_001450(void) {
    g_m68k.a[0] += 0x1;
    g_m68k.a[1] = 0x100440;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x737d)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x137e);
    goto loc_001476;
loc_001462:
    g_m68k.a[0] = bus_read32(0x100412);
    g_m68k.a[1] = 0x100434;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x737d)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x137e);
loc_001476:
    return;
}

/* $00148A-$00149E  (4 instructions, 20 bytes) */
void sub_00148A(void) {
    g_m68k.a[0] = 0x00149E;
    g_m68k.a[1] = 0x10044C;
    func_table_call(0x011A02);
    return;
}

/* $0014A6-$0014E8  (16 instructions, 66 bytes) */
void sub_0014A6(void) {
    M68K_TST16(bus_read16(0x100432));
    if (M68K_CC_EQ) goto loc_0014B0;
    return;
loc_0014B0:
    M68K_TST8(bus_read8(0x10FD82));
    if (M68K_CC_EQ) goto loc_0014E6;
    M68K_TST16(bus_read16(0x10040C));
    if (M68K_CC_EQ) goto loc_0014E6;
    g_m68k.a[0] = 0x10044C;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x100406))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], 0x31);
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); bus_write8(g_m68k.a[0] + 0x6, _mv); M68K_TST8(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x721d)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x9)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x300)); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x011A34);
loc_0014E6:
    return;
}

/* $0014E8-$0014F6  (3 instructions, 14 bytes) */
void sub_0014E8(void) {
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(0x100458, _mv); M68K_TST16(_mv); }
    func_table_call(0x15b6);
    return;
}

/* $0014F6-$0015B6  (49 instructions, 192 bytes) */
void sub_0014F6(void) {
    M68K_TST8(bus_read8(0x10FD82));
    if (M68K_CC_EQ) goto loc_001570;
    M68K_CMP8(bus_read8(0x10FD83), 0x1);
    if (M68K_CC_NE) goto loc_00154C;
    { uint32_t _mv = (uint32_t)(0x1010000); bus_write32(0x10FDB0, _mv); M68K_TST32(_mv); }
    func_table_call(0xC00450);
    M68K_TST32(bus_read32(0x10FDB0));
    if (M68K_CC_NE) goto loc_001526;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    goto loc_00154A;
loc_001526:
    M68K_CMP16(bus_read16(0x10FDB0), 0x100);
    if (M68K_CC_NE) goto loc_001536;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    goto loc_00154A;
loc_001536:
    M68K_CMP16(bus_read16(0x10FDB0), 0x1);
    if (M68K_CC_NE) goto loc_001546;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x2)); M68K_TST16((uint16_t)g_m68k.d[0]);
    goto loc_00154A;
loc_001546:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x3)); M68K_TST16((uint16_t)g_m68k.d[0]);
loc_00154A:
    goto loc_00156E;
loc_00154C:
    { uint32_t _mv = (uint32_t)(0x1010000); bus_write32(0x10FDB0, _mv); M68K_TST32(_mv); }
    func_table_call(0xC00450);
    M68K_TST32(bus_read32(0x10FDB0));
    if (M68K_CC_NE) goto loc_00156A;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    goto loc_00156E;
loc_00156A:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
loc_00156E:
    goto loc_00159E;
loc_001570:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x100416))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[1]);
    if (M68K_CC_NE) goto loc_001580;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x4)); M68K_TST16((uint16_t)g_m68k.d[0]);
    goto loc_00159E;
loc_001580:
    M68K_AND16(g_m68k.d[1], 0xff);
    M68K_AND16(g_m68k.d[0], 0xff00);
    if (M68K_CC_NE) goto loc_001590;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x2)); M68K_TST16((uint16_t)g_m68k.d[0]);
    goto loc_00159E;
loc_001590:
    M68K_TST16(g_m68k.d[1]);
    if (M68K_CC_NE) goto loc_00159A;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    goto loc_00159E;
loc_00159A:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x3)); M68K_TST16((uint16_t)g_m68k.d[0]);
loc_00159E:
    M68K_CMP16(g_m68k.d[0], bus_read16(0x100458));
    if (M68K_CC_EQ) goto loc_0015AA;
    func_table_call(0x15b6);
loc_0015AA:
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(0x100458, _mv); M68K_TST16(_mv); }
    func_table_call(0x15d0);
    return;
}

/* $0015B6-$0015D0  (4 instructions, 26 bytes) */
void sub_0015B6(void) {
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(0x10045A, _mv); M68K_TST16(_mv); }
    { uint32_t _ea = 0x10045A; uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, 0xffff); bus_write16(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(0x10045C, _mv); M68K_TST16(_mv); }
    return;
}

/* $001600-$001602  (1 instructions, 2 bytes) */
void jt_001600(void) {
    return;
}

/* $001608-$001612  (2 instructions, 10 bytes) */
void jt_001608(void) {
    { uint32_t _ea = g_m68k.a[4]; uint16_t _tmp = bus_read16(_ea); M68K_SUB16(_tmp, 0x6a42); bus_write16(_ea, _tmp); }
    M68K_TST16(bus_read16(0x10045A));
    /* WARNING: function did not end with RTS */
}
