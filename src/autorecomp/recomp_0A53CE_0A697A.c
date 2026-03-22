/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $0A53CE - $0A697A */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

/* $0A53CE-$0A5402  (25 instructions, 52 bytes) */
void jt_0A53CE(void) {
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x10); bus_write8(_ea, _tmp); }
    M68K_LSL8(g_m68k.d[1], 0x3);
    M68K_ADD8(g_m68k.d[0], 0x1);
    M68K_ROL8(g_m68k.d[1], 0x3);
    M68K_ADD8(g_m68k.d[0], 0x1);
    M68K_LSL8(g_m68k.d[1], g_m68k.d[3]);
    M68K_ADD8(g_m68k.d[0], 0x1);
    M68K_ROL8(g_m68k.d[1], g_m68k.d[3]);
    M68K_ADD8(g_m68k.d[0], 0x1);
    M68K_LSL16(g_m68k.d[1], 0x3);
    M68K_ADD8(g_m68k.d[0], 0x1);
    M68K_ROL16(g_m68k.d[1], 0x3);
    M68K_ADD8(g_m68k.d[0], 0x1);
    M68K_LSL16(g_m68k.d[1], g_m68k.d[3]);
    M68K_ADD8(g_m68k.d[0], 0x1);
    M68K_ROL16(g_m68k.d[1], g_m68k.d[3]);
    M68K_ADD8(g_m68k.d[0], 0x1);
    M68K_LSL32(g_m68k.d[1], 0x3);
    M68K_ADD8(g_m68k.d[0], 0x1);
    M68K_ROL32(g_m68k.d[1], 0x3);
    M68K_ADD8(g_m68k.d[0], 0x1);
    M68K_LSL32(g_m68k.d[1], g_m68k.d[3]);
    M68K_ADD8(g_m68k.d[0], 0x1);
    M68K_ROL32(g_m68k.d[1], g_m68k.d[3]);
    M68K_ADD8(g_m68k.d[0], 0x1);
    /* WARNING: function did not end with RTS */
}

/* $0A58D2-$0A5906  (17 instructions, 52 bytes) */
void jt_0A58D2(void) {
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x10); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_ROR16(g_m68k.d[5], g_m68k.d[4]);
    M68K_SUB8(g_m68k.d[0], 0x1);
    M68K_LSR32(g_m68k.d[3], 0x4);
    M68K_SUB8(g_m68k.d[0], 0x1);
    M68K_ROR32(g_m68k.d[0], 0x4);
    M68K_SUB8(g_m68k.d[0], 0x1);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $0A5902: roxr.l d4, d7  [E8 B7] */
    M68K_SUB8(g_m68k.d[0], 0x1);
    /* WARNING: function did not end with RTS */
}

