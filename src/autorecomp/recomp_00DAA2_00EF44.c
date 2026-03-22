/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $00DAA2 - $00EF44 */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

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

/* $00DEB4-$00DF02  (17 instructions, 78 bytes) */
void sub_00DEB4(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x01690E);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x12)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(0x2)); M68K_TST16((uint16_t)g_m68k.d[7]);
loc_00DEC6:
    func_table_call(0x01690E);
    M68K_ADD16(g_m68k.d[0], 0x1);
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[7]; _cnt--; g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_00DEC6; } }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x15)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x01690E);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x16)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x01690E);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x101202))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], 0x17);
    func_table_call(0x01690E);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1e)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x01690E);
    return;
}

/* $00DF02-$00DFAC  (39 instructions, 170 bytes) */
void sub_00DF02(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[6]);
    g_m68k.a[0] = 0x200000;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xe6))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[0] = bus_read32(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    func_table_call(0xedc6);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xd8))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xda))); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xa))); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xa))); M68K_TST16((uint16_t)g_m68k.d[3]);
    g_m68k.a[4] = bus_read32(g_m68k.a[0] + 0x0);
    { uint32_t _mv = (uint32_t)(g_m68k.a[4]); bus_write32(0x101672, _mv); M68K_TST32(_mv); }
    g_m68k.a[5] = bus_read32(g_m68k.a[0] + 0x4);
    { uint32_t _mv = (uint32_t)(g_m68k.a[5]); bus_write32(0x101676, _mv); M68K_TST32(_mv); }
    func_table_call(0x01348E);
    g_m68k.a[4] = bus_read32(g_m68k.a[0] + 0x8);
    g_m68k.a[5] = bus_read32(g_m68k.a[0] + 0xc);
    func_table_call(0x013E14);
    g_m68k.a[4] = bus_read32(g_m68k.a[0] + 0x10);
    g_m68k.a[5] = bus_read32(g_m68k.a[0] + 0x14);
    g_m68k.a[6] = 0x02E794;
    func_table_call(0x014072);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xc0))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xc4))); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.a[4] = bus_read32(g_m68k.a[0] + 0x18);
    func_table_call(0x014652);
    g_m68k.a[3] = 0x02240E;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x101202))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[3] = bus_read32(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    g_m68k.d[0] = (uint32_t)(int32_t)(int8_t)(0x0); M68K_TST32(g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1011FA))); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xc4))); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x019E38);
    func_table_call(0x014584);
    g_m68k.a[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}

/* $00DFAC-$00DFC0  (4 instructions, 20 bytes) */
void sub_00DFAC(void) {
    func_table_call(0x01410E);
    func_table_call(0x019F42);
    func_table_call(0x0133FA);
    return;
}

/* $00DFC0-$00DFC8  (2 instructions, 8 bytes) */
void sub_00DFC0(void) {
    func_table_call(0x0120E0);
    return;
}

/* $00DFC8-$00E070  (41 instructions, 168 bytes) */
void sub_00DFC8(void) {
    func_table_call(0x00F5CA);
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[6] + 0x38, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[6] + 0x3a, _mv); M68K_TST16(_mv); }
    bus_write16(g_m68k.a[6] + 0x40, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint32_t _ea = (g_m68k.a[6] + 0x2a); uint16_t _tmp = bus_read16(_ea); M68K_SUB16(_tmp, 0x20); bus_write16(_ea, _tmp); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x2a))); M68K_TST16((uint16_t)g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[6] + 0x26); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[0]); bus_write16(_ea, _tmp); }
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x26), 0x0);
    if (M68K_CC_GT) goto loc_00E06E;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0xd7)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x015256);
    func_table_call(0x00F5C2);
    { uint32_t _ea = (g_m68k.a[6] + 0x2a); uint16_t _tmp = bus_read16(_ea); M68K_NEG16(_tmp); bus_write16(_ea, _tmp); }
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x2a), 0x80);
    if (M68K_CC_GT) goto loc_00E020;
    bus_write16(g_m68k.a[6] + 0x26, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    bus_write16(g_m68k.a[6] + 0x28, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[6] + 0x4, _mv); M68K_TST16(_mv); }
    goto loc_00E06E;
loc_00E020:
    func_table_call(0x00F5D2);
    func_table_call(0xe57c);
    func_table_call(0xe632);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x40))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_LSL16(g_m68k.d[0], 0x3);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[6] + 0x40, _mv); M68K_TST16(_mv); }
    func_table_call(0xe530);
    func_table_call(0xe55e);
    func_table_call(0xe770);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x12))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_LSL16(g_m68k.d[0], 0x4);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[6] + 0x12, _mv); M68K_TST16(_mv); }
    func_table_call(0xe826);
    func_table_call(0xea42);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x2a))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ASR16(g_m68k.d[0], 0x1);
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0xe4), 0x5);
    if (M68K_CC_NE) goto loc_00E066;
    M68K_ASR16(g_m68k.d[0], 0x1);
loc_00E066:
    bus_write16(g_m68k.a[6] + 0x26, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[6] + 0x2a, _mv); M68K_TST16(_mv); }
loc_00E06E:
    return;
}

/* $00E070-$00E092  (12 instructions, 34 bytes) */
void sub_00E070(void) {
    g_m68k.a[1] = (g_m68k.a[6] + 0x6c);
    g_m68k.a[0] = 0x080000;
    g_m68k.a[0] = bus_read32(g_m68k.a[0] + 0x0);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[0] = bus_read32(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(_postinc32(0)); bus_write32(g_m68k.a[1], _mv); g_m68k.a[1] += 4; M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_postinc32(0)); bus_write32(g_m68k.a[1], _mv); g_m68k.a[1] += 4; M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_postinc32(0)); bus_write32(g_m68k.a[1], _mv); g_m68k.a[1] += 4; M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_postinc32(0)); bus_write32(g_m68k.a[1], _mv); g_m68k.a[1] += 4; M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[0])); bus_write32(g_m68k.a[1], _mv); M68K_TST32(_mv); }
    return;
}

/* $00E092-$00E15E  (50 instructions, 204 bytes) */
void sub_00E092(void) {
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[6] + 0x10c)); bus_write16(g_m68k.a[6] + 0x10e, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[6] + 0x30)); bus_write16(g_m68k.a[6] + 0x34, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xc0))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xc4))); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x13e74);
    M68K_AND16(g_m68k.d[0], 0x7f);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[6] + 0x10c, _mv); M68K_TST16(_mv); }
    M68K_CMP16(g_m68k.d[0], 0x1f);
    if (M68K_CC_GT) goto loc_00E0DA;
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[6] + 0x2e)); bus_write16(g_m68k.a[6] + 0x32, _mv); M68K_TST16(_mv); }
    M68K_ROR16(g_m68k.d[0], 0x5);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[6] + 0x36, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[6] + 0x2e, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[6] + 0xb2)); bus_write16(g_m68k.a[6] + 0x30, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(g_m68k.a[6] + 0x124, _mv); M68K_TST16(_mv); }
    goto loc_00E15C;
