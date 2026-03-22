/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $006700 - $007CAC */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

/* $006700-$006706  (2 instructions, 6 bytes) */
void jt_006700(void) {
    M68K_OR8(g_m68k.d[1], 0x86);
    return;
}

/* $006706-$006768  (20 instructions, 98 bytes) */
void jt_006706(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x101190))); M68K_TST16((uint16_t)g_m68k.d[0]);
    if (M68K_CC_NE) goto loc_00672A;
    M68K_CMP16(bus_read16(0x101192), 0x0);
    if (M68K_CC_NE) goto loc_006766;
    func_table_call(0x0067E6);
    { uint32_t _ea = 0x101192; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    goto loc_006766;
loc_00672A:
    M68K_CMP16(bus_read16(0x101192), 0x4);
    if (M68K_CC_LT) goto loc_006760;
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(0x101192, _mv); M68K_TST16(_mv); }
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x101190))); M68K_TST16((uint16_t)g_m68k.d[1]);
    if (M68K_CC_MI) goto loc_00674E;
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0xffff)); M68K_TST16((uint16_t)g_m68k.d[1]);
    goto loc_006752;
loc_00674E:
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[1]);
loc_006752:
    { uint32_t _ea = 0x101190; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[1]); bus_write16(_ea, _tmp); }
    func_table_call(0x0067E6);
    goto loc_006766;
loc_006760:
    { uint32_t _ea = 0x101192; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0x1); bus_write16(_ea, _tmp); }
loc_006766:
    return;
}

/* $006768-$0067A8  (13 instructions, 64 bytes) */
void jt_006768(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x101190))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_CMP16(g_m68k.d[0], 0xfffe);
    if (M68K_CC_LT) goto loc_0067A6;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x101192))); M68K_TST16((uint16_t)g_m68k.d[0]);
    if (M68K_CC_EQ) goto loc_00679A;
    M68K_CMP16(g_m68k.d[0], 0x4);
    if (M68K_CC_LT) goto loc_0067A0;
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(0x101192, _mv); M68K_TST16(_mv); }
    { uint32_t _ea = 0x101190; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0xffff); bus_write16(_ea, _tmp); }
    goto loc_0067A6;
loc_00679A:
    func_table_call(0x0067E6);
loc_0067A0:
    { uint32_t _ea = 0x101192; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0x1); bus_write16(_ea, _tmp); }
loc_0067A6:
    return;
}

/* $0067A8-$0067E6  (13 instructions, 62 bytes) */
void jt_0067A8(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x101190))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_CMP16(g_m68k.d[0], 0x2);
    if (M68K_CC_HI) goto loc_0067E4;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x101192))); M68K_TST16((uint16_t)g_m68k.d[0]);
    if (M68K_CC_EQ) goto loc_0067D8;
    M68K_CMP16(g_m68k.d[0], 0x4);
    if (M68K_CC_LT) goto loc_0067DE;
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(0x101192, _mv); M68K_TST16(_mv); }
    { uint32_t _ea = 0x101190; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    goto loc_0067E4;
loc_0067D8:
    func_table_call(0x0067E6);
loc_0067DE:
    { uint32_t _ea = 0x101192; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0x1); bus_write16(_ea, _tmp); }
loc_0067E4:
    return;
}

/* $0067E6-$00681A  (11 instructions, 52 bytes) */
void sub_0067E6(void) {
    g_m68k.a[0] = bus_read32(0x101176);
    g_m68k.a[1] = 0x00682A;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x101190))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_LSL16(g_m68k.d[0], 0x3);
    g_m68k.a[3] = bus_read32(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    func_table_call(0x012270);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[1] + 0x6 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[1] + 0x4 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST16((uint16_t)g_m68k.d[0]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(0x101196, _mv); M68K_TST16(_mv); }
    func_table_call(0x01225C);
    return;
}

/* $006842-$0068B8  (26 instructions, 118 bytes) */
void jt_006842(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x101194))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_CMP16(g_m68k.d[0], 0x0);
    if (M68K_CC_GT) goto loc_00686A;
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(0x101194, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.a[0] = bus_read32(0x101176);
    func_table_call(0x012286);
    goto loc_0068B6;
loc_00686A:
    M68K_CMP16(g_m68k.d[0], 0x1);
    if (M68K_CC_NE) goto loc_00687E;
    g_m68k.a[0] = bus_read32(0x101176);
    func_table_call(0x012286);
loc_00687E:
    g_m68k.a[0] = bus_read32(0x101176);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[1] = 0x006920;
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[1])); M68K_TST16((uint16_t)g_m68k.d[2]);
    M68K_LSL16(g_m68k.d[2], 0x3);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x100)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x012266);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x101196))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0xc0)); M68K_TST16((uint16_t)g_m68k.d[2]);
    M68K_SUB16(g_m68k.d[2], g_m68k.d[1]);
    func_table_call(0x01225C);
    { uint32_t _ea = 0x101194; uint16_t _tmp = bus_read16(_ea); M68K_SUB16(_tmp, 0x1); bus_write16(_ea, _tmp); }
loc_0068B6:
    return;
}

/* $0068B8-$006920  (25 instructions, 104 bytes) */
void jt_0068B8(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x101194))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_CMP16(g_m68k.d[0], 0xf);
    if (M68K_CC_CS) goto loc_0068D0;
    { uint16_t _mv = (uint16_t)(0xf); bus_write16(0x101194, _mv); M68K_TST16(_mv); }
    goto loc_00691E;
