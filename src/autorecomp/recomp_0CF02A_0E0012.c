/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $0CF02A - $0E0012 */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

/* $0CF02A-$0CF02E  (1 instructions, 4 bytes) */
void jt_0CF02A(void) {
    { uint8_t _mv = (uint8_t)(g_m68k.d[6]); bus_write8(g_m68k.a[1] + (-0x7c00), _mv); M68K_TST8(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0CF42A-$0CF45E  (13 instructions, 52 bytes) */
void jt_0CF42A(void) {
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[4])); bus_write8(g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2, _mv); M68K_TST8(_mv); }
    { uint32_t _mv = (uint32_t)(0x82002140); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(g_m68k.d[3]); bus_write32(g_m68k.a[0] + (-0x7e00), _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(g_m68k.d[7]); bus_write32(g_m68k.a[0] + (-0x7e00), _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(g_m68k.a[3]); bus_write32(g_m68k.a[0] + (-0x7e00), _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(g_m68k.a[7]); bus_write32(g_m68k.a[0] + (-0x7e00), _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[3])); bus_write32(g_m68k.a[0] + (-0x7e00), _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[7])); bus_write32(g_m68k.a[0] + (-0x7e00), _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_postinc32(3)); bus_write32(g_m68k.a[0] + (-0x7e00), _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_postinc32(7)); bus_write32(g_m68k.a[0] + (-0x7e00), _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(3)); bus_write32(g_m68k.a[0] + (-0x7e00), _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(7)); bus_write32(g_m68k.a[0] + (-0x7e00), _mv); M68K_TST32(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0CF898-$0CF89A  (1 instructions, 2 bytes) */
void jt_0CF898(void) {
    /* TODO $0CF898: sbcd.b d0, d0  [81 00] */
    /* WARNING: function did not end with RTS */
}

/* $0D0002-$0D000E  (4 instructions, 12 bytes) */
void jt_0D0002(void) {
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[7] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 4)); bus_write8(g_m68k.a[4] + 0x13bc, _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[2]);
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(1))); M68K_TST8((uint8_t)g_m68k.d[7]);
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0D0010-$0D001A  (5 instructions, 10 bytes) */
void jt_0D0010(void) {
    /* TODO $0D0010: sbcd.b d0, d0  [81 00] */
    { uint8_t _mv = (uint8_t)(_predec8(3)); g_m68k.a[1] -= 1; bus_write8(g_m68k.a[1], _mv); M68K_TST8(_mv); }
    /* TODO $0D0014: sbcd.b d0, d0  [81 00] */
    { uint8_t _mv = (uint8_t)(_predec8(4)); g_m68k.a[1] -= 1; bus_write8(g_m68k.a[1], _mv); M68K_TST8(_mv); }
    /* TODO $0D0018: sbcd.b d0, d0  [81 00] */
    /* WARNING: function did not end with RTS */
}

/* $0D0020-$0D002A  (5 instructions, 10 bytes) */
void jt_0D0020(void) {
    /* TODO $0D0020: sbcd.b d0, d0  [81 00] */
    { uint8_t _mv = (uint8_t)(_predec8(3)); g_m68k.a[1] -= 1; bus_write8(g_m68k.a[1], _mv); M68K_TST8(_mv); }
    /* TODO $0D0024: sbcd.b d0, d0  [81 00] */
    { uint8_t _mv = (uint8_t)(_predec8(4)); g_m68k.a[1] -= 1; bus_write8(g_m68k.a[1], _mv); M68K_TST8(_mv); }
    /* TODO $0D0028: sbcd.b d0, d0  [81 00] */
    /* WARNING: function did not end with RTS */
}

/* $0D00A8-$0D00AA  (1 instructions, 2 bytes) */
void jt_0D00A8(void) {
    /* TODO $0D00A8: sbcd.b d0, d0  [81 00] */
    /* WARNING: function did not end with RTS */
}

/* $0D00C0-$0D00DA  (11 instructions, 26 bytes) */
void jt_0D00C0(void) {
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(_predec8(2)); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[6])); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.a[0])); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(5)); g_m68k.a[2] -= 1; bus_write8(g_m68k.a[2], _mv); M68K_TST8(_mv); }
    /* TODO $0D00D0: sbcd.b d0, d0  [81 00] */
    { uint8_t _mv = (uint8_t)(_predec8(6)); g_m68k.a[2] -= 1; bus_write8(g_m68k.a[2], _mv); M68K_TST8(_mv); }
    /* TODO $0D00D4: sbcd.b d0, d0  [81 00] */
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[1])); bus_write8(g_m68k.a[6] + (-0x7f00), _mv); M68K_TST8(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0D042A-$0D045A  (13 instructions, 48 bytes) */
void jt_0D042A(void) {
    { uint32_t _mv = (uint32_t)(bus_read32(0xc882d)); bus_write32(g_m68k.a[0] + 0x2180, _mv); M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[1]);
    { uint32_t _mv = (uint32_t)(g_m68k.d[3]); bus_write32(g_m68k.a[0] + 0x1 + (int16_t)(uint16_t)g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.a[0])); /* UNHANDLED_WRITE: ([a0]) = _mv */ M68K_TST32(_mv); }
    /* TODO $0D043C: sbcd.b d0, d0  [81 00] */
    { uint32_t _mv = (uint32_t)(g_m68k.a[0]); bus_write32(0x008100, _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[4])); bus_write32(0x008100, _mv); M68K_TST32(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.a[0])); bus_write8(g_m68k.a[2], _mv); g_m68k.a[2] += 1; M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(0x008100)); bus_write8(g_m68k.a[2], _mv); g_m68k.a[2] += 1; M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[6] + 0 + (int16_t)(uint16_t)g_m68k.a[0])); bus_write8(g_m68k.a[7] + 0x21e2, _mv); M68K_TST8(_mv); }
    /* TODO $0D0454: sbcd.b d0, d0  [81 00] */
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[5])); g_m68k.a[1] -= 1; bus_write8(g_m68k.a[1], _mv); M68K_TST8(_mv); }
    /* TODO $0D0458: sbcd.b d0, d0  [81 00] */
    /* WARNING: function did not end with RTS */
}

