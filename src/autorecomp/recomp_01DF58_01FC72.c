/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $01DF58 - $01FC72 */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

/* $01DF58-$01DF60  (2 instructions, 8 bytes) */
void jt_01DF58(void) {
    M68K_OR8(g_m68k.d[7], 0x10);
    { uint32_t _ea = (g_m68k.a[4] + 0x4700); uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $01E11C-$01E130  (7 instructions, 20 bytes) */
void jt_01E11C(void) {
    M68K_OR8(g_m68k.d[7], 0x10);
    { uint32_t _ea = (g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 8); uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    M68K_ADDX16(g_m68k.d[3], g_m68k.d[1]);
    /* TODO $01E126: dc.w $4700  [47 00] */
    { uint32_t _ea = g_m68k.a[3]; uint16_t _tmp = bus_read16(_ea); M68K_ADDX16(_tmp, _predec16(6)); bus_write16(_ea, _tmp); }
    /* TODO $01E12A: dc.w $4700  [47 00] */
    { uint32_t _ea = (g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 8); uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $01E2E0-$01E2E4  (1 instructions, 4 bytes) */
void jt_01E2E0(void) {
    M68K_OR8(g_m68k.d[3], 0x1);
    /* WARNING: function did not end with RTS */
}

/* $01E2F0-$01E2F8  (2 instructions, 8 bytes) */
void jt_01E2F0(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $01E2F8-$01E2FC  (1 instructions, 4 bytes) */
void jt_01E2F8(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    /* WARNING: function did not end with RTS */
}

/* $01E300-$01E308  (3 instructions, 8 bytes) */
void jt_01E300(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    g_m68k.a[3] += g_m68k.d[0];
    M68K_TST8(g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $01E308-$01E310  (3 instructions, 8 bytes) */
void jt_01E308(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    g_m68k.a[3] += g_m68k.d[1];
    M68K_TST8(g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $01E310-$01E318  (3 instructions, 8 bytes) */
void jt_01E310(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    g_m68k.a[3] += g_m68k.d[2];
    M68K_TST8(g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $01E318-$01E320  (3 instructions, 8 bytes) */
void jt_01E318(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    g_m68k.a[3] += g_m68k.d[3];
    M68K_TST8(g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $01E320-$01E328  (3 instructions, 8 bytes) */
void jt_01E320(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    g_m68k.a[3] += g_m68k.d[4];
    M68K_TST8(g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $01E328-$01E330  (3 instructions, 8 bytes) */
void jt_01E328(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    g_m68k.a[3] += g_m68k.d[5];
    M68K_TST8(g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $01E330-$01E338  (3 instructions, 8 bytes) */
void jt_01E330(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    g_m68k.a[3] += g_m68k.d[6];
    M68K_TST8(g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $01E338-$01E340  (3 instructions, 8 bytes) */
void jt_01E338(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    g_m68k.a[3] += g_m68k.d[7];
    M68K_TST8(g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $01E340-$01E348  (3 instructions, 8 bytes) */
void jt_01E340(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    g_m68k.a[3] += g_m68k.a[0];
    M68K_TST8(g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $01E39C-$01E404  (22 instructions, 104 bytes) */
void sub_01E39C(void) {
    func_table_call(0x000A26);
    func_table_call(0x0120E0);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x011F22);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    func_table_call(0x01E61E); /* loc_01E61E */
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x100)); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x01E81A); /* loc_01E81A */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x4)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x015256);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x7)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x015256);
    bus_write16(0x10360E, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    bus_write16(0x10360C, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint16_t _mv = (uint16_t)(0x3b); bus_write16(0x10360A, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x5)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x01E4EE); /* loc_01E4EE */
    func_table_call(0x01E514); /* loc_01E514 */
    func_table_call(0x01E532); /* loc_01E532 */
    func_table_call(0x01229E);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $01E404-$01E41C  (7 instructions, 24 bytes) */
void sub_01E404(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x10360E))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[0] = bus_read32(0x1e41c + (int16_t)(uint16_t)g_m68k.d[0]);
    func_table_call(g_m68k.a[0]);
    func_table_call(0x01229E);
    return;
}

/* $01E428-$01E47A  (18 instructions, 82 bytes) */
void jt_01E428(void) {
    { uint32_t _ea = 0x10360A; uint16_t _tmp = bus_read16(_ea); M68K_SUB16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    if (M68K_CC_PL) goto loc_01E474;
    bus_write16(0x10360A, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.a[5] = bus_read32(0x103606);
    g_m68k.a[5] = (g_m68k.a[5] + 0x4);
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(0x3)); M68K_TST16((uint16_t)g_m68k.d[7]);
loc_01E44A:
    g_m68k.a[0] = _postinc32(5);
    func_table_call(0x012286);
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[7]; _cnt--; g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_01E44A; } }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x4)); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x01E5BC); /* loc_01E5BC */
    M68K_TST16(g_m68k.d[0]);
    if (M68K_CC_EQ) goto loc_01E474;
    { uint16_t _mv = (uint16_t)(0x12b); bus_write16(0x10360A, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(0x10360E, _mv); M68K_TST16(_mv); }
loc_01E474:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $01E47A-$01E4C0  (14 instructions, 70 bytes) */
void jt_01E47A(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(0x10FD97))); M68K_TST8((uint8_t)g_m68k.d[0]);
    M68K_CMP16(bus_read16(0x1011FC), 0x0);
    if (M68K_CC_EQ) goto loc_01E492;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(0x10FD9D))); M68K_TST8((uint8_t)g_m68k.d[0]);
loc_01E492:
    M68K_BTST(g_m68k.d[0], 0x4);
    if (M68K_CC_EQ) goto loc_01E4A0;
    bus_write16(0x10360A, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
loc_01E4A0:
    { uint32_t _ea = 0x10360A; uint16_t _tmp = bus_read16(_ea); M68K_SUB16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    if (M68K_CC_PL) goto loc_01E4BA;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    func_table_call(0x011F22);
    { uint16_t _mv = (uint16_t)(0x2); bus_write16(0x10360E, _mv); M68K_TST16(_mv); }
loc_01E4BA:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $01E4C0-$01E924  (105 instructions, 1124 bytes) */
void jt_01E4C0(void) {
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x4)); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x01E5EE); /* loc_01E5EE */
    M68K_TST16(g_m68k.d[0]);
    if (M68K_CC_EQ) goto loc_01E4E8;
    func_table_call(0x0120E0);
    g_m68k.a[0] = bus_read32(0x103606);
    func_table_call(0x0110A2);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    goto loc_01E4EC;
loc_01E4E8:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
loc_01E4EC:
    return;
loc_01E4EE:
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    func_table_call(0x010F96);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    bus_write32(0x103606, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    func_table_call(0x010FCC);
    { uint32_t _mv = (uint32_t)(g_m68k.a[0]); bus_write32(0x103606, _mv); M68K_TST32(_mv); }
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
loc_01E514:
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    g_m68k.a[6] = bus_read32(0x103606);
    M68K_SUB16(g_m68k.d[0], 0x1);
loc_01E520:
    func_table_call(0x012202);
    { uint32_t _mv = (uint32_t)(g_m68k.a[0]); bus_write32(g_m68k.a[6], _mv); g_m68k.a[6] += 4; M68K_TST32(_mv); }
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[0]; _cnt--; g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_01E520; } }
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
loc_01E532:
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[7]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    g_m68k.a[5] = bus_read32(0x103606);
    g_m68k.a[6] = 0x01E926;
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(0x3)); M68K_TST16((uint16_t)g_m68k.d[7]);
loc_01E546:
    g_m68k.a[0] = _postinc32(5);
    func_table_call(0x01E58A); /* loc_01E58A */
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[7]; _cnt--; g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_01E546; } }
    g_m68k.a[0] = bus_read32(g_m68k.a[5]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x101202))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_LSL16(g_m68k.d[0], 0x3);
    g_m68k.a[6] = 0x01E946;
    g_m68k.a[6] = (g_m68k.a[6] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    func_table_call(0x01E58A); /* loc_01E58A */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    g_m68k.a[5] = bus_read32(0x103606);
    g_m68k.a[5] = (g_m68k.a[5] + 0x4);
    g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | ((uint16_t)(0x3)); M68K_TST16((uint16_t)g_m68k.d[7]);
loc_01E578:
    g_m68k.a[0] = _postinc32(5);
    func_table_call(0x012286);
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[7]; _cnt--; g_m68k.d[7] = (g_m68k.d[7] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_01E578; } }
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[7] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
loc_01E58A:
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(_postinc16(6))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[3] = bus_read32(0x080020);
    g_m68k.a[3] = bus_read32(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[0]);
    func_table_call(0x012270);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(_postinc16(6))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(_postinc16(6))); M68K_TST16((uint16_t)g_m68k.d[2]);
    func_table_call(0x01225C);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(_postinc16(6))); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x012256);
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
loc_01E5BC:
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint32_t _ea = 0x10360C; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[2]); bus_write16(_ea, _tmp); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x10360C))); M68K_TST16((uint16_t)g_m68k.d[2]);
    M68K_CMP16(g_m68k.d[2], 0x100);
    if (M68K_CC_CS) goto loc_01E5E4;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x100)); M68K_TST16((uint16_t)g_m68k.d[2]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(0x10360C, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
loc_01E5E4:
    func_table_call(0x01E61E); /* loc_01E61E */
    g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
loc_01E5EE:
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint32_t _ea = 0x10360C; uint16_t _tmp = bus_read16(_ea); M68K_SUB16(_tmp, g_m68k.d[2]); bus_write16(_ea, _tmp); }
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x10360C))); M68K_TST16((uint16_t)g_m68k.d[2]);
    if (M68K_CC_PL) goto loc_01E610;
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint16_t _mv = (uint16_t)(g_m68k.d[2]); bus_write16(0x10360C, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
loc_01E610:
    func_table_call(0x01E61E); /* loc_01E61E */
    func_table_call(0x01E81A); /* loc_01E81A */
    g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
loc_01E61E:
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x40)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0xa)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.a[3] = 0x1e63a;
    func_table_call(0x012036);
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
loc_01E81A:
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x50)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x5)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.a[3] = 0x1e836;
    func_table_call(0x012036);
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
loc_01E91C:
    /* TODO $01E91C: movep.w $1405(a5), d1  [03 0D 14 05] */
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(2))); M68K_TST8((uint8_t)g_m68k.d[1]);
    M68K_BTST(bus_read8(g_m68k.a[6]), g_m68k.d[3]);
    /* WARNING: function did not end with RTS */
}

