/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $0E902A - $0F4868 */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

/* $0E902A-$0E905A  (14 instructions, 48 bytes) */
void jt_0E902A(void) {
    { uint16_t _mv = (uint16_t)(_postinc16(7)); bus_write16(g_m68k.a[1] + (-0x7e00), _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_predec16(1)); bus_write16(g_m68k.a[1] + (-0x7e00), _mv); M68K_TST16(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[1])); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.a[0])); /* UNHANDLED_WRITE: ([a0]) = _mv */ M68K_TST32(_mv); }
    /* TODO $0E903C: sbcd.b d0, d0  [81 00] */
    { uint32_t _mv = (uint32_t)(g_m68k.a[0]); bus_write32(0x008100, _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[4])); bus_write32(0x008100, _mv); M68K_TST32(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.a[0])); bus_write8(g_m68k.a[2], _mv); g_m68k.a[2] += 1; M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(0x008100)); bus_write8(g_m68k.a[2], _mv); g_m68k.a[2] += 1; M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[6] + 0 + (int16_t)(uint16_t)g_m68k.a[0])); bus_write8(g_m68k.a[7] + 0x21e2, _mv); M68K_TST8(_mv); }
    /* TODO $0E9054: sbcd.b d0, d0  [81 00] */
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[5])); g_m68k.a[1] -= 1; bus_write8(g_m68k.a[1], _mv); M68K_TST8(_mv); }
    /* TODO $0E9058: sbcd.b d0, d0  [81 00] */
    /* WARNING: function did not end with RTS */
}

