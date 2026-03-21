/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $00B458 - $00C1EC */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

/* $00B458-$00B4D0  (23 instructions, 120 bytes) */
void jt_00B458(void) {
    func_table_call(0x004248);
    M68K_CMP16(g_m68k.d[0], 0x0);
    if (M68K_CC_NE) goto loc_00B4CE;
    M68K_CMP16(bus_read16(0x101202), 0x6);
    if (M68K_CC_LT) goto loc_00B4BC;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x3)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1011FC))); M68K_TST16((uint16_t)g_m68k.d[1]);
    func_table_call(0x0009D6);
    func_table_call(0x016AC4);
    func_table_call(0x0011A8);
    g_m68k.a[0] = 0x100002;
    g_m68k.a[1] = 0x00B4D0;
    func_table_call(0x00117C);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(0x101212, _mv); M68K_TST16(_mv); }
    func_table_call(0x007D54);
    func_table_call(0x0011CE);
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(0x101204, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    goto loc_00B4CE;
loc_00B4BC:
    { uint32_t _ea = 0x101202; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(0x101226, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
loc_00B4CE:
    return;
}

/* $00B4D4-$00B564  (29 instructions, 144 bytes) */
void jt_00B4D4(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x4)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x015256);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x7)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x015256);
    M68K_CMP16(bus_read16(0x100408), 0x0);
    if (M68K_CC_NE) goto loc_00B51A;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x0009F4);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x3)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1011FC))); M68K_TST16((uint16_t)g_m68k.d[1]);
    func_table_call(0x0009D6);
    { uint16_t _mv = (uint16_t)(0xffff); bus_write16(0x101204, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    goto loc_00B562;
loc_00B51A:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x2e)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x015256);
    func_table_call(0x015282);
    M68K_CMP16(g_m68k.d[0], 0x0);
    if (M68K_CC_NE) goto loc_00B55E;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x0009F4);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x2)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1011FC))); M68K_TST16((uint16_t)g_m68k.d[1]);
    func_table_call(0x0009D6);
    func_table_call(0x0015B6);
    func_table_call(0x0014F6);
    { uint16_t _mv = (uint16_t)(0x7); bus_write16(0x101226, _mv); M68K_TST16(_mv); }
loc_00B55E:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
loc_00B562:
    return;
}

/* $00B564-$00B5D0  (22 instructions, 108 bytes) */
void jt_00B564(void) {
    func_table_call(0x0014F6);
    func_table_call(0x015354);
    M68K_CMP16(g_m68k.d[0], 0x0);
    if (M68K_CC_NE) goto loc_00B5CE;
    M68K_CMP16(bus_read16(0x10120C), 0x0);
    if (M68K_CC_NE) goto loc_00B5A8;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x0009F4);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1011FC))); M68K_TST16((uint16_t)g_m68k.d[1]);
    func_table_call(0x0009D6);
    { uint16_t _mv = (uint16_t)(0x8); bus_write16(0x101226, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    goto loc_00B5CE;
loc_00B5A8:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x0009F4);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x3)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1011FC))); M68K_TST16((uint16_t)g_m68k.d[1]);
    func_table_call(0x0009D6);
    { uint16_t _mv = (uint16_t)(0xffff); bus_write16(0x101204, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
loc_00B5CE:
    return;
}

/* $00B5D0-$00B60E  (13 instructions, 62 bytes) */
void jt_00B5D0(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x4)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x015256);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x7)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x015256);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x22)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x015256);
    func_table_call(0x000A26);
    func_table_call(0x015C20);
    M68K_CMP16(g_m68k.d[0], 0x0);
    if (M68K_CC_NE) goto loc_00B608;
    { uint16_t _mv = (uint16_t)(0x9); bus_write16(0x101226, _mv); M68K_TST16(_mv); }
