/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $009C00 - $00B800 */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

/* $009C00-$009C64  (16 instructions, 100 bytes) */
void jt_009C00(void) {
    g_m68k.a[3] = 0x00A004;
    func_table_call(0x012036);
    g_m68k.a[0] = bus_read32(0x1011D2);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x012286);
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(0x1011E8, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(0x1011EE, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0xffff); bus_write16(0x1011EC, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x100); bus_write16(0x1011F0, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(0x1011F2, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0xffff); bus_write16(0x1011F4, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x100); bus_write16(0x1011F6, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0xc3)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x015256);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $009C64-$009CA6  (14 instructions, 66 bytes) */
void jt_009C64(void) {
    g_m68k.a[0] = bus_read32(0x1011D2);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1011E4))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1011E6))); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x01225C);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1011E2))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1011E0))); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x012266);
    func_table_call(0x01229E);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1011E8))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[1] = bus_read32(0x9ca6 + (int16_t)(uint16_t)g_m68k.d[0]);
    func_table_call(g_m68k.a[1]);
    return;
}

/* $009CB6-$009D00  (14 instructions, 74 bytes) */
void jt_009CB6(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1011EE))); M68K_TST16((uint16_t)g_m68k.d[0]);
    if (M68K_CC_NE) { func_table_call(0x009D26); return; }
    { uint32_t _ea = 0x1011EC; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1011EC))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[1] = 0x9e90;
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[0])); bus_write16(0x1011F0, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[1] + 0x2 + (int16_t)(uint16_t)g_m68k.d[0])); bus_write16(0x1011EE, _mv); M68K_TST16(_mv); }
    M68K_CMP16(bus_read16(0x1011EC), 0x9);
    if (M68K_CC_LT) { func_table_call(0x009D26); return; }
    g_m68k.a[0] = bus_read32(0x1011D2);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0xff44)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x012280);
    /* WARNING: function did not end with RTS */
}

/* $009D00-$009D94  (29 instructions, 148 bytes) */
void jt_009D00(void) {
    g_m68k.a[0] = bus_read32(0x1011CE);
    func_table_call(0x012252);
    g_m68k.a[0] = bus_read32(0x1011D2);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x011F22);
    { uint32_t _ea = 0x1011E8; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    goto loc_009D8A;
loc_009D26:
    { uint32_t _ea = 0x1011EE; uint16_t _tmp = bus_read16(_ea); M68K_SUB16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(0x100); bus_write16(0x1011E2, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(0x1011F0)); bus_write16(0x1011E0, _mv); M68K_TST16(_mv); }
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x100)); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_SUB16(g_m68k.d[1], bus_read16(0x1011E0));
    M68K_MULS(g_m68k.d[1], 0x80);
    M68K_LSR32(g_m68k.d[1], 0x8);
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); bus_write16(0x1011E6, _mv); M68K_TST16(_mv); }
    g_m68k.a[0] = bus_read32(0x1011CE);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1011E2))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1011E0))); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x012266);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1011E0))); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_MULS(g_m68k.d[1], 0x20);
    M68K_LSR32(g_m68k.d[1], 0x8);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x80)); M68K_TST16((uint16_t)g_m68k.d[2]);
    M68K_SUB16(g_m68k.d[2], g_m68k.d[1]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1011DC))); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x01225C);
