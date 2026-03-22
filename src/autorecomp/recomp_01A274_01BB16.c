/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $01A274 - $01BB16 */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

/* $01A274-$01A294  (7 instructions, 32 bytes) */
void jt_01A274(void) {
    M68K_CMP16(bus_read16(g_m68k.a[5] + (-0x7bd8)), 0x2);
    if (M68K_CC_NE) goto loc_01A284;
    { uint16_t _mv = (uint16_t)(0x64); bus_write16(g_m68k.a[5] + (-0x4b0c), _mv); M68K_TST16(_mv); }
    goto loc_01A28A;
loc_01A284:
    { uint16_t _mv = (uint16_t)(0x78); bus_write16(g_m68k.a[5] + (-0x4b0c), _mv); M68K_TST16(_mv); }
loc_01A28A:
    { uint16_t _mv = (uint16_t)(0x3); bus_write16(g_m68k.a[5] + (-0x4b0e), _mv); M68K_TST16(_mv); }
    { func_table_call(0x1a294); return; }
    /* WARNING: function did not end with RTS */
}

/* $01A294-$01A2B6  (8 instructions, 34 bytes) */
void jt_01A294(void) {
    func_table_call(0x1a834);
    func_table_call(0x01229E);
    { uint32_t _ea = (g_m68k.a[5] + (-0x4b0c)); uint16_t _tmp = bus_read16(_ea); M68K_SUB16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    M68K_CMP16(bus_read16(g_m68k.a[5] + (-0x4b0c)), 0x0);
    if (M68K_CC_GT) goto loc_01A2B0;
    { uint16_t _mv = (uint16_t)(0x4); bus_write16(g_m68k.a[5] + (-0x4b0e), _mv); M68K_TST16(_mv); }
loc_01A2B0:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $01A2B6-$01A2E0  (10 instructions, 42 bytes) */
void jt_01A2B6(void) {
    func_table_call(0x0120E0);
    func_table_call(0x0133FA);
    func_table_call(0x000A26);
    M68K_CMP8(bus_read8(g_m68k.a[5] + (-0x4b07)), 0x0);
    if (M68K_CC_NE) goto loc_01A2D6;
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[1]);
    goto loc_01A2DA;
loc_01A2D6:
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0xffff)); M68K_TST16((uint16_t)g_m68k.d[1]);
loc_01A2DA:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $01A2E0-$01A31A  (15 instructions, 58 bytes) */
void jt_01A2E0(void) {
    { uint32_t _ea = (g_m68k.a[5] + (-0x4b0c)); uint16_t _tmp = bus_read16(_ea); M68K_SUB16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    func_table_call(0x1a620);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x1a6c6);
    func_table_call(0x1a5ac);
    func_table_call(0x01229E);
    M68K_CMP16(g_m68k.d[0], 0x1);
    if (M68K_CC_EQ) goto loc_01A314;
    M68K_CMP16(g_m68k.d[1], 0x0);
    if (M68K_CC_NE) goto loc_01A30E;
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(g_m68k.a[5] + (-0x4b0e), _mv); M68K_TST16(_mv); }
    goto loc_01A314;
loc_01A30E:
    { uint16_t _mv = (uint16_t)(0x2); bus_write16(g_m68k.a[5] + (-0x4b0e), _mv); M68K_TST16(_mv); }
loc_01A314:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $01A31A-$01A354  (15 instructions, 58 bytes) */
void jt_01A31A(void) {
    func_table_call(0x1a762);
    func_table_call(0x1a8b6);
    func_table_call(0x1a914);
    M68K_TST8(bus_read8(0x10FDC6));
    if (M68K_CC_NE) goto loc_01A33C;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[1]);
    func_table_call(0x1a7aa);
    goto loc_01A348;
loc_01A33C:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0xffff)); M68K_TST16((uint16_t)g_m68k.d[1]);
    func_table_call(0x1a7aa);
loc_01A348:
    { uint16_t _mv = (uint16_t)(0x2); bus_write16(g_m68k.a[5] + (-0x4b0e), _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $01A354-$01A374  (7 instructions, 32 bytes) */
void jt_01A354(void) {
    M68K_CMP16(bus_read16(g_m68k.a[5] + (-0x7bd8)), 0x2);
    if (M68K_CC_NE) goto loc_01A364;
    { uint16_t _mv = (uint16_t)(0x64); bus_write16(g_m68k.a[5] + (-0x4b0c), _mv); M68K_TST16(_mv); }
    goto loc_01A36A;
loc_01A364:
    { uint16_t _mv = (uint16_t)(0x78); bus_write16(g_m68k.a[5] + (-0x4b0c), _mv); M68K_TST16(_mv); }
loc_01A36A:
    { uint16_t _mv = (uint16_t)(0x3); bus_write16(g_m68k.a[5] + (-0x4b0e), _mv); M68K_TST16(_mv); }
    { func_table_call(0x1a374); return; }
    /* WARNING: function did not end with RTS */
}

/* $01A374-$01A396  (8 instructions, 34 bytes) */
void jt_01A374(void) {
    func_table_call(0x1a834);
    func_table_call(0x01229E);
    { uint32_t _ea = (g_m68k.a[5] + (-0x4b0c)); uint16_t _tmp = bus_read16(_ea); M68K_SUB16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    M68K_CMP16(bus_read16(g_m68k.a[5] + (-0x4b0c)), 0x0);
    if (M68K_CC_GT) goto loc_01A390;
    { uint16_t _mv = (uint16_t)(0x4); bus_write16(g_m68k.a[5] + (-0x4b0e), _mv); M68K_TST16(_mv); }
loc_01A390:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $01A396-$01A3AE  (5 instructions, 24 bytes) */
void jt_01A396(void) {
    func_table_call(0x0120E0);
    func_table_call(0x0133FA);
    func_table_call(0x000A26);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $01A3AE-$01A3E4  (13 instructions, 54 bytes) */
void sub_01A3AE(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x49)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x2)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x100)); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.a[3] = 0x1a3e4;
    func_table_call(0x012036);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x4d)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x100)); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.a[3] = 0x1a444;
    func_table_call(0x012036);
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}