loc_00B608:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00B60E-$00B628  (6 instructions, 26 bytes) */
void jt_00B60E(void) {
    func_table_call(0x015C9C);
    M68K_CMP16(g_m68k.d[0], 0x0);
    if (M68K_CC_NE) goto loc_00B622;
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(0x101226, _mv); M68K_TST16(_mv); }
loc_00B622:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00B628-$00B648  (6 instructions, 32 bytes) */
void sub_00B628(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x101202))); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x00D68C);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(0x101222, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(0x101228, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00B648-$00B65A  (6 instructions, 18 bytes) */
void sub_00B648(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x101228))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[0] = bus_read32(0xb65a + (int16_t)(uint16_t)g_m68k.d[0]);
    func_table_call(g_m68k.a[0]);
    return;
}

/* $00B67A-$00B6A8  (10 instructions, 46 bytes) */
void jt_00B67A(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x4)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x015256);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x7)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x015256);
    func_table_call(0x00B978);
    M68K_CMP16(g_m68k.d[0], 0x0);
    if (M68K_CC_NE) goto loc_00B6A2;
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(0x101228, _mv); M68K_TST16(_mv); }
loc_00B6A2:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00B6A8-$00B6C4  (6 instructions, 28 bytes) */
void jt_00B6A8(void) {
    func_table_call(0x00B98C);
    M68K_CMP16(g_m68k.d[0], 0x0);
    if (M68K_CC_NE) goto loc_00B6BE;
    { uint16_t _mv = (uint16_t)(0x2); bus_write16(0x101228, _mv); M68K_TST16(_mv); }
loc_00B6BE:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00B6C4-$00B6E0  (6 instructions, 28 bytes) */
void jt_00B6C4(void) {
    func_table_call(0x00B826);
    M68K_CMP16(g_m68k.d[0], 0x0);
    if (M68K_CC_NE) goto loc_00B6DA;
    { uint16_t _mv = (uint16_t)(0x3); bus_write16(0x101228, _mv); M68K_TST16(_mv); }
loc_00B6DA:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00B6E0-$00B78C  (31 instructions, 172 bytes) */
void jt_00B6E0(void) {
    M68K_TST8(bus_read8(0x10FD82));
    if (M68K_CC_NE) goto loc_00B704;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1011FC))); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x010DE2);
    M68K_CMP16(g_m68k.d[0], 0x1);
    if (M68K_CC_NE) goto loc_00B704;
    { uint16_t _mv = (uint16_t)(0x6); bus_write16(0x101228, _mv); M68K_TST16(_mv); }
    return;
loc_00B704:
    func_table_call(0x00B844);
    M68K_CMP16(g_m68k.d[0], 0x0);
    if (M68K_CC_NE) goto loc_00B78A;
    M68K_CMP16(bus_read16(0x101208), 0x0);
    if (M68K_CC_NE) goto loc_00B776;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x101202))); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x016AE8);
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); bus_write32(0x101216, _mv); M68K_TST32(_mv); }
    func_table_call(0x0012AC);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(0x101214, _mv); M68K_TST16(_mv); }
    func_table_call(0x007A6C);
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); bus_write16(0x101220, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(0x1011FA)); bus_write16(0x10121E, _mv); M68K_TST16(_mv); }
    g_m68k.a[0] = 0x1011FE;
    g_m68k.a[1] = 0x10121A;
    func_table_call(0x011A02);
    func_table_call(0x0012FA);
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(0x101206, _mv); M68K_TST16(_mv); }
    goto loc_00B77E;
loc_00B776:
    { uint16_t _mv = (uint16_t)(0xffff); bus_write16(0x101206, _mv); M68K_TST16(_mv); }
loc_00B77E:
    { uint16_t _mv = (uint16_t)(0x4); bus_write16(0x101228, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
loc_00B78A:
    return;
}

/* $00B78C-$00B7BC  (10 instructions, 48 bytes) */
void jt_00B78C(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x6)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x015256);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x9)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x015256);
    func_table_call(0x00BE50);
    M68K_CMP16(g_m68k.d[0], 0x0);
    if (M68K_CC_NE) goto loc_00B7B6;
    { uint16_t _mv = (uint16_t)(0x5); bus_write16(0x101228, _mv); M68K_TST16(_mv); }
