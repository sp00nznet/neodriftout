/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $0A8250 - $0AB5EE */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

/* $0A8250-$0A8490  (183 instructions, 576 bytes) */
void jt_0A8250(void) {
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x10); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_LSL32(g_m68k.d[3], 0x6);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_LSL32(g_m68k.d[6], 0x6);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
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
    M68K_ROL16(g_m68k.d[2], g_m68k.d[6]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_ROL16(g_m68k.d[4], g_m68k.d[6]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_ROL16(g_m68k.d[7], g_m68k.d[6]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_LSL32(g_m68k.d[1], 0x6);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_LSL32(g_m68k.d[4], 0x6);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_LSL32(g_m68k.d[7], 0x6);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $0A82B8: roxl.l #$6, d4  [ED 94] */
    /* TODO $0A82BA: dc.w $4700  [47 00] */
    M68K_LSL32(g_m68k.d[3], g_m68k.d[6]);
    /* TODO $0A82BE: dc.w $4700  [47 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_ROL16(g_m68k.d[3], g_m68k.d[6]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_ROL16(g_m68k.d[5], g_m68k.d[6]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_LSL32(g_m68k.d[0], 0x6);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_LSL32(g_m68k.d[2], 0x6);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_LSL32(g_m68k.d[5], 0x6);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_LSL32(g_m68k.d[0], 0x6);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $0A82F8: roxl.l #$6, d5  [ED 95] */
    /* TODO $0A82FA: dc.w $4700  [47 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_ROL16(g_m68k.d[6], g_m68k.d[6]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_LSL32(g_m68k.d[1], 0x6);
    /* TODO $0A8336: dc.w $4700  [47 00] */
    /* TODO $0A8338: roxl.l #$6, d6  [ED 96] */
    /* TODO $0A833A: dc.w $4700  [47 00] */
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
    /* TODO $0A8378: roxl.l #$6, d7  [ED 97] */
    /* TODO $0A837A: dc.w $4700  [47 00] */
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
    M68K_ROL32(g_m68k.d[0], 0x6);
    /* TODO $0A83BA: dc.w $4700  [47 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $0A83C4: roxl.l d6, d5  [ED B5] */
    /* TODO $0A83C6: dc.w $4700  [47 00] */
    M68K_ROL32(g_m68k.d[3], g_m68k.d[6]);
    /* TODO $0A83CA: dc.w $4700  [47 00] */
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
    M68K_LSL32(g_m68k.d[2], 0x6);
    /* TODO $0A83F6: dc.w $4700  [47 00] */
    M68K_ROL32(g_m68k.d[1], 0x6);
    /* TODO $0A83FA: dc.w $4700  [47 00] */
    M68K_LSL32(g_m68k.d[4], g_m68k.d[6]);
    /* TODO $0A83FE: dc.w $4700  [47 00] */
    M68K_LSL32(g_m68k.d[6], g_m68k.d[6]);
    /* TODO $0A8402: dc.w $4700  [47 00] */
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
    M68K_LSL32(g_m68k.d[3], 0x6);
    /* TODO $0A8436: dc.w $4700  [47 00] */
    M68K_ROL32(g_m68k.d[2], 0x6);
    /* TODO $0A843A: dc.w $4700  [47 00] */
    M68K_LSL32(g_m68k.d[5], g_m68k.d[6]);
    /* TODO $0A843E: dc.w $4700  [47 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_ROL32(g_m68k.d[4], g_m68k.d[6]);
    /* TODO $0A844A: dc.w $4700  [47 00] */
    /* TODO $0A844C: dc.w $edc4  [ED C4] */
    /* TODO $0A844E: dc.w $4700  [47 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_LSL32(g_m68k.d[4], 0x6);
    /* TODO $0A8476: dc.w $4700  [47 00] */
    M68K_ROL32(g_m68k.d[3], 0x6);
    /* TODO $0A847A: dc.w $4700  [47 00] */
    M68K_LSL32(g_m68k.d[6], g_m68k.d[6]);
    /* TODO $0A847E: dc.w $4700  [47 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $0A8484: roxl.l d6, d6  [ED B6] */
    /* TODO $0A8486: dc.w $4700  [47 00] */
    M68K_ROL32(g_m68k.d[5], g_m68k.d[6]);
    /* TODO $0A848A: dc.w $4700  [47 00] */
    /* TODO $0A848C: dc.w $edc5  [ED C5] */
    /* TODO $0A848E: dc.w $4700  [47 00] */
    /* WARNING: function did not end with RTS */
}

/* $0A8754-$0A87B8  (28 instructions, 100 bytes) */
void jt_0A8754(void) {
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
    M68K_ROR32(g_m68k.d[7], 0x5);
    /* TODO $0A87AE: dc.w $4100  [41 00] */
    M68K_LSR32(g_m68k.d[4], g_m68k.d[5]);
    /* TODO $0A87B2: dc.w $4100  [41 00] */
    M68K_ROR32(g_m68k.d[3], g_m68k.d[5]);
    /* TODO $0A87B6: dc.w $4100  [41 00] */
    /* WARNING: function did not end with RTS */
}

/* $0A8B54-$0A8F54  (306 instructions, 1024 bytes) */
void jt_0A8B54(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_LSL8(g_m68k.d[6], g_m68k.d[5]);
    /* TODO $0A8B6E: dc.w $4100  [41 00] */
    M68K_LSL8(g_m68k.d[3], g_m68k.d[5]);
    /* TODO $0A8B72: dc.w $4100  [41 00] */
    /* TODO $0A8B74: roxl.b d5, d0  [EB 30] */
    /* TODO $0A8B76: dc.w $4100  [41 00] */
    /* TODO $0A8B78: roxl.b d5, d5  [EB 35] */
    /* TODO $0A8B7A: dc.w $4100  [41 00] */
    M68K_ROL8(g_m68k.d[2], g_m68k.d[5]);
    /* TODO $0A8B7E: dc.w $4100  [41 00] */
    M68K_ROL8(g_m68k.d[7], g_m68k.d[5]);
    /* TODO $0A8B82: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[4], 0x5);
    /* TODO $0A8B86: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[1], 0x5);
    /* TODO $0A8B8A: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[6], 0x5);
    /* TODO $0A8B8E: dc.w $4100  [41 00] */
    /* TODO $0A8B90: roxl.w #$5, d3  [EB 53] */
    /* TODO $0A8B92: dc.w $4100  [41 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_LSL8(g_m68k.d[7], g_m68k.d[5]);
    /* TODO $0A8BAE: dc.w $4100  [41 00] */
    M68K_LSL8(g_m68k.d[4], g_m68k.d[5]);
    /* TODO $0A8BB2: dc.w $4100  [41 00] */
    /* TODO $0A8BB4: roxl.b d5, d1  [EB 31] */
    /* TODO $0A8BB6: dc.w $4100  [41 00] */
    /* TODO $0A8BB8: roxl.b d5, d6  [EB 36] */
    /* TODO $0A8BBA: dc.w $4100  [41 00] */
    M68K_ROL8(g_m68k.d[3], g_m68k.d[5]);
    /* TODO $0A8BBE: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[0], 0x5);
    /* TODO $0A8BC2: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[5], 0x5);
    /* TODO $0A8BC6: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[2], 0x5);
    /* TODO $0A8BCA: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[7], 0x5);
    /* TODO $0A8BCE: dc.w $4100  [41 00] */
    /* TODO $0A8BD0: roxl.w #$5, d4  [EB 54] */
    /* TODO $0A8BD2: dc.w $4100  [41 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_LSL8(g_m68k.d[0], g_m68k.d[5]);
    /* TODO $0A8BEE: dc.w $4100  [41 00] */
    M68K_LSL8(g_m68k.d[5], g_m68k.d[5]);
    /* TODO $0A8BF2: dc.w $4100  [41 00] */
    /* TODO $0A8BF4: roxl.b d5, d2  [EB 32] */
    /* TODO $0A8BF6: dc.w $4100  [41 00] */
    /* TODO $0A8BF8: roxl.b d5, d7  [EB 37] */
    /* TODO $0A8BFA: dc.w $4100  [41 00] */
    M68K_ROL8(g_m68k.d[4], g_m68k.d[5]);
    /* TODO $0A8BFE: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[1], 0x5);
    /* TODO $0A8C02: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[6], 0x5);
    /* TODO $0A8C06: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[3], 0x5);
    /* TODO $0A8C0A: dc.w $4100  [41 00] */
    /* TODO $0A8C0C: roxl.w #$5, d0  [EB 50] */
    /* TODO $0A8C0E: dc.w $4100  [41 00] */
    /* TODO $0A8C10: roxl.w #$5, d5  [EB 55] */
    /* TODO $0A8C12: dc.w $4100  [41 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_LSL8(g_m68k.d[1], g_m68k.d[5]);
    /* TODO $0A8C2E: dc.w $4100  [41 00] */
    M68K_LSL8(g_m68k.d[6], g_m68k.d[5]);
    /* TODO $0A8C32: dc.w $4100  [41 00] */
    /* TODO $0A8C34: roxl.b d5, d3  [EB 33] */
    /* TODO $0A8C36: dc.w $4100  [41 00] */
    M68K_ROL8(g_m68k.d[0], g_m68k.d[5]);
    /* TODO $0A8C3A: dc.w $4100  [41 00] */
    M68K_ROL8(g_m68k.d[5], g_m68k.d[5]);
    /* TODO $0A8C3E: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[2], 0x5);
    /* TODO $0A8C42: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[7], 0x5);
    /* TODO $0A8C46: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[4], 0x5);
    /* TODO $0A8C4A: dc.w $4100  [41 00] */
    /* TODO $0A8C4C: roxl.w #$5, d1  [EB 51] */
    /* TODO $0A8C4E: dc.w $4100  [41 00] */
    /* TODO $0A8C50: roxl.w #$5, d6  [EB 56] */
    /* TODO $0A8C52: dc.w $4100  [41 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_LSL8(g_m68k.d[2], g_m68k.d[5]);
    /* TODO $0A8C6E: dc.w $4100  [41 00] */
    M68K_LSL8(g_m68k.d[7], g_m68k.d[5]);
    /* TODO $0A8C72: dc.w $4100  [41 00] */
    /* TODO $0A8C74: roxl.b d5, d4  [EB 34] */
    /* TODO $0A8C76: dc.w $4100  [41 00] */
    M68K_ROL8(g_m68k.d[1], g_m68k.d[5]);
    /* TODO $0A8C7A: dc.w $4100  [41 00] */
    M68K_ROL8(g_m68k.d[6], g_m68k.d[5]);
    /* TODO $0A8C7E: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[3], 0x5);
    /* TODO $0A8C82: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[0], 0x5);
    /* TODO $0A8C86: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[5], 0x5);
    /* TODO $0A8C8A: dc.w $4100  [41 00] */
    /* TODO $0A8C8C: roxl.w #$5, d2  [EB 52] */
    /* TODO $0A8C8E: dc.w $4100  [41 00] */
    /* TODO $0A8C90: roxl.w #$5, d7  [EB 57] */
    /* TODO $0A8C92: dc.w $4100  [41 00] */
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

/* $0A8F54-$0A8FBC  (36 instructions, 104 bytes) */
void jt_0A8F54(void) {
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
    M68K_ROL16(g_m68k.d[0], 0x5);
    /* TODO $0A8F96: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[5], g_m68k.d[5]);
    /* TODO $0A8F9A: dc.w $4100  [41 00] */
    /* TODO $0A8F9C: roxl.w d5, d4  [EB 74] */
    /* TODO $0A8F9E: dc.w $4100  [41 00] */
    M68K_LSL32(g_m68k.d[3], 0x5);
    /* TODO $0A8FA2: dc.w $4100  [41 00] */
    /* TODO $0A8FA4: roxl.l #$5, d2  [EB 92] */
    /* TODO $0A8FA6: dc.w $4100  [41 00] */
    M68K_LSL32(g_m68k.d[1], g_m68k.d[5]);
    /* TODO $0A8FAA: dc.w $4100  [41 00] */
    M68K_LSL32(g_m68k.d[4], g_m68k.d[5]);
    M68K_NOT8(g_m68k.d[0]);
    M68K_LSL32(g_m68k.d[5], g_m68k.d[5]);
    M68K_NOT8(g_m68k.d[0]);
    /* TODO $0A8FB4: roxl.l d5, d1  [EB B1] */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* TODO $0A8FB8: dc.w $ebc0  [EB C0] */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $0A9354-$0A9400  (86 instructions, 172 bytes) */
void jt_0A9354(void) {
    M68K_LSR8(g_m68k.d[0], g_m68k.d[6]);
    /* TODO $0A9356: dc.w $4100  [41 00] */
    M68K_LSR8(g_m68k.d[5], g_m68k.d[6]);
    /* TODO $0A935A: dc.w $4100  [41 00] */
    /* TODO $0A935C: roxr.l #$6, d2  [EC 32] */
    /* TODO $0A935E: dc.w $4100  [41 00] */
    /* TODO $0A9360: roxr.l #$6, d7  [EC 37] */
    /* TODO $0A9362: dc.w $4100  [41 00] */
    M68K_ROR8(g_m68k.d[3], g_m68k.d[6]);
    /* TODO $0A9366: dc.w $4100  [41 00] */
    M68K_ROR8(g_m68k.d[7], g_m68k.d[6]);
    /* TODO $0A936A: dc.w $4100  [41 00] */
    M68K_LSL32(g_m68k.d[4], g_m68k.d[5]);
    M68K_NOT8(g_m68k.d[0]);
    M68K_LSL32(g_m68k.d[5], g_m68k.d[5]);
    M68K_NOT8(g_m68k.d[0]);
    M68K_ASR16(g_m68k.d[4], 0x6);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_LSR16(g_m68k.d[1], 0x6);
    /* TODO $0A937A: dc.w $4500  [45 00] */
    M68K_LSR16(g_m68k.d[6], 0x6);
    /* TODO $0A937E: dc.w $4500  [45 00] */
    /* TODO $0A9380: roxr.w #$6, d3  [EC 53] */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_ROR16(g_m68k.d[0], 0x6);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_ROR16(g_m68k.d[5], 0x6);
    M68K_NEG8(g_m68k.d[0]);
    M68K_ASR16(g_m68k.d[2], g_m68k.d[6]);
    M68K_NEG8(g_m68k.d[0]);
    M68K_ASR16(g_m68k.d[7], g_m68k.d[6]);
    M68K_NEG8(g_m68k.d[0]);
    M68K_LSR8(g_m68k.d[1], g_m68k.d[6]);
    /* TODO $0A9396: dc.w $4100  [41 00] */
    M68K_LSR8(g_m68k.d[6], g_m68k.d[6]);
    /* TODO $0A939A: dc.w $4100  [41 00] */
    /* TODO $0A939C: roxr.l #$6, d3  [EC 33] */
    /* TODO $0A939E: dc.w $4100  [41 00] */
    M68K_ROR8(g_m68k.d[0], g_m68k.d[6]);
    /* TODO $0A93A2: dc.w $4100  [41 00] */
    M68K_ROR8(g_m68k.d[4], g_m68k.d[6]);
    /* TODO $0A93A6: dc.w $4100  [41 00] */
    M68K_LSL32(g_m68k.d[3], g_m68k.d[5]);
    /* TODO $0A93AA: dc.w $4100  [41 00] */
    M68K_LSL32(g_m68k.d[4], g_m68k.d[5]);
    M68K_NOT8(g_m68k.d[0]);
    M68K_LSL32(g_m68k.d[5], g_m68k.d[5]);
    M68K_NOT8(g_m68k.d[0]);
    M68K_ASR16(g_m68k.d[5], 0x6);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_LSR16(g_m68k.d[2], 0x6);
    /* TODO $0A93BA: dc.w $4500  [45 00] */
    M68K_LSR16(g_m68k.d[7], 0x6);
    /* TODO $0A93BE: dc.w $4500  [45 00] */
    /* TODO $0A93C0: roxr.w #$6, d4  [EC 54] */
    M68K_NEG8(g_m68k.d[0]);
    M68K_ROR16(g_m68k.d[1], 0x6);
    M68K_NEG8(g_m68k.d[0]);
    M68K_ROR16(g_m68k.d[6], 0x6);
    M68K_NEG8(g_m68k.d[0]);
    M68K_ASR16(g_m68k.d[3], g_m68k.d[6]);
    M68K_NEG8(g_m68k.d[0]);
    M68K_LSR16(g_m68k.d[0], g_m68k.d[6]);
    M68K_NEG8(g_m68k.d[0]);
    M68K_LSR8(g_m68k.d[2], g_m68k.d[6]);
    /* TODO $0A93D6: dc.w $4100  [41 00] */
    M68K_LSR8(g_m68k.d[7], g_m68k.d[6]);
    /* TODO $0A93DA: dc.w $4100  [41 00] */
    /* TODO $0A93DC: roxr.l #$6, d4  [EC 34] */
    /* TODO $0A93DE: dc.w $4100  [41 00] */
    M68K_ROR8(g_m68k.d[1], g_m68k.d[6]);
    /* TODO $0A93E2: dc.w $4100  [41 00] */
    M68K_ROR8(g_m68k.d[5], g_m68k.d[6]);
    /* TODO $0A93E6: dc.w $4100  [41 00] */
    M68K_LSL32(g_m68k.d[3], g_m68k.d[5]);
    /* TODO $0A93EA: dc.w $4100  [41 00] */
    M68K_LSL32(g_m68k.d[4], g_m68k.d[5]);
    M68K_NOT8(g_m68k.d[0]);
    M68K_LSL32(g_m68k.d[5], g_m68k.d[5]);
    M68K_NOT8(g_m68k.d[0]);
    M68K_ASR16(g_m68k.d[6], 0x6);
    /* TODO $0A93F6: dc.w $4500  [45 00] */
    M68K_LSR16(g_m68k.d[3], 0x6);
    /* TODO $0A93FA: dc.w $4500  [45 00] */
    /* TODO $0A93FC: roxr.w #$6, d0  [EC 50] */
    /* TODO $0A93FE: dc.w $4500  [45 00] */
    /* WARNING: function did not end with RTS */
}

/* $0A9400-$0A9754  (250 instructions, 852 bytes) */
void jt_0A9400(void) {
    /* TODO $0A9400: roxr.w #$6, d5  [EC 55] */
    M68K_NEG8(g_m68k.d[0]);
    M68K_ROR16(g_m68k.d[2], 0x6);
    M68K_NEG8(g_m68k.d[0]);
    M68K_ROR16(g_m68k.d[7], 0x6);
    M68K_NEG8(g_m68k.d[0]);
    M68K_ASR16(g_m68k.d[4], g_m68k.d[6]);
    M68K_NEG8(g_m68k.d[0]);
    M68K_LSR16(g_m68k.d[1], g_m68k.d[6]);
    M68K_NEG8(g_m68k.d[0]);
    M68K_LSR8(g_m68k.d[3], g_m68k.d[6]);
    /* TODO $0A9416: dc.w $4100  [41 00] */
    /* TODO $0A9418: roxr.l #$6, d0  [EC 30] */
    /* TODO $0A941A: dc.w $4100  [41 00] */
    /* TODO $0A941C: roxr.l #$6, d5  [EC 35] */
    /* TODO $0A941E: dc.w $4100  [41 00] */
    M68K_ROR8(g_m68k.d[2], g_m68k.d[6]);
    /* TODO $0A9422: dc.w $4100  [41 00] */
    M68K_ROR8(g_m68k.d[6], g_m68k.d[6]);
    /* TODO $0A9426: dc.w $4100  [41 00] */
    M68K_LSL32(g_m68k.d[3], g_m68k.d[5]);
    /* TODO $0A942A: dc.w $4100  [41 00] */
    M68K_ASR16(g_m68k.d[0], 0x6);
    M68K_NOT8(g_m68k.d[0]);
    M68K_ASR16(g_m68k.d[2], 0x6);
    M68K_NOT8(g_m68k.d[0]);
    M68K_ASR16(g_m68k.d[7], 0x6);
    /* TODO $0A9436: dc.w $4500  [45 00] */
    M68K_LSR16(g_m68k.d[4], 0x6);
    /* TODO $0A943A: dc.w $4500  [45 00] */
    /* TODO $0A943C: roxr.w #$6, d1  [EC 51] */
    /* TODO $0A943E: dc.w $4500  [45 00] */
    /* TODO $0A9440: roxr.w #$6, d6  [EC 56] */
    M68K_NEG8(g_m68k.d[0]);
    M68K_ROR16(g_m68k.d[3], 0x6);
    M68K_NEG8(g_m68k.d[0]);
    M68K_ASR16(g_m68k.d[0], g_m68k.d[6]);
    M68K_NEG8(g_m68k.d[0]);
    M68K_ASR16(g_m68k.d[5], g_m68k.d[6]);
    M68K_NEG8(g_m68k.d[0]);
    M68K_LSR16(g_m68k.d[2], g_m68k.d[6]);
    M68K_NEG8(g_m68k.d[0]);
    M68K_LSR8(g_m68k.d[4], g_m68k.d[6]);
    /* TODO $0A9456: dc.w $4100  [41 00] */
    /* TODO $0A9458: roxr.l #$6, d1  [EC 31] */
    /* TODO $0A945A: dc.w $4100  [41 00] */
    /* TODO $0A945C: roxr.l #$6, d6  [EC 36] */
    /* TODO $0A945E: dc.w $4100  [41 00] */
    M68K_LSL32(g_m68k.d[3], g_m68k.d[5]);
    /* TODO $0A9462: dc.w $4100  [41 00] */
    M68K_LSL32(g_m68k.d[3], g_m68k.d[5]);
    /* TODO $0A9466: dc.w $4100  [41 00] */
    M68K_LSL32(g_m68k.d[3], g_m68k.d[5]);
    /* TODO $0A946A: dc.w $4100  [41 00] */
    M68K_ASR16(g_m68k.d[1], 0x6);
    M68K_NOT8(g_m68k.d[0]);
    M68K_ASR16(g_m68k.d[3], 0x6);
    M68K_NOT8(g_m68k.d[0]);
    M68K_LSR16(g_m68k.d[0], 0x6);
    /* TODO $0A9476: dc.w $4500  [45 00] */
    M68K_LSR16(g_m68k.d[5], 0x6);
    /* TODO $0A947A: dc.w $4500  [45 00] */
    /* TODO $0A947C: roxr.w #$6, d2  [EC 52] */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* TODO $0A9480: roxr.w #$6, d7  [EC 57] */
    M68K_NEG8(g_m68k.d[0]);
    M68K_ROR16(g_m68k.d[4], 0x6);
    M68K_NEG8(g_m68k.d[0]);
    M68K_ASR16(g_m68k.d[1], g_m68k.d[6]);
    M68K_NEG8(g_m68k.d[0]);
    M68K_ASR16(g_m68k.d[6], g_m68k.d[6]);
    M68K_NEG8(g_m68k.d[0]);
    M68K_LSR16(g_m68k.d[3], g_m68k.d[6]);
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

/* $0A9802-$0A980A  (2 instructions, 8 bytes) */
void jt_0A9802(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_ADD16(g_m68k.d[5], bus_read16(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 2));
    /* WARNING: function did not end with RTS */
}

/* $0A980A-$0A9812  (3 instructions, 8 bytes) */
void jt_0A980A(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_ADD16(g_m68k.d[5], _predec16(3));
    /* TODO $0A9810: dc.w $4300  [43 00] */
    /* WARNING: function did not end with RTS */
}

/* $0A9812-$0A981A  (2 instructions, 8 bytes) */
void jt_0A9812(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_ADD16(g_m68k.d[5], bus_read16(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 2));
    /* WARNING: function did not end with RTS */
}

/* $0A981A-$0A9822  (2 instructions, 8 bytes) */
void jt_0A981A(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_ADD16(g_m68k.d[5], bus_read16(g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 2));
    /* WARNING: function did not end with RTS */
}

/* $0A9822-$0A982A  (2 instructions, 8 bytes) */
void jt_0A9822(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_ADD16(g_m68k.d[5], bus_read16(g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 2));
    /* WARNING: function did not end with RTS */
}

/* $0A982A-$0A9832  (2 instructions, 8 bytes) */
void jt_0A982A(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_ADD16(g_m68k.d[5], bus_read16(g_m68k.a[6] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 2));
    /* WARNING: function did not end with RTS */
}

/* $0A9832-$0A983A  (2 instructions, 8 bytes) */
void jt_0A9832(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_ADD16(g_m68k.d[5], bus_read16(g_m68k.a[7] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 2));
    /* WARNING: function did not end with RTS */
}

/* $0A983A-$0A9842  (2 instructions, 8 bytes) */
void jt_0A983A(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_ADD16(g_m68k.d[5], bus_read16(0x004300));
    /* WARNING: function did not end with RTS */
}

/* $0A9842-$0A984C  (2 instructions, 10 bytes) */
void jt_0A9842(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_ADD16(g_m68k.d[5], bus_read16(0x43000001));
    /* WARNING: function did not end with RTS */
}

/* $0A984A-$0A9852  (4 instructions, 8 bytes) */
void jt_0A984A(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_OR8(g_m68k.d[1], 0x7a);
    M68K_ADD16(g_m68k.d[5], bus_read16(0xadb50));
    /* TODO $0A9850: dc.w $4300  [43 00] */
    /* WARNING: function did not end with RTS */
}

/* $0A9852-$0A985A  (2 instructions, 8 bytes) */
void jt_0A9852(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_ADD16(g_m68k.d[5], /* UNHANDLED_READ: (a16, d4.w * 2) */ 0);
    /* WARNING: function did not end with RTS */
}

/* $0A985A-$0A9862  (2 instructions, 8 bytes) */
void jt_0A985A(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_ADD16(g_m68k.d[5], 0x4300);
    /* WARNING: function did not end with RTS */
}

/* $0A9862-$0A986A  (2 instructions, 8 bytes) */
void jt_0A9862(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0A986A-$0A9C6A  (496 instructions, 1024 bytes) */
void jt_0A986A(void) {
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
    /* TODO $0A98AA: roxl.w #$4, d3  [E9 53] */
    /* TODO $0A98AC: dc.w $4100  [41 00] */
    M68K_ROL16(g_m68k.d[3], 0x4);
    /* TODO $0A98B0: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[3], g_m68k.d[4]);
    /* TODO $0A98B4: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[3], g_m68k.d[4]);
    /* TODO $0A98B8: dc.w $4100  [41 00] */
    /* TODO $0A98BA: roxl.w #$4, d7  [E9 57] */
    /* TODO $0A98BC: dc.w $4100  [41 00] */
    M68K_ROL16(g_m68k.d[7], 0x4);
    /* TODO $0A98C0: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[7], g_m68k.d[4]);
    /* TODO $0A98C4: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[7], g_m68k.d[4]);
    /* TODO $0A98C8: dc.w $4100  [41 00] */
    /* TODO $0A98CA: roxl.w #$4, d3  [E9 53] */
    /* TODO $0A98CC: dc.w $4100  [41 00] */
    M68K_ROL16(g_m68k.d[3], 0x4);
    /* TODO $0A98D0: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[3], g_m68k.d[4]);
    /* TODO $0A98D4: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[3], g_m68k.d[4]);
    /* TODO $0A98D8: dc.w $4100  [41 00] */
    /* TODO $0A98DA: roxl.w #$4, d7  [E9 57] */
    /* TODO $0A98DC: dc.w $4100  [41 00] */
    M68K_ROL16(g_m68k.d[7], 0x4);
    /* TODO $0A98E0: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[7], g_m68k.d[4]);
    /* TODO $0A98E4: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[7], g_m68k.d[4]);
    /* TODO $0A98E8: dc.w $4100  [41 00] */
    /* TODO $0A98EA: roxl.w #$4, d4  [E9 54] */
    /* TODO $0A98EC: dc.w $4100  [41 00] */
    M68K_ROL16(g_m68k.d[4], 0x4);
    /* TODO $0A98F0: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[4], g_m68k.d[4]);
    /* TODO $0A98F4: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[4], g_m68k.d[4]);
    /* TODO $0A98F8: dc.w $4100  [41 00] */
    M68K_ROL16(g_m68k.d[0], 0x4);
    /* TODO $0A98FC: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[0], g_m68k.d[4]);
    /* TODO $0A9900: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[0], g_m68k.d[4]);
    /* TODO $0A9904: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[3], g_m68k.d[4]);
    /* TODO $0A9908: dc.w $4100  [41 00] */
    /* TODO $0A990A: roxl.w #$4, d4  [E9 54] */
    /* TODO $0A990C: dc.w $4100  [41 00] */
    M68K_ROL16(g_m68k.d[4], 0x4);
    /* TODO $0A9910: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[4], g_m68k.d[4]);
    /* TODO $0A9914: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[4], g_m68k.d[4]);
    /* TODO $0A9918: dc.w $4100  [41 00] */
    M68K_ROL16(g_m68k.d[0], 0x4);
    /* TODO $0A991C: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[0], g_m68k.d[4]);
    /* TODO $0A9920: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[0], g_m68k.d[4]);
    /* TODO $0A9924: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[3], g_m68k.d[4]);
    /* TODO $0A9928: dc.w $4100  [41 00] */
    /* TODO $0A992A: roxl.w #$4, d5  [E9 55] */
    /* TODO $0A992C: dc.w $4100  [41 00] */
    M68K_ROL16(g_m68k.d[5], 0x4);
    /* TODO $0A9930: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[5], g_m68k.d[4]);
    /* TODO $0A9934: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[5], g_m68k.d[4]);
    /* TODO $0A9938: dc.w $4100  [41 00] */
    M68K_ROL16(g_m68k.d[1], 0x4);
    /* TODO $0A993C: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[1], g_m68k.d[4]);
    /* TODO $0A9940: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[1], g_m68k.d[4]);
    /* TODO $0A9944: dc.w $4100  [41 00] */
    /* TODO $0A9946: roxl.w d4, d0  [E9 70] */
    /* TODO $0A9948: dc.w $4100  [41 00] */
    /* TODO $0A994A: roxl.w #$4, d5  [E9 55] */
    /* TODO $0A994C: dc.w $4100  [41 00] */
    M68K_ROL16(g_m68k.d[5], 0x4);
    /* TODO $0A9950: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[5], g_m68k.d[4]);
    /* TODO $0A9954: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[5], g_m68k.d[4]);
    /* TODO $0A9958: dc.w $4100  [41 00] */
    M68K_ROL16(g_m68k.d[1], 0x4);
    /* TODO $0A995C: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[1], g_m68k.d[4]);
    /* TODO $0A9960: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[1], g_m68k.d[4]);
    /* TODO $0A9964: dc.w $4100  [41 00] */
    /* TODO $0A9966: roxl.w d4, d0  [E9 70] */
    /* TODO $0A9968: dc.w $4100  [41 00] */
    /* TODO $0A996A: roxl.w #$4, d6  [E9 56] */
    /* TODO $0A996C: dc.w $4100  [41 00] */
    M68K_ROL16(g_m68k.d[6], 0x4);
    /* TODO $0A9970: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[6], g_m68k.d[4]);
    /* TODO $0A9974: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[6], g_m68k.d[4]);
    /* TODO $0A9978: dc.w $4100  [41 00] */
    M68K_ROL16(g_m68k.d[2], 0x4);
    /* TODO $0A997C: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[2], g_m68k.d[4]);
    /* TODO $0A9980: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[2], g_m68k.d[4]);
    /* TODO $0A9984: dc.w $4100  [41 00] */
    /* TODO $0A9986: roxl.w d4, d1  [E9 71] */
    /* TODO $0A9988: dc.w $4100  [41 00] */
    /* TODO $0A998A: roxl.w #$4, d6  [E9 56] */
    /* TODO $0A998C: dc.w $4100  [41 00] */
    M68K_ROL16(g_m68k.d[6], 0x4);
    /* TODO $0A9990: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[6], g_m68k.d[4]);
    /* TODO $0A9994: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[6], g_m68k.d[4]);
    /* TODO $0A9998: dc.w $4100  [41 00] */
    M68K_ROL16(g_m68k.d[2], 0x4);
    /* TODO $0A999C: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[2], g_m68k.d[4]);
    /* TODO $0A99A0: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[2], g_m68k.d[4]);
    /* TODO $0A99A4: dc.w $4100  [41 00] */
    /* TODO $0A99A6: roxl.w d4, d1  [E9 71] */
    /* TODO $0A99A8: dc.w $4100  [41 00] */
    /* TODO $0A99AA: roxl.w #$4, d7  [E9 57] */
    /* TODO $0A99AC: dc.w $4100  [41 00] */
    M68K_ROL16(g_m68k.d[7], 0x4);
    /* TODO $0A99B0: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[7], g_m68k.d[4]);
    /* TODO $0A99B4: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[7], g_m68k.d[4]);
    /* TODO $0A99B8: dc.w $4100  [41 00] */
    /* TODO $0A99BA: roxl.w #$4, d3  [E9 53] */
    /* TODO $0A99BC: dc.w $4100  [41 00] */
    M68K_ROL16(g_m68k.d[3], 0x4);
    /* TODO $0A99C0: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[3], g_m68k.d[4]);
    /* TODO $0A99C4: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[3], g_m68k.d[4]);
    /* TODO $0A99C8: dc.w $4100  [41 00] */
    /* TODO $0A99CA: roxl.w #$4, d7  [E9 57] */
    /* TODO $0A99CC: dc.w $4100  [41 00] */
    M68K_ROL16(g_m68k.d[7], 0x4);
    /* TODO $0A99D0: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[7], g_m68k.d[4]);
    /* TODO $0A99D4: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[7], g_m68k.d[4]);
    /* TODO $0A99D8: dc.w $4100  [41 00] */
    /* TODO $0A99DA: roxl.w #$4, d3  [E9 53] */
    /* TODO $0A99DC: dc.w $4100  [41 00] */
    M68K_ROL16(g_m68k.d[3], 0x4);
    /* TODO $0A99E0: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[3], g_m68k.d[4]);
    /* TODO $0A99E4: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[3], g_m68k.d[4]);
    /* TODO $0A99E8: dc.w $4100  [41 00] */
    M68K_ROL16(g_m68k.d[0], 0x4);
    /* TODO $0A99EC: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[0], g_m68k.d[4]);
    /* TODO $0A99F0: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[0], g_m68k.d[4]);
    /* TODO $0A99F4: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[3], g_m68k.d[4]);
    /* TODO $0A99F8: dc.w $4100  [41 00] */
    /* TODO $0A99FA: roxl.w #$4, d4  [E9 54] */
    /* TODO $0A99FC: dc.w $4100  [41 00] */
    M68K_ROL16(g_m68k.d[4], 0x4);
    /* TODO $0A9A00: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[4], g_m68k.d[4]);
    /* TODO $0A9A04: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[4], g_m68k.d[4]);
    /* TODO $0A9A08: dc.w $4100  [41 00] */
    M68K_ROL16(g_m68k.d[0], 0x4);
    /* TODO $0A9A0C: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[0], g_m68k.d[4]);
    /* TODO $0A9A10: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[0], g_m68k.d[4]);
    /* TODO $0A9A14: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[3], g_m68k.d[4]);
    /* TODO $0A9A18: dc.w $4100  [41 00] */
    /* TODO $0A9A1A: roxl.w #$4, d4  [E9 54] */
    /* TODO $0A9A1C: dc.w $4100  [41 00] */
    M68K_ROL16(g_m68k.d[4], 0x4);
    /* TODO $0A9A20: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[4], g_m68k.d[4]);
    /* TODO $0A9A24: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[4], g_m68k.d[4]);
    /* TODO $0A9A28: dc.w $4100  [41 00] */
    M68K_ROL16(g_m68k.d[1], 0x4);
    /* TODO $0A9A2C: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[1], g_m68k.d[4]);
    /* TODO $0A9A30: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[1], g_m68k.d[4]);
    /* TODO $0A9A34: dc.w $4100  [41 00] */
    /* TODO $0A9A36: roxl.w d4, d0  [E9 70] */
    /* TODO $0A9A38: dc.w $4100  [41 00] */
    /* TODO $0A9A3A: roxl.w #$4, d5  [E9 55] */
    /* TODO $0A9A3C: dc.w $4100  [41 00] */
    M68K_ROL16(g_m68k.d[5], 0x4);
    /* TODO $0A9A40: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[5], g_m68k.d[4]);
    /* TODO $0A9A44: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[5], g_m68k.d[4]);
    /* TODO $0A9A48: dc.w $4100  [41 00] */
    M68K_ROL16(g_m68k.d[1], 0x4);
    /* TODO $0A9A4C: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[1], g_m68k.d[4]);
    /* TODO $0A9A50: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[1], g_m68k.d[4]);
    /* TODO $0A9A54: dc.w $4100  [41 00] */
    /* TODO $0A9A56: roxl.w d4, d0  [E9 70] */
    /* TODO $0A9A58: dc.w $4100  [41 00] */
    /* TODO $0A9A5A: roxl.w #$4, d5  [E9 55] */
    /* TODO $0A9A5C: dc.w $4100  [41 00] */
    M68K_ROL16(g_m68k.d[5], 0x4);
    /* TODO $0A9A60: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[5], g_m68k.d[4]);
    /* TODO $0A9A64: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[5], g_m68k.d[4]);
    /* TODO $0A9A68: dc.w $4100  [41 00] */
    M68K_ROL16(g_m68k.d[2], 0x4);
    /* TODO $0A9A6C: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[2], g_m68k.d[4]);
    /* TODO $0A9A70: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[2], g_m68k.d[4]);
    /* TODO $0A9A74: dc.w $4100  [41 00] */
    /* TODO $0A9A76: roxl.w d4, d1  [E9 71] */
    /* TODO $0A9A78: dc.w $4100  [41 00] */
    /* TODO $0A9A7A: roxl.w #$4, d6  [E9 56] */
    /* TODO $0A9A7C: dc.w $4100  [41 00] */
    M68K_ROL16(g_m68k.d[6], 0x4);
    /* TODO $0A9A80: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[6], g_m68k.d[4]);
    /* TODO $0A9A84: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[6], g_m68k.d[4]);
    /* TODO $0A9A88: dc.w $4100  [41 00] */
    M68K_ROL16(g_m68k.d[2], 0x4);
    /* TODO $0A9A8C: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[2], g_m68k.d[4]);
    /* TODO $0A9A90: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[2], g_m68k.d[4]);
    /* TODO $0A9A94: dc.w $4100  [41 00] */
    /* TODO $0A9A96: roxl.w d4, d1  [E9 71] */
    /* TODO $0A9A98: dc.w $4100  [41 00] */
    /* TODO $0A9A9A: roxl.w #$4, d6  [E9 56] */
    /* TODO $0A9A9C: dc.w $4100  [41 00] */
    M68K_ROL16(g_m68k.d[6], 0x4);
    /* TODO $0A9AA0: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[6], g_m68k.d[4]);
    /* TODO $0A9AA4: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[6], g_m68k.d[4]);
    /* TODO $0A9AA8: dc.w $4100  [41 00] */
    /* TODO $0A9AAA: roxl.w #$4, d3  [E9 53] */
    /* TODO $0A9AAC: dc.w $4100  [41 00] */
    M68K_ROL16(g_m68k.d[3], 0x4);
    /* TODO $0A9AB0: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[3], g_m68k.d[4]);
    /* TODO $0A9AB4: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[3], g_m68k.d[4]);
    /* TODO $0A9AB8: dc.w $4100  [41 00] */
    /* TODO $0A9ABA: roxl.w #$4, d7  [E9 57] */
    /* TODO $0A9ABC: dc.w $4100  [41 00] */
    M68K_ROL16(g_m68k.d[7], 0x4);
    /* TODO $0A9AC0: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[7], g_m68k.d[4]);
    /* TODO $0A9AC4: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[7], g_m68k.d[4]);
    /* TODO $0A9AC8: dc.w $4100  [41 00] */
    /* TODO $0A9ACA: roxl.w #$4, d3  [E9 53] */
    /* TODO $0A9ACC: dc.w $4100  [41 00] */
    M68K_ROL16(g_m68k.d[3], 0x4);
    /* TODO $0A9AD0: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[3], g_m68k.d[4]);
    /* TODO $0A9AD4: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[3], g_m68k.d[4]);
    /* TODO $0A9AD8: dc.w $4100  [41 00] */
    /* TODO $0A9ADA: roxl.w #$4, d7  [E9 57] */
    /* TODO $0A9ADC: dc.w $4100  [41 00] */
    M68K_ROL16(g_m68k.d[7], 0x4);
    /* TODO $0A9AE0: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[7], g_m68k.d[4]);
    /* TODO $0A9AE4: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[7], g_m68k.d[4]);
    /* TODO $0A9AE8: dc.w $4100  [41 00] */
    /* TODO $0A9AEA: roxl.w #$4, d4  [E9 54] */
    /* TODO $0A9AEC: dc.w $4100  [41 00] */
    M68K_ROL16(g_m68k.d[4], 0x4);
    /* TODO $0A9AF0: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[4], g_m68k.d[4]);
    /* TODO $0A9AF4: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[4], g_m68k.d[4]);
    /* TODO $0A9AF8: dc.w $4100  [41 00] */
    M68K_ROL16(g_m68k.d[0], 0x4);
    /* TODO $0A9AFC: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[0], g_m68k.d[4]);
    /* TODO $0A9B00: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[0], g_m68k.d[4]);
    /* TODO $0A9B04: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[3], g_m68k.d[4]);
    /* TODO $0A9B08: dc.w $4100  [41 00] */
    /* TODO $0A9B0A: roxl.w #$4, d4  [E9 54] */
    /* TODO $0A9B0C: dc.w $4100  [41 00] */
    M68K_ROL16(g_m68k.d[4], 0x4);
    /* TODO $0A9B10: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[4], g_m68k.d[4]);
    /* TODO $0A9B14: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[4], g_m68k.d[4]);
    /* TODO $0A9B18: dc.w $4100  [41 00] */
    M68K_ROL16(g_m68k.d[0], 0x4);
    /* TODO $0A9B1C: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[0], g_m68k.d[4]);
    /* TODO $0A9B20: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[0], g_m68k.d[4]);
    /* TODO $0A9B24: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[3], g_m68k.d[4]);
    /* TODO $0A9B28: dc.w $4100  [41 00] */
    /* TODO $0A9B2A: roxl.w #$4, d5  [E9 55] */
    /* TODO $0A9B2C: dc.w $4100  [41 00] */
    M68K_ROL16(g_m68k.d[5], 0x4);
    /* TODO $0A9B30: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[5], g_m68k.d[4]);
    /* TODO $0A9B34: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[5], g_m68k.d[4]);
    /* TODO $0A9B38: dc.w $4100  [41 00] */
    M68K_ROL16(g_m68k.d[1], 0x4);
    /* TODO $0A9B3C: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[1], g_m68k.d[4]);
    /* TODO $0A9B40: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[1], g_m68k.d[4]);
    /* TODO $0A9B44: dc.w $4100  [41 00] */
    /* TODO $0A9B46: roxl.w d4, d0  [E9 70] */
    /* TODO $0A9B48: dc.w $4100  [41 00] */
    /* TODO $0A9B4A: roxl.w #$4, d5  [E9 55] */
    /* TODO $0A9B4C: dc.w $4100  [41 00] */
    M68K_ROL16(g_m68k.d[5], 0x4);
    /* TODO $0A9B50: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[5], g_m68k.d[4]);
    /* TODO $0A9B54: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[5], g_m68k.d[4]);
    /* TODO $0A9B58: dc.w $4100  [41 00] */
    M68K_ROL16(g_m68k.d[1], 0x4);
    /* TODO $0A9B5C: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[1], g_m68k.d[4]);
    /* TODO $0A9B60: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[1], g_m68k.d[4]);
    /* TODO $0A9B64: dc.w $4100  [41 00] */
    /* TODO $0A9B66: roxl.w d4, d0  [E9 70] */
    /* TODO $0A9B68: dc.w $4100  [41 00] */
    /* TODO $0A9B6A: roxl.w #$4, d6  [E9 56] */
    /* TODO $0A9B6C: dc.w $4100  [41 00] */
    M68K_ROL16(g_m68k.d[6], 0x4);
    /* TODO $0A9B70: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[6], g_m68k.d[4]);
    /* TODO $0A9B74: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[6], g_m68k.d[4]);
    /* TODO $0A9B78: dc.w $4100  [41 00] */
    M68K_ROL16(g_m68k.d[2], 0x4);
    /* TODO $0A9B7C: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[2], g_m68k.d[4]);
    /* TODO $0A9B80: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[2], g_m68k.d[4]);
    /* TODO $0A9B84: dc.w $4100  [41 00] */
    /* TODO $0A9B86: roxl.w d4, d1  [E9 71] */
    /* TODO $0A9B88: dc.w $4100  [41 00] */
    /* TODO $0A9B8A: roxl.w #$4, d6  [E9 56] */
    /* TODO $0A9B8C: dc.w $4100  [41 00] */
    M68K_ROL16(g_m68k.d[6], 0x4);
    /* TODO $0A9B90: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[6], g_m68k.d[4]);
    /* TODO $0A9B94: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[6], g_m68k.d[4]);
    /* TODO $0A9B98: dc.w $4100  [41 00] */
    M68K_ROL16(g_m68k.d[2], 0x4);
    /* TODO $0A9B9C: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[2], g_m68k.d[4]);
    /* TODO $0A9BA0: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[2], g_m68k.d[4]);
    /* TODO $0A9BA4: dc.w $4100  [41 00] */
    /* TODO $0A9BA6: roxl.w d4, d1  [E9 71] */
    /* TODO $0A9BA8: dc.w $4100  [41 00] */
    /* TODO $0A9BAA: roxl.w #$4, d7  [E9 57] */
    /* TODO $0A9BAC: dc.w $4100  [41 00] */
    M68K_ROL16(g_m68k.d[7], 0x4);
    /* TODO $0A9BB0: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[7], g_m68k.d[4]);
    /* TODO $0A9BB4: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[7], g_m68k.d[4]);
    /* TODO $0A9BB8: dc.w $4100  [41 00] */
    /* TODO $0A9BBA: roxl.w #$4, d3  [E9 53] */
    /* TODO $0A9BBC: dc.w $4100  [41 00] */
    M68K_ROL16(g_m68k.d[3], 0x4);
    /* TODO $0A9BC0: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[3], g_m68k.d[4]);
    /* TODO $0A9BC4: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[3], g_m68k.d[4]);
    /* TODO $0A9BC8: dc.w $4100  [41 00] */
    /* TODO $0A9BCA: roxl.w #$4, d7  [E9 57] */
    /* TODO $0A9BCC: dc.w $4100  [41 00] */
    M68K_ROL16(g_m68k.d[7], 0x4);
    /* TODO $0A9BD0: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[7], g_m68k.d[4]);
    /* TODO $0A9BD4: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[7], g_m68k.d[4]);
    /* TODO $0A9BD8: dc.w $4100  [41 00] */
    /* TODO $0A9BDA: roxl.w #$4, d3  [E9 53] */
    /* TODO $0A9BDC: dc.w $4100  [41 00] */
    M68K_ROL16(g_m68k.d[3], 0x4);
    /* TODO $0A9BE0: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[3], g_m68k.d[4]);
    /* TODO $0A9BE4: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[3], g_m68k.d[4]);
    /* TODO $0A9BE8: dc.w $4100  [41 00] */
    M68K_ROL16(g_m68k.d[0], 0x4);
    /* TODO $0A9BEC: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[0], g_m68k.d[4]);
    /* TODO $0A9BF0: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[0], g_m68k.d[4]);
    /* TODO $0A9BF4: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[3], g_m68k.d[4]);
    /* TODO $0A9BF8: dc.w $4100  [41 00] */
    /* TODO $0A9BFA: roxl.w #$4, d4  [E9 54] */
    /* TODO $0A9BFC: dc.w $4100  [41 00] */
    M68K_ROL16(g_m68k.d[4], 0x4);
    /* TODO $0A9C00: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[4], g_m68k.d[4]);
    /* TODO $0A9C04: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[4], g_m68k.d[4]);
    /* TODO $0A9C08: dc.w $4100  [41 00] */
    M68K_ROL16(g_m68k.d[0], 0x4);
    /* TODO $0A9C0C: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[0], g_m68k.d[4]);
    /* TODO $0A9C10: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[0], g_m68k.d[4]);
    /* TODO $0A9C14: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[3], g_m68k.d[4]);
    /* TODO $0A9C18: dc.w $4100  [41 00] */
    /* TODO $0A9C1A: roxl.w #$4, d4  [E9 54] */
    /* TODO $0A9C1C: dc.w $4100  [41 00] */
    M68K_ROL16(g_m68k.d[4], 0x4);
    /* TODO $0A9C20: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[4], g_m68k.d[4]);
    /* TODO $0A9C24: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[4], g_m68k.d[4]);
    /* TODO $0A9C28: dc.w $4100  [41 00] */
    M68K_ROL16(g_m68k.d[1], 0x4);
    /* TODO $0A9C2C: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[1], g_m68k.d[4]);
    /* TODO $0A9C30: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[1], g_m68k.d[4]);
    /* TODO $0A9C34: dc.w $4100  [41 00] */
    /* TODO $0A9C36: roxl.w d4, d0  [E9 70] */
    /* TODO $0A9C38: dc.w $4100  [41 00] */
    /* TODO $0A9C3A: roxl.w #$4, d5  [E9 55] */
    /* TODO $0A9C3C: dc.w $4100  [41 00] */
    M68K_ROL16(g_m68k.d[5], 0x4);
    /* TODO $0A9C40: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[5], g_m68k.d[4]);
    /* TODO $0A9C44: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[5], g_m68k.d[4]);
    /* TODO $0A9C48: dc.w $4100  [41 00] */
    M68K_ROL16(g_m68k.d[1], 0x4);
    /* TODO $0A9C4C: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[1], g_m68k.d[4]);
    /* TODO $0A9C50: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[1], g_m68k.d[4]);
    /* TODO $0A9C54: dc.w $4100  [41 00] */
    /* TODO $0A9C56: roxl.w d4, d0  [E9 70] */
    /* TODO $0A9C58: dc.w $4100  [41 00] */
    /* TODO $0A9C5A: roxl.w #$4, d5  [E9 55] */
    /* TODO $0A9C5C: dc.w $4100  [41 00] */
    M68K_ROL16(g_m68k.d[5], 0x4);
    /* TODO $0A9C60: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[5], g_m68k.d[4]);
    /* TODO $0A9C64: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[5], g_m68k.d[4]);
    /* TODO $0A9C68: dc.w $4100  [41 00] */
    /* WARNING: function did not end with RTS */
}

/* $0A9C6A-$0AA06A  (336 instructions, 1024 bytes) */
void jt_0A9C6A(void) {
    M68K_ROL16(g_m68k.d[2], 0x4);
    /* TODO $0A9C6C: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[2], g_m68k.d[4]);
    /* TODO $0A9C70: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[2], g_m68k.d[4]);
    /* TODO $0A9C74: dc.w $4100  [41 00] */
    /* TODO $0A9C76: roxl.w d4, d1  [E9 71] */
    /* TODO $0A9C78: dc.w $4100  [41 00] */
    /* TODO $0A9C7A: roxl.w #$4, d6  [E9 56] */
    /* TODO $0A9C7C: dc.w $4100  [41 00] */
    M68K_ROL16(g_m68k.d[6], 0x4);
    /* TODO $0A9C80: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[6], g_m68k.d[4]);
    /* TODO $0A9C84: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[6], g_m68k.d[4]);
    /* TODO $0A9C88: dc.w $4100  [41 00] */
    M68K_ROL16(g_m68k.d[2], 0x4);
    /* TODO $0A9C8C: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[2], g_m68k.d[4]);
    /* TODO $0A9C90: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[2], g_m68k.d[4]);
    /* TODO $0A9C94: dc.w $4100  [41 00] */
    /* TODO $0A9C96: roxl.w d4, d1  [E9 71] */
    /* TODO $0A9C98: dc.w $4100  [41 00] */
    /* TODO $0A9C9A: roxl.w #$4, d6  [E9 56] */
    /* TODO $0A9C9C: dc.w $4100  [41 00] */
    M68K_ROL16(g_m68k.d[6], 0x4);
    /* TODO $0A9CA0: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[6], g_m68k.d[4]);
    /* TODO $0A9CA4: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[6], g_m68k.d[4]);
    /* TODO $0A9CA8: dc.w $4100  [41 00] */
    /* TODO $0A9CAA: roxl.w #$4, d3  [E9 53] */
    /* TODO $0A9CAC: dc.w $4100  [41 00] */
    M68K_ROL16(g_m68k.d[3], 0x4);
    /* TODO $0A9CB0: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[3], g_m68k.d[4]);
    /* TODO $0A9CB4: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[3], g_m68k.d[4]);
    /* TODO $0A9CB8: dc.w $4100  [41 00] */
    /* TODO $0A9CBA: roxl.w #$4, d7  [E9 57] */
    /* TODO $0A9CBC: dc.w $4100  [41 00] */
    M68K_ROL16(g_m68k.d[7], 0x4);
    /* TODO $0A9CC0: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[7], g_m68k.d[4]);
    /* TODO $0A9CC4: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[7], g_m68k.d[4]);
    /* TODO $0A9CC8: dc.w $4100  [41 00] */
    /* TODO $0A9CCA: roxl.w #$4, d3  [E9 53] */
    /* TODO $0A9CCC: dc.w $4100  [41 00] */
    M68K_ROL16(g_m68k.d[3], 0x4);
    /* TODO $0A9CD0: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[3], g_m68k.d[4]);
    /* TODO $0A9CD4: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[3], g_m68k.d[4]);
    /* TODO $0A9CD8: dc.w $4100  [41 00] */
    /* TODO $0A9CDA: roxl.w #$4, d7  [E9 57] */
    /* TODO $0A9CDC: dc.w $4100  [41 00] */
    M68K_ROL16(g_m68k.d[7], 0x4);
    /* TODO $0A9CE0: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[7], g_m68k.d[4]);
    /* TODO $0A9CE4: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[7], g_m68k.d[4]);
    /* TODO $0A9CE8: dc.w $4100  [41 00] */
    /* TODO $0A9CEA: roxl.w #$4, d4  [E9 54] */
    /* TODO $0A9CEC: dc.w $4100  [41 00] */
    M68K_ROL16(g_m68k.d[4], 0x4);
    /* TODO $0A9CF0: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[4], g_m68k.d[4]);
    /* TODO $0A9CF4: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[4], g_m68k.d[4]);
    /* TODO $0A9CF8: dc.w $4100  [41 00] */
    M68K_ROL16(g_m68k.d[0], 0x4);
    /* TODO $0A9CFC: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[0], g_m68k.d[4]);
    /* TODO $0A9D00: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[0], g_m68k.d[4]);
    /* TODO $0A9D04: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[3], g_m68k.d[4]);
    /* TODO $0A9D08: dc.w $4100  [41 00] */
    /* TODO $0A9D0A: roxl.w #$4, d4  [E9 54] */
    /* TODO $0A9D0C: dc.w $4100  [41 00] */
    M68K_ROL16(g_m68k.d[4], 0x4);
    /* TODO $0A9D10: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[4], g_m68k.d[4]);
    /* TODO $0A9D14: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[4], g_m68k.d[4]);
    /* TODO $0A9D18: dc.w $4100  [41 00] */
    M68K_ROL16(g_m68k.d[0], 0x4);
    /* TODO $0A9D1C: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[0], g_m68k.d[4]);
    /* TODO $0A9D20: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[0], g_m68k.d[4]);
    /* TODO $0A9D24: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[3], g_m68k.d[4]);
    /* TODO $0A9D28: dc.w $4100  [41 00] */
    /* TODO $0A9D2A: roxl.w #$4, d5  [E9 55] */
    /* TODO $0A9D2C: dc.w $4100  [41 00] */
    M68K_ROL16(g_m68k.d[5], 0x4);
    /* TODO $0A9D30: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[5], g_m68k.d[4]);
    /* TODO $0A9D34: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[5], g_m68k.d[4]);
    /* TODO $0A9D38: dc.w $4100  [41 00] */
    M68K_ROL16(g_m68k.d[1], 0x4);
    /* TODO $0A9D3C: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[1], g_m68k.d[4]);
    /* TODO $0A9D40: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[1], g_m68k.d[4]);
    /* TODO $0A9D44: dc.w $4100  [41 00] */
    /* TODO $0A9D46: roxl.w d4, d0  [E9 70] */
    /* TODO $0A9D48: dc.w $4100  [41 00] */
    /* TODO $0A9D4A: roxl.w #$4, d5  [E9 55] */
    /* TODO $0A9D4C: dc.w $4100  [41 00] */
    M68K_ROL16(g_m68k.d[5], 0x4);
    /* TODO $0A9D50: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[5], g_m68k.d[4]);
    /* TODO $0A9D54: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[5], g_m68k.d[4]);
    /* TODO $0A9D58: dc.w $4100  [41 00] */
    M68K_ROL16(g_m68k.d[1], 0x4);
    /* TODO $0A9D5C: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[1], g_m68k.d[4]);
    /* TODO $0A9D60: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[1], g_m68k.d[4]);
    /* TODO $0A9D64: dc.w $4100  [41 00] */
    /* TODO $0A9D66: roxl.w d4, d0  [E9 70] */
    /* TODO $0A9D68: dc.w $4100  [41 00] */
    /* TODO $0A9D6A: roxl.w #$4, d6  [E9 56] */
    /* TODO $0A9D6C: dc.w $4100  [41 00] */
    M68K_ROL16(g_m68k.d[6], 0x4);
    /* TODO $0A9D70: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[6], g_m68k.d[4]);
    /* TODO $0A9D74: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[6], g_m68k.d[4]);
    /* TODO $0A9D78: dc.w $4100  [41 00] */
    M68K_ROL16(g_m68k.d[2], 0x4);
    /* TODO $0A9D7C: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[2], g_m68k.d[4]);
    /* TODO $0A9D80: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[2], g_m68k.d[4]);
    /* TODO $0A9D84: dc.w $4100  [41 00] */
    /* TODO $0A9D86: roxl.w d4, d1  [E9 71] */
    /* TODO $0A9D88: dc.w $4100  [41 00] */
    /* TODO $0A9D8A: roxl.w #$4, d6  [E9 56] */
    /* TODO $0A9D8C: dc.w $4100  [41 00] */
    M68K_ROL16(g_m68k.d[6], 0x4);
    /* TODO $0A9D90: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[6], g_m68k.d[4]);
    /* TODO $0A9D94: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[6], g_m68k.d[4]);
    /* TODO $0A9D98: dc.w $4100  [41 00] */
    M68K_ROL16(g_m68k.d[2], 0x4);
    /* TODO $0A9D9C: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[2], g_m68k.d[4]);
    /* TODO $0A9DA0: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[2], g_m68k.d[4]);
    /* TODO $0A9DA4: dc.w $4100  [41 00] */
    /* TODO $0A9DA6: roxl.w d4, d1  [E9 71] */
    /* TODO $0A9DA8: dc.w $4100  [41 00] */
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

/* $0AA110-$0AA118  (2 instructions, 8 bytes) */
void jt_0AA110(void) {
    M68K_OR8(g_m68k.d[6], 0x1);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0AA12C-$0AA130  (1 instructions, 4 bytes) */
void jt_0AA12C(void) {
    M68K_OR8(g_m68k.d[6], 0x1);
    /* WARNING: function did not end with RTS */
}

/* $0AA148-$0AA150  (2 instructions, 8 bytes) */
void jt_0AA148(void) {
    M68K_OR8(g_m68k.d[6], 0x1);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0AA164-$0AA16C  (2 instructions, 8 bytes) */
void jt_0AA164(void) {
    M68K_OR8(g_m68k.d[6], 0x1);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0AA180-$0AA188  (2 instructions, 8 bytes) */
void jt_0AA180(void) {
    M68K_OR8(g_m68k.d[6], 0x1);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0AA19C-$0AA1A0  (1 instructions, 4 bytes) */
void jt_0AA19C(void) {
    M68K_OR8(g_m68k.d[6], 0x1);
    /* WARNING: function did not end with RTS */
}

/* $0AA1B8-$0AA1C0  (2 instructions, 8 bytes) */
void jt_0AA1B8(void) {
    M68K_OR8(g_m68k.d[6], 0x1);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0AA1D4-$0AA1DC  (2 instructions, 8 bytes) */
void jt_0AA1D4(void) {
    M68K_OR8(g_m68k.d[6], 0x1);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0AA1F0-$0AA1F4  (1 instructions, 4 bytes) */
void jt_0AA1F0(void) {
    M68K_OR8(g_m68k.d[4], 0x1);
    /* WARNING: function did not end with RTS */
}

/* $0AA204-$0AA208  (1 instructions, 4 bytes) */
void jt_0AA204(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    /* WARNING: function did not end with RTS */
}

/* $0AA20C-$0AA210  (1 instructions, 4 bytes) */
void jt_0AA20C(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    /* WARNING: function did not end with RTS */
}

/* $0AA614-$0AA650  (30 instructions, 60 bytes) */
void jt_0AA614(void) {
    M68K_ROR16(g_m68k.d[5], g_m68k.d[7]);
    /* TODO $0AA616: dc.w $4d03  [4D 03] */
    M68K_ROR16(g_m68k.d[1], g_m68k.d[7]);
    /* TODO $0AA61A: dc.w $4d03  [4D 03] */
    /* TODO $0AA61C: roxr.w d7, d5  [EE 75] */
    /* TODO $0AA61E: dc.w $4d03  [4D 03] */
    /* TODO $0AA620: roxr.w d7, d1  [EE 71] */
    /* TODO $0AA622: dc.w $4d03  [4D 03] */
    M68K_LSR16(g_m68k.d[5], g_m68k.d[7]);
    /* TODO $0AA626: dc.w $4d03  [4D 03] */
    M68K_LSR16(g_m68k.d[1], g_m68k.d[7]);
    /* TODO $0AA62A: dc.w $4d03  [4D 03] */
    M68K_ASR16(g_m68k.d[5], g_m68k.d[7]);
    /* TODO $0AA62E: dc.w $4d03  [4D 03] */
    M68K_ASR16(g_m68k.d[1], g_m68k.d[7]);
    /* TODO $0AA632: dc.w $4d03  [4D 03] */
    /* TODO $0AA634: roxr.w #$7, d1  [EE 51] */
    /* TODO $0AA636: dc.w $4d03  [4D 03] */
    M68K_ASR16(g_m68k.d[1], 0x7);
    /* TODO $0AA63A: dc.w $4d03  [4D 03] */
    /* TODO $0AA63C: roxr.l #$7, d1  [EE 31] */
    /* TODO $0AA63E: dc.w $4d03  [4D 03] */
    M68K_ASR8(g_m68k.d[1], g_m68k.d[7]);
    /* TODO $0AA642: dc.w $4d03  [4D 03] */
    /* TODO $0AA644: roxr.b #$7, d1  [EE 11] */
    /* TODO $0AA646: dc.w $4d03  [4D 03] */
    M68K_ASR8(g_m68k.d[1], 0x7);
    /* TODO $0AA64A: dc.w $4d03  [4D 03] */
    /* TODO $0AA64C: dc.w $edf1  [ED F1] */
    /* TODO $0AA64E: dc.w $4d03  [4D 03] */
    /* WARNING: function did not end with RTS */
}

/* $0AAA2E-$0AAA32  (1 instructions, 4 bytes) */
void jt_0AAA2E(void) {
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x8); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0AAC72-$0AAC78  (2 instructions, 6 bytes) */
void jt_0AAC72(void) {
    M68K_OR8(g_m68k.d[6], 0x2);
    M68K_ASR32(g_m68k.d[0], g_m68k.d[6]);
    /* WARNING: function did not end with RTS */
}

/* $0AB0A6-$0AB0E2  (30 instructions, 60 bytes) */
void jt_0AB0A6(void) {
    M68K_ROR16(g_m68k.d[5], g_m68k.d[7]);
    /* TODO $0AB0A8: dc.w $4d03  [4D 03] */
    M68K_ROR16(g_m68k.d[1], g_m68k.d[7]);
    /* TODO $0AB0AC: dc.w $4d03  [4D 03] */
    /* TODO $0AB0AE: roxr.w d7, d5  [EE 75] */
    /* TODO $0AB0B0: dc.w $4d03  [4D 03] */
    /* TODO $0AB0B2: roxr.w d7, d1  [EE 71] */
    /* TODO $0AB0B4: dc.w $4d03  [4D 03] */
    M68K_LSR16(g_m68k.d[5], g_m68k.d[7]);
    /* TODO $0AB0B8: dc.w $4d03  [4D 03] */
    M68K_LSR16(g_m68k.d[1], g_m68k.d[7]);
    /* TODO $0AB0BC: dc.w $4d03  [4D 03] */
    M68K_ASR16(g_m68k.d[5], g_m68k.d[7]);
    /* TODO $0AB0C0: dc.w $4d03  [4D 03] */
    M68K_ASR16(g_m68k.d[1], g_m68k.d[7]);
    /* TODO $0AB0C4: dc.w $4d03  [4D 03] */
    /* TODO $0AB0C6: roxr.w #$7, d1  [EE 51] */
    /* TODO $0AB0C8: dc.w $4d03  [4D 03] */
    M68K_ASR16(g_m68k.d[1], 0x7);
    /* TODO $0AB0CC: dc.w $4d03  [4D 03] */
    /* TODO $0AB0CE: roxr.l #$7, d1  [EE 31] */
    /* TODO $0AB0D0: dc.w $4d03  [4D 03] */
    M68K_ASR8(g_m68k.d[1], g_m68k.d[7]);
    /* TODO $0AB0D4: dc.w $4d03  [4D 03] */
    /* TODO $0AB0D6: roxr.b #$7, d1  [EE 11] */
    /* TODO $0AB0D8: dc.w $4d03  [4D 03] */
    M68K_ASR8(g_m68k.d[1], 0x7);
    /* TODO $0AB0DC: dc.w $4d03  [4D 03] */
    /* TODO $0AB0DE: dc.w $edf1  [ED F1] */
    /* TODO $0AB0E0: dc.w $4d03  [4D 03] */
    /* WARNING: function did not end with RTS */
}

/* $0AB4EE-$0AB506  (9 instructions, 24 bytes) */
void jt_0AB4EE(void) {
    M68K_OR8(g_m68k.d[4], 0x2);
    { uint32_t _ea = g_m68k.a[3]; uint16_t _tmp = bus_read16(_ea); M68K_LSR16(_tmp, 1); bus_write16(_ea, _tmp); }
    /* TODO $0AB4F4: dc.w $4900  [49 00] */
    { uint32_t _ea = (g_m68k.a[0] + 0 + (int32_t)g_m68k.d[4]); uint16_t _tmp = bus_read16(_ea); M68K_LSR16(_tmp, 1); bus_write16(_ea, _tmp); }
    M68K_ASR32(g_m68k.d[3], 0x6);
    /* TODO $0AB4FC: dc.w $4900  [49 00] */
    M68K_ASR32(g_m68k.d[5], 0x6);
    /* TODO $0AB500: dc.w $4900  [49 00] */
    { uint32_t _ea = (g_m68k.a[4] + 0 + (int32_t)g_m68k.d[4]); uint16_t _tmp = bus_read16(_ea); M68K_ROR16(_tmp, 1); bus_write16(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0AB512-$0AB536  (17 instructions, 36 bytes) */
void jt_0AB512(void) {
    M68K_OR8(g_m68k.d[4], 0x2);
    /* TODO $0AB516: roxr.w #$5, d1  [EA 51] */
    /* TODO $0AB518: dc.w $4900  [49 00] */
    M68K_ROR16(g_m68k.d[2], 0x5);
    /* TODO $0AB51C: dc.w $4900  [49 00] */
    M68K_ASR32(g_m68k.d[7], 0x6);
    /* TODO $0AB520: dc.w $4900  [49 00] */
    M68K_LSR32(g_m68k.d[5], 0x6);
    /* TODO $0AB524: dc.w $4900  [49 00] */
    M68K_LSR32(g_m68k.d[0], 0x6);
    /* TODO $0AB528: dc.w $4900  [49 00] */
    M68K_LSR32(g_m68k.d[6], 0x6);
    /* TODO $0AB52C: dc.w $4900  [49 00] */
    M68K_LSR32(g_m68k.d[1], 0x6);
    /* TODO $0AB530: dc.w $4900  [49 00] */
    M68K_LSR32(g_m68k.d[7], 0x6);
    /* TODO $0AB534: dc.w $4900  [49 00] */
    /* WARNING: function did not end with RTS */
}

/* $0AB536-$0AB55A  (16 instructions, 36 bytes) */
void jt_0AB536(void) {
    M68K_OR8(g_m68k.d[4], 0x2);
    M68K_ROR32(g_m68k.d[1], 0x1);
    /* TODO $0AB53C: dc.w $4900  [49 00] */
    M68K_ASR32(g_m68k.d[3], g_m68k.d[1]);
    /* TODO $0AB540: dc.w $4900  [49 00] */
    { uint32_t _ea = (g_m68k.a[7] + 0 + (int32_t)g_m68k.d[4]); uint16_t _tmp = bus_read16(_ea); M68K_ROR16(_tmp, 1); bus_write16(_ea, _tmp); }
    /* TODO $0AB546: roxr.l #$6, d7  [EC 97] */
    /* TODO $0AB548: dc.w $4900  [49 00] */
    /* TODO $0AB54A: roxr.l #$6, d3  [EC 93] */
    /* TODO $0AB54C: dc.w $4900  [49 00] */
    M68K_ROR32(g_m68k.d[0], 0x6);
    /* TODO $0AB550: dc.w $4900  [49 00] */
    /* TODO $0AB552: roxr.l #$6, d4  [EC 94] */
    /* TODO $0AB554: dc.w $4900  [49 00] */
    M68K_ROR32(g_m68k.d[1], 0x6);
    /* TODO $0AB558: dc.w $4900  [49 00] */
    /* WARNING: function did not end with RTS */
}

/* $0AB55A-$0AB576  (13 instructions, 28 bytes) */
void jt_0AB55A(void) {
    M68K_OR8(g_m68k.d[3], 0x2);
    /* TODO $0AB55E: roxr.w #$5, d3  [EA 53] */
    M68K_TST8(g_m68k.d[0]);
    M68K_ROR16(g_m68k.d[3], 0x5);
    M68K_TST8(g_m68k.d[0]);
    M68K_LSR32(g_m68k.d[2], 0x6);
    M68K_TST8(g_m68k.d[0]);
    /* TODO $0AB56A: roxr.l #$6, d0  [EC 90] */
    M68K_TST8(g_m68k.d[0]);
    M68K_LSR32(g_m68k.d[3], 0x6);
    M68K_TST8(g_m68k.d[0]);
    /* TODO $0AB572: roxr.l #$6, d1  [EC 91] */
    M68K_TST8(g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0AB576-$0AB592  (13 instructions, 28 bytes) */
void jt_0AB576(void) {
    M68K_OR8(g_m68k.d[3], 0x2);
    /* TODO $0AB57A: roxr.l #$6, d5  [EC 95] */
    M68K_TST8(g_m68k.d[0]);
    M68K_ROR32(g_m68k.d[2], 0x6);
    M68K_TST8(g_m68k.d[0]);
    /* TODO $0AB582: roxr.l #$6, d6  [EC 96] */
    M68K_TST8(g_m68k.d[0]);
    M68K_ROR32(g_m68k.d[3], 0x6);
    M68K_TST8(g_m68k.d[0]);
    M68K_LSR16(g_m68k.d[7], 0x5);
    M68K_TST8(g_m68k.d[0]);
    M68K_ROR16(g_m68k.d[0], 0x5);
    M68K_TST8(g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0AB592-$0AB59E  (5 instructions, 12 bytes) */
void jt_0AB592(void) {
    M68K_OR8(g_m68k.d[1], 0x2);
    M68K_LSR32(g_m68k.d[4], 0x6);
    /* TODO $0AB598: dc.w $4900  [49 00] */
    /* TODO $0AB59A: roxr.l #$6, d2  [EC 92] */
    /* TODO $0AB59C: dc.w $4900  [49 00] */
    /* WARNING: function did not end with RTS */
}

/* $0AB59E-$0AB5AA  (5 instructions, 12 bytes) */
void jt_0AB59E(void) {
    M68K_OR8(g_m68k.d[1], 0x2);
    M68K_LSR32(g_m68k.d[4], 0x6);
    /* TODO $0AB5A4: dc.w $4901  [49 01] */
    /* TODO $0AB5A6: roxr.l #$6, d2  [EC 92] */
    /* TODO $0AB5A8: dc.w $4901  [49 01] */
    /* WARNING: function did not end with RTS */
}

/* $0AB5AA-$0AB5BE  (9 instructions, 20 bytes) */
void jt_0AB5AA(void) {
    M68K_OR8(g_m68k.d[4], 0x1);
    M68K_ROR32(g_m68k.d[4], 0x6);
    M68K_TST8(g_m68k.d[0]);
    M68K_ROR32(g_m68k.d[5], 0x6);
    M68K_TST8(g_m68k.d[0]);
    M68K_ROR32(g_m68k.d[6], 0x6);
    M68K_TST8(g_m68k.d[0]);
    M68K_ROR32(g_m68k.d[7], 0x6);
    M68K_TST8(g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0AB5BE-$0AB5C6  (2 instructions, 8 bytes) */
void jt_0AB5BE(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_ADD16(g_m68k.d[5], bus_read16(g_m68k.a[3] + 0 + (int32_t)g_m68k.d[4] * 2));
    /* WARNING: function did not end with RTS */
}

/* $0AB5C6-$0AB5CE  (3 instructions, 8 bytes) */
void jt_0AB5C6(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_ADD16(g_m68k.d[5], _predec16(3));
    M68K_TST8(g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0AB5CE-$0AB5D6  (2 instructions, 8 bytes) */
void jt_0AB5CE(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_ADD16(g_m68k.d[5], bus_read16(g_m68k.a[0] + 0 + (int32_t)g_m68k.d[4] * 2));
    /* WARNING: function did not end with RTS */
}

/* $0AB5D6-$0AB5DE  (2 instructions, 8 bytes) */
void jt_0AB5D6(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_ADD16(g_m68k.d[5], bus_read16(g_m68k.a[4] + 0 + (int32_t)g_m68k.d[4] * 2));
    /* WARNING: function did not end with RTS */
}

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