/* $01A474-$01A5AC  (72 instructions, 312 bytes) */
void sub_01A474(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[7]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    g_m68k.a[1] = (g_m68k.a[5] + (-0x4b32));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(0x8)); M68K_TST16((uint16_t)g_m68k.d[7]);
loc_01A480:
    func_table_call(0x012202);
    { uint32_t _mv = (uint32_t)(g_m68k.a[0]); bus_write32(g_m68k.a[1], _mv); g_m68k.a[1] += 4; M68K_TST32(_mv); }
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[7]; _cnt--; g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_01A480; } }
    g_m68k.d[0] = (uint32_t)(int32_t)(int8_t)(0x0); M68K_TST32(g_m68k.d[0]);
    g_m68k.a[1] = (g_m68k.a[5] + (-0x4b32));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(0x8)); M68K_TST16((uint16_t)g_m68k.d[7]);
loc_01A496:
    g_m68k.a[0] = _postinc32(1);
    func_table_call(0x012286);
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[7]; _cnt--; g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_01A496; } }
    g_m68k.a[1] = bus_read32(0x080034);
    g_m68k.a[4] = (g_m68k.a[1] + 0x30);
    g_m68k.a[5] = (g_m68k.a[1] + 0x38);
    g_m68k.d[0] = (uint32_t)(int32_t)(int8_t)(0x0); M68K_TST32(g_m68k.d[0]);
    g_m68k.d[1] = (uint32_t)(int32_t)(int8_t)(0x0); M68K_TST32(g_m68k.d[1]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x100)); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0x100)); M68K_TST16((uint16_t)g_m68k.d[3]);
    func_table_call(0x01348E);
    g_m68k.a[5] = 0x108000;
    g_m68k.a[1] = bus_read32(0x080038);
    g_m68k.a[0] = bus_read32(g_m68k.a[5] + (-0x4b32));
    g_m68k.a[3] = bus_read32(g_m68k.a[1] + 0x0);
    func_table_call(0x012270);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x58)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x30)); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x01225C);
    g_m68k.a[0] = bus_read32(g_m68k.a[5] + (-0x4b2e));
    M68K_CMP16(g_m68k.d[5], 0x0);
    if (M68K_CC_NE) goto loc_01A4FA;
    g_m68k.a[3] = bus_read32(g_m68k.a[1] + 0x4);
    goto loc_01A4FE;
loc_01A4FA:
    g_m68k.a[3] = bus_read32(g_m68k.a[1] + 0x8);
loc_01A4FE:
    func_table_call(0x012270);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0xa8)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x30)); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x01225C);
    g_m68k.a[0] = bus_read32(g_m68k.a[5] + (-0x4b2a));
    g_m68k.a[3] = bus_read32(g_m68k.a[1] + 0xc);
    func_table_call(0x012270);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x50)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x90)); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x01225C);
    g_m68k.a[0] = bus_read32(g_m68k.a[5] + (-0x4b26));
    g_m68k.a[3] = bus_read32(g_m68k.a[1] + 0x10);
    func_table_call(0x012270);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0xc0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x90)); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x01225C);
    g_m68k.a[0] = bus_read32(g_m68k.a[5] + (-0x4b22));
    g_m68k.a[3] = bus_read32(g_m68k.a[1] + 0x14);
    func_table_call(0x012270);
    g_m68k.a[0] = bus_read32(g_m68k.a[5] + (-0x4b1e));
    g_m68k.a[3] = bus_read32(g_m68k.a[1] + 0x18);
    func_table_call(0x012270);
    g_m68k.a[0] = bus_read32(g_m68k.a[5] + (-0x4b1a));
    g_m68k.a[3] = bus_read32(g_m68k.a[1] + 0x1c);
    func_table_call(0x012270);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x68)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0xc0)); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x01225C);
    g_m68k.a[0] = bus_read32(g_m68k.a[5] + (-0x4b16));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0xb0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0xc0)); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x01225C);
    g_m68k.a[0] = bus_read32(g_m68k.a[5] + (-0x4b12));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0xc0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0xc0)); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x01225C);
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[7] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}

/* $01A5AC-$01A608  (22 instructions, 92 bytes) */
void sub_01A5AC(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    M68K_CMP8(bus_read8(g_m68k.a[5] + (-0x4b06)), 0x0);
    if (M68K_CC_NE) goto loc_01A5DE;
    g_m68k.a[0] = bus_read32(g_m68k.a[5] + (-0x4b22));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x40)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x90)); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x01225C);
    g_m68k.a[0] = bus_read32(g_m68k.a[5] + (-0x4b1e));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x80)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x90)); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x01225C);
    goto loc_01A602;
loc_01A5DE:
    g_m68k.a[0] = bus_read32(g_m68k.a[5] + (-0x4b22));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0xb0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x90)); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x01225C);
    g_m68k.a[0] = bus_read32(g_m68k.a[5] + (-0x4b1e));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0xf0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x90)); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x01225C);
loc_01A602:
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}

/* $01A608-$01A620  (6 instructions, 24 bytes) */
void sub_01A608(void) {
    M68K_CMP16(bus_read16(g_m68k.a[5] + (-0x7bd8)), 0x2);
    if (M68K_CC_NE) goto loc_01A618;
    { uint16_t _mv = (uint16_t)(0x1f3); bus_write16(g_m68k.a[5] + (-0x4b0c), _mv); M68K_TST16(_mv); }
    goto loc_01A61E;
loc_01A618:
    { uint16_t _mv = (uint16_t)(0x257); bus_write16(g_m68k.a[5] + (-0x4b0c), _mv); M68K_TST16(_mv); }
loc_01A61E:
    return;
}

/* $01A620-$01A696  (34 instructions, 118 bytes) */
void sub_01A620(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    M68K_CMP16(bus_read16(g_m68k.a[5] + (-0x7bd8)), 0x2);
    if (M68K_CC_NE) goto loc_01A632;
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x32)); M68K_TST16((uint16_t)g_m68k.d[1]);
    goto loc_01A636;