loc_0068D0:
    M68K_CMP16(g_m68k.d[0], 0x1);
    if (M68K_CC_NE) goto loc_0068EC;
    M68K_SWAP(g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.a[0] = bus_read32(0x101176);
    func_table_call(0x012286);
    M68K_SWAP(g_m68k.d[0]);
loc_0068EC:
    g_m68k.a[0] = bus_read32(0x101176);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x6920 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[1])); M68K_TST16((uint16_t)g_m68k.d[2]);
    M68K_LSL16(g_m68k.d[2], 0x3);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x100)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x012266);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x101196))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0xc0)); M68K_TST16((uint16_t)g_m68k.d[2]);
    M68K_SUB16(g_m68k.d[2], g_m68k.d[1]);
    func_table_call(0x01225C);
    { uint32_t _ea = 0x101194; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0x1); bus_write16(_ea, _tmp); }
loc_00691E:
    return;
}

/* $006940-$006970  (11 instructions, 48 bytes) */
void jt_006940(void) {
    g_m68k.a[0] = bus_read32(0x101176);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x101180))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[3] = bus_read32(0x6970 + (int16_t)(uint16_t)g_m68k.d[0]);
    func_table_call(0x012270);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x98)); M68K_TST16((uint16_t)g_m68k.d[0]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(0x101196, _mv); M68K_TST16(_mv); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0xa0)); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x01225C);
    return;
}

/* $006AB4-$006AC4  (4 instructions, 16 bytes) */
void jt_006AB4(void) {
    M68K_OR8(g_m68k.d[0], 0xc4);
    M68K_OR8(g_m68k.d[0], 0xb4);
    M68K_OR8(g_m68k.d[0], 0xb0);
    M68K_OR8(g_m68k.d[0], 0xec);
    /* WARNING: function did not end with RTS */
}

/* $006AC4-$006B0C  (18 instructions, 72 bytes) */
void jt_006AC4(void) {
    M68K_OR8(g_m68k.d[0], 0xc);
    M68K_OR8(g_m68k.d[0], 0x40);
    M68K_OR8(g_m68k.d[0], 0x74);
    M68K_OR8(g_m68k.d[0], 0x98);
    M68K_OR8(g_m68k.d[0], 0xcc);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0xa4);
    M68K_OR8(g_m68k.d[0], 0x48);
    M68K_OR8(g_m68k.d[0], 0xb4);
    M68K_OR8(g_m68k.d[0], 0xb4);
    M68K_OR8(g_m68k.d[0], 0xb4);
    M68K_OR8(g_m68k.d[0], 0x40);
    M68K_OR8(g_m68k.d[0], 0x58);
    M68K_OR8(g_m68k.d[0], 0x70);
    M68K_OR8(g_m68k.d[0], 0x98);
    M68K_OR8(g_m68k.d[0], 0xb4);
    M68K_OR8(g_m68k.d[0], 0xb0);
    M68K_OR8(g_m68k.d[0], 0xec);
    /* WARNING: function did not end with RTS */
}