/* $0D0C2A-$0D0C3A  (7 instructions, 16 bytes) */
void jt_0D0C2A(void) {
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[7] + (-0x7dfe))); bus_write8(g_m68k.a[3], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_predec8(1)); bus_write8(g_m68k.a[3], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[2]);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[1])); bus_write8(g_m68k.a[3], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[2]);
    { uint8_t _mv = (uint8_t)(g_m68k.d[1]); bus_write8(g_m68k.a[3], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[2]);
    /* WARNING: function did not end with RTS */
}

/* $0D0D00-$0D0D02  (1 instructions, 2 bytes) */
void jt_0D0D00(void) {
    M68K_OR8(g_m68k.d[2], g_m68k.d[2]);
    /* WARNING: function did not end with RTS */
}

/* $0D142A-$0D143A  (6 instructions, 16 bytes) */
void jt_0D142A(void) {
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[3] + 0x3 + (int16_t)(uint16_t)g_m68k.a[0]))); M68K_TST8((uint8_t)g_m68k.d[3]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[1] + (-0x7dfd)))); M68K_TST8((uint8_t)g_m68k.d[3]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(7))); M68K_TST8((uint8_t)g_m68k.d[3]);
    M68K_OR8(g_m68k.d[1], g_m68k.d[3]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[5]))); M68K_TST8((uint8_t)g_m68k.d[3]);
    M68K_OR8(g_m68k.d[1], g_m68k.d[3]);
    /* WARNING: function did not end with RTS */
}

/* $0D18E0-$0D18E2  (1 instructions, 2 bytes) */
void jt_0D18E0(void) {
    M68K_OR8(g_m68k.d[2], g_m68k.d[1]);
    /* WARNING: function did not end with RTS */
}

/* $0D202A-$0D2056  (9 instructions, 44 bytes) */
void jt_0D202A(void) {
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[1])); bus_write8(0x820013DA, _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(_predec32(6)); bus_write32(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2, _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(7)); bus_write32(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2, _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[1] + (-0x7e00))); /* UNHANDLED_WRITE: ([$8200], d2.w * 2) = _mv */ M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[7] + (-0x7e00))); /* UNHANDLED_WRITE: $820023b4(d2.w * 2) = _mv */ M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(_postinc8(2)); bus_write8(0x820013CC, _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[3]);
    /* WARNING: function did not end with RTS */
}

