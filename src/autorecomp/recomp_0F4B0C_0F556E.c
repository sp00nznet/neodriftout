/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $0F4B0C - $0F556E */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

/* $0F4B0C-$0F4B16  (5 instructions, 10 bytes) */
void jt_0F4B0C(void) {
    M68K_CMP8(g_m68k.d[0], bus_read8(g_m68k.a[5]));
    M68K_ADD8(g_m68k.d[0], bus_read8(g_m68k.a[4]));
    /* TODO $0F4B10: dc.w $ff12  [FF 12] */
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F4B82-$0F4B8A  (4 instructions, 8 bytes) */
void jt_0F4B82(void) {
    M68K_OR8(g_m68k.d[2], bus_read8(g_m68k.a[6]));
    M68K_OR16(g_m68k.d[6], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_ADD16(g_m68k.d[6], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F4B9E-$0F4BA2  (2 instructions, 4 bytes) */
void jt_0F4B9E(void) {
    M68K_ASR16(g_m68k.d[0], 0x8);
    /* TODO $0F4BA0: dc.w $ff20  [FF 20] */
    /* WARNING: function did not end with RTS */
}

/* $0F4BCE-$0F4BD2  (2 instructions, 4 bytes) */
void jt_0F4BCE(void) {
    M68K_ASR16(g_m68k.d[0], 0x8);
    /* TODO $0F4BD0: dc.w $ff30  [FF 30] */
    /* WARNING: function did not end with RTS */
}

/* $0F4BD6-$0F4BE0  (5 instructions, 10 bytes) */
void jt_0F4BD6(void) {
    M68K_OR16(g_m68k.d[6], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[2], _postinc8(2));
    /* TODO $0F4BDA: dc.w $8f40  [8F 40] */
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_AND16(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F4C4C-$0F4C50  (2 instructions, 4 bytes) */
void jt_0F4C4C(void) {
    M68K_CMP8(g_m68k.d[0], _postinc8(3));
    M68K_ADD8(g_m68k.d[0], _postinc8(4));
    /* WARNING: function did not end with RTS */
}

/* $0F4C76-$0F4C78  (1 instructions, 2 bytes) */
void jt_0F4C76(void) {
    /* TODO $0F4C76: dc.w $ff20  [FF 20] */
    /* WARNING: function did not end with RTS */
}

/* $0F4C7E-$0F4C80  (1 instructions, 2 bytes) */
void jt_0F4C7E(void) {
    /* TODO $0F4C7E: dc.w $ff20  [FF 20] */
    /* WARNING: function did not end with RTS */
}

/* $0F4C96-$0F4CAE  (12 instructions, 24 bytes) */
void jt_0F4C96(void) {
    /* TODO $0F4C96: dc.w $ff16  [FF 16] */
    M68K_AND8(g_m68k.d[0], bus_read8(g_m68k.a[6]));
    /* TODO $0F4C9A: dc.w $8140  [81 40] */
    M68K_OR8(g_m68k.d[6], bus_read8(g_m68k.a[6]));
    M68K_OR16(g_m68k.d[2], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $0F4CA2: dc.w $8740  [87 40] */
    M68K_OR8(g_m68k.d[3], bus_read8(g_m68k.a[6]));
    M68K_OR16(g_m68k.d[5], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    /* TODO $0F4CAA: dc.w $8d40  [8D 40] */
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F4CAE-$0F4CC0  (9 instructions, 18 bytes) */
void jt_0F4CAE(void) {
    /* TODO $0F4CAE: roxr.b #$7, d6  [EE 16] */
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    /* TODO $0F4CB4: dc.w $8540  [85 40] */
    M68K_OR8(g_m68k.d[4], bus_read8(g_m68k.a[6]));
    M68K_OR16(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    /* TODO $0F4CBC: dc.w $8b40  [8B 40] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[6]));
    /* WARNING: function did not end with RTS */
}

/* $0F4CD2-$0F4CD4  (1 instructions, 2 bytes) */
void jt_0F4CD2(void) {
    M68K_SUBX16(g_m68k.d[7], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F4CEA-$0F4CEC  (1 instructions, 2 bytes) */
void jt_0F4CEA(void) {
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F4CF2-$0F4D04  (9 instructions, 18 bytes) */
void jt_0F4CF2(void) {
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    /* TODO $0F4CF4: dc.w $8340  [83 40] */
    M68K_OR8(g_m68k.d[5], bus_read8(g_m68k.a[6]));
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* TODO $0F4CFC: dc.w $8940  [89 40] */
    M68K_OR8(g_m68k.d[2], bus_read8(g_m68k.a[6]));
    M68K_OR16(g_m68k.d[6], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0F4D1A-$0F4D1C  (1 instructions, 2 bytes) */
void jt_0F4D1A(void) {
    M68K_SUBX16(g_m68k.d[7], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F4D72-$0F4D74  (1 instructions, 2 bytes) */
void jt_0F4D72(void) {
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F4DB8-$0F4DCA  (9 instructions, 18 bytes) */
void jt_0F4DB8(void) {
    /* TODO $0F4DB8: dc.w $8d40  [8D 40] */
    /* TODO $0F4DBA: sbcd.b d6, d1  [83 06] */
    M68K_OR16(g_m68k.d[5], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[3], g_m68k.d[6]);
    /* TODO $0F4DC0: dc.w $8740  [87 40] */
    /* TODO $0F4DC2: sbcd.b d6, d4  [89 06] */
    M68K_OR16(g_m68k.d[2], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[6], g_m68k.d[6]);
    /* TODO $0F4DC8: dc.w $8140  [81 40] */
    /* WARNING: function did not end with RTS */
}

/* $0F4DD0-$0F4DD2  (1 instructions, 2 bytes) */
void jt_0F4DD0(void) {
    /* TODO $0F4DD0: dc.w $ff32  [FF 32] */
    /* WARNING: function did not end with RTS */
}

/* $0F4DEC-$0F4DFA  (5 instructions, 14 bytes) */
void jt_0F4DEC(void) {
    M68K_OR8(g_m68k.d[7], bus_read8(g_m68k.a[2] + 0x40 + (int16_t)(uint16_t)g_m68k.a[0]));
    /* TODO $0F4DF0: dc.w $ff32  [FF 32] */
    /* TODO $0F4DF2: roxl.b d0, d2  [E1 32] */
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[7], bus_read8(g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.a[0]));
    /* WARNING: function did not end with RTS */
}

/* $0F4DFA-$0F4DFE  (1 instructions, 4 bytes) */
void jt_0F4DFA(void) {
    /* TODO $0F4DFA: sbcd -(a2), -(a1), #$8d40  [83 0A 8D 40] */
    /* WARNING: function did not end with RTS */
}

/* $0F4E14-$0F4E26  (5 instructions, 18 bytes) */
void jt_0F4E14(void) {
    /* TODO $0F4E14: dc.w $8540  [85 40] */
    { uint32_t _ea = (g_m68k.a[2] + 0x40 + (int32_t)g_m68k.a[0]); uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[4], /* UNHANDLED_READ: (a2, invalid.w) */ 0);
    { uint32_t _ea = (g_m68k.a[2] + 0x40 + (int32_t)g_m68k.a[0]); uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[2] + 0x40 + (int16_t)(uint16_t)g_m68k.a[1]));
    /* WARNING: function did not end with RTS */
}

/* $0F4E3E-$0F4E56  (7 instructions, 24 bytes) */
void jt_0F4E3E(void) {
    M68K_SUB16(g_m68k.d[0], g_m68k.d[0]);
    { uint32_t _ea = /* UNHANDLED_ADDR: (a2, invalid.w) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[2], bus_read8(g_m68k.a[2] + 0x40 + (int32_t)g_m68k.a[0]));
    { uint32_t _ea = /* UNHANDLED_ADDR: (a2, invalid.w) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[5], bus_read8(g_m68k.a[2] + 0x40 + (int16_t)(uint16_t)g_m68k.a[0]));
    { uint32_t _ea = /* UNHANDLED_ADDR: (a2, invalid.w) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    /* TODO $0F4E54: dc.w $ff32  [FF 32] */
    /* WARNING: function did not end with RTS */
}

/* $0F4E5A-$0F4E8A  (18 instructions, 48 bytes) */
void jt_0F4E5A(void) {
    M68K_SUB8(g_m68k.d[0], _postinc8(2));
    /* TODO $0F4E5C: dc.w $8340  [83 40] */
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[5], _postinc8(2));
    /* TODO $0F4E64: dc.w $8940  [89 40] */
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[6], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[2], _postinc8(2));
    /* TODO $0F4E6C: dc.w $8f40  [8F 40] */
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_SUB16(g_m68k.d[0], g_m68k.d[0]);
    { uint32_t _ea = /* UNHANDLED_ADDR: (a2, invalid.w) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[3], bus_read8(g_m68k.a[2] + 0x40 + (int32_t)g_m68k.a[0]));
    { uint32_t _ea = /* UNHANDLED_ADDR: (a2, invalid.w) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[6], bus_read8(g_m68k.a[2] + 0x40 + (int16_t)(uint16_t)g_m68k.a[0]));
    { uint32_t _ea = /* UNHANDLED_ADDR: (a2, invalid.w) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    M68K_AND8(g_m68k.d[0], bus_read8(g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.a[0]));
    /* WARNING: function did not end with RTS */
}

/* $0F4E8A-$0F4EA6  (7 instructions, 28 bytes) */
void jt_0F4E8A(void) {
    M68K_AND8(g_m68k.d[0], /* UNHANDLED_READ: (a2, invalid.w) */ 0);
    { uint32_t _ea = (g_m68k.a[2] + 0x40 + (int16_t)(uint16_t)g_m68k.a[0]); uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[6], /* UNHANDLED_READ: (a2, invalid.w) */ 0);
    { uint32_t _ea = (g_m68k.a[2] + 0x40 + (int32_t)g_m68k.a[0]); uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[3], /* UNHANDLED_READ: (a2, invalid.w) */ 0);
    { uint32_t _ea = (g_m68k.a[2] + 0x40 + (int16_t)(uint16_t)g_m68k.a[1]); uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    /* TODO $0F4EA2: sbcd -(a2), -(a0), #$8f40  [81 0A 8F 40] */
    /* WARNING: function did not end with RTS */
}

/* $0F4EBA-$0F4EBC  (1 instructions, 2 bytes) */
void jt_0F4EBA(void) {
    /* TODO $0F4EBA: dc.w $ff32  [FF 32] */
    /* WARNING: function did not end with RTS */
}

/* $0F4ED6-$0F4F00  (17 instructions, 42 bytes) */
void jt_0F4ED6(void) {
    M68K_ROR8(g_m68k.d[2], 0x8);
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[7], _postinc8(2));
    /* TODO $0F4EDC: dc.w $8540  [85 40] */
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[4], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[4], _postinc8(2));
    /* TODO $0F4EE4: dc.w $8b40  [8B 40] */
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[7], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[1], _postinc8(2));
    M68K_SUB16(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[2] + 0x40 + (int32_t)g_m68k.a[0]));
    { uint32_t _ea = /* UNHANDLED_ADDR: (a2, invalid.w) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[4], bus_read8(g_m68k.a[2] + 0x40 + (int32_t)g_m68k.a[0]));
    { uint32_t _ea = /* UNHANDLED_ADDR: (a2, invalid.w) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F4F1A-$0F4F24  (4 instructions, 10 bytes) */
void jt_0F4F1A(void) {
    M68K_OR8(g_m68k.d[7], bus_read8(g_m68k.a[2] + 0x40 + (int16_t)(uint16_t)g_m68k.a[0]));
    /* TODO $0F4F1E: dc.w $ff32  [FF 32] */
    /* TODO $0F4F20: dc.w $f132  [F1 32] */
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F4F24-$0F4F3C  (7 instructions, 24 bytes) */
void jt_0F4F24(void) {
    M68K_SUB16(g_m68k.d[0], g_m68k.d[0]);
    { uint32_t _ea = /* UNHANDLED_ADDR: (a2, invalid.w) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[2], bus_read8(g_m68k.a[2] + 0x40 + (int32_t)g_m68k.a[0]));
    { uint32_t _ea = /* UNHANDLED_ADDR: (a2, invalid.w) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[5], bus_read8(g_m68k.a[2] + 0x40 + (int16_t)(uint16_t)g_m68k.a[0]));
    { uint32_t _ea = /* UNHANDLED_ADDR: (a2, invalid.w) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    /* TODO $0F4F3A: dc.w $ff32  [FF 32] */
    /* WARNING: function did not end with RTS */
}

/* $0F4F40-$0F4F42  (1 instructions, 2 bytes) */
void jt_0F4F40(void) {
    M68K_ADD8(g_m68k.d[0], bus_read8(g_m68k.a[2]));
    /* WARNING: function did not end with RTS */
}

/* $0F4F4C-$0F4F60  (10 instructions, 20 bytes) */
void jt_0F4F4C(void) {
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* TODO $0F4F4E: dc.w $8940  [89 40] */
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* TODO $0F4F52: dc.w $8940  [89 40] */
    M68K_OR8(g_m68k.d[3], bus_read8(g_m68k.a[2]));
    M68K_OR16(g_m68k.d[5], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    /* TODO $0F4F5A: dc.w $8b40  [8B 40] */
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[5], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F4FA6-$0F4FAE  (4 instructions, 8 bytes) */
void jt_0F4FA6(void) {
    /* TODO $0F4FA6: dc.w $ff10  [FF 10] */
    /* TODO $0F4FA8: dc.w $ff10  [FF 10] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[0]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F4FAE-$0F4FB2  (2 instructions, 4 bytes) */
void jt_0F4FAE(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0F4FB0: dc.w $8740  [87 40] */
    /* WARNING: function did not end with RTS */
}

/* $0F5010-$0F5012  (1 instructions, 2 bytes) */
void jt_0F5010(void) {
    M68K_OR16(g_m68k.d[2], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F5082-$0F50AA  (20 instructions, 40 bytes) */
void jt_0F5082(void) {
    /* TODO $0F5082: dc.w $8d40  [8D 40] */
    /* TODO $0F5084: sbcd.b d6, d1  [83 06] */
    M68K_OR16(g_m68k.d[5], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[3], g_m68k.d[6]);
    /* TODO $0F508A: dc.w $8740  [87 40] */
    /* TODO $0F508C: sbcd.b d6, d4  [89 06] */
    /* TODO $0F508E: dc.w $8540  [85 40] */
    /* TODO $0F5090: sbcd.b d6, d5  [8B 06] */
    /* TODO $0F5092: dc.w $8340  [83 40] */
    /* TODO $0F5094: sbcd.b d5, d6  [8D 05] */
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[7], g_m68k.d[4]);
    /* TODO $0F509A: dc.w $8140  [81 40] */
    /* TODO $0F509C: sbcd.b d3, d7  [8F 03] */
    /* TODO $0F509E: dc.w $8140  [81 40] */
    /* TODO $0F50A0: sbcd.b d2, d7  [8F 02] */
    /* TODO $0F50A2: dc.w $8140  [81 40] */
    /* TODO $0F50A4: sbcd.b d2, d7  [8F 02] */
    /* TODO $0F50A6: dc.w $f001  [F0 01] */
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F50D8-$0F50DC  (1 instructions, 4 bytes) */
void jt_0F50D8(void) {
    /* TODO $0F50D8: sbcd -(a2), -(a1), #$8d40  [83 0A 8D 40] */
    /* WARNING: function did not end with RTS */
}

/* $0F5100-$0F5102  (1 instructions, 2 bytes) */
void jt_0F5100(void) {
    /* TODO $0F5100: dc.w $8140  [81 40] */
    /* WARNING: function did not end with RTS */
}

/* $0F514A-$0F515A  (8 instructions, 16 bytes) */
void jt_0F514A(void) {
    /* TODO $0F514A: dc.w $8940  [89 40] */
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* TODO $0F514E: dc.w $8940  [89 40] */
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[5], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[3], _postinc8(6));
    /* TODO $0F5156: dc.w $8b40  [8B 40] */
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0F51A4-$0F51A6  (1 instructions, 2 bytes) */
void jt_0F51A4(void) {
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0F521A-$0F5224  (5 instructions, 10 bytes) */
void jt_0F521A(void) {
    /* TODO $0F521A: dc.w $ff12  [FF 12] */
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[0], bus_read8(g_m68k.a[1]));
    /* TODO $0F5220: dc.w $f010  [F0 10] */
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F5224-$0F5228  (2 instructions, 4 bytes) */
void jt_0F5224(void) {
    M68K_OR8(g_m68k.d[2], bus_read8(g_m68k.a[2]));
    /* TODO $0F5226: dc.w $8740  [87 40] */
    /* WARNING: function did not end with RTS */
}

/* $0F5286-$0F528E  (4 instructions, 8 bytes) */
void jt_0F5286(void) {
    /* TODO $0F5286: dc.w $ff10  [FF 10] */
    /* TODO $0F5288: dc.w $ff10  [FF 10] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[0]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F528E-$0F5292  (2 instructions, 4 bytes) */
void jt_0F528E(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0F5290: dc.w $8540  [85 40] */
    /* WARNING: function did not end with RTS */
}

/* $0F530C-$0F530E  (1 instructions, 2 bytes) */
void jt_0F530C(void) {
    /* TODO $0F530C: dc.w $ff20  [FF 20] */
    /* WARNING: function did not end with RTS */
}

/* $0F5358-$0F5372  (11 instructions, 26 bytes) */
void jt_0F5358(void) {
    M68K_OR16(g_m68k.d[2], g_m68k.d[0]);
    /* TODO $0F535A: sbcd.b d6, d0  [81 06] */
    M68K_OR8(g_m68k.d[1], g_m68k.d[7]);
    /* TODO $0F535E: sbcd -(a0), -(a4), #$8340  [89 08 83 40] */
    /* TODO $0F5362: sbcd.b d5, d0  [81 05] */
    /* TODO $0F5364: sbcd.b d6, d0  [81 06] */
    M68K_OR8(g_m68k.d[1], g_m68k.d[7]);
    /* TODO $0F5368: sbcd -(a0), -(a4), #$8240  [89 08 82 40] */
    M68K_OR8(g_m68k.d[7], g_m68k.d[4]);
    /* TODO $0F536E: dc.w $8140  [81 40] */
    /* TODO $0F5370: sbcd.b d3, d7  [8F 03] */
    /* WARNING: function did not end with RTS */
}

/* $0F5378-$0F537A  (1 instructions, 2 bytes) */
void jt_0F5378(void) {
    /* TODO $0F5378: dc.w $ff30  [FF 30] */
    /* WARNING: function did not end with RTS */
}

/* $0F53A2-$0F53B4  (5 instructions, 18 bytes) */
void jt_0F53A2(void) {
    /* TODO $0F53A2: sbcd -(a0), -(a4), #$8209  [89 08 82 09] */
    /* TODO $0F53A6: sbcd -(a2), -(a0), #$8440  [81 0A 84 40] */
    /* TODO $0F53AA: sbcd -(a0), -(a4), #$8209  [89 08 82 09] */
    /* TODO $0F53AE: sbcd -(a2), -(a0), #$810b  [81 0A 81 0B] */
    /* TODO $0F53B2: dc.w $8340  [83 40] */
    /* WARNING: function did not end with RTS */
}

/* $0F53C2-$0F53C4  (1 instructions, 2 bytes) */
void jt_0F53C2(void) {
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F54DA-$0F54E2  (4 instructions, 8 bytes) */
void jt_0F54DA(void) {
    /* TODO $0F54DA: dc.w $ff10  [FF 10] */
    /* TODO $0F54DC: dc.w $ff10  [FF 10] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[0]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F54E2-$0F5524  (17 instructions, 66 bytes) */
void jt_0F54E2(void) {
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
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
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008000));
    /* WARNING: function did not end with RTS */
}

/* $0F5524-$0F552C  (4 instructions, 8 bytes) */
void jt_0F5524(void) {
    /* TODO $0F5524: dc.w $ff10  [FF 10] */
    /* TODO $0F5526: dc.w $ff10  [FF 10] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[0]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F552C-$0F556E  (17 instructions, 66 bytes) */
void jt_0F552C(void) {
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
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
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[5], bus_read8(0x008000));
    /* WARNING: function did not end with RTS */
}
