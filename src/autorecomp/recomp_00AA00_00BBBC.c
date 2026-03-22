/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $00AA00 - $00BBBC */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

/* $00AA00-$00AA10  (7 instructions, 16 bytes) */
void jt_00AA00(void) {
    /* TODO $00AA00: roxr.w (a2)  [E4 D2] */
    /* TODO $00AA02: dc.w $4100  [41 00] */
    /* TODO $00AA04: roxr.w (a4)+  [E4 DC] */
    /* TODO $00AA06: dc.w $4100  [41 00] */
    /* TODO $00AA08: roxr.w -(a7)  [E4 E7] */
    /* TODO $00AA0A: dc.w $4100  [41 00] */
    /* TODO $00AA0C: roxr.w (a2, d4.w)  [E4 F2 41 00] */
    /* WARNING: function did not end with RTS */
}

/* $00AB90-$00AB94  (1 instructions, 4 bytes) */
void jt_00AB90(void) {
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xf); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $00B044-$00B064  (6 instructions, 32 bytes) */
void sub_00B044(void) {
    func_table_call(0x00D70C);
    func_table_call(0x00D722);
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(0x101224, _mv); M68K_TST16(_mv); }
    func_table_call(0x015C16);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00B064-$00B076  (6 instructions, 18 bytes) */
void sub_00B064(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x101224))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[0] = bus_read32(0xb076 + (int16_t)(uint16_t)g_m68k.d[0]);
    func_table_call(g_m68k.a[0]);
    return;
}

/* $00B0AA-$00B0C4  (6 instructions, 26 bytes) */
void jt_00B0AA(void) {
    func_table_call(0x015C20);
    M68K_CMP16(g_m68k.d[0], 0x0);
    if (M68K_CC_NE) goto loc_00B0BE;
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(0x101224, _mv); M68K_TST16(_mv); }
loc_00B0BE:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00B0C4-$00B0DE  (6 instructions, 26 bytes) */
void jt_00B0C4(void) {
    func_table_call(0x015C9C);
    M68K_CMP16(g_m68k.d[0], 0x0);
    if (M68K_CC_NE) goto loc_00B0D8;
    { uint16_t _mv = (uint16_t)(0x2); bus_write16(0x101224, _mv); M68K_TST16(_mv); }
loc_00B0D8:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00B0DE-$00B0F8  (6 instructions, 26 bytes) */
void jt_00B0DE(void) {
    func_table_call(0x00B270);
    M68K_CMP16(g_m68k.d[0], 0x0);
    if (M68K_CC_NE) goto loc_00B0F2;
    { uint16_t _mv = (uint16_t)(0x3); bus_write16(0x101224, _mv); M68K_TST16(_mv); }
loc_00B0F2:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00B0F8-$00B11C  (7 instructions, 36 bytes) */
void jt_00B0F8(void) {
    func_table_call(0x00B2BE);
    M68K_CMP16(g_m68k.d[0], 0x0);
    if (M68K_CC_NE) goto loc_00B116;
    { uint16_t _mv = (uint16_t)(bus_read16(0x101204)); bus_write16(0x10120A, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x4); bus_write16(0x101224, _mv); M68K_TST16(_mv); }
loc_00B116:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00B11C-$00B166  (16 instructions, 74 bytes) */
void jt_00B11C(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x4)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x015256);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x7)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x015256);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x2d)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x015256);
    M68K_CMP16(bus_read16(0x10120A), 0x0);
    if (M68K_CC_NE) goto loc_00B14C;
    func_table_call(0x004B8A);
    goto loc_00B152;
loc_00B14C:
    func_table_call(0x01E39C);
loc_00B152:
    M68K_CMP16(g_m68k.d[0], 0x0);
    if (M68K_CC_NE) goto loc_00B160;
    { uint16_t _mv = (uint16_t)(0x5); bus_write16(0x101224, _mv); M68K_TST16(_mv); }
