/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $097134 - $09795C */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

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

/* $097674-$097680  (5 instructions, 12 bytes) */
void jt_097674(void) {
    M68K_OR8(g_m68k.d[1], 0x2);
    { uint32_t _ea = g_m68k.a[1]; uint16_t _tmp = bus_read16(_ea); M68K_ADDX16(_tmp, _predec16(3)); bus_write16(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[4] -= 2; bus_write16(g_m68k.a[4], _mv); M68K_TST16(_mv); }
    M68K_ADDX16(g_m68k.d[1], g_m68k.d[5]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[4] -= 2; bus_write16(g_m68k.a[4], _mv); M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $097680-$09768C  (5 instructions, 12 bytes) */
void jt_097680(void) {
    M68K_OR8(g_m68k.d[1], 0x2);
    M68K_ADDX16(g_m68k.d[1], g_m68k.d[0]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    M68K_ADDX16(g_m68k.d[1], g_m68k.d[5]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $09768C-$097698  (5 instructions, 12 bytes) */
void jt_09768C(void) {
    M68K_OR8(g_m68k.d[1], 0x2);
    { uint32_t _ea = g_m68k.a[1]; uint16_t _tmp = bus_read16(_ea); M68K_ADDX16(_tmp, _predec16(2)); bus_write16(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    M68K_ADDX16(g_m68k.d[1], g_m68k.d[6]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $097698-$0976A4  (5 instructions, 12 bytes) */
void jt_097698(void) {
    M68K_OR8(g_m68k.d[1], 0x2);
    M68K_ADDX16(g_m68k.d[1], g_m68k.d[1]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    M68K_ADDX16(g_m68k.d[1], g_m68k.d[6]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0976A4-$0976B0  (5 instructions, 12 bytes) */
void jt_0976A4(void) {
    M68K_OR8(g_m68k.d[1], 0x2);
    { uint32_t _ea = g_m68k.a[1]; uint16_t _tmp = bus_read16(_ea); M68K_ADDX16(_tmp, _predec16(3)); bus_write16(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    M68K_ADDX16(g_m68k.d[1], g_m68k.d[5]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0976B0-$0976BC  (5 instructions, 12 bytes) */
void jt_0976B0(void) {
    M68K_OR8(g_m68k.d[1], 0x2);
    M68K_ADDX16(g_m68k.d[1], g_m68k.d[0]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[5] -= 2; bus_write16(g_m68k.a[5], _mv); M68K_TST16(_mv); }
    M68K_ADDX16(g_m68k.d[1], g_m68k.d[5]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[5] -= 2; bus_write16(g_m68k.a[5], _mv); M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0976BC-$0976C8  (5 instructions, 12 bytes) */
void jt_0976BC(void) {
    M68K_OR8(g_m68k.d[1], 0x2);
    { uint32_t _ea = g_m68k.a[1]; uint16_t _tmp = bus_read16(_ea); M68K_ADDX16(_tmp, _predec16(2)); bus_write16(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[5] -= 2; bus_write16(g_m68k.a[5], _mv); M68K_TST16(_mv); }
    M68K_ADDX16(g_m68k.d[1], g_m68k.d[6]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[5] -= 2; bus_write16(g_m68k.a[5], _mv); M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0976C8-$0976D4  (5 instructions, 12 bytes) */
void jt_0976C8(void) {
    M68K_OR8(g_m68k.d[1], 0x2);
    M68K_ADDX16(g_m68k.d[1], g_m68k.d[1]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[5] -= 2; bus_write16(g_m68k.a[5], _mv); M68K_TST16(_mv); }
    M68K_ADDX16(g_m68k.d[1], g_m68k.d[6]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[5] -= 2; bus_write16(g_m68k.a[5], _mv); M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0976D4-$0976E0  (5 instructions, 12 bytes) */
void jt_0976D4(void) {
    M68K_OR8(g_m68k.d[1], 0x2);
    { uint32_t _ea = g_m68k.a[1]; uint16_t _tmp = bus_read16(_ea); M68K_ADDX16(_tmp, _predec16(3)); bus_write16(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[5] -= 2; bus_write16(g_m68k.a[5], _mv); M68K_TST16(_mv); }
    M68K_ADDX16(g_m68k.d[1], g_m68k.d[5]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[5] -= 2; bus_write16(g_m68k.a[5], _mv); M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0976E0-$0976EC  (5 instructions, 12 bytes) */
void jt_0976E0(void) {
    M68K_OR8(g_m68k.d[1], 0x2);
    M68K_ADDX16(g_m68k.d[1], g_m68k.d[0]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[6]);
    M68K_ADDX16(g_m68k.d[1], g_m68k.d[5]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[6]);
    /* WARNING: function did not end with RTS */
}

/* $0976EC-$0976F8  (5 instructions, 12 bytes) */
void jt_0976EC(void) {
    M68K_OR8(g_m68k.d[1], 0x2);
    { uint32_t _ea = g_m68k.a[1]; uint16_t _tmp = bus_read16(_ea); M68K_ADDX16(_tmp, _predec16(2)); bus_write16(_ea, _tmp); }
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[6]);
    M68K_ADDX16(g_m68k.d[1], g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[6]);
    /* WARNING: function did not end with RTS */
}

/* $0976F8-$097704  (5 instructions, 12 bytes) */
void jt_0976F8(void) {
    M68K_OR8(g_m68k.d[1], 0x2);
    M68K_ADDX16(g_m68k.d[1], g_m68k.d[1]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[6]);
    M68K_ADDX16(g_m68k.d[1], g_m68k.d[6]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[6]);
    /* WARNING: function did not end with RTS */
}

/* $097704-$097710  (5 instructions, 12 bytes) */
void jt_097704(void) {
    M68K_OR8(g_m68k.d[1], 0x2);
    { uint32_t _ea = g_m68k.a[1]; uint16_t _tmp = bus_read16(_ea); M68K_ADDX16(_tmp, _predec16(3)); bus_write16(_ea, _tmp); }
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[6]);
    M68K_ADDX16(g_m68k.d[1], g_m68k.d[5]);
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[6]);
    /* WARNING: function did not end with RTS */
}

/* $097710-$097778  (41 instructions, 104 bytes) */
void jt_097710(void) {
    M68K_OR8(g_m68k.d[7], 0x4);
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
    M68K_ADD16(g_m68k.d[2], bus_read16(0x9ae36));
    M68K_ADD32(g_m68k.d[2], g_m68k.d[6]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[5]));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[2], _predec32(4));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    g_m68k.a[2] += (int16_t)(uint16_t)(_postinc16(1));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    g_m68k.a[2] += (int16_t)(uint16_t)(_postinc16(4));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    g_m68k.a[2] += (int16_t)(uint16_t)(_postinc16(7));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    g_m68k.a[2] += (int16_t)(uint16_t)(_predec16(2));
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

/* $097784-$0977F8  (45 instructions, 116 bytes) */
void jt_097784(void) {
    M68K_OR8(g_m68k.d[7], 0x4);
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[7] + 0x3700));
    M68K_ADD32(g_m68k.d[2], bus_read32(0x9ae8e));
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
    g_m68k.a[2] += (int16_t)(uint16_t)(_predec16(3));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    g_m68k.a[2] += (int16_t)(uint16_t)(_predec16(6));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    g_m68k.a[2] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[1] + 0x3700));
    g_m68k.a[2] += (int16_t)(uint16_t)(_predec16(2));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    M68K_ADD16(g_m68k.d[2], bus_read16(0x3700D485));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[4]));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[2], _predec32(3));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    M68K_ADD16(g_m68k.d[2], bus_read16(0x9aeda));
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

/* $0977F8-$097860  (41 instructions, 104 bytes) */
void jt_0977F8(void) {
    M68K_OR8(g_m68k.d[7], 0x4);
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
    M68K_ADD16(g_m68k.d[2], bus_read16(0x9b21e));
    M68K_ADD32(g_m68k.d[2], g_m68k.d[6]);
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[5]);
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[5]));
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[5]);
    M68K_ADD32(g_m68k.d[2], _predec32(4));
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[5]);
    g_m68k.a[2] += (int16_t)(uint16_t)(_postinc16(1));
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[5]);
    g_m68k.a[2] += (int16_t)(uint16_t)(_postinc16(4));
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[5]);
    g_m68k.a[2] += (int16_t)(uint16_t)(_postinc16(7));
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[5]);
    g_m68k.a[2] += (int16_t)(uint16_t)(_predec16(2));
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[5]);
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[0] + 0 + (int32_t)g_m68k.d[3] * 2));
    M68K_ADD32(g_m68k.d[2], bus_read32(0x97842 + (int32_t)g_m68k.d[3] * 2));
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

/* $09786C-$0978E0  (45 instructions, 116 bytes) */
void jt_09786C(void) {
    M68K_OR8(g_m68k.d[7], 0x4);
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[7] + 0x3a00));
    M68K_ADD32(g_m68k.d[2], bus_read32(0x9b276));
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[3]));
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[5]);
    M68K_ADD32(g_m68k.d[2], _predec32(2));
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[5]);
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[0] + 0 + (int32_t)g_m68k.d[3] * 2));
    M68K_ADD32(g_m68k.d[2], bus_read32(0x97886 + (int32_t)g_m68k.d[3] * 2));
    g_m68k.a[2] += (int16_t)(uint16_t)(g_m68k.a[0]);
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[5]);
    M68K_ADD32(g_m68k.d[2], _predec32(3));
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[5]);
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[1] + 0 + (int32_t)g_m68k.d[3] * 2));
    M68K_ADD32(g_m68k.d[2], 0x3a00d4c9);
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[5]);
    M68K_ADD32(g_m68k.d[2], _predec32(4));
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[5]);
    g_m68k.a[2] += (int16_t)(uint16_t)(_predec16(3));
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[5]);
    g_m68k.a[2] += (int16_t)(uint16_t)(_predec16(6));
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[5]);
    g_m68k.a[2] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[1] + 0x3a00));
    g_m68k.a[2] += (int16_t)(uint16_t)(_predec16(2));
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[5]);
    M68K_ADD16(g_m68k.d[2], bus_read16(0x3A00D485));
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[5]);
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[4]));
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[5]);
    M68K_ADD32(g_m68k.d[2], _predec32(3));
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[5]);
    M68K_ADD16(g_m68k.d[2], bus_read16(0x9b2c2));
    M68K_ADD32(g_m68k.d[2], g_m68k.d[6]);
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[5]);
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[5]));
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[5]);
    M68K_ADD32(g_m68k.d[2], _predec32(4));
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[5]);
    M68K_ADD16(g_m68k.d[2], bus_read16(0x978d2 + (int32_t)g_m68k.d[3] * 2));
    M68K_ADD32(g_m68k.d[2], g_m68k.d[7]);
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[5]);
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[6]));
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[5]);
    M68K_ADD32(g_m68k.d[2], _predec32(5));
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[5]);
    /* WARNING: function did not end with RTS */
}

/* $0978E0-$097904  (16 instructions, 36 bytes) */
void jt_0978E0(void) {
    M68K_OR8(g_m68k.d[7], 0x4);
    g_m68k.a[1] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[4]));
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[5]);
    M68K_ADD32(g_m68k.d[2], g_m68k.a[0]);
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[5]);
    M68K_ADD32(g_m68k.d[2], bus_read32(g_m68k.a[7]));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    M68K_ADD16(g_m68k.d[2], 0x3800);
    M68K_ADD32(g_m68k.d[2], g_m68k.a[1]);
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[4]);
    M68K_ADD32(g_m68k.d[2], _postinc32(0));
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[4]);
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[4]);
    /* WARNING: function did not end with RTS */
}

/* $097954-$09795C  (2 instructions, 8 bytes) */
void jt_097954(void) {
    M68K_OR8(g_m68k.d[7], 0x4);
    { uint32_t _ea = (g_m68k.a[3] + 0x3a00); uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}