/* $01E98A-$01E99C  (6 instructions, 18 bytes) */
void jt_01E98A(void) {
    if (M68K_CC_LE) { func_table_call(0x01E91C); return; }
    M68K_OR8(g_m68k.d[0], 0x45);
    /* TODO $01E990: dc.w $4900  [49 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    g_m68k.d[0] = (uint32_t)(int32_t)(int8_t)(0xec); M68K_TST32(g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x41);
    /* WARNING: function did not end with RTS */
}

/* $01EA1A-$01EA36  (7 instructions, 28 bytes) */
void jt_01EA1A(void) {
    M68K_OR8(g_m68k.d[1], 0x36);
    M68K_OR8(g_m68k.d[1], 0x7e);
    M68K_OR8(g_m68k.d[1], 0xc6);
    M68K_OR8(g_m68k.d[1], 0xe);
    M68K_OR8(g_m68k.d[1], 0x56);
    M68K_OR8(g_m68k.d[1], 0x9e);
    M68K_OR8(g_m68k.d[1], 0xe6);
    /* WARNING: function did not end with RTS */
}

/* $01EA36-$01EA42  (4 instructions, 12 bytes) */
void jt_01EA36(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _b = 1u << ((g_m68k.d[4]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    M68K_OR8(g_m68k.d[0], 0x20);
    g_m68k.d[0] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $01EA7E-$01EABA  (18 instructions, 60 bytes) */
void jt_01EA7E(void) {
    M68K_CMP32(bus_read32(g_m68k.a[0] + 0x2000), 0x5120);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_BTST(g_m68k.d[2], g_m68k.d[6]);
    M68K_OR8(g_m68k.d[0], 0x4e);
    M68K_ADD8(g_m68k.d[0], 0x2);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[4]; uint8_t _b = 1u << ((g_m68k.d[6]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    M68K_OR8(g_m68k.d[0], 0x20);
    /* TODO $01EA9C: dc.w $4100  [41 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = (g_m68k.a[6] + 0 + (int16_t)(uint16_t)g_m68k.d[0]); uint8_t _b = 1u << ((g_m68k.d[6]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v & ~ _b); }
    /* TRAP #0x3 */
    /* TODO $01EAA8: dc.w $4300  [43 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $01EAAE: dc.w $e10  [0E 10] */
    M68K_OR8(g_m68k.d[0], 0x53);
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[4]);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $01EAC6-$01EB02  (20 instructions, 60 bytes) */
void jt_01EAC6(void) {
    /* TODO $01EAC6: dc.w $ed8  [0E D8] */
    M68K_OR8(g_m68k.d[0], 0x20);
    g_m68k.d[0] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_BTST(bus_read8(g_m68k.a[6]), g_m68k.d[7]);
    M68K_OR8(g_m68k.d[0], 0x4e);
    M68K_ADD8(g_m68k.d[0], 0x2);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[4]; uint8_t _b = 1u << ((g_m68k.d[7]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v ^ _b); }
    M68K_OR8(g_m68k.d[0], 0x20);
    /* TODO $01EAE4: dc.w $4100  [41 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = (g_m68k.a[2] + 0x0); uint8_t _b = 1u << ((g_m68k.d[7]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v & ~ _b); }
    /* TRAP #0x3 */
    /* TODO $01EAF0: dc.w $4300  [43 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = (g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0]); uint8_t _b = 1u << ((g_m68k.d[7]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    { uint32_t _ea = g_m68k.a[3]; uint16_t _tmp = bus_read16(_ea); M68K_NEG16(_tmp); bus_write16(_ea, _tmp); }
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[4]);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $01EB0E-$01EB26  (7 instructions, 24 bytes) */
void jt_01EB0E(void) {
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[0])); bus_write8(0x000000, _mv); M68K_TST8(_mv); }
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, 0x8); bus_write8(_ea, _tmp); }
    g_m68k.d[0] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[6] + 0x0)); bus_write8(0x00554E, _mv); M68K_TST8(_mv); }
    M68K_ADD8(g_m68k.d[0], 0x2);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $01EB56-$01EB7A  (12 instructions, 36 bytes) */
