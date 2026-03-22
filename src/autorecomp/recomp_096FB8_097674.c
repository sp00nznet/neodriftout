/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $096FB8 - $097674 */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

/* $096FB8-$096FCC  (9 instructions, 20 bytes) */
void jt_096FB8(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    { uint32_t _ea = g_m68k.a[3]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    M68K_NOT8(g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[2]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    M68K_NOT8(g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[7]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    M68K_NOT8(g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[3]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    M68K_NOT8(g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $096FCC-$096FE0  (9 instructions, 20 bytes) */
void jt_096FCC(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    { uint32_t _ea = g_m68k.a[0]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    M68K_NOT8(g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[4]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    M68K_NOT8(g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[1]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    M68K_NOT8(g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[5]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    M68K_NOT8(g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $096FE0-$096FF4  (7 instructions, 20 bytes) */
void jt_096FE0(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    { uint32_t _ea = g_m68k.a[7]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    M68K_NOT8(g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    M68K_NOT8(g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[6] + 0x4600); uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[7] + 0x4600); uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $096FF4-$097008  (7 instructions, 20 bytes) */
void jt_096FF4(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    { uint32_t _ea = g_m68k.a[1]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    M68K_NOT8(g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 8); uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[2]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    M68K_NOT8(g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 8); uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $097008-$09701C  (7 instructions, 20 bytes) */
void jt_097008(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    { uint32_t _ea = g_m68k.a[3]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    M68K_NOT8(g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[2] + 0x4600); uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[4]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    M68K_NOT8(g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[3] + 0x4600); uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $09701C-$097030  (7 instructions, 20 bytes) */
void jt_09701C(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    { uint32_t _ea = g_m68k.a[5]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    M68K_NOT8(g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[4] + 0x4600); uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[6]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    M68K_NOT8(g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[5] + 0x4600); uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $097030-$097044  (9 instructions, 20 bytes) */
void jt_097030(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    { uint32_t _ea = g_m68k.a[3]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    /* TODO $097036: dc.w $4700  [47 00] */
    { uint32_t _ea = g_m68k.a[2]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    /* TODO $09703A: dc.w $4700  [47 00] */
    { uint32_t _ea = g_m68k.a[4]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    /* TODO $09703E: dc.w $4700  [47 00] */
    { uint32_t _ea = g_m68k.a[3]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    /* TODO $097042: dc.w $4700  [47 00] */
    /* WARNING: function did not end with RTS */
}

/* $097044-$097058  (9 instructions, 20 bytes) */
void jt_097044(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    { uint32_t _ea = g_m68k.a[5]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    /* TODO $09704A: dc.w $4700  [47 00] */
    { uint32_t _ea = g_m68k.a[4]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    /* TODO $09704E: dc.w $4700  [47 00] */
    { uint32_t _ea = g_m68k.a[6]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    /* TODO $097052: dc.w $4700  [47 00] */
    { uint32_t _ea = g_m68k.a[5]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    /* TODO $097056: dc.w $4700  [47 00] */
    /* WARNING: function did not end with RTS */
}

/* $097058-$09706C  (9 instructions, 20 bytes) */
void jt_097058(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    { uint32_t _ea = g_m68k.a[7]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    /* TODO $09705E: dc.w $4700  [47 00] */
    { uint32_t _ea = g_m68k.a[6]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    /* TODO $097062: dc.w $4700  [47 00] */
    { uint32_t _ea = g_m68k.a[0]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    /* TODO $097066: dc.w $4700  [47 00] */
    { uint32_t _ea = g_m68k.a[7]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    /* TODO $09706A: dc.w $4700  [47 00] */
    /* WARNING: function did not end with RTS */
}

/* $09706C-$097080  (7 instructions, 20 bytes) */
void jt_09706C(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    { uint32_t _ea = g_m68k.a[1]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    /* TODO $097072: dc.w $4700  [47 00] */
    { uint32_t _ea = (g_m68k.a[0] + 0x4700); uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[2]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    /* TODO $09707A: dc.w $4700  [47 00] */
    { uint32_t _ea = (g_m68k.a[1] + 0x4700); uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $097080-$097094  (7 instructions, 20 bytes) */
void jt_097080(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    { uint32_t _ea = g_m68k.a[3]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    /* TODO $097086: dc.w $4700  [47 00] */
    { uint32_t _ea = (g_m68k.a[2] + 0x4700); uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[4]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    /* TODO $09708E: dc.w $4700  [47 00] */
    { uint32_t _ea = (g_m68k.a[3] + 0x4700); uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $097094-$0970A8  (7 instructions, 20 bytes) */
void jt_097094(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    { uint32_t _ea = g_m68k.a[5]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    /* TODO $09709A: dc.w $4700  [47 00] */
    { uint32_t _ea = (g_m68k.a[4] + 0x4700); uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[6]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    /* TODO $0970A2: dc.w $4700  [47 00] */
    { uint32_t _ea = (g_m68k.a[5] + 0x4700); uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0970A8-$0970BC  (9 instructions, 20 bytes) */
void jt_0970A8(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    { uint32_t _ea = g_m68k.a[3]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    /* TODO $0970AE: dc.w $4700  [47 00] */
    { uint32_t _ea = g_m68k.a[2]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    /* TODO $0970B2: dc.w $4700  [47 00] */
    { uint32_t _ea = g_m68k.a[7]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    /* TODO $0970B6: dc.w $4700  [47 00] */
    { uint32_t _ea = g_m68k.a[3]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    /* TODO $0970BA: dc.w $4700  [47 00] */
    /* WARNING: function did not end with RTS */
}

/* $0970BC-$0970D0  (9 instructions, 20 bytes) */
void jt_0970BC(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    { uint32_t _ea = g_m68k.a[0]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    /* TODO $0970C2: dc.w $4700  [47 00] */
    { uint32_t _ea = g_m68k.a[4]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    /* TODO $0970C6: dc.w $4700  [47 00] */
    { uint32_t _ea = g_m68k.a[1]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    /* TODO $0970CA: dc.w $4700  [47 00] */
    { uint32_t _ea = g_m68k.a[5]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    /* TODO $0970CE: dc.w $4700  [47 00] */
    /* WARNING: function did not end with RTS */
}

/* $0970D0-$0970E4  (7 instructions, 20 bytes) */
void jt_0970D0(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    { uint32_t _ea = g_m68k.a[7]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    /* TODO $0970D6: dc.w $4700  [47 00] */
    { uint32_t _ea = g_m68k.a[6]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    /* TODO $0970DA: dc.w $4700  [47 00] */
    { uint32_t _ea = (g_m68k.a[6] + 0x4700); uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[7] + 0x4700); uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0970E4-$0970F8  (7 instructions, 20 bytes) */
void jt_0970E4(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    { uint32_t _ea = g_m68k.a[1]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    /* TODO $0970EA: dc.w $4700  [47 00] */
    { uint32_t _ea = (g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 8); uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[2]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    /* TODO $0970F2: dc.w $4700  [47 00] */
    { uint32_t _ea = (g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 8); uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0970F8-$09710C  (7 instructions, 20 bytes) */
void jt_0970F8(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    { uint32_t _ea = g_m68k.a[3]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    /* TODO $0970FE: dc.w $4700  [47 00] */
    { uint32_t _ea = (g_m68k.a[2] + 0x4700); uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[4]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    /* TODO $097106: dc.w $4700  [47 00] */
    { uint32_t _ea = (g_m68k.a[3] + 0x4700); uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $09710C-$097120  (7 instructions, 20 bytes) */
void jt_09710C(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    { uint32_t _ea = g_m68k.a[5]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    /* TODO $097112: dc.w $4700  [47 00] */
    { uint32_t _ea = (g_m68k.a[4] + 0x4700); uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[6]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    /* TODO $09711A: dc.w $4700  [47 00] */
    { uint32_t _ea = (g_m68k.a[5] + 0x4700); uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $097120-$097134  (7 instructions, 20 bytes) */
void jt_097120(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    { uint32_t _ea = (g_m68k.a[2] + 0 + (int32_t)g_m68k.d[4]); uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    g_m68k.a[1] += g_m68k.d[2];
    /* TODO $09712A: nbcd.b d0  [48 00] */
    { uint32_t _ea = (g_m68k.a[3] + 0 + (int32_t)g_m68k.d[4]); uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    g_m68k.a[1] += g_m68k.d[3];
    /* TODO $097132: nbcd.b d0  [48 00] */
    /* WARNING: function did not end with RTS */
}

/* $097134-$097140  (4 instructions, 12 bytes) */
void jt_097134(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    { uint32_t _ea = (g_m68k.a[4] + 0 + (int32_t)g_m68k.d[4]); uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    g_m68k.a[1] += g_m68k.d[4];
    /* TODO $09713E: nbcd.b d0  [48 00] */
    /* WARNING: function did not end with RTS */
}

/* $097140-$097148  (3 instructions, 8 bytes) */
void jt_097140(void) {
    { uint32_t _ea = (g_m68k.a[5] + 0 + (int32_t)g_m68k.d[4]); uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    g_m68k.a[1] += g_m68k.d[5];
    /* TODO $097146: nbcd.b d0  [48 00] */
    /* WARNING: function did not end with RTS */
}

/* $097148-$09715C  (7 instructions, 20 bytes) */
void jt_097148(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    { uint32_t _ea = (g_m68k.a[6] + 0 + (int32_t)g_m68k.d[4]); uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    g_m68k.a[1] += g_m68k.d[6];
    /* TODO $097152: nbcd.b d0  [48 00] */
    { uint32_t _ea = (g_m68k.a[7] + 0 + (int32_t)g_m68k.d[4]); uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    g_m68k.a[1] += g_m68k.d[7];
    /* TODO $09715A: nbcd.b d0  [48 00] */
    /* WARNING: function did not end with RTS */
}

/* $09715C-$097170  (6 instructions, 20 bytes) */
void jt_09715C(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    { uint32_t _ea = 0x004800; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    g_m68k.a[1] += g_m68k.a[0];
    /* TODO $097166: nbcd.b d0  [48 00] */
    { uint32_t _ea = 0x4800D3C9; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    /* TODO $09716E: nbcd.b d0  [48 00] */
    /* WARNING: function did not end with RTS */
}

/* $097170-$097174  (1 instructions, 4 bytes) */
void jt_097170(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    /* WARNING: function did not end with RTS */
}

/* $097184-$097188  (1 instructions, 4 bytes) */
void jt_097184(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    /* WARNING: function did not end with RTS */
}

/* $097198-$09719C  (1 instructions, 4 bytes) */
void jt_097198(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    /* WARNING: function did not end with RTS */
}

/* $0971AC-$0971C0  (9 instructions, 20 bytes) */
void jt_0971AC(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    g_m68k.a[1] += g_m68k.d[0];
    /* TODO $0971B2: nbcd.b d0  [48 00] */
    g_m68k.a[1] += g_m68k.a[7];
    /* TODO $0971B6: nbcd.b d0  [48 00] */
    g_m68k.a[1] += g_m68k.d[1];
    /* TODO $0971BA: nbcd.b d0  [48 00] */
    g_m68k.a[1] += g_m68k.a[7];
    /* TODO $0971BE: nbcd.b d1  [48 01] */
    /* WARNING: function did not end with RTS */
}

/* $0971C0-$0971D4  (9 instructions, 20 bytes) */
void jt_0971C0(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    g_m68k.a[1] += bus_read32(g_m68k.a[0]);
    /* TODO $0971C6: nbcd.b d0  [48 00] */
    g_m68k.a[1] += _postinc32(0);
    /* TODO $0971CA: nbcd.b d0  [48 00] */
    g_m68k.a[1] += bus_read32(g_m68k.a[1]);
    /* TODO $0971CE: nbcd.b d0  [48 00] */
    g_m68k.a[1] += _postinc32(1);
    /* TODO $0971D2: nbcd.b d0  [48 00] */
    /* WARNING: function did not end with RTS */
}

/* $0971D4-$0971E8  (9 instructions, 20 bytes) */
void jt_0971D4(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    g_m68k.a[1] += bus_read32(g_m68k.a[2]);
    /* TODO $0971DA: nbcd.b d0  [48 00] */
    g_m68k.a[1] += _postinc32(2);
    /* TODO $0971DE: nbcd.b d0  [48 00] */
    g_m68k.a[1] += bus_read32(g_m68k.a[3]);
    /* TODO $0971E2: nbcd.b d0  [48 00] */
    g_m68k.a[1] += _postinc32(3);
    /* TODO $0971E6: nbcd.b d0  [48 00] */
    /* WARNING: function did not end with RTS */
}

/* $0971E8-$0971FC  (9 instructions, 20 bytes) */
void jt_0971E8(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    g_m68k.a[1] += bus_read32(g_m68k.a[4]);
    /* TODO $0971EE: nbcd.b d0  [48 00] */
    g_m68k.a[1] += _postinc32(4);
    /* TODO $0971F2: nbcd.b d0  [48 00] */
    g_m68k.a[1] += bus_read32(g_m68k.a[5]);
    /* TODO $0971F6: nbcd.b d0  [48 00] */
    g_m68k.a[1] += _postinc32(5);
    /* TODO $0971FA: nbcd.b d0  [48 00] */
    /* WARNING: function did not end with RTS */
}

/* $0971FC-$097210  (9 instructions, 20 bytes) */
void jt_0971FC(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    g_m68k.a[1] += bus_read32(g_m68k.a[6]);
    /* TODO $097202: nbcd.b d0  [48 00] */
    g_m68k.a[1] += _postinc32(6);
    /* TODO $097206: nbcd.b d0  [48 00] */
    g_m68k.a[1] += bus_read32(g_m68k.a[7]);
    /* TODO $09720A: nbcd.b d0  [48 00] */
    g_m68k.a[1] += _postinc32(7);
    /* TODO $09720E: nbcd.b d0  [48 00] */
    /* WARNING: function did not end with RTS */
}

/* $097210-$097254  (28 instructions, 68 bytes) */
void jt_097210(void) {
    M68K_OR8(g_m68k.d[4], 0x4);
    M68K_ADD16(g_m68k.d[2], bus_read16(0x003700));
    M68K_ADD32(g_m68k.d[2], g_m68k.d[4]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[3]));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[2], _predec32(2));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    M68K_ADD16(g_m68k.d[2], bus_read16(0x3700D485));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[4]));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[2], _predec32(3));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    M68K_ADD16(g_m68k.d[2], bus_read16(0x9a936));
    M68K_ADD32(g_m68k.d[2], g_m68k.d[6]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[5]));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[2], _predec32(4));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    M68K_ADD16(g_m68k.d[2], /* UNHANDLED_READ: (a16, d3.w * 8) */ 0);
    M68K_ADD32(g_m68k.d[2], g_m68k.d[7]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[6]));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[2], _predec32(5));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $097254-$09728C  (19 instructions, 56 bytes) */
void jt_097254(void) {
    M68K_OR8(g_m68k.d[4], 0x4);
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[7] + 0x3700));
    M68K_ADD32(g_m68k.d[2], bus_read32(0x9a95e));
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[3]));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[2], _predec32(2));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[3] * 8));
    M68K_ADD32(g_m68k.d[2], /* UNHANDLED_READ: (a16, d3.w * 8) */ 0);
    g_m68k.a[2] += (int16_t)(uint16_t)(g_m68k.a[0]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[2], _predec32(3));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[3] * 8));
    M68K_ADD32(g_m68k.d[2], 0x3700d4c9);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[2], _predec32(4));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.d[3] * 8));
    /* WARNING: function did not end with RTS */
}

/* $097298-$0972DC  (28 instructions, 68 bytes) */
void jt_097298(void) {
    M68K_OR8(g_m68k.d[4], 0x4);
    M68K_ADD16(g_m68k.d[2], bus_read16(0x003A00));
    M68K_ADD32(g_m68k.d[2], g_m68k.d[4]);
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[5]);
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[3]));
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[5]);
    M68K_ADD32(g_m68k.d[2], _predec32(2));
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[5]);
    M68K_ADD16(g_m68k.d[2], bus_read16(0x3A00D485));
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[5]);
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[4]));
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[5]);
    M68K_ADD32(g_m68k.d[2], _predec32(3));
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[5]);
    M68K_ADD16(g_m68k.d[2], bus_read16(0x9acbe));
    M68K_ADD32(g_m68k.d[2], g_m68k.d[6]);
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[5]);
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[5]));
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[5]);
    M68K_ADD32(g_m68k.d[2], _predec32(4));
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[5]);
    M68K_ADD16(g_m68k.d[2], bus_read16(0x972ce + (int32_t)g_m68k.d[3] * 2));
    M68K_ADD32(g_m68k.d[2], g_m68k.d[7]);
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[5]);
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[6]));
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[5]);
    M68K_ADD32(g_m68k.d[2], _predec32(5));
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[5]);
    /* WARNING: function did not end with RTS */
}

/* $0972DC-$097314  (19 instructions, 56 bytes) */
void jt_0972DC(void) {
    M68K_OR8(g_m68k.d[4], 0x4);
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[7] + 0x3a00));
    M68K_ADD32(g_m68k.d[2], bus_read32(0x9ace6));
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[3]));
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[5]);
    M68K_ADD32(g_m68k.d[2], _predec32(2));
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[5]);
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[0] + 0 + (int32_t)g_m68k.d[3] * 2));
    M68K_ADD32(g_m68k.d[2], bus_read32(0x972f6 + (int32_t)g_m68k.d[3] * 2));
    g_m68k.a[2] += (int16_t)(uint16_t)(g_m68k.a[0]);
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[5]);
    M68K_ADD32(g_m68k.d[2], _predec32(3));
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[5]);
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[1] + 0 + (int32_t)g_m68k.d[3] * 2));
    M68K_ADD32(g_m68k.d[2], 0x3a00d4c9);
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[5]);
    M68K_ADD32(g_m68k.d[2], _predec32(4));
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[5]);
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[2] + 0 + (int32_t)g_m68k.d[3] * 2));
    /* WARNING: function did not end with RTS */
}

/* $097320-$097324  (1 instructions, 4 bytes) */
void jt_097320(void) {
    M68K_OR8(g_m68k.d[4], 0x4);
    /* WARNING: function did not end with RTS */
}

/* $097364-$0973A8  (29 instructions, 68 bytes) */
void jt_097364(void) {
    M68K_OR8(g_m68k.d[4], 0x4);
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[6] + 0 + (int32_t)g_m68k.d[3] * 8));
    g_m68k.a[2] += (int16_t)(uint16_t)(g_m68k.d[2]);
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[7]);
    g_m68k.a[2] += (int16_t)(uint16_t)(g_m68k.a[7]);
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[7]);
    g_m68k.a[2] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[5]));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[7]);
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[7] + 0 + (int32_t)g_m68k.d[3] * 8));
    g_m68k.a[2] += (int16_t)(uint16_t)(g_m68k.d[3]);
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[7]);
    g_m68k.a[2] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[0]));
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.a[2] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[6]));
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[6]);
    M68K_ADD32(g_m68k.d[2], bus_read32(0x003E00));
    g_m68k.a[2] += (int16_t)(uint16_t)(g_m68k.d[4]);
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[7]);
    g_m68k.a[2] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[1]));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[7]);
    g_m68k.a[2] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[7]));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[7]);
    M68K_OR8(g_m68k.d[0], 0x0);
    g_m68k.a[2] += (int16_t)(uint16_t)(g_m68k.d[5]);
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[7]);
    g_m68k.a[2] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[2]));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[7]);
    g_m68k.a[2] += (int16_t)(uint16_t)(_postinc16(0));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[7]);
    /* WARNING: function did not end with RTS */
}

