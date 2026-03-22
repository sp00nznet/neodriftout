/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $076FEA - $077AE4 */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

/* $076FEA-$077000  (10 instructions, 22 bytes) */
void jt_076FEA(void) {
    M68K_SUB8(g_m68k.d[0], _postinc8(0));
    /* TODO $076FEC: dc.w $8940  [89 40] */
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[6], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[2], _postinc8(1));
    /* TODO $076FF4: dc.w $8f40  [8F 40] */
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_CMP16(g_m68k.d[0], g_m68k.d[0]);
    /* TODO $076FFA: dc.w $ff30  [FF 30] */
    { uint32_t _ea = (g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.a[0]); uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $077000-$077028  (19 instructions, 40 bytes) */
void jt_077000(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[1], _postinc8(1));
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $077018: dc.w $8540  [85 40] */
    M68K_OR8(g_m68k.d[1], _postinc8(1));
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $07701E: dc.w $8740  [87 40] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $077022: dc.w $ff30  [FF 30] */
    { uint32_t _ea = (g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.a[0]); uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $077038-$077040  (3 instructions, 8 bytes) */
void jt_077038(void) {
    /* TODO $077038: dc.w $f018  [F0 18] */
    /* TODO $07703A: dc.w $ff30  [FF 30] */
    { uint32_t _ea = (g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.a[0]); uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $077040-$077048  (3 instructions, 8 bytes) */
void jt_077040(void) {
    /* TODO $077040: dc.w $f018  [F0 18] */
    /* TODO $077042: dc.w $ff30  [FF 30] */
    { uint32_t _ea = (g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.a[0]); uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $077058-$07707A  (16 instructions, 34 bytes) */
void jt_077058(void) {
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
    /* TODO $07706E: dc.w $8540  [85 40] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $077072: dc.w $8740  [87 40] */
    /* TODO $077074: dc.w $ff30  [FF 30] */
    { uint32_t _ea = (g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.a[0]); uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $07707A-$07708E  (9 instructions, 20 bytes) */
void jt_07707A(void) {
    M68K_SUB8(g_m68k.d[0], _postinc8(0));
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* TODO $07707E: dc.w $8940  [89 40] */
    M68K_OR8(g_m68k.d[2], bus_read8(g_m68k.a[7]));
    M68K_OR16(g_m68k.d[6], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_EOR16(g_m68k.d[0], g_m68k.d[7]);
    /* TODO $077088: dc.w $ff30  [FF 30] */
    { uint32_t _ea = (g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.a[0]); uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $07709E-$0770AC  (7 instructions, 14 bytes) */
void jt_07709E(void) {
    M68K_SUB8(g_m68k.d[0], _postinc8(0));
    /* TODO $0770A0: dc.w $8940  [89 40] */
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[6], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[2], _postinc8(1));
    /* TODO $0770A8: dc.w $8f40  [8F 40] */
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0770C2-$0770EE  (19 instructions, 44 bytes) */
void jt_0770C2(void) {
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
    /* TODO $0770D6: dc.w $8540  [85 40] */
    M68K_OR8(g_m68k.d[1], _postinc8(1));
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $0770DC: dc.w $8740  [87 40] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_CMP16(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[0] + 0x40 + (int32_t)g_m68k.a[0]));
    { uint32_t _ea = /* UNHANDLED_ADDR: (a0, invalid.w) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    M68K_AND8(g_m68k.d[0], bus_read8(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.a[0]));
    /* WARNING: function did not end with RTS */
}

/* $0770FE-$077100  (1 instructions, 2 bytes) */
void jt_0770FE(void) {
    /* TODO $0770FE: dc.w $f018  [F0 18] */
    /* WARNING: function did not end with RTS */
}

/* $077100-$077106  (2 instructions, 6 bytes) */
void jt_077100(void) {
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_AND8(g_m68k.d[0], bus_read8(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.a[0]));
    /* WARNING: function did not end with RTS */
}

/* $077106-$07710E  (3 instructions, 8 bytes) */
void jt_077106(void) {
    /* TODO $077106: dc.w $f018  [F0 18] */
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_AND8(g_m68k.d[0], bus_read8(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.a[0]));
    /* WARNING: function did not end with RTS */
}

/* $07711E-$077142  (16 instructions, 36 bytes) */
void jt_07711E(void) {
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
    /* TODO $077134: dc.w $8540  [85 40] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _t = g_m68k.d[2]; g_m68k.d[2] = g_m68k.d[0]; g_m68k.d[0] = _t; }
    M68K_OR8(g_m68k.d[1], /* UNHANDLED_READ: (a0, invalid.w) */ 0);
    { uint32_t _ea = (g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.a[0]); uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $077142-$077160  (12 instructions, 30 bytes) */
void jt_077142(void) {
    M68K_SUB8(g_m68k.d[0], _postinc8(0));
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* TODO $077146: dc.w $8940  [89 40] */
    M68K_OR8(g_m68k.d[2], bus_read8(g_m68k.a[7]));
    M68K_OR16(g_m68k.d[6], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_EOR16(g_m68k.d[0], g_m68k.d[4]);
    M68K_OR8(g_m68k.d[3], /* UNHANDLED_READ: (a0, invalid.w) */ 0);
    { uint32_t _ea = (g_m68k.a[0] + 0x40 + (int16_t)(uint16_t)g_m68k.a[0]); uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[6], /* UNHANDLED_READ: (a0, invalid.w) */ 0);
    /* TODO $07715C: roxl.b d7, d0  [EF 30] */
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $077170-$0771B0  (17 instructions, 64 bytes) */
void jt_077170(void) {
    M68K_SUB8(g_m68k.d[0], _postinc8(0));
    M68K_OR8(g_m68k.d[5], bus_read8(g_m68k.a[0] + 0x41 + (int16_t)(uint16_t)g_m68k.a[0]));
    M68K_OR8(g_m68k.d[4], bus_read8(g_m68k.a[0] + 0x41 + (int32_t)g_m68k.a[0]));
    M68K_OR8(g_m68k.d[4], bus_read8(g_m68k.a[0] + 0x41 + (int32_t)g_m68k.a[0]));
    { uint32_t _ea = /* UNHANDLED_ADDR: ([a0]) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = /* UNHANDLED_ADDR: ([a0]) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = /* UNHANDLED_ADDR: ([a0]) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = /* UNHANDLED_ADDR: ([a0]) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = /* UNHANDLED_ADDR: ([a0]) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = /* UNHANDLED_ADDR: ([a0]) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = /* UNHANDLED_ADDR: ([a0]) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = /* UNHANDLED_ADDR: ([a0]) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[3], bus_read8(g_m68k.a[0] + 0x41 + (int32_t)g_m68k.a[0]));
    M68K_OR8(g_m68k.d[3], bus_read8(g_m68k.a[0] + 0x41 + (int32_t)g_m68k.a[0]));
    M68K_OR8(g_m68k.d[3], bus_read8(g_m68k.a[0] + 0x41 + (int32_t)g_m68k.a[0]));
    M68K_OR8(g_m68k.d[3], bus_read8(g_m68k.a[0] + 0x41 + (int32_t)g_m68k.a[0]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0771B0-$0771B2  (1 instructions, 2 bytes) */
void jt_0771B0(void) {
    M68K_SUB8(g_m68k.d[0], _postinc8(0));
    /* WARNING: function did not end with RTS */
}

/* $0771C8-$0771E4  (8 instructions, 28 bytes) */
void jt_0771C8(void) {
    M68K_SUB8(g_m68k.d[0], _postinc8(0));
    M68K_ASR16(g_m68k.d[0], 0x8);
    M68K_OR8(g_m68k.d[6], bus_read8(g_m68k.a[0] + 0x40 + (int16_t)(uint16_t)g_m68k.a[0]));
    { uint32_t _ea = /* UNHANDLED_ADDR: (a0, invalid.w) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = /* UNHANDLED_ADDR: (a0, invalid.w) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = /* UNHANDLED_ADDR: (a0, invalid.w) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = /* UNHANDLED_ADDR: (a0, invalid.w) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    M68K_AND8(g_m68k.d[0], bus_read8(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.a[0]));
    /* WARNING: function did not end with RTS */
}

/* $0771E4-$0771E6  (1 instructions, 2 bytes) */
void jt_0771E4(void) {
    M68K_SUB8(g_m68k.d[0], _postinc8(0));
    /* WARNING: function did not end with RTS */
}

/* $077208-$07720C  (2 instructions, 4 bytes) */
void jt_077208(void) {
    M68K_ASR16(g_m68k.d[0], 0x8);
    /* TODO $07720A: dc.w $ff30  [FF 30] */
    /* WARNING: function did not end with RTS */
}

/* $077210-$077214  (2 instructions, 4 bytes) */
void jt_077210(void) {
    M68K_ASR16(g_m68k.d[0], 0x8);
    /* TODO $077212: dc.w $ff30  [FF 30] */
    /* WARNING: function did not end with RTS */
}

/* $077218-$077228  (8 instructions, 16 bytes) */
void jt_077218(void) {
    /* TODO $077218: dc.w $ff20  [FF 20] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_EOR16(g_m68k.d[0], g_m68k.d[7]);
    /* TODO $07721E: sbcd.b d7, d0  [81 07] */
    M68K_OR16(g_m68k.d[6], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[2], g_m68k.d[7]);
    /* TODO $077224: dc.w $8940  [89 40] */
    /* TODO $077226: sbcd.b d7, d3  [87 07] */
    /* WARNING: function did not end with RTS */
}

/* $07722C-$07724E  (12 instructions, 34 bytes) */
void jt_07722C(void) {
    /* TODO $07722C: dc.w $ff20  [FF 20] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $077230: dc.w $8740  [87 40] */
    /* TODO $077232: sbcd -(a0), -(a4), #$8540  [89 08 85 40] */
    M68K_OR8(g_m68k.d[1], g_m68k.d[7]);
    /* TODO $077238: sbcd -(a0), -(a4), #$8240  [89 08 82 40] */
    /* TODO $07723C: sbcd.b d7, d2  [85 07] */
    /* TODO $07723E: sbcd -(a0), -(a4), #$8707  [89 08 87 07] */
    /* TODO $077242: sbcd -(a0), -(a4), #$8707  [89 08 87 07] */
    /* TODO $077246: sbcd -(a0), -(a4), #$8707  [89 08 87 07] */
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_SUBX8(_tmp, _predec8(0)); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $07725E-$077266  (4 instructions, 8 bytes) */
void jt_07725E(void) {
    /* TODO $07725E: dc.w $ff20  [FF 20] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $077262: dc.w $f008  [F0 08] */
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $077266-$07726E  (4 instructions, 8 bytes) */
void jt_077266(void) {
    /* TODO $077266: dc.w $ff20  [FF 20] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $07726A: dc.w $f008  [F0 08] */
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $07727E-$07729E  (10 instructions, 32 bytes) */
void jt_07727E(void) {
    /* TODO $07727E: dc.w $ff20  [FF 20] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $077282: sbcd -(a0), -(a4), #$8740  [89 08 87 40] */
    /* TODO $077286: sbcd -(a0), -(a4), #$8209  [89 08 82 09] */
    /* TODO $07728A: dc.w $8540  [85 40] */
    /* TODO $07728C: sbcd -(a0), -(a4), #$8509  [89 08 85 09] */
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    /* TODO $077292: sbcd -(a0), -(a4), #$8709  [89 08 87 09] */
    /* TODO $077296: sbcd -(a0), -(a4), #$8709  [89 08 87 09] */
    /* TODO $07729A: sbcd -(a0), -(a4), #$8709  [89 08 87 09] */
    /* WARNING: function did not end with RTS */
}

/* $0772A2-$0772AC  (4 instructions, 10 bytes) */
void jt_0772A2(void) {
    /* TODO $0772A2: dc.w $ff20  [FF 20] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_CMP16(g_m68k.d[0], g_m68k.d[0]);
    /* TODO $0772A8: sbcd -(a1), -(a0), #$8f40  [81 09 8F 40] */
    /* WARNING: function did not end with RTS */
}

/* $0772D8-$07731A  (17 instructions, 66 bytes) */
void jt_0772D8(void) {
    M68K_OR16(g_m68k.d[6], g_m68k.d[0]);
    M68K_OR16(g_m68k.d[2], 0x8c40);
    M68K_OR16(g_m68k.d[2], 0x8c40);
    M68K_OR16(g_m68k.d[2], 0x8c40);
    M68K_OR16(g_m68k.d[2], 0x8c40);
    M68K_OR16(g_m68k.d[2], 0x8c40);
    M68K_OR16(g_m68k.d[2], 0x8c20);
    M68K_OR16(g_m68k.d[2], 0x8c20);
    M68K_OR16(g_m68k.d[2], 0x8c20);
    M68K_OR16(g_m68k.d[2], 0x8c20);
    M68K_OR16(g_m68k.d[2], 0x8c20);
    M68K_OR16(g_m68k.d[2], 0x8c20);
    M68K_OR16(g_m68k.d[2], 0x8c20);
    M68K_OR16(g_m68k.d[2], 0x8c20);
    M68K_OR16(g_m68k.d[2], 0x8c20);
    M68K_OR16(g_m68k.d[2], 0x8c20);
    M68K_OR16(g_m68k.d[2], 0x8000);
    /* WARNING: function did not end with RTS */
}

/* $07735C-$07739E  (17 instructions, 66 bytes) */
void jt_07735C(void) {
    M68K_OR8(g_m68k.d[6], _predec8(0));
    M68K_OR16(g_m68k.d[2], 0x8c20);
    M68K_OR16(g_m68k.d[2], 0x8c20);
    M68K_OR16(g_m68k.d[2], 0x8c20);
    M68K_OR16(g_m68k.d[2], 0x8c20);
    M68K_OR16(g_m68k.d[2], 0x8c20);
    M68K_OR16(g_m68k.d[2], 0x8c20);
    M68K_OR16(g_m68k.d[2], 0x8c20);
    M68K_OR16(g_m68k.d[2], 0x8c20);
    M68K_OR16(g_m68k.d[2], 0x8c20);
    M68K_OR16(g_m68k.d[2], 0x8c40);
    M68K_OR16(g_m68k.d[2], 0x8c40);
    M68K_OR16(g_m68k.d[2], 0x8c40);
    M68K_OR16(g_m68k.d[2], 0x8c40);
    M68K_OR16(g_m68k.d[2], 0x8c40);
    M68K_OR16(g_m68k.d[2], 0x8c40);
    M68K_OR16(g_m68k.d[2], 0x8000);
    /* WARNING: function did not end with RTS */
}

/* $077400-$077402  (1 instructions, 2 bytes) */
void jt_077400(void) {
    M68K_OR16(g_m68k.d[6], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $077442-$077484  (17 instructions, 66 bytes) */
void jt_077442(void) {
    M68K_OR16(g_m68k.d[2], 0x8c40);
    M68K_OR16(g_m68k.d[2], 0x8c40);
    M68K_OR16(g_m68k.d[2], 0x8c40);
    M68K_OR16(g_m68k.d[2], 0x8c40);
    M68K_OR16(g_m68k.d[2], 0x8c40);
    M68K_OR16(g_m68k.d[2], 0x8c40);
    M68K_OR16(g_m68k.d[2], 0x8c30);
    M68K_OR16(g_m68k.d[2], 0x8c30);
    M68K_OR16(g_m68k.d[2], 0x8c30);
    M68K_OR16(g_m68k.d[2], 0x8c30);
    M68K_OR16(g_m68k.d[2], 0x8c30);
    M68K_OR16(g_m68k.d[2], 0x8c30);
    M68K_OR16(g_m68k.d[2], 0x8c30);
    M68K_OR16(g_m68k.d[2], 0x8c30);
    M68K_OR16(g_m68k.d[2], 0x8c30);
    M68K_OR16(g_m68k.d[2], 0x8c30);
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $077484-$0774AE  (11 instructions, 42 bytes) */
void jt_077484(void) {
    M68K_OR8(g_m68k.d[6], bus_read8(g_m68k.a[0] + 0x7d + (int16_t)(uint16_t)g_m68k.a[0]));
    M68K_OR8(g_m68k.d[6], bus_read8(g_m68k.a[0] + 0x7d + (int16_t)(uint16_t)g_m68k.a[0]));
    M68K_OR8(g_m68k.d[6], bus_read8(g_m68k.a[0] + 0x7d + (int16_t)(uint16_t)g_m68k.a[0]));
    M68K_OR8(g_m68k.d[6], bus_read8(g_m68k.a[0] + 0x7d + (int16_t)(uint16_t)g_m68k.a[0]));
    M68K_OR8(g_m68k.d[6], bus_read8(g_m68k.a[0] + 0x7d + (int16_t)(uint16_t)g_m68k.a[0]));
    M68K_OR8(g_m68k.d[6], bus_read8(g_m68k.a[0] + 0x7d + (int16_t)(uint16_t)g_m68k.a[0]));
    M68K_OR8(g_m68k.d[6], bus_read8(g_m68k.a[0] + 0x7d + (int16_t)(uint16_t)g_m68k.a[0]));
    M68K_OR8(g_m68k.d[6], bus_read8(g_m68k.a[0] + 0x7d + (int16_t)(uint16_t)g_m68k.a[0]));
    M68K_OR8(g_m68k.d[6], bus_read8(g_m68k.a[0] + 0x7d + (int16_t)(uint16_t)g_m68k.a[0]));
    M68K_OR8(g_m68k.d[6], bus_read8(g_m68k.a[0] + 0x7d + (int16_t)(uint16_t)g_m68k.a[0]));
    M68K_OR16(g_m68k.d[6], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0774C6-$077508  (17 instructions, 66 bytes) */
void jt_0774C6(void) {
    M68K_OR16(g_m68k.d[2], 0x8c30);
    M68K_OR16(g_m68k.d[2], 0x8c30);
    M68K_OR16(g_m68k.d[2], 0x8c30);
    M68K_OR16(g_m68k.d[2], 0x8c30);
    M68K_OR16(g_m68k.d[2], 0x8c30);
    M68K_OR16(g_m68k.d[2], 0x8c30);
    M68K_OR16(g_m68k.d[2], 0x8c30);
    M68K_OR16(g_m68k.d[2], 0x8c30);
    M68K_OR16(g_m68k.d[2], 0x8c30);
    M68K_OR16(g_m68k.d[2], 0x8c30);
    M68K_OR16(g_m68k.d[2], 0x8c40);
    M68K_OR16(g_m68k.d[2], 0x8c40);
    M68K_OR16(g_m68k.d[2], 0x8c40);
    M68K_OR16(g_m68k.d[2], 0x8c40);
    M68K_OR16(g_m68k.d[2], 0x8c40);
    M68K_OR16(g_m68k.d[2], 0x8c40);
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $077518-$077528  (7 instructions, 16 bytes) */
void jt_077518(void) {
    /* TODO $077518: dc.w $ff30  [FF 30] */
    { uint32_t _ea = /* UNHANDLED_ADDR: (a0, invalid.w) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $07751E: sbcd.b d7, d0  [81 07] */
    M68K_OR16(g_m68k.d[6], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[2], g_m68k.d[7]);
    /* TODO $077524: dc.w $8940  [89 40] */
    /* TODO $077526: sbcd.b d7, d3  [87 07] */
    /* WARNING: function did not end with RTS */
}

/* $07752C-$07754E  (11 instructions, 34 bytes) */
void jt_07752C(void) {
    /* TODO $07752C: dc.w $ff30  [FF 30] */
    { uint32_t _ea = /* UNHANDLED_ADDR: (a0, invalid.w) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $077532: sbcd -(a0), -(a4), #$8540  [89 08 85 40] */
    M68K_OR8(g_m68k.d[1], g_m68k.d[7]);
    /* TODO $077538: sbcd -(a0), -(a4), #$8240  [89 08 82 40] */
    /* TODO $07753C: sbcd.b d7, d2  [85 07] */
    /* TODO $07753E: sbcd -(a0), -(a4), #$8707  [89 08 87 07] */
    /* TODO $077542: sbcd -(a0), -(a4), #$8707  [89 08 87 07] */
    /* TODO $077546: sbcd -(a0), -(a4), #$8707  [89 08 87 07] */
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_SUBX8(_tmp, _predec8(0)); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $07755E-$077566  (3 instructions, 8 bytes) */
void jt_07755E(void) {
    /* TODO $07755E: dc.w $ff30  [FF 30] */
    { uint32_t _ea = (g_m68k.a[0] + 0x8 + (int16_t)(uint16_t)g_m68k.a[7]); uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $077566-$07756E  (3 instructions, 8 bytes) */
void jt_077566(void) {
    /* TODO $077566: dc.w $ff30  [FF 30] */
    { uint32_t _ea = (g_m68k.a[0] + 0x8 + (int16_t)(uint16_t)g_m68k.a[7]); uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $07757E-$07759E  (10 instructions, 32 bytes) */
void jt_07757E(void) {
    /* TODO $07757E: dc.w $ff30  [FF 30] */
    { uint32_t _ea = (g_m68k.a[0] + 0 + (int32_t)g_m68k.a[0]); uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $077584: dc.w $8740  [87 40] */
    /* TODO $077586: sbcd -(a0), -(a4), #$8209  [89 08 82 09] */
    /* TODO $07758A: dc.w $8540  [85 40] */
    /* TODO $07758C: sbcd -(a0), -(a4), #$8509  [89 08 85 09] */
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    /* TODO $077592: sbcd -(a0), -(a4), #$8709  [89 08 87 09] */
    /* TODO $077596: sbcd -(a0), -(a4), #$8709  [89 08 87 09] */
    /* TODO $07759A: sbcd -(a0), -(a4), #$8709  [89 08 87 09] */
    /* WARNING: function did not end with RTS */
}

/* $0775A2-$0775AC  (3 instructions, 10 bytes) */
void jt_0775A2(void) {
    /* TODO $0775A2: dc.w $ff30  [FF 30] */
    { uint32_t _ea = (g_m68k.a[0] + 0x40 + (int16_t)(uint16_t)g_m68k.a[3]); uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0775A8: sbcd -(a1), -(a0), #$8f40  [81 09 8F 40] */
    /* WARNING: function did not end with RTS */
}

/* $0775C8-$0775CA  (1 instructions, 2 bytes) */
void jt_0775C8(void) {
    /* TODO $0775C8: dc.w $ff30  [FF 30] */
    /* WARNING: function did not end with RTS */
}

/* $0775D2-$0775D4  (1 instructions, 2 bytes) */
void jt_0775D2(void) {
    /* TODO $0775D2: dc.w $ff30  [FF 30] */
    /* WARNING: function did not end with RTS */
}

/* $0775EC-$0775EE  (1 instructions, 2 bytes) */
void jt_0775EC(void) {
    /* TODO $0775EC: dc.w $ff30  [FF 30] */
    /* WARNING: function did not end with RTS */
}

/* $0775F6-$0775F8  (1 instructions, 2 bytes) */
void jt_0775F6(void) {
    /* TODO $0775F6: dc.w $ff30  [FF 30] */
    /* WARNING: function did not end with RTS */
}

/* $077610-$077612  (1 instructions, 2 bytes) */
void jt_077610(void) {
    /* TODO $077610: dc.w $ff30  [FF 30] */
    /* WARNING: function did not end with RTS */
}

/* $07761A-$07761C  (1 instructions, 2 bytes) */
void jt_07761A(void) {
    /* TODO $07761A: dc.w $ff30  [FF 30] */
    /* WARNING: function did not end with RTS */
}

/* $077634-$077670  (15 instructions, 60 bytes) */
void jt_077634(void) {
    M68K_OR8(g_m68k.d[3], bus_read8(g_m68k.a[0] + 0x41 + (int32_t)g_m68k.a[0]));
    M68K_OR8(g_m68k.d[3], bus_read8(g_m68k.a[0] + 0x41 + (int32_t)g_m68k.a[0]));
    M68K_OR8(g_m68k.d[3], bus_read8(g_m68k.a[0] + 0x41 + (int32_t)g_m68k.a[0]));
    M68K_OR8(g_m68k.d[3], bus_read8(g_m68k.a[0] + 0x41 + (int32_t)g_m68k.a[0]));
    { uint32_t _ea = /* UNHANDLED_ADDR: ([a0]) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = /* UNHANDLED_ADDR: ([a0]) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = /* UNHANDLED_ADDR: ([a0]) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = /* UNHANDLED_ADDR: ([a0]) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = /* UNHANDLED_ADDR: ([a0]) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = /* UNHANDLED_ADDR: ([a0]) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = /* UNHANDLED_ADDR: ([a0]) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = /* UNHANDLED_ADDR: ([a0]) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[4], bus_read8(g_m68k.a[0] + 0x41 + (int32_t)g_m68k.a[0]));
    M68K_OR8(g_m68k.d[5], bus_read8(g_m68k.a[0] + 0x41 + (int16_t)(uint16_t)g_m68k.a[0]));
    M68K_OR8(g_m68k.d[5], bus_read8(g_m68k.a[0] + 0x41 + (int16_t)(uint16_t)g_m68k.a[0]));
    /* WARNING: function did not end with RTS */
}

/* $07768C-$0776A0  (5 instructions, 20 bytes) */
void jt_07768C(void) {
    { uint32_t _ea = (g_m68k.a[0] + 0x40 + (int32_t)g_m68k.a[0]); uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[0] + 0x40 + (int32_t)g_m68k.a[0]));
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[0] + 0x40 + (int32_t)g_m68k.a[0]));
    { uint32_t _ea = /* UNHANDLED_ADDR: (a0, invalid.w) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[0] + 0x40 + (int16_t)(uint16_t)g_m68k.a[7]); uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0776A4-$0776AA  (2 instructions, 6 bytes) */
void jt_0776A4(void) {
    /* TODO $0776A4: dc.w $ff30  [FF 30] */
    { uint32_t _ea = (g_m68k.a[0] + 0x40 + (int16_t)(uint16_t)g_m68k.a[6]); uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0776BE-$0776C0  (1 instructions, 2 bytes) */
void jt_0776BE(void) {
    /* TODO $0776BE: dc.w $ff30  [FF 30] */
    /* WARNING: function did not end with RTS */
}

/* $0776C6-$0776C8  (1 instructions, 2 bytes) */
void jt_0776C6(void) {
    /* TODO $0776C6: dc.w $ff30  [FF 30] */
    /* WARNING: function did not end with RTS */
}

/* $0776DE-$077880  (105 instructions, 418 bytes) */
void jt_0776DE(void) {
    M68K_BTST(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[7], 0x78);
    M68K_OR8(g_m68k.d[7], 0xe2);
    M68K_OR8(g_m68k.d[7], 0xe4);
    M68K_OR8(g_m68k.d[7], 0xe6);
    M68K_OR8(g_m68k.d[7], 0xe8);
    M68K_OR8(g_m68k.d[7], 0xea);
    M68K_OR8(g_m68k.d[7], 0xec);
    M68K_OR8(g_m68k.d[7], 0xee);
    M68K_OR8(g_m68k.d[7], 0xf0);
    M68K_OR8(g_m68k.d[7], 0xfe);
    M68K_OR8(g_m68k.d[7], 0x8);
    M68K_OR8(g_m68k.d[7], 0x12);
    M68K_OR8(g_m68k.d[7], 0x20);
    M68K_OR8(g_m68k.d[7], 0x32);
    M68K_OR8(g_m68k.d[7], 0x50);
    M68K_OR8(g_m68k.d[7], 0x6a);
    M68K_OR8(g_m68k.d[7], 0x78);
    M68K_OR8(g_m68k.d[7], 0x7a);
    M68K_OR8(g_m68k.d[7], 0x7c);
    M68K_OR8(g_m68k.d[7], 0x7e);
    M68K_OR8(g_m68k.d[7], 0x84);
    M68K_OR8(g_m68k.d[7], 0x8a);
    M68K_OR8(g_m68k.d[7], 0x90);
    M68K_OR8(g_m68k.d[7], 0x96);
    M68K_OR8(g_m68k.d[7], 0x98);
    M68K_OR8(g_m68k.d[7], 0x9a);
    M68K_OR8(g_m68k.d[7], 0xa0);
    M68K_OR8(g_m68k.d[7], 0xa6);
    M68K_OR8(g_m68k.d[7], 0xa8);
    M68K_OR8(g_m68k.d[7], 0xb2);
    M68K_OR8(g_m68k.d[7], 0xc4);
    M68K_OR8(g_m68k.d[7], 0xce);
    M68K_OR8(g_m68k.d[7], 0xdc);
    M68K_OR8(g_m68k.d[7], 0xde);
    M68K_OR8(g_m68k.d[7], 0xe0);
    M68K_OR8(g_m68k.d[7], 0xea);
    M68K_OR8(g_m68k.d[7], 0xec);
    M68K_OR8(g_m68k.d[7], 0xee);
    M68K_OR8(g_m68k.d[7], 0xf0);
    M68K_OR8(g_m68k.d[7], 0xf2);
    M68K_OR8(g_m68k.d[7], 0xfc);
    M68K_OR8(g_m68k.d[7], 0xfe);
    M68K_OR8(g_m68k.d[7], 0x0);
    M68K_OR8(g_m68k.d[7], 0x2);
    M68K_OR8(g_m68k.d[7], 0x4);
    M68K_OR8(g_m68k.d[7], 0x6);
    M68K_OR8(g_m68k.d[7], 0x18);
    M68K_OR8(g_m68k.d[7], 0x26);
    M68K_OR8(g_m68k.d[7], 0x28);
    M68K_OR8(g_m68k.d[7], 0x2a);
    M68K_OR8(g_m68k.d[7], 0x34);
    M68K_OR8(g_m68k.d[7], 0x36);
    M68K_OR8(g_m68k.d[7], 0x38);
    M68K_OR8(g_m68k.d[7], 0x42);
    M68K_OR8(g_m68k.d[7], 0x44);
    M68K_OR8(g_m68k.d[7], 0x4e);
    M68K_OR8(g_m68k.d[7], 0x5c);
    M68K_OR8(g_m68k.d[7], 0x5e);
    M68K_OR8(g_m68k.d[7], 0x68);
    M68K_OR8(g_m68k.d[7], 0x6a);
    M68K_OR8(g_m68k.d[7], 0x6c);
    M68K_OR8(g_m68k.d[7], 0x7e);
    M68K_OR8(g_m68k.d[7], 0x88);
    M68K_OR8(g_m68k.d[7], 0x8e);
    M68K_OR8(g_m68k.d[7], 0x9c);
    M68K_OR8(g_m68k.d[7], 0xa6);
    M68K_OR8(g_m68k.d[7], 0xac);
    M68K_OR8(g_m68k.d[7], 0xba);
    M68K_OR8(g_m68k.d[7], 0xc0);
    M68K_OR8(g_m68k.d[7], 0xc6);
    M68K_OR8(g_m68k.d[7], 0xd0);
    M68K_OR8(g_m68k.d[7], 0xd2);
    M68K_OR8(g_m68k.d[7], 0xd4);
    M68K_OR8(g_m68k.d[7], 0xea);
    M68K_OR8(g_m68k.d[7], 0xfc);
    M68K_OR8(g_m68k.d[7], 0xfe);
    M68K_OR8(g_m68k.d[7], 0x0);
    M68K_OR8(g_m68k.d[7], 0x2);
    M68K_OR8(g_m68k.d[7], 0x8);
    M68K_OR8(g_m68k.d[7], 0xa);
    M68K_OR8(g_m68k.d[7], 0x14);
    M68K_OR8(g_m68k.d[7], 0x1e);
    M68K_OR8(g_m68k.d[7], 0x24);
    M68K_OR8(g_m68k.d[7], 0x32);
    M68K_OR8(g_m68k.d[7], 0x34);
    M68K_OR8(g_m68k.d[7], 0x36);
    M68K_OR8(g_m68k.d[7], 0x40);
    M68K_OR8(g_m68k.d[7], 0x42);
    M68K_OR8(g_m68k.d[7], 0x44);
    M68K_OR8(g_m68k.d[7], 0x52);
    M68K_OR8(g_m68k.d[7], 0x58);
    M68K_OR8(g_m68k.d[7], 0x5a);
    M68K_OR8(g_m68k.d[7], 0x5c);
    M68K_OR8(g_m68k.d[7], 0x66);
    M68K_OR8(g_m68k.d[7], 0x6c);
    M68K_OR8(g_m68k.d[7], 0x6e);
    M68K_OR8(g_m68k.d[7], 0x78);
    M68K_OR8(g_m68k.d[7], 0x7a);
    M68K_OR8(g_m68k.d[7], 0x7c);
    M68K_OR8(g_m68k.d[7], 0x86);
    M68K_OR8(g_m68k.d[7], 0x88);
    M68K_OR8(g_m68k.d[7], 0x92);
    M68K_OR8(g_m68k.d[7], 0x94);
    M68K_OR8(g_m68k.d[7], 0x96);
    /* WARNING: function did not end with RTS */
}

/* $077880-$077AE4  (153 instructions, 612 bytes) */
void jt_077880(void) {
    M68K_OR8(g_m68k.d[7], 0x98);
    M68K_OR8(g_m68k.d[7], 0xa6);
    M68K_OR8(g_m68k.d[7], 0xb8);
    M68K_OR8(g_m68k.d[7], 0xba);
    M68K_OR8(g_m68k.d[7], 0xbc);
    M68K_OR8(g_m68k.d[7], 0xc6);
    M68K_OR8(g_m68k.d[7], 0x8);
    M68K_OR8(g_m68k.d[7], 0xa);
    M68K_OR8(g_m68k.d[7], 0xd4);
    M68K_OR8(g_m68k.d[7], 0xd6);
    M68K_OR8(g_m68k.d[7], 0xe0);
    M68K_OR8(g_m68k.d[7], 0xe2);
    M68K_OR8(g_m68k.d[7], 0xe4);
    M68K_OR8(g_m68k.d[7], 0xee);
    M68K_OR8(g_m68k.d[7], 0xf8);
    M68K_OR8(g_m68k.d[7], 0xfa);
    M68K_OR8(g_m68k.d[7], 0xfc);
    M68K_OR8(g_m68k.d[7], 0xfe);
    M68K_OR8(g_m68k.d[7], 0x0);
    M68K_OR8(g_m68k.d[7], 0x2);
    M68K_OR8(g_m68k.d[7], 0x4);
    M68K_OR8(g_m68k.d[7], 0x6);
    M68K_OR8(g_m68k.d[7], 0x6c);
    M68K_OR8(g_m68k.d[7], 0x6e);
    M68K_OR8(g_m68k.d[7], 0xc);
    M68K_OR8(g_m68k.d[7], 0x1a);
    M68K_OR8(g_m68k.d[7], 0x34);
    M68K_OR8(g_m68k.d[7], 0x3a);
    M68K_OR8(g_m68k.d[7], 0x3c);
    M68K_OR8(g_m68k.d[7], 0x56);
    M68K_OR8(g_m68k.d[7], 0x64);
    M68K_OR8(g_m68k.d[7], 0x6a);
    M68K_OR8(g_m68k.d[7], 0x80);
    M68K_OR8(g_m68k.d[7], 0x86);
    M68K_OR8(g_m68k.d[7], 0x88);
    M68K_OR8(g_m68k.d[7], 0x8a);
    M68K_OR8(g_m68k.d[7], 0x8c);
    M68K_OR8(g_m68k.d[7], 0x78);
    M68K_OR8(g_m68k.d[7], 0x78);
    M68K_OR8(g_m68k.d[7], 0x78);
    M68K_OR8(g_m68k.d[7], 0xa4);
    M68K_OR8(g_m68k.d[7], 0xb6);
    M68K_OR8(g_m68k.d[7], 0xb8);
    M68K_OR8(g_m68k.d[7], 0xba);
    M68K_OR8(g_m68k.d[7], 0xbc);
    M68K_OR8(g_m68k.d[7], 0xbe);
    M68K_OR8(g_m68k.d[7], 0xc0);
    M68K_OR8(g_m68k.d[7], 0xc2);
    M68K_OR8(g_m68k.d[7], 0xcc);
    M68K_OR8(g_m68k.d[7], 0xd2);
    M68K_OR8(g_m68k.d[7], 0xd4);
    M68K_OR8(g_m68k.d[7], 0xd6);
    M68K_OR8(g_m68k.d[7], 0xd8);
    M68K_OR8(g_m68k.d[7], 0x78);
    M68K_OR8(g_m68k.d[7], 0x78);
    M68K_OR8(g_m68k.d[7], 0x78);
    M68K_OR8(g_m68k.d[7], 0x0);
    M68K_OR8(g_m68k.d[7], 0x2);
    M68K_OR8(g_m68k.d[7], 0xa);
    M68K_OR8(g_m68k.d[7], 0xc);
    M68K_OR8(g_m68k.d[7], 0xe);
    M68K_OR8(g_m68k.d[7], 0xa);
    M68K_OR8(g_m68k.d[7], 0xc);
    M68K_OR8(g_m68k.d[7], 0xe);
    M68K_OR8(g_m68k.d[7], 0x10);
    M68K_OR8(g_m68k.d[7], 0x12);
    M68K_OR8(g_m68k.d[7], 0x14);
    M68K_OR8(g_m68k.d[7], 0x16);
    M68K_OR8(g_m68k.d[7], 0x18);
    M68K_OR8(g_m68k.d[7], 0x78);
    M68K_OR8(g_m68k.d[7], 0x78);
    M68K_OR8(g_m68k.d[7], 0x78);
    M68K_OR8(g_m68k.d[7], 0x20);
    M68K_OR8(g_m68k.d[7], 0x22);
    M68K_OR8(g_m68k.d[7], 0x2a);
    M68K_OR8(g_m68k.d[7], 0x2c);
    M68K_OR8(g_m68k.d[7], 0x2e);
    M68K_OR8(g_m68k.d[7], 0x2a);
    M68K_OR8(g_m68k.d[7], 0x2c);
    M68K_OR8(g_m68k.d[7], 0x2e);
    M68K_OR8(g_m68k.d[7], 0x30);
    M68K_OR8(g_m68k.d[7], 0x78);
    M68K_OR8(g_m68k.d[7], 0x78);
    M68K_OR8(g_m68k.d[7], 0x78);
    M68K_OR8(g_m68k.d[7], 0x78);
    M68K_OR8(g_m68k.d[7], 0x78);
    M68K_OR8(g_m68k.d[7], 0x78);
    M68K_OR8(g_m68k.d[7], 0x78);
    M68K_OR8(g_m68k.d[7], 0x60);
    M68K_OR8(g_m68k.d[7], 0x62);
    M68K_OR8(g_m68k.d[7], 0x64);
    M68K_OR8(g_m68k.d[7], 0x66);
    M68K_OR8(g_m68k.d[7], 0x68);
    M68K_OR8(g_m68k.d[7], 0x78);
    M68K_OR8(g_m68k.d[7], 0x78);
    M68K_OR8(g_m68k.d[7], 0x60);
    M68K_OR8(g_m68k.d[7], 0x62);
    M68K_OR8(g_m68k.d[7], 0x64);
    M68K_OR8(g_m68k.d[7], 0x78);
    M68K_OR8(g_m68k.d[7], 0x78);
    M68K_OR8(g_m68k.d[7], 0x78);
    M68K_OR8(g_m68k.d[7], 0x78);
    M68K_OR8(g_m68k.d[7], 0x78);
    M68K_OR8(g_m68k.d[7], 0x78);
    M68K_OR8(g_m68k.d[7], 0x94);
    M68K_OR8(g_m68k.d[7], 0x9e);
    M68K_OR8(g_m68k.d[7], 0xa0);
    M68K_OR8(g_m68k.d[7], 0xaa);
    M68K_OR8(g_m68k.d[7], 0xac);
    M68K_OR8(g_m68k.d[7], 0x78);
    M68K_OR8(g_m68k.d[7], 0x78);
    M68K_OR8(g_m68k.d[7], 0x94);
    M68K_OR8(g_m68k.d[7], 0x9e);
    M68K_OR8(g_m68k.d[7], 0xa0);
    M68K_OR8(g_m68k.d[7], 0x78);
    M68K_OR8(g_m68k.d[7], 0x78);
    M68K_OR8(g_m68k.d[7], 0x78);
    M68K_OR8(g_m68k.d[7], 0x78);
    M68K_OR8(g_m68k.d[7], 0x78);
    M68K_OR8(g_m68k.d[7], 0x78);
    M68K_OR8(g_m68k.d[7], 0xd4);
    M68K_OR8(g_m68k.d[7], 0xd6);
    M68K_OR8(g_m68k.d[7], 0xd8);
    M68K_OR8(g_m68k.d[7], 0xda);
    M68K_OR8(g_m68k.d[7], 0xdc);
    M68K_OR8(g_m68k.d[7], 0x78);
    M68K_OR8(g_m68k.d[7], 0x78);
    M68K_OR8(g_m68k.d[7], 0xd4);
    M68K_OR8(g_m68k.d[7], 0xd6);
    M68K_OR8(g_m68k.d[7], 0xd8);
    M68K_OR8(g_m68k.d[7], 0x64);
    M68K_OR8(g_m68k.d[7], 0x6a);
    M68K_OR8(g_m68k.d[7], 0x80);
    M68K_OR8(g_m68k.d[7], 0x78);
    M68K_OR8(g_m68k.d[7], 0x10);
    M68K_OR8(g_m68k.d[7], 0xe2);
    M68K_OR8(g_m68k.d[7], 0xf4);
    M68K_OR8(g_m68k.d[7], 0xf6);
    M68K_OR8(g_m68k.d[7], 0xf8);
    M68K_OR8(g_m68k.d[7], 0x78);
    M68K_OR8(g_m68k.d[7], 0x78);
    M68K_OR8(g_m68k.d[7], 0x78);
    M68K_OR8(g_m68k.d[7], 0x78);
    M68K_OR8(g_m68k.d[7], 0xf4);
    M68K_OR8(g_m68k.d[7], 0xf6);
    M68K_OR8(g_m68k.d[7], 0xf8);
    M68K_OR8(g_m68k.d[7], 0xc0);
    M68K_OR8(g_m68k.d[7], 0xc2);
    M68K_OR8(g_m68k.d[7], 0xcc);
    M68K_OR8(g_m68k.d[7], 0x78);
    M68K_OR8(g_m68k.d[7], 0x30);
    M68K_OR8(g_m68k.d[7], 0x7a);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}