loc_00E0DA:
    M68K_CMP16(g_m68k.d[0], 0x3f);
    if (M68K_CC_GT) goto loc_00E10C;
    M68K_SUB16(g_m68k.d[0], 0x20);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    { uint16_t _mv = (uint16_t)(bus_read16(0xe15e + (int16_t)(uint16_t)g_m68k.d[0])); bus_write16(g_m68k.a[6] + 0x36, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(g_m68k.a[6] + 0x2e, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[6] + 0xb2)); bus_write16(g_m68k.a[6] + 0x30, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[6] + 0xb4)); bus_write16(g_m68k.a[6] + 0xf8, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[6] + 0xb6)); bus_write16(g_m68k.a[6] + 0xe0, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[6] + 0xe2, _mv); M68K_TST16(_mv); }
    goto loc_00E15C;
loc_00E10C:
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x101202))); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_ADD16(g_m68k.d[1], g_m68k.d[1]);
    M68K_ADD16(g_m68k.d[1], g_m68k.d[1]);
    g_m68k.a[0] = 0x0232E2;
    g_m68k.a[0] = (g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[1]);
    g_m68k.a[0] = bus_read32(g_m68k.a[0]);
    M68K_SUB16(g_m68k.d[0], 0x40);
    M68K_LSL16(g_m68k.d[0], 0x2);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST8((uint8_t)g_m68k.d[1]);
    M68K_EXT16(g_m68k.d[1]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); bus_write16(g_m68k.a[6] + 0x30, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[6] + 0x36, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x2); bus_write16(g_m68k.a[6] + 0x2e, _mv); M68K_TST16(_mv); }
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[0] + 0x1 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST8((uint8_t)g_m68k.d[1]);
    M68K_EXT16(g_m68k.d[1]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); bus_write16(g_m68k.a[6] + 0xf8, _mv); M68K_TST16(_mv); }
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[0] + 0x2 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST8((uint8_t)g_m68k.d[1]);
    M68K_EXT16(g_m68k.d[1]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); bus_write16(g_m68k.a[6] + 0xe0, _mv); M68K_TST16(_mv); }
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[0] + 0x3 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST8((uint8_t)g_m68k.d[1]);
    M68K_EXT16(g_m68k.d[1]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); bus_write16(g_m68k.a[6] + 0xe2, _mv); M68K_TST16(_mv); }
loc_00E15C:
    return;
}

/* $00E19E-$00E244  (44 instructions, 166 bytes) */
void sub_00E19E(void) {
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x2e), 0x0);
    if (M68K_CC_EQ) goto loc_00E1C0;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x30))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[0] = 0x00E244;
    g_m68k.a[0] = bus_read32(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    func_table_call(g_m68k.a[0]);
    goto loc_00E242;
loc_00E1C0:
    func_table_call(0x00F8E2);
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x14), 0x8ff);
    if (M68K_CC_GT) goto loc_00E1D8;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x4)); M68K_TST16((uint16_t)g_m68k.d[0]);
    goto loc_00E242;
loc_00E1D8:
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[7]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x36))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_EXT32(g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xdc))); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_EXT32(g_m68k.d[1]);
    g_m68k.d[2] = g_m68k.d[1]; M68K_TST32((uint32_t)g_m68k.d[2]);
    M68K_SUB32(g_m68k.d[0], g_m68k.d[1]);
    if (M68K_CC_PL) goto loc_00E1F4;
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(0xffff)); M68K_TST16((uint16_t)g_m68k.d[7]);
    M68K_NEG32(g_m68k.d[0]);
loc_00E1F4:
    M68K_ADD32(g_m68k.d[1], g_m68k.d[0]);
    M68K_ADD32(g_m68k.d[2], 0x8000);
    M68K_CMP32(g_m68k.d[1], g_m68k.d[2]);
    if (M68K_CC_LE) goto loc_00E21A;
    M68K_NEG16(g_m68k.d[7]);
    M68K_SUB32(g_m68k.d[0], 0x8000);
    g_m68k.d[1] = 0x8000; M68K_TST32((uint32_t)g_m68k.d[1]);
    M68K_SUB32(g_m68k.d[1], g_m68k.d[0]);
    g_m68k.d[0] = g_m68k.d[1]; M68K_TST32((uint32_t)g_m68k.d[0]);
    M68K_AND32(g_m68k.d[0], 0x7fff);
loc_00E21A:
    M68K_CMP32(g_m68k.d[0], 0x6660);
    if (M68K_CC_LE) goto loc_00E228;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x4)); M68K_TST16((uint16_t)g_m68k.d[0]);
    goto loc_00E242;
loc_00E228:
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(g_m68k.a[6] + 0x126, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1870)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x015256);
    func_table_call(0x00F696);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x4)); M68K_TST16((uint16_t)g_m68k.d[0]);
loc_00E242:
    return;
}

/* $00E28C-$00E292  (2 instructions, 6 bytes) */
void jt_00E28C(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00E292-$00E2B0  (7 instructions, 30 bytes) */
void jt_00E292(void) {
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x2), 0x0);
    if (M68K_CC_NE) goto loc_00E2A0;
    { uint16_t _mv = (uint16_t)(0xb4); bus_write16(g_m68k.a[6] + 0x152, _mv); M68K_TST16(_mv); }
loc_00E2A0:
    { uint32_t _ea = (g_m68k.a[6] + 0x2); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(g_m68k.a[6] + 0x0, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00E2B0-$00E2C4  (5 instructions, 20 bytes) */
void jt_00E2B0(void) {
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x34), 0x10);
    if (M68K_CC_NE) goto loc_00E2BE;
    { uint32_t _ea = 0x101504; uint16_t _tmp = bus_read16(_ea); M68K_SUB16(_tmp, 0x1); bus_write16(_ea, _tmp); }
loc_00E2BE:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00E2C4-$00E326  (21 instructions, 98 bytes) */
void jt_00E2C4(void) {
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x34), 0xf);
    if (M68K_CC_NE) goto loc_00E320;
    M68K_CMP16(bus_read16(0x103332), 0x1);
    if (M68K_CC_NE) goto loc_00E2F0;
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x2), 0x0);
    if (M68K_CC_NE) goto loc_00E2E4;
    { uint16_t _mv = (uint16_t)(0xb4); bus_write16(g_m68k.a[6] + 0x152, _mv); M68K_TST16(_mv); }
loc_00E2E4:
    { uint32_t _ea = (g_m68k.a[6] + 0x2); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(g_m68k.a[6] + 0x0, _mv); M68K_TST16(_mv); }
    goto loc_00E320;