/* $0E906C-$0E909A  (13 instructions, 46 bytes) */
void jt_0E906C(void) {
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    { uint16_t _mv = (uint16_t)(_predec16(2)); bus_write16(g_m68k.a[1] + (-0x7e00), _mv); M68K_TST16(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[6])); g_m68k.a[4] -= 1; bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[6] + 0 + (int16_t)(uint16_t)g_m68k.a[0])); /* UNHANDLED_WRITE: ([]) = _mv */ M68K_TST32(_mv); }
    /* TODO $0E907C: sbcd.b d0, d0  [81 00] */
    { uint32_t _mv = (uint32_t)(g_m68k.a[1]); bus_write32(0x008100, _mv); M68K_TST32(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.a[0])); bus_write8(g_m68k.a[2], _mv); g_m68k.a[2] += 1; M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.a[0])); bus_write8(g_m68k.a[2], _mv); g_m68k.a[2] += 1; M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(0x810021DF)); bus_write8(g_m68k.a[2], _mv); g_m68k.a[2] += 1; M68K_TST8(_mv); }
    /* TODO $0E9090: sbcd.b d0, d0  [81 00] */
    { uint32_t _mv = (uint32_t)(_predec32(3)); bus_write32(0x008100, _mv); M68K_TST32(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[1] + (-0x7f00))); g_m68k.a[1] -= 1; bus_write8(g_m68k.a[1], _mv); M68K_TST8(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0E9400-$0E940A  (5 instructions, 10 bytes) */
void jt_0E9400(void) {
    /* TODO $0E9400: sbcd.b d0, d0  [81 00] */
    { uint8_t _mv = (uint8_t)(_predec8(3)); g_m68k.a[1] -= 1; bus_write8(g_m68k.a[1], _mv); M68K_TST8(_mv); }
    /* TODO $0E9404: sbcd.b d0, d0  [81 00] */
    { uint8_t _mv = (uint8_t)(_predec8(4)); g_m68k.a[1] -= 1; bus_write8(g_m68k.a[1], _mv); M68K_TST8(_mv); }
    /* TODO $0E9408: sbcd.b d0, d0  [81 00] */
    /* WARNING: function did not end with RTS */
}

/* $0E942A-$0E943E  (5 instructions, 20 bytes) */
void jt_0E942A(void) {
    g_m68k.a[5] = bus_read32(g_m68k.a[2] + (-0x7f00));
    { uint8_t _mv = (uint8_t)(_postinc8(7)); bus_write8(g_m68k.a[6] + (-0x7c00), _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_predec8(4)); bus_write8(g_m68k.a[6] + (-0x7c00), _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[2] + (-0x7c00))); bus_write8(g_m68k.a[6] + 0x1d70, _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0E946C-$0E947E  (5 instructions, 18 bytes) */
void jt_0E946C(void) {
    /* TODO $0E946C: sbcd.b d0, d0  [81 00] */
    { uint8_t _mv = (uint8_t)(_predec8(0)); bus_write8(g_m68k.a[6] + (-0x7c00), _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_predec8(5)); bus_write8(g_m68k.a[6] + (-0x7c00), _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[3] + (-0x7c00))); bus_write8(g_m68k.a[6] + 0x1d71, _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0E982A-$0E984A  (9 instructions, 32 bytes) */
void jt_0E982A(void) {
    { uint16_t _mv = (uint16_t)(_predec16(3)); bus_write16(g_m68k.a[1] + (-0x7e00), _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[3] + (-0x7e00))); bus_write16(g_m68k.a[1] + 0x3372, _mv); M68K_TST16(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[7] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2)); bus_write16(g_m68k.a[1] + 0x337c, _mv); M68K_TST16(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[7])); bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[6]); bus_write16(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[0])); bus_write16(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2, _mv); M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0E98B8-$0E98CA  (6 instructions, 18 bytes) */
void jt_0E98B8(void) {
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[2] + 0x2 + (int16_t)(uint16_t)g_m68k.a[0])); bus_write16(g_m68k.a[0], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(_predec16(6)); bus_write16(g_m68k.a[0], _mv); M68K_TST16(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.a[0]); bus_write16(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[2])); bus_write16(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2, _mv); M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0E9C2A-$0E9C32  (2 instructions, 8 bytes) */
void jt_0E9C2A(void) {
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); bus_write16(0x008C00, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[1])); bus_write16(0x008C00, _mv); M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0EA02A-$0EA056  (12 instructions, 44 bytes) */
void jt_0EA02A(void) {
    { uint16_t _mv = (uint16_t)(_predec16(5)); bus_write16(0x8A0033EC, _mv); M68K_TST16(_mv); }
    M68K_OR8(g_m68k.d[5], g_m68k.d[0]);
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[2] + 0 + (int32_t)g_m68k.a[0] * 2)); bus_write16(0x33F58A00, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(0x8A0033FD)); bus_write16(0x8A003400, _mv); M68K_TST16(_mv); }
    M68K_OR8(g_m68k.d[5], g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[3])); M68K_TST16((uint16_t)g_m68k.d[2]);
    M68K_OR8(g_m68k.d[5], g_m68k.d[0]);
    { uint16_t _mv = (uint16_t)(g_m68k.a[1]); bus_write16(0x008C00, _mv); M68K_TST16(_mv); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(g_m68k.a[0])); M68K_TST16((uint16_t)g_m68k.d[2]);
    M68K_OR8(g_m68k.d[6], g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[5]))); M68K_TST16((uint16_t)g_m68k.d[2]);
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0EA42A-$0EA432  (2 instructions, 8 bytes) */
void jt_0EA42A(void) {
    { uint16_t _mv = (uint16_t)(g_m68k.d[1]); bus_write16(0x008C00, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[1])); bus_write16(0x008C00, _mv); M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0EA82A-$0EA83E  (6 instructions, 20 bytes) */
void jt_0EA82A(void) {
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[6] + (-0x7e00))); bus_write8(g_m68k.a[3], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(0xea830 + (int16_t)(uint16_t)g_m68k.a[0] * 2)); bus_write8(g_m68k.a[3] + (-0x39) + (int16_t)(uint16_t)g_m68k.d[1], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[4])); bus_write8(g_m68k.a[1], _mv); g_m68k.a[1] += 1; M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(0x2); bus_write8(g_m68k.a[1], _mv); M68K_TST8(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0EAC2A-$0EAC3E  (8 instructions, 20 bytes) */
void jt_0EAC2A(void) {
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[4])); bus_write8(g_m68k.a[1], _mv); g_m68k.a[1] += 1; M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(_predec8(3)); bus_write8(g_m68k.a[1], _mv); g_m68k.a[1] += 1; M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2)); bus_write8(g_m68k.a[1], _mv); g_m68k.a[1] += 1; M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(0x2); bus_write8(g_m68k.a[1], _mv); M68K_TST8(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0EB02A-$0EB03A  (6 instructions, 16 bytes) */
void jt_0EB02A(void) {
    { uint8_t _mv = (uint8_t)(g_m68k.d[7]); bus_write8(g_m68k.a[1], _mv); g_m68k.a[1] += 1; M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[4])); bus_write8(g_m68k.a[1], _mv); g_m68k.a[1] += 1; M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[0] + (-0x7e00))); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2)); bus_write16(g_m68k.a[2], _mv); M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0EB42A-$0EB42E  (1 instructions, 4 bytes) */
