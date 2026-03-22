/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $0F8498 - $0F8EB6 */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

/* $0F8498-$0F84A0  (4 instructions, 8 bytes) */
void jt_0F8498(void) {
    /* TODO $0F8498: dc.w $ff16  [FF 16] */
    /* TODO $0F849A: dc.w $ff16  [FF 16] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[6]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F84A0-$0F84B2  (9 instructions, 18 bytes) */
void jt_0F84A0(void) {
    /* TODO $0F84A0: roxl.b #$6, d6  [ED 16] */
    /* TODO $0F84A2: dc.w $8340  [83 40] */
    M68K_OR8(g_m68k.d[5], bus_read8(g_m68k.a[6]));
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* TODO $0F84AA: dc.w $8940  [89 40] */
    M68K_OR8(g_m68k.d[2], bus_read8(g_m68k.a[6]));
    M68K_OR16(g_m68k.d[6], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0F84C4-$0F84D6  (9 instructions, 18 bytes) */
void jt_0F84C4(void) {
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    /* TODO $0F84C6: dc.w $8140  [81 40] */
    M68K_OR8(g_m68k.d[6], bus_read8(g_m68k.a[6]));
    M68K_OR16(g_m68k.d[2], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $0F84CE: dc.w $8740  [87 40] */
    M68K_OR8(g_m68k.d[3], bus_read8(g_m68k.a[6]));
    M68K_OR16(g_m68k.d[5], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0F8524-$0F852C  (4 instructions, 8 bytes) */
void jt_0F8524(void) {
    /* TODO $0F8524: dc.w $ff16  [FF 16] */
    /* TODO $0F8526: dc.w $ff16  [FF 16] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[6]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F852C-$0F8544  (12 instructions, 24 bytes) */
void jt_0F852C(void) {
    /* TODO $0F852C: dc.w $ff16  [FF 16] */
    M68K_AND8(g_m68k.d[0], bus_read8(g_m68k.a[6]));
    /* TODO $0F8530: dc.w $8140  [81 40] */
    M68K_OR8(g_m68k.d[6], bus_read8(g_m68k.a[6]));
    M68K_OR16(g_m68k.d[2], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $0F8538: dc.w $8740  [87 40] */
    M68K_OR8(g_m68k.d[3], bus_read8(g_m68k.a[6]));
    M68K_OR16(g_m68k.d[5], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    /* TODO $0F8540: dc.w $8d40  [8D 40] */
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F8544-$0F854C  (4 instructions, 8 bytes) */
void jt_0F8544(void) {
    /* TODO $0F8544: dc.w $ff16  [FF 16] */
    /* TODO $0F8546: dc.w $ff16  [FF 16] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[6]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F854C-$0F8554  (4 instructions, 8 bytes) */
void jt_0F854C(void) {
    /* TODO $0F854C: dc.w $ff16  [FF 16] */
    /* TODO $0F854E: dc.w $ff16  [FF 16] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[6]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F8554-$0F8566  (9 instructions, 18 bytes) */
void jt_0F8554(void) {
    /* TODO $0F8554: roxr.b #$7, d6  [EE 16] */
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    /* TODO $0F855A: dc.w $8540  [85 40] */
    M68K_OR8(g_m68k.d[4], bus_read8(g_m68k.a[6]));
    M68K_OR16(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    /* TODO $0F8562: dc.w $8b40  [8B 40] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[6]));
    /* WARNING: function did not end with RTS */
}

/* $0F8578-$0F858A  (9 instructions, 18 bytes) */
void jt_0F8578(void) {
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    /* TODO $0F857A: dc.w $8340  [83 40] */
    M68K_OR8(g_m68k.d[5], bus_read8(g_m68k.a[6]));
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* TODO $0F8582: dc.w $8940  [89 40] */
    M68K_OR8(g_m68k.d[2], bus_read8(g_m68k.a[6]));
    M68K_OR16(g_m68k.d[6], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0F85DE-$0F85E2  (1 instructions, 4 bytes) */
void jt_0F85DE(void) {
    /* TODO $0F85DE: sbcd -(a6), -(a6), #$8306  [8D 0E 83 06] */
    /* WARNING: function did not end with RTS */
}

/* $0F868A-$0F869C  (9 instructions, 18 bytes) */
void jt_0F868A(void) {
    /* TODO $0F868A: dc.w $8d40  [8D 40] */
    /* TODO $0F868C: sbcd.b d6, d1  [83 06] */
    M68K_OR16(g_m68k.d[5], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[3], g_m68k.d[6]);
    /* TODO $0F8692: dc.w $8740  [87 40] */
    /* TODO $0F8694: sbcd.b d6, d4  [89 06] */
    M68K_OR16(g_m68k.d[2], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[6], g_m68k.d[6]);
    /* TODO $0F869A: dc.w $8140  [81 40] */
    /* WARNING: function did not end with RTS */
}

/* $0F86DA-$0F86DE  (2 instructions, 4 bytes) */
void jt_0F86DA(void) {
    /* TODO $0F86DA: roxr.b #$8, d4  [E0 14] */
    /* TODO $0F86DC: dc.w $ff12  [FF 12] */
    /* WARNING: function did not end with RTS */
}

/* $0F86E2-$0F86F6  (10 instructions, 20 bytes) */
void jt_0F86E2(void) {
    M68K_OR8(g_m68k.d[5], bus_read8(g_m68k.a[4]));
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $0F86E8: dc.w $8740  [87 40] */
    M68K_OR8(g_m68k.d[4], bus_read8(g_m68k.a[4]));
    M68K_OR16(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* TODO $0F86F0: dc.w $8940  [89 40] */
    M68K_OR8(g_m68k.d[3], bus_read8(g_m68k.a[4]));
    /* TODO $0F86F4: dc.w $8940  [89 40] */
    /* WARNING: function did not end with RTS */
}

/* $0F8744-$0F8748  (2 instructions, 4 bytes) */
void jt_0F8744(void) {
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[2]));
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F87A6-$0F87A8  (1 instructions, 2 bytes) */
void jt_0F87A6(void) {
    /* TODO $0F87A6: dc.w $8340  [83 40] */
    /* WARNING: function did not end with RTS */
}

/* $0F8814-$0F8852  (23 instructions, 62 bytes) */
void jt_0F8814(void) {
    /* TODO $0F8814: dc.w $8d40  [8D 40] */
    /* TODO $0F8816: sbcd.b d6, d1  [83 06] */
    M68K_OR16(g_m68k.d[5], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[3], g_m68k.d[6]);
    M68K_OR16(g_m68k.d[4], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[4], g_m68k.d[6]);
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[5], g_m68k.d[6]);
    M68K_OR16(g_m68k.d[2], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[6], g_m68k.d[6]);
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[7], g_m68k.d[6]);
    /* TODO $0F882C: dc.w $8140  [81 40] */
    M68K_SUBX8(g_m68k.d[7], g_m68k.d[6]);
    /* TODO $0F8830: sbcd.b d0, d1  [83 00] */
    /* TODO $0F8832: sbcd -(a0), -(a6), #$8300  [8D 08 83 00] */
    /* TODO $0F8836: sbcd -(a0), -(a6), #$8300  [8D 08 83 00] */
    /* TODO $0F883A: sbcd -(a0), -(a6), #$8300  [8D 08 83 00] */
    /* TODO $0F883E: sbcd -(a0), -(a6), #$8300  [8D 08 83 00] */
    /* TODO $0F8842: sbcd -(a0), -(a6), #$8300  [8D 08 83 00] */
    /* TODO $0F8846: sbcd -(a0), -(a6), #$8300  [8D 08 83 00] */
    /* TODO $0F884A: sbcd -(a0), -(a6), #$8300  [8D 08 83 00] */
    /* TODO $0F884E: sbcd -(a0), -(a6), #$8000  [8D 08 80 00] */
    /* WARNING: function did not end with RTS */
}

/* $0F8852-$0F8854  (1 instructions, 2 bytes) */
void jt_0F8852(void) {
    /* TODO $0F8852: dc.w $ff20  [FF 20] */
    /* WARNING: function did not end with RTS */
}

/* $0F885C-$0F885E  (1 instructions, 2 bytes) */
void jt_0F885C(void) {
    /* TODO $0F885C: dc.w $ff20  [FF 20] */
    /* WARNING: function did not end with RTS */
}

/* $0F8896-$0F88B6  (12 instructions, 32 bytes) */
void jt_0F8896(void) {
    /* TODO $0F8896: dc.w $ff16  [FF 16] */
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    /* TODO $0F889E: dc.w $8340  [83 40] */
    M68K_OR16(g_m68k.d[1], bus_read16(0xf10b8));
    M68K_OR16(g_m68k.d[2], g_m68k.d[0]);
    M68K_OR16(g_m68k.d[2], bus_read16(0xf0dbe));
    /* TODO $0F88AA: dc.w $8540  [85 40] */
    M68K_OR16(g_m68k.d[3], bus_read16(0xf0ac4));
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    M68K_OR16(g_m68k.d[4], bus_read16(0xf08b4));
    /* WARNING: function did not end with RTS */
}

/* $0F88B6-$0F88D2  (12 instructions, 28 bytes) */
void jt_0F88B6(void) {
    /* TODO $0F88B6: roxl.b #$6, d6  [ED 16] */
    /* TODO $0F88B8: dc.w $8340  [83 40] */
    M68K_OR8(g_m68k.d[5], bus_read8(g_m68k.a[6]));
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* TODO $0F88C0: dc.w $8940  [89 40] */
    M68K_OR8(g_m68k.d[2], bus_read8(g_m68k.a[6]));
    M68K_OR16(g_m68k.d[6], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0F88C8: dc.w $8140  [81 40] */
    M68K_OR16(g_m68k.d[2], /* UNHANDLED_READ: (a16, invalid.w) */ 0);
    M68K_OR16(g_m68k.d[3], /* UNHANDLED_READ: (a16, invalid.w) */ 0);
    /* WARNING: function did not end with RTS */
}

/* $0F88F0-$0F88F6  (2 instructions, 6 bytes) */
void jt_0F88F0(void) {
    M68K_OR16(g_m68k.d[4], g_m68k.d[0]);
    M68K_OR16(g_m68k.d[4], bus_read16(0xf1234));
    /* WARNING: function did not end with RTS */
}

/* $0F892A-$0F892E  (1 instructions, 4 bytes) */
void jt_0F892A(void) {
    M68K_OR16(g_m68k.d[2], bus_read16(0xf0fa7));
    /* WARNING: function did not end with RTS */
}

/* $0F8980-$0F8992  (9 instructions, 18 bytes) */
void jt_0F8980(void) {
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    /* TODO $0F8982: dc.w $8140  [81 40] */
    M68K_OR8(g_m68k.d[6], bus_read8(g_m68k.a[6]));
    M68K_OR16(g_m68k.d[2], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $0F898A: dc.w $8740  [87 40] */
    M68K_OR8(g_m68k.d[3], bus_read8(g_m68k.a[6]));
    M68K_OR16(g_m68k.d[5], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0F89A8-$0F89AA  (1 instructions, 2 bytes) */
void jt_0F89A8(void) {
    M68K_SUB16(g_m68k.d[7], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F8A0C-$0F8A0E  (1 instructions, 2 bytes) */
void jt_0F8A0C(void) {
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F8A52-$0F8A64  (9 instructions, 18 bytes) */
void jt_0F8A52(void) {
    /* TODO $0F8A52: dc.w $8d40  [8D 40] */
    /* TODO $0F8A54: sbcd.b d6, d1  [83 06] */
    M68K_OR16(g_m68k.d[5], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[3], g_m68k.d[6]);
    /* TODO $0F8A5A: dc.w $8740  [87 40] */
    /* TODO $0F8A5C: sbcd.b d6, d4  [89 06] */
    M68K_OR16(g_m68k.d[2], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[6], g_m68k.d[6]);
    /* TODO $0F8A62: dc.w $8140  [81 40] */
    /* WARNING: function did not end with RTS */
}

/* $0F8A6A-$0F8A82  (12 instructions, 24 bytes) */
void jt_0F8A6A(void) {
    /* TODO $0F8A6A: dc.w $ff16  [FF 16] */
    M68K_AND8(g_m68k.d[0], bus_read8(g_m68k.a[6]));
    /* TODO $0F8A6E: dc.w $8140  [81 40] */
    M68K_OR8(g_m68k.d[6], bus_read8(g_m68k.a[6]));
    M68K_OR16(g_m68k.d[2], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $0F8A76: dc.w $8740  [87 40] */
    M68K_OR8(g_m68k.d[3], bus_read8(g_m68k.a[6]));
    M68K_OR16(g_m68k.d[5], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    /* TODO $0F8A7E: dc.w $8d40  [8D 40] */
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F8A82-$0F8A94  (9 instructions, 18 bytes) */
void jt_0F8A82(void) {
    /* TODO $0F8A82: roxr.b #$7, d6  [EE 16] */
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    /* TODO $0F8A88: dc.w $8540  [85 40] */
    M68K_OR8(g_m68k.d[4], bus_read8(g_m68k.a[6]));
    M68K_OR16(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    /* TODO $0F8A90: dc.w $8b40  [8B 40] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[6]));
    /* WARNING: function did not end with RTS */
}

/* $0F8AA6-$0F8AA8  (1 instructions, 2 bytes) */
void jt_0F8AA6(void) {
    M68K_SUBX16(g_m68k.d[7], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F8ABE-$0F8AC0  (1 instructions, 2 bytes) */
void jt_0F8ABE(void) {
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F8AC6-$0F8AC8  (1 instructions, 2 bytes) */
void jt_0F8AC6(void) {
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0F8B72-$0F8B74  (1 instructions, 2 bytes) */
void jt_0F8B72(void) {
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F8BB8-$0F8BCA  (9 instructions, 18 bytes) */
void jt_0F8BB8(void) {
    /* TODO $0F8BB8: dc.w $8d40  [8D 40] */
    /* TODO $0F8BBA: sbcd.b d6, d1  [83 06] */
    M68K_OR16(g_m68k.d[5], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[3], g_m68k.d[6]);
    /* TODO $0F8BC0: dc.w $8740  [87 40] */
    /* TODO $0F8BC2: sbcd.b d6, d4  [89 06] */
    M68K_OR16(g_m68k.d[2], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[6], g_m68k.d[6]);
    /* TODO $0F8BC8: dc.w $8140  [81 40] */
    /* WARNING: function did not end with RTS */
}

/* $0F8BE0-$0F8C20  (32 instructions, 64 bytes) */
void jt_0F8BE0(void) {
    M68K_SUB8(g_m68k.d[0], _postinc8(0));
    M68K_OR8(g_m68k.d[5], _predec8(0));
    M68K_OR16(g_m68k.d[3], g_m68k.d[1]);
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $0F8BE8: dc.w $8741  [87 41] */
    M68K_OR8(g_m68k.d[4], _predec8(0));
    M68K_OR16(g_m68k.d[4], g_m68k.d[1]);
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* TODO $0F8BF0: dc.w $8941  [89 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* TODO $0F8BF4: dc.w $8941  [89 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* TODO $0F8BF8: dc.w $8941  [89 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* TODO $0F8BFC: dc.w $8941  [89 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* TODO $0F8C00: dc.w $8941  [89 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* TODO $0F8C04: dc.w $8941  [89 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* TODO $0F8C08: dc.w $8941  [89 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* TODO $0F8C0C: dc.w $8941  [89 41] */
    M68K_OR8(g_m68k.d[3], _predec8(0));
    M68K_OR16(g_m68k.d[5], g_m68k.d[1]);
    M68K_OR8(g_m68k.d[3], _predec8(0));
    M68K_OR16(g_m68k.d[5], g_m68k.d[1]);
    M68K_OR8(g_m68k.d[3], _predec8(0));
    M68K_OR16(g_m68k.d[5], g_m68k.d[1]);
    M68K_OR8(g_m68k.d[3], _predec8(0));
    M68K_OR16(g_m68k.d[5], g_m68k.d[1]);
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F8C20-$0F8C22  (1 instructions, 2 bytes) */
void jt_0F8C20(void) {
    M68K_SUB8(g_m68k.d[0], _postinc8(0));
    /* WARNING: function did not end with RTS */
}

/* $0F8C38-$0F8C3A  (1 instructions, 2 bytes) */
void jt_0F8C38(void) {
    M68K_SUB8(g_m68k.d[0], _postinc8(0));
    /* WARNING: function did not end with RTS */
}

/* $0F8C40-$0F8C80  (32 instructions, 64 bytes) */
void jt_0F8C40(void) {
    M68K_SUB8(g_m68k.d[0], _postinc8(0));
    M68K_OR16(g_m68k.d[3], g_m68k.d[1]);
    M68K_OR8(g_m68k.d[5], _predec8(0));
    M68K_OR16(g_m68k.d[4], g_m68k.d[1]);
    M68K_OR8(g_m68k.d[4], _predec8(0));
    M68K_OR16(g_m68k.d[4], g_m68k.d[1]);
    M68K_OR8(g_m68k.d[4], _predec8(0));
    /* TODO $0F8C4E: dc.w $8941  [89 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* TODO $0F8C52: dc.w $8941  [89 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* TODO $0F8C56: dc.w $8941  [89 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* TODO $0F8C5A: dc.w $8941  [89 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* TODO $0F8C5E: dc.w $8941  [89 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* TODO $0F8C62: dc.w $8941  [89 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* TODO $0F8C66: dc.w $8941  [89 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* TODO $0F8C6A: dc.w $8941  [89 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[5], g_m68k.d[1]);
    M68K_OR8(g_m68k.d[3], _predec8(0));
    M68K_OR16(g_m68k.d[5], g_m68k.d[1]);
    M68K_OR8(g_m68k.d[3], _predec8(0));
    M68K_OR16(g_m68k.d[5], g_m68k.d[1]);
    M68K_OR8(g_m68k.d[3], _predec8(0));
    M68K_OR16(g_m68k.d[5], g_m68k.d[1]);
    M68K_OR8(g_m68k.d[3], _predec8(0));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F8C80-$0F8C88  (4 instructions, 8 bytes) */
void jt_0F8C80(void) {
    /* TODO $0F8C80: dc.w $ff10  [FF 10] */
    /* TODO $0F8C82: dc.w $ff10  [FF 10] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[0]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F8C88-$0F8CD2  (27 instructions, 74 bytes) */
void jt_0F8C88(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008110; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008110; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008110; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008110; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008110; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008110; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008441; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[1], bus_read8(0x008D41));
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[1], bus_read8(0x008D41));
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008E41; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0F8CBA: dc.w $8f41  [8F 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0F8CBE: dc.w $8f41  [8F 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0F8CC2: dc.w $8f41  [8F 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0F8CC6: dc.w $8f41  [8F 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0F8CCA: dc.w $8f41  [8F 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0F8CCE: dc.w $8f41  [8F 41] */
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F8CD2-$0F8CDA  (4 instructions, 8 bytes) */
void jt_0F8CD2(void) {
    /* TODO $0F8CD2: dc.w $ff10  [FF 10] */
    /* TODO $0F8CD4: dc.w $ff10  [FF 10] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[0]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F8CDA-$0F8D1C  (33 instructions, 66 bytes) */
void jt_0F8CDA(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0F8CDC: dc.w $8f41  [8F 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0F8CE0: dc.w $8f41  [8F 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0F8CE4: dc.w $8f41  [8F 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0F8CE8: dc.w $8f41  [8F 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0F8CEC: dc.w $8f41  [8F 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0F8CF0: dc.w $8f41  [8F 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0F8CF4: dc.w $8f41  [8F 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0F8CF8: dc.w $8f41  [8F 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0F8CFC: dc.w $8f41  [8F 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0F8D00: dc.w $8f41  [8F 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0F8D04: dc.w $8f41  [8F 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0F8D08: dc.w $8f41  [8F 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0F8D0C: dc.w $8f41  [8F 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0F8D10: dc.w $8f41  [8F 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0F8D14: dc.w $8f41  [8F 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0F8D18: dc.w $8f41  [8F 41] */
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F8D1C-$0F8D66  (27 instructions, 74 bytes) */
void jt_0F8D1C(void) {
    { uint32_t _ea = 0x008100; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008100; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008100; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008100; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008100; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008100; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[2], g_m68k.d[1]);
    { uint32_t _ea = 0x008100; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    /* TODO $0F8D3A: dc.w $8d41  [8D 41] */
    M68K_OR8(g_m68k.d[1], bus_read8(0x008100));
    /* TODO $0F8D40: dc.w $8d41  [8D 41] */
    M68K_OR8(g_m68k.d[1], bus_read8(0x008100));
    M68K_OR16(g_m68k.d[7], g_m68k.d[1]);
    { uint32_t _ea = 0x008100; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0F8D4C: dc.w $8f41  [8F 41] */
    /* TODO $0F8D4E: sbcd.b d0, d0  [81 00] */
    /* TODO $0F8D50: dc.w $8f41  [8F 41] */
    /* TODO $0F8D52: sbcd.b d0, d0  [81 00] */
    /* TODO $0F8D54: dc.w $8f41  [8F 41] */
    /* TODO $0F8D56: sbcd.b d0, d0  [81 00] */
    /* TODO $0F8D58: dc.w $8f41  [8F 41] */
    /* TODO $0F8D5A: sbcd.b d0, d0  [81 00] */
    /* TODO $0F8D5C: dc.w $8f41  [8F 41] */
    /* TODO $0F8D5E: sbcd.b d0, d0  [81 00] */
    /* TODO $0F8D60: dc.w $8f41  [8F 41] */
    /* TODO $0F8D62: sbcd.b d0, d0  [81 00] */
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F8D6E-$0F8DB0  (33 instructions, 66 bytes) */
void jt_0F8D6E(void) {
    /* TODO $0F8D6E: dc.w $8f41  [8F 41] */
    /* TODO $0F8D70: sbcd.b d0, d0  [81 00] */
    /* TODO $0F8D72: dc.w $8f41  [8F 41] */
    /* TODO $0F8D74: sbcd.b d0, d0  [81 00] */
    /* TODO $0F8D76: dc.w $8f41  [8F 41] */
    /* TODO $0F8D78: sbcd.b d0, d0  [81 00] */
    /* TODO $0F8D7A: dc.w $8f41  [8F 41] */
    /* TODO $0F8D7C: sbcd.b d0, d0  [81 00] */
    /* TODO $0F8D7E: dc.w $8f41  [8F 41] */
    /* TODO $0F8D80: sbcd.b d0, d0  [81 00] */
    /* TODO $0F8D82: dc.w $8f41  [8F 41] */
    /* TODO $0F8D84: sbcd.b d0, d0  [81 00] */
    /* TODO $0F8D86: dc.w $8f41  [8F 41] */
    /* TODO $0F8D88: sbcd.b d0, d0  [81 00] */
    /* TODO $0F8D8A: dc.w $8f41  [8F 41] */
    /* TODO $0F8D8C: sbcd.b d0, d0  [81 00] */
    /* TODO $0F8D8E: dc.w $8f41  [8F 41] */
    /* TODO $0F8D90: sbcd.b d0, d0  [81 00] */
    /* TODO $0F8D92: dc.w $8f41  [8F 41] */
    /* TODO $0F8D94: sbcd.b d0, d0  [81 00] */
    /* TODO $0F8D96: dc.w $8f41  [8F 41] */
    /* TODO $0F8D98: sbcd.b d0, d0  [81 00] */
    /* TODO $0F8D9A: dc.w $8f41  [8F 41] */
    /* TODO $0F8D9C: sbcd.b d0, d0  [81 00] */
    /* TODO $0F8D9E: dc.w $8f41  [8F 41] */
    /* TODO $0F8DA0: sbcd.b d0, d0  [81 00] */
    /* TODO $0F8DA2: dc.w $8f41  [8F 41] */
    /* TODO $0F8DA4: sbcd.b d0, d0  [81 00] */
    /* TODO $0F8DA6: dc.w $8f41  [8F 41] */
    /* TODO $0F8DA8: sbcd.b d0, d0  [81 00] */
    /* TODO $0F8DAA: dc.w $8f41  [8F 41] */
    /* TODO $0F8DAC: sbcd.b d0, d0  [81 00] */
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F8DC8-$0F8DFA  (25 instructions, 50 bytes) */
void jt_0F8DC8(void) {
    M68K_SUB8(g_m68k.d[0], _postinc8(0));
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    /* TODO $0F8DCC: dc.w $8141  [81 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    /* TODO $0F8DD0: dc.w $8341  [83 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    /* TODO $0F8DD4: dc.w $8141  [81 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    /* TODO $0F8DD8: dc.w $8141  [81 41] */
    M68K_OR8(g_m68k.d[7], _predec8(0));
    M68K_OR16(g_m68k.d[1], g_m68k.d[1]);
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    /* TODO $0F8DE0: dc.w $8341  [83 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    /* TODO $0F8DE4: dc.w $8541  [85 41] */
    M68K_OR8(g_m68k.d[5], _predec8(0));
    M68K_OR16(g_m68k.d[3], g_m68k.d[1]);
    M68K_OR8(g_m68k.d[6], _predec8(0));
    M68K_OR16(g_m68k.d[2], g_m68k.d[1]);
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    /* TODO $0F8DF0: dc.w $8341  [83 41] */
    M68K_OR8(g_m68k.d[7], _predec8(0));
    M68K_OR16(g_m68k.d[1], g_m68k.d[1]);
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    /* TODO $0F8DF8: dc.w $8141  [81 41] */
    /* WARNING: function did not end with RTS */
}

/* $0F8DFE-$0F8E00  (1 instructions, 2 bytes) */
void jt_0F8DFE(void) {
    M68K_SUB8(g_m68k.d[0], _postinc8(0));
    /* WARNING: function did not end with RTS */
}

/* $0F8E1A-$0F8E1C  (1 instructions, 2 bytes) */
void jt_0F8E1A(void) {
    M68K_SUB8(g_m68k.d[0], _postinc8(0));
    /* WARNING: function did not end with RTS */
}

/* $0F8E28-$0F8E2A  (1 instructions, 2 bytes) */
void jt_0F8E28(void) {
    M68K_SUB8(g_m68k.d[0], _postinc8(0));
    /* WARNING: function did not end with RTS */
}

/* $0F8E66-$0F8E6E  (4 instructions, 8 bytes) */
void jt_0F8E66(void) {
    /* TODO $0F8E66: dc.w $f040  [F0 40] */
    /* TODO $0F8E68: dc.w $ff20  [FF 20] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F8E94-$0F8EAE  (7 instructions, 26 bytes) */
void jt_0F8E94(void) {
    /* TODO $0F8E94: dc.w $f040  [F0 40] */
    { uint32_t _ea = /* UNHANDLED_ADDR: (a0, invalid.w) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[2], bus_read8(g_m68k.a[0] + 0x40 + (int32_t)g_m68k.a[0]));
    { uint32_t _ea = (g_m68k.a[0] + 0x40 + (int32_t)g_m68k.a[0]); uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[4], bus_read8(g_m68k.a[0] + 0x40 + (int16_t)(uint16_t)g_m68k.a[0]));
    M68K_OR8(g_m68k.d[6], bus_read8(g_m68k.a[0] + 0x40 + (int16_t)(uint16_t)g_m68k.a[0]));
    { uint32_t _ea = (g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.a[0]); uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0F8EAE-$0F8EB6  (3 instructions, 8 bytes) */
void jt_0F8EAE(void) {
    /* TODO $0F8EAE: dc.w $f040  [F0 40] */
    /* TODO $0F8EB0: dc.w $ff30  [FF 30] */
    { uint32_t _ea = (g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.a[0]); uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}