loc_00E2F0:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x101504))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_CMP16(g_m68k.d[0], bus_read16(0x101502));
    if (M68K_CC_NE) goto loc_00E31A;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x185d)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x015256);
    func_table_call(0x0149BA);
    { uint32_t _ea = 0x101502; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    func_table_call(0x016AA8);
loc_00E31A:
    { uint32_t _ea = 0x101504; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0x1); bus_write16(_ea, _tmp); }
loc_00E320:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00E326-$00E32C  (2 instructions, 6 bytes) */
void jt_00E326(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00E32C-$00E378  (18 instructions, 76 bytes) */
void jt_00E32C(void) {
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x34), 0x11);
    if (M68K_CC_NE) goto loc_00E372;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x186f)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x015256);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x14))); M68K_TST16((uint16_t)g_m68k.d[0]);
    if (M68K_CC_PL) goto loc_00E346;
    M68K_NEG16(g_m68k.d[0]);
loc_00E346:
    M68K_LSR16(g_m68k.d[0], 0x7);
    M68K_AND16(g_m68k.d[0], 0x7f);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[0] = 0x00E378;
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0])); bus_write16(g_m68k.a[6] + 0x2a, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[6] + 0x26, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(g_m68k.a[6] + 0x4, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[6] + 0x38, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[6] + 0x3a, _mv); M68K_TST16(_mv); }
loc_00E372:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00E3B8-$00E3C2  (3 instructions, 10 bytes) */
void sub_00E3B8(void) {
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0xe3c2 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST16((uint16_t)g_m68k.d[0]);
    { func_table_call((0xe3c2 + (int16_t)(uint16_t)g_m68k.d[0])); return; }
    /* WARNING: function did not end with RTS */
}

/* $00E432-$00E43C  (3 instructions, 10 bytes) */
void sub_00E432(void) {
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0xe43c + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST16((uint16_t)g_m68k.d[0]);
    { func_table_call((0xe43c + (int16_t)(uint16_t)g_m68k.d[0])); return; }
    /* WARNING: function did not end with RTS */
}

/* $00E4A6-$00E4FC  (29 instructions, 86 bytes) */
void sub_00E4A6(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x14))); M68K_TST16((uint16_t)g_m68k.d[0]);
    if (M68K_CC_PL) goto loc_00E4AE;
    M68K_NEG16(g_m68k.d[0]);
loc_00E4AE:
    M68K_SUB16(g_m68k.d[0], bus_read16(g_m68k.a[6] + 0x80));
    M68K_NEG16(g_m68k.d[0]);
    if (M68K_CC_PL) goto loc_00E4B8;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
loc_00E4B8:
    M68K_LSR16(g_m68k.d[0], 0x4);
    M68K_AND16(g_m68k.d[0], 0xff);
    g_m68k.d[1] = (uint32_t)(int32_t)(int8_t)(0x0); M68K_TST32(g_m68k.d[1]);
    g_m68k.a[0] = 0x022BE2;
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST8((uint8_t)g_m68k.d[1]);
    M68K_ADD16(g_m68k.d[1], 0x1);
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); bus_write16(g_m68k.a[6] + 0x8, _mv); M68K_TST16(_mv); }
    M68K_SUB16(g_m68k.d[1], bus_read16(g_m68k.a[6] + 0xc));
    M68K_ASR16(g_m68k.d[1], 0x3);
    M68K_ADD16(g_m68k.d[1], bus_read16(g_m68k.a[6] + 0xc));
    M68K_CMP16(g_m68k.d[1], bus_read16(g_m68k.a[6] + 0xc));
    if (M68K_CC_NE) goto loc_00E4F6;
    M68K_CMP16(g_m68k.d[1], bus_read16(g_m68k.a[6] + 0x8));
    if (M68K_CC_EQ) goto loc_00E4F6;
    if (M68K_CC_MI) goto loc_00E4F0;
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xc))); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_SUB16(g_m68k.d[1], 0x1);
    goto loc_00E4F6;
loc_00E4F0:
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xc))); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_ADD16(g_m68k.d[1], 0x1);
loc_00E4F6:
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); bus_write16(g_m68k.a[6] + 0xa, _mv); M68K_TST16(_mv); }
    return;
}

/* $00E4FC-$00E530  (17 instructions, 52 bytes) */
void sub_00E4FC(void) {
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x100)); M68K_TST16((uint16_t)g_m68k.d[1]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); bus_write16(g_m68k.a[6] + 0x8, _mv); M68K_TST16(_mv); }
    M68K_SUB16(g_m68k.d[1], bus_read16(g_m68k.a[6] + 0xc));
    M68K_ASR16(g_m68k.d[1], 0x3);
    M68K_ADD16(g_m68k.d[1], bus_read16(g_m68k.a[6] + 0xc));
    M68K_CMP16(g_m68k.d[1], bus_read16(g_m68k.a[6] + 0xc));
    if (M68K_CC_NE) goto loc_00E52A;
    M68K_CMP16(g_m68k.d[1], bus_read16(g_m68k.a[6] + 0x8));
    if (M68K_CC_EQ) goto loc_00E52A;
    if (M68K_CC_MI) goto loc_00E524;
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xc))); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_SUB16(g_m68k.d[1], 0x1);
    goto loc_00E52A;
loc_00E524:
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xc))); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_ADD16(g_m68k.d[1], 0x1);
loc_00E52A:
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); bus_write16(g_m68k.a[6] + 0xa, _mv); M68K_TST16(_mv); }
    return;
}

/* $00E530-$00E55E  (15 instructions, 46 bytes) */
void sub_00E530(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x30))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.a[0] = bus_read32(g_m68k.a[6] + 0x68);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[0] = (g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    g_m68k.a[0] = bus_read32(g_m68k.a[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x14))); M68K_TST16((uint16_t)g_m68k.d[0]);
    if (M68K_CC_PL) goto loc_00E54A;
    M68K_NEG16(g_m68k.d[0]);
loc_00E54A:
    M68K_LSR16(g_m68k.d[0], 0x5);
    M68K_AND16(g_m68k.d[0], 0xfff8);
    g_m68k.a[0] = (g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(_postinc32(0)); bus_write32(g_m68k.a[6] + 0x42, _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[0])); bus_write32(g_m68k.a[6] + 0x46, _mv); M68K_TST32(_mv); }
    return;
}

/* $00E55E-$00E57C  (9 instructions, 30 bytes) */
void sub_00E55E(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x30))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_CMP16(g_m68k.d[0], bus_read16(g_m68k.a[6] + 0x34));
    if (M68K_CC_EQ) goto loc_00E57A;
    g_m68k.a[0] = bus_read32(g_m68k.a[6] + 0x86);
    M68K_LSL16(g_m68k.d[0], 0x3);
    g_m68k.a[0] = (g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(_postinc32(0)); bus_write32(g_m68k.a[6] + 0x4a, _mv); M68K_TST32(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[0])); bus_write16(g_m68k.a[6] + 0x4e, _mv); M68K_TST16(_mv); }
