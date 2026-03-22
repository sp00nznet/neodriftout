/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $07722C - $077BA8 */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

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

/* $077AE2-$077AE6  (1 instructions, 4 bytes) */
void jt_077AE2(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $077AE4-$077AE8  (1 instructions, 4 bytes) */
void jt_077AE4(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $077AE6-$077AEA  (1 instructions, 4 bytes) */
void jt_077AE6(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $077AE8-$077AEC  (1 instructions, 4 bytes) */
void jt_077AE8(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $077AEA-$077AEE  (1 instructions, 4 bytes) */
void jt_077AEA(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $077AEC-$077AF0  (1 instructions, 4 bytes) */
void jt_077AEC(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $077AEE-$077AF2  (1 instructions, 4 bytes) */
void jt_077AEE(void) {
    M68K_OR8(g_m68k.d[0], 0x20);
    /* WARNING: function did not end with RTS */
}

/* $077AF0-$077B00  (5 instructions, 16 bytes) */
void jt_077AF0(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xc0); bus_write8(_ea, _tmp); }
    g_m68k.a[4] += (int16_t)(uint16_t)(g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xa8); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xd8); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x1c);
    /* WARNING: function did not end with RTS */
}

/* $077AFE-$077B0A  (4 instructions, 12 bytes) */
void jt_077AFE(void) {
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x90); bus_write8(_ea, _tmp); }
    g_m68k.d[0] = (uint32_t)(int32_t)(int8_t)(0x90); M68K_TST32(g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x98); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x26);
    /* WARNING: function did not end with RTS */
}

/* $077B08-$077B14  (4 instructions, 12 bytes) */
void jt_077B08(void) {
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x98); bus_write8(_ea, _tmp); }
    M68K_AND32(g_m68k.d[0], _postinc32(0));
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x98); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x26);
    /* WARNING: function did not end with RTS */
}

/* $077B12-$077B22  (6 instructions, 16 bytes) */
void jt_077B12(void) {
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xf0); bus_write8(_ea, _tmp); }
    M68K_DIVU(g_m68k.d[4], bus_read16(g_m68k.a[0] + 0x20 + (int16_t)(uint16_t)g_m68k.d[0]));
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xc0); bus_write8(_ea, _tmp); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(m68k_get_sr()));
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xa8); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x26);
    /* WARNING: function did not end with RTS */
}

/* $077B20-$077B2C  (3 instructions, 12 bytes) */
void jt_077B20(void) {
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xc0); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xd0); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xf0); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $077B32-$077B46  (6 instructions, 20 bytes) */
void jt_077B32(void) {
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x68); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x50); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x58); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x60); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x60); bus_write8(_ea, _tmp); }
loc_077B44:
    M68K_ASR16(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $077B50-$077B6C  (7 instructions, 28 bytes) */
void jt_077B50(void) {
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x68); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x58); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x48); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x68); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[2], 0xb8d0);
    M68K_OR16(g_m68k.d[2], 0x58c0);
    M68K_OR8(g_m68k.d[0], 0x1e);
    /* WARNING: function did not end with RTS */
}

/* $077B6A-$077B7A  (5 instructions, 16 bytes) */
void jt_077B6A(void) {
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x80); bus_write8(_ea, _tmp); }
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x98); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[2], 0xf8);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $077B78-$077B7C  (1 instructions, 4 bytes) */
void jt_077B78(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $077B7A-$077B7E  (1 instructions, 4 bytes) */
void jt_077B7A(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $077B7C-$077B96  (8 instructions, 26 bytes) */
void jt_077B7C(void) {
    M68K_OR8(g_m68k.d[0], 0xcc);
    M68K_SUB32(g_m68k.d[0], _predec32(0));
    M68K_OR8(g_m68k.d[0], 0xd5);
    M68K_ADD32(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0xd5);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[0], _mv); M68K_TST16(_mv); }
    M68K_OR8(g_m68k.d[0], 0xcd);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0])); bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $077B96-$077B9A  (1 instructions, 4 bytes) */
void jt_077B96(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $077B98-$077BA8  (5 instructions, 16 bytes) */
void jt_077B98(void) {
    M68K_OR8(g_m68k.d[0], 0xe4);
    M68K_SUB32(g_m68k.d[4], _predec32(0));
    M68K_OR8(g_m68k.d[0], 0xe3);
    if (M68K_CC_VC) { func_table_call(0x077B44); return; }
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}
