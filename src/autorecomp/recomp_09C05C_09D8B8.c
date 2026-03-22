/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $09C05C - $09D8B8 */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

/* $09C05C-$09C072  (6 instructions, 22 bytes) */
void jt_09C05C(void) {
    M68K_OR8(g_m68k.d[2], 0xa);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP16(g_m68k.d[6], _postinc16(5));
    /* WARNING: function did not end with RTS */
}

/* $09C0B0-$09C0B6  (2 instructions, 6 bytes) */
void jt_09C0B0(void) {
    M68K_OR8(g_m68k.d[6], 0xa);
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $09C1A4-$09C1AA  (2 instructions, 6 bytes) */
void jt_09C1A4(void) {
    M68K_OR8(g_m68k.d[4], 0xa);
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $09C248-$09C24E  (2 instructions, 6 bytes) */
void jt_09C248(void) {
    M68K_OR8(g_m68k.d[4], 0x4);
    M68K_CMP16(g_m68k.d[6], _postinc16(5));
    /* WARNING: function did not end with RTS */
}

/* $09C28C-$09C292  (2 instructions, 6 bytes) */
void jt_09C28C(void) {
    M68K_OR8(g_m68k.d[1], 0x2);
    M68K_CMP16(g_m68k.d[6], _predec16(1));
    /* WARNING: function did not end with RTS */
}

/* $09C298-$09C2AA  (5 instructions, 18 bytes) */
void jt_09C298(void) {
    M68K_OR8(g_m68k.d[5], 0xa);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP8(g_m68k.d[6], _predec8(3));
    /* WARNING: function did not end with RTS */
}

/* $09C364-$09C36A  (2 instructions, 6 bytes) */
void jt_09C364(void) {
    M68K_OR8(g_m68k.d[4], 0xa);
    M68K_CMP8(g_m68k.d[6], bus_read8(g_m68k.a[6]));
    /* WARNING: function did not end with RTS */
}

/* $09C408-$09C41A  (5 instructions, 18 bytes) */
void jt_09C408(void) {
    M68K_OR8(g_m68k.d[4], 0xa);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP8(g_m68k.d[6], _predec8(3));
    /* WARNING: function did not end with RTS */
}

/* $09C4AC-$09C4B2  (2 instructions, 6 bytes) */
void jt_09C4AC(void) {
    M68K_OR8(g_m68k.d[5], 0xa);
    M68K_CMP8(g_m68k.d[6], _postinc8(3));
    /* WARNING: function did not end with RTS */
}

/* $09C578-$09C5D8  (35 instructions, 96 bytes) */
void jt_09C578(void) {
    M68K_OR8(g_m68k.d[6], 0x9);
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    /* TODO $09C57E: sbcd.b d0, d7  [8F 00] */
    M68K_CMP32(g_m68k.d[6], g_m68k.d[2]);
    /* TODO $09C582: sbcd.b d0, d7  [8F 00] */
    M68K_CMP32(g_m68k.d[6], g_m68k.d[2]);
    /* TODO $09C586: sbcd.b d0, d7  [8F 00] */
    M68K_CMP32(g_m68k.d[6], g_m68k.d[2]);
    /* TODO $09C58A: sbcd.b d0, d7  [8F 00] */
    M68K_CMP32(g_m68k.d[6], g_m68k.d[2]);
    /* TODO $09C58E: sbcd.b d0, d7  [8F 00] */
    M68K_CMP32(g_m68k.d[6], g_m68k.d[2]);
    /* TODO $09C592: sbcd.b d0, d7  [8F 00] */
    M68K_CMP32(g_m68k.d[6], g_m68k.d[2]);
    /* TODO $09C596: sbcd.b d0, d7  [8F 00] */
    M68K_CMP32(g_m68k.d[6], g_m68k.d[2]);
    /* TODO $09C59A: sbcd.b d0, d7  [8F 00] */
    M68K_CMP32(g_m68k.d[6], bus_read32(g_m68k.a[7] + (-0x7100)));
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[1], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[5]; uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[1], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[2] + (-0x6e00)); uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.a[1] * 2); uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[1], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[3] + (-0x6e00)); uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.a[1] * 2); uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $09C654-$09C6AC  (26 instructions, 88 bytes) */
void jt_09C654(void) {
    M68K_OR8(g_m68k.d[6], 0x8);
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[1], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[1], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[1], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[5] + (-0x6e00)); uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[1], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[0] + (-0x6e00)); uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[6] + (-0x6e00)); uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.a[1] * 2); uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = (g_m68k.a[1] + (-0x6e00)); uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[7] + (-0x6e00)); uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[6] + 0 + (int16_t)(uint16_t)g_m68k.a[1] * 2); uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $09C718-$09C734  (13 instructions, 28 bytes) */
void jt_09C718(void) {
    M68K_OR8(g_m68k.d[1], 0x6);
    M68K_CMP32(g_m68k.d[6], g_m68k.d[1]);
    /* TODO $09C71E: sbcd.b d0, d7  [8F 00] */
    M68K_CMP32(g_m68k.d[6], g_m68k.d[1]);
    /* TODO $09C722: sbcd.b d0, d7  [8F 00] */
    M68K_CMP32(g_m68k.d[6], g_m68k.d[1]);
    /* TODO $09C726: sbcd.b d0, d7  [8F 00] */
    M68K_CMP32(g_m68k.d[6], g_m68k.d[1]);
    /* TODO $09C72A: sbcd.b d0, d7  [8F 00] */
    M68K_CMP32(g_m68k.d[6], g_m68k.d[1]);
    /* TODO $09C72E: sbcd.b d0, d7  [8F 00] */
    M68K_CMP32(g_m68k.d[6], _predec32(6));
    /* TODO $09C732: sbcd.b d0, d7  [8F 00] */
    /* WARNING: function did not end with RTS */
}

