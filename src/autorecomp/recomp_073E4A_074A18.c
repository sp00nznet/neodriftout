/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $073E4A - $074A18 */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

/* $073E4A-$073E4E  (2 instructions, 4 bytes) */
void jt_073E4A(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $073F3E-$073F42  (2 instructions, 4 bytes) */
void jt_073F3E(void) {
    M68K_SUB8(g_m68k.d[0], _postinc8(0));
    M68K_ASR16(g_m68k.d[0], 0x8);
    /* WARNING: function did not end with RTS */
}

/* $073F80-$073F88  (4 instructions, 8 bytes) */
void jt_073F80(void) {
    /* TODO $073F80: dc.w $ff16  [FF 16] */
    /* TODO $073F82: dc.w $ff16  [FF 16] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[6]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $073F88-$073FA0  (12 instructions, 24 bytes) */
void jt_073F88(void) {
    /* TODO $073F88: dc.w $ff16  [FF 16] */
    M68K_AND8(g_m68k.d[0], bus_read8(g_m68k.a[6]));
    /* TODO $073F8C: dc.w $8140  [81 40] */
    M68K_OR8(g_m68k.d[6], bus_read8(g_m68k.a[6]));
    M68K_OR16(g_m68k.d[2], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $073F94: dc.w $8740  [87 40] */
    M68K_OR8(g_m68k.d[3], bus_read8(g_m68k.a[6]));
    M68K_OR16(g_m68k.d[5], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    /* TODO $073F9C: dc.w $8d40  [8D 40] */
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $073FA0-$073FA8  (4 instructions, 8 bytes) */
void jt_073FA0(void) {
    /* TODO $073FA0: dc.w $ff16  [FF 16] */
    /* TODO $073FA2: dc.w $ff16  [FF 16] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[6]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $073FA8-$073FB0  (4 instructions, 8 bytes) */
void jt_073FA8(void) {
    /* TODO $073FA8: dc.w $ff16  [FF 16] */
    /* TODO $073FAA: dc.w $ff16  [FF 16] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[6]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $073FB0-$073FC2  (9 instructions, 18 bytes) */
void jt_073FB0(void) {
    /* TODO $073FB0: roxr.b #$7, d6  [EE 16] */
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    /* TODO $073FB6: dc.w $8540  [85 40] */
    M68K_OR8(g_m68k.d[4], bus_read8(g_m68k.a[6]));
    M68K_OR16(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    /* TODO $073FBE: dc.w $8b40  [8B 40] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[6]));
    /* WARNING: function did not end with RTS */
}

/* $073FD4-$073FE6  (9 instructions, 18 bytes) */
void jt_073FD4(void) {
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    /* TODO $073FD6: dc.w $8340  [83 40] */
    M68K_OR8(g_m68k.d[5], bus_read8(g_m68k.a[6]));
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* TODO $073FDE: dc.w $8940  [89 40] */
    M68K_OR8(g_m68k.d[2], bus_read8(g_m68k.a[6]));
    M68K_OR16(g_m68k.d[6], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $074034-$07403C  (4 instructions, 8 bytes) */
void jt_074034(void) {
    /* TODO $074034: dc.w $ff16  [FF 16] */
    /* TODO $074036: dc.w $ff16  [FF 16] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[6]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $07403C-$074054  (12 instructions, 24 bytes) */
void jt_07403C(void) {
    /* TODO $07403C: dc.w $ff16  [FF 16] */
    M68K_AND8(g_m68k.d[0], bus_read8(g_m68k.a[6]));
    /* TODO $074040: dc.w $8140  [81 40] */
    M68K_OR8(g_m68k.d[6], bus_read8(g_m68k.a[6]));
    M68K_OR16(g_m68k.d[2], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $074048: dc.w $8740  [87 40] */
    M68K_OR8(g_m68k.d[3], bus_read8(g_m68k.a[6]));
    M68K_OR16(g_m68k.d[5], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    /* TODO $074050: dc.w $8d40  [8D 40] */
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $074054-$07405C  (4 instructions, 8 bytes) */
void jt_074054(void) {
    /* TODO $074054: dc.w $ff16  [FF 16] */
    /* TODO $074056: dc.w $ff16  [FF 16] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[6]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $07405C-$074064  (4 instructions, 8 bytes) */
void jt_07405C(void) {
    /* TODO $07405C: dc.w $ff16  [FF 16] */
    /* TODO $07405E: dc.w $ff16  [FF 16] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[6]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $074064-$074076  (9 instructions, 18 bytes) */
void jt_074064(void) {
    /* TODO $074064: roxr.b #$7, d6  [EE 16] */
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    /* TODO $07406A: dc.w $8540  [85 40] */
    M68K_OR8(g_m68k.d[4], bus_read8(g_m68k.a[6]));
    M68K_OR16(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    /* TODO $074072: dc.w $8b40  [8B 40] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[6]));
    /* WARNING: function did not end with RTS */
}

/* $074088-$07409A  (9 instructions, 18 bytes) */
void jt_074088(void) {
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    /* TODO $07408A: dc.w $8340  [83 40] */
    M68K_OR8(g_m68k.d[5], bus_read8(g_m68k.a[6]));
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* TODO $074092: dc.w $8940  [89 40] */
    M68K_OR8(g_m68k.d[2], bus_read8(g_m68k.a[6]));
    M68K_OR16(g_m68k.d[6], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0740E8-$0740EA  (1 instructions, 2 bytes) */
void jt_0740E8(void) {
    /* TODO $0740E8: dc.w $8340  [83 40] */
    /* WARNING: function did not end with RTS */
}

/* $0741DC-$0741E8  (6 instructions, 12 bytes) */
void jt_0741DC(void) {
    M68K_OR16(g_m68k.d[2], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[6], g_m68k.d[4]);
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[7], g_m68k.d[4]);
    /* TODO $0741E4: dc.w $8140  [81 40] */
    M68K_EOR8(g_m68k.d[4], g_m68k.d[7]);
    /* WARNING: function did not end with RTS */
}

/* $07421E-$074226  (4 instructions, 8 bytes) */
void jt_07421E(void) {
    /* TODO $07421E: dc.w $ff10  [FF 10] */
    /* TODO $074220: dc.w $ff10  [FF 10] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[0]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $074226-$074228  (1 instructions, 2 bytes) */
void jt_074226(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $074268-$074270  (4 instructions, 8 bytes) */
void jt_074268(void) {
    /* TODO $074268: dc.w $ff10  [FF 10] */
    /* TODO $07426A: dc.w $ff10  [FF 10] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[0]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $074270-$074272  (1 instructions, 2 bytes) */
void jt_074270(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0743A4-$0743AC  (4 instructions, 8 bytes) */
void jt_0743A4(void) {
    /* TODO $0743A4: dc.w $ff10  [FF 10] */
    /* TODO $0743A6: dc.w $ff10  [FF 10] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[0]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0743AC-$0743B0  (2 instructions, 4 bytes) */
void jt_0743AC(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $07440E-$074416  (4 instructions, 8 bytes) */
void jt_07440E(void) {
    /* TODO $07440E: dc.w $ff10  [FF 10] */
    /* TODO $074410: dc.w $ff10  [FF 10] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[0]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $074416-$07441A  (2 instructions, 4 bytes) */
void jt_074416(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $074512-$07451A  (3 instructions, 8 bytes) */
void jt_074512(void) {
    /* TODO $074512: dc.w $ff16  [FF 16] */
    M68K_AND8(g_m68k.d[0], bus_read8(g_m68k.a[6]));
    /* TODO $074516: sbcd -(a6), -(a0), #$8c16  [81 0E 8C 16] */
    /* WARNING: function did not end with RTS */
}

/* $07452A-$07452C  (1 instructions, 2 bytes) */
void jt_07452A(void) {
    /* TODO $07452A: roxr.b #$7, d6  [EE 16] */
    /* WARNING: function did not end with RTS */
}

/* $074550-$074562  (9 instructions, 18 bytes) */
void jt_074550(void) {
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    /* TODO $074552: dc.w $8340  [83 40] */
    M68K_OR8(g_m68k.d[5], bus_read8(g_m68k.a[6]));
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* TODO $07455A: dc.w $8940  [89 40] */
    M68K_OR8(g_m68k.d[2], bus_read8(g_m68k.a[6]));
    M68K_OR16(g_m68k.d[6], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $074578-$07457A  (1 instructions, 2 bytes) */
void jt_074578(void) {
    M68K_SUBX16(g_m68k.d[7], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0745D0-$0745D2  (1 instructions, 2 bytes) */
void jt_0745D0(void) {
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $074616-$074628  (9 instructions, 18 bytes) */
void jt_074616(void) {
    /* TODO $074616: dc.w $8d40  [8D 40] */
    /* TODO $074618: sbcd.b d6, d1  [83 06] */
    M68K_OR16(g_m68k.d[5], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[3], g_m68k.d[6]);
    /* TODO $07461E: dc.w $8740  [87 40] */
    /* TODO $074620: sbcd.b d6, d4  [89 06] */
    M68K_OR16(g_m68k.d[2], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[6], g_m68k.d[6]);
    /* TODO $074626: dc.w $8140  [81 40] */
    /* WARNING: function did not end with RTS */
}

/* $07462E-$074646  (12 instructions, 24 bytes) */
void jt_07462E(void) {
    /* TODO $07462E: dc.w $ff16  [FF 16] */
    M68K_AND8(g_m68k.d[0], bus_read8(g_m68k.a[6]));
    /* TODO $074632: dc.w $8140  [81 40] */
    M68K_OR8(g_m68k.d[6], bus_read8(g_m68k.a[6]));
    M68K_OR16(g_m68k.d[2], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $07463A: dc.w $8740  [87 40] */
    M68K_OR8(g_m68k.d[3], bus_read8(g_m68k.a[6]));
    M68K_OR16(g_m68k.d[5], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    /* TODO $074642: dc.w $8d40  [8D 40] */
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $074646-$074658  (9 instructions, 18 bytes) */
void jt_074646(void) {
    /* TODO $074646: roxr.b #$7, d6  [EE 16] */
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    /* TODO $07464C: dc.w $8540  [85 40] */
    M68K_OR8(g_m68k.d[4], bus_read8(g_m68k.a[6]));
    M68K_OR16(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    /* TODO $074654: dc.w $8b40  [8B 40] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[6]));
    /* WARNING: function did not end with RTS */
}

/* $07466A-$07466C  (1 instructions, 2 bytes) */
void jt_07466A(void) {
    M68K_SUBX16(g_m68k.d[7], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $074682-$074684  (1 instructions, 2 bytes) */
void jt_074682(void) {
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $07468A-$07468C  (1 instructions, 2 bytes) */
void jt_07468A(void) {
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $074736-$074738  (1 instructions, 2 bytes) */
void jt_074736(void) {
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $07477C-$07478E  (9 instructions, 18 bytes) */
void jt_07477C(void) {
    /* TODO $07477C: dc.w $8d40  [8D 40] */
    /* TODO $07477E: sbcd.b d6, d1  [83 06] */
    M68K_OR16(g_m68k.d[5], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[3], g_m68k.d[6]);
    /* TODO $074784: dc.w $8740  [87 40] */
    /* TODO $074786: sbcd.b d6, d4  [89 06] */
    M68K_OR16(g_m68k.d[2], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[6], g_m68k.d[6]);
    /* TODO $07478C: dc.w $8140  [81 40] */
    /* WARNING: function did not end with RTS */
}

/* $0747A4-$0747B2  (7 instructions, 14 bytes) */
void jt_0747A4(void) {
    M68K_SUB8(g_m68k.d[0], _postinc8(0));
    /* TODO $0747A6: dc.w $8940  [89 40] */
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[6], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[2], _postinc8(1));
    /* TODO $0747AE: dc.w $8f40  [8F 40] */
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0747C8-$0747F4  (22 instructions, 44 bytes) */
void jt_0747C8(void) {
    M68K_SUB8(g_m68k.d[0], _postinc8(0));
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $0747DC: dc.w $8540  [85 40] */
    M68K_OR8(g_m68k.d[1], _postinc8(1));
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $0747E2: dc.w $8740  [87 40] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_CMP16(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[1], _predec8(0));
    M68K_OR16(g_m68k.d[7], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    /* TODO $0747EE: dc.w $8b40  [8B 40] */
    M68K_AND8(g_m68k.d[0], _predec8(0));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $074804-$07480C  (4 instructions, 8 bytes) */
void jt_074804(void) {
    /* TODO $074804: dc.w $f018  [F0 18] */
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_AND8(g_m68k.d[0], _predec8(0));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $07480C-$074814  (4 instructions, 8 bytes) */
void jt_07480C(void) {
    /* TODO $07480C: dc.w $f018  [F0 18] */
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_AND8(g_m68k.d[0], _predec8(0));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $074824-$074848  (18 instructions, 36 bytes) */
void jt_074824(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[7]));
    /* TODO $07483A: dc.w $8540  [85 40] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _t = g_m68k.d[2]; g_m68k.d[2] = g_m68k.d[0]; g_m68k.d[0] = _t; }
    M68K_OR8(g_m68k.d[1], _predec8(0));
    /* TODO $074842: dc.w $8b40  [8B 40] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $074848-$074866  (15 instructions, 30 bytes) */
void jt_074848(void) {
    M68K_SUB8(g_m68k.d[0], _postinc8(0));
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* TODO $07484C: dc.w $8940  [89 40] */
    M68K_OR8(g_m68k.d[2], bus_read8(g_m68k.a[7]));
    M68K_OR16(g_m68k.d[6], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_EOR16(g_m68k.d[0], g_m68k.d[4]);
    M68K_OR8(g_m68k.d[3], _predec8(0));
    /* TODO $074858: dc.w $8740  [87 40] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[2], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[6], _predec8(0));
    /* TODO $074860: dc.w $8140  [81 40] */
    M68K_LSL8(g_m68k.d[0], g_m68k.d[7]);
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $074866-$074868  (1 instructions, 2 bytes) */
void jt_074866(void) {
    /* TODO $074866: dc.w $f010  [F0 10] */
    /* WARNING: function did not end with RTS */
}

/* $07486E-$0748D0  (33 instructions, 98 bytes) */
void jt_07486E(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $074870: dc.w $8540  [85 40] */
    M68K_OR8(g_m68k.d[5], bus_read8(0x008110));
    /* TODO $074876: dc.w $8540  [85 40] */
    M68K_OR8(g_m68k.d[5], bus_read8(0x008110));
    /* TODO $07487C: dc.w $8540  [85 40] */
    M68K_OR8(g_m68k.d[5], bus_read8(0x008110));
    /* TODO $074882: dc.w $8540  [85 40] */
    M68K_OR8(g_m68k.d[5], bus_read8(0x008110));
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = 0x008110; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = 0x008110; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = 0x00810E; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $07489A: dc.w $8740  [87 40] */
    M68K_OR8(g_m68k.d[4], bus_read8(0x00810E));
    /* TODO $0748A0: dc.w $8740  [87 40] */
    M68K_OR8(g_m68k.d[4], bus_read8(0x00810E));
    /* TODO $0748A6: dc.w $8740  [87 40] */
    M68K_OR8(g_m68k.d[4], bus_read8(0x00820E));
    /* TODO $0748AC: dc.w $8740  [87 40] */
    { uint32_t _ea = 0x00820E; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* TODO $0748B2: dc.w $8740  [87 40] */
    { uint32_t _ea = 0x00820E; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* TODO $0748B8: dc.w $8740  [87 40] */
    { uint32_t _ea = 0x00830E; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* TODO $0748BE: dc.w $8740  [87 40] */
    M68K_OR8(g_m68k.d[3], bus_read8(0x00830E));
    /* TODO $0748C4: dc.w $8740  [87 40] */
    M68K_OR8(g_m68k.d[3], bus_read8(0x00830E));
    /* TODO $0748CA: dc.w $8740  [87 40] */
    M68K_OR8(g_m68k.d[3], bus_read8(0x008000));
    /* WARNING: function did not end with RTS */
}

/* $07493A-$07499C  (33 instructions, 98 bytes) */
void jt_07493A(void) {
    { uint32_t _ea = 0x008640; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $07493E: sbcd.b d0, d0  [81 00] */
    { uint32_t _ea = 0x008640; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $074944: sbcd.b d0, d0  [81 00] */
    { uint32_t _ea = 0x008640; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $07494A: sbcd.b d0, d0  [81 00] */
    { uint32_t _ea = 0x008640; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $074950: sbcd.b d0, d0  [81 00] */
    { uint32_t _ea = 0x008640; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $074956: sbcd.b d0, d0  [81 00] */
    { uint32_t _ea = 0x008640; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $07495C: sbcd.b d0, d0  [81 00] */
    { uint32_t _ea = 0x008640; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $074962: sbcd.b d0, d0  [81 00] */
    { uint32_t _ea = 0x008640; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $074968: sbcd.b d2, d0  [81 02] */
    { uint32_t _ea = 0x008640; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $07496E: sbcd.b d2, d0  [81 02] */
    { uint32_t _ea = 0x008640; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $074974: sbcd.b d2, d0  [81 02] */
    M68K_OR8(g_m68k.d[4], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[1], g_m68k.d[2]);
    M68K_OR8(g_m68k.d[4], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[1], g_m68k.d[2]);
    M68K_OR8(g_m68k.d[4], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[1], g_m68k.d[2]);
    { uint32_t _ea = 0x008640; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* TODO $07498C: sbcd.b d2, d1  [83 02] */
    { uint32_t _ea = 0x008640; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* TODO $074992: sbcd.b d2, d1  [83 02] */
    { uint32_t _ea = 0x008640; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* TODO $074998: sbcd.b d2, d1  [83 02] */
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $07499C-$07499E  (1 instructions, 2 bytes) */
void jt_07499C(void) {
    /* TODO $07499C: dc.w $f000  [F0 00] */
    /* WARNING: function did not end with RTS */
}

/* $0749A4-$074A06  (33 instructions, 98 bytes) */
void jt_0749A4(void) {
    M68K_OR8(g_m68k.d[3], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[2], g_m68k.d[2]);
    M68K_OR8(g_m68k.d[3], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[2], g_m68k.d[2]);
    M68K_OR8(g_m68k.d[3], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[2], g_m68k.d[2]);
    { uint32_t _ea = 0x008640; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    /* TODO $0749BA: sbcd.b d2, d2  [85 02] */
    { uint32_t _ea = 0x008640; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    /* TODO $0749C0: sbcd.b d2, d2  [85 02] */
    { uint32_t _ea = 0x008640; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    /* TODO $0749C6: sbcd.b d2, d2  [85 02] */
    M68K_OR8(g_m68k.d[2], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[3], g_m68k.d[2]);
    M68K_OR8(g_m68k.d[2], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[3], g_m68k.d[2]);
    M68K_OR8(g_m68k.d[2], bus_read8(0x008640));
    M68K_OR8(g_m68k.d[3], g_m68k.d[2]);
    { uint32_t _ea = 0x008640; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    /* TODO $0749DE: sbcd.b d0, d3  [87 00] */
    { uint32_t _ea = 0x008640; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    /* TODO $0749E4: sbcd.b d0, d3  [87 00] */
    { uint32_t _ea = 0x008640; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    /* TODO $0749EA: sbcd.b d0, d3  [87 00] */
    { uint32_t _ea = 0x008640; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    /* TODO $0749F0: sbcd.b d0, d3  [87 00] */
    { uint32_t _ea = 0x008640; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    /* TODO $0749F6: sbcd.b d0, d3  [87 00] */
    { uint32_t _ea = 0x008640; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    /* TODO $0749FC: sbcd.b d0, d3  [87 00] */
    { uint32_t _ea = 0x008640; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    /* TODO $074A02: sbcd.b d0, d3  [87 00] */
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $074A0E-$074A16  (4 instructions, 8 bytes) */
void jt_074A0E(void) {
    /* TODO $074A0E: dc.w $ff10  [FF 10] */
    /* TODO $074A10: dc.w $ff10  [FF 10] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[0]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $074A16-$074A18  (1 instructions, 2 bytes) */
void jt_074A16(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}