/* $006B0C-$006B40  (21 instructions, 52 bytes) */
void jt_006B0C(void) {
    M68K_OR8(g_m68k.d[4], 0x3);
    M68K_ASR8(g_m68k.d[6], g_m68k.d[5]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* TODO $006B14: roxr.l #$5, d4  [EA 34] */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_ASR8(g_m68k.d[7], g_m68k.d[5]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* TODO $006B20: roxr.l #$5, d5  [EA 35] */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_LSR8(g_m68k.d[0], g_m68k.d[5]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* TODO $006B2C: roxr.l #$5, d6  [EA 36] */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_ASR16(g_m68k.d[0], 0x5);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_ASR16(g_m68k.d[1], 0x5);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $006B40-$006B74  (24 instructions, 52 bytes) */
void jt_006B40(void) {
    M68K_OR8(g_m68k.d[3], 0x4);
    M68K_ASR8(g_m68k.d[0], g_m68k.d[5]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_LSR8(g_m68k.d[1], g_m68k.d[5]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* TODO $006B4C: roxr.l #$5, d7  [EA 37] */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_ASR8(g_m68k.d[1], g_m68k.d[5]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_LSR8(g_m68k.d[2], g_m68k.d[5]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_ROR8(g_m68k.d[0], g_m68k.d[5]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_ASR16(g_m68k.d[2], 0x5);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint32_t _ea = g_m68k.a[0]; uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[0]); bus_write32(_ea, _tmp); }
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_LSR8(g_m68k.d[3], g_m68k.d[5]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint32_t _ea = g_m68k.a[0]; uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[0]); bus_write32(_ea, _tmp); }
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_ASR16(g_m68k.d[3], 0x5);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $006B74-$006B98  (17 instructions, 36 bytes) */
void jt_006B74(void) {
    M68K_OR8(g_m68k.d[2], 0x4);
    M68K_ASR8(g_m68k.d[2], g_m68k.d[5]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_LSR8(g_m68k.d[4], g_m68k.d[5]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_ROR8(g_m68k.d[1], g_m68k.d[5]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_ASR16(g_m68k.d[4], 0x5);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_ASR8(g_m68k.d[3], g_m68k.d[5]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_LSR8(g_m68k.d[5], g_m68k.d[5]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_ROR8(g_m68k.d[2], g_m68k.d[5]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_ASR16(g_m68k.d[5], 0x5);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $006B98-$006BCC  (23 instructions, 52 bytes) */
void jt_006B98(void) {
    M68K_OR8(g_m68k.d[3], 0x4);
    { uint32_t _ea = g_m68k.a[0]; uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[0]); bus_write32(_ea, _tmp); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_LSR8(g_m68k.d[6], g_m68k.d[5]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_ASR16(g_m68k.d[6], 0x5);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_ASR8(g_m68k.d[4], g_m68k.d[5]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_LSR8(g_m68k.d[7], g_m68k.d[5]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_ROR8(g_m68k.d[3], g_m68k.d[5]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_ASR16(g_m68k.d[7], 0x5);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_ASR8(g_m68k.d[5], g_m68k.d[5]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* TODO $006BC0: roxr.l #$5, d0  [EA 30] */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_ROR8(g_m68k.d[4], g_m68k.d[5]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $006BCC-$006C00  (21 instructions, 52 bytes) */
void jt_006BCC(void) {
    M68K_OR8(g_m68k.d[4], 0x3);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_LSR16(g_m68k.d[0], 0x5);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* TODO $006BDC: roxr.l #$5, d1  [EA 31] */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_ROR8(g_m68k.d[5], g_m68k.d[5]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_LSR16(g_m68k.d[1], 0x5);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* TODO $006BE8: roxr.l #$5, d2  [EA 32] */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_ROR8(g_m68k.d[6], g_m68k.d[5]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $006BF4: roxr.l #$5, d3  [EA 33] */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_ROR8(g_m68k.d[7], g_m68k.d[5]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $006E00-$006E40  (31 instructions, 64 bytes) */
void jt_006E00(void) {
    M68K_LSR16(g_m68k.d[4], 0x5);
    M68K_NEG8(g_m68k.d[0]);
    /* TODO $006E04: roxr.w #$5, d5  [EA 55] */
    M68K_NEG8(g_m68k.d[0]);
    M68K_LSR16(g_m68k.d[5], 0x5);
    M68K_NEG8(g_m68k.d[0]);
    /* TODO $006E0C: roxr.w #$5, d6  [EA 56] */
    M68K_NEG8(g_m68k.d[0]);
    M68K_LSR16(g_m68k.d[6], 0x5);
    M68K_NEG8(g_m68k.d[0]);
    /* TODO $006E14: roxr.w #$5, d7  [EA 57] */
    M68K_NEG8(g_m68k.d[0]);
    M68K_LSR16(g_m68k.d[7], 0x5);
    M68K_NEG8(g_m68k.d[0]);
    M68K_ROR16(g_m68k.d[0], 0x5);
    M68K_NEG8(g_m68k.d[0]);
    /* TODO $006E20: roxr.w #$5, d0  [EA 50] */
    M68K_NEG8(g_m68k.d[0]);
    M68K_ROR16(g_m68k.d[1], 0x5);
    M68K_NEG8(g_m68k.d[0]);
    /* TODO $006E28: roxr.w #$5, d1  [EA 51] */
    M68K_NEG8(g_m68k.d[0]);
    M68K_ROR16(g_m68k.d[2], 0x5);
    M68K_NEG8(g_m68k.d[0]);
    /* TODO $006E30: roxr.w #$5, d2  [EA 52] */
    M68K_NEG8(g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[5] + 0x4400); uint16_t _tmp = bus_read16(_ea); M68K_ROR16(_tmp, 1); bus_write16(_ea, _tmp); }
    /* TODO $006E38: roxr.w #$5, d3  [EA 53] */
    M68K_NEG8(g_m68k.d[0]);
    M68K_ROR16(g_m68k.d[3], 0x5);
    M68K_NEG8(g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $006E40-$006E58  (10 instructions, 24 bytes) */
void jt_006E40(void) {
    M68K_OR8(g_m68k.d[5], 0x1);
    M68K_ROR16(g_m68k.d[4], 0x5);
    M68K_NEG8(g_m68k.d[0]);
    M68K_ROR16(g_m68k.d[5], 0x5);
    M68K_NEG8(g_m68k.d[0]);
    M68K_ROR16(g_m68k.d[6], 0x5);
    M68K_NEG8(g_m68k.d[0]);
    M68K_ROR16(g_m68k.d[7], 0x5);
    M68K_NEG8(g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $006E58-$006E70  (11 instructions, 24 bytes) */
void jt_006E58(void) {
    M68K_OR8(g_m68k.d[5], 0x1);
    M68K_ASR16(g_m68k.d[0], g_m68k.d[5]);
    M68K_NEG8(g_m68k.d[0]);
    M68K_ASR16(g_m68k.d[1], g_m68k.d[5]);
    M68K_NEG8(g_m68k.d[0]);
    M68K_ASR16(g_m68k.d[2], g_m68k.d[5]);
    M68K_NEG8(g_m68k.d[0]);
    M68K_ASR16(g_m68k.d[3], g_m68k.d[5]);
    M68K_NEG8(g_m68k.d[0]);
    M68K_ASR16(g_m68k.d[4], g_m68k.d[5]);
    M68K_NEG8(g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $006E98-$006EB0  (11 instructions, 24 bytes) */
void jt_006E98(void) {
    M68K_OR8(g_m68k.d[5], 0x1);
    M68K_LSR16(g_m68k.d[6], g_m68k.d[5]);
    M68K_NEG8(g_m68k.d[0]);
    M68K_LSR16(g_m68k.d[7], g_m68k.d[5]);
    M68K_NEG8(g_m68k.d[0]);
    /* TODO $006EA4: roxr.w d5, d0  [EA 70] */
    M68K_NEG8(g_m68k.d[0]);
    /* TODO $006EA8: roxr.w d5, d1  [EA 71] */
    M68K_NEG8(g_m68k.d[0]);
    /* TODO $006EAC: roxr.w d5, d2  [EA 72] */
    M68K_NEG8(g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $006EB0-$006ECC  (7 instructions, 28 bytes) */
void jt_006EB0(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x10); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint16_t _tmp = bus_read16(_ea); M68K_OR16(_tmp, 0x4100); bus_write16(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[7]; uint16_t _tmp = bus_read16(_ea); M68K_OR16(_tmp, 0x4100); bus_write16(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[3] + 0x6f); uint16_t _tmp = bus_read16(_ea); M68K_OR16(_tmp, 0x4100); bus_write16(_ea, _tmp); }
    /* TODO $006EC2: dc.w $4100  [41 00] */
    { uint32_t _ea = (g_m68k.a[3] + 0x7b + (int16_t)(uint16_t)g_m68k.d[0]); uint16_t _tmp = bus_read16(_ea); M68K_OR16(_tmp, 0x4100); bus_write16(_ea, _tmp); }
    /* TODO $006ECA: dc.w $4100  [41 00] */
    /* WARNING: function did not end with RTS */
}

/* $006F90-$006FA0  (4 instructions, 16 bytes) */
void jt_006F90(void) {
    M68K_OR32(g_m68k.d[2], 0x41000082);
    /* TODO $006F96: dc.w $4102  [41 02] */
    { uint32_t _ea = (g_m68k.a[3] + 0x7b + (int16_t)(uint16_t)g_m68k.d[0]); uint16_t _tmp = bus_read16(_ea); M68K_OR16(_tmp, 0x4100); bus_write16(_ea, _tmp); }
    /* TODO $006F9E: dc.w $4100  [41 00] */
    /* WARNING: function did not end with RTS */
}

/* $007020-$007048  (10 instructions, 40 bytes) */
void jt_007020(void) {
    { uint32_t _ea = 0x000070; uint16_t _tmp = bus_read16(_ea); M68K_OR16(_tmp, 0x4102); bus_write16(_ea, _tmp); }
    /* TODO $007026: dc.w $4102  [41 02] */
    { uint32_t _ea = (g_m68k.a[4] + 0x68); uint16_t _tmp = bus_read16(_ea); M68K_OR16(_tmp, 0x4102); bus_write16(_ea, _tmp); }
    /* TODO $00702E: dc.w $4102  [41 02] */
    { uint32_t _ea = g_m68k.a[4]; uint16_t _tmp = bus_read16(_ea); M68K_OR16(_tmp, 0x4102); bus_write16(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[5]; uint16_t _tmp = bus_read16(_ea); M68K_OR16(_tmp, 0x4100); bus_write16(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[1] + 0x6d); uint16_t _tmp = bus_read16(_ea); M68K_OR16(_tmp, 0x4100); bus_write16(_ea, _tmp); }
    /* TODO $00703E: dc.w $4100  [41 00] */
    { uint32_t _ea = (g_m68k.a[1] + 0x79 + (int16_t)(uint16_t)g_m68k.d[0]); uint16_t _tmp = bus_read16(_ea); M68K_OR16(_tmp, 0x4100); bus_write16(_ea, _tmp); }
    /* TODO $007046: dc.w $4100  [41 00] */
    /* WARNING: function did not end with RTS */
}

/* $0071D4-$007208  (13 instructions, 52 bytes) */
void jt_0071D4(void) {
    M68K_OR32(g_m68k.d[0], 0x41020074);
    /* TODO $0071DA: dc.w $4100  [41 00] */
    m68k_set_sr(m68k_get_sr() | 0x4100);
    { uint32_t _ea = (g_m68k.a[7] + 0x6f + (int16_t)(uint16_t)g_m68k.d[0]); uint16_t _tmp = bus_read16(_ea); M68K_OR16(_tmp, 0x4102); bus_write16(_ea, _tmp); }
    /* TODO $0071E6: dc.w $4102  [41 02] */
    { uint32_t _ea = (g_m68k.a[3] + 0x67); uint16_t _tmp = bus_read16(_ea); M68K_OR16(_tmp, 0x4102); bus_write16(_ea, _tmp); }
    /* TODO $0071EE: dc.w $4102  [41 02] */
    { uint32_t _ea = g_m68k.a[3]; uint16_t _tmp = bus_read16(_ea); M68K_OR16(_tmp, 0x4102); bus_write16(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[4]; uint16_t _tmp = bus_read16(_ea); M68K_OR16(_tmp, 0x4100); bus_write16(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[0] + 0x6c); uint16_t _tmp = bus_read16(_ea); M68K_OR16(_tmp, 0x4100); bus_write16(_ea, _tmp); }
    /* TODO $0071FE: dc.w $4100  [41 00] */
    { uint32_t _ea = (g_m68k.a[0] + 0x78 + (int16_t)(uint16_t)g_m68k.d[0]); uint16_t _tmp = bus_read16(_ea); M68K_OR16(_tmp, 0x4100); bus_write16(_ea, _tmp); }
    /* TODO $007206: dc.w $4100  [41 00] */
    /* WARNING: function did not end with RTS */
}

/* $0072B4-$0072BC  (2 instructions, 8 bytes) */
void jt_0072B4(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0072BC-$007314  (16 instructions, 88 bytes) */
void sub_0072BC(void) {
    func_table_call(0x000A26);
    func_table_call(0x0120E0);
    func_table_call(0x0133FA);
    func_table_call(0x0076AC); /* loc_0076AC */
    bus_write16(0x1011A2, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(0x10119E, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(0x10119C, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x3c); bus_write16(0x1011A0, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x8)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x00738E);
    func_table_call(0x0073B4);
    func_table_call(0x007494); /* loc_007494 */
    func_table_call(0x0073D2); /* loc_0073D2 */
    func_table_call(0x01229E);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $007314-$00734C  (13 instructions, 56 bytes) */
void sub_007314(void) {
    M68K_CMP16(bus_read16(0x1011A2), 0x2);
    if (M68K_CC_CS) goto loc_007334;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x10119E))); M68K_TST16((uint16_t)g_m68k.d[1]);
    { uint32_t _ea = 0x1011A0; uint16_t _tmp = bus_read16(_ea); M68K_SUB16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    if (M68K_CC_PL) goto loc_00734A;
loc_007334:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1011A2))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[0] = bus_read32(0x734c + (int16_t)(uint16_t)g_m68k.d[0]);
    func_table_call(g_m68k.a[0]);
    func_table_call(0x01229E);
loc_00734A:
    return;
}

/* $007358-$007366  (4 instructions, 14 bytes) */
void jt_007358(void) {
    func_table_call(0x0074CA); /* loc_0074CA */
    func_table_call(0x0073D2); /* loc_0073D2 */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $007366-$007370  (3 instructions, 10 bytes) */
void jt_007366(void) {
    func_table_call(0x0075DE); /* loc_0075DE */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $007370-$00738E  (6 instructions, 30 bytes) */
void jt_007370(void) {
    func_table_call(0x0120E0);
    func_table_call(0x0133FA);
    g_m68k.a[0] = bus_read32(0x101198);
    func_table_call(0x0110A2);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00738E-$0073B4  (9 instructions, 38 bytes) */
void sub_00738E(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    func_table_call(0x010F96);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    bus_write32(0x101198, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    func_table_call(0x010FCC);
    { uint32_t _mv = (uint32_t)(g_m68k.a[0]); bus_write32(0x101198, _mv); M68K_TST32(_mv); }
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}

/* $0073B4-$00741A  (25 instructions, 102 bytes) */
void sub_0073B4(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    g_m68k.a[6] = bus_read32(0x101198);
    M68K_SUB16(g_m68k.d[0], 0x1);
loc_0073C0:
    func_table_call(0x012202);
    { uint32_t _mv = (uint32_t)(g_m68k.a[0]); bus_write32(g_m68k.a[6], _mv); g_m68k.a[6] += 4; M68K_TST32(_mv); }
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[0]; _cnt--; g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_0073C0; } }
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
loc_0073D2:
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[7]);
    g_m68k.a[5] = bus_read32(0x101198);
    g_m68k.a[6] = 0x0079CC;
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(0x5)); M68K_TST16((uint16_t)g_m68k.d[7]);
loc_0073E6:
    g_m68k.a[0] = _postinc32(5);
    func_table_call(0x007462); /* loc_007462 */
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[7]; _cnt--; g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_0073E6; } }
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x10119C))); M68K_TST16((uint16_t)g_m68k.d[7]);
    M68K_ADD16(g_m68k.d[7], g_m68k.d[7]);
    M68K_ADD16(g_m68k.d[7], g_m68k.d[7]);
    g_m68k.a[5] = bus_read32(0x101198);
    g_m68k.a[0] = bus_read32(g_m68k.a[5] + 0x8 + (int16_t)(uint16_t)g_m68k.d[7]);
    M68K_ADD16(g_m68k.d[7], g_m68k.d[7]);
    g_m68k.a[6] = 0x0079FC;
    g_m68k.a[6] = (g_m68k.a[6] + 0 + (int16_t)(uint16_t)g_m68k.d[7]);
    func_table_call(0x007462); /* loc_007462 */
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x10119E))); M68K_TST16((uint16_t)g_m68k.d[7]);
    /* WARNING: function did not end with RTS */
}

/* $007418-$00765C  (125 instructions, 580 bytes) */
void jt_007418(void) {
    { uint8_t _mv = (uint8_t)(_postinc8(6)); bus_write8(g_m68k.a[0] + 0x47 + (int32_t)g_m68k.a[5], _mv); M68K_TST8(_mv); }
    M68K_ADD16(g_m68k.d[7], g_m68k.d[7]);
    M68K_ADD16(g_m68k.d[7], g_m68k.d[7]);
    g_m68k.a[5] = bus_read32(0x101198);
    g_m68k.a[0] = bus_read32(g_m68k.a[5] + 0x18);
    M68K_ADD16(g_m68k.d[7], g_m68k.d[7]);
    g_m68k.a[6] = 0x007A1C;
    g_m68k.a[6] = (g_m68k.a[6] + 0 + (int16_t)(uint16_t)g_m68k.d[7]);
    func_table_call(0x007462); /* loc_007462 */
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x10119E))); M68K_TST16((uint16_t)g_m68k.d[7]);
    M68K_ADD16(g_m68k.d[7], g_m68k.d[7]);
    M68K_ADD16(g_m68k.d[7], g_m68k.d[7]);
    g_m68k.a[5] = bus_read32(0x101198);
    g_m68k.a[0] = bus_read32(g_m68k.a[5] + 0x1c);
    M68K_ADD16(g_m68k.d[7], g_m68k.d[7]);
    g_m68k.a[6] = 0x007A44;
    g_m68k.a[6] = (g_m68k.a[6] + 0 + (int16_t)(uint16_t)g_m68k.d[7]);
    func_table_call(0x007462); /* loc_007462 */
    g_m68k.d[7] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
loc_007462:
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(_postinc16(6))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[3] = bus_read32(0x080034);
    g_m68k.a[3] = bus_read32(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    func_table_call(0x012270);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(_postinc16(6))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(_postinc16(6))); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x01225C);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(_postinc16(6))); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x012256);
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
loc_007494:
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0xc)); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[4] = bus_read32(0x080034);
    g_m68k.a[4] = (g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    g_m68k.a[5] = (g_m68k.a[4] + 0x8);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x100)); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0x100)); M68K_TST16((uint16_t)g_m68k.d[3]);
    func_table_call(0x01348E);
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
loc_0074CA:
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    func_table_call(0x007692); /* loc_007692 */
    M68K_BTST(g_m68k.d[0], 0x0);
    if (M68K_CC_EQ) goto loc_0074EA;
    { uint32_t _ea = 0x10119E; uint16_t _tmp = bus_read16(_ea); M68K_SUB16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    { uint32_t _ea = 0x10119C; uint16_t _tmp = bus_read16(_ea); M68K_SUB16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    goto loc_0074FE;
loc_0074EA:
    M68K_BTST(g_m68k.d[0], 0x1);
    if (M68K_CC_EQ) goto loc_007542;
    { uint32_t _ea = 0x10119E; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    { uint32_t _ea = 0x10119C; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0x1); bus_write16(_ea, _tmp); }
loc_0074FE:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0xc6)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x015256);
    M68K_CMP16(bus_read16(0x10119E), 0x3);
    if (M68K_CC_LE) goto loc_007524;
    bus_write16(0x10119E, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    bus_write16(0x10119C, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    goto loc_0075D8;
loc_007524:
    M68K_TST16(bus_read16(0x10119E));
    if (M68K_CC_PL) goto loc_0075D8;
    { uint16_t _mv = (uint16_t)(0x3); bus_write16(0x10119E, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x3); bus_write16(0x10119C, _mv); M68K_TST16(_mv); }
    goto loc_0075D8;
loc_007542:
    M68K_BTST(g_m68k.d[0], 0x4);
    if (M68K_CC_EQ) goto loc_007568;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0xc7)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x015256);
    { uint16_t _mv = (uint16_t)(0x4); bus_write16(0x10119E, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(0x1011A2, _mv); M68K_TST16(_mv); }
    goto loc_0075D8;
loc_007568:
    M68K_BTST(g_m68k.d[0], 0x5);
    if (M68K_CC_EQ) goto loc_00758E;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0xc7)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x015256);
    { uint16_t _mv = (uint16_t)(0x4); bus_write16(0x10119E, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(0x1011A2, _mv); M68K_TST16(_mv); }
    goto loc_0075D8;
loc_00758E:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(0x10FDAD))); M68K_TST8((uint8_t)g_m68k.d[0]);
    M68K_CMP16(bus_read16(0x1011FC), 0x1);
    if (M68K_CC_EQ) goto loc_0075BE;
    M68K_BTST(g_m68k.d[0], 0x0);
    if (M68K_CC_EQ) goto loc_0075D8;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0xc7)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x015256);
    { uint16_t _mv = (uint16_t)(0x2); bus_write16(0x1011A2, _mv); M68K_TST16(_mv); }
    goto loc_0075D8;
loc_0075BE:
    M68K_BTST(g_m68k.d[0], 0x2);
    if (M68K_CC_EQ) goto loc_0075D8;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0xc7)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x015256);
    { uint16_t _mv = (uint16_t)(0x2); bus_write16(0x1011A2, _mv); M68K_TST16(_mv); }
loc_0075D8:
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
loc_0075DE:
    func_table_call(0x007692); /* loc_007692 */
    M68K_BTST(g_m68k.d[0], 0x0);
    if (M68K_CC_EQ) goto loc_00760A;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0xc6)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x015256);
    { uint16_t _mv = (uint16_t)(bus_read16(0x10119C)); bus_write16(0x10119E, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(0x1011A2, _mv); M68K_TST16(_mv); }
    { func_table_call(0x007690); return; }
loc_00760A:
    M68K_BTST(g_m68k.d[0], 0x4);
    if (M68K_CC_EQ) goto loc_007628;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0xc7)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x015256);
    { uint16_t _mv = (uint16_t)(0x2); bus_write16(0x1011A2, _mv); M68K_TST16(_mv); }
    { func_table_call(0x007690); return; }
