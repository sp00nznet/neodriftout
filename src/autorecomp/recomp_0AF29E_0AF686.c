/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $0AF29E - $0AF686 */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

/* $0AF29E-$0AF2B2  (9 instructions, 20 bytes) */
void jt_0AF29E(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_LSL32(g_m68k.d[0], 0x4);
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    M68K_LSL32(g_m68k.d[5], 0x4);
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    M68K_LSL8(g_m68k.d[2], 0x1);
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    M68K_LSL8(g_m68k.d[4], 0x1);
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0AF2B2-$0AF2C6  (9 instructions, 20 bytes) */
void jt_0AF2B2(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    /* TODO $0AF2B6: roxr.l d1, d5  [E2 B5] */
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    M68K_LSL8(g_m68k.d[5], 0x1);
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    M68K_LSL32(g_m68k.d[1], 0x4);
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    M68K_LSL32(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0AF2C6-$0AF2CA  (1 instructions, 4 bytes) */
void jt_0AF2C6(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    /* WARNING: function did not end with RTS */
}

/* $0AF2DA-$0AF2EE  (9 instructions, 20 bytes) */
void jt_0AF2DA(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    /* TODO $0AF2DE: roxr.l d1, d5  [E2 B5] */
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    M68K_LSL8(g_m68k.d[5], 0x1);
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    /* TODO $0AF2E6: roxl.l #$4, d0  [E9 90] */
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    M68K_ROL32(g_m68k.d[0], 0x4);
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0AF2EE-$0AF2FE  (7 instructions, 16 bytes) */
void jt_0AF2EE(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_LSL8(g_m68k.d[4], 0x1);
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    M68K_LSL8(g_m68k.d[6], 0x1);
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    /* TODO $0AF2FA: roxr.l d1, d6  [E2 B6] */
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0AF302-$0AF316  (9 instructions, 20 bytes) */
void jt_0AF302(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    /* TODO $0AF306: roxl.l #$4, d1  [E9 91] */
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    M68K_ROL32(g_m68k.d[1], 0x4);
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    /* TODO $0AF30E: roxl.l #$4, d2  [E9 92] */
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    M68K_ROL32(g_m68k.d[2], 0x4);
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0AF316-$0AF32A  (9 instructions, 20 bytes) */
void jt_0AF316(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    /* TODO $0AF31A: roxr.l d1, d3  [E2 B3] */
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    M68K_LSL8(g_m68k.d[1], 0x1);
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    /* TODO $0AF322: roxr.l d1, d4  [E2 B4] */
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    M68K_LSL32(g_m68k.d[5], 0x4);
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0AF32A-$0AF33E  (9 instructions, 20 bytes) */
void jt_0AF32A(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    /* TODO $0AF32E: roxr.l d1, d3  [E2 B3] */
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    M68K_ROL32(g_m68k.d[3], 0x4);
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    /* TODO $0AF336: roxr.l d1, d4  [E2 B4] */
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    M68K_ROL32(g_m68k.d[4], 0x4);
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0AF33E-$0AF352  (9 instructions, 20 bytes) */
void jt_0AF33E(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    /* TODO $0AF342: roxl.l #$4, d3  [E9 93] */
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    M68K_ROL32(g_m68k.d[5], 0x4);
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    /* TODO $0AF34A: roxl.l #$4, d4  [E9 94] */
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    M68K_ROL32(g_m68k.d[6], 0x4);
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0AF352-$0AF366  (9 instructions, 20 bytes) */
void jt_0AF352(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    /* TODO $0AF356: roxl.l #$4, d5  [E9 95] */
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    M68K_ROL32(g_m68k.d[7], 0x4);
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    M68K_ROL16(g_m68k.d[3], g_m68k.d[4]);
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    M68K_LSL32(g_m68k.d[0], g_m68k.d[4]);
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0AF366-$0AF37A  (9 instructions, 20 bytes) */
void jt_0AF366(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    /* TODO $0AF36A: roxl.l #$4, d5  [E9 95] */
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    M68K_LSL32(g_m68k.d[4], g_m68k.d[4]);
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    M68K_ROL16(g_m68k.d[3], g_m68k.d[4]);
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    M68K_LSL32(g_m68k.d[5], g_m68k.d[4]);
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0AF37A-$0AF38E  (9 instructions, 20 bytes) */
void jt_0AF37A(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_LSL32(g_m68k.d[1], g_m68k.d[4]);
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    M68K_LSL32(g_m68k.d[6], g_m68k.d[4]);
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    M68K_LSL32(g_m68k.d[2], g_m68k.d[4]);
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    M68K_LSL32(g_m68k.d[7], g_m68k.d[4]);
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0AF38E-$0AF3A2  (5 instructions, 20 bytes) */
void jt_0AF38E(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0AF3A2-$0AF3B6  (5 instructions, 20 bytes) */
void jt_0AF3A2(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0AF3B6-$0AF3CA  (5 instructions, 20 bytes) */
void jt_0AF3B6(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0AF3CA-$0AF3DE  (5 instructions, 20 bytes) */
void jt_0AF3CA(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0AF3DE-$0AF3F2  (5 instructions, 20 bytes) */
void jt_0AF3DE(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0AF3F2-$0AF406  (5 instructions, 20 bytes) */
void jt_0AF3F2(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0AF406-$0AF41A  (5 instructions, 20 bytes) */
void jt_0AF406(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0AF41A-$0AF42E  (5 instructions, 20 bytes) */
void jt_0AF41A(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0AF42E-$0AF442  (5 instructions, 20 bytes) */
void jt_0AF42E(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0AF442-$0AF456  (5 instructions, 20 bytes) */
void jt_0AF442(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0AF456-$0AF46A  (5 instructions, 20 bytes) */
void jt_0AF456(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0AF46A-$0AF47E  (5 instructions, 20 bytes) */
void jt_0AF46A(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0AF47E-$0AF492  (5 instructions, 20 bytes) */
void jt_0AF47E(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0AF492-$0AF4A6  (5 instructions, 20 bytes) */
void jt_0AF492(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0AF4A6-$0AF4BA  (5 instructions, 20 bytes) */
void jt_0AF4A6(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0AF4BA-$0AF4CE  (5 instructions, 20 bytes) */
void jt_0AF4BA(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0AF4CE-$0AF4E2  (5 instructions, 20 bytes) */
void jt_0AF4CE(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0AF4E2-$0AF4F6  (5 instructions, 20 bytes) */
void jt_0AF4E2(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0AF4F6-$0AF50A  (5 instructions, 20 bytes) */
void jt_0AF4F6(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0AF50A-$0AF51E  (5 instructions, 20 bytes) */
void jt_0AF50A(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0AF51E-$0AF532  (5 instructions, 20 bytes) */
void jt_0AF51E(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0AF532-$0AF546  (5 instructions, 20 bytes) */
void jt_0AF532(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0AF546-$0AF55A  (5 instructions, 20 bytes) */
void jt_0AF546(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0AF55A-$0AF56E  (5 instructions, 20 bytes) */
void jt_0AF55A(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0AF56E-$0AF582  (5 instructions, 20 bytes) */
void jt_0AF56E(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0AF582-$0AF596  (5 instructions, 20 bytes) */
void jt_0AF582(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0AF596-$0AF5AA  (5 instructions, 20 bytes) */
void jt_0AF596(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0AF5AA-$0AF5BE  (5 instructions, 20 bytes) */
void jt_0AF5AA(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0AF5BE-$0AF5D2  (5 instructions, 20 bytes) */
void jt_0AF5BE(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0AF5D2-$0AF5E6  (5 instructions, 20 bytes) */
void jt_0AF5D2(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0AF5E6-$0AF5FA  (5 instructions, 20 bytes) */
void jt_0AF5E6(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0AF5FA-$0AF60E  (5 instructions, 20 bytes) */
void jt_0AF5FA(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0AF60E-$0AF622  (5 instructions, 20 bytes) */
void jt_0AF60E(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0AF622-$0AF636  (5 instructions, 20 bytes) */
void jt_0AF622(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0AF636-$0AF64A  (5 instructions, 20 bytes) */
void jt_0AF636(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0AF64A-$0AF65E  (5 instructions, 20 bytes) */
void jt_0AF64A(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0AF65E-$0AF672  (5 instructions, 20 bytes) */
void jt_0AF65E(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0AF672-$0AF686  (9 instructions, 20 bytes) */
void jt_0AF672(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_ROL16(g_m68k.d[4], 0x4);
    /* TODO $0AF678: sbcd.b d0, d0  [81 00] */
    M68K_LSL16(g_m68k.d[4], g_m68k.d[4]);
    /* TODO $0AF67C: sbcd.b d0, d0  [81 00] */
    M68K_ROL16(g_m68k.d[5], 0x4);
    /* TODO $0AF680: sbcd.b d0, d0  [81 00] */
    M68K_LSL16(g_m68k.d[5], g_m68k.d[4]);
    /* TODO $0AF684: sbcd.b d0, d0  [81 00] */
    /* WARNING: function did not end with RTS */
}