void jt_0EB42A(void) {
    { uint8_t _mv = (uint8_t)(g_m68k.d[6]); bus_write8(g_m68k.a[1] + (-0x7c00), _mv); M68K_TST8(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0EB82A-$0EB836  (3 instructions, 12 bytes) */
void jt_0EB82A(void) {
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[4] + 0 + (int32_t)g_m68k.a[0] * 8))); M68K_TST8((uint8_t)g_m68k.d[3]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[7] + 0 + (int32_t)g_m68k.a[0] * 4))); M68K_TST8((uint8_t)g_m68k.d[3]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(/* UNHANDLED_READ: (a16, a0.l * 4) */ 0)); M68K_TST8((uint8_t)g_m68k.d[3]);
    /* WARNING: function did not end with RTS */
}

/* $0EBC2A-$0EBC2E  (2 instructions, 4 bytes) */
void jt_0EBC2A(void) {
    /* TODO $0EBC2A: dc.w $f559  [F5 59] */
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0ECC2A-$0ECC2E  (1 instructions, 4 bytes) */
void jt_0ECC2A(void) {
    { uint8_t _mv = (uint8_t)(g_m68k.d[6]); bus_write8(g_m68k.a[1] + (-0x7c00), _mv); M68K_TST8(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0ED02A-$0ED05E  (21 instructions, 52 bytes) */
void jt_0ED02A(void) {
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
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2)); bus_write8(g_m68k.a[6], _mv); g_m68k.a[6] += 1; M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2)); bus_write8(g_m68k.a[6], _mv); g_m68k.a[6] += 1; M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(0xed054 + (int16_t)(uint16_t)g_m68k.a[0] * 2)); bus_write8(g_m68k.a[6], _mv); g_m68k.a[6] += 1; M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(g_m68k.d[5]); g_m68k.a[6] -= 1; bus_write8(g_m68k.a[6], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0ED42A-$0ED42E  (1 instructions, 4 bytes) */
void jt_0ED42A(void) {
    { uint8_t _mv = (uint8_t)(g_m68k.d[6]); bus_write8(g_m68k.a[1] + (-0x7c00), _mv); M68K_TST8(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0ED82A-$0ED83A  (3 instructions, 16 bytes) */
void jt_0ED82A(void) {
    { uint8_t _mv = (uint8_t)(_postinc8(7)); bus_write8(g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2, _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[2] + (-0x7e00))); /* UNHANDLED_WRITE: ([$82001bbf], d1.l * 2) = _mv */ M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0EDC2A-$0EDC3A  (6 instructions, 16 bytes) */
void jt_0EDC2A(void) {
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[3] + 0x3 + (int16_t)(uint16_t)g_m68k.a[0]))); M68K_TST8((uint8_t)g_m68k.d[3]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[1] + (-0x7dfd)))); M68K_TST8((uint8_t)g_m68k.d[3]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(7))); M68K_TST8((uint8_t)g_m68k.d[3]);
    M68K_OR8(g_m68k.d[1], g_m68k.d[3]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[5]))); M68K_TST8((uint8_t)g_m68k.d[3]);
    M68K_OR8(g_m68k.d[1], g_m68k.d[3]);
    /* WARNING: function did not end with RTS */
}