loc_00E57A:
    return;
}

/* $00E57C-$00E622  (40 instructions, 166 bytes) */
void sub_00E57C(void) {
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x132), 0x1);
    if (M68K_CC_NE) goto loc_00E586;
    return;
loc_00E586:
    M68K_CMP16(bus_read16(0x1014FC), 0x1);
    if (M68K_CC_NE) goto loc_00E5DC;
    g_m68k.a[0] = bus_read32(0x1014FE);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(0))); M68K_TST8((uint8_t)g_m68k.d[0]);
    if (M68K_CC_PL) goto loc_00E5A4;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0x0)); M68K_TST8((uint8_t)g_m68k.d[0]);
    g_m68k.a[0] -= 0x1;
loc_00E5A4:
    { uint32_t _mv = (uint32_t)(g_m68k.a[0]); bus_write32(0x1014FE, _mv); M68K_TST32(_mv); }
    M68K_BTST(g_m68k.d[0], 0x5);
    if (M68K_CC_EQ) goto loc_00E5B8;
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(g_m68k.a[6] + 0x3c, _mv); M68K_TST16(_mv); }
    goto loc_00E5BE;
loc_00E5B8:
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[6] + 0x3c, _mv); M68K_TST16(_mv); }
loc_00E5BE:
    M68K_BTST(g_m68k.d[0], 0x4);
    if (M68K_CC_EQ) goto loc_00E5CC;
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(g_m68k.a[6] + 0x3e, _mv); M68K_TST16(_mv); }
    goto loc_00E5D2;
loc_00E5CC:
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[6] + 0x3e, _mv); M68K_TST16(_mv); }
loc_00E5D2:
    M68K_AND16(g_m68k.d[0], 0xf);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[6] + 0x38, _mv); M68K_TST16(_mv); }
    goto loc_00E620;
loc_00E5DC:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(0x10FD96))); M68K_TST8((uint8_t)g_m68k.d[0]);
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0xe8), 0x0);
    if (M68K_CC_EQ) goto loc_00E5F0;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(0x10FD9C))); M68K_TST8((uint8_t)g_m68k.d[0]);
loc_00E5F0:
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[6] + 0x3c, _mv); M68K_TST16(_mv); }
    M68K_BTST(g_m68k.d[0], 0x4);
    if (M68K_CC_EQ) goto loc_00E602;
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(g_m68k.a[6] + 0x3c, _mv); M68K_TST16(_mv); }
loc_00E602:
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[6] + 0x3e, _mv); M68K_TST16(_mv); }
    M68K_BTST(g_m68k.d[0], 0x5);
    if (M68K_CC_EQ) goto loc_00E614;
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(g_m68k.a[6] + 0x3e, _mv); M68K_TST16(_mv); }
loc_00E614:
    M68K_AND16(g_m68k.d[0], 0xf);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(0xe622 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST8((uint8_t)g_m68k.d[0]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[6] + 0x38, _mv); M68K_TST16(_mv); }
loc_00E620:
    return;
}

/* $00E632-$00E770  (89 instructions, 318 bytes) */
void sub_00E632(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x38))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_CMP16(g_m68k.d[0], bus_read16(g_m68k.a[6] + 0x3a));
    if (M68K_CC_NE) goto loc_00E642;
    { uint32_t _ea = (g_m68k.a[6] + 0xfe); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    goto loc_00E65E;
loc_00E642:
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[6] + 0xfa)); bus_write16(g_m68k.a[6] + 0xfc, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[6] + 0x3a)); bus_write16(g_m68k.a[6] + 0xfa, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[6] + 0x100)); bus_write16(g_m68k.a[6] + 0x102, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[6] + 0xfe)); bus_write16(g_m68k.a[6] + 0x100, _mv); M68K_TST16(_mv); }
    bus_write16(g_m68k.a[6] + 0xfe, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
loc_00E65E:
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[6] + 0x38)); bus_write16(g_m68k.a[6] + 0x3a, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (uint32_t)(int32_t)(int8_t)(0x0); M68K_TST32(g_m68k.d[0]);
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x38), 0x0);
    if (M68K_CC_EQ) goto loc_00E722;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x14))); M68K_TST16((uint16_t)g_m68k.d[0]);
    if (M68K_CC_PL) goto loc_00E678;
    M68K_NEG16(g_m68k.d[0]);
loc_00E678:
    M68K_LSR16(g_m68k.d[0], 0x3);
    M68K_AND16(g_m68k.d[0], 0xfffe);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.a[5] = bus_read32(g_m68k.a[6] + 0x64);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x2e), 0x2);
    if (M68K_CC_NE) goto loc_00E6AC;
    g_m68k.a[5] = 0x0231E2;
    M68K_LSR16(g_m68k.d[1], 0x2);
    M68K_AND16(g_m68k.d[1], 0xfffe);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.d[1]))); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_MULU(g_m68k.d[0], g_m68k.d[1]);
    M68K_ADD32(g_m68k.d[0], 0x80);
    M68K_LSR32(g_m68k.d[0], 0x8);
    goto loc_00E718;
loc_00E6AC:
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x2e), 0x1);
    if (M68K_CC_NE) goto loc_00E718;
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[1])); M68K_TST16((uint16_t)g_m68k.d[7]);
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[4]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x36))); M68K_TST16((uint16_t)g_m68k.d[3]);
    M68K_EXT32(g_m68k.d[3]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xdc))); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_EXT32(g_m68k.d[1]);
    g_m68k.d[2] = g_m68k.d[1]; M68K_TST32((uint32_t)g_m68k.d[2]);
    M68K_SUB32(g_m68k.d[3], g_m68k.d[1]);
    if (M68K_CC_PL) goto loc_00E6D2;
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(0xffff)); M68K_TST16((uint16_t)g_m68k.d[4]);
    M68K_NEG32(g_m68k.d[3]);
loc_00E6D2:
    M68K_ADD32(g_m68k.d[1], g_m68k.d[3]);
    M68K_ADD32(g_m68k.d[2], 0x8000);
    M68K_CMP32(g_m68k.d[1], g_m68k.d[2]);
    if (M68K_CC_LE) goto loc_00E6F8;
    M68K_NEG16(g_m68k.d[4]);
    M68K_SUB32(g_m68k.d[3], 0x8000);
    g_m68k.d[1] = 0x8000; M68K_TST32((uint32_t)g_m68k.d[1]);
    M68K_SUB32(g_m68k.d[1], g_m68k.d[3]);
    g_m68k.d[3] = g_m68k.d[1]; M68K_TST32((uint32_t)g_m68k.d[3]);
    M68K_AND32(g_m68k.d[3], 0x7fff);