loc_007628:
    M68K_BTST(g_m68k.d[0], 0x5);
    if (M68K_CC_EQ) goto loc_007646;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0xc7)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x015256);
    { uint16_t _mv = (uint16_t)(0x2); bus_write16(0x1011A2, _mv); M68K_TST16(_mv); }
    { func_table_call(0x007690); return; }
loc_007646:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(0x10FDAD))); M68K_TST8((uint8_t)g_m68k.d[0]);
    M68K_CMP16(bus_read16(0x1011FC), 0x1);
    if (M68K_CC_EQ) { func_table_call(0x007676); return; }
    M68K_BTST(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $00765C-$0076CC  (24 instructions, 112 bytes) */
void jt_00765C(void) {
    if (M68K_CC_EQ) goto loc_007690;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0xc7)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x015256);
    { uint16_t _mv = (uint16_t)(0x2); bus_write16(0x1011A2, _mv); M68K_TST16(_mv); }
    goto loc_007690;
loc_007676:
    M68K_BTST(g_m68k.d[0], 0x2);
    if (M68K_CC_EQ) goto loc_007690;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0xc7)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x015256);
    { uint16_t _mv = (uint16_t)(0x2); bus_write16(0x1011A2, _mv); M68K_TST16(_mv); }
loc_007690:
    return;