/* $0EE02A-$0EE03E  (9 instructions, 20 bytes) */
void jt_0EE02A(void) {
    /* TODO $0EE02A: dc.w $f4ea  [F4 EA] */
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    /* TODO $0EE02E: dc.w $f4ed  [F4 ED] */
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    /* TODO $0EE032: dc.w $f4f0  [F4 F0] */
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    /* TODO $0EE036: dc.w $f4f3  [F4 F3] */
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(0x2); bus_write8(g_m68k.a[1], _mv); M68K_TST8(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0EE42A-$0EE43E  (7 instructions, 20 bytes) */
void jt_0EE42A(void) {
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[4])); bus_write8(g_m68k.a[1], _mv); g_m68k.a[1] += 1; M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(_predec8(3)); bus_write8(g_m68k.a[1], _mv); g_m68k.a[1] += 1; M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2)); bus_write8(g_m68k.a[1], _mv); g_m68k.a[1] += 1; M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[2] + (-0x7dff))); bus_write8(g_m68k.a[3] + 0x30 + (int16_t)(uint16_t)g_m68k.d[3], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0EE82A-$0EE83E  (7 instructions, 20 bytes) */
void jt_0EE82A(void) {
    { uint8_t _mv = (uint8_t)(g_m68k.d[7]); bus_write8(g_m68k.a[1], _mv); g_m68k.a[1] += 1; M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[4])); bus_write8(g_m68k.a[1], _mv); g_m68k.a[1] += 1; M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[5] + (-0x7e00))); bus_write8(g_m68k.a[3], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[2] + (-0x7dff))); bus_write8(g_m68k.a[3] + 0xf + (int16_t)(uint16_t)g_m68k.d[3], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[1]);
    /* WARNING: function did not end with RTS */
}

/* $0EEC2A-$0EEC2E  (2 instructions, 4 bytes) */
void jt_0EEC2A(void) {
    { uint8_t _mv = (uint8_t)(g_m68k.d[4]); g_m68k.a[1] -= 1; bus_write8(g_m68k.a[1], _mv); M68K_TST8(_mv); }
    /* TODO $0EEC2C: sbcd.b d0, d0  [81 00] */
    /* WARNING: function did not end with RTS */
}

/* $0EF02A-$0EF07A  (35 instructions, 80 bytes) */
void jt_0EF02A(void) {
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
    g_m68k.d[6] = (g_m68k.d[6] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(6))); M68K_TST8((uint8_t)g_m68k.d[6]);
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[1]))); M68K_TST8((uint8_t)g_m68k.d[5]);
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(_predec8(4)); bus_write8(g_m68k.a[6], _mv); g_m68k.a[6] += 1; M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(_postinc32(1)); bus_write32(g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2, _mv); M68K_TST32(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0EF82A-$0EF83E  (9 instructions, 20 bytes) */
void jt_0EF82A(void) {
    /* TODO $0EF82A: dc.w $f52f  [F5 2F] */
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    /* TODO $0EF82E: dc.w $f533  [F5 33] */
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[0]))); M68K_TST8((uint8_t)g_m68k.d[5]);
    M68K_OR8(g_m68k.d[1], g_m68k.d[2]);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[4])); bus_write8(g_m68k.a[5] + 0x2 + (int16_t)(uint16_t)g_m68k.a[0], _mv); M68K_TST8(_mv); }
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(2))); M68K_TST8((uint8_t)g_m68k.d[5]);
    M68K_OR8(g_m68k.d[1], g_m68k.d[2]);
    /* WARNING: function did not end with RTS */
}