/* $09C734-$09C754  (8 instructions, 32 bytes) */
void jt_09C734(void) {
    M68K_OR8(g_m68k.d[1], 0x7);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $09C754-$09C770  (10 instructions, 28 bytes) */
void jt_09C754(void) {
    M68K_OR8(g_m68k.d[1], 0x6);
    { uint32_t _ea = g_m68k.a[1]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[0], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[2]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[0], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[6] + (-0x7000)); uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = 0x9000BB9A; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[0], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[3]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $09C770-$09C78C  (10 instructions, 28 bytes) */
void jt_09C770(void) {
    M68K_OR8(g_m68k.d[1], 0x6);
    { uint32_t _ea = g_m68k.a[1]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[2]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[6] + (-0x6f00)); uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = 0x9100BB9A; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[3]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $09C78C-$09C7A8  (10 instructions, 28 bytes) */
void jt_09C78C(void) {
    M68K_OR8(g_m68k.d[1], 0x6);
    { uint32_t _ea = g_m68k.a[1]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[1], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[2]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[1], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[6] + (-0x6e00)); uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = 0x9200BB9A; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[1], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[3]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[1], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $09C7A8-$09C7BC  (9 instructions, 20 bytes) */
void jt_09C7A8(void) {
    M68K_OR8(g_m68k.d[1], 0x6);
    { uint32_t _ea = g_m68k.a[2]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[0], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[3]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[0], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[2]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[0], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[3]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $09C7C4-$09C824  (35 instructions, 96 bytes) */
void jt_09C7C4(void) {
    M68K_OR8(g_m68k.d[6], 0x9);
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    /* TODO $09C7CA: sbcd.b d0, d7  [8F 00] */
    M68K_CMP32(g_m68k.d[6], g_m68k.d[2]);
    /* TODO $09C7CE: sbcd.b d0, d7  [8F 00] */
    M68K_CMP32(g_m68k.d[6], g_m68k.d[2]);
    /* TODO $09C7D2: sbcd.b d0, d7  [8F 00] */
    M68K_CMP32(g_m68k.d[6], g_m68k.d[2]);
    /* TODO $09C7D6: sbcd.b d0, d7  [8F 00] */
    M68K_CMP32(g_m68k.d[6], g_m68k.d[2]);
    /* TODO $09C7DA: sbcd.b d0, d7  [8F 00] */
    M68K_CMP32(g_m68k.d[6], g_m68k.d[2]);
    /* TODO $09C7DE: sbcd.b d0, d7  [8F 00] */
    M68K_CMP32(g_m68k.d[6], g_m68k.d[2]);
    /* TODO $09C7E2: sbcd.b d0, d7  [8F 00] */
    M68K_CMP32(g_m68k.d[6], g_m68k.d[2]);
    /* TODO $09C7E6: sbcd.b d0, d7  [8F 00] */
    M68K_CMP32(g_m68k.d[6], bus_read32(g_m68k.a[7] + (-0x7100)));
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[0], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[5]; uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[0], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[2] + (-0x7000)); uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.a[1]); uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[0], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[3] + (-0x7000)); uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.a[1]); uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $09C8A0-$09C964  (70 instructions, 196 bytes) */
void jt_09C8A0(void) {
    M68K_OR8(g_m68k.d[6], 0x8);
    /* TODO $09C8A4: cmpm.w (a2)+, (a7)+  [BF 4A] */
    M68K_SUB8(g_m68k.d[0], g_m68k.d[0]);
    /* TODO $09C8A8: cmpm.w (a3)+, (a7)+  [BF 4B] */
    M68K_SUB8(g_m68k.d[0], g_m68k.d[0]);
    /* TODO $09C8AC: cmpm.w (a5)+, (a7)+  [BF 4D] */
    M68K_SUB8(g_m68k.d[0], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[1]; uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[7]); bus_write16(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $09C8C8: cmpm.w (a4)+, (a7)+  [BF 4C] */
    M68K_SUB8(g_m68k.d[0], g_m68k.d[0]);
    /* TODO $09C8CC: cmpm.w (a6)+, (a7)+  [BF 4E] */
    M68K_SUB8(g_m68k.d[0], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[2]; uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[7]); bus_write16(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[0], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[7]; uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[7]); bus_write16(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $09C8EC: cmpm.w (a7)+, (a7)+  [BF 4F] */
    M68K_SUB8(g_m68k.d[0], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[3]; uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[7]); bus_write16(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[0], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[0]; uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[7]); bus_write16(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[0], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[5]; uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[7]); bus_write16(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[4]; uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[7]); bus_write16(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[0], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[1]; uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[7]); bus_write16(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[0], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[7]); bus_write16(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[0], g_m68k.d[0]);
    M68K_EOR16(g_m68k.d[4], g_m68k.d[7]);
    M68K_SUB8(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = 0x009000; uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    M68K_EOR16(g_m68k.d[0], g_m68k.d[7]);
    M68K_SUB8(g_m68k.d[0], g_m68k.d[0]);
    M68K_EOR16(g_m68k.d[5], g_m68k.d[7]);
    M68K_SUB8(g_m68k.d[0], g_m68k.d[0]);
    /* TODO $09C940: cmpm.w (a0)+, (a7)+  [BF 48] */
    M68K_SUB8(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = 0x8F00BC81; uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    /* TODO $09C95A: sbcd.b d0, d7  [8F 00] */
    M68K_CMP32(g_m68k.d[6], g_m68k.d[1]);
    /* TODO $09C95E: sbcd.b d0, d7  [8F 00] */
    M68K_CMP32(g_m68k.d[6], g_m68k.d[1]);
    /* TODO $09C962: sbcd.b d0, d7  [8F 00] */
    /* WARNING: function did not end with RTS */
}

/* $09C964-$09C980  (13 instructions, 28 bytes) */
void jt_09C964(void) {
    M68K_OR8(g_m68k.d[1], 0x6);
    M68K_CMP32(g_m68k.d[6], g_m68k.d[1]);
    /* TODO $09C96A: sbcd.b d0, d7  [8F 00] */
    M68K_CMP32(g_m68k.d[6], g_m68k.d[1]);
    /* TODO $09C96E: sbcd.b d0, d7  [8F 00] */
    M68K_CMP32(g_m68k.d[6], g_m68k.d[1]);
    /* TODO $09C972: sbcd.b d0, d7  [8F 00] */
    M68K_CMP32(g_m68k.d[6], g_m68k.d[1]);
    /* TODO $09C976: sbcd.b d0, d7  [8F 00] */
    M68K_CMP32(g_m68k.d[6], g_m68k.d[1]);
    /* TODO $09C97A: sbcd.b d0, d7  [8F 00] */
    M68K_CMP32(g_m68k.d[6], _predec32(6));
    /* TODO $09C97E: sbcd.b d0, d7  [8F 00] */
    /* WARNING: function did not end with RTS */
}

/* $09C980-$09C9A0  (8 instructions, 32 bytes) */
void jt_09C980(void) {
    M68K_OR8(g_m68k.d[1], 0x7);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $09C9A0-$09CA0C  (42 instructions, 108 bytes) */
void jt_09C9A0(void) {
    M68K_OR8(g_m68k.d[6], 0x7);
    { uint32_t _ea = g_m68k.a[5]; uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[7]); bus_write16(_ea, _tmp); }
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[5], g_m68k.a[7]);
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[5], _postinc32(1));
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[5], _predec32(4));
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[5], bus_read32(g_m68k.a[6] + (-0x6f00)));
    M68K_CMP32(g_m68k.a[5], bus_read32(0x95aba));
    M68K_CMP8(g_m68k.d[6], g_m68k.d[6]);
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[7]); bus_write16(_ea, _tmp); }
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.a[1]); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    M68K_CMP32(g_m68k.a[5], g_m68k.a[2]);
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.a[1]); uint8_t _b = 1u << ((g_m68k.d[0]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    M68K_CMP32(g_m68k.a[5], bus_read32(g_m68k.a[7] + (-0x6f00)));
    M68K_CMP32(g_m68k.a[5], /* UNHANDLED_READ: (a16, a1.w) */ 0);
    M68K_CMP8(g_m68k.d[6], g_m68k.d[7]);
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[7]; uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[7]); bus_write16(_ea, _tmp); }
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[5], bus_read32(g_m68k.a[0]));
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[5], _postinc32(2));
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[5], _predec32(5));
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[5], bus_read32(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.a[1]));
    M68K_CMP32(g_m68k.a[5], 0x9100bc07);
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[0] + (-0x6f00)); uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[7]); bus_write16(_ea, _tmp); }
    M68K_CMP32(g_m68k.a[5], bus_read32(g_m68k.a[1]));
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[5], _postinc32(3));
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[5], _predec32(6));
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[5], bus_read32(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.a[1]));
    /* WARNING: function did not end with RTS */
}

