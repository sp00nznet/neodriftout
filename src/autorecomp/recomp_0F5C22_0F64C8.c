/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $0F5C22 - $0F64C8 */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

/* $0F5C22-$0F5C24  (1 instructions, 2 bytes) */
void jt_0F5C22(void) {
    M68K_ASR16(g_m68k.d[0], 0x8);
    /* WARNING: function did not end with RTS */
}

/* $0F5C2A-$0F5C2C  (1 instructions, 2 bytes) */
void jt_0F5C2A(void) {
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F5C46-$0F5C92  (22 instructions, 76 bytes) */
void jt_0F5C46(void) {
    M68K_OR8(g_m68k.d[5], bus_read8(0x008540));
    /* TODO $0F5C4A: sbcd.b d0, d0  [81 00] */
    M68K_OR8(g_m68k.d[5], bus_read8(0x008540));
    /* TODO $0F5C50: sbcd.b d0, d0  [81 00] */
    M68K_OR8(g_m68k.d[5], bus_read8(0x008540));
    /* TODO $0F5C56: sbcd.b d0, d0  [81 00] */
    M68K_OR8(g_m68k.d[5], bus_read8(0x008540));
    /* TODO $0F5C5C: sbcd.b d0, d0  [81 00] */
    M68K_OR8(g_m68k.d[5], bus_read8(0x008540));
    /* TODO $0F5C62: sbcd.b d0, d0  [81 00] */
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F5C92-$0F5C94  (1 instructions, 2 bytes) */
void jt_0F5C92(void) {
    M68K_ADD8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F5D06-$0F5D28  (17 instructions, 34 bytes) */
void jt_0F5D06(void) {
    /* TODO $0F5D06: dc.w $8340  [83 40] */
    /* TODO $0F5D08: sbcd.b d2, d6  [8D 02] */
    /* TODO $0F5D0A: dc.w $8340  [83 40] */
    /* TODO $0F5D0C: sbcd.b d2, d6  [8D 02] */
    /* TODO $0F5D0E: dc.w $8340  [83 40] */
    /* TODO $0F5D10: sbcd.b d2, d6  [8D 02] */
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[7], g_m68k.d[2]);
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[7], g_m68k.d[2]);
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[7], g_m68k.d[2]);
    /* TODO $0F5D1E: dc.w $8140  [81 40] */
    /* TODO $0F5D20: sbcd.b d2, d7  [8F 02] */
    /* TODO $0F5D22: dc.w $8140  [81 40] */
    /* TODO $0F5D24: sbcd.b d2, d7  [8F 02] */
    /* TODO $0F5D26: dc.w $8140  [81 40] */
    /* WARNING: function did not end with RTS */
}

