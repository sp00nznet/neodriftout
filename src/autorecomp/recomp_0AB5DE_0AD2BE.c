/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $0AB5DE - $0AD2BE */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

/* $0AB5DE-$0AB5E6  (2 instructions, 8 bytes) */
void jt_0AB5DE(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_ADD16(g_m68k.d[5], bus_read16(g_m68k.a[5] + 0 + (int32_t)g_m68k.d[4] * 2));
    /* WARNING: function did not end with RTS */
}

/* $0AB5E6-$0AB5EE  (2 instructions, 8 bytes) */
void jt_0AB5E6(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_ADD16(g_m68k.d[5], bus_read16(g_m68k.a[6] + 0 + (int32_t)g_m68k.d[4] * 2));
    /* WARNING: function did not end with RTS */
}

/* $0AB5EE-$0AB5F6  (2 instructions, 8 bytes) */
void jt_0AB5EE(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_ADD16(g_m68k.d[5], bus_read16(g_m68k.a[7] + 0 + (int32_t)g_m68k.d[4] * 2));
    /* WARNING: function did not end with RTS */
}

/* $0AB5F6-$0AB5FE  (2 instructions, 8 bytes) */
void jt_0AB5F6(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_ADD16(g_m68k.d[5], bus_read16(0x004A00));
    /* WARNING: function did not end with RTS */
}

/* $0AB5FE-$0AB608  (2 instructions, 10 bytes) */
void jt_0AB5FE(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_ADD16(g_m68k.d[5], bus_read16(0x4A000001));
    /* WARNING: function did not end with RTS */
}