/* $0EFC2A-$0EFC36  (5 instructions, 12 bytes) */
void jt_0EFC2A(void) {
    { uint8_t _mv = (uint8_t)(_postinc8(2)); g_m68k.a[3] -= 1; bus_write8(g_m68k.a[3], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(_postinc8(5)); g_m68k.a[3] -= 1; bus_write8(g_m68k.a[3], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[0] + (-0x7c00))); g_m68k.a[3] -= 1; bus_write8(g_m68k.a[3], _mv); M68K_TST8(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0EFEE2-$0EFEEA  (2 instructions, 8 bytes) */
void jt_0EFEE2(void) {
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[6])); bus_write8(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 4, _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_postinc8(2)); bus_write8(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 4, _mv); M68K_TST8(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0EFFF4-$0EFFF6  (1 instructions, 2 bytes) */
void jt_0EFFF4(void) {
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0EFFF6-$0F0002  (3 instructions, 12 bytes) */
void jt_0EFFF6(void) {
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(1))); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 4)); bus_write8(0x125D8400, _mv); M68K_TST8(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0F0004-$0F0012  (4 instructions, 14 bytes) */
void jt_0F0004(void) {
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(1))); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 4)); bus_write8(0x125D8400, _mv); M68K_TST8(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0F0010-$0F0012  (1 instructions, 2 bytes) */
void jt_0F0010(void) {
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F0060-$0F006A  (3 instructions, 10 bytes) */
void jt_0F0060(void) {
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[5] + (-0x7e00))); bus_write8(g_m68k.a[3], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(0xf0068 + (int16_t)(uint16_t)g_m68k.a[0] * 2)); bus_write8(g_m68k.a[1], _mv); g_m68k.a[1] += 1; M68K_TST8(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0F0640-$0F0642  (1 instructions, 2 bytes) */
void jt_0F0640(void) {
    /* TODO $0F0640: sbcd.b d0, d2  [85 00] */
    /* WARNING: function did not end with RTS */
}

/* $0F082A-$0F088A  (31 instructions, 96 bytes) */
void jt_0F082A(void) {
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[3] + (-0x7400)))); M68K_TST16((uint16_t)g_m68k.d[4]);
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[5] + (-0x7400)))); M68K_TST16((uint16_t)g_m68k.d[4]);
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[7] + (-0x7400)))); M68K_TST16((uint16_t)g_m68k.d[4]);
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[1] + 0 + (int32_t)g_m68k.a[0] * 4))); M68K_TST16((uint16_t)g_m68k.d[4]);
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[3] + 0 + (int32_t)g_m68k.a[0] * 4))); M68K_TST16((uint16_t)g_m68k.d[4]);
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[5] + 0 + (int32_t)g_m68k.a[0] * 4))); M68K_TST16((uint16_t)g_m68k.d[4]);
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[7] + 0 + (int32_t)g_m68k.a[0] * 4))); M68K_TST16((uint16_t)g_m68k.d[4]);
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x8C00383D))); M68K_TST16((uint16_t)g_m68k.d[4]);
    M68K_OR8(g_m68k.d[6], g_m68k.d[0]);
    g_m68k.a[4] = (uint32_t)(int32_t)(int16_t)(uint16_t)(g_m68k.d[3]);
    /* TODO $0F0850: sbcd.b d0, d3  [87 00] */
    g_m68k.a[4] = (uint32_t)(int32_t)(int16_t)(uint16_t)(g_m68k.a[1]);
    M68K_OR8(g_m68k.d[4], g_m68k.d[0]);
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(g_m68k.a[7])); M68K_TST16((uint16_t)g_m68k.d[4]);
    M68K_OR8(g_m68k.d[4], g_m68k.d[0]);
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[1]))); M68K_TST16((uint16_t)g_m68k.d[4]);
    /* TODO $0F085C: sbcd.b d0, d1  [83 00] */
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[1]))); M68K_TST16((uint16_t)g_m68k.d[4]);
    /* TODO $0F0860: sbcd.b d0, d1  [83 00] */
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[1]))); M68K_TST16((uint16_t)g_m68k.d[4]);
    /* TODO $0F0864: sbcd.b d0, d1  [83 00] */
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[1]))); M68K_TST16((uint16_t)g_m68k.d[4]);
    /* TODO $0F0868: sbcd.b d0, d1  [83 00] */
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[4] + (-0x7200)))); M68K_TST16((uint16_t)g_m68k.d[4]);
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + (-0x7200)))); M68K_TST16((uint16_t)g_m68k.d[4]);
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[0] + 0 + (int32_t)g_m68k.a[0] * 8))); M68K_TST16((uint16_t)g_m68k.d[4]);
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[2] + 0 + (int32_t)g_m68k.a[0] * 8))); M68K_TST16((uint16_t)g_m68k.d[4]);
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[4] + 0 + (int32_t)g_m68k.a[0] * 8))); M68K_TST16((uint16_t)g_m68k.d[4]);
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(bus_read16(g_m68k.a[6] + 0 + (int32_t)g_m68k.a[0] * 8))); M68K_TST16((uint16_t)g_m68k.d[4]);
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x008E00))); M68K_TST16((uint16_t)g_m68k.d[4]);
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0xe9688))); M68K_TST16((uint16_t)g_m68k.d[4]);
    /* WARNING: function did not end with RTS */
}