/* $09CA4C-$09CA68  (8 instructions, 28 bytes) */
void jt_09CA4C(void) {
    M68K_OR8(g_m68k.d[6], 0x9);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP32(g_m68k.a[6], 0x9100be03);
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[5], bus_read32(g_m68k.a[0] + (-0x6f00)));
    M68K_CMP32(g_m68k.a[5], bus_read32(g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.a[1]));
    M68K_CMP8(g_m68k.d[6], g_m68k.d[0]);
    M68K_SUBX8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $09CB28-$09CB64  (15 instructions, 60 bytes) */
void jt_09CB28(void) {
    M68K_OR8(g_m68k.d[2], 0xa);
    { uint32_t _ea = (g_m68k.a[3] + (-0x7100)); uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[7]); bus_write16(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[0] + 0 + (int32_t)g_m68k.a[0] * 8); uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[7]); bus_write16(_ea, _tmp); }
    { uint32_t _ea = 0x008F00; uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[7]); bus_write16(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP32(g_m68k.a[6], bus_read32(0x8F00BF71));
    /* TODO $09CB5A: sbcd.b d0, d7  [8F 00] */
    { uint32_t _ea = 0x8F00BE08; uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[7]); bus_write16(_ea, _tmp); }
    /* TODO $09CB62: sbcd.b d0, d7  [8F 00] */
    /* WARNING: function did not end with RTS */
}