/* $0D242A-$0D2446  (7 instructions, 28 bytes) */
void jt_0D242A(void) {
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[4])); bus_write8(0x820113D9, _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[1]);
    { uint8_t _mv = (uint8_t)(_predec8(2)); bus_write8(0x8201F490, _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[1]);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[4])); bus_write8(0x82012E13, _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[1]);
    { uint8_t _mv = (uint8_t)(bus_read8(0xd2445 + (int16_t)(uint16_t)g_m68k.a[0])); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0D2C2A-$0D2C32  (1 instructions, 8 bytes) */
void jt_0D2C2A(void) {
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.a[0])); bus_write32(0x20DB8100, _mv); M68K_TST32(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0D482A-$0D482E  (1 instructions, 4 bytes) */
void jt_0D482A(void) {
    { uint8_t _mv = (uint8_t)(g_m68k.d[6]); bus_write8(g_m68k.a[1] + (-0x7c00), _mv); M68K_TST8(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0D4C2A-$0D4C56  (16 instructions, 44 bytes) */
void jt_0D4C2A(void) {
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[4])); bus_write8(g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2, _mv); M68K_TST8(_mv); }
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[0]))); M68K_TST8((uint8_t)g_m68k.d[5]);
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[4]))); M68K_TST8((uint8_t)g_m68k.d[5]);
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(2))); M68K_TST8((uint8_t)g_m68k.d[5]);
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[4])); bus_write8(g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2, _mv); M68K_TST8(_mv); }
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[0]))); M68K_TST8((uint8_t)g_m68k.d[5]);
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[4]))); M68K_TST8((uint8_t)g_m68k.d[5]);
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(2))); M68K_TST8((uint8_t)g_m68k.d[5]);
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2)); /* UNHANDLED_WRITE: ([$820025bb], d2.w * 4, $aaaa) = _mv */ M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0D542A-$0D542E  (2 instructions, 4 bytes) */
void jt_0D542A(void) {
    /* TODO $0D542A: dc.w $f52f  [F5 2F] */
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0D5C2A-$0D5C46  (9 instructions, 28 bytes) */
void jt_0D5C2A(void) {
    { uint32_t _mv = (uint32_t)(g_m68k.a[5]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(_postinc32(1)); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[1] + 0x2 + (int16_t)(uint16_t)g_m68k.a[0])); bus_write8(g_m68k.a[5] + 0x272e, _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2)); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(bus_read32(0xd5c40 + (int16_t)(uint16_t)g_m68k.a[0] * 2)); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(g_m68k.d[7]); bus_write32(g_m68k.a[3] + (-0x7e00), _mv); M68K_TST32(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0D602A-$0D603E  (5 instructions, 20 bytes) */
void jt_0D602A(void) {
    { uint32_t _mv = (uint32_t)(g_m68k.d[6]); bus_write32(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 4, _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_postinc32(1)); bus_write32(0x84002792, _mv); M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(_postinc32(1)); bus_write32(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 4, _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_postinc32(7)); bus_write32(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 4, _mv); M68K_TST32(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0D682A-$0D6866  (20 instructions, 60 bytes) */
void jt_0D682A(void) {
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[6] + (-0x7c00))); /* UNHANDLED_WRITE: ([$840027b7, d2.w * 8], $aaaaaaaa) = _mv */ M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(g_m68k.d[6]); bus_write8(0x84001393, _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[0])); bus_write8(0x820018B3, _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(g_m68k.d[3]); bus_write8(g_m68k.a[4], _mv); g_m68k.a[4] += 1; M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[3])); bus_write8(g_m68k.a[4], _mv); g_m68k.a[4] += 1; M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(_predec8(1)); bus_write8(g_m68k.a[4], _mv); g_m68k.a[4] += 1; M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[7] + (-0x7e00))); bus_write8(g_m68k.a[4], _mv); g_m68k.a[4] += 1; M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(0xcea58)); bus_write8(g_m68k.a[4], _mv); g_m68k.a[4] += 1; M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[2]); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(g_m68k.d[7]); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(_predec8(4)); bus_write8(g_m68k.a[3], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[3]);
    /* WARNING: function did not end with RTS */
}