void jt_01EB56(void) {
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[4]))); M68K_TST8((uint8_t)g_m68k.d[2]);
    M68K_OR8(g_m68k.d[0], 0x20);
    g_m68k.d[0] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[0] + 0x0))); M68K_TST8((uint8_t)g_m68k.d[2]);
    g_m68k.a[6] -= 0x2;
    M68K_ADD8(g_m68k.d[0], 0x2);
    M68K_OR8(g_m68k.d[0], 0x0);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(0x0)); M68K_TST8((uint8_t)g_m68k.d[2]);
    /* TODO $01EB72: dc.w $4120  [41 20] */
    /* TODO $01EB74: dc.w $4100  [41 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $01EB9E-$01EBDA  (15 instructions, 60 bytes) */
void jt_01EB9E(void) {
    { uint8_t _mv = (uint8_t)(bus_read8(0x000000)); g_m68k.a[1] -= 1; bus_write8(g_m68k.a[1], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, 0x8); bus_write8(_ea, _tmp); }
    g_m68k.d[0] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.d[0])); bus_write8(g_m68k.a[1] + 0x554e, _mv); M68K_TST8(_mv); }
    M68K_ADD8(g_m68k.d[0], 0x2);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0])); bus_write8(g_m68k.a[1] + 0x4100 + (int16_t)(uint16_t)g_m68k.d[4], _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint8_t _mv = (uint8_t)(bus_read8(g_m68k.a[4] + 0x0)); bus_write8(0x4E434300, _mv); M68K_TST8(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[0] + 0x0))); M68K_TST8((uint8_t)g_m68k.d[2]);
    { uint32_t _ea = g_m68k.a[3]; uint16_t _tmp = bus_read16(_ea); M68K_NEG16(_tmp); bus_write16(_ea, _tmp); }
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(g_m68k.d[0])); M68K_TST16((uint16_t)g_m68k.d[4]);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $01EBE6-$01EC16  (16 instructions, 48 bytes) */
void jt_01EBE6(void) {
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(4))); M68K_TST8((uint8_t)g_m68k.d[3]);
    M68K_OR8(g_m68k.d[0], 0x20);
    g_m68k.d[0] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(_predec8(6))); M68K_TST8((uint8_t)g_m68k.d[3]);
    M68K_OR8(g_m68k.d[0], 0x4e);
    M68K_ADD8(g_m68k.d[0], 0x2);
    M68K_OR8(g_m68k.d[0], 0x0);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0]))); M68K_TST8((uint8_t)g_m68k.d[3]);
    /* TODO $01EC02: dc.w $4120  [41 20] */
    /* TODO $01EC04: dc.w $4100  [41 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(0x1ec0c))); M68K_TST8((uint8_t)g_m68k.d[3]);
    /* TRAP #0x3 */
    /* TODO $01EC10: dc.w $4300  [43 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $01F4A2-$01F4F2  (20 instructions, 80 bytes) */