loc_00E6F8:
    M68K_CMP16(g_m68k.d[3], 0x1000);
    if (M68K_CC_CS) goto loc_00E718;
    g_m68k.a[5] = 0x023262;
    M68K_LSR16(g_m68k.d[7], 0x2);
    M68K_AND16(g_m68k.d[7], 0xfffe);
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.d[7]))); M68K_TST16((uint16_t)g_m68k.d[7]);
    M68K_MULU(g_m68k.d[0], g_m68k.d[7]);
    M68K_ADD32(g_m68k.d[0], 0x80);
    M68K_LSR32(g_m68k.d[0], 0x8);
loc_00E718:
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x38), 0x2);
    if (M68K_CC_EQ) goto loc_00E722;
    M68K_NEG16(g_m68k.d[0]);
loc_00E722:
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x2e), 0x1);
    if (M68K_CC_EQ) goto loc_00E762;
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x102), 0x14);
    if (M68K_CC_LS) goto loc_00E762;
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0xfa), 0x0);
    if (M68K_CC_NE) goto loc_00E762;
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x100), 0x10);
    if (M68K_CC_HI) goto loc_00E762;
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0xfe), 0x9);
    if (M68K_CC_LT) goto loc_00E762;
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x38))); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_ADD16(g_m68k.d[1], bus_read16(g_m68k.a[6] + 0xfc));
    M68K_CMP16(g_m68k.d[1], 0x3);
    if (M68K_CC_NE) goto loc_00E762;
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0xfe), 0xf);
    if (M68K_CC_GE) goto loc_00E762;
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
loc_00E762:
    M68K_TST16(bus_read16(g_m68k.a[6] + 0x14));
    if (M68K_CC_PL) goto loc_00E76A;
    M68K_NEG16(g_m68k.d[0]);
loc_00E76A:
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[6] + 0x40, _mv); M68K_TST16(_mv); }
    return;
}

/* $00E770-$00E7B0  (19 instructions, 64 bytes) */
void sub_00E770(void) {
    g_m68k.d[0] = (uint32_t)(int32_t)(int8_t)(0x0); M68K_TST32(g_m68k.d[0]);
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x3c), 0x1);
    if (M68K_CC_NE) goto loc_00E79E;
    g_m68k.a[0] = 0x00E7B0;
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x14))); M68K_TST16((uint16_t)g_m68k.d[1]);
    if (M68K_CC_PL) goto loc_00E788;
    M68K_NEG16(g_m68k.d[1]);
loc_00E788:
    M68K_LSR16(g_m68k.d[1], 0x7);
    M68K_AND16(g_m68k.d[1], 0x7f);
    M68K_ADD16(g_m68k.d[1], g_m68k.d[1]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x4a))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_MULU(g_m68k.d[0], bus_read16(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[1]));
    M68K_SWAP(g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], bus_read16(g_m68k.a[6] + 0x4a));
loc_00E79E:
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x3e), 0x1);
    if (M68K_CC_NE) goto loc_00E7AA;
    M68K_SUB16(g_m68k.d[0], bus_read16(g_m68k.a[6] + 0x4c));
loc_00E7AA:
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[6] + 0x12, _mv); M68K_TST16(_mv); }
    return;
}

/* $00E7F0-$00E826  (19 instructions, 54 bytes) */
void sub_00E7F0(void) {
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x14))); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x4e))); M68K_TST16((uint16_t)g_m68k.d[3]);
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0xe4), 0x5);
    if (M68K_CC_NE) goto loc_00E802;
    M68K_ASR16(g_m68k.d[3], 0x1);
loc_00E802:
    M68K_ADD16(g_m68k.d[1], g_m68k.d[3]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[3])); M68K_TST16((uint16_t)g_m68k.d[2]);
    M68K_ADD16(g_m68k.d[2], g_m68k.d[2]);
    M68K_CMP16(g_m68k.d[1], g_m68k.d[2]);
    if (M68K_CC_HI) goto loc_00E814;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x14))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_NEG16(g_m68k.d[0]);
    goto loc_00E820;
loc_00E814:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x4e))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_TST16(bus_read16(g_m68k.a[6] + 0x14));
    if (M68K_CC_MI) goto loc_00E820;
    M68K_NEG16(g_m68k.d[0]);
loc_00E820:
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[6] + 0x12, _mv); M68K_TST16(_mv); }
    return;
}

/* $00E826-$00E830  (3 instructions, 10 bytes) */
void sub_00E826(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x12))); M68K_TST16((uint16_t)g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[6] + 0x14); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[0]); bus_write16(_ea, _tmp); }
    return;
}

/* $00E830-$00E8BA  (41 instructions, 138 bytes) */
void sub_00E830(void) {
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x38), 0x0);
    if (M68K_CC_NE) goto loc_00E8B8;
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x2e), 0x1);
    if (M68K_CC_NE) goto loc_00E8B8;
    M68K_TST16(bus_read16(g_m68k.a[6] + 0x14));
    if (M68K_CC_EQ) goto loc_00E8B8;
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[7]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x36))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_EXT32(g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xde))); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_EXT32(g_m68k.d[1]);
    g_m68k.d[2] = g_m68k.d[1]; M68K_TST32((uint32_t)g_m68k.d[2]);
    M68K_SUB32(g_m68k.d[0], g_m68k.d[1]);
    if (M68K_CC_PL) goto loc_00E866;
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(0xffff)); M68K_TST16((uint16_t)g_m68k.d[7]);
    M68K_NEG32(g_m68k.d[0]);
loc_00E866:
    M68K_ADD32(g_m68k.d[1], g_m68k.d[0]);
    M68K_ADD32(g_m68k.d[2], 0x8000);
    M68K_CMP32(g_m68k.d[1], g_m68k.d[2]);
    if (M68K_CC_LE) goto loc_00E88C;
    M68K_NEG16(g_m68k.d[7]);
    M68K_SUB32(g_m68k.d[0], 0x8000);
    g_m68k.d[1] = 0x8000; M68K_TST32((uint32_t)g_m68k.d[1]);
    M68K_SUB32(g_m68k.d[1], g_m68k.d[0]);
    g_m68k.d[0] = g_m68k.d[1]; M68K_TST32((uint32_t)g_m68k.d[0]);
    M68K_AND32(g_m68k.d[0], 0x7fff);
loc_00E88C:
    M68K_CMP16(g_m68k.d[0], 0x40);
    if (M68K_CC_CC) goto loc_00E89A;
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[6] + 0x36)); bus_write16(g_m68k.a[6] + 0xde, _mv); M68K_TST16(_mv); }
    goto loc_00E8B8;
loc_00E89A:
    M68K_CMP16(g_m68k.d[0], 0x8);
    if (M68K_CC_HI) goto loc_00E8A6;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x8)); M68K_TST16((uint16_t)g_m68k.d[0]);
    goto loc_00E8A8;
