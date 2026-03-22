/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $0F242A - $0F4E56 */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

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

/* $0F488C-$0F4894  (4 instructions, 8 bytes) */
void jt_0F488C(void) {
    /* TODO $0F488C: dc.w $ff16  [FF 16] */
    /* TODO $0F488E: dc.w $ff16  [FF 16] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[6]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F4894-$0F489C  (4 instructions, 8 bytes) */
void jt_0F4894(void) {
    /* TODO $0F4894: dc.w $ff16  [FF 16] */
    /* TODO $0F4896: dc.w $ff16  [FF 16] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[6]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F489C-$0F48A4  (4 instructions, 8 bytes) */
void jt_0F489C(void) {
    /* TODO $0F489C: dc.w $ff16  [FF 16] */
    /* TODO $0F489E: dc.w $ff16  [FF 16] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[6]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F48A4-$0F48BC  (12 instructions, 24 bytes) */
void jt_0F48A4(void) {
    /* TODO $0F48A4: dc.w $ff16  [FF 16] */
    M68K_AND8(g_m68k.d[0], bus_read8(g_m68k.a[6]));
    /* TODO $0F48A8: dc.w $8140  [81 40] */
    M68K_OR8(g_m68k.d[6], bus_read8(g_m68k.a[6]));
    M68K_OR16(g_m68k.d[2], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $0F48B0: dc.w $8740  [87 40] */
    M68K_OR8(g_m68k.d[3], bus_read8(g_m68k.a[6]));
    M68K_OR16(g_m68k.d[5], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    /* TODO $0F48B8: dc.w $8d40  [8D 40] */
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F48BC-$0F48C4  (4 instructions, 8 bytes) */
void jt_0F48BC(void) {
    /* TODO $0F48BC: dc.w $ff16  [FF 16] */
    /* TODO $0F48BE: dc.w $ff16  [FF 16] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[6]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F48C4-$0F48CC  (4 instructions, 8 bytes) */
void jt_0F48C4(void) {
    /* TODO $0F48C4: dc.w $ff16  [FF 16] */
    /* TODO $0F48C6: dc.w $ff16  [FF 16] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[6]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F48CC-$0F48DE  (9 instructions, 18 bytes) */
void jt_0F48CC(void) {
    /* TODO $0F48CC: roxr.b #$7, d6  [EE 16] */
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    /* TODO $0F48D2: dc.w $8540  [85 40] */
    M68K_OR8(g_m68k.d[4], bus_read8(g_m68k.a[6]));
    M68K_OR16(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    /* TODO $0F48DA: dc.w $8b40  [8B 40] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[6]));
    /* WARNING: function did not end with RTS */
}

/* $0F48F0-$0F4902  (9 instructions, 18 bytes) */
void jt_0F48F0(void) {
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    /* TODO $0F48F2: dc.w $8340  [83 40] */
    M68K_OR8(g_m68k.d[5], bus_read8(g_m68k.a[6]));
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* TODO $0F48FA: dc.w $8940  [89 40] */
    M68K_OR8(g_m68k.d[2], bus_read8(g_m68k.a[6]));
    M68K_OR16(g_m68k.d[6], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0F4928-$0F4958  (18 instructions, 48 bytes) */
void jt_0F4928(void) {
    M68K_SUB8(g_m68k.d[0], _postinc8(2));
    /* TODO $0F492A: dc.w $8340  [83 40] */
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[5], _postinc8(2));
    /* TODO $0F4932: dc.w $8940  [89 40] */
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[6], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[2], _postinc8(2));
    /* TODO $0F493A: dc.w $8f40  [8F 40] */
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_SUB16(g_m68k.d[0], g_m68k.d[0]);
    { uint32_t _ea = /* UNHANDLED_ADDR: (a2, invalid.w) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[3], bus_read8(g_m68k.a[2] + 0x40 + (int32_t)g_m68k.a[0]));
    { uint32_t _ea = /* UNHANDLED_ADDR: (a2, invalid.w) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[6], bus_read8(g_m68k.a[2] + 0x40 + (int16_t)(uint16_t)g_m68k.a[0]));
    { uint32_t _ea = /* UNHANDLED_ADDR: (a2, invalid.w) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    M68K_AND8(g_m68k.d[0], bus_read8(g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.a[0]));
    /* WARNING: function did not end with RTS */
}

/* $0F4958-$0F4982  (17 instructions, 42 bytes) */
void jt_0F4958(void) {
    M68K_ROR8(g_m68k.d[2], 0x8);
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[7], _postinc8(2));
    /* TODO $0F495E: dc.w $8540  [85 40] */
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[4], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[4], _postinc8(2));
    /* TODO $0F4966: dc.w $8b40  [8B 40] */
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[7], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[1], _postinc8(2));
    M68K_SUB16(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[2] + 0x40 + (int32_t)g_m68k.a[0]));
    { uint32_t _ea = /* UNHANDLED_ADDR: (a2, invalid.w) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[4], bus_read8(g_m68k.a[2] + 0x40 + (int32_t)g_m68k.a[0]));
    { uint32_t _ea = /* UNHANDLED_ADDR: (a2, invalid.w) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F49D4-$0F49DC  (4 instructions, 8 bytes) */
void jt_0F49D4(void) {
    /* TODO $0F49D4: dc.w $ff13  [FF 13] */
    /* TODO $0F49D6: dc.w $ff13  [FF 13] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[3]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F49DC-$0F49E4  (4 instructions, 8 bytes) */
void jt_0F49DC(void) {
    /* TODO $0F49DC: dc.w $ff13  [FF 13] */
    /* TODO $0F49DE: dc.w $ff13  [FF 13] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[3]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F49E4-$0F49EC  (4 instructions, 8 bytes) */
void jt_0F49E4(void) {
    /* TODO $0F49E4: dc.w $ff13  [FF 13] */
    /* TODO $0F49E6: dc.w $ff13  [FF 13] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[3]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F49EC-$0F49EE  (1 instructions, 2 bytes) */
void jt_0F49EC(void) {
    /* TODO $0F49EC: dc.w $ff13  [FF 13] */
    /* WARNING: function did not end with RTS */
}

/* $0F4A0C-$0F4A14  (4 instructions, 8 bytes) */
void jt_0F4A0C(void) {
    /* TODO $0F4A0C: dc.w $ff16  [FF 16] */
    /* TODO $0F4A0E: dc.w $ff16  [FF 16] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[6]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F4A14-$0F4A1C  (4 instructions, 8 bytes) */
void jt_0F4A14(void) {
    /* TODO $0F4A14: dc.w $ff16  [FF 16] */
    /* TODO $0F4A16: dc.w $ff16  [FF 16] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[6]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F4A1C-$0F4A28  (6 instructions, 12 bytes) */
void jt_0F4A1C(void) {
    /* TODO $0F4A1C: roxr.b #$7, d6  [EE 16] */
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    /* TODO $0F4A22: dc.w $8d40  [8D 40] */
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    { uint32_t _t = g_m68k.d[6]; g_m68k.d[6] = g_m68k.d[0]; g_m68k.d[0] = _t; }
    /* WARNING: function did not end with RTS */
}

/* $0F4A38-$0F4A4A  (9 instructions, 18 bytes) */
void jt_0F4A38(void) {
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    /* TODO $0F4A3A: dc.w $8340  [83 40] */
    M68K_OR8(g_m68k.d[5], bus_read8(g_m68k.a[6]));
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* TODO $0F4A42: dc.w $8940  [89 40] */
    M68K_OR8(g_m68k.d[2], bus_read8(g_m68k.a[6]));
    M68K_OR16(g_m68k.d[6], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0F4A70-$0F4A88  (12 instructions, 24 bytes) */
void jt_0F4A70(void) {
    M68K_SUB8(g_m68k.d[0], _postinc8(2));
    /* TODO $0F4A72: dc.w $8340  [83 40] */
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[5], _postinc8(2));
    /* TODO $0F4A7A: dc.w $8940  [89 40] */
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[6], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[2], _postinc8(2));
    /* TODO $0F4A82: dc.w $8f40  [8F 40] */
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_SUB16(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F4AA0-$0F4AB0  (8 instructions, 16 bytes) */
void jt_0F4AA0(void) {
    M68K_ROR8(g_m68k.d[2], 0x8);
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[7], _postinc8(2));
    /* TODO $0F4AA6: dc.w $8d40  [8D 40] */
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    /* TODO $0F4AAA: dc.w $8f40  [8F 40] */
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_CMP16(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F4AFC-$0F4B04  (4 instructions, 8 bytes) */
void jt_0F4AFC(void) {
    /* TODO $0F4AFC: dc.w $ff15  [FF 15] */
    /* TODO $0F4AFE: dc.w $ff15  [FF 15] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[5]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F4B04-$0F4B0C  (4 instructions, 8 bytes) */
void jt_0F4B04(void) {
    /* TODO $0F4B04: dc.w $ff15  [FF 15] */
    /* TODO $0F4B06: dc.w $ff15  [FF 15] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[5]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F4B0C-$0F4B16  (5 instructions, 10 bytes) */
void jt_0F4B0C(void) {
    M68K_CMP8(g_m68k.d[0], bus_read8(g_m68k.a[5]));
    M68K_ADD8(g_m68k.d[0], bus_read8(g_m68k.a[4]));
    /* TODO $0F4B10: dc.w $ff12  [FF 12] */
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F4B82-$0F4B8A  (4 instructions, 8 bytes) */
void jt_0F4B82(void) {
    M68K_OR8(g_m68k.d[2], bus_read8(g_m68k.a[6]));
    M68K_OR16(g_m68k.d[6], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_ADD16(g_m68k.d[6], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F4B9E-$0F4BA2  (2 instructions, 4 bytes) */
void jt_0F4B9E(void) {
    M68K_ASR16(g_m68k.d[0], 0x8);
    /* TODO $0F4BA0: dc.w $ff20  [FF 20] */
    /* WARNING: function did not end with RTS */
}

/* $0F4BCE-$0F4BD2  (2 instructions, 4 bytes) */
void jt_0F4BCE(void) {
    M68K_ASR16(g_m68k.d[0], 0x8);
    /* TODO $0F4BD0: dc.w $ff30  [FF 30] */
    /* WARNING: function did not end with RTS */
}

/* $0F4BD6-$0F4BE0  (5 instructions, 10 bytes) */
void jt_0F4BD6(void) {
    M68K_OR16(g_m68k.d[6], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[2], _postinc8(2));
    /* TODO $0F4BDA: dc.w $8f40  [8F 40] */
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_AND16(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F4C4C-$0F4C50  (2 instructions, 4 bytes) */
void jt_0F4C4C(void) {
    M68K_CMP8(g_m68k.d[0], _postinc8(3));
    M68K_ADD8(g_m68k.d[0], _postinc8(4));
    /* WARNING: function did not end with RTS */
}

/* $0F4C76-$0F4C78  (1 instructions, 2 bytes) */
void jt_0F4C76(void) {
    /* TODO $0F4C76: dc.w $ff20  [FF 20] */
    /* WARNING: function did not end with RTS */
}

/* $0F4C7E-$0F4C80  (1 instructions, 2 bytes) */
void jt_0F4C7E(void) {
    /* TODO $0F4C7E: dc.w $ff20  [FF 20] */
    /* WARNING: function did not end with RTS */
}

/* $0F4C96-$0F4CAE  (12 instructions, 24 bytes) */
void jt_0F4C96(void) {
    /* TODO $0F4C96: dc.w $ff16  [FF 16] */
    M68K_AND8(g_m68k.d[0], bus_read8(g_m68k.a[6]));
    /* TODO $0F4C9A: dc.w $8140  [81 40] */
    M68K_OR8(g_m68k.d[6], bus_read8(g_m68k.a[6]));
    M68K_OR16(g_m68k.d[2], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $0F4CA2: dc.w $8740  [87 40] */
    M68K_OR8(g_m68k.d[3], bus_read8(g_m68k.a[6]));
    M68K_OR16(g_m68k.d[5], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    /* TODO $0F4CAA: dc.w $8d40  [8D 40] */
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F4CAE-$0F4CC0  (9 instructions, 18 bytes) */
void jt_0F4CAE(void) {
    /* TODO $0F4CAE: roxr.b #$7, d6  [EE 16] */
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    /* TODO $0F4CB4: dc.w $8540  [85 40] */
    M68K_OR8(g_m68k.d[4], bus_read8(g_m68k.a[6]));
    M68K_OR16(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    /* TODO $0F4CBC: dc.w $8b40  [8B 40] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[6]));
    /* WARNING: function did not end with RTS */
}

/* $0F4CD2-$0F4CD4  (1 instructions, 2 bytes) */
void jt_0F4CD2(void) {
    M68K_SUBX16(g_m68k.d[7], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F4CEA-$0F4CEC  (1 instructions, 2 bytes) */
void jt_0F4CEA(void) {
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F4CF2-$0F4D04  (9 instructions, 18 bytes) */
void jt_0F4CF2(void) {
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    /* TODO $0F4CF4: dc.w $8340  [83 40] */
    M68K_OR8(g_m68k.d[5], bus_read8(g_m68k.a[6]));
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* TODO $0F4CFC: dc.w $8940  [89 40] */
    M68K_OR8(g_m68k.d[2], bus_read8(g_m68k.a[6]));
    M68K_OR16(g_m68k.d[6], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0F4D1A-$0F4D1C  (1 instructions, 2 bytes) */
void jt_0F4D1A(void) {
    M68K_SUBX16(g_m68k.d[7], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F4D72-$0F4D74  (1 instructions, 2 bytes) */
void jt_0F4D72(void) {
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0F4DB8-$0F4DCA  (9 instructions, 18 bytes) */
void jt_0F4DB8(void) {
    /* TODO $0F4DB8: dc.w $8d40  [8D 40] */
    /* TODO $0F4DBA: sbcd.b d6, d1  [83 06] */
    M68K_OR16(g_m68k.d[5], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[3], g_m68k.d[6]);
    /* TODO $0F4DC0: dc.w $8740  [87 40] */
    /* TODO $0F4DC2: sbcd.b d6, d4  [89 06] */
    M68K_OR16(g_m68k.d[2], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[6], g_m68k.d[6]);
    /* TODO $0F4DC8: dc.w $8140  [81 40] */
    /* WARNING: function did not end with RTS */
}

/* $0F4DD0-$0F4DD2  (1 instructions, 2 bytes) */
void jt_0F4DD0(void) {
    /* TODO $0F4DD0: dc.w $ff32  [FF 32] */
    /* WARNING: function did not end with RTS */
}

/* $0F4DEC-$0F4DFA  (5 instructions, 14 bytes) */
void jt_0F4DEC(void) {
    M68K_OR8(g_m68k.d[7], bus_read8(g_m68k.a[2] + 0x40 + (int16_t)(uint16_t)g_m68k.a[0]));
    /* TODO $0F4DF0: dc.w $ff32  [FF 32] */
    /* TODO $0F4DF2: roxl.b d0, d2  [E1 32] */
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[7], bus_read8(g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.a[0]));
    /* WARNING: function did not end with RTS */
}

/* $0F4DFA-$0F4DFE  (1 instructions, 4 bytes) */
void jt_0F4DFA(void) {
    /* TODO $0F4DFA: sbcd -(a2), -(a1), #$8d40  [83 0A 8D 40] */
    /* WARNING: function did not end with RTS */
}

/* $0F4E14-$0F4E26  (5 instructions, 18 bytes) */
void jt_0F4E14(void) {
    /* TODO $0F4E14: dc.w $8540  [85 40] */
    { uint32_t _ea = (g_m68k.a[2] + 0x40 + (int32_t)g_m68k.a[0]); uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[4], /* UNHANDLED_READ: (a2, invalid.w) */ 0);
    { uint32_t _ea = (g_m68k.a[2] + 0x40 + (int32_t)g_m68k.a[0]); uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[2] + 0x40 + (int16_t)(uint16_t)g_m68k.a[1]));
    /* WARNING: function did not end with RTS */
}

/* $0F4E3E-$0F4E56  (7 instructions, 24 bytes) */
void jt_0F4E3E(void) {
    M68K_SUB16(g_m68k.d[0], g_m68k.d[0]);
    { uint32_t _ea = /* UNHANDLED_ADDR: (a2, invalid.w) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[2], bus_read8(g_m68k.a[2] + 0x40 + (int32_t)g_m68k.a[0]));
    { uint32_t _ea = /* UNHANDLED_ADDR: (a2, invalid.w) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[5], bus_read8(g_m68k.a[2] + 0x40 + (int16_t)(uint16_t)g_m68k.a[0]));
    { uint32_t _ea = /* UNHANDLED_ADDR: (a2, invalid.w) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    /* TODO $0F4E54: dc.w $ff32  [FF 32] */
    /* WARNING: function did not end with RTS */
}