void jt_01F4A2(void) {
    M68K_OR8(g_m68k.d[1], 0xf2);
    M68K_OR8(g_m68k.d[1], 0x36);
    M68K_OR8(g_m68k.d[1], 0x82);
    M68K_OR8(g_m68k.d[1], 0xbe);
    M68K_OR8(g_m68k.d[1], 0xe2);
    M68K_OR8(g_m68k.d[1], 0x12);
    M68K_OR8(g_m68k.d[1], 0x26);
    M68K_OR8(g_m68k.d[1], 0x52);
    M68K_OR8(g_m68k.d[1], 0x6e);
    M68K_OR8(g_m68k.d[1], 0x8e);
    M68K_OR8(g_m68k.d[1], 0xae);
    M68K_OR8(g_m68k.d[1], 0xd2);
    M68K_OR8(g_m68k.d[1], 0xe2);
    M68K_OR8(g_m68k.d[1], 0xe);
    M68K_OR8(g_m68k.d[1], 0x36);
    M68K_OR8(g_m68k.d[1], 0x62);
    M68K_OR8(g_m68k.d[1], 0x9e);
    M68K_OR8(g_m68k.d[1], 0xe2);
    M68K_OR8(g_m68k.d[1], 0x12);
    M68K_OR8(g_m68k.d[1], 0x46);
    /* WARNING: function did not end with RTS */
}