loc_00E8A6:
    M68K_LSR16(g_m68k.d[0], 0x3);
loc_00E8A8:
    M68K_CMP16(g_m68k.d[7], 0x1);
    if (M68K_CC_EQ) goto loc_00E8B4;
    { uint32_t _ea = (g_m68k.a[6] + 0xde); uint16_t _tmp = bus_read16(_ea); M68K_SUB16(_tmp, g_m68k.d[0]); bus_write16(_ea, _tmp); }
    goto loc_00E8B8;
loc_00E8B4:
    { uint32_t _ea = (g_m68k.a[6] + 0xde); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[0]); bus_write16(_ea, _tmp); }
loc_00E8B8:
    return;
}

/* $00E8BA-$00E9C2  (76 instructions, 264 bytes) */
void sub_00E8BA(void) {
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[6] + 0x104, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x40))); M68K_TST16((uint16_t)g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[6] + 0xde); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[0]); bus_write16(_ea, _tmp); }
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[7]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xde))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_EXT32(g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xdc))); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_EXT32(g_m68k.d[1]);
    g_m68k.d[2] = g_m68k.d[1]; M68K_TST32((uint32_t)g_m68k.d[2]);
    M68K_SUB32(g_m68k.d[0], g_m68k.d[1]);
    if (M68K_CC_PL) goto loc_00E8E4;
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(0xffff)); M68K_TST16((uint16_t)g_m68k.d[7]);
    M68K_NEG32(g_m68k.d[0]);
loc_00E8E4:
    M68K_ADD32(g_m68k.d[1], g_m68k.d[0]);
    M68K_ADD32(g_m68k.d[2], 0x8000);
    M68K_CMP32(g_m68k.d[1], g_m68k.d[2]);
    if (M68K_CC_LE) goto loc_00E90A;
    M68K_NEG16(g_m68k.d[7]);
    M68K_SUB32(g_m68k.d[0], 0x8000);
    g_m68k.d[1] = 0x8000; M68K_TST32((uint32_t)g_m68k.d[1]);
    M68K_SUB32(g_m68k.d[1], g_m68k.d[0]);
    g_m68k.d[0] = g_m68k.d[1]; M68K_TST32((uint32_t)g_m68k.d[0]);
    M68K_AND32(g_m68k.d[0], 0x7fff);
loc_00E90A:
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[6] + 0x22, _mv); M68K_TST16(_mv); }
    M68K_CMP16(g_m68k.d[0], 0x2000);
    if (M68K_CC_LS) goto loc_00E91C;
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(g_m68k.a[6] + 0x22, _mv); M68K_TST16(_mv); }
loc_00E91C:
    M68K_CMP16(g_m68k.d[0], 0x2aaa);
    if (M68K_CC_LS) goto loc_00E928;
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(g_m68k.a[6] + 0x114, _mv); M68K_TST16(_mv); }
loc_00E928:
    M68K_CMP16(g_m68k.d[0], 0x4000);
    if (M68K_CC_LS) goto loc_00E94E;
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(g_m68k.a[6] + 0x104, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x4000)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xde))); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_SUB16(g_m68k.d[1], 0x4000);
    M68K_CMP16(g_m68k.d[7], 0xffff);
    if (M68K_CC_NE) goto loc_00E94A;
    M68K_ADD16(g_m68k.d[1], 0x8000);
loc_00E94A:
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); bus_write16(g_m68k.a[6] + 0xdc, _mv); M68K_TST16(_mv); }
loc_00E94E:
    { uint16_t _mv = (uint16_t)(g_m68k.d[7]); bus_write16(g_m68k.a[6] + 0x1e, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[6] + 0x20, _mv); M68K_TST16(_mv); }
    M68K_CMP16(g_m68k.d[0], 0x40);
    if (M68K_CC_CC) goto loc_00E964;
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[6] + 0xde)); bus_write16(g_m68k.a[6] + 0xdc, _mv); M68K_TST16(_mv); }
    goto loc_00E9C0;
loc_00E964:
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x3e))); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_LSL16(g_m68k.d[1], 0x1);
    M68K_OR16(g_m68k.d[1], bus_read16(g_m68k.a[6] + 0x3c));
    M68K_ADD16(g_m68k.d[1], g_m68k.d[1]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x42 + (int16_t)(uint16_t)g_m68k.d[1]))); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x2e), 0x1);
    if (M68K_CC_NE) goto loc_00E982;
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[1])); M68K_TST16((uint16_t)g_m68k.d[6]);
    M68K_ADD16(g_m68k.d[1], g_m68k.d[1]);
    M68K_ADD16(g_m68k.d[1], g_m68k.d[6]);
loc_00E982:
    g_m68k.a[0] = 0x00E9C2;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x24))); M68K_TST16((uint16_t)g_m68k.d[2]);
    M68K_LSR16(g_m68k.d[2], 0x6);
    M68K_CMP16(g_m68k.d[2], 0x18);
    if (M68K_CC_LT) goto loc_00E998;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x17)); M68K_TST16((uint16_t)g_m68k.d[2]);
loc_00E998:
    M68K_ADD16(g_m68k.d[2], g_m68k.d[2]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[2]))); M68K_TST16((uint16_t)g_m68k.d[2]);
    M68K_MULU(g_m68k.d[1], g_m68k.d[2]);
    M68K_ADD32(g_m68k.d[1], 0x8000);
    M68K_LSR32(g_m68k.d[1], 0x8);
    M68K_LSR32(g_m68k.d[1], 0x8);
    M68K_MULU(g_m68k.d[0], g_m68k.d[1]);
    M68K_ADD32(g_m68k.d[0], 0x8000);
    M68K_SWAP(g_m68k.d[0]);
    M68K_CMP16(g_m68k.d[7], 0xffff);
    if (M68K_CC_NE) goto loc_00E9BC;
    M68K_NEG16(g_m68k.d[0]);
loc_00E9BC:
    { uint32_t _ea = (g_m68k.a[6] + 0xdc); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[0]); bus_write16(_ea, _tmp); }
loc_00E9C0:
    return;
}

/* $00EA12-$00EA42  (14 instructions, 48 bytes) */
void sub_00EA12(void) {
    g_m68k.a[0] = 0x0228E2;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x20))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_LSR16(g_m68k.d[0], 0x6);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x14))); M68K_TST16((uint16_t)g_m68k.d[1]);
    if (M68K_CC_PL) goto loc_00EA2E;
    M68K_NEG16(g_m68k.d[1]);
loc_00EA2E:
    M68K_CMP16(g_m68k.d[1], 0x800);
    if (M68K_CC_LE) goto loc_00EA40;
    M68K_MULS(g_m68k.d[0], bus_read16(g_m68k.a[6] + 0x14));
    M68K_ASR32(g_m68k.d[0], 0x8);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[6] + 0x14, _mv); M68K_TST16(_mv); }