/* $0D6C2A-$0D6C66  (24 instructions, 60 bytes) */
void jt_0D6C2A(void) {
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[3] + (-0x7dff))); bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[0] + 0x1 + (int16_t)(uint16_t)g_m68k.a[0])); bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(bus_read32(0x008201)); bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(g_m68k.d[2]); bus_write32(g_m68k.a[3], _mv); g_m68k.a[3] += 4; M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[1]);
    { uint32_t _mv = (uint32_t)(g_m68k.a[2]); bus_write32(g_m68k.a[3], _mv); g_m68k.a[3] += 4; M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[1]);
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[3])); bus_write32(g_m68k.a[3], _mv); g_m68k.a[3] += 4; M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[1]);
    { uint32_t _mv = (uint32_t)(g_m68k.d[6]); bus_write32(g_m68k.a[1], _mv); g_m68k.a[1] += 4; M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[3]);
    { uint32_t _mv = (uint32_t)(g_m68k.d[1]); bus_write32(g_m68k.a[1], _mv); g_m68k.a[1] += 4; M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[3]);
    { uint32_t _mv = (uint32_t)(0x820322b6); bus_write32(g_m68k.a[1], _mv); M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[3]);
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[7] + (-0x7bff))); bus_write32(g_m68k.a[3], _mv); g_m68k.a[3] += 4; M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(g_m68k.d[7]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[1]);
    { uint32_t _mv = (uint32_t)(g_m68k.a[2]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[1]);
    { uint32_t _mv = (uint32_t)(g_m68k.a[4]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[1]);
    { uint8_t _mv = (uint8_t)(_predec8(3)); g_m68k.a[1] -= 1; bus_write8(g_m68k.a[1], _mv); M68K_TST8(_mv); }
    /* TODO $0D6C64: sbcd.b d1, d0  [81 01] */
    /* WARNING: function did not end with RTS */
}

/* $0D71C0-$0D71C2  (1 instructions, 2 bytes) */
void jt_0D71C0(void) {
    /* TODO $0D71C0: sbcd.b d0, d0  [81 00] */
    /* WARNING: function did not end with RTS */
}

/* $0D742A-$0D7482  (35 instructions, 88 bytes) */
void jt_0D742A(void) {
    g_m68k.a[4] = _postinc32(2);
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    g_m68k.a[4] = _predec32(4);
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    g_m68k.a[4] = bus_read32(g_m68k.a[6] + (-0x7c00));
    g_m68k.a[4] = bus_read32(0xcf838);
    { uint32_t _mv = (uint32_t)(g_m68k.d[6]); bus_write32(g_m68k.a[4], _mv); M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[5] + (-0x7c00)))); M68K_TST8((uint8_t)g_m68k.d[3]);
    { uint32_t _mv = (uint32_t)(_postinc32(7)); bus_write32(g_m68k.a[4], _mv); M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[3] + (-0x7c00))); bus_write32(g_m68k.a[4], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(bus_read32(0xd744c + (int16_t)(uint16_t)g_m68k.a[0] * 4)); bus_write32(g_m68k.a[4], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(g_m68k.a[2]); bus_write32(g_m68k.a[4], _mv); g_m68k.a[4] += 4; M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(_postinc32(0)); bus_write32(g_m68k.a[4], _mv); g_m68k.a[4] += 4; M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(_predec32(7)); bus_write32(g_m68k.a[4], _mv); g_m68k.a[4] += 4; M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 4)); bus_write32(g_m68k.a[4], _mv); g_m68k.a[4] += 4; M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(g_m68k.d[4]); g_m68k.a[4] -= 4; bus_write32(g_m68k.a[4], _mv); M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(g_m68k.a[7]); g_m68k.a[4] -= 4; bus_write32(g_m68k.a[4], _mv); M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(_postinc32(2)); g_m68k.a[4] -= 4; bus_write32(g_m68k.a[4], _mv); M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    g_m68k.a[4] = _postinc32(3);
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    g_m68k.a[4] = _predec32(5);
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    g_m68k.a[4] = bus_read32(g_m68k.a[7] + (-0x7c00));
    g_m68k.a[4] = bus_read32(0xd7478 + (int16_t)(uint16_t)g_m68k.a[0] * 4);
    { uint32_t _mv = (uint32_t)(g_m68k.d[7]); bus_write32(g_m68k.a[4], _mv); M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[6] + (-0x7c00)))); M68K_TST8((uint8_t)g_m68k.d[3]);
    /* WARNING: function did not end with RTS */
}