/* $0A5F9A-$0A5FB6  (8 instructions, 28 bytes) */
void jt_0A5F9A(void) {
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xe); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[3]; uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[0]); bus_write16(_ea, _tmp); }
    /* TODO $0A5FB0: dc.w $4500  [45 00] */
    { uint32_t _ea = (g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 4); uint16_t _tmp = bus_read16(_ea); M68K_AND16(_tmp, g_m68k.d[0]); bus_write16(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0A6000-$0A6006  (2 instructions, 6 bytes) */
void jt_0A6000(void) {
    /* TODO $0A6000: dc.w $4500  [45 00] */
    { uint32_t _ea = (g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 4); uint32_t _tmp = bus_read32(_ea); M68K_AND32(_tmp, g_m68k.d[0]); bus_write32(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0A63FE-$0A646A  (38 instructions, 108 bytes) */
void jt_0A63FE(void) {
    M68K_OR8(g_m68k.d[7], 0x7);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULS(g_m68k.d[0], _postinc16(6));
    M68K_NOT8(g_m68k.d[0]);
    M68K_MULS(g_m68k.d[0], bus_read16(g_m68k.a[3] + 0x4600));
    M68K_MULS(g_m68k.d[0], bus_read16(0x004600));
    M68K_AND8(g_m68k.d[1], g_m68k.d[5]);
    M68K_NOT8(g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULS(g_m68k.d[0], bus_read16(g_m68k.a[4]));
    M68K_NOT8(g_m68k.d[0]);
    M68K_MULS(g_m68k.d[0], _postinc16(7));
    M68K_NOT8(g_m68k.d[0]);
    M68K_MULS(g_m68k.d[0], bus_read16(g_m68k.a[4] + 0x4600));
    M68K_MULS(g_m68k.d[0], bus_read16(0x4600C206));
    M68K_NOT8(g_m68k.d[0]);
    M68K_AND8(g_m68k.d[1], bus_read8(g_m68k.a[0]));
    M68K_NOT8(g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULS(g_m68k.d[0], bus_read16(g_m68k.a[5]));
    M68K_NOT8(g_m68k.d[0]);
    M68K_MULS(g_m68k.d[0], _predec16(0));
    M68K_NOT8(g_m68k.d[0]);
    M68K_MULS(g_m68k.d[0], bus_read16(g_m68k.a[5] + 0x4600));
    M68K_MULS(g_m68k.d[0], bus_read16(0xaaa4c));
    M68K_AND8(g_m68k.d[1], g_m68k.d[7]);
    M68K_NOT8(g_m68k.d[0]);
    M68K_AND8(g_m68k.d[1], bus_read8(g_m68k.a[1]));
    M68K_NOT8(g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULS(g_m68k.d[0], bus_read16(g_m68k.a[6]));
    M68K_NOT8(g_m68k.d[0]);
    M68K_MULS(g_m68k.d[0], _predec16(1));
    M68K_NOT8(g_m68k.d[0]);
    M68K_MULS(g_m68k.d[0], bus_read16(g_m68k.a[6] + 0x4600));
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0A64C6-$0A652A  (34 instructions, 100 bytes) */
void jt_0A64C6(void) {
    M68K_OR8(g_m68k.d[3], 0x8);
    M68K_AND8(g_m68k.d[1], _postinc8(1));
    M68K_NOT8(g_m68k.d[0]);
    M68K_AND8(g_m68k.d[1], _postinc8(6));
    M68K_NOT8(g_m68k.d[0]);
    M68K_AND8(g_m68k.d[1], _predec8(3));
    M68K_NOT8(g_m68k.d[0]);
    M68K_AND8(g_m68k.d[1], bus_read8(g_m68k.a[0] + 0x4600));
    M68K_AND8(g_m68k.d[1], bus_read8(g_m68k.a[4] + 0x4600));
    M68K_AND8(g_m68k.d[1], bus_read8(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 8));
    M68K_AND8(g_m68k.d[1], bus_read8(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 8));
    M68K_AND8(g_m68k.d[1], bus_read8(g_m68k.a[7] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 8));
    M68K_AND8(g_m68k.d[1], _postinc8(2));
    M68K_NOT8(g_m68k.d[0]);
    M68K_AND8(g_m68k.d[1], _postinc8(7));
    M68K_NOT8(g_m68k.d[0]);
    M68K_AND8(g_m68k.d[1], _predec8(4));
    M68K_NOT8(g_m68k.d[0]);
    M68K_AND8(g_m68k.d[1], bus_read8(g_m68k.a[1] + 0x4600));
    M68K_AND8(g_m68k.d[1], bus_read8(g_m68k.a[5] + 0x4600));
    M68K_AND8(g_m68k.d[1], bus_read8(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 8));
    M68K_AND8(g_m68k.d[1], bus_read8(g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 8));
    M68K_AND8(g_m68k.d[1], bus_read8(0x004600));
    M68K_AND8(g_m68k.d[1], _postinc8(3));
    M68K_NOT8(g_m68k.d[0]);
    M68K_AND8(g_m68k.d[1], _predec8(0));
    M68K_NOT8(g_m68k.d[0]);
    M68K_AND8(g_m68k.d[1], _predec8(5));
    M68K_NOT8(g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0A652A-$0A653E  (7 instructions, 20 bytes) */
void jt_0A652A(void) {
    M68K_OR8(g_m68k.d[5], 0xc);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULS(g_m68k.d[0], _postinc16(2));
    M68K_NOT8(g_m68k.d[0]);
    M68K_MULS(g_m68k.d[0], _predec16(5));
    M68K_NOT8(g_m68k.d[0]);
    M68K_MULS(g_m68k.d[0], bus_read16(g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 8));
    /* WARNING: function did not end with RTS */
}

/* $0A661E-$0A6632  (5 instructions, 20 bytes) */
void jt_0A661E(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND8(g_m68k.d[1], bus_read8(g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 8));
    M68K_AND8(g_m68k.d[1], bus_read8(g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 8));
    M68K_AND8(g_m68k.d[1], bus_read8(g_m68k.a[6] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 8));
    /* WARNING: function did not end with RTS */
}

/* $0A6632-$0A6646  (6 instructions, 20 bytes) */
void jt_0A6632(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_CMP32(g_m68k.d[6], bus_read32(0x004200));
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(g_m68k.d[1]));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP32(g_m68k.d[6], bus_read32(0x4200BCC2));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $0A6646-$0A665A  (8 instructions, 20 bytes) */
void jt_0A6646(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_CMP16(g_m68k.d[6], _predec16(2));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(g_m68k.d[3]));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP32(g_m68k.d[6], bus_read32(0xaa854));
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(g_m68k.d[4]));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $0A665A-$0A666E  (6 instructions, 20 bytes) */
void jt_0A665A(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_CMP32(g_m68k.d[6], bus_read32(0xa6660 + (int16_t)(uint16_t)g_m68k.d[4] * 2));
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(g_m68k.d[5]));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP32(g_m68k.d[6], 0x4200bcc6);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $0A666E-$0A6672  (1 instructions, 4 bytes) */
void jt_0A666E(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    /* WARNING: function did not end with RTS */
}

/* $0A6682-$0A668E  (5 instructions, 12 bytes) */
void jt_0A6682(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_CMP16(g_m68k.d[6], _predec16(2));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(g_m68k.d[3]));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $0A6696-$0A66A2  (5 instructions, 12 bytes) */
void jt_0A6696(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_CMP16(g_m68k.d[6], _predec16(2));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(g_m68k.d[1]));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $0A66AA-$0A66BE  (9 instructions, 20 bytes) */
void jt_0A66AA(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_AND32(g_m68k.d[0], bus_read32(g_m68k.a[7]));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_AND32(g_m68k.d[0], _postinc32(3));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_AND32(g_m68k.d[0], _postinc32(0));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_AND32(g_m68k.d[0], _postinc32(4));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $0A66BE-$0A66D2  (9 instructions, 20 bytes) */
void jt_0A66BE(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_AND32(g_m68k.d[0], _postinc32(1));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(g_m68k.d[1]));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_AND32(g_m68k.d[0], _postinc32(2));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(g_m68k.d[2]));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $0A66D2-$0A66E6  (8 instructions, 20 bytes) */
void jt_0A66D2(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_AND32(g_m68k.d[0], _postinc32(5));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_AND32(g_m68k.d[0], _predec32(7));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_AND32(g_m68k.d[0], _postinc32(6));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_AND32(g_m68k.d[0], bus_read32(g_m68k.a[0] + 0x4200));
    /* WARNING: function did not end with RTS */
}

/* $0A66E6-$0A66FA  (6 instructions, 20 bytes) */
void jt_0A66E6(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND32(g_m68k.d[0], bus_read32(g_m68k.a[1] + 0x4200));
    M68K_CMP16(g_m68k.d[6], _predec16(1));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_AND32(g_m68k.d[0], bus_read32(g_m68k.a[2] + 0x4200));
    /* WARNING: function did not end with RTS */
}

/* $0A66FA-$0A670E  (7 instructions, 20 bytes) */
void jt_0A66FA(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_AND32(g_m68k.d[0], _postinc32(7));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_AND32(g_m68k.d[0], bus_read32(g_m68k.a[3] + 0x4200));
    M68K_AND32(g_m68k.d[0], _predec32(0));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_AND32(g_m68k.d[0], bus_read32(g_m68k.a[4] + 0x4200));
    /* WARNING: function did not end with RTS */
}

/* $0A670E-$0A6722  (7 instructions, 20 bytes) */
void jt_0A670E(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_CMP16(g_m68k.d[6], _predec16(0));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(g_m68k.d[7]));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND32(g_m68k.d[0], bus_read32(g_m68k.a[5] + 0x4200));
    /* WARNING: function did not end with RTS */
}

/* $0A6722-$0A6736  (7 instructions, 20 bytes) */
void jt_0A6722(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_AND32(g_m68k.d[0], _predec32(1));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_AND32(g_m68k.d[0], bus_read32(g_m68k.a[6] + 0x4200));
    M68K_AND32(g_m68k.d[0], _predec32(2));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_AND32(g_m68k.d[0], bus_read32(g_m68k.a[7] + 0x4200));
    /* WARNING: function did not end with RTS */
}

/* $0A6736-$0A674A  (7 instructions, 20 bytes) */
void jt_0A6736(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_AND32(g_m68k.d[0], _predec32(3));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_AND32(g_m68k.d[0], bus_read32(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 2));
    M68K_AND32(g_m68k.d[0], _predec32(4));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_AND32(g_m68k.d[0], bus_read32(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 2));
    /* WARNING: function did not end with RTS */
}

/* $0A674A-$0A6756  (4 instructions, 12 bytes) */
void jt_0A674A(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_AND32(g_m68k.d[0], _predec32(5));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_AND32(g_m68k.d[0], bus_read32(g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 2));
    /* WARNING: function did not end with RTS */
}

/* $0A675E-$0A6772  (8 instructions, 20 bytes) */
void jt_0A675E(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_CMP16(g_m68k.d[6], _predec16(2));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(g_m68k.d[1]));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_AND32(g_m68k.d[0], _predec32(6));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_AND32(g_m68k.d[0], bus_read32(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 2));
    /* WARNING: function did not end with RTS */
}

/* $0A6772-$0A6788  (5 instructions, 22 bytes) */
void jt_0A6772(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_CMP32(g_m68k.d[6], bus_read32(0xa6778 + (int16_t)(uint16_t)g_m68k.d[4] * 2));
    M68K_AND32(g_m68k.d[0], bus_read32(0xa677c + (int16_t)(uint16_t)g_m68k.d[4] * 2));
    M68K_AND32(g_m68k.d[0], bus_read32(g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 2));
    M68K_AND32(g_m68k.d[0], 0x42000002);
    /* WARNING: function did not end with RTS */
}

/* $0A6786-$0A6796  (7 instructions, 16 bytes) */
void jt_0A6786(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_OR8(g_m68k.d[2], 0x62);
    M68K_CMP16(g_m68k.d[6], _predec16(2));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(g_m68k.d[1]));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_AND32(g_m68k.d[0], bus_read32(g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 2));
    /* WARNING: function did not end with RTS */
}

/* $0A679A-$0A67AE  (8 instructions, 20 bytes) */
void jt_0A679A(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(g_m68k.d[0]));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(g_m68k.a[2]));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP16(g_m68k.d[6], _predec16(3));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP16(g_m68k.d[6], bus_read16(g_m68k.a[7] + 0x4200));
    /* WARNING: function did not end with RTS */
}

/* $0A67AE-$0A67B6  (2 instructions, 8 bytes) */
void jt_0A67AE(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_AND32(g_m68k.d[0], bus_read32(g_m68k.a[6] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 2));
    /* WARNING: function did not end with RTS */
}

/* $0A67C2-$0A67D6  (8 instructions, 20 bytes) */
void jt_0A67C2(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_CMP16(g_m68k.d[6], _predec16(0));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(g_m68k.d[5]));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP16(g_m68k.d[6], _predec16(1));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_AND32(g_m68k.d[0], bus_read32(g_m68k.a[2] + 0x4200));
    /* WARNING: function did not end with RTS */
}

/* $0A67D6-$0A67EA  (9 instructions, 20 bytes) */
void jt_0A67D6(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_CMP16(g_m68k.d[6], _predec16(0));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_MULU(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP16(g_m68k.d[6], _predec16(1));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_MULU(g_m68k.d[0], g_m68k.d[1]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $0A67EA-$0A67FE  (6 instructions, 20 bytes) */
void jt_0A67EA(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_AND32(g_m68k.d[0], bus_read32(0x004200));
    M68K_MULU(g_m68k.d[0], g_m68k.d[2]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_AND32(g_m68k.d[0], bus_read32(0x4200C0C3));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $0A67FE-$0A6812  (8 instructions, 20 bytes) */
void jt_0A67FE(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_AND32(g_m68k.d[0], bus_read32(0xaaa04));
    M68K_MULU(g_m68k.d[0], g_m68k.d[4]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_AND32(g_m68k.d[0], _predec32(0));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_MULU(g_m68k.d[0], g_m68k.d[5]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $0A6812-$0A6826  (8 instructions, 20 bytes) */
void jt_0A6812(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_AND32(g_m68k.d[0], bus_read32(0xaaa18));
    M68K_MULU(g_m68k.d[0], bus_read16(g_m68k.a[1]));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_AND32(g_m68k.d[0], _predec32(0));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_MULU(g_m68k.d[0], bus_read16(g_m68k.a[2]));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $0A6826-$0A683A  (9 instructions, 20 bytes) */
void jt_0A6826(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_MULU(g_m68k.d[0], g_m68k.d[6]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_MULU(g_m68k.d[0], bus_read16(g_m68k.a[3]));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_MULU(g_m68k.d[0], g_m68k.d[7]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_MULU(g_m68k.d[0], bus_read16(g_m68k.a[4]));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $0A683A-$0A683E  (1 instructions, 4 bytes) */
void jt_0A683A(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    /* WARNING: function did not end with RTS */
}

/* $0A684E-$0A6852  (1 instructions, 4 bytes) */
void jt_0A684E(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    /* WARNING: function did not end with RTS */
}

/* $0A6862-$0A6876  (6 instructions, 20 bytes) */
void jt_0A6862(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULU(g_m68k.d[0], _postinc16(1));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0A6876-$0A687A  (1 instructions, 4 bytes) */
void jt_0A6876(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    /* WARNING: function did not end with RTS */
}

/* $0A688A-$0A688E  (1 instructions, 4 bytes) */
void jt_0A688A(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    /* WARNING: function did not end with RTS */
}

/* $0A689E-$0A68A2  (1 instructions, 4 bytes) */
void jt_0A689E(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    /* WARNING: function did not end with RTS */
}

/* $0A68B2-$0A68C6  (9 instructions, 20 bytes) */
void jt_0A68B2(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_MULU(g_m68k.d[0], _postinc16(7));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_MULU(g_m68k.d[0], _predec16(2));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_MULU(g_m68k.d[0], _predec16(0));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_MULU(g_m68k.d[0], _predec16(3));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $0A68C6-$0A68DA  (9 instructions, 20 bytes) */
void jt_0A68C6(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_CMP16(g_m68k.d[6], _postinc16(2));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP16(g_m68k.d[6], _predec16(6));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP16(g_m68k.d[6], _postinc16(3));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP16(g_m68k.d[6], _predec16(7));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $0A68DA-$0A68EE  (7 instructions, 20 bytes) */
void jt_0A68DA(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_CMP16(g_m68k.d[6], _postinc16(4));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP16(g_m68k.d[6], bus_read16(g_m68k.a[0] + 0x4200));
    M68K_CMP16(g_m68k.d[6], _postinc16(5));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP16(g_m68k.d[6], bus_read16(g_m68k.a[1] + 0x4200));
    /* WARNING: function did not end with RTS */
}

/* $0A68EE-$0A6902  (7 instructions, 20 bytes) */
void jt_0A68EE(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_CMP16(g_m68k.d[6], _postinc16(6));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP16(g_m68k.d[6], bus_read16(g_m68k.a[2] + 0x4200));
    M68K_CMP16(g_m68k.d[6], _postinc16(7));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP16(g_m68k.d[6], bus_read16(g_m68k.a[3] + 0x4200));
    /* WARNING: function did not end with RTS */
}

/* $0A6902-$0A6916  (7 instructions, 20 bytes) */
void jt_0A6902(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_CMP16(g_m68k.d[6], _predec16(0));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP16(g_m68k.d[6], bus_read16(g_m68k.a[4] + 0x4200));
    M68K_CMP16(g_m68k.d[6], _predec16(1));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP16(g_m68k.d[6], bus_read16(g_m68k.a[5] + 0x4200));
    /* WARNING: function did not end with RTS */
}

/* $0A6916-$0A692A  (7 instructions, 20 bytes) */
void jt_0A6916(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_CMP16(g_m68k.d[6], _predec16(2));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP16(g_m68k.d[6], bus_read16(g_m68k.a[6] + 0x4200));
    M68K_CMP16(g_m68k.d[6], _predec16(3));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP16(g_m68k.d[6], bus_read16(g_m68k.a[7] + 0x4200));
    /* WARNING: function did not end with RTS */
}

/* $0A692A-$0A693E  (7 instructions, 20 bytes) */
void jt_0A692A(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_CMP16(g_m68k.d[6], _predec16(4));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP16(g_m68k.d[6], bus_read16(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 2));
    M68K_CMP16(g_m68k.d[6], _predec16(5));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP16(g_m68k.d[6], bus_read16(g_m68k.a[7] + 0x4200));
    /* WARNING: function did not end with RTS */
}

/* $0A693E-$0A6946  (3 instructions, 8 bytes) */
void jt_0A693E(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_MULU(g_m68k.d[0], _predec16(1));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $0A6952-$0A6966  (7 instructions, 20 bytes) */
void jt_0A6952(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_MULU(g_m68k.d[0], _predec16(5));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_MULU(g_m68k.d[0], bus_read16(g_m68k.a[3] + 0x4200));
    M68K_CMP32(g_m68k.d[6], bus_read32(0xaab60));
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(g_m68k.d[4]));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $0A6966-$0A697A  (7 instructions, 20 bytes) */
void jt_0A6966(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(g_m68k.d[0]));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_MULU(g_m68k.d[0], bus_read16(g_m68k.a[4] + 0x4200));
    M68K_MULU(g_m68k.d[0], _predec16(6));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_MULU(g_m68k.d[0], bus_read16(g_m68k.a[5] + 0x4200));
    /* WARNING: function did not end with RTS */
}