loc_01A632:
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x3c)); M68K_TST16((uint16_t)g_m68k.d[1]);
loc_01A636:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[5] + (-0x4b0c)))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_EXT32(g_m68k.d[0]);
    M68K_DIVU(g_m68k.d[0], g_m68k.d[1]);
    M68K_ADD16(g_m68k.d[0], 0x1);
    g_m68k.a[1] = bus_read32(0x080038);
    g_m68k.a[0] = bus_read32(g_m68k.a[5] + (-0x4b16));
    M68K_CMP16(g_m68k.d[0], 0xa);
    if (M68K_CC_LT) goto loc_01A65A;
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(0x1a697))); M68K_TST8((uint8_t)g_m68k.d[1]);
    M68K_SUB16(g_m68k.d[0], 0xa);
    goto loc_01A65E;
loc_01A65A:
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(0x1a696))); M68K_TST8((uint8_t)g_m68k.d[1]);
loc_01A65E:
    M68K_EXT16(g_m68k.d[1]);
    g_m68k.a[3] = bus_read32(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[1]);
    func_table_call(0x012270);
    M68K_TST16(bus_read16(g_m68k.a[5] + (-0x4b0c)));
    if (M68K_CC_NE) goto loc_01A672;
    g_m68k.d[0] = (uint32_t)(int32_t)(int8_t)(0x0); M68K_TST32(g_m68k.d[0]);
loc_01A672:
    g_m68k.a[0] = bus_read32(g_m68k.a[5] + (-0x4b12));
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(0x1a696 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST8((uint8_t)g_m68k.d[1]);
    M68K_EXT16(g_m68k.d[1]);
    g_m68k.a[3] = bus_read32(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[1]);
    func_table_call(0x012270);
    M68K_CMP16(g_m68k.d[0], bus_read16(g_m68k.a[5] + (-0x4b0a)));
    if (M68K_CC_EQ) goto loc_01A690;
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[5] + (-0x4b0a), _mv); M68K_TST16(_mv); }
loc_01A690:
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}

/* $01A6A0-$01A6C6  (10 instructions, 38 bytes) */
void sub_01A6A0(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    g_m68k.d[0] = (uint32_t)(int32_t)(int8_t)(0x1); M68K_TST32(g_m68k.d[0]);
    g_m68k.a[1] = (g_m68k.a[5] + (-0x4b32));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(0x8)); M68K_TST16((uint16_t)g_m68k.d[7]);
loc_01A6AE:
    g_m68k.a[0] = _postinc32(1);
    func_table_call(0x012286);
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[7]; _cnt--; g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_01A6AE; } }
    func_table_call(0x01229E);
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}

/* $01A6C6-$01A762  (40 instructions, 156 bytes) */
void sub_01A6C6(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]);
    M68K_CMP16(bus_read16(g_m68k.a[5] + (-0x6e04)), 0x0);
    if (M68K_CC_NE) goto loc_01A6DA;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(0x10FD97))); M68K_TST8((uint8_t)g_m68k.d[2]);
    goto loc_01A6E0;
loc_01A6DA:
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(0x10FD9D))); M68K_TST8((uint8_t)g_m68k.d[2]);
loc_01A6E0:
    M68K_BTST(g_m68k.d[2], 0x2);
    if (M68K_CC_EQ) goto loc_01A6F6;
    { uint8_t _mv = (uint8_t)(0x0); bus_write8(g_m68k.a[5] + (-0x4b06), _mv); M68K_TST8(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0xc6)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x015256);
loc_01A6F6:
    M68K_BTST(g_m68k.d[2], 0x3);
    if (M68K_CC_EQ) goto loc_01A70C;
    { uint8_t _mv = (uint8_t)(0xff); bus_write8(g_m68k.a[5] + (-0x4b06), _mv); M68K_TST8(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0xc6)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x015256);
loc_01A70C:
    M68K_CMP16(bus_read16(g_m68k.a[5] + (-0x7bd8)), 0x2);
    if (M68K_CC_NE) goto loc_01A71A;
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0x1da)); M68K_TST16((uint16_t)g_m68k.d[3]);
    goto loc_01A71E;
loc_01A71A:
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0x239)); M68K_TST16((uint16_t)g_m68k.d[3]);
loc_01A71E:
    M68K_CMP16(g_m68k.d[3], bus_read16(g_m68k.a[5] + (-0x4b0c)));
    if (M68K_CC_LT) goto loc_01A72E;
    M68K_BTST(g_m68k.d[2], 0x4);
    if (M68K_CC_EQ) goto loc_01A72E;
    bus_write16(g_m68k.a[5] + (-0x4b0c), 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
loc_01A72E:
    M68K_CMP16(bus_read16(g_m68k.a[5] + (-0x4b0c)), 0x0);
    if (M68K_CC_GT) goto loc_01A746;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0xc7)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x015256);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    goto loc_01A74A;
loc_01A746:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
loc_01A74A:
    M68K_CMP8(bus_read8(g_m68k.a[5] + (-0x4b06)), 0x0);
    if (M68K_CC_NE) goto loc_01A758;
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[1]);
    goto loc_01A75C;
loc_01A758:
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0xffff)); M68K_TST16((uint16_t)g_m68k.d[1]);
loc_01A75C:
    g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}

/* $01A762-$01A7AA  (21 instructions, 72 bytes) */
void sub_01A762(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    g_m68k.a[0] = (g_m68k.a[5] + (-0x4b64));
    g_m68k.a[0] = (g_m68k.a[0] + 0x0);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[5] + (-0x7bd8)))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_CMP16(g_m68k.d[0], 0x0);
    if (M68K_CC_EQ) goto loc_01A780;
    M68K_CMP16(g_m68k.d[0], 0x1);
    if (M68K_CC_EQ) goto loc_01A788;
    goto loc_01A790;