loc_00EA40:
    return;
}

/* $00EA42-$00EAA8  (30 instructions, 102 bytes) */
void sub_00EA42(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x14))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x130), 0x1);
    if (M68K_CC_NE) goto loc_00EA66;
    M68K_CMP16(g_m68k.d[0], 0x6ff);
    if (M68K_CC_LE) goto loc_00EA98;
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x3c), 0x1);
    if (M68K_CC_NE) goto loc_00EA60;
    M68K_SUB16(g_m68k.d[0], bus_read16(g_m68k.a[6] + 0x4c));
loc_00EA60:
    M68K_SUB16(g_m68k.d[0], 0x12);
    goto loc_00EA98;
loc_00EA66:
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0xe2), 0x1);
    if (M68K_CC_NE) goto loc_00EA8C;
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x4), 0x1);
    if (M68K_CC_EQ) goto loc_00EA8A;
    M68K_CMP16(g_m68k.d[0], bus_read16(g_m68k.a[6] + 0x84));
    if (M68K_CC_LE) goto loc_00EA8A;
    M68K_SUB16(g_m68k.d[0], 0xd8);
    M68K_CMP16(g_m68k.d[0], bus_read16(g_m68k.a[6] + 0x84));
    if (M68K_CC_GT) goto loc_00EA8A;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x84))); M68K_TST16((uint16_t)g_m68k.d[0]);
loc_00EA8A:
    goto loc_00EA98;
loc_00EA8C:
    M68K_CMP16(g_m68k.d[0], bus_read16(g_m68k.a[6] + 0x80));
    if (M68K_CC_LE) goto loc_00EA98;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x80))); M68K_TST16((uint16_t)g_m68k.d[0]);
    goto loc_00EAA2;
loc_00EA98:
    M68K_CMP16(g_m68k.d[0], bus_read16(g_m68k.a[6] + 0x82));
    if (M68K_CC_GE) goto loc_00EAA2;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x82))); M68K_TST16((uint16_t)g_m68k.d[0]);
loc_00EAA2:
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[6] + 0x14, _mv); M68K_TST16(_mv); }
    return;
}

/* $00EAA8-$00EAE8  (18 instructions, 64 bytes) */
void sub_00EAA8(void) {
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[6] + 0xc0)); bus_write32(g_m68k.a[6] + 0xb8, _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[6] + 0xc4)); bus_write32(g_m68k.a[6] + 0xbc, _mv); M68K_TST32(_mv); }
    g_m68k.a[5] = 0x027A3A;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xdc))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_LSR16(g_m68k.d[0], 0x6);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_ADD16(g_m68k.d[1], g_m68k.d[1]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.d[1]))); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_ADD16(g_m68k.d[0], 0x100);
    M68K_AND16(g_m68k.d[0], 0x3ff);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x14))); M68K_TST16((uint16_t)g_m68k.d[2]);
    M68K_MULS(g_m68k.d[0], g_m68k.d[2]);
    M68K_MULS(g_m68k.d[1], g_m68k.d[2]);
    { uint32_t _ea = (g_m68k.a[6] + 0xc0); uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[0]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[6] + 0xc4); uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    return;
}

/* $00EAE8-$00EB44  (26 instructions, 92 bytes) */
void sub_00EAE8(void) {
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xde))); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x14))); M68K_TST16((uint16_t)g_m68k.d[0]);
    if (M68K_CC_PL) goto loc_00EAFA;
    M68K_NEG16(g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[1], 0x8000);
loc_00EAFA:
    M68K_LSR16(g_m68k.d[1], 0x6);
    M68K_LSR16(g_m68k.d[0], 0x4);
    M68K_AND16(g_m68k.d[0], 0xff);
    g_m68k.a[0] = 0x022CE2;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST8((uint8_t)g_m68k.d[0]);
    M68K_LSL16(g_m68k.d[0], 0x8);
    M68K_ADD16(g_m68k.d[1], 0x200);
    M68K_AND16(g_m68k.d[1], 0x3ff);
    M68K_LSR16(g_m68k.d[1], 0x2);
    M68K_ADD16(g_m68k.d[1], g_m68k.d[1]);
    M68K_ADD16(g_m68k.d[1], g_m68k.d[1]);
    g_m68k.a[0] = 0x022DE2;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[1]))); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[0] + 0x2 + (int16_t)(uint16_t)g_m68k.d[1]))); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_MULS(g_m68k.d[1], g_m68k.d[0]);
    M68K_MULS(g_m68k.d[2], g_m68k.d[0]);
    M68K_ADD32(g_m68k.d[1], 0xa00000);
    M68K_ADD32(g_m68k.d[2], 0x800000);
    { uint32_t _mv = (uint32_t)(g_m68k.d[1]); bus_write32(g_m68k.a[6] + 0xd0, _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(g_m68k.d[2]); bus_write32(g_m68k.a[6] + 0xd4, _mv); M68K_TST32(_mv); }
    return;
}

/* $00EB44-$00EB74  (13 instructions, 48 bytes) */
void sub_00EB44(void) {
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x4)); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x14), 0x9ff);
    if (M68K_CC_LE) goto loc_00EB56;
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x4)); M68K_TST16((uint16_t)g_m68k.d[1]);
loc_00EB56:
    g_m68k.d[0] = bus_read32(g_m68k.a[6] + 0xd0); M68K_TST32((uint32_t)g_m68k.d[0]);
    M68K_SUB32(g_m68k.d[0], bus_read32(g_m68k.a[6] + 0xc8));
    M68K_ASR32(g_m68k.d[0], g_m68k.d[1]);
    { uint32_t _ea = (g_m68k.a[6] + 0xc8); uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[0]); bus_write32(_ea, _tmp); }
    g_m68k.d[0] = bus_read32(g_m68k.a[6] + 0xd4); M68K_TST32((uint32_t)g_m68k.d[0]);
    M68K_SUB32(g_m68k.d[0], bus_read32(g_m68k.a[6] + 0xcc));
    M68K_ASR32(g_m68k.d[0], g_m68k.d[1]);
    { uint32_t _ea = (g_m68k.a[6] + 0xcc); uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[0]); bus_write32(_ea, _tmp); }
    return;
}

/* $00EB74-$00EB9E  (13 instructions, 42 bytes) */
void sub_00EB74(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xc0))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_SUB16(g_m68k.d[0], bus_read16(g_m68k.a[6] + 0xd8));
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xa))); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_MULS(g_m68k.d[0], g_m68k.d[1]);
    M68K_ASR32(g_m68k.d[0], 0x8);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[6] + 0xc8, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xc4))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_SUB16(g_m68k.d[0], bus_read16(g_m68k.a[6] + 0xda));
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xa))); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_MULS(g_m68k.d[0], g_m68k.d[1]);
    M68K_ASR32(g_m68k.d[0], 0x8);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[6] + 0xcc, _mv); M68K_TST16(_mv); }
    return;
}