/* $0973A8-$0973AC  (1 instructions, 4 bytes) */
void jt_0973A8(void) {
    M68K_OR8(g_m68k.d[4], 0x4);
    /* WARNING: function did not end with RTS */
}

/* $0973EC-$097430  (29 instructions, 68 bytes) */
void jt_0973EC(void) {
    M68K_OR8(g_m68k.d[4], 0x4);
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[6] + 0 + (int32_t)g_m68k.d[3] * 4));
    g_m68k.a[2] += (int16_t)(uint16_t)(g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[6] -= 2; bus_write16(g_m68k.a[6], _mv); M68K_TST16(_mv); }
    g_m68k.a[2] += (int16_t)(uint16_t)(g_m68k.a[7]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[6] -= 2; bus_write16(g_m68k.a[6], _mv); M68K_TST16(_mv); }
    g_m68k.a[2] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[5]));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[6] -= 2; bus_write16(g_m68k.a[6], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[7] + 0 + (int32_t)g_m68k.d[3] * 4));
    g_m68k.a[2] += (int16_t)(uint16_t)(g_m68k.d[3]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[6] -= 2; bus_write16(g_m68k.a[6], _mv); M68K_TST16(_mv); }
    g_m68k.a[2] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[0]));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[6] -= 2; bus_write16(g_m68k.a[6], _mv); M68K_TST16(_mv); }
    g_m68k.a[2] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[6]));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[6] -= 2; bus_write16(g_m68k.a[6], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[2], bus_read32(0x003D00));
    g_m68k.a[2] += (int16_t)(uint16_t)(g_m68k.d[4]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[6] -= 2; bus_write16(g_m68k.a[6], _mv); M68K_TST16(_mv); }
    g_m68k.a[2] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[1]));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[6] -= 2; bus_write16(g_m68k.a[6], _mv); M68K_TST16(_mv); }
    g_m68k.a[2] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[7]));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[6] -= 2; bus_write16(g_m68k.a[6], _mv); M68K_TST16(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    g_m68k.a[2] += (int16_t)(uint16_t)(g_m68k.d[5]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[6] -= 2; bus_write16(g_m68k.a[6], _mv); M68K_TST16(_mv); }
    g_m68k.a[2] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[2]));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[6] -= 2; bus_write16(g_m68k.a[6], _mv); M68K_TST16(_mv); }
    g_m68k.a[2] += (int16_t)(uint16_t)(_postinc16(0));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[6] -= 2; bus_write16(g_m68k.a[6], _mv); M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $097430-$097454  (16 instructions, 36 bytes) */