loc_007692:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(0x10FD97))); M68K_TST8((uint8_t)g_m68k.d[0]);
    M68K_CMP16(bus_read16(0x1011FC), 0x0);
    if (M68K_CC_EQ) goto loc_0076AA;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(0x10FD9D))); M68K_TST8((uint8_t)g_m68k.d[0]);
loc_0076AA:
    return;
loc_0076AC:
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x40)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x10)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x100)); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.a[3] = 0x76cc;
    func_table_call(0x012036);
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}

/* $0078A0-$0078BE  (11 instructions, 30 bytes) */
void jt_0078A0(void) {
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[3])); g_m68k.a[7] -= 1; bus_write8(g_m68k.a[7], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x0); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x1f);
    { uint8_t _mv = (uint8_t)(_postinc8(7)); g_m68k.a[7] -= 1; bus_write8(g_m68k.a[7], _mv); M68K_TST8(_mv); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[5]))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[2] -= 1; bus_write8(g_m68k.a[2], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[4]);
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, 0x8); bus_write8(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[5] -= 1; bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    M68K_BTST(bus_read8(g_m68k.a[4]), g_m68k.d[5]);
    /* WARNING: function did not end with RTS */
}

/* $007A6C-$007AC4  (22 instructions, 88 bytes) */
void sub_007A6C(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    g_m68k.a[2] = 0x1000B2;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x101202))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[2] = bus_read32(g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x101214))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[2] = bus_read32(g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    g_m68k.d[1] = bus_read32(g_m68k.a[2]); M68K_TST32((uint32_t)g_m68k.d[1]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x101202))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x101506))); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x007AC4);
    g_m68k.a[0] = 0x103340;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x101202))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[0] = bus_read32(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); bus_write16(g_m68k.a[0] + 0x20, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}