/* $01F4F2-$01F4FA  (2 instructions, 8 bytes) */
void jt_01F4F2(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x1); bus_write8(_ea, _tmp); }
    M68K_ADD16(g_m68k.d[5], bus_read16(g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 2));
    /* WARNING: function did not end with RTS */
}

/* $01F536-$01F53E  (3 instructions, 8 bytes) */
void jt_01F536(void) {
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x1); bus_write8(_ea, _tmp); }
    /* TODO $01F53A: dc.w $e9d1  [E9 D1] */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $01F612-$01F626  (7 instructions, 20 bytes) */
void jt_01F612(void) {
    M68K_OR8(g_m68k.d[4], 0x1);
    /* TODO $01F616: dc.w $e9d0  [E9 D0] */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_ADD16(g_m68k.d[5], bus_read16(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 2));
    M68K_ADD16(g_m68k.d[5], bus_read16(g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 2));
    /* TODO $01F622: dc.w $e9d1  [E9 D1] */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $01F652-$01F65A  (2 instructions, 8 bytes) */
void jt_01F652(void) {
    M68K_OR8(g_m68k.d[6], 0x1);
    M68K_ADD16(g_m68k.d[5], bus_read16(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[4]));
    /* WARNING: function did not end with RTS */
}

/* $01F66E-$01F676  (3 instructions, 8 bytes) */
void jt_01F66E(void) {
    M68K_OR8(g_m68k.d[7], 0x1);
    /* TODO $01F672: dc.w $e9d4  [E9 D4] */
    /* TODO $01F674: dc.w $4100  [41 00] */
    /* WARNING: function did not end with RTS */
}

/* $01F68E-$01F692  (1 instructions, 4 bytes) */
void jt_01F68E(void) {
    M68K_OR8(g_m68k.d[7], 0x1);
    /* WARNING: function did not end with RTS */
}

/* $01F6D2-$01F6DE  (5 instructions, 12 bytes) */
void jt_01F6D2(void) {
    M68K_OR8(g_m68k.d[3], 0x1);
    /* TODO $01F6D6: dc.w $e9d3  [E9 D3] */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* TODO $01F6DA: dc.w $e9d2  [E9 D2] */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $01F79E-$01F7A2  (1 instructions, 4 bytes) */
void jt_01F79E(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x1); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $01F8F6-$01F946  (20 instructions, 80 bytes) */
void jt_01F8F6(void) {
    M68K_OR8(g_m68k.d[1], 0x46);
    M68K_OR8(g_m68k.d[1], 0x8a);
    M68K_OR8(g_m68k.d[1], 0xce);
    M68K_OR8(g_m68k.d[1], 0x12);
    M68K_OR8(g_m68k.d[1], 0x56);
    M68K_OR8(g_m68k.d[1], 0x9a);
    M68K_OR8(g_m68k.d[1], 0xde);
    M68K_OR8(g_m68k.d[1], 0x22);
    M68K_OR8(g_m68k.d[1], 0x66);
    M68K_OR8(g_m68k.d[1], 0xaa);
    M68K_OR8(g_m68k.d[1], 0xee);
    M68K_OR8(g_m68k.d[1], 0x32);
    M68K_OR8(g_m68k.d[1], 0x76);
    M68K_OR8(g_m68k.d[1], 0xba);
    M68K_OR8(g_m68k.d[1], 0xfe);
    M68K_OR8(g_m68k.d[1], 0x42);
    M68K_OR8(g_m68k.d[1], 0x86);
    M68K_OR8(g_m68k.d[1], 0xca);
    M68K_OR8(g_m68k.d[1], 0xe);
    M68K_OR8(g_m68k.d[1], 0x52);
    /* WARNING: function did not end with RTS */
}

/* $01F946-$01F94A  (1 instructions, 4 bytes) */
void jt_01F946(void) {
    M68K_OR8(g_m68k.d[1], 0x10);
    /* WARNING: function did not end with RTS */
}

/* $01F98A-$01F98E  (1 instructions, 4 bytes) */
void jt_01F98A(void) {
    M68K_OR8(g_m68k.d[1], 0x10);
    /* WARNING: function did not end with RTS */
}

/* $01F9CE-$01F9D2  (1 instructions, 4 bytes) */
void jt_01F9CE(void) {
    M68K_OR8(g_m68k.d[1], 0x10);
    /* WARNING: function did not end with RTS */
}

/* $01FA12-$01FA16  (1 instructions, 4 bytes) */
void jt_01FA12(void) {
    M68K_OR8(g_m68k.d[1], 0x10);
    /* WARNING: function did not end with RTS */
}

/* $01FA56-$01FA5A  (1 instructions, 4 bytes) */
void jt_01FA56(void) {
    M68K_OR8(g_m68k.d[1], 0x10);
    /* WARNING: function did not end with RTS */
}

/* $01FA9A-$01FA9E  (1 instructions, 4 bytes) */
void jt_01FA9A(void) {
    M68K_OR8(g_m68k.d[1], 0x10);
    /* WARNING: function did not end with RTS */
}

/* $01FADE-$01FAE2  (1 instructions, 4 bytes) */
void jt_01FADE(void) {
    M68K_OR8(g_m68k.d[1], 0x10);
    /* WARNING: function did not end with RTS */
}

/* $01FB22-$01FB26  (1 instructions, 4 bytes) */
void jt_01FB22(void) {
    M68K_OR8(g_m68k.d[1], 0x10);
    /* WARNING: function did not end with RTS */
}

/* $01FB66-$01FB6A  (1 instructions, 4 bytes) */
void jt_01FB66(void) {
    M68K_OR8(g_m68k.d[1], 0x10);
    /* WARNING: function did not end with RTS */
}

/* $01FBAA-$01FBAE  (1 instructions, 4 bytes) */
void jt_01FBAA(void) {
    M68K_OR8(g_m68k.d[1], 0x10);
    /* WARNING: function did not end with RTS */
}

/* $01FBEE-$01FC2E  (31 instructions, 64 bytes) */
void jt_01FBEE(void) {
    M68K_OR8(g_m68k.d[1], 0x10);
    /* TODO $01FBF2: dc.w $ede8  [ED E8] */
    /* TODO $01FBF4: dc.w $4d00  [4D 00] */
    /* TODO $01FBF6: dc.w $edf8  [ED F8] */
    /* TODO $01FBF8: dc.w $4d00  [4D 00] */
    M68K_LSR8(g_m68k.d[0], 0x7);
    /* TODO $01FBFC: dc.w $4d00  [4D 00] */
    M68K_ROR8(g_m68k.d[0], 0x7);
    /* TODO $01FC00: dc.w $4d00  [4D 00] */
    M68K_LSR8(g_m68k.d[0], g_m68k.d[7]);
    /* TODO $01FC04: dc.w $4d00  [4D 00] */
    M68K_ROR8(g_m68k.d[0], g_m68k.d[7]);
    /* TODO $01FC08: dc.w $4d00  [4D 00] */
    M68K_LSR16(g_m68k.d[0], 0x7);
    /* TODO $01FC0C: dc.w $4d00  [4D 00] */
    M68K_ROR16(g_m68k.d[0], 0x7);
    /* TODO $01FC10: dc.w $4d00  [4D 00] */
    /* TODO $01FC12: roxr.w #$7, d7  [EE 57] */
    /* TODO $01FC14: dc.w $4d03  [4D 03] */
    M68K_ASR16(g_m68k.d[7], 0x7);
    /* TODO $01FC18: dc.w $4d03  [4D 03] */
    /* TODO $01FC1A: roxr.l #$7, d7  [EE 37] */
    /* TODO $01FC1C: dc.w $4d03  [4D 03] */
    M68K_ASR8(g_m68k.d[7], g_m68k.d[7]);
    /* TODO $01FC20: dc.w $4d03  [4D 03] */
    /* TODO $01FC22: roxr.b #$7, d7  [EE 17] */
    /* TODO $01FC24: dc.w $4d03  [4D 03] */
    M68K_ASR8(g_m68k.d[7], 0x7);
    /* TODO $01FC28: dc.w $4d03  [4D 03] */
    /* TODO $01FC2A: dc.w $edf7  [ED F7] */
    /* TODO $01FC2C: dc.w $4d03  [4D 03] */
    /* WARNING: function did not end with RTS */
}

/* $01FC32-$01FC72  (31 instructions, 64 bytes) */
void jt_01FC32(void) {
    M68K_OR8(g_m68k.d[1], 0x10);
    /* TODO $01FC36: dc.w $ede9  [ED E9] */
    /* TODO $01FC38: dc.w $4d00  [4D 00] */
    /* TODO $01FC3A: dc.w $edf9  [ED F9] */
    /* TODO $01FC3C: dc.w $4d00  [4D 00] */
    M68K_LSR8(g_m68k.d[1], 0x7);
    /* TODO $01FC40: dc.w $4d00  [4D 00] */
    M68K_ROR8(g_m68k.d[1], 0x7);
    /* TODO $01FC44: dc.w $4d00  [4D 00] */
    M68K_LSR8(g_m68k.d[1], g_m68k.d[7]);
    /* TODO $01FC48: dc.w $4d00  [4D 00] */
    M68K_ROR8(g_m68k.d[1], g_m68k.d[7]);
    /* TODO $01FC4C: dc.w $4d00  [4D 00] */
    M68K_LSR16(g_m68k.d[1], 0x7);
    /* TODO $01FC50: dc.w $4d00  [4D 00] */
    M68K_ROR16(g_m68k.d[1], 0x7);
    /* TODO $01FC54: dc.w $4d00  [4D 00] */
    /* TODO $01FC56: roxr.w #$7, d6  [EE 56] */
    /* TODO $01FC58: dc.w $4d03  [4D 03] */
    M68K_ASR16(g_m68k.d[6], 0x7);
    /* TODO $01FC5C: dc.w $4d03  [4D 03] */
    /* TODO $01FC5E: roxr.l #$7, d6  [EE 36] */
    /* TODO $01FC60: dc.w $4d03  [4D 03] */
    M68K_ASR8(g_m68k.d[6], g_m68k.d[7]);
    /* TODO $01FC64: dc.w $4d03  [4D 03] */
    /* TODO $01FC66: roxr.b #$7, d6  [EE 16] */
    /* TODO $01FC68: dc.w $4d03  [4D 03] */
    M68K_ASR8(g_m68k.d[6], 0x7);
    /* TODO $01FC6C: dc.w $4d03  [4D 03] */
    /* TODO $01FC6E: dc.w $edf6  [ED F6] */
    /* TODO $01FC70: dc.w $4d03  [4D 03] */
    /* WARNING: function did not end with RTS */
}