/* $0D782A-$0D7852  (11 instructions, 40 bytes) */
void jt_0D782A(void) {
    { uint32_t _mv = (uint32_t)(_predec32(4)); g_m68k.a[4] -= 4; bus_write32(g_m68k.a[4], _mv); M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[1] + (-0x7e00))); g_m68k.a[4] -= 4; bus_write32(g_m68k.a[4], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2)); g_m68k.a[4] -= 4; bus_write32(g_m68k.a[4], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(0x82002941); g_m68k.a[4] -= 4; bus_write32(g_m68k.a[4], _mv); M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(g_m68k.d[7]); bus_write32(g_m68k.a[4] + (-0x7e00), _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(g_m68k.a[6]); bus_write32(g_m68k.a[4] + (-0x7e00), _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[5])); bus_write32(g_m68k.a[4] + (-0x7e00), _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_postinc32(1)); bus_write32(g_m68k.a[4] + (-0x7e00), _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_postinc32(3)); bus_write32(g_m68k.a[4] + (-0x7e00), _mv); M68K_TST32(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0D7C2A-$0D7C2E  (2 instructions, 4 bytes) */
void jt_0D7C2A(void) {
    /* TODO $0D7C2A: dc.w $f4ea  [F4 EA] */
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0D802A-$0D8056  (17 instructions, 44 bytes) */
void jt_0D802A(void) {
    g_m68k.a[4] = _predec32(3);
    M68K_OR8(g_m68k.d[1], g_m68k.d[1]);
    g_m68k.a[4] = bus_read32(g_m68k.a[5] + (-0x7dff));
    g_m68k.a[4] = bus_read32(0x82012885);
    M68K_OR8(g_m68k.d[1], g_m68k.d[1]);
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[2])); bus_write32(g_m68k.a[4], _mv); M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[1]);
    { uint32_t _mv = (uint32_t)(_postinc32(6)); bus_write32(g_m68k.a[4], _mv); M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[1]);
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[2] + (-0x7dff))); bus_write32(g_m68k.a[4], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(bus_read32(0xd0249)); bus_write32(g_m68k.a[4], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(g_m68k.a[1]); bus_write32(g_m68k.a[4], _mv); g_m68k.a[4] += 4; M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[1]);
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[7])); bus_write32(g_m68k.a[4], _mv); g_m68k.a[4] += 4; M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[1]);
    { uint32_t _mv = (uint32_t)(_predec32(6)); bus_write32(g_m68k.a[4], _mv); g_m68k.a[4] += 4; M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[1]);
    /* WARNING: function did not end with RTS */
}

/* $0D842A-$0D8442  (5 instructions, 24 bytes) */
void jt_0D842A(void) {
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.a[1] * 2)); bus_write32(g_m68k.a[4] + 0x2975, _mv); M68K_TST32(_mv); }
    M68K_SUBX8(g_m68k.d[1], g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(bus_read32(0x9300297E)); bus_write32(g_m68k.a[4] + (-0x6d00), _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(g_m68k.d[2]); bus_write32(g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.a[1] * 2, _mv); M68K_TST32(_mv); }
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[4] + (-0x7bff)))); M68K_TST8((uint8_t)g_m68k.d[3]);
    /* WARNING: function did not end with RTS */
}