/* $007AC4-$007AE4  (10 instructions, 32 bytes) */
void sub_007AC4(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    g_m68k.a[1] = 0x007AFC;
    M68K_ADD16(g_m68k.d[2], g_m68k.d[2]);
    M68K_ADD16(g_m68k.d[2], g_m68k.d[2]);
    g_m68k.a[1] = bus_read32(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[2]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[1] = bus_read32(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x4)); M68K_TST16((uint16_t)g_m68k.d[0]);
loc_007AE2:
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[2]);
    /* WARNING: function did not end with RTS */
}

/* $007AE4-$007AFC  (9 instructions, 24 bytes) */
void jt_007AE4(void) {
    M68K_ADD16(g_m68k.d[2], g_m68k.d[2]);
    M68K_ADD16(g_m68k.d[2], g_m68k.d[2]);
    g_m68k.d[2] = bus_read32(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[2]); M68K_TST32((uint32_t)g_m68k.d[2]);
    M68K_CMP32(g_m68k.d[1], g_m68k.d[2]);
    if (!(M68K_CC_HI)) { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[0]; _cnt--; g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { func_table_call(0x007AE2); return; } }
    M68K_ADD16(g_m68k.d[0], 0x1);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}

/* $007B08-$007B24  (7 instructions, 28 bytes) */
void jt_007B08(void) {
    M68K_OR8(g_m68k.d[0], 0x24);
    M68K_OR8(g_m68k.d[0], 0x3c);
    M68K_OR8(g_m68k.d[0], 0x54);
    M68K_OR8(g_m68k.d[0], 0x6c);
    M68K_OR8(g_m68k.d[0], 0x84);
    M68K_OR8(g_m68k.d[0], 0x9c);
    M68K_OR8(g_m68k.d[0], 0xb4);
    /* WARNING: function did not end with RTS */
}