loc_009D8A:
    g_m68k.d[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $009D94-$009E14  (25 instructions, 128 bytes) */
void jt_009D94(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[1]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1011EE))); M68K_TST16((uint16_t)g_m68k.d[0]);
    if (M68K_CC_NE) goto loc_009DDC;
    { uint32_t _ea = 0x1011EC; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1011EC))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[1] = 0x009E90;
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[0])); bus_write16(0x1011F0, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[1] + 0x2 + (int16_t)(uint16_t)g_m68k.d[0])); bus_write16(0x1011EE, _mv); M68K_TST16(_mv); }
    M68K_CMP16(bus_read16(0x1011EC), 0x3a);
    if (M68K_CC_LT) goto loc_009DDC;
    { uint32_t _ea = 0x1011E8; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    goto loc_009E0A;
loc_009DDC:
    { uint32_t _ea = 0x1011EE; uint16_t _tmp = bus_read16(_ea); M68K_SUB16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(bus_read16(0x1011F0)); bus_write16(0x1011E2, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(0x1011E0, _mv); M68K_TST16(_mv); }
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x100)); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_SUB16(g_m68k.d[1], bus_read16(0x1011E2));
    M68K_MULS(g_m68k.d[1], 0xa0);
    M68K_LSR32(g_m68k.d[1], 0x8);
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); bus_write16(0x1011E4, _mv); M68K_TST16(_mv); }
loc_009E0A:
    g_m68k.d[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $009E14-$009E7E  (21 instructions, 106 bytes) */
void jt_009E14(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1011F2))); M68K_TST16((uint16_t)g_m68k.d[0]);
    if (M68K_CC_NE) goto loc_009E58;
    { uint32_t _ea = 0x1011F4; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1011F4))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[1] = 0x009F78;
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[0])); bus_write16(0x1011F6, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[1] + 0x2 + (int16_t)(uint16_t)g_m68k.d[0])); bus_write16(0x1011F2, _mv); M68K_TST16(_mv); }
    M68K_CMP16(bus_read16(0x1011F4), 0x22);
    if (M68K_CC_LT) goto loc_009E58;
    { uint32_t _ea = 0x1011E8; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    goto loc_009E78;
loc_009E58:
    { uint32_t _ea = 0x1011F2; uint16_t _tmp = bus_read16(_ea); M68K_SUB16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x44)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1011F6))); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.a[3] = 0x00A0F4;
    func_table_call(0x012036);
loc_009E78:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $009E7E-$009E90  (4 instructions, 18 bytes) */
void jt_009E7E(void) {
    g_m68k.a[0] = bus_read32(0x1011D2);
    func_table_call(0x012252);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $00A228-$00A22C  (1 instructions, 4 bytes) */
void jt_00A228(void) {
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xf); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $00A500-$00A528  (20 instructions, 40 bytes) */
void jt_00A500(void) {
    /* TODO $00A500: roxr.w #$2, d0  [E4 50] */
    /* TODO $00A502: dc.w $4100  [41 00] */
    /* TODO $00A504: roxr.w #$2, d2  [E4 52] */
    /* TODO $00A506: dc.w $4100  [41 00] */
    /* TODO $00A508: roxr.w #$2, d7  [E4 57] */
    /* TODO $00A50A: dc.w $4100  [41 00] */
    M68K_ROR16(g_m68k.d[6], 0x2);
    /* TODO $00A50E: dc.w $4100  [41 00] */
    M68K_ASR16(g_m68k.d[6], g_m68k.d[2]);
    /* TODO $00A512: dc.w $4100  [41 00] */
    M68K_LSR16(g_m68k.d[7], g_m68k.d[2]);
    /* TODO $00A516: dc.w $4100  [41 00] */
    M68K_ROR16(g_m68k.d[1], g_m68k.d[2]);
    /* TODO $00A51A: dc.w $4100  [41 00] */
    M68K_ASR32(g_m68k.d[4], 0x2);
    /* TODO $00A51E: dc.w $4100  [41 00] */
    M68K_LSR32(g_m68k.d[7], 0x2);
    /* TODO $00A522: dc.w $4100  [41 00] */
    M68K_ROR32(g_m68k.d[2], 0x2);
    /* TODO $00A526: dc.w $4100  [41 00] */
    /* WARNING: function did not end with RTS */
}

/* $00A600-$00A604  (2 instructions, 4 bytes) */
void jt_00A600(void) {
    /* TODO $00A600: roxr.l d2, d7  [E4 B7] */
    /* TODO $00A602: dc.w $4100  [41 00] */
    /* WARNING: function did not end with RTS */
}

/* $00A6DC-$00A6E0  (1 instructions, 4 bytes) */
void jt_00A6DC(void) {
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xf); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $00A800-$00A804  (2 instructions, 4 bytes) */
void jt_00A800(void) {
    M68K_LSL8(g_m68k.d[5], 0x2);
    /* TODO $00A802: dc.w $4100  [41 00] */
    /* WARNING: function did not end with RTS */
}

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
