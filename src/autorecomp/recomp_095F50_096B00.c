/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $095F50 - $096B00 */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

/* $095F50-$095F58  (3 instructions, 8 bytes) */
void jt_095F50(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    M68K_ADD8(g_m68k.d[3], g_m68k.d[1]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $095F78-$095FA0  (15 instructions, 40 bytes) */
void jt_095F78(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    g_m68k.a[2] += (int16_t)(uint16_t)(bus_read16(0x3301D1E1));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    g_m68k.a[0] += bus_read32(g_m68k.a[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    g_m68k.a[2] += (int16_t)(uint16_t)(bus_read16(0x003301));
    { uint32_t _ea = g_m68k.a[2]; uint16_t _tmp = bus_read16(_ea); M68K_ADDX16(_tmp, _predec16(1)); bus_write16(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    { uint32_t _ea = (g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.d[3] * 2); uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    g_m68k.a[0] += bus_read32(g_m68k.a[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    g_m68k.a[0] += _predec32(1);
    { uint16_t _mv = (uint16_t)(g_m68k.d[3]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    { uint32_t _ea = g_m68k.a[5]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[2]); bus_write16(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $095FA0-$095FC8  (11 instructions, 40 bytes) */
void jt_095FA0(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    g_m68k.a[3] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[6] + 0x3400));
    g_m68k.a[2] += bus_read32(g_m68k.a[3] + 0x3401);
    g_m68k.a[0] += bus_read32(g_m68k.a[2]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[2])); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.a[3] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[7] + 0x3400));
    g_m68k.a[2] += bus_read32(g_m68k.a[2] + 0x3401);
    g_m68k.a[2] += bus_read32(g_m68k.a[3] + 0x1 + (int16_t)(uint16_t)g_m68k.d[3]);
    g_m68k.a[3] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[3] * 4));
    g_m68k.a[3] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.d[3] * 4));
    g_m68k.a[2] += bus_read32(g_m68k.a[2] + 0x1 + (int16_t)(uint16_t)g_m68k.d[3]);
    /* WARNING: function did not end with RTS */
}

/* $095FC8-$095FE0  (7 instructions, 24 bytes) */
void jt_095FC8(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    { uint32_t _ea = (g_m68k.a[2] + 0x3301); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[2]); bus_write16(_ea, _tmp); }
    { uint32_t _ea = /* UNHANDLED_ADDR: ([a2, d3.w * 2]) */ 0; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[2]); bus_write16(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[2]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[2]); bus_write16(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    { uint32_t _ea = (g_m68k.a[1] + 0x3301); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[2]); bus_write16(_ea, _tmp); }
    { uint32_t _ea = /* UNHANDLED_ADDR: ([a1, d3.w * 2]) */ 0; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[2]); bus_write16(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $095FF0-$096018  (14 instructions, 40 bytes) */
void jt_095FF0(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    { uint32_t _ea = (g_m68k.a[2] + 0x3300); uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[6] + 0 + (int16_t)(uint16_t)g_m68k.d[3] * 2); uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    { uint32_t _ea = (g_m68k.a[3] + 0x3300); uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[7] + 0 + (int16_t)(uint16_t)g_m68k.d[3] * 2); uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    g_m68k.a[0] += bus_read32(g_m68k.a[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    g_m68k.a[0] += _predec32(1);
    { uint16_t _mv = (uint16_t)(g_m68k.d[3]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    { uint32_t _ea = 0x003300; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $096018-$096024  (4 instructions, 12 bytes) */
void jt_096018(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    { uint32_t _ea = (g_m68k.a[7] + 0x3300); uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $096040-$096068  (16 instructions, 40 bytes) */
void jt_096040(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    g_m68k.a[3] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[3] * 4));
    M68K_ADD8(g_m68k.d[3], bus_read8(0x003401));
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.a[3] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.d[3] * 4));
    M68K_ADD8(g_m68k.d[3], _postinc8(7));
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[1])); M68K_TST16((uint16_t)g_m68k.d[2]);
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.a[0] += bus_read32(g_m68k.a[2]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[1])); M68K_TST16((uint16_t)g_m68k.d[2]);
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_ADDX8(_tmp, _predec8(7)); bus_write8(_ea, _tmp); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[2]);
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[2]);
    /* WARNING: function did not end with RTS */
}

/* $096068-$09606C  (1 instructions, 4 bytes) */
void jt_096068(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    /* WARNING: function did not end with RTS */
}

/* $096090-$0960B8  (10 instructions, 40 bytes) */
void jt_096090(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
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

/* $0960B8-$0960E0  (10 instructions, 40 bytes) */
void jt_0960B8(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
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

/* $0960E0-$096108  (10 instructions, 40 bytes) */
void jt_0960E0(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
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

/* $096108-$096130  (10 instructions, 40 bytes) */
void jt_096108(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
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

/* $096130-$096158  (10 instructions, 40 bytes) */
void jt_096130(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
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

/* $096158-$096180  (10 instructions, 40 bytes) */
void jt_096158(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
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

/* $096180-$0961A8  (10 instructions, 40 bytes) */
void jt_096180(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
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

/* $0961A8-$0961D0  (10 instructions, 40 bytes) */
void jt_0961A8(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
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

/* $0961D0-$0961F8  (10 instructions, 40 bytes) */
void jt_0961D0(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
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

/* $0961F8-$096220  (10 instructions, 40 bytes) */
void jt_0961F8(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
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

/* $096220-$096248  (10 instructions, 40 bytes) */
void jt_096220(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
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

/* $096248-$096270  (10 instructions, 40 bytes) */
void jt_096248(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
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

/* $096270-$096298  (10 instructions, 40 bytes) */
void jt_096270(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
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

/* $096298-$0962C0  (10 instructions, 40 bytes) */
void jt_096298(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
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

/* $0962C0-$0962E8  (10 instructions, 40 bytes) */
void jt_0962C0(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
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

/* $0962E8-$096310  (10 instructions, 40 bytes) */
void jt_0962E8(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
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

/* $096310-$096338  (10 instructions, 40 bytes) */
void jt_096310(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
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

/* $096338-$096360  (10 instructions, 40 bytes) */
void jt_096338(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
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

/* $096360-$096388  (10 instructions, 40 bytes) */
void jt_096360(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
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

/* $096388-$0963B0  (10 instructions, 40 bytes) */
void jt_096388(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
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

/* $0963B0-$0963B4  (1 instructions, 4 bytes) */
void jt_0963B0(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $096990-$096998  (2 instructions, 8 bytes) */
void jt_096990(void) {
    M68K_OR8(g_m68k.d[1], 0x3);
    M68K_ADD16(g_m68k.d[1], bus_read16(g_m68k.a[6] + 0 + (int32_t)g_m68k.d[3]));
    /* WARNING: function did not end with RTS */
}

/* $0969A0-$0969B0  (6 instructions, 16 bytes) */
void jt_0969A0(void) {
    M68K_OR8(g_m68k.d[1], 0x3);
    M68K_ADD16(g_m68k.d[1], bus_read16(g_m68k.a[7] + 0 + (int16_t)(uint16_t)g_m68k.d[3] * 8));
    M68K_ADD32(g_m68k.d[1], g_m68k.d[0]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[1], g_m68k.a[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0969B0-$0969C0  (6 instructions, 16 bytes) */
void jt_0969B0(void) {
    M68K_OR8(g_m68k.d[1], 0x3);
    M68K_ADD16(g_m68k.d[1], bus_read16(0x003A00));
    M68K_ADD32(g_m68k.d[1], g_m68k.d[1]);
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[5]);
    M68K_ADD32(g_m68k.d[1], g_m68k.a[3]);
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[5]);
    /* WARNING: function did not end with RTS */
}

/* $0969C0-$0969D0  (5 instructions, 16 bytes) */
void jt_0969C0(void) {
    M68K_OR8(g_m68k.d[1], 0x3);
    M68K_ADD16(g_m68k.d[1], bus_read16(0x3800D282));
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[4]);
    M68K_ADD32(g_m68k.d[1], g_m68k.a[4]);
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[4]);
    /* WARNING: function did not end with RTS */
}

/* $0969D0-$0969E0  (6 instructions, 16 bytes) */
void jt_0969D0(void) {
    M68K_OR8(g_m68k.d[1], 0x3);
    M68K_ADD16(g_m68k.d[1], bus_read16(0x9a3d6));
    M68K_ADD32(g_m68k.d[1], g_m68k.d[3]);
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[5]);
    M68K_ADD32(g_m68k.d[1], g_m68k.a[3]);
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[5]);
    /* WARNING: function did not end with RTS */
}

/* $0969E0-$0969F0  (6 instructions, 16 bytes) */
void jt_0969E0(void) {
    M68K_OR8(g_m68k.d[1], 0x3);
    M68K_ADD16(g_m68k.d[1], bus_read16(0x969e6 + (int32_t)g_m68k.d[3] * 2));
    M68K_ADD32(g_m68k.d[1], g_m68k.d[4]);
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[5]);
    M68K_ADD32(g_m68k.d[1], g_m68k.a[1]);
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[5]);
    /* WARNING: function did not end with RTS */
}

/* $0969F0-$096A00  (6 instructions, 16 bytes) */
void jt_0969F0(void) {
    M68K_OR8(g_m68k.d[1], 0x3);
    M68K_ADD16(g_m68k.d[1], 0x3700);
    M68K_ADD32(g_m68k.d[1], g_m68k.d[5]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[1], g_m68k.a[5]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $096A00-$096A04  (1 instructions, 4 bytes) */
void jt_096A00(void) {
    M68K_OR8(g_m68k.d[1], 0x3);
    /* WARNING: function did not end with RTS */
}

/* $096A10-$096A14  (1 instructions, 4 bytes) */
void jt_096A10(void) {
    M68K_OR8(g_m68k.d[1], 0x3);
    /* WARNING: function did not end with RTS */
}

/* $096A20-$096A24  (1 instructions, 4 bytes) */
void jt_096A20(void) {
    M68K_OR8(g_m68k.d[1], 0x3);
    /* WARNING: function did not end with RTS */
}

/* $096A30-$096A40  (7 instructions, 16 bytes) */
void jt_096A30(void) {
    M68K_OR8(g_m68k.d[1], 0x3);
    M68K_ADD32(g_m68k.d[1], bus_read32(g_m68k.a[1]));
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[4]);
    M68K_ADD32(g_m68k.d[1], _postinc32(1));
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[4]);
    M68K_ADD32(g_m68k.d[1], g_m68k.a[1]);
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[4]);
    /* WARNING: function did not end with RTS */
}

/* $096A40-$096A50  (7 instructions, 16 bytes) */
void jt_096A40(void) {
    M68K_OR8(g_m68k.d[1], 0x3);
    M68K_ADD32(g_m68k.d[1], bus_read32(g_m68k.a[2]));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[1], _postinc32(2));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[1], _predec32(0));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $096A50-$096A60  (7 instructions, 16 bytes) */
void jt_096A50(void) {
    M68K_OR8(g_m68k.d[1], 0x3);
    M68K_ADD32(g_m68k.d[1], bus_read32(g_m68k.a[3]));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[1], _postinc32(3));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[1], g_m68k.a[3]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $096A60-$096A70  (7 instructions, 16 bytes) */
void jt_096A60(void) {
    M68K_OR8(g_m68k.d[1], 0x3);
    M68K_ADD32(g_m68k.d[1], bus_read32(g_m68k.a[4]));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[1], _postinc32(4));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[1], _predec32(1));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $096A70-$096A80  (7 instructions, 16 bytes) */
void jt_096A70(void) {
    M68K_OR8(g_m68k.d[1], 0x3);
    M68K_ADD32(g_m68k.d[1], bus_read32(g_m68k.a[5]));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[1], _postinc32(5));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[1], _predec32(2));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $096A80-$096A90  (7 instructions, 16 bytes) */
void jt_096A80(void) {
    M68K_OR8(g_m68k.d[1], 0x3);
    M68K_ADD32(g_m68k.d[1], bus_read32(g_m68k.a[6]));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[1], _postinc32(6));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[1], _predec32(3));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[3] -= 2; bus_write16(g_m68k.a[3], _mv); M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $096A90-$096AA0  (7 instructions, 16 bytes) */
void jt_096A90(void) {
    M68K_OR8(g_m68k.d[1], 0x3);
    M68K_ADD32(g_m68k.d[1], bus_read32(g_m68k.a[7]));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[7]);
    M68K_ADD32(g_m68k.d[1], g_m68k.a[0]);
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[1])); M68K_TST16((uint16_t)g_m68k.d[7]);
    M68K_ADD32(g_m68k.d[1], bus_read32(g_m68k.a[0]));
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[1])); M68K_TST16((uint16_t)g_m68k.d[7]);
    /* WARNING: function did not end with RTS */
}

/* $096AA0-$096AB0  (7 instructions, 16 bytes) */
void jt_096AA0(void) {
    M68K_OR8(g_m68k.d[1], 0x3);
    M68K_ADD32(g_m68k.d[1], bus_read32(g_m68k.a[7]));
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); g_m68k.a[6] -= 2; bus_write16(g_m68k.a[6], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[1], g_m68k.a[0]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); g_m68k.a[6] -= 2; bus_write16(g_m68k.a[6], _mv); M68K_TST16(_mv); }
    M68K_ADD32(g_m68k.d[1], bus_read32(g_m68k.a[0]));
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); g_m68k.a[6] -= 2; bus_write16(g_m68k.a[6], _mv); M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $096AB0-$096AC0  (7 instructions, 16 bytes) */
void jt_096AB0(void) {
    M68K_OR8(g_m68k.d[1], 0x3);
    M68K_ADD32(g_m68k.d[1], _postinc32(0));
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[6]);
    M68K_ADD32(g_m68k.d[1], _postinc32(7));
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[6]);
    M68K_ADD32(g_m68k.d[1], _predec32(4));
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[6]);
    /* WARNING: function did not end with RTS */
}

/* $096AC0-$096AC4  (1 instructions, 4 bytes) */
void jt_096AC0(void) {
    M68K_OR8(g_m68k.d[3], 0x4);
    /* WARNING: function did not end with RTS */
}

/* $096AF4-$096B00  (3 instructions, 12 bytes) */
void jt_096AF4(void) {
    M68K_OR8(g_m68k.d[3], 0x4);
    M68K_ADD32(g_m68k.d[1], bus_read32(g_m68k.a[0] + 0x3c00));
    M68K_ADD32(g_m68k.d[1], bus_read32(g_m68k.a[3] + 0 + (int32_t)g_m68k.d[3] * 4));
    /* WARNING: function did not end with RTS */
}