/* $007B24-$007B30  (2 instructions, 12 bytes) */
void jt_007B24(void) {
    /* TODO $007B24: movep.w $0(a0), d3  [07 08 00 00] */
    M68K_BTST(bus_read8(/* UNHANDLED_ADDR: (a4, invalid.w) */ 0), 0x0);
    /* WARNING: function did not end with RTS */
}

/* $007B3C-$007B40  (1 instructions, 4 bytes) */
void jt_007B3C(void) {
    { uint32_t _ea = (g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.d[0]); uint8_t _b = 1u << ((g_m68k.d[5]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* WARNING: function did not end with RTS */
}

/* $007B6C-$007B86  (6 instructions, 26 bytes) */
void jt_007B6C(void) {
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[4])); bus_write8(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.d[0])); /* UNHANDLED_WRITE: (invalid.w) = _mv */ M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[0], 0xee);
    M68K_OR8(g_m68k.d[0], 0xc);
    M68K_OR8(g_m68k.d[0], 0x2a);
    M68K_OR8(g_m68k.d[0], 0xec);
    /* WARNING: function did not end with RTS */
}

/* $007B84-$007B9E  (8 instructions, 26 bytes) */
void jt_007B84(void) {
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[4] + 0x0)); bus_write8(0x14000000, _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x14);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[4]))); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_OR8(g_m68k.d[0], 0x28);
    M68K_OR8(g_m68k.d[0], 0x3c);
    M68K_OR8(g_m68k.d[0], 0x50);
    M68K_OR8(g_m68k.d[0], 0xc0);
    /* WARNING: function did not end with RTS */
}