loc_00B160:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00B166-$00B1BA  (18 instructions, 84 bytes) */
void jt_00B166(void) {
    M68K_CMP16(bus_read16(0x10120A), 0x0);
    if (M68K_CC_NE) goto loc_00B178;
    func_table_call(0x004CB4);
    goto loc_00B17E;
loc_00B178:
    func_table_call(0x01E404);
loc_00B17E:
    M68K_CMP16(g_m68k.d[0], 0x0);
    if (M68K_CC_NE) goto loc_00B1B4;
    M68K_CMP16(bus_read16(0x10120A), 0x0);
    if (M68K_CC_NE) goto loc_00B1AC;
    M68K_CMP16(bus_read16(0x101212), 0x3);
    if (M68K_CC_CC) goto loc_00B1A2;
    { uint16_t _mv = (uint16_t)(0x8); bus_write16(0x101224, _mv); M68K_TST16(_mv); }
    goto loc_00B1AA;
loc_00B1A2:
    { uint16_t _mv = (uint16_t)(0x6); bus_write16(0x101224, _mv); M68K_TST16(_mv); }
loc_00B1AA:
    goto loc_00B1B4;
loc_00B1AC:
    { uint16_t _mv = (uint16_t)(0xc); bus_write16(0x101224, _mv); M68K_TST16(_mv); }
loc_00B1B4:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00B1BA-$00B1D4  (6 instructions, 26 bytes) */
void jt_00B1BA(void) {
    func_table_call(0x0084DE);
    M68K_CMP16(g_m68k.d[0], 0x0);
    if (M68K_CC_NE) goto loc_00B1CE;
    { uint16_t _mv = (uint16_t)(0x7); bus_write16(0x101224, _mv); M68K_TST16(_mv); }
loc_00B1CE:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00B1D4-$00B1EE  (6 instructions, 26 bytes) */
void jt_00B1D4(void) {
    func_table_call(0x008628);
    M68K_CMP16(g_m68k.d[0], 0x0);
    if (M68K_CC_NE) goto loc_00B1E8;
    { uint16_t _mv = (uint16_t)(0xc); bus_write16(0x101224, _mv); M68K_TST16(_mv); }
loc_00B1E8:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00B1EE-$00B208  (6 instructions, 26 bytes) */
void jt_00B1EE(void) {
    func_table_call(0x0084DE);
    M68K_CMP16(g_m68k.d[0], 0x0);
    if (M68K_CC_NE) goto loc_00B202;
    { uint16_t _mv = (uint16_t)(0x9); bus_write16(0x101224, _mv); M68K_TST16(_mv); }
loc_00B202:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00B208-$00B222  (6 instructions, 26 bytes) */
void jt_00B208(void) {
    func_table_call(0x008628);
    M68K_CMP16(g_m68k.d[0], 0x0);
    if (M68K_CC_NE) goto loc_00B21C;
    { uint16_t _mv = (uint16_t)(0xa); bus_write16(0x101224, _mv); M68K_TST16(_mv); }
loc_00B21C:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00B222-$00B23C  (6 instructions, 26 bytes) */
void jt_00B222(void) {
    func_table_call(0x0055A2);
    M68K_CMP16(g_m68k.d[0], 0x0);
    if (M68K_CC_NE) goto loc_00B236;
    { uint16_t _mv = (uint16_t)(0xb); bus_write16(0x101224, _mv); M68K_TST16(_mv); }
loc_00B236:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00B23C-$00B256  (6 instructions, 26 bytes) */
void jt_00B23C(void) {
    func_table_call(0x005606);
    M68K_CMP16(g_m68k.d[0], 0x0);
    if (M68K_CC_NE) goto loc_00B250;
    { uint16_t _mv = (uint16_t)(0xc); bus_write16(0x101224, _mv); M68K_TST16(_mv); }
loc_00B250:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00B256-$00B270  (6 instructions, 26 bytes) */
void jt_00B256(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x4)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x015256);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x7)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x015256);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00B270-$00B2BE  (14 instructions, 78 bytes) */
void sub_00B270(void) {
    func_table_call(0x0169A8);
    M68K_CMP16(bus_read16(0x10042E), 0x1);
    if (M68K_CC_NE) goto loc_00B2A8;
    g_m68k.a[0] = 0x10349C;
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[0] + 0x18)); bus_write16(0x101202, _mv); M68K_TST16(_mv); }
    g_m68k.a[0] = 0x1034B0;
    g_m68k.a[1] = 0x1011FE;
    func_table_call(0x011A02);
    func_table_call(0x016950);
    goto loc_00B2B0;
loc_00B2A8:
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(0x101202, _mv); M68K_TST16(_mv); }
loc_00B2B0:
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(0x101226, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00B2BE-$00B2D0  (6 instructions, 18 bytes) */
void sub_00B2BE(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x101226))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[0] = bus_read32(0xb2d0 + (int16_t)(uint16_t)g_m68k.d[0]);
    func_table_call(g_m68k.a[0]);
    return;
}