loc_01A780:
    g_m68k.a[1] = 0x0002CC;
    goto loc_01A796;
loc_01A788:
    g_m68k.a[1] = 0x00040C;
    goto loc_01A796;
loc_01A790:
    g_m68k.a[1] = 0x00054C;
loc_01A796:
    { uint32_t _mv = (uint32_t)(_postinc32(1)); bus_write32(g_m68k.a[0], _mv); g_m68k.a[0] += 4; M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_postinc32(1)); bus_write32(g_m68k.a[0], _mv); g_m68k.a[0] += 4; M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_postinc32(1)); bus_write32(g_m68k.a[0], _mv); g_m68k.a[0] += 4; M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_postinc32(1)); bus_write32(g_m68k.a[0], _mv); g_m68k.a[0] += 4; M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(0x20202020); bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}

/* $01A7AA-$01A7F0  (19 instructions, 70 bytes) */
void sub_01A7AA(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    M68K_CMP16(g_m68k.d[0], 0x0);
    if (M68K_CC_NE) goto loc_01A7BA;
    g_m68k.a[3] = 0x1a7f0;
    goto loc_01A7BE;
loc_01A7BA:
    g_m68k.a[3] = 0x1a802;
loc_01A7BE:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0xc)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x10)); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x014B38);
    M68K_CMP16(g_m68k.d[1], 0x0);
    if (M68K_CC_NE) goto loc_01A7D8;
    g_m68k.a[3] = 0x1a814;
    goto loc_01A7DC;
loc_01A7D8:
    g_m68k.a[3] = 0x1a824;
loc_01A7DC:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x16)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x10)); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x014B38);
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}

/* $01A834-$01A840  (3 instructions, 12 bytes) */
void sub_01A834(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    M68K_BTST(bus_read8((g_m68k.a[5] + (-0x4b0b))), 0x2);
    if (M68K_CC_NE) { func_table_call(0x01A844); return; }
    /* WARNING: function did not end with RTS */
}

/* $01A840-$01A860  (9 instructions, 32 bytes) */
void jt_01A840(void) {
    g_m68k.d[0] = (uint32_t)(int32_t)(int8_t)(0x1); M68K_TST32(g_m68k.d[0]);
    goto loc_01A846;
loc_01A844:
    g_m68k.d[0] = (uint32_t)(int32_t)(int8_t)(0x0); M68K_TST32(g_m68k.d[0]);
loc_01A846:
    g_m68k.a[0] = bus_read32(g_m68k.a[5] + (-0x4b22));
    func_table_call(0x012286);
    g_m68k.a[0] = bus_read32(g_m68k.a[5] + (-0x4b1e));
    func_table_call(0x012286);
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}

/* $01A860-$01A87E  (5 instructions, 30 bytes) */
void sub_01A860(void) {
    { uint8_t _mv = (uint8_t)(0x1); bus_write8(0x10FDC4, _mv); M68K_TST8(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(0x000108)); bus_write16(0x10FDCE, _mv); M68K_TST16(_mv); }
    func_table_call(0xC00468);
    g_m68k.a[5] = 0x108000;
    return;
}

/* $01A87E-$01A8B6  (8 instructions, 56 bytes) */
void sub_01A87E(void) {
    { uint8_t _mv = (uint8_t)(0x2); bus_write8(0x10FDC4, _mv); M68K_TST8(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(0x000108)); bus_write16(0x10FDCE, _mv); M68K_TST16(_mv); }
    { uint8_t _mv = (uint8_t)(0x0); bus_write8(0x10FDD0, _mv); M68K_TST8(_mv); }
    { uint32_t _mv = (uint32_t)(0x10349c); bus_write32(0x10FDC8, _mv); M68K_TST32(_mv); }
    { uint16_t _mv = (uint16_t)(0x32); bus_write16(0x10FDCC, _mv); M68K_TST16(_mv); }
    func_table_call(0xC00468);
    g_m68k.a[5] = 0x108000;
    return;
}

/* $01A8B6-$01A8EE  (8 instructions, 56 bytes) */
void sub_01A8B6(void) {
    { uint8_t _mv = (uint8_t)(0x3); bus_write8(0x10FDC4, _mv); M68K_TST8(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(0x000108)); bus_write16(0x10FDCE, _mv); M68K_TST16(_mv); }
    { uint8_t _mv = (uint8_t)(0x0); bus_write8(0x10FDD0, _mv); M68K_TST8(_mv); }
    { uint32_t _mv = (uint32_t)(0x10349c); bus_write32(0x10FDC8, _mv); M68K_TST32(_mv); }
    { uint16_t _mv = (uint16_t)(0x32); bus_write16(0x10FDCC, _mv); M68K_TST16(_mv); }
    func_table_call(0xC00468);
    g_m68k.a[5] = 0x108000;
    return;
}

/* $01A914-$01A962  (19 instructions, 78 bytes) */
void sub_01A914(void) {
    { uint8_t _mv = (uint8_t)(0x0); bus_write8(0x10FDC2, _mv); M68K_TST8(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(0x10FDC6))); M68K_TST8((uint8_t)g_m68k.d[0]);
    M68K_CMP8(g_m68k.d[0], 0x81);
    if (M68K_CC_EQ) goto loc_01A94C;
    M68K_CMP8(g_m68k.d[0], 0x83);
    if (M68K_CC_EQ) goto loc_01A94C;
    M68K_CMP8(g_m68k.d[0], 0x85);
    if (M68K_CC_EQ) goto loc_01A94C;
    M68K_CMP8(g_m68k.d[0], 0x84);
    if (M68K_CC_NE) goto loc_01A958;
    M68K_CMP8(bus_read8(g_m68k.a[5] + (-0x4b08)), 0xff);
    if (M68K_CC_EQ) goto loc_01A94C;
    func_table_call(0x1a8ee);
    func_table_call(0x1a8b6);
    goto loc_01A958;
loc_01A94C:
    func_table_call(0xC0046E);
    g_m68k.a[5] = 0x108000;
loc_01A958:
    { uint8_t _mv = (uint8_t)(0x1); bus_write8(0x10FDC2, _mv); M68K_TST8(_mv); }
    return;
}