/* $0D8440-$0D847E  (18 instructions, 62 bytes) */
void jt_0D8440(void) {
    M68K_OR8(g_m68k.d[2], g_m68k.d[1]);
    { uint32_t _mv = (uint32_t)(g_m68k.a[4]); bus_write32(g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 4, _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[2])); bus_write32(g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 4, _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[5])); bus_write32(g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 4, _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_postinc32(0)); bus_write32(g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 4, _mv); M68K_TST32(_mv); }
    g_m68k.a[4] = g_m68k.a[1];
    M68K_OR8(g_m68k.d[2], g_m68k.d[1]);
    g_m68k.a[4] = g_m68k.a[5];
    M68K_OR8(g_m68k.d[2], g_m68k.d[1]);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[7])); g_m68k.a[3] -= 1; bus_write8(g_m68k.a[3], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[3] + 0x1 + (int16_t)(uint16_t)g_m68k.a[0])); bus_write8(g_m68k.a[2], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(0x840012AC)); bus_write8(g_m68k.a[3] + (-0x7c00), _mv); M68K_TST8(_mv); }
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.a[1] * 2)); bus_write32(g_m68k.a[4] + 0x2976, _mv); M68K_TST32(_mv); }
    M68K_SUBX8(g_m68k.d[1], g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(bus_read32(0xd1774)); bus_write32(g_m68k.a[4] + 0x297f, _mv); M68K_TST32(_mv); }
    M68K_SUBX8(g_m68k.d[1], g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(g_m68k.d[3]); bus_write32(g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.a[1] * 2, _mv); M68K_TST32(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0D882A-$0D882E  (1 instructions, 4 bytes) */
void jt_0D882A(void) {
    { uint8_t _mv = (uint8_t)(g_m68k.d[6]); bus_write8(g_m68k.a[1] + (-0x7c00), _mv); M68K_TST8(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0D8C2A-$0D8C32  (1 instructions, 8 bytes) */
void jt_0D8C2A(void) {
    { uint32_t _mv = (uint32_t)(bus_read32(0x820029C2)); bus_write32(g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2, _mv); M68K_TST32(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0D902A-$0D902E  (1 instructions, 4 bytes) */
void jt_0D902A(void) {
    { uint8_t _mv = (uint8_t)(g_m68k.d[6]); bus_write8(g_m68k.a[1] + (-0x7c00), _mv); M68K_TST8(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0D9400-$0D941E  (12 instructions, 30 bytes) */
void jt_0D9400(void) {
    M68K_OR8(g_m68k.d[1], g_m68k.d[2]);
    { uint8_t _mv = (uint8_t)(_postinc8(5)); bus_write8(g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2, _mv); M68K_TST8(_mv); }
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(5))); M68K_TST8((uint8_t)g_m68k.d[5]);
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(_postinc8(4)); bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(_postinc8(2)); bus_write8(g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2, _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_predec8(4)); bus_write8(g_m68k.a[6], _mv); g_m68k.a[6] += 1; M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(_predec8(3)); bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2)); bus_write8(g_m68k.a[5], _mv); M68K_TST8(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0D942A-$0D943A  (6 instructions, 16 bytes) */
void jt_0D942A(void) {
    g_m68k.d[5] = _postinc32(1); M68K_TST32((uint32_t)g_m68k.d[5]);
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    g_m68k.d[5] = _predec32(6); M68K_TST32((uint32_t)g_m68k.d[5]);
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    g_m68k.d[5] = bus_read32(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2); M68K_TST32((uint32_t)g_m68k.d[5]);
    g_m68k.d[5] = bus_read32(0xd9438 + (int16_t)(uint16_t)g_m68k.a[0] * 2); M68K_TST32((uint32_t)g_m68k.d[5]);
    /* WARNING: function did not end with RTS */
}

/* $0D9C2A-$0D9C36  (2 instructions, 12 bytes) */
void jt_0D9C2A(void) {
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[0] + (-0x6e00))); /* UNHANDLED_WRITE: $92001dbf(d1.l * 4) = _mv */ M68K_TST8(_mv); }
    M68K_SUB8(g_m68k.d[1], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0DA42A-$0DA43E  (8 instructions, 20 bytes) */
void jt_0DA42A(void) {
    { uint8_t _mv = (uint8_t)(_postinc8(2)); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(_postinc8(2)); bus_write8(0x8200F511, _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    /* TODO $0DA436: dc.w $f514  [F5 14] */
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    /* TODO $0DA43A: dc.w $f516  [F5 16] */
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0DA82A-$0DA842  (10 instructions, 24 bytes) */
void jt_0DA82A(void) {
    g_m68k.a[5] = bus_read32(g_m68k.a[6]);
    /* TODO $0DA82C: sbcd.b d0, d0  [81 00] */
    g_m68k.a[5] = bus_read32(g_m68k.a[1]);
    /* TODO $0DA830: sbcd.b d1, d1  [83 01] */
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[1])); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.a[0])); /* UNHANDLED_WRITE: ([a0]) = _mv */ M68K_TST32(_mv); }
    /* TODO $0DA83C: sbcd.b d0, d0  [81 00] */
    g_m68k.a[5] = _predec32(2);
    /* TODO $0DA840: sbcd.b d0, d0  [81 00] */
    /* WARNING: function did not end with RTS */
}

/* $0DAC2A-$0DAC3E  (5 instructions, 20 bytes) */
void jt_0DAC2A(void) {
    g_m68k.a[5] = bus_read32(g_m68k.a[2] + (-0x7f00));
    { uint8_t _mv = (uint8_t)(_postinc8(7)); bus_write8(g_m68k.a[6] + (-0x7c00), _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_predec8(4)); bus_write8(g_m68k.a[6] + (-0x7c00), _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[2] + (-0x7c00))); bus_write8(g_m68k.a[6] + 0x1d70, _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0DB42A-$0DB462  (22 instructions, 56 bytes) */
void jt_0DB42A(void) {
    { uint32_t _mv = (uint32_t)(_postinc32(2)); g_m68k.a[4] -= 4; bus_write32(g_m68k.a[4], _mv); M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[2]);
    { uint32_t _mv = (uint32_t)(g_m68k.a[7]); g_m68k.a[4] -= 4; bus_write32(g_m68k.a[4], _mv); M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[2]);
    { uint32_t _mv = (uint32_t)(g_m68k.d[4]); g_m68k.a[4] -= 4; bus_write32(g_m68k.a[4], _mv); M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[2]);
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[5] + 0x2 + (int16_t)(uint16_t)g_m68k.a[0])); bus_write32(g_m68k.a[4], _mv); g_m68k.a[4] += 4; M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_predec32(7)); bus_write32(g_m68k.a[4], _mv); g_m68k.a[4] += 4; M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[2]);
    { uint32_t _mv = (uint32_t)(_postinc32(0)); bus_write32(g_m68k.a[4], _mv); g_m68k.a[4] += 4; M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[2]);
    { uint32_t _mv = (uint32_t)(g_m68k.a[2]); bus_write32(g_m68k.a[4], _mv); g_m68k.a[4] += 4; M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[2]);
    { uint32_t _mv = (uint32_t)(bus_read32(0xdb44a + (int16_t)(uint16_t)g_m68k.a[0])); bus_write32(g_m68k.a[4], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[3] + (-0x7bfe))); bus_write32(g_m68k.a[4], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_postinc32(7)); bus_write32(g_m68k.a[4], _mv); M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[2]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[5] + (-0x7bfe)))); M68K_TST8((uint8_t)g_m68k.d[3]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(_predec8(3))); M68K_TST8((uint8_t)g_m68k.d[3]);
    M68K_OR8(g_m68k.d[2], g_m68k.d[2]);
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[7] + (-0x7bfd))); bus_write32(g_m68k.a[4] + 0x1313, _mv); M68K_TST32(_mv); }
    /* TODO $0DB460: sbcd.b d2, d0  [81 02] */
    /* WARNING: function did not end with RTS */
}