void jt_097430(void) {
    M68K_OR8(g_m68k.d[4], 0x4);
    g_m68k.a[1] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[4]));
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[4]);
    M68K_ADD32(g_m68k.d[2], g_m68k.a[0]);
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[4]);
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[7]));
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[4]);
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[4]);
    M68K_ADD16(g_m68k.d[2], 0x3800);
    M68K_ADD32(g_m68k.d[2], g_m68k.a[1]);
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[4]);
    M68K_ADD32(g_m68k.d[2], _postinc32(0));
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[4]);
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[4]);
    /* WARNING: function did not end with RTS */
}

/* $097474-$09747C  (2 instructions, 8 bytes) */
void jt_097474(void) {
    M68K_OR8(g_m68k.d[4], 0x4);
    { uint32_t _ea = (g_m68k.a[3] + 0x3800); uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0974B8-$0974DC  (16 instructions, 36 bytes) */
void jt_0974B8(void) {
    M68K_OR8(g_m68k.d[4], 0x4);
    g_m68k.a[1] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[4]));
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[4]);
    M68K_ADD32(g_m68k.d[2], g_m68k.a[0]);
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[4]);
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[7]));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[4]);
    M68K_ADD16(g_m68k.d[2], 0x3a00);
    M68K_ADD32(g_m68k.d[2], g_m68k.a[1]);
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[5]);
    M68K_ADD32(g_m68k.d[2], _postinc32(0));
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[5]);
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[5]);
    /* WARNING: function did not end with RTS */
}