/* $01ACD6-$01AD06  (23 instructions, 48 bytes) */
void jt_01ACD6(void) {
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_SUB8(g_m68k.d[4], 0x8);
    /* WARNING: function did not end with RTS */
}

/* $01AD62-$01ADB0  (34 instructions, 78 bytes) */
void jt_01AD62(void) {
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], g_m68k.d[5]);
    M68K_BTST(g_m68k.d[5], g_m68k.d[2]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_BTST(g_m68k.d[1], g_m68k.d[0]);
    /* TODO $01AD90: movep.w $909(a1), d2  [05 09 09 09] */
    /* TODO $01AD94: movep.w $d0d(a1), d4  [09 09 0D 0D] */
    M68K_BCLR(g_m68k.d[0], g_m68k.d[6]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_BTST(g_m68k.d[1], g_m68k.d[0]);
    /* TODO $01AD9E: movep.w $909(a1), d0  [01 09 09 09] */
    /* TODO $01ADA2: movep.w $d11(a1), d4  [09 09 0D 11] */
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); bus_write8(g_m68k.a[0] + (-0x80) + (int16_t)(uint16_t)g_m68k.a[0], _mv); M68K_TST8(_mv); }
    M68K_BTST(g_m68k.d[1], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(_postinc8(1)); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(1)); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $01ADEE-$01AE1E  (22 instructions, 48 bytes) */
void jt_01ADEE(void) {
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], g_m68k.d[6]);
    M68K_ADD8(g_m68k.d[6], 0x80);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_AND8(g_m68k.d[2], 0x6);
    /* WARNING: function did not end with RTS */
}

/* $01AE7A-$01AF06  (64 instructions, 140 bytes) */
void jt_01AE7A(void) {
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_BTST(g_m68k.d[7], g_m68k.d[3]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], g_m68k.d[3]);
    M68K_BTST(g_m68k.d[7], g_m68k.d[1]);
    /* TODO $01AE9C: movep.w -$7f80(a3), d3  [07 0B 80 80] */
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_BTST(g_m68k.d[3], g_m68k.d[1]);
    M68K_BTST(g_m68k.d[3], g_m68k.d[1]);
    /* TODO $01AEAA: movep.w $b0b(a3), d5  [0B 0B 0B 0B] */
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_BTST(g_m68k.d[3], g_m68k.d[1]);
    { uint8_t _mv = (uint8_t)(g_m68k.d[3]); g_m68k.a[7] -= 1; bus_write8(g_m68k.a[7], _mv); M68K_TST8(_mv); }
    /* TODO $01AEB8: movep.w $b0b(a3), d5  [0B 0B 0B 0B] */
    M68K_BCLR(g_m68k.d[0], g_m68k.d[7]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(_postinc8(7)); g_m68k.a[7] -= 1; bus_write8(g_m68k.a[7], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(3)); g_m68k.a[7] -= 1; bus_write8(g_m68k.a[7], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(3)); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    /* TODO $01AEC8: movep.w $f0f(a3), d5  [0B 0B 0F 0F] */
    M68K_BCLR(g_m68k.d[0], g_m68k.d[7]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(_postinc8(3)); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(3)); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[3])); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[3])); g_m68k.a[1] -= 1; bus_write8(g_m68k.a[1], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); bus_write8(g_m68k.a[1] + (-0x80) + (int16_t)(uint16_t)g_m68k.a[0], _mv); M68K_TST8(_mv); }
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(_postinc8(3)); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[7])); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[3])); g_m68k.a[1] -= 1; bus_write8(g_m68k.a[1], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); bus_write8(g_m68k.a[1] + (-0x80) + (int16_t)(uint16_t)g_m68k.a[0], _mv); M68K_TST8(_mv); }
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[7])); g_m68k.a[3] -= 1; bus_write8(g_m68k.a[3], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[3])); g_m68k.a[3] -= 1; bus_write8(g_m68k.a[3], _mv); M68K_TST8(_mv); }
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $01AF06-$01AF18  (9 instructions, 18 bytes) */
void jt_01AF06(void) {
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $01AF92-$01AFD0  (28 instructions, 62 bytes) */
void jt_01AF92(void) {
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    /* TODO $01AFA4: movep.w $980(a1), d2  [05 09 09 80] */
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], g_m68k.d[5]);
    M68K_BTST(g_m68k.d[5], g_m68k.d[2]);
    /* TODO $01AFB4: movep.w -$7f80(a1), d4  [09 09 80 80] */
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], g_m68k.d[5]);
    M68K_BTST(g_m68k.d[5], g_m68k.d[2]);
    /* TODO $01AFC2: movep.w $d80(a5), d2  [05 0D 0D 80] */
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], g_m68k.d[1]);
    M68K_BTST(g_m68k.d[5], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $01B01E-$01B050  (20 instructions, 50 bytes) */
void jt_01B01E(void) {
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD8(g_m68k.d[6], 0xa);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], g_m68k.d[6]);
    M68K_ADD8(g_m68k.d[6], 0xa);
    M68K_EOR32(g_m68k.d[0], 0x80808080);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], g_m68k.d[2]);
    M68K_ADD8(g_m68k.d[6], 0xe);
    /* WARNING: function did not end with RTS */
}