/* $0AB606-$0AB60E  (4 instructions, 8 bytes) */
void jt_0AB606(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_OR8(g_m68k.d[1], 0x7a);
    M68K_ADD16(g_m68k.d[5], bus_read16(0xb000c));
    M68K_TST8(g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0ABFFE-$0AC002  (1 instructions, 4 bytes) */
void jt_0ABFFE(void) {
    M68K_OR8(g_m68k.d[2], 0xe);
    /* WARNING: function did not end with RTS */
}

/* $0AC072-$0AC076  (1 instructions, 4 bytes) */
void jt_0AC072(void) {
    M68K_OR8(g_m68k.d[2], 0xe);
    /* WARNING: function did not end with RTS */
}

/* $0AC0E6-$0AC0EA  (1 instructions, 4 bytes) */
void jt_0AC0E6(void) {
    M68K_OR8(g_m68k.d[2], 0xe);
    /* WARNING: function did not end with RTS */
}

/* $0AC15A-$0AC15E  (1 instructions, 4 bytes) */
void jt_0AC15A(void) {
    M68K_OR8(g_m68k.d[2], 0xe);
    /* WARNING: function did not end with RTS */
}

/* $0AC1CE-$0AC1DA  (5 instructions, 12 bytes) */
void jt_0AC1CE(void) {
    M68K_OR8(g_m68k.d[2], 0xe);
    /* TODO $0AC1D2: dc.w $efc6  [EF C6] */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* TODO $0AC1D6: dc.w $efc7  [EF C7] */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $0AC242-$0AC246  (1 instructions, 4 bytes) */
void jt_0AC242(void) {
    M68K_OR8(g_m68k.d[2], 0xe);
    /* WARNING: function did not end with RTS */
}

/* $0AC2B6-$0AC2BA  (1 instructions, 4 bytes) */
void jt_0AC2B6(void) {
    M68K_OR8(g_m68k.d[2], 0xe);
    /* WARNING: function did not end with RTS */
}

/* $0AC32A-$0AC39E  (38 instructions, 116 bytes) */
void jt_0AC32A(void) {
    M68K_OR8(g_m68k.d[2], 0xe);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $0AC34E: dc.w $f053  [F0 53] */
    /* TODO $0AC350: dc.w $4300  [43 00] */
    /* TODO $0AC352: dc.w $f05a  [F0 5A] */
    /* TODO $0AC354: dc.w $4300  [43 00] */
    /* TODO $0AC356: dc.w $f05f  [F0 5F] */
    /* TODO $0AC358: dc.w $4300  [43 00] */
    /* TODO $0AC35A: dc.w $f064  [F0 64] */
    /* TODO $0AC35C: dc.w $4300  [43 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $0AC382: dc.w $f04c  [F0 4C] */
    /* TODO $0AC384: dc.w $4300  [43 00] */
    /* TODO $0AC386: dc.w $f054  [F0 54] */
    /* TODO $0AC388: dc.w $4300  [43 00] */
    /* TODO $0AC38A: dc.w $f05b  [F0 5B] */
    /* TODO $0AC38C: dc.w $4300  [43 00] */
    /* TODO $0AC38E: dc.w $f060  [F0 60] */
    /* TODO $0AC390: dc.w $4300  [43 00] */
    M68K_EOR16(g_m68k.d[0], g_m68k.d[6]);
    /* TODO $0AC394: dc.w $4303  [43 03] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0AC39E-$0AC412  (42 instructions, 116 bytes) */
void jt_0AC39E(void) {
    M68K_OR8(g_m68k.d[2], 0xe);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $0AC3BA: dc.w $f046  [F0 46] */
    /* TODO $0AC3BC: dc.w $4300  [43 00] */
    /* TODO $0AC3BE: dc.w $f04d  [F0 4D] */
    /* TODO $0AC3C0: dc.w $4300  [43 00] */
    /* TODO $0AC3C2: dc.w $f055  [F0 55] */
    /* TODO $0AC3C4: dc.w $4300  [43 00] */
    /* TODO $0AC3C6: dc.w $f05c  [F0 5C] */
    /* TODO $0AC3C8: dc.w $4300  [43 00] */
    /* TODO $0AC3CA: dc.w $f061  [F0 61] */
    /* TODO $0AC3CC: dc.w $4300  [43 00] */
    /* TODO $0AC3CE: dc.w $f065  [F0 65] */
    /* TODO $0AC3D0: dc.w $4300  [43 00] */
    /* TODO $0AC3D2: dc.w $f068  [F0 68] */
    /* TODO $0AC3D4: dc.w $4300  [43 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $0AC3EE: dc.w $f041  [F0 41] */
    /* TODO $0AC3F0: dc.w $4300  [43 00] */
    /* TODO $0AC3F2: dc.w $f047  [F0 47] */
    /* TODO $0AC3F4: dc.w $4300  [43 00] */
    /* TODO $0AC3F6: dc.w $f04e  [F0 4E] */
    /* TODO $0AC3F8: dc.w $4300  [43 00] */
    /* TODO $0AC3FA: dc.w $f056  [F0 56] */
    /* TODO $0AC3FC: dc.w $4300  [43 00] */
    /* TODO $0AC3FE: dc.w $f05d  [F0 5D] */
    /* TODO $0AC400: dc.w $4300  [43 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $0AC406: dc.w $f066  [F0 66] */
    /* TODO $0AC408: dc.w $4300  [43 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0AC412-$0AC486  (43 instructions, 116 bytes) */
void jt_0AC412(void) {
    M68K_OR8(g_m68k.d[2], 0xe);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $0AC42A: dc.w $f042  [F0 42] */
    /* TODO $0AC42C: dc.w $4300  [43 00] */
    /* TODO $0AC42E: dc.w $f048  [F0 48] */
    /* TODO $0AC430: dc.w $4300  [43 00] */
    /* TODO $0AC432: dc.w $f04f  [F0 4F] */
    /* TODO $0AC434: dc.w $4300  [43 00] */
    /* TODO $0AC436: dc.w $f057  [F0 57] */
    /* TODO $0AC438: dc.w $4300  [43 00] */
    /* TODO $0AC43A: dc.w $f05e  [F0 5E] */
    /* TODO $0AC43C: dc.w $4300  [43 00] */
    /* TODO $0AC43E: dc.w $f062  [F0 62] */
    /* TODO $0AC440: dc.w $4300  [43 00] */
    /* TODO $0AC442: dc.w $f067  [F0 67] */
    /* TODO $0AC444: dc.w $4300  [43 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $0AC45A: dc.w $f035  [F0 35] */
    /* TODO $0AC45C: dc.w $4300  [43 00] */
    /* TODO $0AC45E: dc.w $f03c  [F0 3C] */
    /* TODO $0AC460: dc.w $4300  [43 00] */
    /* TODO $0AC462: dc.w $f043  [F0 43] */
    /* TODO $0AC464: dc.w $4300  [43 00] */
    /* TODO $0AC466: dc.w $f049  [F0 49] */
    /* TODO $0AC468: dc.w $4300  [43 00] */
    /* TODO $0AC46A: dc.w $f050  [F0 50] */
    /* TODO $0AC46C: dc.w $4300  [43 00] */
    /* TODO $0AC46E: dc.w $f058  [F0 58] */
    /* TODO $0AC470: dc.w $4300  [43 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $0AC476: dc.w $f063  [F0 63] */
    /* TODO $0AC478: dc.w $4300  [43 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0AC486-$0AC4FA  (42 instructions, 116 bytes) */
void jt_0AC486(void) {
    M68K_OR8(g_m68k.d[2], 0xe);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $0AC492: dc.w $f02f  [F0 2F] */
    /* TODO $0AC494: dc.w $4300  [43 00] */
    /* TODO $0AC496: dc.w $f036  [F0 36] */
    /* TODO $0AC498: dc.w $4300  [43 00] */
    /* TODO $0AC49A: dc.w $f03d  [F0 3D] */
    /* TODO $0AC49C: dc.w $4300  [43 00] */
    /* TODO $0AC49E: dc.w $f044  [F0 44] */
    /* TODO $0AC4A0: dc.w $4300  [43 00] */
    /* TODO $0AC4A2: dc.w $f04a  [F0 4A] */
    /* TODO $0AC4A4: dc.w $4300  [43 00] */
    /* TODO $0AC4A6: dc.w $f051  [F0 51] */
    /* TODO $0AC4A8: dc.w $4300  [43 00] */
    /* TODO $0AC4AA: dc.w $f059  [F0 59] */
    /* TODO $0AC4AC: dc.w $4300  [43 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $0AC4CA: dc.w $f030  [F0 30] */
    /* TODO $0AC4CC: dc.w $4300  [43 00] */
    /* TODO $0AC4CE: dc.w $f037  [F0 37] */
    /* TODO $0AC4D0: dc.w $4300  [43 00] */
    /* TODO $0AC4D2: dc.w $f03e  [F0 3E] */
    /* TODO $0AC4D4: dc.w $4300  [43 00] */
    /* TODO $0AC4D6: dc.w $f045  [F0 45] */
    /* TODO $0AC4D8: dc.w $4300  [43 00] */
    /* TODO $0AC4DA: dc.w $f04b  [F0 4B] */
    /* TODO $0AC4DC: dc.w $4300  [43 00] */
    /* TODO $0AC4DE: dc.w $f052  [F0 52] */
    /* TODO $0AC4E0: dc.w $4300  [43 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0AC4FA-$0AC56E  (38 instructions, 116 bytes) */
void jt_0AC4FA(void) {
    M68K_OR8(g_m68k.d[2], 0xe);
    /* TODO $0AC4FE: dc.w $f02a  [F0 2A] */
    /* TODO $0AC500: dc.w $4300  [43 00] */
    /* TODO $0AC502: dc.w $f02b  [F0 2B] */
    /* TODO $0AC504: dc.w $4300  [43 00] */
    /* TODO $0AC506: dc.w $f031  [F0 31] */
    /* TODO $0AC508: dc.w $4300  [43 00] */
    /* TODO $0AC50A: dc.w $f038  [F0 38] */
    /* TODO $0AC50C: dc.w $4300  [43 00] */
    /* TODO $0AC50E: dc.w $f03f  [F0 3F] */
    /* TODO $0AC510: dc.w $4300  [43 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $0AC53A: dc.w $f02c  [F0 2C] */
    /* TODO $0AC53C: dc.w $4300  [43 00] */
    /* TODO $0AC53E: dc.w $f032  [F0 32] */
    /* TODO $0AC540: dc.w $4300  [43 00] */
    /* TODO $0AC542: dc.w $f039  [F0 39] */
    /* TODO $0AC544: dc.w $4300  [43 00] */
    /* TODO $0AC546: dc.w $f040  [F0 40] */
    /* TODO $0AC548: dc.w $4300  [43 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0AC56E-$0AC5E2  (36 instructions, 116 bytes) */
void jt_0AC56E(void) {
    M68K_OR8(g_m68k.d[2], 0xe);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $0AC576: dc.w $f02d  [F0 2D] */
    /* TODO $0AC578: dc.w $4300  [43 00] */
    /* TODO $0AC57A: dc.w $f033  [F0 33] */
    /* TODO $0AC57C: dc.w $4300  [43 00] */
    /* TODO $0AC57E: dc.w $f03a  [F0 3A] */
    /* TODO $0AC580: dc.w $4300  [43 00] */
    M68K_AND16(g_m68k.d[4], bus_read16(g_m68k.a[2]));
    /* TODO $0AC584: dc.w $4302  [43 02] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $0AC5AE: dc.w $f02e  [F0 2E] */
    /* TODO $0AC5B0: dc.w $4300  [43 00] */
    /* TODO $0AC5B2: dc.w $f034  [F0 34] */
    /* TODO $0AC5B4: dc.w $4300  [43 00] */
    /* TODO $0AC5B6: dc.w $f03b  [F0 3B] */
    /* TODO $0AC5B8: dc.w $4300  [43 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0AC5E2-$0AC656  (29 instructions, 116 bytes) */
void jt_0AC5E2(void) {
    M68K_OR8(g_m68k.d[2], 0xe);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0AC656-$0AC6B2  (25 instructions, 92 bytes) */
void jt_0AC656(void) {
    M68K_OR8(g_m68k.d[2], 0xe);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $0AC67E: dc.w $f081  [F0 81] */
    M68K_NEG8(g_m68k.d[0]);
    /* TODO $0AC682: dc.w $f085  [F0 85] */
    M68K_NEG8(g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0AC6CA-$0AC722  (26 instructions, 88 bytes) */
void jt_0AC6CA(void) {
    M68K_OR8(g_m68k.d[2], 0xe);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $0AC6EA: dc.w $f07c  [F0 7C] */
    M68K_NEG8(g_m68k.d[0]);
    /* TODO $0AC6EE: dc.w $f080  [F0 80] */
    M68K_NEG8(g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULS(g_m68k.d[4], bus_read16(g_m68k.a[6]));
    M68K_NEG8(g_m68k.d[2]);
    /* TODO $0AC71E: dc.w $f079  [F0 79] */
    M68K_NEG8(g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0AC73E-$0AC75E  (11 instructions, 32 bytes) */
void jt_0AC73E(void) {
    M68K_OR8(g_m68k.d[2], 0xe);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $0AC752: dc.w $f070  [F0 70] */
    M68K_NEG8(g_m68k.d[0]);
    /* TODO $0AC756: dc.w $f075  [F0 75] */
    M68K_NEG8(g_m68k.d[0]);
    /* TODO $0AC75A: dc.w $f07a  [F0 7A] */
    M68K_NEG8(g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0AC7B2-$0AC826  (37 instructions, 116 bytes) */
void jt_0AC7B2(void) {
    M68K_OR8(g_m68k.d[2], 0xe);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $0AC7C2: dc.w $f06d  [F0 6D] */
    M68K_NEG8(g_m68k.d[0]);
    /* TODO $0AC7C6: dc.w $f072  [F0 72] */
    M68K_NEG8(g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $0AC7DA: dc.w $f084  [F0 84] */
    M68K_NEG8(g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $0AC7F6: dc.w $f06a  [F0 6A] */
    M68K_NEG8(g_m68k.d[0]);
    /* TODO $0AC7FA: dc.w $f06e  [F0 6E] */
    M68K_NEG8(g_m68k.d[0]);
    /* TODO $0AC7FE: dc.w $f073  [F0 73] */
    M68K_NEG8(g_m68k.d[0]);
    /* TODO $0AC802: dc.w $f077  [F0 77] */
    M68K_NEG8(g_m68k.d[0]);
    /* TODO $0AC806: dc.w $f07b  [F0 7B] */
    M68K_NEG8(g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0AC826-$0AC89A  (35 instructions, 116 bytes) */
void jt_0AC826(void) {
    M68K_OR8(g_m68k.d[2], 0xe);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $0AC82E: dc.w $f069  [F0 69] */
    M68K_NEG8(g_m68k.d[0]);
    /* TODO $0AC832: dc.w $f06b  [F0 6B] */
    M68K_NEG8(g_m68k.d[0]);
    /* TODO $0AC836: dc.w $f06f  [F0 6F] */
    M68K_NEG8(g_m68k.d[0]);
    /* TODO $0AC83A: dc.w $f074  [F0 74] */
    M68K_NEG8(g_m68k.d[0]);
    /* TODO $0AC83E: dc.w $f078  [F0 78] */
    M68K_NEG8(g_m68k.d[0]);
    M68K_AND16(g_m68k.d[4], _predec16(4));
    M68K_NEG8(g_m68k.d[3]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0AC89A-$0AC90E  (29 instructions, 116 bytes) */
void jt_0AC89A(void) {
    M68K_OR8(g_m68k.d[2], 0xe);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0AC90E-$0AC982  (29 instructions, 116 bytes) */
void jt_0AC90E(void) {
    M68K_OR8(g_m68k.d[2], 0xe);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0AC982-$0AC9F6  (33 instructions, 116 bytes) */
void jt_0AC982(void) {
    M68K_OR8(g_m68k.d[2], 0xe);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $0AC9AA: dc.w $f09d  [F0 9D] */
    /* TODO $0AC9AC: dc.w $4500  [45 00] */
    /* TODO $0AC9AE: dc.w $f0a1  [F0 A1] */
    /* TODO $0AC9B0: dc.w $4500  [45 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $0AC9DE: dc.w $f09b  [F0 9B] */
    /* TODO $0AC9E0: dc.w $4500  [45 00] */
    /* TODO $0AC9E2: dc.w $f09e  [F0 9E] */
    /* TODO $0AC9E4: dc.w $4500  [45 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0AC9F6-$0ACA6A  (31 instructions, 116 bytes) */
void jt_0AC9F6(void) {
    M68K_OR8(g_m68k.d[2], 0xe);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $0ACA52: dc.w $f09c  [F0 9C] */
    /* TODO $0ACA54: dc.w $4500  [45 00] */
    /* TODO $0ACA56: dc.w $f09f  [F0 9F] */
    /* TODO $0ACA58: dc.w $4500  [45 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0ACA6A-$0ACADE  (37 instructions, 116 bytes) */
void jt_0ACA6A(void) {
    M68K_OR8(g_m68k.d[2], 0xe);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $0ACA82: dc.w $f097  [F0 97] */
    /* TODO $0ACA84: dc.w $4500  [45 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $0ACA92: dc.w $f0a0  [F0 A0] */
    /* TODO $0ACA94: dc.w $4500  [45 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $0ACA9A: dc.w $f0a3  [F0 A3] */
    /* TODO $0ACA9C: dc.w $4500  [45 00] */
    /* TODO $0ACA9E: dc.w $f0a5  [F0 A5] */
    /* TODO $0ACAA0: dc.w $4500  [45 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $0ACAB2: dc.w $f08c  [F0 8C] */
    /* TODO $0ACAB4: dc.w $4500  [45 00] */
    /* TODO $0ACAB6: dc.w $f091  [F0 91] */
    /* TODO $0ACAB8: dc.w $4500  [45 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $0ACACE: dc.w $f0a2  [F0 A2] */
    /* TODO $0ACAD0: dc.w $4500  [45 00] */
    /* TODO $0ACAD2: dc.w $f0a4  [F0 A4] */
    /* TODO $0ACAD4: dc.w $4500  [45 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0ACADE-$0ACB52  (37 instructions, 116 bytes) */
void jt_0ACADE(void) {
    M68K_OR8(g_m68k.d[2], 0xe);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $0ACAEA: dc.w $f08a  [F0 8A] */
    /* TODO $0ACAEC: dc.w $4500  [45 00] */
    /* TODO $0ACAEE: dc.w $f08d  [F0 8D] */
    /* TODO $0ACAF0: dc.w $4500  [45 00] */
    /* TODO $0ACAF2: dc.w $f092  [F0 92] */
    /* TODO $0ACAF4: dc.w $4500  [45 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $0ACB22: dc.w $f08b  [F0 8B] */
    /* TODO $0ACB24: dc.w $4500  [45 00] */
    /* TODO $0ACB26: dc.w $f08e  [F0 8E] */
    /* TODO $0ACB28: dc.w $4500  [45 00] */
    /* TODO $0ACB2A: dc.w $f093  [F0 93] */
    /* TODO $0ACB2C: dc.w $4500  [45 00] */
    /* TODO $0ACB2E: dc.w $f098  [F0 98] */
    /* TODO $0ACB30: dc.w $4500  [45 00] */
    /* TODO $0ACB32: dc.w $f09a  [F0 9A] */
    /* TODO $0ACB34: dc.w $4500  [45 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0ACB52-$0ACBC6  (32 instructions, 116 bytes) */
void jt_0ACB52(void) {
    M68K_OR8(g_m68k.d[2], 0xe);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $0ACB66: dc.w $f094  [F0 94] */
    /* TODO $0ACB68: dc.w $4500  [45 00] */
    /* TODO $0ACB6A: dc.w $f099  [F0 99] */
    /* TODO $0ACB6C: dc.w $4500  [45 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $0ACB9E: dc.w $f095  [F0 95] */
    /* TODO $0ACBA0: dc.w $4500  [45 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0ACBC6-$0ACC3A  (32 instructions, 116 bytes) */
void jt_0ACBC6(void) {
    M68K_OR8(g_m68k.d[2], 0xe);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $0ACBD6: dc.w $f08f  [F0 8F] */
    /* TODO $0ACBD8: dc.w $4500  [45 00] */
    /* TODO $0ACBDA: dc.w $f096  [F0 96] */
    /* TODO $0ACBDC: dc.w $4500  [45 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $0ACC0E: dc.w $f090  [F0 90] */
    /* TODO $0ACC10: dc.w $4500  [45 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0ACC3A-$0ACCAE  (29 instructions, 116 bytes) */
void jt_0ACC3A(void) {
    M68K_OR8(g_m68k.d[2], 0xe);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0ACCAE-$0ACCB2  (1 instructions, 4 bytes) */
void jt_0ACCAE(void) {
    M68K_OR8(g_m68k.d[2], 0xd);
    /* WARNING: function did not end with RTS */
}

/* $0ACD1A-$0ACD1E  (1 instructions, 4 bytes) */
void jt_0ACD1A(void) {
    M68K_OR8(g_m68k.d[2], 0xd);
    /* WARNING: function did not end with RTS */
}

/* $0ACD86-$0ACD8A  (1 instructions, 4 bytes) */
void jt_0ACD86(void) {
    M68K_OR8(g_m68k.d[2], 0xd);
    /* WARNING: function did not end with RTS */
}

/* $0ACDF2-$0ACDF6  (1 instructions, 4 bytes) */
void jt_0ACDF2(void) {
    M68K_OR8(g_m68k.d[2], 0xd);
    /* WARNING: function did not end with RTS */
}

/* $0ACE5E-$0ACE8A  (19 instructions, 44 bytes) */
void jt_0ACE5E(void) {
    M68K_OR8(g_m68k.d[2], 0xd);
    /* TODO $0ACE62: dc.w $f0a6  [F0 A6] */
    M68K_NOT8(g_m68k.d[0]);
    /* TODO $0ACE66: dc.w $f0aa  [F0 AA] */
    M68K_NOT8(g_m68k.d[0]);
    /* TODO $0ACE6A: dc.w $f0b0  [F0 B0] */
    M68K_NOT8(g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $0ACE76: dc.w $f0c8  [F0 C8] */
    M68K_NOT8(g_m68k.d[0]);
    /* TODO $0ACE7A: dc.w $f0d1  [F0 D1] */
    M68K_NOT8(g_m68k.d[0]);
    /* TODO $0ACE7E: dc.w $f0dc  [F0 DC] */
    M68K_NOT8(g_m68k.d[0]);
    /* TODO $0ACE82: dc.w $f0e3  [F0 E3] */
    M68K_NOT8(g_m68k.d[0]);
    /* TODO $0ACE86: dc.w $f0eb  [F0 EB] */
    M68K_NOT8(g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0ACECA-$0ACEEE  (17 instructions, 36 bytes) */
void jt_0ACECA(void) {
    M68K_OR8(g_m68k.d[2], 0xd);
    /* TODO $0ACECE: dc.w $f0a8  [F0 A8] */
    M68K_NOT8(g_m68k.d[0]);
    /* TODO $0ACED2: dc.w $f0ac  [F0 AC] */
    M68K_NOT8(g_m68k.d[0]);
    /* TODO $0ACED6: dc.w $f0b2  [F0 B2] */
    M68K_NOT8(g_m68k.d[0]);
    /* TODO $0ACEDA: dc.w $f0b8  [F0 B8] */
    M68K_NOT8(g_m68k.d[0]);
    /* TODO $0ACEDE: dc.w $f0c1  [F0 C1] */
    M68K_NOT8(g_m68k.d[0]);
    /* TODO $0ACEE2: dc.w $f0ca  [F0 CA] */
    M68K_NOT8(g_m68k.d[0]);
    /* TODO $0ACEE6: dc.w $f0d3  [F0 D3] */
    M68K_NOT8(g_m68k.d[0]);
    /* TODO $0ACEEA: dc.w $f0de  [F0 DE] */
    M68K_NOT8(g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0ACF36-$0ACF3A  (1 instructions, 4 bytes) */
void jt_0ACF36(void) {
    M68K_OR8(g_m68k.d[2], 0xd);
    /* WARNING: function did not end with RTS */
}

/* $0ACFA2-$0ACFCA  (10 instructions, 40 bytes) */
void jt_0ACFA2(void) {
    M68K_OR8(g_m68k.d[2], 0xd);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0AD00E-$0AD036  (11 instructions, 40 bytes) */
void jt_0AD00E(void) {
    M68K_OR8(g_m68k.d[2], 0xd);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $0AD032: dc.w $f114  [F1 14] */
    /* TODO $0AD034: dc.w $4700  [47 00] */
    /* WARNING: function did not end with RTS */
}

/* $0AD07A-$0AD092  (7 instructions, 24 bytes) */
void jt_0AD07A(void) {
    M68K_OR8(g_m68k.d[2], 0xd);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $0AD08E: dc.w $f0fe  [F0 FE] */
    /* TODO $0AD090: dc.w $4700  [47 00] */
    /* WARNING: function did not end with RTS */
}

/* $0AD0B8-$0AD0C6  (5 instructions, 14 bytes) */
void jt_0AD0B8(void) {
    /* TODO $0AD0B8: dc.w $4700  [47 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $0AD0C2: dc.w $f0ff  [F0 FF] */
    /* TODO $0AD0C4: dc.w $4700  [47 00] */
    /* WARNING: function did not end with RTS */
}

/* $0AD0E6-$0AD0FA  (5 instructions, 20 bytes) */
void jt_0AD0E6(void) {
    M68K_OR8(g_m68k.d[2], 0xd);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0AD152-$0AD16A  (6 instructions, 24 bytes) */
void jt_0AD152(void) {
    M68K_OR8(g_m68k.d[2], 0xd);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0AD1BE-$0AD20A  (19 instructions, 76 bytes) */
void jt_0AD1BE(void) {
    M68K_OR8(g_m68k.d[2], 0xd);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0AD22A-$0AD23E  (6 instructions, 20 bytes) */
void jt_0AD22A(void) {
    M68K_OR8(g_m68k.d[2], 0xd);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $0AD23A: dc.w $f0fc  [F0 FC] */
    /* TODO $0AD23C: dc.w $4700  [47 00] */
    /* WARNING: function did not end with RTS */
}

/* $0AD296-$0AD2BE  (10 instructions, 40 bytes) */
void jt_0AD296(void) {
    M68K_OR8(g_m68k.d[2], 0xd);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}