loc_00B7B6:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00B7BC-$00B7EC  (11 instructions, 48 bytes) */
void jt_00B7BC(void) {
    func_table_call(0x00BE90);
    M68K_CMP16(g_m68k.d[0], 0x0);
    if (M68K_CC_NE) goto loc_00B7E6;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x4)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x015256);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x7)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x015256);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    goto loc_00B7EA;
loc_00B7E6:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
loc_00B7EA:
    return;
}

/* $00B7EC-$00B800  (4 instructions, 20 bytes) */
void jt_00B7EC(void) {
    func_table_call(0x00FD34);
    { uint16_t _mv = (uint16_t)(0x7); bus_write16(0x101228, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00B800-$00B826  (8 instructions, 38 bytes) */
void jt_00B800(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1011FC))); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x010DE2);
    M68K_CMP16(g_m68k.d[0], 0x1);
    if (M68K_CC_NE) goto loc_00B820;
    func_table_call(0x00FD4E);
    { uint16_t _mv = (uint16_t)(0x3); bus_write16(0x101228, _mv); M68K_TST16(_mv); }
loc_00B820:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00B826-$00B844  (6 instructions, 30 bytes) */
void sub_00B826(void) {
    func_table_call(0x00FD74);
    func_table_call(0x00FDB8);
    func_table_call(0x00FE60);
    func_table_call(0x0100BE);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00B844-$00B8C0  (23 instructions, 124 bytes) */
void sub_00B844(void) {
    g_m68k.a[6] = 0x101508;
    func_table_call(0x00D956);
    func_table_call(0x00D6C8);
    M68K_CMP16(g_m68k.d[0], 0x0);
    if (M68K_CC_NE) goto loc_00B878;
    func_table_call(0x00FE0A);
    func_table_call(0x00FECC);
    func_table_call(0x0100D2);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    goto loc_00B8BE;
loc_00B878:
    func_table_call(0x00FE0A);
    func_table_call(0x00FECC);
    func_table_call(0x0100D2);
    func_table_call(0x00F6EC);
    func_table_call(0x00F5DA);
    func_table_call(0x00D566);
    func_table_call(0x014760);
    func_table_call(0x019F82);
    func_table_call(0x014160);
    func_table_call(0x01229E);
    func_table_call(0x013546);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
loc_00B8BE:
    return;
}

/* $00B978-$00B98C  (4 instructions, 20 bytes) */
void sub_00B978(void) {
    func_table_call(0x00F9A8);
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(0x101238, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00B98C-$00B9A8  (8 instructions, 28 bytes) */
void sub_00B98C(void) {
    g_m68k.a[6] = 0x101508;
    bus_write16(g_m68k.a[6] + 0x14, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x101238))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[0] = bus_read32(0xb9a8 + (int16_t)(uint16_t)g_m68k.d[0]);
    func_table_call(g_m68k.a[0]);
    return;
}

/* $00B9C0-$00BA62  (30 instructions, 162 bytes) */
void jt_00B9C0(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0xc2)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x015256);
    func_table_call(0x001336);
    g_m68k.d[0] = (uint32_t)(int32_t)(int8_t)(0x0); M68K_TST32(g_m68k.d[0]);
    func_table_call(0x011646);
    g_m68k.d[0] = (uint32_t)(int32_t)(int8_t)(0x1); M68K_TST32(g_m68k.d[0]);
    g_m68k.d[1] = (uint32_t)(int32_t)(int8_t)(0x0); M68K_TST32(g_m68k.d[1]);
    func_table_call(0x011602);
    func_table_call(0x0169A8);
    g_m68k.a[6] = 0x101508;
    func_table_call(0x00D72A);
    func_table_call(0x00F6E6);
    func_table_call(0x00D6A8);
    func_table_call(0x00DF02);
    func_table_call(0x00DEB4);
    func_table_call(0x00DAA2);
    func_table_call(0x00F130);
    { uint16_t _mv = (uint16_t)(0xc0); bus_write16(g_m68k.a[6] + 0xa, _mv); M68K_TST16(_mv); }
    func_table_call(0x00EB9E);
    func_table_call(0x00EDC6);
    func_table_call(0x00EDF4);
    func_table_call(0x00EEA6);
    func_table_call(0x014760);
    func_table_call(0x019F82);
    func_table_call(0x014160);
    func_table_call(0x01229E);
    func_table_call(0x013546);
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(0x101238, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00BA62-$00BAB6  (16 instructions, 84 bytes) */
void jt_00BA62(void) {
    g_m68k.a[6] = 0x101508;
    func_table_call(0x00EEA6);
    func_table_call(0x00FA18);
    func_table_call(0x00F9B2);
    func_table_call(0x014160);
    func_table_call(0x01229E);
    func_table_call(0x011694);
    M68K_CMP16(g_m68k.d[0], 0x0);
    if (M68K_CC_NE) goto loc_00BAB0;
    M68K_CMP16(bus_read16(0x10042C), 0x1);
    if (M68K_CC_NE) goto loc_00BAA2;
    func_table_call(0x00F8AE);
loc_00BAA2:
    func_table_call(0x001340);
    { uint16_t _mv = (uint16_t)(0x2); bus_write16(0x101238, _mv); M68K_TST16(_mv); }
loc_00BAB0:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00BAB6-$00BAD4  (5 instructions, 30 bytes) */
void jt_00BAB6(void) {
    M68K_CMP16(bus_read16(0x101210), 0x1);
    if (M68K_CC_NE) goto loc_00BAC6;
    func_table_call(0x00FC74);
loc_00BAC6:
    { uint16_t _mv = (uint16_t)(0x3); bus_write16(0x101238, _mv); M68K_TST16(_mv); }
    { func_table_call(0x00BAD6); return; }
    /* WARNING: function did not end with RTS */
}

/* $00BAD6-$00BB6A  (27 instructions, 148 bytes) */
void jt_00BAD6(void) {
    g_m68k.a[6] = 0x101508;
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0xa), 0x100);
    if (M68K_CC_LT) goto loc_00BB2A;
    { uint16_t _mv = (uint16_t)(0x100); bus_write16(g_m68k.a[6] + 0xa, _mv); M68K_TST16(_mv); }
    func_table_call(0x00EB9E);
    func_table_call(0x00EDC6);
    func_table_call(0x00EDF4);
    func_table_call(0x00EEA6);
    func_table_call(0x00FA18);
    func_table_call(0x00F9B2);
    func_table_call(0x014160);
    func_table_call(0x01229E);
    func_table_call(0x013546);
    { uint16_t _mv = (uint16_t)(0x4); bus_write16(0x101238, _mv); M68K_TST16(_mv); }
    goto loc_00BB64;
loc_00BB2A:
    { uint32_t _ea = (g_m68k.a[6] + 0xa); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    func_table_call(0x00EB9E);
    func_table_call(0x00EDC6);
    func_table_call(0x00EDF4);
    func_table_call(0x00EEA6);
    func_table_call(0x00FA18);
    func_table_call(0x00F9B2);
    func_table_call(0x014160);
    func_table_call(0x01229E);
    func_table_call(0x013546);
loc_00BB64:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00BB6A-$00BB7C  (4 instructions, 18 bytes) */
void jt_00BB6A(void) {
    func_table_call(0xbb92);
    { uint16_t _mv = (uint16_t)(0x5); bus_write16(0x101238, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00BB7C-$00BB92  (7 instructions, 22 bytes) */
void jt_00BB7C(void) {
    func_table_call(0xbbbc);
    M68K_CMP16(g_m68k.d[0], 0x0);
    if (M68K_CC_NE) goto loc_00BB8C;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    goto loc_00BB90;
loc_00BB8C:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
loc_00BB90:
    return;
}

/* $00BC22-$00BC2C  (2 instructions, 10 bytes) */
void jt_00BC22(void) {
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(g_m68k.a[6] + 0x0, _mv); M68K_TST16(_mv); }
    { func_table_call(0xbc2c); return; }
    /* WARNING: function did not end with RTS */
}

/* $00BC2C-$00BC94  (25 instructions, 104 bytes) */
void jt_00BC2C(void) {
    { uint32_t _ea = (g_m68k.a[6] + 0x8); uint16_t _tmp = bus_read16(_ea); M68K_SUB16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    if (M68K_CC_PL) goto loc_00BC8E;
    g_m68k.a[5] = 0x00BE26;
    { uint32_t _ea = (g_m68k.a[6] + 0x6); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0xa); bus_write16(_ea, _tmp); }
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x6))); M68K_TST16((uint16_t)g_m68k.d[6]);
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.d[6])); bus_write16(g_m68k.a[6] + 0x8, _mv); M68K_TST16(_mv); }
    if (M68K_CC_NE) goto loc_00BC54;
    { uint16_t _mv = (uint16_t)(0x2); bus_write16(g_m68k.a[6] + 0x0, _mv); M68K_TST16(_mv); }
    goto loc_00BC8E;