/* $0F5D2C-$0F5D34  (4 instructions, 8 bytes) */
void jt_0F5D2C(void) {
    /* TODO $0F5D2C: dc.w $ff16  [FF 16] */
    /* TODO $0F5D2E: dc.w $ff16  [FF 16] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[6]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F5D34-$0F5D3C  (4 instructions, 8 bytes) */
void jt_0F5D34(void) {
    /* TODO $0F5D34: dc.w $ff16  [FF 16] */
    /* TODO $0F5D36: dc.w $ff16  [FF 16] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[6]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F5D3C-$0F5D44  (4 instructions, 8 bytes) */
void jt_0F5D3C(void) {
    /* TODO $0F5D3C: dc.w $ff16  [FF 16] */
    /* TODO $0F5D3E: dc.w $ff16  [FF 16] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[6]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F5D44-$0F5D4C  (4 instructions, 8 bytes) */
void jt_0F5D44(void) {
    /* TODO $0F5D44: dc.w $ff16  [FF 16] */
    /* TODO $0F5D46: dc.w $ff16  [FF 16] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[6]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F5D5C-$0F5D74  (12 instructions, 24 bytes) */
void jt_0F5D5C(void) {
    /* TODO $0F5D5C: dc.w $f018  [F0 18] */
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    /* TODO $0F5D60: dc.w $8340  [83 40] */
    M68K_OR8(g_m68k.d[5], bus_read8(g_m68k.a[6]));
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* TODO $0F5D68: dc.w $8940  [89 40] */
    M68K_OR8(g_m68k.d[2], bus_read8(g_m68k.a[6]));
    M68K_OR16(g_m68k.d[6], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0F5D70: dc.w $8f40  [8F 40] */
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F5D74-$0F5D84  (8 instructions, 16 bytes) */
void jt_0F5D74(void) {
    /* TODO $0F5D74: dc.w $f018  [F0 18] */
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $0F5D78: dc.w $8740  [87 40] */
    M68K_OR8(g_m68k.d[3], bus_read8(g_m68k.a[6]));
    M68K_OR16(g_m68k.d[5], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    M68K_LSL16(g_m68k.d[0], 0x6);
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F5D84-$0F5D8C  (4 instructions, 8 bytes) */
void jt_0F5D84(void) {
    /* TODO $0F5D84: dc.w $ff16  [FF 16] */
    /* TODO $0F5D86: dc.w $ff16  [FF 16] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[6]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F5D8C-$0F5D94  (4 instructions, 8 bytes) */
void jt_0F5D8C(void) {
    /* TODO $0F5D8C: dc.w $ff16  [FF 16] */
    /* TODO $0F5D8E: dc.w $ff16  [FF 16] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[6]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F5D94-$0F5D9A  (3 instructions, 6 bytes) */
void jt_0F5D94(void) {
    M68K_ADD8(g_m68k.d[0], bus_read8(g_m68k.a[6]));
    M68K_SUB8(g_m68k.d[7], _postinc8(0));
    M68K_ASR16(g_m68k.d[0], 0x8);
    /* WARNING: function did not end with RTS */
}

/* $0F5DAA-$0F5DBC  (9 instructions, 18 bytes) */
void jt_0F5DAA(void) {
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    /* TODO $0F5DAC: dc.w $8340  [83 40] */
    M68K_OR8(g_m68k.d[5], bus_read8(g_m68k.a[6]));
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* TODO $0F5DB4: dc.w $8940  [89 40] */
    M68K_OR8(g_m68k.d[2], bus_read8(g_m68k.a[6]));
    M68K_OR16(g_m68k.d[6], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0F5DE2-$0F5E12  (18 instructions, 48 bytes) */
void jt_0F5DE2(void) {
    M68K_SUB8(g_m68k.d[0], _postinc8(2));
    /* TODO $0F5DE4: dc.w $8340  [83 40] */
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[5], _postinc8(2));
    /* TODO $0F5DEC: dc.w $8940  [89 40] */
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[6], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[2], _postinc8(2));
    /* TODO $0F5DF4: dc.w $8f40  [8F 40] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_SUB16(g_m68k.d[0], g_m68k.d[0]);
    { uint32_t _ea = /* UNHANDLED_ADDR: (a2, invalid.w) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[3], bus_read8(g_m68k.a[2] + 0x40 + (int32_t)g_m68k.a[0]));
    { uint32_t _ea = /* UNHANDLED_ADDR: (a2, invalid.w) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[6], bus_read8(g_m68k.a[2] + 0x40 + (int16_t)(uint16_t)g_m68k.a[0]));
    { uint32_t _ea = /* UNHANDLED_ADDR: (a2, invalid.w) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    M68K_AND8(g_m68k.d[0], bus_read8(g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.a[0]));
    /* WARNING: function did not end with RTS */
}

/* $0F5E12-$0F5E2E  (10 instructions, 28 bytes) */
void jt_0F5E12(void) {
    M68K_ADD8(g_m68k.d[0], _postinc8(2));
    M68K_SUB8(g_m68k.d[0], _postinc8(0));
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[7], _postinc8(0));
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[2] + 0x40 + (int32_t)g_m68k.a[0]));
    { uint32_t _ea = /* UNHANDLED_ADDR: (a2, invalid.w) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = /* UNHANDLED_ADDR: (a2, invalid.w) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = /* UNHANDLED_ADDR: (a2, invalid.w) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F5E3E-$0F5E50  (9 instructions, 18 bytes) */
void jt_0F5E3E(void) {
    /* TODO $0F5E3E: dc.w $f018  [F0 18] */
    /* TODO $0F5E40: dc.w $8740  [87 40] */
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[5], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[3], _postinc8(2));
    /* TODO $0F5E48: dc.w $8d40  [8D 40] */
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    M68K_ASR16(g_m68k.d[0], 0x8);
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F5E50-$0F5E6A  (13 instructions, 26 bytes) */
void jt_0F5E50(void) {
    /* TODO $0F5E50: dc.w $f018  [F0 18] */
    M68K_AND8(g_m68k.d[0], _postinc8(2));
    /* TODO $0F5E54: dc.w $8340  [83 40] */
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[5], _postinc8(2));
    /* TODO $0F5E5C: dc.w $8940  [89 40] */
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[6], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[2], _postinc8(2));
    /* TODO $0F5E64: dc.w $8f40  [8F 40] */
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F5E8A-$0F5E92  (4 instructions, 8 bytes) */
void jt_0F5E8A(void) {
    /* TODO $0F5E8A: dc.w $ff10  [FF 10] */
    /* TODO $0F5E8C: dc.w $ff10  [FF 10] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[0]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F5E9A-$0F5EA2  (4 instructions, 8 bytes) */
void jt_0F5E9A(void) {
    /* TODO $0F5E9A: dc.w $ff10  [FF 10] */
    /* TODO $0F5E9C: dc.w $ff10  [FF 10] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[0]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F5EA2-$0F5EAA  (3 instructions, 8 bytes) */
void jt_0F5EA2(void) {
    /* TODO $0F5EA2: dc.w $ff7c  [FF 7C] */
    /* TODO $0F5EA4: dc.w $ff7c  [FF 7C] */
    M68K_OR16(g_m68k.d[1], 0x8000);
    /* WARNING: function did not end with RTS */
}

/* $0F5EBA-$0F5EC2  (3 instructions, 8 bytes) */
void jt_0F5EBA(void) {
    /* TODO $0F5EBA: dc.w $ff7c  [FF 7C] */
    /* TODO $0F5EBC: dc.w $ff7c  [FF 7C] */
    M68K_OR16(g_m68k.d[1], 0x8000);
    /* WARNING: function did not end with RTS */
}

/* $0F5ED4-$0F5ED8  (1 instructions, 4 bytes) */
void jt_0F5ED4(void) {
    /* TODO $0F5ED4: sbcd -(a4), -(a4), #$8740  [89 0C 87 40] */
    /* WARNING: function did not end with RTS */
}

/* $0F5EFA-$0F5EFC  (1 instructions, 2 bytes) */
void jt_0F5EFA(void) {
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F5FC0-$0F5FCE  (7 instructions, 14 bytes) */
void jt_0F5FC0(void) {
    /* TODO $0F5FC0: dc.w $8740  [87 40] */
    /* TODO $0F5FC2: sbcd.b d4, d4  [89 04] */
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[5], g_m68k.d[4]);
    M68K_OR16(g_m68k.d[2], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[6], g_m68k.d[5]);
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F6114-$0F611C  (4 instructions, 8 bytes) */
void jt_0F6114(void) {
    M68K_AND8(g_m68k.d[0], bus_read8(g_m68k.a[4]));
    /* TODO $0F6116: dc.w $ff13  [FF 13] */
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F611C-$0F615E  (33 instructions, 66 bytes) */
void jt_0F611C(void) {
    M68K_OR8(g_m68k.d[7], bus_read8(g_m68k.a[4]));
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    /* TODO $0F6122: dc.w $8340  [83 40] */
    M68K_OR8(g_m68k.d[6], bus_read8(g_m68k.a[4]));
    M68K_OR16(g_m68k.d[2], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    /* TODO $0F612A: dc.w $8540  [85 40] */
    M68K_OR8(g_m68k.d[5], bus_read8(g_m68k.a[3]));
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[5], bus_read8(g_m68k.a[3]));
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $0F6136: dc.w $8740  [87 40] */
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $0F613A: dc.w $8740  [87 40] */
    M68K_OR8(g_m68k.d[4], bus_read8(g_m68k.a[3]));
    M68K_OR16(g_m68k.d[4], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[4], bus_read8(g_m68k.a[3]));
    M68K_OR16(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* TODO $0F6146: dc.w $8940  [89 40] */
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* TODO $0F614A: dc.w $8940  [89 40] */
    M68K_OR8(g_m68k.d[3], bus_read8(g_m68k.a[3]));
    M68K_OR16(g_m68k.d[5], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[3], bus_read8(g_m68k.a[3]));
    M68K_OR16(g_m68k.d[5], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    /* TODO $0F6156: dc.w $8b40  [8B 40] */
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    /* TODO $0F615A: dc.w $8b40  [8B 40] */
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F615E-$0F6162  (2 instructions, 4 bytes) */
void jt_0F615E(void) {
    /* TODO $0F615E: roxr.b #$8, d2  [E0 12] */
    /* TODO $0F6160: dc.w $ff10  [FF 10] */
    /* WARNING: function did not end with RTS */
}

/* $0F6166-$0F616E  (4 instructions, 8 bytes) */
void jt_0F6166(void) {
    M68K_OR8(g_m68k.d[2], bus_read8(g_m68k.a[2]));
    M68K_OR16(g_m68k.d[6], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[2], bus_read8(g_m68k.a[2]));
    /* TODO $0F616C: dc.w $8b40  [8B 40] */
    /* WARNING: function did not end with RTS */
}

/* $0F61F8-$0F61FA  (1 instructions, 2 bytes) */
void jt_0F61F8(void) {
    M68K_SUBX16(g_m68k.d[7], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F6200-$0F6202  (1 instructions, 2 bytes) */
void jt_0F6200(void) {
    /* TODO $0F6200: dc.w $8940  [89 40] */
    /* WARNING: function did not end with RTS */
}

/* $0F6256-$0F6258  (1 instructions, 2 bytes) */
void jt_0F6256(void) {
    /* TODO $0F6256: dc.w $8140  [81 40] */
    /* WARNING: function did not end with RTS */
}

/* $0F62B6-$0F62C4  (7 instructions, 14 bytes) */
void jt_0F62B6(void) {
    M68K_OR16(g_m68k.d[6], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[2], g_m68k.d[6]);
    /* TODO $0F62BA: dc.w $8940  [89 40] */
    /* TODO $0F62BC: sbcd.b d6, d3  [87 06] */
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[5], g_m68k.d[6]);
    /* TODO $0F62C2: dc.w $8340  [83 40] */
    /* WARNING: function did not end with RTS */
}

/* $0F62CA-$0F62EA  (9 instructions, 32 bytes) */
void jt_0F62CA(void) {
    /* TODO $0F62CA: dc.w $ff32  [FF 32] */
    { uint32_t _ea = /* UNHANDLED_ADDR: (a2, invalid.w) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[2] + 0x40 + (int16_t)(uint16_t)g_m68k.a[0]); uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[6], /* UNHANDLED_READ: (a2, invalid.w) */ 0);
    { uint32_t _ea = (g_m68k.a[2] + 0x40 + (int32_t)g_m68k.a[0]); uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[3], /* UNHANDLED_READ: (a2, invalid.w) */ 0);
    { uint32_t _ea = (g_m68k.a[2] + 0x40 + (int16_t)(uint16_t)g_m68k.a[1]); uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    /* TODO $0F62E4: sbcd -(a2), -(a0), #$8f40  [81 0A 8F 40] */
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F62EA-$0F62F8  (5 instructions, 14 bytes) */
void jt_0F62EA(void) {
    { uint32_t _ea = /* UNHANDLED_ADDR: (a2, invalid.w) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    /* TODO $0F62EE: dc.w $ff32  [FF 32] */
    /* TODO $0F62F0: roxl.b d0, d2  [E1 32] */
    /* TODO $0F62F2: dc.w $8340  [83 40] */
    { uint32_t _ea = (g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.a[0]); uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0F630E-$0F6324  (6 instructions, 22 bytes) */
void jt_0F630E(void) {
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[5], /* UNHANDLED_READ: (a2, invalid.w) */ 0);
    { uint32_t _ea = (g_m68k.a[2] + 0x40 + (int32_t)g_m68k.a[0]); uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[2], /* UNHANDLED_READ: (a2, invalid.w) */ 0);
    { uint32_t _ea = (g_m68k.a[2] + 0x40 + (int16_t)(uint16_t)g_m68k.a[1]); uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0F6320: sbcd -(a2), -(a1), #$8d40  [83 0A 8D 40] */
    /* WARNING: function did not end with RTS */
}

/* $0F6338-$0F6350  (7 instructions, 24 bytes) */
void jt_0F6338(void) {
    M68K_SUB16(g_m68k.d[0], g_m68k.d[0]);
    { uint32_t _ea = /* UNHANDLED_ADDR: (a2, invalid.w) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[2], bus_read8(g_m68k.a[2] + 0x40 + (int32_t)g_m68k.a[0]));
    { uint32_t _ea = /* UNHANDLED_ADDR: (a2, invalid.w) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[5], bus_read8(g_m68k.a[2] + 0x40 + (int16_t)(uint16_t)g_m68k.a[0]));
    { uint32_t _ea = /* UNHANDLED_ADDR: (a2, invalid.w) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    /* TODO $0F634E: dc.w $ff32  [FF 32] */
    /* WARNING: function did not end with RTS */
}

/* $0F6354-$0F6366  (4 instructions, 18 bytes) */
void jt_0F6354(void) {
    /* TODO $0F6354: dc.w $f040  [F0 40] */
    { uint32_t _ea = /* UNHANDLED_ADDR: (a2, invalid.w) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[3], bus_read8(g_m68k.a[2] + 0x40 + (int32_t)g_m68k.a[0]));
    { uint32_t _ea = /* UNHANDLED_ADDR: ([$88408632, a2]) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0F6388-$0F6398  (2 instructions, 16 bytes) */
void jt_0F6388(void) {
    { uint32_t _ea = /* UNHANDLED_ADDR: ([$8e32827f, a2]) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = /* UNHANDLED_ADDR: ([$81408b32, a2]) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0F63E6-$0F6428  (33 instructions, 66 bytes) */
void jt_0F63E6(void) {
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[7], _postinc8(4));
    /* TODO $0F63EA: dc.w $8340  [83 40] */
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[2], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[6], _postinc8(4));
    /* TODO $0F63F2: dc.w $8540  [85 40] */
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[5], _postinc8(5));
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[5], _postinc8(5));
    /* TODO $0F63FE: dc.w $8740  [87 40] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $0F6402: dc.w $8740  [87 40] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[4], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[4], _postinc8(5));
    M68K_OR16(g_m68k.d[4], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[4], _postinc8(5));
    /* TODO $0F640E: dc.w $8940  [89 40] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* TODO $0F6412: dc.w $8940  [89 40] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[5], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[3], _postinc8(5));
    M68K_OR16(g_m68k.d[5], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[3], _postinc8(5));
    /* TODO $0F641E: dc.w $8b40  [8B 40] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    /* TODO $0F6422: dc.w $8b40  [8B 40] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F6428-$0F642A  (1 instructions, 2 bytes) */
void jt_0F6428(void) {
    M68K_AND8(g_m68k.d[0], _postinc8(4));
    /* WARNING: function did not end with RTS */
}

/* $0F6430-$0F6434  (2 instructions, 4 bytes) */
void jt_0F6430(void) {
    M68K_OR16(g_m68k.d[6], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[2], _postinc8(6));
    /* WARNING: function did not end with RTS */
}

/* $0F6490-$0F6492  (1 instructions, 2 bytes) */
void jt_0F6490(void) {
    M68K_ROR8(g_m68k.d[6], 0x8);
    /* WARNING: function did not end with RTS */
}

/* $0F6498-$0F64A0  (4 instructions, 8 bytes) */
void jt_0F6498(void) {
    /* TODO $0F6498: dc.w $ff14  [FF 14] */
    /* TODO $0F649A: dc.w $ff14  [FF 14] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[4]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F64A0-$0F64A8  (4 instructions, 8 bytes) */
void jt_0F64A0(void) {
    /* TODO $0F64A0: dc.w $ff14  [FF 14] */
    /* TODO $0F64A2: dc.w $ff14  [FF 14] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[4]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F64A8-$0F64B0  (4 instructions, 8 bytes) */
void jt_0F64A8(void) {
    /* TODO $0F64A8: dc.w $ff14  [FF 14] */
    /* TODO $0F64AA: dc.w $ff14  [FF 14] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[4]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F64B0-$0F64B8  (4 instructions, 8 bytes) */
void jt_0F64B0(void) {
    /* TODO $0F64B0: dc.w $ff14  [FF 14] */
    /* TODO $0F64B2: dc.w $ff14  [FF 14] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[4]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F64B8-$0F64C0  (4 instructions, 8 bytes) */
void jt_0F64B8(void) {
    /* TODO $0F64B8: dc.w $ff17  [FF 17] */
    /* TODO $0F64BA: dc.w $ff17  [FF 17] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[7]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F64C0-$0F64C8  (4 instructions, 8 bytes) */
void jt_0F64C0(void) {
    /* TODO $0F64C0: dc.w $ff17  [FF 17] */
    /* TODO $0F64C2: dc.w $ff17  [FF 17] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[7]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}