/* $01B0AA-$01B0E8  (30 instructions, 62 bytes) */
void jt_01B0AA(void) {
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_BTST(g_m68k.d[7], g_m68k.d[1]);
    M68K_BTST(g_m68k.d[7], g_m68k.d[3]);
    M68K_BCLR(g_m68k.d[0], g_m68k.d[5]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_BTST(g_m68k.d[7], g_m68k.d[1]);
    M68K_BTST(g_m68k.d[7], g_m68k.d[3]);
    M68K_BCLR(g_m68k.d[0], g_m68k.d[5]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_BTST(g_m68k.d[7], g_m68k.d[1]);
    /* TODO $01B0DA: movep.w $b0f(a3), d3  [07 0B 0B 0F] */
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(_postinc8(7)); g_m68k.a[7] -= 1; bus_write8(g_m68k.a[7], _mv); M68K_TST8(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $01B136-$01B13A  (2 instructions, 4 bytes) */
void jt_01B136(void) {
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $01B1C2-$01B24E  (63 instructions, 140 bytes) */
void jt_01B1C2(void) {
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], g_m68k.d[5]);
    /* TODO $01B1D6: movep.w $90d(a1), d4  [09 09 09 0D] */
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], g_m68k.d[5]);
    /* TODO $01B1E4: movep.w $90d(a1), d4  [09 09 09 0D] */
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_BTST(g_m68k.d[5], g_m68k.d[0]);
    /* TODO $01B1F2: movep.w $90d(a1), d2  [05 09 09 0D] */
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_BTST(g_m68k.d[1], g_m68k.d[0]);
    M68K_BTST(bus_read8(g_m68k.a[1]), g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[1])); g_m68k.a[0] -= 1; bus_write8(g_m68k.a[0], _mv); M68K_TST8(_mv); }
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_BTST(g_m68k.d[1], g_m68k.d[0]);
    M68K_BTST(bus_read8(g_m68k.a[1]), g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[1])); g_m68k.a[0] -= 1; bus_write8(g_m68k.a[0], _mv); M68K_TST8(_mv); }
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], g_m68k.d[1]);
    M68K_BTST(g_m68k.d[1], g_m68k.d[0]);
    M68K_BTST(bus_read8(g_m68k.a[1]), g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); bus_write8(g_m68k.a[0] + (-0x80) + (int16_t)(uint16_t)g_m68k.a[0], _mv); M68K_TST8(_mv); }
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], _postinc8(5));
    { uint8_t _mv = (uint8_t)(_postinc8(1)); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[5])); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); bus_write8(g_m68k.a[2] + (-0x80) + (int16_t)(uint16_t)g_m68k.a[0], _mv); M68K_TST8(_mv); }
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], _postinc8(5));
    { uint8_t _mv = (uint8_t)(_postinc8(1)); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(1)); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); bus_write8(g_m68k.a[2] + (-0x80) + (int16_t)(uint16_t)g_m68k.a[0], _mv); M68K_TST8(_mv); }
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], _postinc8(5));
    { uint8_t _mv = (uint8_t)(_postinc8(1)); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(1)); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); bus_write8(g_m68k.a[2] + (-0x80) + (int16_t)(uint16_t)g_m68k.a[0], _mv); M68K_TST8(_mv); }
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $01B24E-$01B270  (16 instructions, 34 bytes) */
void jt_01B24E(void) {
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD8(g_m68k.d[6], 0xa);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], g_m68k.d[6]);
    /* WARNING: function did not end with RTS */
}

/* $01B2DA-$01B366  (63 instructions, 140 bytes) */
void jt_01B2DA(void) {
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], g_m68k.d[7]);
    /* TODO $01B2F0: movep.w -$7f80(a3), d3  [07 0B 80 80] */
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_BTST(g_m68k.d[7], g_m68k.d[3]);
    /* TODO $01B2FE: movep.w $b80(a3), d5  [0B 0B 0B 80] */
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], g_m68k.d[3]);
    /* TODO $01B30A: movep.w $b0b(a3), d1  [03 0B 0B 0B] */
    M68K_BCLR(g_m68k.d[0], g_m68k.d[5]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_BTST(g_m68k.d[3], g_m68k.d[1]);
    M68K_BTST(bus_read8(g_m68k.a[3]), g_m68k.d[1]);
    /* TODO $01B31A: movep.w $f80(a7), d5  [0B 0F 0F 80] */
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], _postinc8(7));
    M68K_BTST(g_m68k.d[3], g_m68k.d[1]);
    M68K_BTST(bus_read8(g_m68k.a[3]), g_m68k.d[1]);
    /* TODO $01B328: movep.w $f80(a7), d7  [0F 0F 0F 80] */
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(_postinc8(7)); g_m68k.a[7] -= 1; bus_write8(g_m68k.a[7], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[3]); g_m68k.a[7] -= 1; bus_write8(g_m68k.a[7], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[3])); g_m68k.a[1] -= 1; bus_write8(g_m68k.a[1], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[3])); g_m68k.a[1] -= 1; bus_write8(g_m68k.a[1], _mv); M68K_TST8(_mv); }
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(_postinc8(3)); g_m68k.a[7] -= 1; bus_write8(g_m68k.a[7], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(3)); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[3])); g_m68k.a[3] -= 1; bus_write8(g_m68k.a[3], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); bus_write8(g_m68k.a[1] + (-0x80) + (int16_t)(uint16_t)g_m68k.a[0], _mv); M68K_TST8(_mv); }
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(_postinc8(3)); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(3)); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[3])); g_m68k.a[3] -= 1; bus_write8(g_m68k.a[3], _mv); M68K_TST8(_mv); }
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[7])); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); bus_write8(g_m68k.a[3] + (-0x80) + (int16_t)(uint16_t)g_m68k.a[0], _mv); M68K_TST8(_mv); }
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $01B366-$01B37C  (11 instructions, 22 bytes) */
void jt_01B366(void) {
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $01B3F2-$01B47E  (66 instructions, 140 bytes) */
void jt_01B3F2(void) {
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    /* TODO $01B408: movep.w -$7f80(a1), d4  [09 09 80 80] */
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    /* TODO $01B414: movep.w $90d(a1), d2  [05 09 09 0D] */
    M68K_BCLR(g_m68k.d[0], g_m68k.d[6]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_BTST(g_m68k.d[5], g_m68k.d[2]);
    M68K_BTST(g_m68k.d[5], g_m68k.d[2]);
    /* TODO $01B424: movep.w $d0d(a5), d6  [0D 0D 0D 0D] */
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], g_m68k.d[1]);
    M68K_BTST(g_m68k.d[5], g_m68k.d[2]);
    M68K_BTST(g_m68k.d[5], g_m68k.d[2]);
    M68K_BTST(bus_read8(g_m68k.a[1]), g_m68k.d[6]);
    /* TODO $01B434: movep.w -$7f80(a5), d6  [0D 0D 80 80] */
    M68K_OR8(g_m68k.d[0], g_m68k.d[1]);
    M68K_BTST(g_m68k.d[1], g_m68k.d[0]);
    M68K_BTST(g_m68k.d[5], g_m68k.d[2]);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[5])); g_m68k.a[2] -= 1; bus_write8(g_m68k.a[2], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[1])); g_m68k.a[2] -= 1; bus_write8(g_m68k.a[2], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[1])); g_m68k.a[0] -= 1; bus_write8(g_m68k.a[0], _mv); M68K_TST8(_mv); }
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], _postinc8(5));
    { uint8_t _mv = (uint8_t)(_postinc8(5)); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[5])); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[5])); g_m68k.a[2] -= 1; bus_write8(g_m68k.a[2], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[5])); g_m68k.a[2] -= 1; bus_write8(g_m68k.a[2], _mv); M68K_TST8(_mv); }
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], _postinc8(5));
    { uint8_t _mv = (uint8_t)(_postinc8(5)); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[5])); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[5])); g_m68k.a[2] -= 1; bus_write8(g_m68k.a[2], _mv); M68K_TST8(_mv); }
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(_postinc8(1)); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(1)); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $01B47E-$01B4A2  (18 instructions, 36 bytes) */
void jt_01B47E(void) {
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], g_m68k.d[6]);
    /* WARNING: function did not end with RTS */
}