loc_00BC54:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[5] + 0x2 + (int16_t)(uint16_t)g_m68k.d[6]))); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x015256);
    g_m68k.a[0] = bus_read32(g_m68k.a[6] + 0xa);
    g_m68k.a[3] = 0x080014;
    g_m68k.a[3] = bus_read32(g_m68k.a[3]);
    g_m68k.a[3] = bus_read32(g_m68k.a[3] + 0x0);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[5] + 0x4 + (int16_t)(uint16_t)g_m68k.d[6]))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[3] = bus_read32(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    func_table_call(0x012270);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[5] + 0x6 + (int16_t)(uint16_t)g_m68k.d[6]))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[5] + 0x8 + (int16_t)(uint16_t)g_m68k.d[6]))); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x01225C);
loc_00BC8E:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00BC94-$00BD02  (25 instructions, 110 bytes) */
void jt_00BC94(void) {
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[6] + 0x2, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1853)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x015256);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x011F22);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x34)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x2))); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.a[3] = 0x00BDF6;
    func_table_call(0x012036);
    g_m68k.a[0] = bus_read32(g_m68k.a[6] + 0xa);
    g_m68k.a[3] = 0x080014;
    g_m68k.a[3] = bus_read32(g_m68k.a[3]);
    g_m68k.a[3] = bus_read32(g_m68k.a[3] + 0x0);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x4)); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[3] = bus_read32(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    func_table_call(0x012270);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x40)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x50)); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x01225C);
    { uint16_t _mv = (uint16_t)(0x3); bus_write16(g_m68k.a[6] + 0x0, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00BD02-$00BD3A  (12 instructions, 56 bytes) */
void jt_00BD02(void) {
    { uint32_t _ea = (g_m68k.a[6] + 0x2); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0x10); bus_write16(_ea, _tmp); }
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x2), 0x100);
    if (M68K_CC_LT) goto loc_00BD1C;
    { uint16_t _mv = (uint16_t)(0x100); bus_write16(g_m68k.a[6] + 0x2, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x4); bus_write16(g_m68k.a[6] + 0x0, _mv); M68K_TST16(_mv); }