/* $0DB82A-$0DB832  (3 instructions, 8 bytes) */
void jt_0DB82A(void) {
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[7]))); M68K_TST8((uint8_t)g_m68k.d[6]);
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[5] + (-0x7bff)))); M68K_TST8((uint8_t)g_m68k.d[3]);
    /* WARNING: function did not end with RTS */
}

/* $0DC02A-$0DC03A  (8 instructions, 16 bytes) */
void jt_0DC02A(void) {
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[6]))); M68K_TST8((uint8_t)g_m68k.d[6]);
    M68K_OR8(g_m68k.d[2], g_m68k.d[3]);
    { uint32_t _mv = (uint32_t)(_postinc32(1)); g_m68k.a[4] -= 4; bus_write32(g_m68k.a[4], _mv); M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[3]);
    { uint32_t _mv = (uint32_t)(g_m68k.a[6]); g_m68k.a[4] -= 4; bus_write32(g_m68k.a[4], _mv); M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[3]);
    { uint32_t _mv = (uint32_t)(g_m68k.d[3]); g_m68k.a[4] -= 4; bus_write32(g_m68k.a[4], _mv); M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[3]);
    /* WARNING: function did not end with RTS */
}

/* $0DC42A-$0DC48E  (33 instructions, 100 bytes) */
void jt_0DC42A(void) {
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[4] + (-0x7bfe))); bus_write8(g_m68k.a[1], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(0x840214B3)); bus_write8(g_m68k.a[3] + (-0x7bfd), _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[7])); g_m68k.a[3] -= 1; bus_write8(g_m68k.a[3], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[2]);
    g_m68k.a[4] = g_m68k.a[5];
    M68K_OR8(g_m68k.d[2], g_m68k.d[3]);
    g_m68k.a[4] = g_m68k.a[1];
    M68K_OR8(g_m68k.d[2], g_m68k.d[3]);
    { uint32_t _mv = (uint32_t)(_postinc32(0)); bus_write32(g_m68k.a[4] + 0x2 + (int16_t)(uint16_t)g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[5])); bus_write32(g_m68k.a[4] + 0x2 + (int16_t)(uint16_t)g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[2])); bus_write32(g_m68k.a[4] + 0x2 + (int16_t)(uint16_t)g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(g_m68k.a[4]); bus_write32(g_m68k.a[4] + 0x2 + (int16_t)(uint16_t)g_m68k.a[0], _mv); M68K_TST32(_mv); }
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[4] + (-0x7bfd)))); M68K_TST8((uint8_t)g_m68k.d[3]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(_predec8(2))); M68K_TST8((uint8_t)g_m68k.d[3]);
    M68K_OR8(g_m68k.d[2], g_m68k.d[3]);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[2] + 0x2 + (int16_t)(uint16_t)g_m68k.a[0])); bus_write8(0x2B378400, _mv); M68K_TST8(_mv); }
    { uint32_t _mv = (uint32_t)(bus_read32(0x008400)); g_m68k.a[5] -= 4; bus_write32(g_m68k.a[5], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(bus_read32(0xd4868)); g_m68k.a[5] -= 4; bus_write32(g_m68k.a[5], _mv); M68K_TST32(_mv); }
    g_m68k.a[4] = _postinc32(1);
    M68K_OR8(g_m68k.d[2], g_m68k.d[3]);
    g_m68k.a[4] = bus_read32(g_m68k.a[6]);
    M68K_OR8(g_m68k.d[2], g_m68k.d[3]);
    g_m68k.a[4] = bus_read32(g_m68k.a[3]);
    M68K_OR8(g_m68k.d[2], g_m68k.d[3]);
    g_m68k.a[4] = bus_read32(g_m68k.a[0]);
    M68K_OR8(g_m68k.d[2], g_m68k.d[3]);
    g_m68k.a[4] = g_m68k.a[4];
    M68K_OR8(g_m68k.d[2], g_m68k.d[3]);
    g_m68k.a[4] = g_m68k.a[0];
    M68K_OR8(g_m68k.d[2], g_m68k.d[3]);
    { uint32_t _mv = (uint32_t)(_postinc32(1)); bus_write32(g_m68k.a[4] + 0x2 + (int16_t)(uint16_t)g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[6])); bus_write32(g_m68k.a[4] + 0x2 + (int16_t)(uint16_t)g_m68k.a[0], _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[3])); bus_write32(g_m68k.a[4] + 0x2 + (int16_t)(uint16_t)g_m68k.a[0], _mv); M68K_TST32(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0DC82A-$0DC82E  (1 instructions, 4 bytes) */
void jt_0DC82A(void) {
    { uint8_t _mv = (uint8_t)(g_m68k.d[5]); bus_write8(g_m68k.a[7] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 4, _mv); M68K_TST8(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0DD02A-$0DD02E  (1 instructions, 4 bytes) */
void jt_0DD02A(void) {
    { uint8_t _mv = (uint8_t)(g_m68k.d[5]); bus_write8(g_m68k.a[7] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 4, _mv); M68K_TST8(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0DDC2A-$0DDC2E  (2 instructions, 4 bytes) */
void jt_0DDC2A(void) {
    { uint8_t _mv = (uint8_t)(g_m68k.d[4]); g_m68k.a[1] -= 1; bus_write8(g_m68k.a[1], _mv); M68K_TST8(_mv); }
    /* TODO $0DDC2C: sbcd.b d0, d0  [81 00] */
    /* WARNING: function did not end with RTS */
}

/* $0DF42A-$0DF452  (13 instructions, 40 bytes) */
void jt_0DF42A(void) {
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[5])); g_m68k.a[1] -= 1; bus_write8(g_m68k.a[1], _mv); M68K_TST8(_mv); }
    /* TODO $0DF42C: sbcd.b d2, d0  [81 02] */
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[3])); g_m68k.a[1] -= 1; bus_write8(g_m68k.a[1], _mv); M68K_TST8(_mv); }
    /* TODO $0DF430: sbcd.b d2, d0  [81 02] */
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[2] + (-0x7c00))); bus_write8(g_m68k.a[2] + 0x1577, _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(g_m68k.d[5]); bus_write8(g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 4, _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[4])); bus_write8(g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 4, _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_predec8(3)); bus_write8(g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 4, _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 4)); bus_write8(g_m68k.a[2] + 0x48 + (int16_t)(uint16_t)g_m68k.d[1], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[3]);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[3])); g_m68k.a[1] -= 1; bus_write8(g_m68k.a[1], _mv); M68K_TST8(_mv); }
    /* TODO $0DF450: sbcd.b d2, d0  [81 02] */
    /* WARNING: function did not end with RTS */
}