/* $01B50A-$01B596  (66 instructions, 140 bytes) */
void jt_01B50A(void) {
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    /* TODO $01B52E: movep.w $b80(a3), d5  [0B 0B 0B 80] */
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], g_m68k.d[3]);
    M68K_BTST(g_m68k.d[3], g_m68k.d[1]);
    M68K_BTST(g_m68k.d[7], g_m68k.d[3]);
    M68K_BTST(g_m68k.d[7], g_m68k.d[3]);
    /* TODO $01B53C: movep.w $f0f(a3), d3  [07 0B 0F 0F] */
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], _postinc8(7));
    { uint8_t _mv = (uint8_t)(g_m68k.d[3]); g_m68k.a[7] -= 1; bus_write8(g_m68k.a[7], _mv); M68K_TST8(_mv); }
    M68K_BTST(g_m68k.d[7], g_m68k.d[3]);
    M68K_BTST(g_m68k.d[7], g_m68k.d[3]);
    /* TODO $01B54A: movep.w $f0f(a7), d3  [07 0F 0F 0F] */
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], _postinc8(7));
    { uint8_t _mv = (uint8_t)(_postinc8(7)); g_m68k.a[7] -= 1; bus_write8(g_m68k.a[7], _mv); M68K_TST8(_mv); }
    M68K_BTST(bus_read8(g_m68k.a[7]), g_m68k.d[3]);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[7])); g_m68k.a[3] -= 1; bus_write8(g_m68k.a[3], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[3])); g_m68k.a[3] -= 1; bus_write8(g_m68k.a[3], _mv); M68K_TST8(_mv); }
    /* TODO $01B55A: movep.w -$7f80(a7), d7  [0F 0F 80 80] */
    M68K_OR8(g_m68k.d[0], _postinc8(7));
    { uint8_t _mv = (uint8_t)(_postinc8(3)); g_m68k.a[7] -= 1; bus_write8(g_m68k.a[7], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[7])); g_m68k.a[3] -= 1; bus_write8(g_m68k.a[3], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[7])); g_m68k.a[3] -= 1; bus_write8(g_m68k.a[3], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[3])); g_m68k.a[3] -= 1; bus_write8(g_m68k.a[3], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[3])); g_m68k.a[1] -= 1; bus_write8(g_m68k.a[1], _mv); M68K_TST8(_mv); }
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], _postinc8(3));
    { uint8_t _mv = (uint8_t)(_postinc8(3)); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[7])); g_m68k.a[3] -= 1; bus_write8(g_m68k.a[3], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[7])); g_m68k.a[3] -= 1; bus_write8(g_m68k.a[3], _mv); M68K_TST8(_mv); }
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $01B596-$01B5C6  (23 instructions, 48 bytes) */
void jt_01B596(void) {
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], g_m68k.d[4]);
    M68K_SUB8(g_m68k.d[4], 0x8);
    /* WARNING: function did not end with RTS */
}

/* $01B622-$01B6AE  (66 instructions, 140 bytes) */
void jt_01B622(void) {
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], g_m68k.d[5]);
    M68K_BTST(g_m68k.d[5], g_m68k.d[2]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], g_m68k.d[1]);
    M68K_BTST(g_m68k.d[5], g_m68k.d[0]);
    /* TODO $01B650: movep.w $909(a1), d4  [09 09 09 09] */
    /* TODO $01B654: movep.w $d0d(a5), d4  [09 0D 0D 0D] */
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], g_m68k.d[1]);
    M68K_BTST(g_m68k.d[1], g_m68k.d[0]);
    /* TODO $01B65E: movep.w $909(a1), d4  [09 09 09 09] */
    /* TODO $01B662: movep.w $1111(a5), d4  [09 0D 11 11] */
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], g_m68k.d[1]);
    M68K_BTST(bus_read8(g_m68k.a[5]), g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(_postinc8(1)); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(1)); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[1])); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[1])); g_m68k.a[0] -= 1; bus_write8(g_m68k.a[0], _mv); M68K_TST8(_mv); }
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], _postinc8(5));
    { uint8_t _mv = (uint8_t)(_postinc8(5)); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(1)); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(1)); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[5]); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[1])); g_m68k.a[0] -= 1; bus_write8(g_m68k.a[0], _mv); M68K_TST8(_mv); }
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(_postinc8(1)); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(1)); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[5]); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    M68K_BTST(g_m68k.d[5], g_m68k.d[2]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $01B6AE-$01B6DE  (22 instructions, 48 bytes) */
void jt_01B6AE(void) {
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], g_m68k.d[2]);
    M68K_ADD8(g_m68k.d[6], 0xa);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], g_m68k.d[2]);
    M68K_AND8(g_m68k.d[2], 0xa);
    /* WARNING: function did not end with RTS */
}