loc_00BD1C:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x34)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x2))); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.a[3] = 0x00BDF6;
    func_table_call(0x012036);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00BD3A-$00BD4C  (4 instructions, 18 bytes) */
void jt_00BD3A(void) {
    { uint16_t _mv = (uint16_t)(0x10); bus_write16(g_m68k.a[6] + 0x8, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x5); bus_write16(g_m68k.a[6] + 0x0, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00BD4C-$00BD5E  (5 instructions, 18 bytes) */
void jt_00BD4C(void) {
    { uint32_t _ea = (g_m68k.a[6] + 0x8); uint16_t _tmp = bus_read16(_ea); M68K_SUB16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    if (M68K_CC_PL) goto loc_00BD58;
    { uint16_t _mv = (uint16_t)(0x6); bus_write16(g_m68k.a[6] + 0x0, _mv); M68K_TST16(_mv); }
loc_00BD58:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00BD5E-$00BD80  (8 instructions, 34 bytes) */
void jt_00BD5E(void) {
    { uint16_t _mv = (uint16_t)(0x100); bus_write16(g_m68k.a[6] + 0x4, _mv); M68K_TST16(_mv); }
    g_m68k.a[0] = bus_read32(g_m68k.a[6] + 0xa);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x4))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x012266);
    { uint16_t _mv = (uint16_t)(0x7); bus_write16(g_m68k.a[6] + 0x0, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00BD80-$00BDE6  (24 instructions, 102 bytes) */
void jt_00BD80(void) {
    { uint32_t _ea = (g_m68k.a[6] + 0x4); uint16_t _tmp = bus_read16(_ea); M68K_SUB16(_tmp, 0x18); bus_write16(_ea, _tmp); }
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x4), 0x1);
    if (M68K_CC_GT) goto loc_00BD94;
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(g_m68k.a[6] + 0x4, _mv); M68K_TST16(_mv); }
loc_00BD94:
    g_m68k.a[0] = bus_read32(g_m68k.a[6] + 0xa);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x4))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x012266);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x4))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x28)); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x00F4DE);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[1])); M68K_TST16((uint16_t)g_m68k.d[2]);
    M68K_ADD16(g_m68k.d[2], 0x40);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x4))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x60)); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x00F4DE);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[1])); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], 0x40);
    func_table_call(0x01225C);
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x4), 0x1);
    if (M68K_CC_GT) goto loc_00BDE0;
    { uint16_t _mv = (uint16_t)(0x8); bus_write16(g_m68k.a[6] + 0x0, _mv); M68K_TST16(_mv); }