/* $09CB7C-$09CB88  (3 instructions, 12 bytes) */
void jt_09CB7C(void) {
    M68K_OR8(g_m68k.d[2], 0x9);
    { uint32_t _ea = (g_m68k.a[4] + (-0x7100)); uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[7]); bus_write16(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[2] + 0 + (int32_t)g_m68k.a[0] * 8); uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[7]); bus_write16(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $09CBC8-$09CBF8  (14 instructions, 48 bytes) */
void jt_09CBC8(void) {
    M68K_OR8(g_m68k.d[6], 0xa);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP8(g_m68k.d[7], _postinc8(4));
    M68K_SUBX8(g_m68k.d[1], g_m68k.d[0]);
    M68K_CMP8(g_m68k.d[7], _predec8(2));
    M68K_SUBX8(g_m68k.d[1], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $09CCBC-$09CCEC  (14 instructions, 48 bytes) */
void jt_09CCBC(void) {
    M68K_OR8(g_m68k.d[5], 0xa);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP8(g_m68k.d[7], _postinc8(4));
    M68K_SUBX8(g_m68k.d[1], g_m68k.d[0]);
    M68K_CMP8(g_m68k.d[7], _predec8(2));
    M68K_SUBX8(g_m68k.d[1], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $09CD88-$09CD8C  (1 instructions, 4 bytes) */
void jt_09CD88(void) {
    M68K_OR8(g_m68k.d[4], 0xa);
    /* WARNING: function did not end with RTS */
}

/* $09CE2C-$09CE38  (3 instructions, 12 bytes) */
void jt_09CE2C(void) {
    M68K_OR8(g_m68k.d[6], 0xa);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $09CF20-$09CF50  (14 instructions, 48 bytes) */
void jt_09CF20(void) {
    M68K_OR8(g_m68k.d[4], 0xa);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP8(g_m68k.d[7], _postinc8(4));
    M68K_SUBX8(g_m68k.d[1], g_m68k.d[0]);
    M68K_CMP8(g_m68k.d[7], _predec8(2));
    M68K_SUBX8(g_m68k.d[1], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $09CFC4-$09CFCC  (3 instructions, 8 bytes) */
void jt_09CFC4(void) {
    M68K_OR8(g_m68k.d[5], 0xa);
    M68K_CMP8(g_m68k.d[7], bus_read8(g_m68k.a[0]));
    M68K_SUBX8(g_m68k.d[1], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $09D090-$09D0F4  (36 instructions, 100 bytes) */
void jt_09D090(void) {
    M68K_OR8(g_m68k.d[3], 0x8);
    M68K_EOR32(g_m68k.d[2], g_m68k.d[7]);
    /* TODO $09D096: sbcd.b d0, d7  [8F 00] */
    M68K_EOR32(g_m68k.d[5], g_m68k.d[7]);
    /* TODO $09D09A: sbcd.b d0, d7  [8F 00] */
    M68K_EOR32(g_m68k.d[0], g_m68k.d[7]);
    /* TODO $09D09E: sbcd.b d0, d7  [8F 00] */
    M68K_EOR32(g_m68k.d[0], g_m68k.d[7]);
    /* TODO $09D0A2: sbcd.b d0, d7  [8F 00] */
    M68K_EOR32(g_m68k.d[0], g_m68k.d[7]);
    /* TODO $09D0A6: sbcd.b d0, d7  [8F 00] */
    M68K_EOR32(g_m68k.d[0], g_m68k.d[7]);
    /* TODO $09D0AA: sbcd.b d0, d7  [8F 00] */
    M68K_EOR32(g_m68k.d[1], g_m68k.d[7]);
    /* TODO $09D0AE: sbcd.b d0, d7  [8F 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_EOR32(g_m68k.d[3], g_m68k.d[7]);
    /* TODO $09D0B6: sbcd.b d0, d7  [8F 00] */
    M68K_EOR32(g_m68k.d[6], g_m68k.d[7]);
    /* TODO $09D0BA: sbcd.b d0, d7  [8F 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_EOR32(g_m68k.d[4], g_m68k.d[7]);
    /* TODO $09D0D6: sbcd.b d0, d7  [8F 00] */
    M68K_EOR32(g_m68k.d[7], g_m68k.d[7]);
    /* TODO $09D0DA: sbcd.b d0, d7  [8F 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $09D0F4-$09D118  (12 instructions, 36 bytes) */
void jt_09D0F4(void) {
    M68K_OR8(g_m68k.d[4], 0x2);
    { uint32_t _ea = g_m68k.a[5]; uint32_t _tmp = bus_read32(_ea); M68K_OR32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    M68K_OR8(g_m68k.d[7], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[6] + (-0x7200)); uint32_t _tmp = bus_read32(_ea); M68K_OR32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[6]; uint32_t _tmp = bus_read32(_ea); M68K_OR32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    M68K_OR8(g_m68k.d[7], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[7] + (-0x7200)); uint32_t _tmp = bus_read32(_ea); M68K_OR32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[7]; uint32_t _tmp = bus_read32(_ea); M68K_OR32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    M68K_OR8(g_m68k.d[7], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[0] + 0 + (int32_t)g_m68k.a[0] * 8); uint32_t _tmp = bus_read32(_ea); M68K_OR32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[0] + (-0x7200)); uint32_t _tmp = bus_read32(_ea); M68K_OR32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[1] + 0 + (int32_t)g_m68k.a[0] * 8); uint32_t _tmp = bus_read32(_ea); M68K_OR32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $09D118-$09D13C  (16 instructions, 36 bytes) */
void jt_09D118(void) {
    M68K_OR8(g_m68k.d[4], 0x2);
    /* TODO $09D11C: cmpm.l (a0)+, (a7)+  [BF 88] */
    M68K_OR8(g_m68k.d[7], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[4]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[7]); bus_write32(_ea, _tmp); }
    M68K_OR8(g_m68k.d[7], g_m68k.d[0]);
    /* TODO $09D124: cmpm.l (a1)+, (a7)+  [BF 89] */
    M68K_OR8(g_m68k.d[7], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[5]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[7]); bus_write32(_ea, _tmp); }
    M68K_OR8(g_m68k.d[7], g_m68k.d[0]);
    /* TODO $09D12C: cmpm.l (a2)+, (a7)+  [BF 8A] */
    M68K_OR8(g_m68k.d[7], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[7]); bus_write32(_ea, _tmp); }
    M68K_OR8(g_m68k.d[7], g_m68k.d[0]);
    /* TODO $09D134: cmpm.l (a3)+, (a7)+  [BF 8B] */
    M68K_OR8(g_m68k.d[7], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[1] + 0 + (int32_t)g_m68k.a[0] * 8); uint32_t _tmp = bus_read32(_ea); M68K_OR32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $09D13C-$09D160  (16 instructions, 36 bytes) */
void jt_09D13C(void) {
    M68K_OR8(g_m68k.d[4], 0x2);
    /* TODO $09D140: cmpm.l (a4)+, (a7)+  [BF 8C] */
    M68K_OR8(g_m68k.d[7], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[7]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[7]); bus_write32(_ea, _tmp); }
    M68K_OR8(g_m68k.d[7], g_m68k.d[0]);
    /* TODO $09D148: cmpm.l (a5)+, (a7)+  [BF 8D] */
    M68K_OR8(g_m68k.d[7], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[0]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[7]); bus_write32(_ea, _tmp); }
    M68K_OR8(g_m68k.d[7], g_m68k.d[0]);
    /* TODO $09D150: cmpm.l (a6)+, (a7)+  [BF 8E] */
    M68K_OR8(g_m68k.d[7], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[1]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[7]); bus_write32(_ea, _tmp); }
    M68K_OR8(g_m68k.d[7], g_m68k.d[0]);
    /* TODO $09D158: cmpm.l (a7)+, (a7)+  [BF 8F] */
    M68K_OR8(g_m68k.d[7], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[1] + 0 + (int32_t)g_m68k.a[0] * 8); uint32_t _tmp = bus_read32(_ea); M68K_OR32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $09D160-$09D184  (16 instructions, 36 bytes) */
void jt_09D160(void) {
    M68K_OR8(g_m68k.d[4], 0x2);
    { uint32_t _ea = g_m68k.a[0]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[7]); bus_write32(_ea, _tmp); }
    M68K_OR8(g_m68k.d[7], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[7]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[7]); bus_write32(_ea, _tmp); }
    M68K_OR8(g_m68k.d[7], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[1]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[7]); bus_write32(_ea, _tmp); }
    M68K_OR8(g_m68k.d[7], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[2]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[7]); bus_write32(_ea, _tmp); }
    M68K_OR8(g_m68k.d[7], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[2]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[7]); bus_write32(_ea, _tmp); }
    M68K_OR8(g_m68k.d[7], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[3]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[7]); bus_write32(_ea, _tmp); }
    M68K_OR8(g_m68k.d[7], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[3]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[7]); bus_write32(_ea, _tmp); }
    M68K_OR8(g_m68k.d[7], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[1] + 0 + (int32_t)g_m68k.a[0] * 8); uint32_t _tmp = bus_read32(_ea); M68K_OR32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $09D184-$09D188  (1 instructions, 4 bytes) */
void jt_09D184(void) {
    M68K_OR8(g_m68k.d[6], 0x9);
    /* WARNING: function did not end with RTS */
}

/* $09D260-$09D2B8  (28 instructions, 88 bytes) */
void jt_09D260(void) {
    M68K_OR8(g_m68k.d[6], 0x8);
    { uint32_t _ea = g_m68k.a[4]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[7]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[6], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[7]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[6], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[2]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[7]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[6], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[1] + (-0x6400)); uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[7]); bus_write32(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[7]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[7]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[6], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[3]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[7]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[6], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[2] + (-0x6400)); uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[7]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[1] + 0 + (int32_t)g_m68k.a[1] * 4); uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[7]); bus_write32(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[4]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[7]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[6], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[3] + (-0x6400)); uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[7]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[2] + 0 + (int32_t)g_m68k.a[1] * 4); uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[7]); bus_write32(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $09D324-$09D340  (13 instructions, 28 bytes) */
void jt_09D324(void) {
    M68K_OR8(g_m68k.d[1], 0x6);
    M68K_CMP32(g_m68k.d[6], g_m68k.d[1]);
    M68K_SUB8(g_m68k.d[6], g_m68k.d[0]);
    M68K_CMP32(g_m68k.d[6], g_m68k.d[6]);
    M68K_SUB8(g_m68k.d[6], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[5]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[7]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[6], g_m68k.d[0]);
    M68K_CMP32(g_m68k.d[6], g_m68k.d[1]);
    M68K_SUB8(g_m68k.d[6], g_m68k.d[0]);
    M68K_CMP32(g_m68k.d[6], g_m68k.d[1]);
    M68K_SUB8(g_m68k.d[6], g_m68k.d[0]);
    M68K_CMP32(g_m68k.d[6], _predec32(6));
    M68K_SUB8(g_m68k.d[6], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $09D340-$09D34C  (3 instructions, 12 bytes) */
void jt_09D340(void) {
    M68K_OR8(g_m68k.d[1], 0x2);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $09D34C-$09D350  (1 instructions, 4 bytes) */
void jt_09D34C(void) {
    M68K_OR8(g_m68k.d[6], 0x9);
    /* WARNING: function did not end with RTS */
}

/* $09D428-$09D4C0  (54 instructions, 152 bytes) */
void jt_09D428(void) {
    M68K_OR8(g_m68k.d[6], 0x8);
    M68K_CMP32(g_m68k.a[7], g_m68k.d[6]);
    M68K_SUB8(g_m68k.d[6], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[7], g_m68k.a[1]);
    M68K_SUB8(g_m68k.d[6], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[7], g_m68k.a[7]);
    M68K_SUB8(g_m68k.d[6], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[7], bus_read32(g_m68k.a[7]));
    M68K_SUB8(g_m68k.d[6], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP32(g_m68k.a[7], g_m68k.a[2]);
    M68K_SUB8(g_m68k.d[6], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[7], bus_read32(g_m68k.a[0]));
    M68K_SUB8(g_m68k.d[6], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[7], _postinc32(0));
    M68K_SUB8(g_m68k.d[6], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[7], _predec32(0));
    M68K_SUB8(g_m68k.d[6], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP32(g_m68k.a[7], bus_read32(g_m68k.a[1]));
    M68K_SUB8(g_m68k.d[6], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[7], _postinc32(1));
    M68K_SUB8(g_m68k.d[6], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[7], _predec32(1));
    M68K_SUB8(g_m68k.d[6], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[7], _predec32(6));
    M68K_SUB8(g_m68k.d[6], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP32(g_m68k.a[7], _postinc32(2));
    M68K_SUB8(g_m68k.d[6], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[7], _predec32(2));
    M68K_SUB8(g_m68k.d[6], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[7], _predec32(7));
    M68K_SUB8(g_m68k.d[6], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[7], g_m68k.d[0]);
    M68K_SUB8(g_m68k.d[6], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = (g_m68k.a[4] + 0 + (int32_t)g_m68k.a[1] * 4); uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[7]); bus_write32(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $09D4EC-$09D590  (59 instructions, 164 bytes) */
void jt_09D4EC(void) {
    M68K_OR8(g_m68k.d[4], 0xa);
    M68K_CMP32(g_m68k.a[7], g_m68k.d[7]);
    M68K_SUBX8(g_m68k.d[5], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[7], g_m68k.a[3]);
    M68K_SUBX8(g_m68k.d[5], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[7], bus_read32(g_m68k.a[2]));
    M68K_SUBX8(g_m68k.d[5], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP32(g_m68k.a[7], g_m68k.a[0]);
    M68K_SUBX8(g_m68k.d[5], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[7], g_m68k.a[4]);
    M68K_SUBX8(g_m68k.d[5], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[7], bus_read32(g_m68k.a[3]));
    M68K_SUBX8(g_m68k.d[5], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[7], _postinc32(3));
    M68K_SUBX8(g_m68k.d[5], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP32(g_m68k.a[7], g_m68k.a[5]);
    M68K_SUBX8(g_m68k.d[5], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[7], bus_read32(g_m68k.a[4]));
    M68K_SUBX8(g_m68k.d[5], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[7], _postinc32(4));
    M68K_SUBX8(g_m68k.d[5], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP32(g_m68k.a[7], g_m68k.a[6]);
    M68K_SUBX8(g_m68k.d[5], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[7], bus_read32(g_m68k.a[5]));
    M68K_SUBX8(g_m68k.d[5], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[7], _postinc32(5));
    M68K_SUBX8(g_m68k.d[5], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[7], _postinc32(5));
    M68K_SUBX8(g_m68k.d[5], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[7], _postinc32(5));
    M68K_SUBX8(g_m68k.d[5], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[7], _postinc32(5));
    M68K_SUBX8(g_m68k.d[5], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[7], _postinc32(5));
    M68K_SUBX8(g_m68k.d[5], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[7], _postinc32(5));
    M68K_SUBX8(g_m68k.d[5], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[7], bus_read32(g_m68k.a[6] + (-0x6500)));
    /* WARNING: function did not end with RTS */
}

/* $09D590-$09D5C4  (17 instructions, 52 bytes) */
void jt_09D590(void) {
    M68K_OR8(g_m68k.d[2], 0x6);
    M68K_CMP32(g_m68k.a[7], bus_read32(g_m68k.a[7] + (-0x6500)));
    M68K_CMP32(g_m68k.a[7], bus_read32(0x009B00));
    M68K_AND8(g_m68k.d[0], g_m68k.d[6]);
    M68K_SUBX8(g_m68k.d[5], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP32(g_m68k.a[7], bus_read32(0x9B00C007));
    M68K_SUBX8(g_m68k.d[5], g_m68k.d[0]);
    M68K_AND8(g_m68k.d[0], bus_read8(g_m68k.a[5]));
    M68K_SUBX8(g_m68k.d[5], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[7], _postinc32(5));
    M68K_SUBX8(g_m68k.d[5], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[7], _postinc32(5));
    M68K_SUBX8(g_m68k.d[5], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $09D5C4-$09D5E8  (10 instructions, 36 bytes) */
void jt_09D5C4(void) {
    M68K_OR8(g_m68k.d[2], 0x6);
    M68K_CMP32(g_m68k.a[6], bus_read32(0x9B01BFFA));
    M68K_SUBX8(g_m68k.d[5], g_m68k.d[0]);
    M68K_CMP8(g_m68k.d[7], g_m68k.d[1]);
    M68K_SUBX8(g_m68k.d[5], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP32(g_m68k.a[6], bus_read32(0x9B00BFFB));
    M68K_SUBX8(g_m68k.d[5], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $09D5F8-$09D624  (15 instructions, 44 bytes) */
void jt_09D5F8(void) {
    M68K_OR8(g_m68k.d[2], 0x5);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP32(g_m68k.a[7], _postinc32(5));
    M68K_SUBX8(g_m68k.d[5], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[7], _postinc32(5));
    M68K_SUBX8(g_m68k.d[5], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[7], _postinc32(5));
    M68K_SUBX8(g_m68k.d[5], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[7], _postinc32(5));
    M68K_SUBX8(g_m68k.d[5], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[7], bus_read32(g_m68k.a[6] + (-0x6500)));
    /* WARNING: function did not end with RTS */
}

/* $09D624-$09D650  (15 instructions, 44 bytes) */
void jt_09D624(void) {
    M68K_OR8(g_m68k.d[2], 0x5);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP32(g_m68k.a[7], _postinc32(5));
    M68K_SUBX8(g_m68k.d[5], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[7], _postinc32(5));
    M68K_SUBX8(g_m68k.d[5], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[7], _postinc32(5));
    M68K_SUBX8(g_m68k.d[5], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[7], _postinc32(5));
    M68K_SUBX8(g_m68k.d[5], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[7], bus_read32(g_m68k.a[6] + (-0x6500)));
    /* WARNING: function did not end with RTS */
}

/* $09D650-$09D680  (14 instructions, 48 bytes) */
void jt_09D650(void) {
    M68K_OR8(g_m68k.d[6], 0xa);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP32(g_m68k.a[7], 0x9a00c009);
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    M68K_AND8(g_m68k.d[0], bus_read8(g_m68k.a[7]));
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    M68K_AND8(g_m68k.d[0], _predec8(4));
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    M68K_AND8(g_m68k.d[0], bus_read8(g_m68k.a[7] + (-0x6600)));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP32(g_m68k.a[7], bus_read32(g_m68k.a[0] + 0 + (int32_t)g_m68k.a[1] * 2));
    /* WARNING: function did not end with RTS */
}

/* $09D744-$09D750  (4 instructions, 12 bytes) */
void jt_09D744(void) {
    M68K_OR8(g_m68k.d[6], 0xa);
    M68K_CMP32(g_m68k.a[7], bus_read32(g_m68k.a[5] + 0 + (int32_t)g_m68k.a[1] * 2));
    M68K_AND8(g_m68k.d[0], g_m68k.d[2]);
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $09D838-$09D8B8  (45 instructions, 128 bytes) */
void jt_09D838(void) {
    M68K_OR8(g_m68k.d[4], 0x8);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND16(g_m68k.d[0], bus_read16(g_m68k.a[0] + (-0x6600)));
    M68K_AND16(g_m68k.d[0], bus_read16(g_m68k.a[6] + 0 + (int32_t)g_m68k.a[1] * 2));
    M68K_AND32(g_m68k.d[0], g_m68k.d[5]);
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    M68K_AND32(g_m68k.d[0], bus_read32(g_m68k.a[4]));
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    M68K_AND32(g_m68k.d[0], _predec32(1));
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    M68K_AND32(g_m68k.d[0], bus_read32(g_m68k.a[6] + (-0x6600)));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND16(g_m68k.d[0], _postinc16(5));
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    M68K_AND16(g_m68k.d[0], bus_read16(g_m68k.a[1] + (-0x6600)));
    M68K_AND16(g_m68k.d[0], bus_read16(g_m68k.a[7] + 0 + (int32_t)g_m68k.a[1] * 2));
    M68K_AND32(g_m68k.d[0], g_m68k.d[6]);
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    M68K_AND32(g_m68k.d[0], bus_read32(g_m68k.a[5]));
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    M68K_AND32(g_m68k.d[0], _predec32(2));
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    M68K_AND32(g_m68k.d[0], bus_read32(g_m68k.a[7] + (-0x6600)));
    M68K_AND32(g_m68k.d[0], bus_read32(0x9d87a + (int32_t)g_m68k.a[1] * 2));
    M68K_AND16(g_m68k.d[0], _postinc16(6));
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    M68K_AND16(g_m68k.d[0], bus_read16(g_m68k.a[2] + (-0x6600)));
    M68K_AND16(g_m68k.d[0], bus_read16(0x009A00));
    M68K_AND32(g_m68k.d[0], g_m68k.d[7]);
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    M68K_AND32(g_m68k.d[0], bus_read32(g_m68k.a[6]));
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    M68K_AND32(g_m68k.d[0], _predec32(3));
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    M68K_AND32(g_m68k.d[0], bus_read32(g_m68k.a[0] + 0 + (int32_t)g_m68k.a[1] * 2));
    M68K_AND32(g_m68k.d[0], 0x9a00c05f);
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    M68K_AND16(g_m68k.d[0], bus_read16(g_m68k.a[3] + (-0x6600)));
    M68K_AND16(g_m68k.d[0], bus_read16(0x9A00C088));
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    M68K_AND32(g_m68k.d[0], bus_read32(g_m68k.a[7]));
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[3], bus_read8(g_m68k.a[1]));
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    M68K_AND32(g_m68k.d[0], bus_read32(g_m68k.a[1] + 0 + (int32_t)g_m68k.a[1] * 2));
    /* WARNING: function did not end with RTS */
}
