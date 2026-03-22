/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $0FABC2 - $0FB532 */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

/* $0FABC2-$0FABE2  (10 instructions, 32 bytes) */
void jt_0FABC2(void) {
    /* TODO $0FABC2: dc.w $ff20  [FF 20] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0FABC6: sbcd -(a0), -(a4), #$8740  [89 08 87 40] */
    /* TODO $0FABCA: sbcd -(a0), -(a4), #$8209  [89 08 82 09] */
    /* TODO $0FABCE: dc.w $8540  [85 40] */
    /* TODO $0FABD0: sbcd -(a0), -(a4), #$8509  [89 08 85 09] */
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    /* TODO $0FABD6: sbcd -(a0), -(a4), #$8709  [89 08 87 09] */
    /* TODO $0FABDA: sbcd -(a0), -(a4), #$8709  [89 08 87 09] */
    /* TODO $0FABDE: sbcd -(a0), -(a4), #$8709  [89 08 87 09] */
    /* WARNING: function did not end with RTS */
}

/* $0FABE6-$0FABF0  (4 instructions, 10 bytes) */
void jt_0FABE6(void) {
    /* TODO $0FABE6: dc.w $ff20  [FF 20] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_CMP16(g_m68k.d[0], g_m68k.d[0]);
    /* TODO $0FABEC: sbcd -(a1), -(a0), #$8f40  [81 09 8F 40] */
    /* WARNING: function did not end with RTS */
}