/* $00EB9E-$00EBD4  (19 instructions, 54 bytes) */
void sub_00EB9E(void) {
    g_m68k.d[0] = (uint32_t)(int32_t)(int8_t)(0x0); M68K_TST32(g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xc8))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_EXT32(g_m68k.d[0]);
    M68K_LSL32(g_m68k.d[0], 0x8);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xa))); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_DIVS(g_m68k.d[0], g_m68k.d[1]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xc0))); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_SUB16(g_m68k.d[1], g_m68k.d[0]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); bus_write16(g_m68k.a[6] + 0xd8, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (uint32_t)(int32_t)(int8_t)(0x0); M68K_TST32(g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xcc))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_EXT32(g_m68k.d[0]);
    M68K_LSL32(g_m68k.d[0], 0x8);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xa))); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_DIVS(g_m68k.d[0], g_m68k.d[1]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xc4))); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_SUB16(g_m68k.d[1], g_m68k.d[0]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); bus_write16(g_m68k.a[6] + 0xda, _mv); M68K_TST16(_mv); }
    return;
}

/* $00EBD4-$00EBD8  (1 instructions, 4 bytes) */
void sub_00EBD4(void) {
    { func_table_call(0xed2e); return; }
    /* WARNING: function did not end with RTS */
}

/* $00EDC6-$00EDF4  (12 instructions, 46 bytes) */
void sub_00EDC6(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xa))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_CMP16(g_m68k.d[0], bus_read16(g_m68k.a[6] + 0xc));
    if (M68K_CC_EQ) goto loc_00EDF2;
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[6] + 0xc, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xa))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x60))); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0xf4de);
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); bus_write16(g_m68k.a[6] + 0xe, _mv); M68K_TST16(_mv); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x62))); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0xf4de);
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); bus_write16(g_m68k.a[6] + 0x10, _mv); M68K_TST16(_mv); }
loc_00EDF2:
    return;
}

/* $00EDF4-$00EEA6  (44 instructions, 178 bytes) */
void sub_00EDF4(void) {
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[7]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x118))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_SUB16(g_m68k.d[0], bus_read16(g_m68k.a[6] + 0xd8));
    if (M68K_CC_PL) goto loc_00EE04;
    M68K_NEG16(g_m68k.d[0]);
loc_00EE04:
    M68K_CMP16(g_m68k.d[0], 0x80);
    if (M68K_CC_LE) goto loc_00EE0E;
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[7]);
loc_00EE0E:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x11a))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_SUB16(g_m68k.d[0], bus_read16(g_m68k.a[6] + 0xda));
    if (M68K_CC_PL) goto loc_00EE1A;
    M68K_NEG16(g_m68k.d[0]);
loc_00EE1A:
    M68K_CMP16(g_m68k.d[0], 0x80);
    if (M68K_CC_LE) goto loc_00EE24;
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[7]);
loc_00EE24:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xa))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x013538);
    func_table_call(0x014152);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xd8))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xda))); M68K_TST16((uint16_t)g_m68k.d[2]);
    M68K_CMP16(g_m68k.d[7], 0x1);
    if (M68K_CC_NE) goto loc_00EE66;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xd8))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xda))); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xa))); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[2])); M68K_TST16((uint16_t)g_m68k.d[3]);
    g_m68k.a[4] = bus_read32(0x101672);
    g_m68k.a[5] = bus_read32(0x101676);
    func_table_call(0x01348E);
    goto loc_00EE6C;
loc_00EE66:
    func_table_call(0x01352A);
loc_00EE6C:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xd8))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xda))); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x014144);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xc0))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xc4))); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x014752);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x101502))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xc4))); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x019F74);
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[6] + 0xd8)); bus_write16(g_m68k.a[6] + 0x118, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[6] + 0xda)); bus_write16(g_m68k.a[6] + 0x11a, _mv); M68K_TST16(_mv); }
    return;
}

/* $00EEA6-$00EEBC  (6 instructions, 22 bytes) */
void sub_00EEA6(void) {
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x6), 0x1);
    if (M68K_CC_NE) goto loc_00EEBA;
    func_table_call(0xeee2);
    func_table_call(0xef44);
    func_table_call(0xf0aa);
loc_00EEBA:
    return;
}

/* $00EEBC-$00EEE2  (11 instructions, 38 bytes) */
void sub_00EEBC(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xa))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_MULU(g_m68k.d[0], bus_read16(g_m68k.a[6] + 0x26));
    M68K_ASR32(g_m68k.d[0], 0x8);
    M68K_ASR32(g_m68k.d[0], 0x8);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[6] + 0x28, _mv); M68K_TST16(_mv); }
    M68K_CMP16(bus_read16(g_m68k.a[6] + 0x6), 0x1);
    if (M68K_CC_NE) goto loc_00EEE0;
    func_table_call(0xeee2);
    func_table_call(0xef9e);
    func_table_call(0xf0aa);
loc_00EEE0:
    return;
}

/* $00EEE2-$00EF44  (24 instructions, 98 bytes) */
void sub_00EEE2(void) {
    g_m68k.a[0] = bus_read32(g_m68k.a[6] + 0xec);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xa))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xa))); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x012266);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0x54))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[3] = bus_read32(g_m68k.a[6] + 0x6c);
    g_m68k.a[3] = bus_read32(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    func_table_call(0x012270);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xc8))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0xcc))); M68K_TST16((uint16_t)g_m68k.d[2]);
    { uint32_t _ea = (g_m68k.a[6] + 0x56); uint16_t _tmp = bus_read16(_ea); M68K_SUB16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    if (M68K_CC_GE) goto loc_00EF28;
    { uint32_t _ea = (g_m68k.a[6] + 0x58); uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, 0xffff); bus_write16(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[6] + 0x138)); bus_write16(g_m68k.a[6] + 0x56, _mv); M68K_TST16(_mv); }
    M68K_SUB16(g_m68k.d[2], bus_read16(g_m68k.a[6] + 0x13a));
loc_00EF28:
    M68K_SUB16(g_m68k.d[0], bus_read16(g_m68k.a[6] + 0x60));
    M68K_SUB16(g_m68k.d[2], bus_read16(g_m68k.a[6] + 0x62));
    M68K_ADD16(g_m68k.d[0], bus_read16(g_m68k.a[6] + 0xe));
    M68K_ADD16(g_m68k.d[2], bus_read16(g_m68k.a[6] + 0x10));
    M68K_SUB16(g_m68k.d[2], bus_read16(g_m68k.a[6] + 0x28));
    func_table_call(0x01225C);
    return;
}