/* $007B9C-$007BCE  (13 instructions, 50 bytes) */
void jt_007B9C(void) {
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); bus_write8(g_m68k.a[1], _mv); g_m68k.a[1] += 1; M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[0], 0xfc);
    M68K_OR8(g_m68k.d[0], 0x38);
    M68K_OR8(g_m68k.d[0], 0x74);
    M68K_OR8(g_m68k.d[0], 0xb0);
    M68K_OR8(g_m68k.d[0], 0xec);
    M68K_OR8(g_m68k.d[0], 0x8);
    M68K_OR8(g_m68k.d[0], 0x12);
    M68K_OR8(g_m68k.d[0], 0x1c);
    M68K_OR8(g_m68k.d[0], 0x26);
    M68K_OR8(g_m68k.d[0], 0x30);
    M68K_OR8(g_m68k.d[0], 0x3a);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $007BCC-$007BE8  (7 instructions, 28 bytes) */
void jt_007BCC(void) {
    M68K_OR8(g_m68k.d[0], 0xe8);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x18);
    M68K_OR8(g_m68k.d[0], 0x30);
    M68K_OR8(g_m68k.d[0], 0x48);
    M68K_OR8(g_m68k.d[0], 0x60);
    M68K_OR8(g_m68k.d[0], 0x78);
    /* WARNING: function did not end with RTS */
}

/* $007BE8-$007BF4  (2 instructions, 12 bytes) */
void jt_007BE8(void) {
    /* TODO $007BE8: movep.w $0(a0), d3  [07 08 00 00] */
    M68K_BTST(bus_read8(/* UNHANDLED_ADDR: (a4, invalid.w) */ 0), 0x0);
    /* WARNING: function did not end with RTS */
}

/* $007C00-$007C04  (1 instructions, 4 bytes) */
void jt_007C00(void) {
    { uint32_t _ea = (g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.d[0]); uint8_t _b = 1u << ((g_m68k.d[5]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* WARNING: function did not end with RTS */
}

/* $007C30-$007C4A  (6 instructions, 26 bytes) */
void jt_007C30(void) {
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[4])); bus_write8(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.d[0])); /* UNHANDLED_WRITE: (invalid.w) = _mv */ M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[0], 0xee);
    M68K_OR8(g_m68k.d[0], 0xc);
    M68K_OR8(g_m68k.d[0], 0x2a);
    M68K_OR8(g_m68k.d[0], 0xec);
    /* WARNING: function did not end with RTS */
}

/* $007C48-$007C62  (8 instructions, 26 bytes) */
void jt_007C48(void) {
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[4] + 0x0)); bus_write8(0x14000000, _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x14);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[4]))); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_OR8(g_m68k.d[0], 0x28);
    M68K_OR8(g_m68k.d[0], 0x3c);
    M68K_OR8(g_m68k.d[0], 0x50);
    M68K_OR8(g_m68k.d[0], 0xc0);
    /* WARNING: function did not end with RTS */
}

/* $007C60-$007C92  (13 instructions, 50 bytes) */
void jt_007C60(void) {
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); bus_write8(g_m68k.a[1], _mv); g_m68k.a[1] += 1; M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[0], 0xfc);
    M68K_OR8(g_m68k.d[0], 0x38);
    M68K_OR8(g_m68k.d[0], 0x74);
    M68K_OR8(g_m68k.d[0], 0xb0);
    M68K_OR8(g_m68k.d[0], 0xec);
    M68K_OR8(g_m68k.d[0], 0x8);
    M68K_OR8(g_m68k.d[0], 0x12);
    M68K_OR8(g_m68k.d[0], 0x1c);
    M68K_OR8(g_m68k.d[0], 0x26);
    M68K_OR8(g_m68k.d[0], 0x30);
    M68K_OR8(g_m68k.d[0], 0x3a);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $007C90-$007CAC  (8 instructions, 28 bytes) */
void jt_007C90(void) {
    M68K_OR8(g_m68k.d[0], 0xac);
    g_m68k.d[6] = (uint32_t)(int32_t)(int8_t)(0xac); M68K_TST32(g_m68k.d[6]);
    M68K_OR8(g_m68k.d[0], 0xc4);
    M68K_OR8(g_m68k.d[0], 0xdc);
    M68K_OR8(g_m68k.d[0], 0xf4);
    M68K_OR8(g_m68k.d[0], 0xc);
    M68K_OR8(g_m68k.d[0], 0x24);
    M68K_OR8(g_m68k.d[0], 0x3c);
    /* WARNING: function did not end with RTS */
}