/* $0F0A40-$0F0A42  (1 instructions, 2 bytes) */
void jt_0F0A40(void) {
    M68K_OR8(g_m68k.d[2], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F0C2A-$0F0C2E  (2 instructions, 4 bytes) */
void jt_0F0C2A(void) {
    { uint8_t _mv = (uint8_t)(g_m68k.d[4]); g_m68k.a[1] -= 1; bus_write8(g_m68k.a[1], _mv); M68K_TST8(_mv); }
    /* TODO $0F0C2C: sbcd.b d0, d0  [81 00] */
    /* WARNING: function did not end with RTS */
}

/* $0F0F00-$0F0F02  (1 instructions, 2 bytes) */
void jt_0F0F00(void) {
    M68K_OR8(g_m68k.d[1], g_m68k.d[2]);
    /* WARNING: function did not end with RTS */
}

/* $0F102A-$0F102E  (2 instructions, 4 bytes) */
void jt_0F102A(void) {
    g_m68k.d[5] = (g_m68k.d[5] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(2))); M68K_TST8((uint8_t)g_m68k.d[5]);
    M68K_OR8(g_m68k.d[1], g_m68k.d[2]);
    /* WARNING: function did not end with RTS */
}

/* $0F182A-$0F183A  (7 instructions, 16 bytes) */
void jt_0F182A(void) {
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[7] + (-0x7dfe))); bus_write8(g_m68k.a[3], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(_predec8(1)); bus_write8(g_m68k.a[3], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[2]);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[1])); bus_write8(g_m68k.a[3], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[2]);
    { uint8_t _mv = (uint8_t)(g_m68k.d[1]); bus_write8(g_m68k.a[3], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[2]);
    /* WARNING: function did not end with RTS */
}

