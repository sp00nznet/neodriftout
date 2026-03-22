/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $0F8E66 - $0F972E */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

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

/* $0F8EC6-$0F8EC8  (1 instructions, 2 bytes) */
void jt_0F8EC6(void) {
    M68K_SUB8(g_m68k.d[0], _postinc8(0));
    /* WARNING: function did not end with RTS */
}

/* $0F8EF4-$0F8EF6  (1 instructions, 2 bytes) */
void jt_0F8EF4(void) {
    M68K_SUB8(g_m68k.d[0], _postinc8(0));
    /* WARNING: function did not end with RTS */
}

/* $0F8F14-$0F8F16  (1 instructions, 2 bytes) */
void jt_0F8F14(void) {
    M68K_SUB8(g_m68k.d[0], _postinc8(0));
    /* WARNING: function did not end with RTS */
}

/* $0F8F1E-$0F8F50  (13 instructions, 50 bytes) */
void jt_0F8F1E(void) {
    M68K_SUB8(g_m68k.d[0], _postinc8(0));
    M68K_SUB8(g_m68k.d[0], /* UNHANDLED_READ: ([a0]) */ 0);
    { uint32_t _ea = /* UNHANDLED_ADDR: ([a0]) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = /* UNHANDLED_ADDR: ([a0]) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = /* UNHANDLED_ADDR: ([a0]) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[0] + 0x41 + (int16_t)(uint16_t)g_m68k.a[0]); uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[7], /* UNHANDLED_READ: ([a0]) */ 0);
    { uint32_t _ea = /* UNHANDLED_ADDR: ([a0]) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[0] + 0x41 + (int16_t)(uint16_t)g_m68k.a[0]); uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[5], bus_read8(g_m68k.a[0] + 0x41 + (int16_t)(uint16_t)g_m68k.a[0]));
    M68K_OR8(g_m68k.d[6], /* UNHANDLED_READ: ([a0]) */ 0);
    { uint32_t _ea = (g_m68k.a[0] + 0x41 + (int16_t)(uint16_t)g_m68k.a[0]); uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[7], /* UNHANDLED_READ: ([a0]) */ 0);
    /* WARNING: function did not end with RTS */
}

/* $0F9074-$0F9086  (9 instructions, 18 bytes) */
void jt_0F9074(void) {
    /* TODO $0F9074: dc.w $8d40  [8D 40] */
    /* TODO $0F9076: sbcd.b d6, d1  [83 06] */
    M68K_OR16(g_m68k.d[5], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[3], g_m68k.d[6]);
    /* TODO $0F907C: dc.w $8740  [87 40] */
    /* TODO $0F907E: sbcd.b d6, d4  [89 06] */
    M68K_OR16(g_m68k.d[2], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[6], g_m68k.d[6]);
    /* TODO $0F9084: dc.w $8140  [81 40] */
    /* WARNING: function did not end with RTS */
}