/* $0FAC0C-$0FAC14  (4 instructions, 8 bytes) */
void jt_0FAC0C(void) {
    /* TODO $0FAC0C: dc.w $ff10  [FF 10] */
    /* TODO $0FAC0E: dc.w $ff10  [FF 10] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[0]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0FAC14-$0FAC76  (33 instructions, 98 bytes) */
void jt_0FAC14(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0FAC16: dc.w $8540  [85 40] */
    M68K_OR8(g_m68k.d[5], bus_read8(0x008110));
    /* TODO $0FAC1C: dc.w $8540  [85 40] */
    M68K_OR8(g_m68k.d[5], bus_read8(0x008110));
    /* TODO $0FAC22: dc.w $8540  [85 40] */
    M68K_OR8(g_m68k.d[5], bus_read8(0x008110));
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = 0x008110; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = 0x008110; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $0FAC34: dc.w $8740  [87 40] */
    M68K_OR8(g_m68k.d[4], bus_read8(0x008110));
    M68K_OR16(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = 0x008110; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = 0x008110; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* TODO $0FAC46: dc.w $8940  [89 40] */
    M68K_OR8(g_m68k.d[3], bus_read8(0x008110));
    M68K_OR16(g_m68k.d[5], g_m68k.d[0]);
    { uint32_t _ea = 0x008110; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[5], g_m68k.d[0]);
    { uint32_t _ea = 0x008110; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    /* TODO $0FAC58: dc.w $8b40  [8B 40] */
    M68K_OR8(g_m68k.d[2], bus_read8(0x008110));
    /* TODO $0FAC5E: dc.w $8b40  [8B 40] */
    M68K_OR8(g_m68k.d[2], bus_read8(0x008110));
    /* TODO $0FAC64: dc.w $8b40  [8B 40] */
    M68K_OR8(g_m68k.d[2], bus_read8(0x008110));
    M68K_OR16(g_m68k.d[6], g_m68k.d[0]);
    { uint32_t _ea = 0x008110; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[6], g_m68k.d[0]);
    { uint32_t _ea = 0x008000; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0FAC76-$0FAC7E  (4 instructions, 8 bytes) */
void jt_0FAC76(void) {
    /* TODO $0FAC76: dc.w $ff10  [FF 10] */
    /* TODO $0FAC78: dc.w $ff10  [FF 10] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[0]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0FAC7E-$0FACE0  (33 instructions, 98 bytes) */
void jt_0FAC7E(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[6], g_m68k.d[0]);
    { uint32_t _ea = 0x008110; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[6], g_m68k.d[0]);
    { uint32_t _ea = 0x008110; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[6], g_m68k.d[0]);
    { uint32_t _ea = 0x008110; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[6], g_m68k.d[0]);
    { uint32_t _ea = 0x008110; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[6], g_m68k.d[0]);
    { uint32_t _ea = 0x008110; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    /* TODO $0FAC9E: dc.w $8b40  [8B 40] */
    M68K_OR8(g_m68k.d[2], bus_read8(0x008110));
    /* TODO $0FACA4: dc.w $8b40  [8B 40] */
    M68K_OR8(g_m68k.d[2], bus_read8(0x008110));
    M68K_OR16(g_m68k.d[5], g_m68k.d[0]);
    { uint32_t _ea = 0x008110; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    /* TODO $0FACB0: dc.w $8940  [89 40] */
    M68K_OR8(g_m68k.d[3], bus_read8(0x008110));
    M68K_OR16(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = 0x008110; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* TODO $0FACBC: dc.w $8740  [87 40] */
    M68K_OR8(g_m68k.d[4], bus_read8(0x008110));
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = 0x008110; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = 0x008110; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $0FACCE: dc.w $8540  [85 40] */
    M68K_OR8(g_m68k.d[5], bus_read8(0x008110));
    /* TODO $0FACD4: dc.w $8540  [85 40] */
    M68K_OR8(g_m68k.d[5], bus_read8(0x008110));
    /* TODO $0FACDA: dc.w $8540  [85 40] */
    M68K_OR8(g_m68k.d[5], bus_read8(0x008000));
    /* WARNING: function did not end with RTS */
}

/* $0FACE0-$0FAD42  (33 instructions, 98 bytes) */
void jt_0FACE0(void) {
    M68K_OR8(g_m68k.d[5], bus_read8(0x008540));
    /* TODO $0FACE4: sbcd.b d0, d0  [81 00] */
    M68K_OR8(g_m68k.d[5], bus_read8(0x008540));
    /* TODO $0FACEA: sbcd.b d0, d0  [81 00] */
    M68K_OR8(g_m68k.d[5], bus_read8(0x008540));
    /* TODO $0FACF0: sbcd.b d0, d0  [81 00] */
    M68K_OR8(g_m68k.d[5], bus_read8(0x008540));
    /* TODO $0FACF6: sbcd.b d0, d0  [81 00] */
    M68K_OR8(g_m68k.d[5], bus_read8(0x008540));
    /* TODO $0FACFC: sbcd.b d0, d0  [81 00] */
    M68K_OR8(g_m68k.d[5], bus_read8(0x008540));
    /* TODO $0FAD02: sbcd.b d0, d0  [81 00] */
    M68K_OR8(g_m68k.d[5], bus_read8(0x008540));
    /* TODO $0FAD08: sbcd.b d0, d0  [81 00] */
    M68K_OR8(g_m68k.d[5], bus_read8(0x008540));
    /* TODO $0FAD0E: sbcd.b d0, d0  [81 00] */
    M68K_OR8(g_m68k.d[5], bus_read8(0x008540));
    /* TODO $0FAD14: sbcd.b d0, d0  [81 00] */
    M68K_OR8(g_m68k.d[5], bus_read8(0x008540));
    /* TODO $0FAD1A: sbcd.b d0, d0  [81 00] */
    M68K_OR8(g_m68k.d[5], bus_read8(0x008540));
    /* TODO $0FAD20: sbcd.b d0, d0  [81 00] */
    M68K_OR8(g_m68k.d[5], bus_read8(0x008540));
    /* TODO $0FAD26: sbcd.b d0, d0  [81 00] */
    M68K_OR8(g_m68k.d[5], bus_read8(0x008540));
    /* TODO $0FAD2C: sbcd.b d0, d0  [81 00] */
    M68K_OR8(g_m68k.d[5], bus_read8(0x008540));
    /* TODO $0FAD32: sbcd.b d0, d0  [81 00] */
    M68K_OR8(g_m68k.d[5], bus_read8(0x008540));
    /* TODO $0FAD38: sbcd.b d0, d0  [81 00] */
    M68K_OR8(g_m68k.d[5], bus_read8(0x008540));
    /* TODO $0FAD3E: sbcd.b d0, d0  [81 00] */
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0FAD4A-$0FADAC  (33 instructions, 98 bytes) */
void jt_0FAD4A(void) {
    M68K_OR8(g_m68k.d[5], bus_read8(0x008540));
    /* TODO $0FAD4E: sbcd.b d0, d0  [81 00] */
    M68K_OR8(g_m68k.d[5], bus_read8(0x008540));
    /* TODO $0FAD54: sbcd.b d0, d0  [81 00] */
    M68K_OR8(g_m68k.d[5], bus_read8(0x008540));
    /* TODO $0FAD5A: sbcd.b d0, d0  [81 00] */
    M68K_OR8(g_m68k.d[5], bus_read8(0x008540));
    /* TODO $0FAD60: sbcd.b d0, d0  [81 00] */
    M68K_OR8(g_m68k.d[5], bus_read8(0x008540));
    /* TODO $0FAD66: sbcd.b d0, d0  [81 00] */
    M68K_OR8(g_m68k.d[5], bus_read8(0x008540));
    /* TODO $0FAD6C: sbcd.b d0, d0  [81 00] */
    M68K_OR8(g_m68k.d[5], bus_read8(0x008540));
    /* TODO $0FAD72: sbcd.b d0, d0  [81 00] */
    M68K_OR8(g_m68k.d[5], bus_read8(0x008540));
    /* TODO $0FAD78: sbcd.b d0, d0  [81 00] */
    M68K_OR8(g_m68k.d[5], bus_read8(0x008540));
    /* TODO $0FAD7E: sbcd.b d0, d0  [81 00] */
    M68K_OR8(g_m68k.d[5], bus_read8(0x008540));
    /* TODO $0FAD84: sbcd.b d0, d0  [81 00] */
    M68K_OR8(g_m68k.d[5], bus_read8(0x008540));
    /* TODO $0FAD8A: sbcd.b d0, d0  [81 00] */
    M68K_OR8(g_m68k.d[5], bus_read8(0x008540));
    /* TODO $0FAD90: sbcd.b d0, d0  [81 00] */
    M68K_OR8(g_m68k.d[5], bus_read8(0x008540));
    /* TODO $0FAD96: sbcd.b d0, d0  [81 00] */
    M68K_OR8(g_m68k.d[5], bus_read8(0x008540));
    /* TODO $0FAD9C: sbcd.b d0, d0  [81 00] */
    M68K_OR8(g_m68k.d[5], bus_read8(0x008540));
    /* TODO $0FADA2: sbcd.b d0, d0  [81 00] */
    M68K_OR8(g_m68k.d[5], bus_read8(0x008540));
    /* TODO $0FADA8: sbcd.b d0, d0  [81 00] */
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0FADC4-$0FADC6  (1 instructions, 2 bytes) */
void jt_0FADC4(void) {
    M68K_OR16(g_m68k.d[6], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0FAE06-$0FAE48  (17 instructions, 66 bytes) */
void jt_0FAE06(void) {
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

/* $0FAE48-$0FAE72  (11 instructions, 42 bytes) */
void jt_0FAE48(void) {
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

/* $0FAE8A-$0FAECC  (17 instructions, 66 bytes) */
void jt_0FAE8A(void) {
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

/* $0FAEDC-$0FAEEC  (7 instructions, 16 bytes) */
void jt_0FAEDC(void) {
    /* TODO $0FAEDC: dc.w $ff30  [FF 30] */
    { uint32_t _ea = /* UNHANDLED_ADDR: (a0, invalid.w) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0FAEE2: sbcd.b d7, d0  [81 07] */
    M68K_OR16(g_m68k.d[6], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[2], g_m68k.d[7]);
    /* TODO $0FAEE8: dc.w $8940  [89 40] */
    /* TODO $0FAEEA: sbcd.b d7, d3  [87 07] */
    /* WARNING: function did not end with RTS */
}

/* $0FAEF0-$0FAF12  (11 instructions, 34 bytes) */
void jt_0FAEF0(void) {
    /* TODO $0FAEF0: dc.w $ff30  [FF 30] */
    { uint32_t _ea = /* UNHANDLED_ADDR: (a0, invalid.w) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0FAEF6: sbcd -(a0), -(a4), #$8540  [89 08 85 40] */
    M68K_OR8(g_m68k.d[1], g_m68k.d[7]);
    /* TODO $0FAEFC: sbcd -(a0), -(a4), #$8240  [89 08 82 40] */
    /* TODO $0FAF00: sbcd.b d7, d2  [85 07] */
    /* TODO $0FAF02: sbcd -(a0), -(a4), #$8707  [89 08 87 07] */
    /* TODO $0FAF06: sbcd -(a0), -(a4), #$8707  [89 08 87 07] */
    /* TODO $0FAF0A: sbcd -(a0), -(a4), #$8707  [89 08 87 07] */
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_SUBX8(_tmp, _predec8(0)); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0FAF22-$0FAF2A  (3 instructions, 8 bytes) */
void jt_0FAF22(void) {
    /* TODO $0FAF22: dc.w $ff30  [FF 30] */
    { uint32_t _ea = (g_m68k.a[0] + 0x8 + (int16_t)(uint16_t)g_m68k.a[7]); uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0FAF2A-$0FAF32  (3 instructions, 8 bytes) */
void jt_0FAF2A(void) {
    /* TODO $0FAF2A: dc.w $ff30  [FF 30] */
    { uint32_t _ea = (g_m68k.a[0] + 0x8 + (int16_t)(uint16_t)g_m68k.a[7]); uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0FAF42-$0FAF62  (10 instructions, 32 bytes) */
void jt_0FAF42(void) {
    /* TODO $0FAF42: dc.w $ff30  [FF 30] */
    { uint32_t _ea = (g_m68k.a[0] + 0 + (int32_t)g_m68k.a[0]); uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0FAF48: dc.w $8740  [87 40] */
    /* TODO $0FAF4A: sbcd -(a0), -(a4), #$8209  [89 08 82 09] */
    /* TODO $0FAF4E: dc.w $8540  [85 40] */
    /* TODO $0FAF50: sbcd -(a0), -(a4), #$8509  [89 08 85 09] */
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    /* TODO $0FAF56: sbcd -(a0), -(a4), #$8709  [89 08 87 09] */
    /* TODO $0FAF5A: sbcd -(a0), -(a4), #$8709  [89 08 87 09] */
    /* TODO $0FAF5E: sbcd -(a0), -(a4), #$8709  [89 08 87 09] */
    /* WARNING: function did not end with RTS */
}

/* $0FAF66-$0FAF70  (3 instructions, 10 bytes) */
void jt_0FAF66(void) {
    /* TODO $0FAF66: dc.w $ff30  [FF 30] */
    { uint32_t _ea = (g_m68k.a[0] + 0x40 + (int16_t)(uint16_t)g_m68k.a[3]); uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0FAF6C: sbcd -(a1), -(a0), #$8f40  [81 09 8F 40] */
    /* WARNING: function did not end with RTS */
}

/* $0FAF8C-$0FAF8E  (1 instructions, 2 bytes) */
void jt_0FAF8C(void) {
    /* TODO $0FAF8C: dc.w $ff30  [FF 30] */
    /* WARNING: function did not end with RTS */
}

/* $0FAF96-$0FAF98  (1 instructions, 2 bytes) */
void jt_0FAF96(void) {
    /* TODO $0FAF96: dc.w $ff30  [FF 30] */
    /* WARNING: function did not end with RTS */
}

/* $0FAFB0-$0FAFB2  (1 instructions, 2 bytes) */
void jt_0FAFB0(void) {
    /* TODO $0FAFB0: dc.w $ff30  [FF 30] */
    /* WARNING: function did not end with RTS */
}

/* $0FAFBA-$0FAFBC  (1 instructions, 2 bytes) */
void jt_0FAFBA(void) {
    /* TODO $0FAFBA: dc.w $ff30  [FF 30] */
    /* WARNING: function did not end with RTS */
}

/* $0FAFD4-$0FAFD6  (1 instructions, 2 bytes) */
void jt_0FAFD4(void) {
    /* TODO $0FAFD4: dc.w $ff30  [FF 30] */
    /* WARNING: function did not end with RTS */
}

/* $0FAFDE-$0FAFE0  (1 instructions, 2 bytes) */
void jt_0FAFDE(void) {
    /* TODO $0FAFDE: dc.w $ff30  [FF 30] */
    /* WARNING: function did not end with RTS */
}

/* $0FAFF8-$0FB034  (15 instructions, 60 bytes) */
void jt_0FAFF8(void) {
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

/* $0FB05E-$0FB090  (13 instructions, 50 bytes) */
void jt_0FB05E(void) {
    M68K_OR16(g_m68k.d[5], g_m68k.d[1]);
    M68K_OR8(g_m68k.d[3], bus_read8(g_m68k.a[0] + 0x41 + (int32_t)g_m68k.a[0]));
    M68K_OR8(g_m68k.d[3], bus_read8(g_m68k.a[0] + 0x41 + (int32_t)g_m68k.a[0]));
    M68K_OR8(g_m68k.d[3], bus_read8(g_m68k.a[0] + 0x41 + (int32_t)g_m68k.a[0]));
    M68K_OR8(g_m68k.d[3], /* UNHANDLED_READ: ([a0]) */ 0);
    { uint32_t _ea = /* UNHANDLED_ADDR: ([a0]) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = /* UNHANDLED_ADDR: ([a0]) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = /* UNHANDLED_ADDR: ([a0]) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = /* UNHANDLED_ADDR: ([a0]) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[0] + 0x41 + (int16_t)(uint16_t)g_m68k.a[0]); uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[7], /* UNHANDLED_READ: ([a0]) */ 0);
    { uint32_t _ea = /* UNHANDLED_ADDR: ([a0]) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = /* UNHANDLED_ADDR: ([a0]) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0FB0A6-$0FB0A8  (1 instructions, 2 bytes) */
void jt_0FB0A6(void) {
    /* TODO $0FB0A6: dc.w $ff30  [FF 30] */
    /* WARNING: function did not end with RTS */
}

/* $0FB0AE-$0FB0B0  (1 instructions, 2 bytes) */
void jt_0FB0AE(void) {
    /* TODO $0FB0AE: dc.w $ff30  [FF 30] */
    /* WARNING: function did not end with RTS */
}

/* $0FB0C6-$0FB0C8  (1 instructions, 2 bytes) */
void jt_0FB0C6(void) {
    M68K_BTST(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0FB4CA-$0FB4CE  (1 instructions, 4 bytes) */
void jt_0FB4CA(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0FB4CC-$0FB4D0  (1 instructions, 4 bytes) */
void jt_0FB4CC(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0FB4CE-$0FB4D2  (1 instructions, 4 bytes) */
void jt_0FB4CE(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0FB4D0-$0FB4D4  (1 instructions, 4 bytes) */
void jt_0FB4D0(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0FB4D2-$0FB4D6  (1 instructions, 4 bytes) */
void jt_0FB4D2(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0FB4D4-$0FB4D8  (1 instructions, 4 bytes) */
void jt_0FB4D4(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0FB4D6-$0FB4DA  (1 instructions, 4 bytes) */
void jt_0FB4D6(void) {
    M68K_OR8(g_m68k.d[0], 0x2e);
    /* WARNING: function did not end with RTS */
}

/* $0FB4D8-$0FB4E0  (3 instructions, 8 bytes) */
void jt_0FB4D8(void) {
    { uint32_t _ea = (g_m68k.a[6] + 0x0); uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xd0); bus_write8(_ea, _tmp); }
    g_m68k.a[0] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[0]));
    M68K_OR8(g_m68k.d[0], 0x2a);
    /* WARNING: function did not end with RTS */
}

/* $0FB4DE-$0FB4E8  (4 instructions, 10 bytes) */
void jt_0FB4DE(void) {
    { uint32_t _ea = (g_m68k.a[2] + 0x2c); uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x98); bus_write8(_ea, _tmp); }
    g_m68k.d[0] = (uint32_t)(int32_t)(int8_t)(0x98); M68K_TST32(g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[4] + 0x0); uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xa8); bus_write8(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[0] + 0x0)); bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0FB4E8-$0FB4F4  (3 instructions, 12 bytes) */
void jt_0FB4E8(void) {
    { uint32_t _ea = (g_m68k.a[2] + 0x28); uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x88); bus_write8(_ea, _tmp); }
    M68K_ROR32(g_m68k.d[0], 0x8);
    M68K_OR8(g_m68k.d[0], 0x7);
    /* WARNING: function did not end with RTS */
}

/* $0FB4F2-$0FB4FA  (3 instructions, 8 bytes) */
void jt_0FB4F2(void) {
    M68K_OR8(g_m68k.d[7], 0xf0);
    g_m68k.d[4] = (uint32_t)(int32_t)(int8_t)(0xf0); M68K_TST32(g_m68k.d[4]);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0FB4F8-$0FB4FC  (1 instructions, 4 bytes) */
void jt_0FB4F8(void) {
    M68K_OR8(g_m68k.d[0], 0x2c);
    /* WARNING: function did not end with RTS */
}

/* $0FB4FA-$0FB506  (5 instructions, 12 bytes) */
void jt_0FB4FA(void) {
    { uint32_t _ea = (g_m68k.a[4] + 0x2a); uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x48); bus_write8(_ea, _tmp); }
    /* TODO $0FB4FC: dc.w $4848  [48 48] */
    { uint32_t _ea = (g_m68k.a[2] + 0x0); uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x58); bus_write8(_ea, _tmp); }
    /* TODO $0FB500: dc.w $f058  [F0 58] */
    M68K_OR8(g_m68k.d[0], 0x26);
    /* WARNING: function did not end with RTS */
}

/* $0FB504-$0FB510  (4 instructions, 12 bytes) */
void jt_0FB504(void) {
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x48); bus_write8(_ea, _tmp); }
    /* TODO $0FB506: dc.w $4848  [48 48] */
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x58); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0FB50E-$0FB512  (1 instructions, 4 bytes) */
void jt_0FB50E(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0FB510-$0FB514  (1 instructions, 4 bytes) */
void jt_0FB510(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0FB512-$0FB516  (1 instructions, 4 bytes) */
void jt_0FB512(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0FB514-$0FB518  (1 instructions, 4 bytes) */
void jt_0FB514(void) {
    M68K_OR8(g_m68k.d[0], 0xfa);
    /* WARNING: function did not end with RTS */
}

/* $0FB52A-$0FB52E  (1 instructions, 4 bytes) */
void jt_0FB52A(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0FB52C-$0FB530  (1 instructions, 4 bytes) */
void jt_0FB52C(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0FB52E-$0FB532  (1 instructions, 4 bytes) */
void jt_0FB52E(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}