/* $0DF82A-$0DF83A  (7 instructions, 16 bytes) */
void jt_0DF82A(void) {
    { uint32_t _mv = (uint32_t)(_predec32(4)); bus_write32(g_m68k.a[3] + (-0x7e00), _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(g_m68k.a[6]); g_m68k.a[2] -= 4; bus_write32(g_m68k.a[2], _mv); M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[2]);
    { uint32_t _mv = (uint32_t)(g_m68k.a[0]); g_m68k.a[2] -= 4; bus_write32(g_m68k.a[2], _mv); M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[2]);
    { uint32_t _mv = (uint32_t)(g_m68k.d[3]); g_m68k.a[2] -= 4; bus_write32(g_m68k.a[2], _mv); M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[2]);
    /* WARNING: function did not end with RTS */
}

/* $0DFC2A-$0DFC3E  (10 instructions, 20 bytes) */
void jt_0DFC2A(void) {
    /* TODO $0DFC2A: dc.w $f64b  [F6 4B] */
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    /* TODO $0DFC2E: dc.w $f64e  [F6 4E] */
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    /* TODO $0DFC32: dc.w $f651  [F6 51] */
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    /* TODO $0DFC36: dc.w $f654  [F6 54] */
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    /* TODO $0DFC3A: dc.w $f4f6  [F4 F6] */
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0E000E-$0E0012  (2 instructions, 4 bytes) */
void jt_0E000E(void) {
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[6])); bus_write8(g_m68k.a[1], _mv); M68K_TST8(_mv); }
    /* TODO $0E0010: sbcd.b d2, d0  [81 02] */
    /* WARNING: function did not end with RTS */
}