/* $0974FC-$097504  (2 instructions, 8 bytes) */
void jt_0974FC(void) {
    M68K_OR8(g_m68k.d[4], 0x4);
    { uint32_t _ea = (g_m68k.a[3] + 0x3800); uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $097540-$097584  (29 instructions, 68 bytes) */
void jt_097540(void) {
    M68K_OR8(g_m68k.d[4], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_ADDX8(_tmp, _predec8(4)); bus_write8(_ea, _tmp); }
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[7]);
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[7]);
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[7]);
    g_m68k.a[1] += (int16_t)(uint16_t)(_postinc16(1));
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[6]);
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[0]));
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[6]);
    M68K_ADD32(g_m68k.d[2], _postinc32(7));
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[6]);
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[4] + 0x3c00));
    M68K_ADD32(g_m68k.d[2], g_m68k.d[2]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[6]);
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[1]));
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[6]);
    M68K_ADD32(g_m68k.d[2], _predec32(0));
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[6]);
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[5] + 0x3c00));
    M68K_ADD32(g_m68k.d[2], g_m68k.d[3]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[6]);
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[2]));
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[6]);
    M68K_ADD32(g_m68k.d[2], _predec32(1));
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[6]);
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[6] + 0x3c00));
    /* WARNING: function did not end with RTS */
}