/* $0F1C2A-$0F1C2E  (1 instructions, 4 bytes) */
void jt_0F1C2A(void) {
    { uint8_t _mv = (uint8_t)(g_m68k.d[3]); bus_write8(g_m68k.a[5] + (-0x7dff), _mv); M68K_TST8(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0F202A-$0F203E  (7 instructions, 20 bytes) */
void jt_0F202A(void) {
    { uint8_t _mv = (uint8_t)(g_m68k.d[7]); bus_write8(g_m68k.a[1], _mv); g_m68k.a[1] += 1; M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[4])); bus_write8(g_m68k.a[1], _mv); g_m68k.a[1] += 1; M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[5] + (-0x7e00))); bus_write8(g_m68k.a[3], _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(bus_read8(0xf2038 + (int16_t)(uint16_t)g_m68k.a[0] * 2)); bus_write8(g_m68k.a[1], _mv); g_m68k.a[1] += 1; M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(0x2); bus_write8(g_m68k.a[1], _mv); M68K_TST8(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0F242A-$0F2446  (8 instructions, 28 bytes) */
void jt_0F242A(void) {
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2)); bus_write16(g_m68k.a[4], _mv); g_m68k.a[4] += 2; M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2)); bus_write16(g_m68k.a[4], _mv); g_m68k.a[4] += 2; M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2)); bus_write16(g_m68k.a[4], _mv); g_m68k.a[4] += 2; M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2)); bus_write16(g_m68k.a[4], _mv); g_m68k.a[4] += 2; M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(0x8300391B)); bus_write16(g_m68k.a[4], _mv); g_m68k.a[4] += 2; M68K_TST16(_mv); }
    M68K_OR8(g_m68k.d[6], g_m68k.d[0]);
    { uint16_t _mv = (uint16_t)(_predec16(3)); g_m68k.a[4] -= 2; bus_write16(g_m68k.a[4], _mv); M68K_TST16(_mv); }
    M68K_OR8(g_m68k.d[6], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F282A-$0F28C2  (47 instructions, 152 bytes) */
void jt_0F282A(void) {
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2)); bus_write16(g_m68k.a[4], _mv); g_m68k.a[4] += 2; M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2)); bus_write16(g_m68k.a[4], _mv); g_m68k.a[4] += 2; M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2)); bus_write16(g_m68k.a[4], _mv); g_m68k.a[4] += 2; M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2)); bus_write16(g_m68k.a[4], _mv); g_m68k.a[4] += 2; M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(0x8300392C)); bus_write16(g_m68k.a[4], _mv); g_m68k.a[4] += 2; M68K_TST16(_mv); }
    M68K_OR8(g_m68k.d[6], g_m68k.d[0]);
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[1] + 0 + (int32_t)g_m68k.a[0] * 4)); g_m68k.a[4] -= 2; bus_write16(g_m68k.a[4], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[3] + 0 + (int32_t)g_m68k.a[0] * 4)); g_m68k.a[4] -= 2; bus_write16(g_m68k.a[4], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[4] + 0 + (int32_t)g_m68k.a[0] * 4)); g_m68k.a[4] -= 2; bus_write16(g_m68k.a[4], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[5] + 0 + (int32_t)g_m68k.a[0] * 4)); g_m68k.a[4] -= 2; bus_write16(g_m68k.a[4], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[6] + 0 + (int32_t)g_m68k.a[0] * 4)); g_m68k.a[4] -= 2; bus_write16(g_m68k.a[4], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[7] + 0 + (int32_t)g_m68k.a[0] * 4)); g_m68k.a[4] -= 2; bus_write16(g_m68k.a[4], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(0x008C00)); g_m68k.a[4] -= 2; bus_write16(g_m68k.a[4], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(0x8C00393A)); g_m68k.a[4] -= 2; bus_write16(g_m68k.a[4], _mv); M68K_TST16(_mv); }
    M68K_OR8(g_m68k.d[6], g_m68k.d[0]);
    { uint16_t _mv = (uint16_t)(bus_read16(0xf2868 + (int32_t)g_m68k.a[0] * 4)); g_m68k.a[4] -= 2; bus_write16(g_m68k.a[4], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2)); bus_write16(g_m68k.a[4], _mv); g_m68k.a[4] += 2; M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2)); bus_write16(g_m68k.a[4], _mv); g_m68k.a[4] += 2; M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2)); bus_write16(g_m68k.a[4], _mv); g_m68k.a[4] += 2; M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2)); bus_write16(g_m68k.a[4], _mv); g_m68k.a[4] += 2; M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(0xeab7c)); bus_write16(g_m68k.a[4], _mv); g_m68k.a[4] += 2; M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[5] + (-0x7200))); g_m68k.a[4] -= 2; bus_write16(g_m68k.a[4], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[2] + 0 + (int32_t)g_m68k.a[0] * 8)); g_m68k.a[4] -= 2; bus_write16(g_m68k.a[4], _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(g_m68k.a[1]); g_m68k.a[4] -= 2; bus_write16(g_m68k.a[4], _mv); M68K_TST16(_mv); }
    M68K_OR8(g_m68k.d[7], g_m68k.d[1]);
    { uint16_t _mv = (uint16_t)(g_m68k.a[3]); g_m68k.a[4] -= 2; bus_write16(g_m68k.a[4], _mv); M68K_TST16(_mv); }
    M68K_OR8(g_m68k.d[7], g_m68k.d[1]);
    { uint16_t _mv = (uint16_t)(g_m68k.a[5]); g_m68k.a[4] -= 2; bus_write16(g_m68k.a[4], _mv); M68K_TST16(_mv); }
    M68K_OR8(g_m68k.d[7], g_m68k.d[1]);
    { uint16_t _mv = (uint16_t)(g_m68k.a[7]); g_m68k.a[4] -= 2; bus_write16(g_m68k.a[4], _mv); M68K_TST16(_mv); }
    M68K_OR8(g_m68k.d[7], g_m68k.d[1]);
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[1])); g_m68k.a[4] -= 2; bus_write16(g_m68k.a[4], _mv); M68K_TST16(_mv); }
    M68K_OR8(g_m68k.d[7], g_m68k.d[1]);
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[3])); g_m68k.a[4] -= 2; bus_write16(g_m68k.a[4], _mv); M68K_TST16(_mv); }
    M68K_OR8(g_m68k.d[7], g_m68k.d[1]);
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[5])); g_m68k.a[4] -= 2; bus_write16(g_m68k.a[4], _mv); M68K_TST16(_mv); }
    M68K_OR8(g_m68k.d[7], g_m68k.d[1]);
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[7])); g_m68k.a[4] -= 2; bus_write16(g_m68k.a[4], _mv); M68K_TST16(_mv); }
    M68K_OR8(g_m68k.d[7], g_m68k.d[1]);
    { uint16_t _mv = (uint16_t)(_postinc16(1)); g_m68k.a[4] -= 2; bus_write16(g_m68k.a[4], _mv); M68K_TST16(_mv); }
    M68K_OR8(g_m68k.d[7], g_m68k.d[1]);
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2)); bus_write16(g_m68k.a[4], _mv); g_m68k.a[4] += 2; M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2)); bus_write16(g_m68k.a[4], _mv); g_m68k.a[4] += 2; M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2)); bus_write16(g_m68k.a[4], _mv); g_m68k.a[4] += 2; M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2)); bus_write16(g_m68k.a[4], _mv); g_m68k.a[4] += 2; M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(0x83001255)); bus_write16(g_m68k.a[4], _mv); g_m68k.a[4] += 2; M68K_TST16(_mv); }
    /* TODO $0F28C0: sbcd.b d2, d0  [81 02] */
    /* WARNING: function did not end with RTS */
}