/* $01B73A-$01B776  (29 instructions, 60 bytes) */
void jt_01B73A(void) {
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], g_m68k.d[7]);
    M68K_BCLR(g_m68k.d[0], g_m68k.d[3]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_BTST(g_m68k.d[3], g_m68k.d[1]);
    M68K_BTST(g_m68k.d[7], g_m68k.d[3]);
    M68K_BCLR(g_m68k.d[0], g_m68k.d[5]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], g_m68k.d[3]);
    M68K_BTST(g_m68k.d[3], g_m68k.d[1]);
    /* TODO $01B768: movep.w $b0b(a3), d5  [0B 0B 0B 0B] */
    M68K_BCLR(g_m68k.d[0], g_m68k.d[5]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], _postinc8(7));
    { uint8_t _mv = (uint8_t)(_postinc8(3)); g_m68k.a[7] -= 1; bus_write8(g_m68k.a[7], _mv); M68K_TST8(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $01B7C6-$01B7D8  (9 instructions, 18 bytes) */
void jt_01B7C6(void) {
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], g_m68k.d[4]);
    /* WARNING: function did not end with RTS */
}

/* $01B852-$01B880  (20 instructions, 46 bytes) */
void jt_01B852(void) {
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    /* TODO $01B856: movep.w -$7f80(a1), d2  [05 09 80 80] */
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_BTST(g_m68k.d[5], g_m68k.d[2]);
    /* TODO $01B864: movep.w $980(a1), d2  [05 09 09 80] */
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_BTST(g_m68k.d[5], g_m68k.d[0]);
    M68K_BTST(g_m68k.d[5], g_m68k.d[2]);
    /* TODO $01B874: movep.w -$7f80(a5), d4  [09 0D 80 80] */
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_BTST(g_m68k.d[1], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $01B8DE-$01B8E2  (2 instructions, 4 bytes) */
void jt_01B8DE(void) {
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $01B96A-$01B99A  (22 instructions, 48 bytes) */
void jt_01B96A(void) {
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], g_m68k.d[3]);
    M68K_BTST(g_m68k.d[7], g_m68k.d[3]);
    M68K_BTST(g_m68k.d[7], g_m68k.d[3]);
    M68K_BCLR(g_m68k.d[0], g_m68k.d[5]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], g_m68k.d[3]);
    M68K_BTST(g_m68k.d[7], g_m68k.d[1]);
    /* TODO $01B97E: movep.w $b80(a3), d3  [07 0B 0B 80] */
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], _postinc8(7));
    { uint8_t _mv = (uint8_t)(g_m68k.d[7]); g_m68k.a[7] -= 1; bus_write8(g_m68k.a[7], _mv); M68K_TST8(_mv); }
    /* TODO $01B98C: movep.w $f80(a7), d3  [07 0F 0F 80] */
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(_postinc8(7)); g_m68k.a[7] -= 1; bus_write8(g_m68k.a[7], _mv); M68K_TST8(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $01B9F6-$01B9FA  (2 instructions, 4 bytes) */
void jt_01B9F6(void) {
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $01BA82-$01BB0E  (64 instructions, 140 bytes) */
void jt_01BA82(void) {
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], g_m68k.d[5]);
    /* TODO $01BA88: movep.w $909(a1), d4  [09 09 09 09] */
    M68K_BCLR(g_m68k.d[0], g_m68k.d[6]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], g_m68k.d[5]);
    /* TODO $01BA96: movep.w $90d(a1), d2  [05 09 09 0D] */
    M68K_BCLR(g_m68k.d[0], g_m68k.d[6]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], g_m68k.d[1]);
    /* TODO $01BAA4: movep.w $911(a1), d0  [01 09 09 11] */
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); bus_write8(g_m68k.a[0] + (-0x80) + (int16_t)(uint16_t)g_m68k.a[0], _mv); M68K_TST8(_mv); }
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], g_m68k.d[1]);
    M68K_BTST(bus_read8(g_m68k.a[1]), g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[1])); g_m68k.a[0] -= 1; bus_write8(g_m68k.a[0], _mv); M68K_TST8(_mv); }
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_BTST(g_m68k.d[1], g_m68k.d[0]);
    M68K_BTST(bus_read8(g_m68k.a[1]), g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[1])); g_m68k.a[0] -= 1; bus_write8(g_m68k.a[0], _mv); M68K_TST8(_mv); }
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_BTST(g_m68k.d[1], g_m68k.d[0]);
    M68K_BTST(bus_read8(g_m68k.a[1]), g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[1])); g_m68k.a[0] -= 1; bus_write8(g_m68k.a[0], _mv); M68K_TST8(_mv); }
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_BTST(g_m68k.d[1], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[1])); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[1])); g_m68k.a[0] -= 1; bus_write8(g_m68k.a[0], _mv); M68K_TST8(_mv); }
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], _postinc8(5));
    { uint8_t _mv = (uint8_t)(_postinc8(1)); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[5])); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); bus_write8(g_m68k.a[2] + (-0x80) + (int16_t)(uint16_t)g_m68k.a[0], _mv); M68K_TST8(_mv); }
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], _postinc8(5));
    { uint8_t _mv = (uint8_t)(_postinc8(1)); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(1)); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); bus_write8(g_m68k.a[2] + (-0x80) + (int16_t)(uint16_t)g_m68k.a[0], _mv); M68K_TST8(_mv); }
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $01BB0E-$01BB16  (4 instructions, 8 bytes) */
void jt_01BB0E(void) {
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], g_m68k.d[6]);
    /* WARNING: function did not end with RTS */
}