loc_00BDE0:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00BDE6-$00BDF6  (4 instructions, 16 bytes) */
void jt_00BDE6(void) {
    g_m68k.a[0] = bus_read32(g_m68k.a[6] + 0xa);
    func_table_call(0x012252);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00BE50-$00BE90  (12 instructions, 64 bytes) */
void sub_00BE50(void) {
    M68K_CMP16(bus_read16(0x101206), 0x0);
    if (M68K_CC_NE) goto loc_00BE64;
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(0x101248, _mv); M68K_TST16(_mv); }
    goto loc_00BE6C;
loc_00BE64:
    { uint16_t _mv = (uint16_t)(0x2); bus_write16(0x101248, _mv); M68K_TST16(_mv); }
loc_00BE6C:
    func_table_call(0x0146E2);
    g_m68k.a[6] = 0x101508;
    func_table_call(0x00EEA6);
    func_table_call(0x00D6DA);
    func_table_call(0x01229E);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00BE90-$00BEA2  (6 instructions, 18 bytes) */
void sub_00BE90(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x101248))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[0] = bus_read32(0xbea2 + (int16_t)(uint16_t)g_m68k.d[0]);
    func_table_call(g_m68k.a[0]);
    return;
}

/* $00BEBA-$00BEEA  (11 instructions, 48 bytes) */
void jt_00BEBA(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0xc3)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x015256);
    func_table_call(0x001336);
    g_m68k.d[0] = (uint32_t)(int32_t)(int8_t)(0x1); M68K_TST32(g_m68k.d[0]);
    func_table_call(0x011646);
    g_m68k.d[0] = (uint32_t)(int32_t)(int8_t)(0x0); M68K_TST32(g_m68k.d[0]);
    g_m68k.d[1] = (uint32_t)(int32_t)(int8_t)(0x0); M68K_TST32(g_m68k.d[1]);
    func_table_call(0x011602);
    { uint16_t _mv = (uint16_t)(0x5); bus_write16(0x101248, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00BEEA-$00BF08  (8 instructions, 30 bytes) */
void jt_00BEEA(void) {
    func_table_call(0x011694);
    M68K_CMP16(g_m68k.d[0], 0x0);
    if (M68K_CC_NE) goto loc_00BF02;
    func_table_call(0x001340);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    goto loc_00BF06;
loc_00BF02:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
loc_00BF06:
    return;
}

/* $00BF08-$00BF2C  (8 instructions, 36 bytes) */
void jt_00BF08(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x185e)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x015256);
    func_table_call(0x00BF7A);
    M68K_CMP16(g_m68k.d[0], 0x0);
    if (M68K_CC_NE) goto loc_00BF26;
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(0x101248, _mv); M68K_TST16(_mv); }
loc_00BF26:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00BF2C-$00BF46  (6 instructions, 26 bytes) */
void jt_00BF2C(void) {
    func_table_call(0x00C01E);
    M68K_CMP16(g_m68k.d[0], 0x0);
    if (M68K_CC_NE) goto loc_00BF40;
    { uint16_t _mv = (uint16_t)(0x4); bus_write16(0x101248, _mv); M68K_TST16(_mv); }
loc_00BF40:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00BF46-$00BF60  (6 instructions, 26 bytes) */
void jt_00BF46(void) {
    func_table_call(0x00C170);
    M68K_CMP16(g_m68k.d[0], 0x0);
    if (M68K_CC_NE) goto loc_00BF5A;
    { uint16_t _mv = (uint16_t)(0x3); bus_write16(0x101248, _mv); M68K_TST16(_mv); }
loc_00BF5A:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00BF60-$00BF7A  (6 instructions, 26 bytes) */
void jt_00BF60(void) {
    func_table_call(0x00C204);
    M68K_CMP16(g_m68k.d[0], 0x0);
    if (M68K_CC_NE) goto loc_00BF74;
    { uint16_t _mv = (uint16_t)(0x4); bus_write16(0x101248, _mv); M68K_TST16(_mv); }
loc_00BF74:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00BF7A-$00C000  (27 instructions, 134 bytes) */
void sub_00BF7A(void) {
    g_m68k.a[6] = 0x101508;
    func_table_call(0x00EEA6);
    func_table_call(0x00D6DA);
    func_table_call(0x014160);
    func_table_call(0x01229E);
    g_m68k.a[6] = 0x10124A;
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[6] + 0x0, _mv); M68K_TST16(_mv); }
    func_table_call(0x012202);
    { uint32_t _mv = (uint32_t)(g_m68k.a[0]); bus_write32(g_m68k.a[6] + 0x6, _mv); M68K_TST32(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x7fff)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x012256);
    g_m68k.a[2] = 0x080014;
    g_m68k.a[2] = bus_read32(g_m68k.a[2]);
    g_m68k.a[2] = bus_read32(g_m68k.a[2] + 0x4);
    g_m68k.a[3] = bus_read32(g_m68k.a[2] + 0x8);
    func_table_call(0x012270);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x50)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x60)); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x01225C);
    func_table_call(0x012202);
    { uint32_t _mv = (uint32_t)(g_m68k.a[0]); bus_write32(g_m68k.a[6] + 0xa, _mv); M68K_TST32(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x7fff)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x012256);
    M68K_CMP16(bus_read16(0x101202), 0x6);
    if (M68K_CC_LT) { func_table_call(0x00C000); return; }
    g_m68k.a[3] = bus_read32(g_m68k.a[2] + 0x10);
    { func_table_call(0x00C004); return; }
    /* WARNING: function did not end with RTS */
}