/* $0F2C2A-$0F2C2E  (1 instructions, 4 bytes) */
void jt_0F2C2A(void) {
    { uint8_t _mv = (uint8_t)(g_m68k.d[6]); bus_write8(g_m68k.a[1] + (-0x7c00), _mv); M68K_TST8(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0F302A-$0F306E  (17 instructions, 68 bytes) */
void jt_0F302A(void) {
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[4])); bus_write8(g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2, _mv); M68K_TST8(_mv); }
    { uint32_t _mv = (uint32_t)(0x8200394c); g_m68k.a[0] -= 4; bus_write32(g_m68k.a[0], _mv); M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    { uint16_t _mv = (uint16_t)(g_m68k.a[5]); bus_write16(g_m68k.a[4] + (-0x7e00), _mv); M68K_TST16(_mv); }
    { uint32_t _mv = (uint32_t)(g_m68k.d[7]); bus_write32(g_m68k.a[0] + (-0x7e00), _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(g_m68k.a[3]); bus_write32(g_m68k.a[0] + (-0x7e00), _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(g_m68k.a[7]); bus_write32(g_m68k.a[0] + (-0x7e00), _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[3])); bus_write32(g_m68k.a[0] + (-0x7e00), _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[7])); bus_write32(g_m68k.a[0] + (-0x7e00), _mv); M68K_TST32(_mv); }
    { uint32_t _mv = (uint32_t)(_postinc32(3)); bus_write32(g_m68k.a[0] + (-0x7e00), _mv); M68K_TST32(_mv); }
    { uint16_t _mv = (uint16_t)(g_m68k.a[6]); bus_write16(g_m68k.a[4] + (-0x7e00), _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(g_m68k.a[7]); bus_write16(g_m68k.a[4] + (-0x7e00), _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[0])); bus_write16(g_m68k.a[4] + (-0x7e00), _mv); M68K_TST16(_mv); }
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[3] + (-0x7e00))); bus_write32(g_m68k.a[0] + 0x216f, _mv); M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.a[0] * 2)); bus_write32(g_m68k.a[0] + 0x1c1e, _mv); M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[1], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F342A-$0F342C  (1 instructions, 2 bytes) */
void jt_0F342A(void) {
    M68K_BTST(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F485C-$0F4860  (2 instructions, 4 bytes) */
void jt_0F485C(void) {
    M68K_ASR16(g_m68k.d[0], 0x8);
    /* TODO $0F485E: dc.w $ff20  [FF 20] */
    /* WARNING: function did not end with RTS */
}

/* $0F4864-$0F4868  (2 instructions, 4 bytes) */
void jt_0F4864(void) {
    M68K_ASR16(g_m68k.d[0], 0x8);
    /* TODO $0F4866: dc.w $ff20  [FF 20] */
    /* WARNING: function did not end with RTS */
}