/* $097584-$0975C8  (23 instructions, 68 bytes) */
void jt_097584(void) {
    M68K_OR8(g_m68k.d[4], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = (g_m68k.a[4] + 0x3e00); uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x3E00D2CC; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[7]);
    { uint32_t _ea = (g_m68k.a[5] + 0x3c00); uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    g_m68k.a[2] += (int16_t)(uint16_t)(g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.a[2] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[3]));
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[6]);
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[4] + 0x3c00));
    M68K_ADD32(g_m68k.d[2], g_m68k.d[2]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[6]);
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[1]));
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[6]);
    M68K_ADD32(g_m68k.d[2], _predec32(0));
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[6]);
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[5] + 0x3c00));
    M68K_ADD32(g_m68k.d[2], bus_read32(0x3C00D4C7));
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[6]);
    M68K_ADD32(g_m68k.d[2], _predec32(1));
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[6]);
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[6] + 0x3c00));
    /* WARNING: function did not end with RTS */
}

/* $0975C8-$09760C  (29 instructions, 68 bytes) */
void jt_0975C8(void) {
    M68K_OR8(g_m68k.d[4], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_ADDX8(_tmp, _predec8(4)); bus_write8(_ea, _tmp); }
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[6]);
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[6]);
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[6]);
    g_m68k.a[1] += (int16_t)(uint16_t)(_postinc16(1));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[7]);
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[0]));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[7]);
    M68K_ADD32(g_m68k.d[2], _postinc32(7));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[7]);
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[4] + 0x3e00));
    M68K_ADD32(g_m68k.d[2], g_m68k.d[2]);
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[7]);
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[1]));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[7]);
    M68K_ADD32(g_m68k.d[2], _predec32(0));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[7]);
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[5] + 0x3e00));
    M68K_ADD32(g_m68k.d[2], g_m68k.d[3]);
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[7]);
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[2]));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[7]);
    M68K_ADD32(g_m68k.d[2], _predec32(1));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[7]);
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[6] + 0x3e00));
    /* WARNING: function did not end with RTS */
}