/* $00C000-$00C01E  (7 instructions, 30 bytes) */
void jt_00C000(void) {
    g_m68k.a[3] = bus_read32(g_m68k.a[2] + 0xc);
loc_00C004:
    func_table_call(0x012270);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x40)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0xa0)); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x01225C);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00C01E-$00C05A  (14 instructions, 60 bytes) */
void sub_00C01E(void) {
    g_m68k.a[6] = 0x10124A;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x0))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[0] = bus_read32(0xc05a + (int16_t)(uint16_t)g_m68k.d[0]);
    func_table_call(g_m68k.a[0]);
    g_m68k.a[7] -= 2; bus_write16(g_m68k.a[7], g_m68k.d[0]);
    g_m68k.a[6] = 0x101508;
    func_table_call(0x00EEA6);
    func_table_call(0x00D6DA);
    func_table_call(0x014160);
    func_table_call(0x01229E);
    g_m68k.d[0] = (uint32_t)(int32_t)(int16_t)bus_read16(g_m68k.a[7]); g_m68k.a[7] += 2;
    return;
}

/* $00C06A-$00C0B6  (16 instructions, 76 bytes) */
void jt_00C06A(void) {
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[6] + 0x4, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x011F22);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x34)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x4))); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.a[3] = 0x01FEC6;
    func_table_call(0x012036);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x36)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x4))); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.a[3] = 0x01FE96;
    func_table_call(0x012036);
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(g_m68k.a[6] + 0x0, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00C0B6-$00C10C  (19 instructions, 86 bytes) */
void jt_00C0B6(void) {
    { uint32_t _ea = (g_m68k.a[6] + 0x4); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0x8); bus_write16(_ea, _tmp); }
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x4), 0x100);
    if (M68K_CC_LT) goto loc_00C0C8;
    { uint16_t _mv = (uint16_t)(0x100); bus_write16(g_m68k.a[6] + 0x4, _mv); M68K_TST16(_mv); }