/* $00B2F8-$00B330  (12 instructions, 56 bytes) */
void jt_00B2F8(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x4)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x015256);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x7)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x015256);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x23)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x015256);
    func_table_call(0x01BE56);
    M68K_CMP16(g_m68k.d[0], 0x0);
    if (M68K_CC_NE) goto loc_00B32A;
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(0x101226, _mv); M68K_TST16(_mv); }
loc_00B32A:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00B330-$00B34A  (6 instructions, 26 bytes) */
void jt_00B330(void) {
    func_table_call(0x01C374);
    M68K_CMP16(g_m68k.d[0], 0x0);
    if (M68K_CC_NE) goto loc_00B344;
    { uint16_t _mv = (uint16_t)(0x2); bus_write16(0x101226, _mv); M68K_TST16(_mv); }
loc_00B344:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00B34A-$00B364  (6 instructions, 26 bytes) */
void jt_00B34A(void) {
    func_table_call(0x00B628);
    M68K_CMP16(g_m68k.d[0], 0x0);
    if (M68K_CC_NE) goto loc_00B35E;
    { uint16_t _mv = (uint16_t)(0x3); bus_write16(0x101226, _mv); M68K_TST16(_mv); }
loc_00B35E:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00B364-$00B41A  (36 instructions, 182 bytes) */
void jt_00B364(void) {
    func_table_call(0x00B648);
    M68K_CMP16(g_m68k.d[0], 0x0);
    if (M68K_CC_NE) goto loc_00B418;
    func_table_call(0x00DFAC);
    func_table_call(0x00DFC0);
    { uint16_t _mv = (uint16_t)(bus_read16(0x101206)); bus_write16(0x10120E, _mv); M68K_TST16(_mv); }
    M68K_CMP16(bus_read16(0x101206), 0x0);
    if (M68K_CC_NE) goto loc_00B3A0;
    { uint16_t _mv = (uint16_t)(0x4); bus_write16(0x101226, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    goto loc_00B418;
loc_00B3A0:
    M68K_CMP16(bus_read16(0x101202), 0x0);
    if (M68K_CC_NE) goto loc_00B3C6;
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(0x101206, _mv); M68K_TST16(_mv); }
    { uint32_t _ea = 0x101202; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(0x101226, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    goto loc_00B418;
loc_00B3C6:
    M68K_TST8(bus_read8(0x10FD82));
    if (M68K_CC_EQ) goto loc_00B3DC;
    { uint16_t _mv = (uint16_t)(0x6); bus_write16(0x101226, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    goto loc_00B418;
loc_00B3DC:
    M68K_TST16(bus_read16(0x100416));
    if (M68K_CC_NE) goto loc_00B40C;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x0009F4);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x3)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1011FC))); M68K_TST16((uint16_t)g_m68k.d[1]);
    func_table_call(0x0009D6);
    { uint16_t _mv = (uint16_t)(0xffff); bus_write16(0x101204, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    goto loc_00B418;
loc_00B40C:
    { uint16_t _mv = (uint16_t)(0x6); bus_write16(0x101226, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
loc_00B418:
    return;
}

/* $00B41A-$00B458  (13 instructions, 62 bytes) */
void jt_00B41A(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x4)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x015256);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x7)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x015256);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x2d)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x015256);
    func_table_call(0x000A26);
    func_table_call(0x004150);
    M68K_CMP16(g_m68k.d[0], 0x0);
    if (M68K_CC_NE) goto loc_00B452;
    { uint16_t _mv = (uint16_t)(0x5); bus_write16(0x101226, _mv); M68K_TST16(_mv); }
loc_00B452:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

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

/* $00BB92-$00BBBC  (8 instructions, 42 bytes) */
void sub_00BB92(void) {
    g_m68k.a[6] = 0x10123A;
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(g_m68k.a[6] + 0x0, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0xfff6); bus_write16(g_m68k.a[6] + 0x6, _mv); M68K_TST16(_mv); }
    bus_write16(g_m68k.a[6] + 0x8, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    func_table_call(0x012202);
    { uint32_t _mv = (uint32_t)(g_m68k.a[0]); bus_write32(g_m68k.a[6] + 0xa, _mv); M68K_TST32(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x7fff)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x012256);
    /* WARNING: function did not end with RTS */
}