/* $0F90C4-$0F90F8  (26 instructions, 52 bytes) */
void jt_0F90C4(void) {
    M68K_OR8(g_m68k.d[3], _predec8(0));
    M68K_OR16(g_m68k.d[5], g_m68k.d[1]);
    M68K_OR8(g_m68k.d[3], _predec8(0));
    M68K_OR16(g_m68k.d[5], g_m68k.d[1]);
    M68K_OR8(g_m68k.d[3], _predec8(0));
    M68K_OR16(g_m68k.d[5], g_m68k.d[1]);
    M68K_OR8(g_m68k.d[3], _predec8(0));
    M68K_OR16(g_m68k.d[5], g_m68k.d[1]);
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* TODO $0F90D6: dc.w $8941  [89 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* TODO $0F90DA: dc.w $8941  [89 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $0F90DE: dc.w $8741  [87 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    /* TODO $0F90E2: dc.w $8541  [85 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    /* TODO $0F90E6: dc.w $8341  [83 41] */
    M68K_OR8(g_m68k.d[7], _predec8(0));
    M68K_OR16(g_m68k.d[1], g_m68k.d[1]);
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    /* TODO $0F90EE: dc.w $8341  [83 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    /* TODO $0F90F2: dc.w $8141  [81 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    /* TODO $0F90F6: dc.w $8141  [81 41] */
    /* WARNING: function did not end with RTS */
}

/* $0F9126-$0F9162  (30 instructions, 60 bytes) */
void jt_0F9126(void) {
    M68K_OR16(g_m68k.d[5], g_m68k.d[1]);
    M68K_OR8(g_m68k.d[3], _predec8(0));
    M68K_OR16(g_m68k.d[5], g_m68k.d[1]);
    M68K_OR8(g_m68k.d[3], _predec8(0));
    M68K_OR16(g_m68k.d[5], g_m68k.d[1]);
    M68K_OR8(g_m68k.d[3], _predec8(0));
    M68K_OR16(g_m68k.d[5], g_m68k.d[1]);
    M68K_OR8(g_m68k.d[3], _predec8(0));
    /* TODO $0F9136: dc.w $8941  [89 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* TODO $0F913A: dc.w $8941  [89 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* TODO $0F913E: dc.w $8941  [89 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* TODO $0F9142: dc.w $8941  [89 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* TODO $0F9146: dc.w $8941  [89 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* TODO $0F914A: dc.w $8941  [89 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* TODO $0F914E: dc.w $8941  [89 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* TODO $0F9152: dc.w $8941  [89 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[4], g_m68k.d[1]);
    M68K_OR8(g_m68k.d[4], _predec8(0));
    M68K_OR16(g_m68k.d[3], g_m68k.d[1]);
    M68K_OR8(g_m68k.d[5], _predec8(0));
    M68K_OR16(g_m68k.d[3], g_m68k.d[1]);
    M68K_OR8(g_m68k.d[5], _predec8(0));
    /* WARNING: function did not end with RTS */
}

/* $0F9176-$0F917E  (4 instructions, 8 bytes) */
void jt_0F9176(void) {
    /* TODO $0F9176: dc.w $ff10  [FF 10] */
    /* TODO $0F9178: dc.w $ff10  [FF 10] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[0]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F917E-$0F91C0  (33 instructions, 66 bytes) */
void jt_0F917E(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0F9180: dc.w $8f41  [8F 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0F9184: dc.w $8f41  [8F 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0F9188: dc.w $8f41  [8F 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0F918C: dc.w $8f41  [8F 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0F9190: dc.w $8f41  [8F 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0F9194: dc.w $8f41  [8F 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0F9198: dc.w $8f41  [8F 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0F919C: dc.w $8f41  [8F 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0F91A0: dc.w $8f41  [8F 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0F91A4: dc.w $8f41  [8F 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0F91A8: dc.w $8f41  [8F 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0F91AC: dc.w $8f41  [8F 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0F91B0: dc.w $8f41  [8F 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0F91B4: dc.w $8f41  [8F 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0F91B8: dc.w $8f41  [8F 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0F91BC: dc.w $8f41  [8F 41] */
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F91C0-$0F91C8  (4 instructions, 8 bytes) */
void jt_0F91C0(void) {
    /* TODO $0F91C0: dc.w $ff10  [FF 10] */
    /* TODO $0F91C2: dc.w $ff10  [FF 10] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[0]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F91C8-$0F9226  (32 instructions, 94 bytes) */
void jt_0F91C8(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0F91CA: dc.w $8f41  [8F 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0F91CE: dc.w $8f41  [8F 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0F91D2: dc.w $8f41  [8F 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0F91D6: dc.w $8f41  [8F 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0F91DA: dc.w $8f41  [8F 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0F91DE: dc.w $8f41  [8F 41] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008E41; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[1], bus_read8(0x008D41));
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008C41; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008241; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[3], bus_read8(0x008441));
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008241; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008141; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[1], bus_read8(0x008110));
    M68K_OR8(g_m68k.d[2], bus_read8(0x008141));
    { uint32_t _ea = 0x008141; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[1], bus_read8(0x008110));
    { uint32_t _ea = 0x008110; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008110; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008110; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008000; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0F9226-$0F9268  (33 instructions, 66 bytes) */
void jt_0F9226(void) {
    /* TODO $0F9226: dc.w $8f41  [8F 41] */
    /* TODO $0F9228: sbcd.b d0, d0  [81 00] */
    /* TODO $0F922A: dc.w $8f41  [8F 41] */
    /* TODO $0F922C: sbcd.b d0, d0  [81 00] */
    /* TODO $0F922E: dc.w $8f41  [8F 41] */
    /* TODO $0F9230: sbcd.b d0, d0  [81 00] */
    /* TODO $0F9232: dc.w $8f41  [8F 41] */
    /* TODO $0F9234: sbcd.b d0, d0  [81 00] */
    /* TODO $0F9236: dc.w $8f41  [8F 41] */
    /* TODO $0F9238: sbcd.b d0, d0  [81 00] */
    /* TODO $0F923A: dc.w $8f41  [8F 41] */
    /* TODO $0F923C: sbcd.b d0, d0  [81 00] */
    /* TODO $0F923E: dc.w $8f41  [8F 41] */
    /* TODO $0F9240: sbcd.b d0, d0  [81 00] */
    /* TODO $0F9242: dc.w $8f41  [8F 41] */
    /* TODO $0F9244: sbcd.b d0, d0  [81 00] */
    /* TODO $0F9246: dc.w $8f41  [8F 41] */
    /* TODO $0F9248: sbcd.b d0, d0  [81 00] */
    /* TODO $0F924A: dc.w $8f41  [8F 41] */
    /* TODO $0F924C: sbcd.b d0, d0  [81 00] */
    /* TODO $0F924E: dc.w $8f41  [8F 41] */
    /* TODO $0F9250: sbcd.b d0, d0  [81 00] */
    /* TODO $0F9252: dc.w $8f41  [8F 41] */
    /* TODO $0F9254: sbcd.b d0, d0  [81 00] */
    /* TODO $0F9256: dc.w $8f41  [8F 41] */
    /* TODO $0F9258: sbcd.b d0, d0  [81 00] */
    /* TODO $0F925A: dc.w $8f41  [8F 41] */
    /* TODO $0F925C: sbcd.b d0, d0  [81 00] */
    /* TODO $0F925E: dc.w $8f41  [8F 41] */
    /* TODO $0F9260: sbcd.b d0, d0  [81 00] */
    /* TODO $0F9262: dc.w $8f41  [8F 41] */
    /* TODO $0F9264: sbcd.b d0, d0  [81 00] */
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F9270-$0F92C6  (30 instructions, 86 bytes) */
void jt_0F9270(void) {
    /* TODO $0F9270: dc.w $8f41  [8F 41] */
    /* TODO $0F9272: sbcd.b d0, d0  [81 00] */
    /* TODO $0F9274: dc.w $8f41  [8F 41] */
    /* TODO $0F9276: sbcd.b d0, d0  [81 00] */
    /* TODO $0F9278: dc.w $8f41  [8F 41] */
    /* TODO $0F927A: sbcd.b d0, d0  [81 00] */
    /* TODO $0F927C: dc.w $8f41  [8F 41] */
    /* TODO $0F927E: sbcd.b d0, d0  [81 00] */
    /* TODO $0F9280: dc.w $8f41  [8F 41] */
    /* TODO $0F9282: sbcd.b d0, d0  [81 00] */
    /* TODO $0F9284: dc.w $8f41  [8F 41] */
    /* TODO $0F9286: sbcd.b d0, d0  [81 00] */
    M68K_OR16(g_m68k.d[7], g_m68k.d[1]);
    { uint32_t _ea = 0x008100; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0F928E: dc.w $8d41  [8D 41] */
    M68K_OR8(g_m68k.d[1], bus_read8(0x008100));
    /* TODO $0F9294: dc.w $8d41  [8D 41] */
    M68K_OR8(g_m68k.d[1], bus_read8(0x008100));
    M68K_OR16(g_m68k.d[2], g_m68k.d[1]);
    M68K_OR8(g_m68k.d[4], bus_read8(0x008141));
    M68K_OR8(g_m68k.d[1], bus_read8(0x008100));
    M68K_OR8(g_m68k.d[1], bus_read8(0x008141));
    M68K_OR8(g_m68k.d[6], bus_read8(0x008100));
    M68K_OR8(g_m68k.d[1], bus_read8(0x008141));
    M68K_OR8(g_m68k.d[6], bus_read8(0x008100));
    { uint32_t _ea = 0x008100; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008100; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008100; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008100; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F92CE-$0F92D0  (1 instructions, 2 bytes) */
void jt_0F92CE(void) {
    /* TODO $0F92CE: dc.w $ff20  [FF 20] */
    /* WARNING: function did not end with RTS */
}

/* $0F92D8-$0F92DA  (1 instructions, 2 bytes) */
void jt_0F92D8(void) {
    /* TODO $0F92D8: dc.w $ff20  [FF 20] */
    /* WARNING: function did not end with RTS */
}

/* $0F92F2-$0F92F4  (1 instructions, 2 bytes) */
void jt_0F92F2(void) {
    /* TODO $0F92F2: dc.w $ff20  [FF 20] */
    /* WARNING: function did not end with RTS */
}

/* $0F92FC-$0F92FE  (1 instructions, 2 bytes) */
void jt_0F92FC(void) {
    /* TODO $0F92FC: dc.w $ff20  [FF 20] */
    /* WARNING: function did not end with RTS */
}

/* $0F933A-$0F934E  (10 instructions, 20 bytes) */
void jt_0F933A(void) {
    M68K_ASR8(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[7], _predec8(0));
    /* TODO $0F9340: dc.w $8340  [83 40] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    /* TODO $0F9344: dc.w $8340  [83 40] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[2], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[6], _predec8(0));
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F9362-$0F9372  (5 instructions, 16 bytes) */
void jt_0F9362(void) {
    /* TODO $0F9362: roxr.l #$7, d0  [EE 30] */
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    { uint32_t _ea = /* UNHANDLED_ADDR: (a0, invalid.w) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = /* UNHANDLED_ADDR: (a0, invalid.w) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[6], bus_read8(g_m68k.a[0] + 0x40 + (int16_t)(uint16_t)g_m68k.a[5]));
    /* WARNING: function did not end with RTS */
}

/* $0F93AE-$0F93B0  (1 instructions, 2 bytes) */
void jt_0F93AE(void) {
    /* TODO $0F93AE: dc.w $ff30  [FF 30] */
    /* WARNING: function did not end with RTS */
}

/* $0F93B8-$0F93BA  (1 instructions, 2 bytes) */
void jt_0F93B8(void) {
    /* TODO $0F93B8: dc.w $ff30  [FF 30] */
    /* WARNING: function did not end with RTS */
}

/* $0F93D2-$0F93D4  (1 instructions, 2 bytes) */
void jt_0F93D2(void) {
    /* TODO $0F93D2: dc.w $ff30  [FF 30] */
    /* WARNING: function did not end with RTS */
}

/* $0F93DC-$0F93DE  (1 instructions, 2 bytes) */
void jt_0F93DC(void) {
    /* TODO $0F93DC: dc.w $ff30  [FF 30] */
    /* WARNING: function did not end with RTS */
}

/* $0F93F6-$0F93FE  (4 instructions, 8 bytes) */
void jt_0F93F6(void) {
    /* TODO $0F93F6: dc.w $ff14  [FF 14] */
    /* TODO $0F93F8: dc.w $ff14  [FF 14] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[4]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F93FE-$0F9400  (1 instructions, 2 bytes) */
void jt_0F93FE(void) {
    /* TODO $0F93FE: dc.w $ff14  [FF 14] */
    /* WARNING: function did not end with RTS */
}

/* $0F9400-$0F9406  (3 instructions, 6 bytes) */
void jt_0F9400(void) {
    /* TODO $0F9400: dc.w $ff14  [FF 14] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[4]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F9406-$0F9408  (1 instructions, 2 bytes) */
void jt_0F9406(void) {
    /* TODO $0F9406: dc.w $ff14  [FF 14] */
    /* WARNING: function did not end with RTS */
}

/* $0F940E-$0F9436  (20 instructions, 40 bytes) */
void jt_0F940E(void) {
    M68K_CMP8(g_m68k.d[7], bus_read8(g_m68k.a[4]));
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    /* TODO $0F9414: dc.w $8340  [83 40] */
    M68K_OR8(g_m68k.d[6], bus_read8(g_m68k.a[4]));
    M68K_OR16(g_m68k.d[2], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    /* TODO $0F941C: dc.w $8540  [85 40] */
    M68K_OR8(g_m68k.d[5], bus_read8(g_m68k.a[4]));
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $0F9424: dc.w $8740  [87 40] */
    M68K_OR8(g_m68k.d[4], bus_read8(g_m68k.a[4]));
    M68K_OR16(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* TODO $0F942C: dc.w $8940  [89 40] */
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* TODO $0F9430: dc.w $8940  [89 40] */
    M68K_OR8(g_m68k.d[3], bus_read8(g_m68k.a[2]));
    /* TODO $0F9434: dc.w $8940  [89 40] */
    /* WARNING: function did not end with RTS */
}

/* $0F944C-$0F9462  (11 instructions, 22 bytes) */
void jt_0F944C(void) {
    /* TODO $0F944C: dc.w $ff10  [FF 10] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    /* TODO $0F9452: dc.w $8140  [81 40] */
    M68K_OR8(g_m68k.d[7], bus_read8(g_m68k.a[6]));
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[6], bus_read8(g_m68k.a[6]));
    M68K_OR16(g_m68k.d[2], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $0F945E: dc.w $8740  [87 40] */
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F9462-$0F9466  (2 instructions, 4 bytes) */
void jt_0F9462(void) {
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[0]));
    /* TODO $0F9464: dc.w $8540  [85 40] */
    /* WARNING: function did not end with RTS */
}

/* $0F94BA-$0F94C2  (4 instructions, 8 bytes) */
void jt_0F94BA(void) {
    M68K_OR8(g_m68k.d[3], bus_read8(g_m68k.a[6]));
    M68K_OR16(g_m68k.d[5], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    M68K_LSL16(g_m68k.d[0], 0x3);
    /* WARNING: function did not end with RTS */
}

/* $0F94CE-$0F94D0  (1 instructions, 2 bytes) */
void jt_0F94CE(void) {
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F95AA-$0F95C6  (14 instructions, 28 bytes) */
void jt_0F95AA(void) {
    /* TODO $0F95AA: dc.w $8340  [83 40] */
    /* TODO $0F95AC: sbcd.b d0, d6  [8D 00] */
    /* TODO $0F95AE: dc.w $8340  [83 40] */
    /* TODO $0F95B0: sbcd.b d2, d6  [8D 02] */
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[7], g_m68k.d[2]);
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[7], g_m68k.d[2]);
    /* TODO $0F95BA: dc.w $8140  [81 40] */
    /* TODO $0F95BC: sbcd.b d2, d7  [8F 02] */
    /* TODO $0F95BE: dc.w $8140  [81 40] */
    /* TODO $0F95C0: sbcd.b d2, d7  [8F 02] */
    /* TODO $0F95C2: dc.w $8140  [81 40] */
    /* TODO $0F95C4: sbcd.b d2, d7  [8F 02] */
    /* WARNING: function did not end with RTS */
}

/* $0F95EE-$0F95F6  (4 instructions, 8 bytes) */
void jt_0F95EE(void) {
    /* TODO $0F95EE: dc.w $ff16  [FF 16] */
    /* TODO $0F95F0: dc.w $ff16  [FF 16] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[6]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F95F6-$0F95FE  (4 instructions, 8 bytes) */
void jt_0F95F6(void) {
    /* TODO $0F95F6: dc.w $ff16  [FF 16] */
    /* TODO $0F95F8: dc.w $ff16  [FF 16] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[6]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F95FE-$0F9606  (4 instructions, 8 bytes) */
void jt_0F95FE(void) {
    /* TODO $0F95FE: dc.w $ff16  [FF 16] */
    /* TODO $0F9600: dc.w $ff16  [FF 16] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[6]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F9606-$0F961E  (12 instructions, 24 bytes) */
void jt_0F9606(void) {
    /* TODO $0F9606: dc.w $ff16  [FF 16] */
    M68K_AND8(g_m68k.d[0], bus_read8(g_m68k.a[6]));
    /* TODO $0F960A: dc.w $8140  [81 40] */
    M68K_OR8(g_m68k.d[6], bus_read8(g_m68k.a[6]));
    M68K_OR16(g_m68k.d[2], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $0F9612: dc.w $8740  [87 40] */
    M68K_OR8(g_m68k.d[3], bus_read8(g_m68k.a[6]));
    M68K_OR16(g_m68k.d[5], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    /* TODO $0F961A: dc.w $8d40  [8D 40] */
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F961E-$0F9626  (4 instructions, 8 bytes) */
void jt_0F961E(void) {
    /* TODO $0F961E: dc.w $ff16  [FF 16] */
    /* TODO $0F9620: dc.w $ff16  [FF 16] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[6]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F9626-$0F962E  (4 instructions, 8 bytes) */
void jt_0F9626(void) {
    /* TODO $0F9626: dc.w $ff16  [FF 16] */
    /* TODO $0F9628: dc.w $ff16  [FF 16] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[6]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F962E-$0F9640  (9 instructions, 18 bytes) */
void jt_0F962E(void) {
    /* TODO $0F962E: roxr.b #$7, d6  [EE 16] */
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    /* TODO $0F9634: dc.w $8540  [85 40] */
    M68K_OR8(g_m68k.d[4], bus_read8(g_m68k.a[6]));
    M68K_OR16(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    /* TODO $0F963C: dc.w $8b40  [8B 40] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[6]));
    /* WARNING: function did not end with RTS */
}

/* $0F9652-$0F9664  (9 instructions, 18 bytes) */
void jt_0F9652(void) {
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    /* TODO $0F9654: dc.w $8340  [83 40] */
    M68K_OR8(g_m68k.d[5], bus_read8(g_m68k.a[6]));
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* TODO $0F965C: dc.w $8940  [89 40] */
    M68K_OR8(g_m68k.d[2], bus_read8(g_m68k.a[6]));
    M68K_OR16(g_m68k.d[6], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0F968A-$0F96A0  (11 instructions, 22 bytes) */
void jt_0F968A(void) {
    M68K_SUB8(g_m68k.d[0], _postinc8(0));
    /* TODO $0F968C: dc.w $8940  [89 40] */
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[6], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[2], _postinc8(1));
    /* TODO $0F9694: dc.w $8f40  [8F 40] */
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_CMP16(g_m68k.d[0], g_m68k.d[0]);
    /* TODO $0F969A: dc.w $ff20  [FF 20] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F96A0-$0F96C4  (18 instructions, 36 bytes) */
void jt_0F96A0(void) {
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
    /* TODO $0F96B4: dc.w $8540  [85 40] */
    M68K_OR8(g_m68k.d[1], _postinc8(1));
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $0F96BA: dc.w $8740  [87 40] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $0F96BE: dc.w $ff20  [FF 20] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F96D4-$0F96DC  (4 instructions, 8 bytes) */
void jt_0F96D4(void) {
    /* TODO $0F96D4: dc.w $f018  [F0 18] */
    /* TODO $0F96D6: dc.w $ff20  [FF 20] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F96DC-$0F96E4  (4 instructions, 8 bytes) */
void jt_0F96DC(void) {
    /* TODO $0F96DC: dc.w $f018  [F0 18] */
    /* TODO $0F96DE: dc.w $ff20  [FF 20] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F96F4-$0F971A  (19 instructions, 38 bytes) */
void jt_0F96F4(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[7]));
    M68K_OR8(g_m68k.d[7], _postinc8(0));
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
    /* TODO $0F970E: dc.w $8540  [85 40] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $0F9712: dc.w $8740  [87 40] */
    /* TODO $0F9714: dc.w $ff20  [FF 20] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F971A-$0F972E  (10 instructions, 20 bytes) */
void jt_0F971A(void) {
    M68K_SUB8(g_m68k.d[0], _postinc8(0));
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* TODO $0F971E: dc.w $8940  [89 40] */
    M68K_OR8(g_m68k.d[2], bus_read8(g_m68k.a[7]));
    M68K_OR16(g_m68k.d[6], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_EOR16(g_m68k.d[0], g_m68k.d[7]);
    /* TODO $0F9728: dc.w $ff20  [FF 20] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}