loc_00C0C8:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x34)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x4))); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.a[3] = 0x01FEC6;
    func_table_call(0x012036);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x36)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x4))); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.a[3] = 0x01FE96;
    func_table_call(0x012036);
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x4), 0x100);
    if (M68K_CC_LT) goto loc_00C106;
    { uint16_t _mv = (uint16_t)(0x2); bus_write16(g_m68k.a[6] + 0x0, _mv); M68K_TST16(_mv); }
loc_00C106:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00C10C-$00C11E  (4 instructions, 18 bytes) */
void jt_00C10C(void) {
    { uint16_t _mv = (uint16_t)(0x78); bus_write16(g_m68k.a[6] + 0x2, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x3); bus_write16(g_m68k.a[6] + 0x0, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00C11E-$00C170  (20 instructions, 82 bytes) */
void jt_00C11E(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1011FC))); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x010E10);
    M68K_CMP16(g_m68k.d[0], 0x1);
    if (M68K_CC_NE) goto loc_00C134;
    bus_write16(g_m68k.a[6] + 0x2, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
loc_00C134:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1011FC))); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x010E5C);
    M68K_CMP16(g_m68k.d[0], 0x1);
    if (M68K_CC_NE) goto loc_00C14A;
    bus_write16(g_m68k.a[6] + 0x2, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
loc_00C14A:
    { uint32_t _ea = (g_m68k.a[6] + 0x2); uint16_t _tmp = bus_read16(_ea); M68K_SUB16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    if (M68K_CC_PL) goto loc_00C16A;
    g_m68k.a[0] = bus_read32(g_m68k.a[6] + 0x6);
    func_table_call(0x012252);
    g_m68k.a[0] = bus_read32(g_m68k.a[6] + 0xa);
    func_table_call(0x012252);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    goto loc_00C16E;
loc_00C16A:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
loc_00C16E:
    return;
}

/* $00C170-$00C1EC  (24 instructions, 124 bytes) */
void sub_00C170(void) {
    g_m68k.a[6] = 0x101258;
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[6] + 0x0, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x78); bus_write16(g_m68k.a[6] + 0x2, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x40); bus_write16(g_m68k.a[6] + 0x4, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0xffd0); bus_write16(g_m68k.a[6] + 0x6, _mv); M68K_TST16(_mv); }
    bus_write32(g_m68k.a[6] + 0x8, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    func_table_call(0x012202);
    { uint32_t _mv = (uint32_t)(g_m68k.a[0]); bus_write32(g_m68k.a[6] + 0xc, _mv); M68K_TST32(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x7fff)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x012256);
    g_m68k.a[2] = 0x080014;
    g_m68k.a[2] = bus_read32(g_m68k.a[2]);
    g_m68k.a[2] = bus_read32(g_m68k.a[2] + 0x4);
    g_m68k.a[3] = bus_read32(g_m68k.a[2] + 0x0);
    func_table_call(0x012270);
    func_table_call(0x012202);
    { uint32_t _mv = (uint32_t)(g_m68k.a[0]); bus_write32(g_m68k.a[6] + 0x10, _mv); M68K_TST32(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x7fff)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x012256);
    g_m68k.a[3] = bus_read32(g_m68k.a[2] + 0x4);
    func_table_call(0x012270);
    func_table_call(0x00C314);
    g_m68k.a[6] = 0x101508;
    func_table_call(0x00EEA6);
    /* WARNING: function did not end with RTS */
}