/* $09760C-$097650  (23 instructions, 68 bytes) */
void jt_09760C(void) {
    M68K_OR8(g_m68k.d[4], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = (g_m68k.a[4] + 0x3c00); uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x3C00D2CC; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[6]);
    { uint32_t _ea = (g_m68k.a[5] + 0x3e00); uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    g_m68k.a[2] += (int16_t)(uint16_t)(g_m68k.d[6]);
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[7]);
    g_m68k.a[2] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[3]));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[7]);
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[4] + 0x3e00));
    M68K_ADD32(g_m68k.d[2], g_m68k.d[2]);
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[7]);
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[1]));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[7]);
    M68K_ADD32(g_m68k.d[2], _predec32(0));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[7]);
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[5] + 0x3e00));
    M68K_ADD32(g_m68k.d[2], bus_read32(0x3E00D4C7));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[7]);
    M68K_ADD32(g_m68k.d[2], _predec32(1));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[7]);
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[6] + 0x3e00));
    /* WARNING: function did not end with RTS */
}

/* $097650-$09765C  (5 instructions, 12 bytes) */
void jt_097650(void) {
    M68K_OR8(g_m68k.d[1], 0x2);
    M68K_ADDX16(g_m68k.d[1], g_m68k.d[0]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[4] -= 2; bus_write16(g_m68k.a[4], _mv); M68K_TST16(_mv); }
    M68K_ADDX16(g_m68k.d[1], g_m68k.d[5]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[4] -= 2; bus_write16(g_m68k.a[4], _mv); M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $09765C-$097668  (5 instructions, 12 bytes) */
void jt_09765C(void) {
    M68K_OR8(g_m68k.d[1], 0x2);
    { uint32_t _ea = g_m68k.a[1]; uint16_t _tmp = bus_read16(_ea); M68K_ADDX16(_tmp, _predec16(2)); bus_write16(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[4] -= 2; bus_write16(g_m68k.a[4], _mv); M68K_TST16(_mv); }
    M68K_ADDX16(g_m68k.d[1], g_m68k.d[6]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[4] -= 2; bus_write16(g_m68k.a[4], _mv); M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $097668-$097674  (5 instructions, 12 bytes) */
void jt_097668(void) {
    M68K_OR8(g_m68k.d[1], 0x2);
    M68K_ADDX16(g_m68k.d[1], g_m68k.d[1]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[4] -= 2; bus_write16(g_m68k.a[4], _mv); M68K_TST16(_mv); }
    M68K_ADDX16(g_m68k.d[1], g_m68k.d[6]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[4] -= 2; bus_write16(g_m68k.a[4], _mv); M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}
