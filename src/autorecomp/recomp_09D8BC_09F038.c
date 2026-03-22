/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $09D8BC - $09F038 */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

/* $09D8BC-$09D8CC  (5 instructions, 16 bytes) */
void jt_09D8BC(void) {
    M68K_OR8(g_m68k.d[3], 0x8);
    M68K_AND16(g_m68k.d[0], _predec16(0));
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    M68K_AND16(g_m68k.d[0], bus_read16(g_m68k.a[4] + (-0x6600)));
    M68K_AND16(g_m68k.d[0], bus_read16(0x972ca));
    /* WARNING: function did not end with RTS */
}

/* $09D920-$09D92C  (3 instructions, 12 bytes) */
void jt_09D920(void) {
    M68K_OR8(g_m68k.d[6], 0x8);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND16(g_m68k.d[0], bus_read16(g_m68k.a[6] + (-0x6600)));
    /* WARNING: function did not end with RTS */
}

/* $09D9E4-$09DA34  (31 instructions, 80 bytes) */
void jt_09D9E4(void) {
    M68K_OR8(g_m68k.d[3], 0x8);
    M68K_AND16(g_m68k.d[0], _predec16(7));
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    M68K_AND16(g_m68k.d[0], bus_read16(g_m68k.a[4] + 0 + (int32_t)g_m68k.a[1] * 2));
    M68K_AND32(g_m68k.d[0], g_m68k.d[3]);
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    M68K_AND32(g_m68k.d[0], bus_read32(g_m68k.a[2]));
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    M68K_AND32(g_m68k.d[0], _predec32(0));
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    M68K_AND32(g_m68k.d[0], bus_read32(g_m68k.a[4] + (-0x6600)));
    M68K_AND32(g_m68k.d[0], bus_read32(0x97402));
    { uint32_t _ea = g_m68k.a[5]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[5]; uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    M68K_AND16(g_m68k.d[0], bus_read16(g_m68k.a[5] + 0 + (int32_t)g_m68k.a[1] * 2));
    M68K_AND32(g_m68k.d[0], g_m68k.d[4]);
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    M68K_AND32(g_m68k.d[0], bus_read32(g_m68k.a[3]));
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    M68K_EOR32(g_m68k.d[7], g_m68k.d[6]);
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    M68K_AND32(g_m68k.d[0], bus_read32(g_m68k.a[5] + (-0x6600)));
    { uint32_t _ea = g_m68k.a[7]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = (g_m68k.a[6] + 0 + (int32_t)g_m68k.a[1] * 2); uint16_t _tmp = bus_read16(_ea); M68K_EOR16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $09DA48-$09DA50  (3 instructions, 8 bytes) */
void jt_09DA48(void) {
    M68K_OR8(g_m68k.d[4], 0x3);
    M68K_MULU(g_m68k.d[0], g_m68k.d[2]);
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $09DA7C-$09DA84  (3 instructions, 8 bytes) */
void jt_09DA7C(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    M68K_MULU(g_m68k.d[0], g_m68k.d[6]);
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $09DAA4-$09DADC  (17 instructions, 56 bytes) */
void jt_09DAA4(void) {
    M68K_OR8(g_m68k.d[6], 0x5);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[7]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[0] + 0 + (int32_t)g_m68k.a[1] * 2); uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[7]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[0] + (-0x6600)); uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[1] + 0 + (int32_t)g_m68k.a[1] * 2); uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = 0x9A00BDC1; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[0]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[1] + (-0x6600)); uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[2] + 0 + (int32_t)g_m68k.a[1] * 2); uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $09DB20-$09DB30  (5 instructions, 16 bytes) */
void jt_09DB20(void) {
    M68K_OR8(g_m68k.d[3], 0x5);
    { uint32_t _ea = g_m68k.a[4]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[5] + (-0x6600)); uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[6] + 0 + (int32_t)g_m68k.a[1] * 2); uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $09DB60-$09DC3C  (74 instructions, 220 bytes) */
void jt_09DB60(void) {
    M68K_OR8(g_m68k.d[6], 0x9);
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    M68K_SUBX8(g_m68k.d[6], g_m68k.d[0]);
    M68K_CMP16(g_m68k.d[6], _postinc16(6));
    M68K_SUBX8(g_m68k.d[6], g_m68k.d[0]);
    M68K_CMP16(g_m68k.d[6], _predec16(1));
    M68K_SUBX8(g_m68k.d[6], g_m68k.d[0]);
    M68K_CMP16(g_m68k.d[6], _predec16(1));
    M68K_SUBX8(g_m68k.d[6], g_m68k.d[0]);
    M68K_CMP16(g_m68k.d[6], _predec16(1));
    M68K_SUBX8(g_m68k.d[6], g_m68k.d[0]);
    M68K_CMP16(g_m68k.d[6], _predec16(1));
    M68K_SUBX8(g_m68k.d[6], g_m68k.d[0]);
    M68K_CMP16(g_m68k.d[6], _predec16(1));
    M68K_SUBX8(g_m68k.d[6], g_m68k.d[0]);
    M68K_CMP16(g_m68k.d[6], _predec16(1));
    M68K_SUBX8(g_m68k.d[6], g_m68k.d[0]);
    M68K_CMP16(g_m68k.d[6], _predec16(2));
    M68K_SUBX8(g_m68k.d[6], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    M68K_SUBX8(g_m68k.d[6], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    M68K_SUBX8(g_m68k.d[6], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP16(g_m68k.d[6], _postinc16(5));
    M68K_SUBX8(g_m68k.d[6], g_m68k.d[0]);
    M68K_CMP16(g_m68k.d[6], _predec16(0));
    M68K_SUBX8(g_m68k.d[6], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    M68K_SUBX8(g_m68k.d[6], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    M68K_SUBX8(g_m68k.d[6], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP16(g_m68k.d[6], _postinc16(5));
    M68K_SUBX8(g_m68k.d[6], g_m68k.d[0]);
    M68K_CMP16(g_m68k.d[6], _predec16(0));
    M68K_SUBX8(g_m68k.d[6], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    M68K_SUBX8(g_m68k.d[6], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    M68K_SUBX8(g_m68k.d[6], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $09DC3C-$09DD30  (82 instructions, 244 bytes) */
void jt_09DC3C(void) {
    M68K_OR8(g_m68k.d[6], 0xa);
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    M68K_SUBX8(g_m68k.d[6], g_m68k.d[0]);
    M68K_CMP16(g_m68k.d[6], _postinc16(6));
    M68K_SUBX8(g_m68k.d[6], g_m68k.d[0]);
    M68K_CMP16(g_m68k.d[6], _predec16(1));
    M68K_SUBX8(g_m68k.d[6], g_m68k.d[0]);
    M68K_CMP16(g_m68k.d[6], _predec16(1));
    M68K_SUBX8(g_m68k.d[6], g_m68k.d[0]);
    M68K_CMP16(g_m68k.d[6], _predec16(1));
    M68K_SUBX8(g_m68k.d[6], g_m68k.d[0]);
    M68K_CMP16(g_m68k.d[6], _predec16(1));
    M68K_SUBX8(g_m68k.d[6], g_m68k.d[0]);
    M68K_CMP16(g_m68k.d[6], _predec16(1));
    M68K_SUBX8(g_m68k.d[6], g_m68k.d[0]);
    M68K_CMP16(g_m68k.d[6], _predec16(1));
    M68K_SUBX8(g_m68k.d[6], g_m68k.d[0]);
    M68K_CMP16(g_m68k.d[6], _predec16(3));
    M68K_SUBX8(g_m68k.d[6], g_m68k.d[0]);
    M68K_CMP16(g_m68k.d[6], _predec16(0));
    M68K_SUBX8(g_m68k.d[6], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP16(g_m68k.d[6], _postinc16(7));
    M68K_SUBX8(g_m68k.d[6], g_m68k.d[0]);
    M68K_CMP16(g_m68k.d[6], _postinc16(4));
    M68K_SUBX8(g_m68k.d[6], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    M68K_SUBX8(g_m68k.d[6], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    M68K_SUBX8(g_m68k.d[6], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    M68K_SUBX8(g_m68k.d[6], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP16(g_m68k.d[6], _postinc16(7));
    M68K_SUBX8(g_m68k.d[6], g_m68k.d[0]);
    M68K_CMP16(g_m68k.d[6], _postinc16(4));
    M68K_SUBX8(g_m68k.d[6], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    M68K_SUBX8(g_m68k.d[6], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    M68K_SUBX8(g_m68k.d[6], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP16(g_m68k.d[6], _postinc16(7));
    M68K_SUBX8(g_m68k.d[6], g_m68k.d[0]);
    M68K_CMP16(g_m68k.d[6], _postinc16(4));
    M68K_SUBX8(g_m68k.d[6], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $09DD30-$09DDD4  (48 instructions, 164 bytes) */
void jt_09DD30(void) {
    M68K_OR8(g_m68k.d[4], 0xa);
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    M68K_SUBX8(g_m68k.d[6], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP16(g_m68k.d[6], _postinc16(5));
    M68K_SUBX8(g_m68k.d[6], g_m68k.d[0]);
    M68K_CMP16(g_m68k.d[6], _predec16(0));
    M68K_SUBX8(g_m68k.d[6], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    M68K_SUBX8(g_m68k.d[6], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    M68K_SUBX8(g_m68k.d[6], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP16(g_m68k.d[6], _postinc16(5));
    M68K_SUBX8(g_m68k.d[6], g_m68k.d[0]);
    M68K_CMP16(g_m68k.d[6], _predec16(0));
    M68K_SUBX8(g_m68k.d[6], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $09DDD4-$09DDFC  (14 instructions, 40 bytes) */
void jt_09DDD4(void) {
    M68K_OR8(g_m68k.d[6], 0x7);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(_predec16(5)));
    M68K_SUB8(g_m68k.d[6], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(0x9c00));
    M68K_MULU(g_m68k.d[0], bus_read16(g_m68k.a[7]));
    M68K_SUB8(g_m68k.d[6], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[6], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[6], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[3] + 0 + (int32_t)g_m68k.a[1] * 4); uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(bus_read16(g_m68k.a[7] + (-0x6400))));
    /* WARNING: function did not end with RTS */
}

/* $09DE80-$09DEC4  (24 instructions, 68 bytes) */
void jt_09DE80(void) {
    M68K_OR8(g_m68k.d[4], 0x4);
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    M68K_SUBX8(g_m68k.d[6], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    M68K_SUBX8(g_m68k.d[6], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP16(g_m68k.d[6], _postinc16(7));
    M68K_SUBX8(g_m68k.d[6], g_m68k.d[0]);
    M68K_CMP16(g_m68k.d[6], _postinc16(4));
    M68K_SUBX8(g_m68k.d[6], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    M68K_SUBX8(g_m68k.d[6], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    M68K_SUBX8(g_m68k.d[6], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULU(g_m68k.d[0], _postinc16(5));
    M68K_SUBX8(g_m68k.d[6], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $09DEC4-$09DED0  (5 instructions, 12 bytes) */
void jt_09DEC4(void) {
    M68K_OR8(g_m68k.d[1], 0x2);
    M68K_CMP16(g_m68k.d[6], _predec16(1));
    M68K_SUBX8(g_m68k.d[6], g_m68k.d[0]);
    M68K_CMP16(g_m68k.d[6], _predec16(4));
    M68K_SUBX8(g_m68k.d[6], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $09DED0-$09DF24  (29 instructions, 84 bytes) */
void jt_09DED0(void) {
    M68K_OR8(g_m68k.d[2], 0xa);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    M68K_SUBX8(g_m68k.d[6], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    M68K_SUBX8(g_m68k.d[6], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP16(g_m68k.d[6], _predec16(6));
    M68K_SUBX8(g_m68k.d[6], g_m68k.d[0]);
    M68K_CMP16(g_m68k.d[6], _predec16(1));
    M68K_SUBX8(g_m68k.d[6], g_m68k.d[0]);
    M68K_CMP16(g_m68k.d[6], _predec16(1));
    M68K_SUBX8(g_m68k.d[6], g_m68k.d[0]);
    M68K_CMP16(g_m68k.d[6], _predec16(1));
    M68K_SUBX8(g_m68k.d[6], g_m68k.d[0]);
    M68K_CMP16(g_m68k.d[6], _predec16(1));
    M68K_SUBX8(g_m68k.d[6], g_m68k.d[0]);
    M68K_CMP16(g_m68k.d[6], _predec16(1));
    M68K_SUBX8(g_m68k.d[6], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $09DF24-$09DFC8  (54 instructions, 164 bytes) */
void jt_09DF24(void) {
    M68K_OR8(g_m68k.d[4], 0xa);
    M68K_CMP16(g_m68k.d[6], _postinc16(4));
    M68K_SUBX8(g_m68k.d[6], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP16(g_m68k.d[6], _postinc16(5));
    M68K_SUBX8(g_m68k.d[6], g_m68k.d[0]);
    M68K_CMP16(g_m68k.d[6], _predec16(0));
    M68K_SUBX8(g_m68k.d[6], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP16(g_m68k.d[6], _postinc16(7));
    M68K_SUBX8(g_m68k.d[6], g_m68k.d[0]);
    M68K_CMP16(g_m68k.d[6], _postinc16(4));
    M68K_SUBX8(g_m68k.d[6], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP16(g_m68k.d[6], _predec16(6));
    M68K_SUBX8(g_m68k.d[6], g_m68k.d[0]);
    M68K_CMP16(g_m68k.d[6], _predec16(1));
    M68K_SUBX8(g_m68k.d[6], g_m68k.d[0]);
    M68K_CMP16(g_m68k.d[6], _predec16(1));
    M68K_SUBX8(g_m68k.d[6], g_m68k.d[0]);
    M68K_CMP16(g_m68k.d[6], _predec16(1));
    M68K_SUBX8(g_m68k.d[6], g_m68k.d[0]);
    M68K_CMP16(g_m68k.d[6], _predec16(1));
    M68K_SUBX8(g_m68k.d[6], g_m68k.d[0]);
    M68K_CMP16(g_m68k.d[6], _predec16(1));
    M68K_SUBX8(g_m68k.d[6], g_m68k.d[0]);
    M68K_CMP16(g_m68k.d[6], _predec16(1));
    M68K_SUBX8(g_m68k.d[6], g_m68k.d[0]);
    M68K_CMP16(g_m68k.d[6], _predec16(4));
    M68K_SUBX8(g_m68k.d[6], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $09DFC8-$09E038  (42 instructions, 112 bytes) */
void jt_09DFC8(void) {
    M68K_OR8(g_m68k.d[3], 0x9);
    M68K_MULU(g_m68k.d[0], _postinc16(6));
    M68K_SUBX8(g_m68k.d[5], g_m68k.d[0]);
    M68K_MULU(g_m68k.d[0], _predec16(1));
    M68K_SUBX8(g_m68k.d[5], g_m68k.d[0]);
    M68K_MULU(g_m68k.d[0], _predec16(4));
    M68K_SUBX8(g_m68k.d[5], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULU(g_m68k.d[0], _postinc16(7));
    M68K_SUBX8(g_m68k.d[5], g_m68k.d[0]);
    M68K_MULU(g_m68k.d[0], _predec16(2));
    M68K_SUBX8(g_m68k.d[5], g_m68k.d[0]);
    M68K_MULU(g_m68k.d[0], _predec16(5));
    M68K_SUBX8(g_m68k.d[5], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULU(g_m68k.d[0], _predec16(0));
    M68K_SUBX8(g_m68k.d[5], g_m68k.d[0]);
    M68K_MULU(g_m68k.d[0], _predec16(3));
    M68K_SUBX8(g_m68k.d[5], g_m68k.d[0]);
    M68K_MULU(g_m68k.d[0], _predec16(6));
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

/* $09E118-$09E120  (2 instructions, 8 bytes) */
void jt_09E118(void) {
    M68K_OR8(g_m68k.d[7], 0x10);
    { uint32_t _ea = (g_m68k.a[4] + 0x4100); uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $09E2DC-$09E2F0  (7 instructions, 20 bytes) */
void jt_09E2DC(void) {
    M68K_OR8(g_m68k.d[7], 0x10);
    { uint32_t _ea = (g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[4]); uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    M68K_ADDX16(g_m68k.d[3], g_m68k.d[1]);
    /* TODO $09E2E6: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[3]; uint16_t _tmp = bus_read16(_ea); M68K_ADDX16(_tmp, _predec16(6)); bus_write16(_ea, _tmp); }
    /* TODO $09E2EA: dc.w $4100  [41 00] */
    { uint32_t _ea = (g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[4]); uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $09E4A0-$09E524  (53 instructions, 132 bytes) */
void jt_09E4A0(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x2); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[4]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[3]); bus_write16(_ea, _tmp); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint32_t _ea = g_m68k.a[4]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[3]); bus_write16(_ea, _tmp); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint32_t _ea = g_m68k.a[5]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[3]); bus_write16(_ea, _tmp); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint32_t _ea = g_m68k.a[5]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[3]); bus_write16(_ea, _tmp); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint32_t _ea = g_m68k.a[6]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[3]); bus_write16(_ea, _tmp); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint32_t _ea = g_m68k.a[6]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[3]); bus_write16(_ea, _tmp); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint32_t _ea = g_m68k.a[7]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[3]); bus_write16(_ea, _tmp); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint32_t _ea = g_m68k.a[7]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[3]); bus_write16(_ea, _tmp); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint32_t _ea = g_m68k.a[0]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[3]); bus_write16(_ea, _tmp); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint32_t _ea = (g_m68k.a[0] + 0x4200); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[3]); bus_write16(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[1]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[3]); bus_write16(_ea, _tmp); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint32_t _ea = (g_m68k.a[1] + 0x4200); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[3]); bus_write16(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[2]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[3]); bus_write16(_ea, _tmp); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint32_t _ea = (g_m68k.a[2] + 0x4200); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[3]); bus_write16(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[3]); bus_write16(_ea, _tmp); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint32_t _ea = (g_m68k.a[3] + 0x4200); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[3]); bus_write16(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[4]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[3]); bus_write16(_ea, _tmp); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint32_t _ea = (g_m68k.a[4] + 0x4200); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[3]); bus_write16(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[5]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[3]); bus_write16(_ea, _tmp); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint32_t _ea = (g_m68k.a[5] + 0x4200); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[3]); bus_write16(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[6]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[3]); bus_write16(_ea, _tmp); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint32_t _ea = (g_m68k.a[6] + 0x4200); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[3]); bus_write16(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[7]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[3]); bus_write16(_ea, _tmp); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint32_t _ea = (g_m68k.a[7] + 0x4200); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[3]); bus_write16(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[0]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[3]); bus_write16(_ea, _tmp); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint32_t _ea = (g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 2); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[3]); bus_write16(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[1]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[3]); bus_write16(_ea, _tmp); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint32_t _ea = (g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 2); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[3]); bus_write16(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[2]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[3]); bus_write16(_ea, _tmp); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint32_t _ea = (g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 2); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[3]); bus_write16(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[3]); bus_write16(_ea, _tmp); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint32_t _ea = (g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 2); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[3]); bus_write16(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $09E524-$09E52C  (2 instructions, 8 bytes) */
void jt_09E524(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x2); bus_write8(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 2); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[3]); bus_write16(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $09E5A8-$09E62C  (61 instructions, 132 bytes) */
void jt_09E5A8(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x2); bus_write8(_ea, _tmp); }
    M68K_ADDX32(g_m68k.d[3], g_m68k.d[5]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint32_t _ea = g_m68k.a[1]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[3]); bus_write32(_ea, _tmp); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_ADDX32(g_m68k.d[3], g_m68k.d[6]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint32_t _ea = g_m68k.a[2]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[3]); bus_write32(_ea, _tmp); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_ADDX32(g_m68k.d[3], g_m68k.d[7]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint32_t _ea = g_m68k.a[3]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[3]); bus_write32(_ea, _tmp); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint32_t _ea = g_m68k.a[3]; uint32_t _tmp = bus_read32(_ea); M68K_ADDX32(_tmp, _predec32(0)); bus_write32(_ea, _tmp); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint32_t _ea = g_m68k.a[4]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[3]); bus_write32(_ea, _tmp); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint32_t _ea = g_m68k.a[3]; uint32_t _tmp = bus_read32(_ea); M68K_ADDX32(_tmp, _predec32(1)); bus_write32(_ea, _tmp); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint32_t _ea = g_m68k.a[5]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[3]); bus_write32(_ea, _tmp); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint32_t _ea = g_m68k.a[3]; uint32_t _tmp = bus_read32(_ea); M68K_ADDX32(_tmp, _predec32(2)); bus_write32(_ea, _tmp); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint32_t _ea = g_m68k.a[6]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[3]); bus_write32(_ea, _tmp); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint32_t _ea = g_m68k.a[3]; uint32_t _tmp = bus_read32(_ea); M68K_ADDX32(_tmp, _predec32(3)); bus_write32(_ea, _tmp); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint32_t _ea = g_m68k.a[7]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[3]); bus_write32(_ea, _tmp); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint32_t _ea = g_m68k.a[3]; uint32_t _tmp = bus_read32(_ea); M68K_ADDX32(_tmp, _predec32(4)); bus_write32(_ea, _tmp); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint32_t _ea = g_m68k.a[0]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[3]); bus_write32(_ea, _tmp); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint32_t _ea = g_m68k.a[3]; uint32_t _tmp = bus_read32(_ea); M68K_ADDX32(_tmp, _predec32(5)); bus_write32(_ea, _tmp); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint32_t _ea = g_m68k.a[1]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[3]); bus_write32(_ea, _tmp); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint32_t _ea = g_m68k.a[3]; uint32_t _tmp = bus_read32(_ea); M68K_ADDX32(_tmp, _predec32(6)); bus_write32(_ea, _tmp); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint32_t _ea = g_m68k.a[2]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[3]); bus_write32(_ea, _tmp); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint32_t _ea = g_m68k.a[6]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[3]); bus_write16(_ea, _tmp); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint32_t _ea = (g_m68k.a[6] + 0x4200); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[3]); bus_write16(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[7]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[3]); bus_write16(_ea, _tmp); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint32_t _ea = (g_m68k.a[7] + 0x4200); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[3]); bus_write16(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[0]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[3]); bus_write16(_ea, _tmp); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint32_t _ea = (g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 2); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[3]); bus_write16(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[1]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[3]); bus_write16(_ea, _tmp); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint32_t _ea = (g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 2); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[3]); bus_write16(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint32_t _tmp = bus_read32(_ea); M68K_ADDX32(_tmp, _predec32(7)); bus_write32(_ea, _tmp); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint32_t _ea = g_m68k.a[3]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[3]); bus_write32(_ea, _tmp); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint32_t _ea = g_m68k.a[0]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[3]); bus_write32(_ea, _tmp); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint32_t _ea = g_m68k.a[4]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[3]); bus_write32(_ea, _tmp); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $09E62C-$09E6A8  (61 instructions, 124 bytes) */
void jt_09E62C(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x2); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[5]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[3]); bus_write32(_ea, _tmp); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint32_t _ea = g_m68k.a[6]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[3]); bus_write32(_ea, _tmp); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint32_t _ea = g_m68k.a[4]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[3]); bus_write16(_ea, _tmp); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint32_t _ea = g_m68k.a[7]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[3]); bus_write32(_ea, _tmp); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint32_t _ea = g_m68k.a[4]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[3]); bus_write16(_ea, _tmp); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint32_t _ea = g_m68k.a[7]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[3]); bus_write32(_ea, _tmp); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint32_t _ea = g_m68k.a[4]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[3]); bus_write16(_ea, _tmp); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint32_t _ea = g_m68k.a[7]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[3]); bus_write32(_ea, _tmp); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint32_t _ea = g_m68k.a[4]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[3]); bus_write16(_ea, _tmp); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint32_t _ea = g_m68k.a[7]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[3]); bus_write32(_ea, _tmp); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint32_t _ea = g_m68k.a[4]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[3]); bus_write16(_ea, _tmp); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint32_t _ea = g_m68k.a[7]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[3]); bus_write32(_ea, _tmp); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint32_t _ea = g_m68k.a[4]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[3]); bus_write16(_ea, _tmp); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint32_t _ea = g_m68k.a[7]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[3]); bus_write32(_ea, _tmp); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint32_t _ea = g_m68k.a[4]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[3]); bus_write16(_ea, _tmp); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint32_t _ea = g_m68k.a[7]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[3]); bus_write32(_ea, _tmp); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint32_t _ea = g_m68k.a[4]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[3]); bus_write16(_ea, _tmp); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint32_t _ea = g_m68k.a[7]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[3]); bus_write32(_ea, _tmp); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint32_t _ea = g_m68k.a[4]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[3]); bus_write16(_ea, _tmp); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint32_t _ea = g_m68k.a[7]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[3]); bus_write32(_ea, _tmp); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint32_t _ea = g_m68k.a[4]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[3]); bus_write16(_ea, _tmp); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint32_t _ea = g_m68k.a[7]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[3]); bus_write32(_ea, _tmp); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint32_t _ea = g_m68k.a[4]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[3]); bus_write16(_ea, _tmp); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint32_t _ea = g_m68k.a[7]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[3]); bus_write32(_ea, _tmp); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint32_t _ea = g_m68k.a[4]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[3]); bus_write16(_ea, _tmp); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint32_t _ea = g_m68k.a[7]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[3]); bus_write32(_ea, _tmp); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint32_t _ea = g_m68k.a[4]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[3]); bus_write16(_ea, _tmp); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint32_t _ea = g_m68k.a[7]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[3]); bus_write32(_ea, _tmp); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint32_t _ea = g_m68k.a[4]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[3]); bus_write16(_ea, _tmp); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint32_t _ea = g_m68k.a[7]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[3]); bus_write32(_ea, _tmp); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $09E704-$09E71A  (5 instructions, 22 bytes) */
void jt_09E704(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    { uint32_t _ea = (g_m68k.a[2] + 0x4c00); uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[3]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = 0x004C00; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[3]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[3] + 0x4c00); uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[3]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = 0x4C000002; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[3]); bus_write32(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $09E718-$09E720  (3 instructions, 8 bytes) */
void jt_09E718(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_OR8(g_m68k.d[2], 0xac);
    { uint32_t _ea = (g_m68k.a[4] + 0x4c00); uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[3]); bus_write32(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $09E72C-$09E730  (1 instructions, 4 bytes) */
void jt_09E72C(void) {
    M68K_OR8(g_m68k.d[3], 0x1);
    /* WARNING: function did not end with RTS */
}

/* $09E73C-$09E740  (1 instructions, 4 bytes) */
void jt_09E73C(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    /* WARNING: function did not end with RTS */
}

/* $09E744-$09E74C  (3 instructions, 8 bytes) */
void jt_09E744(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    g_m68k.a[3] += g_m68k.d[0];
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $09E74C-$09E754  (3 instructions, 8 bytes) */
void jt_09E74C(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    g_m68k.a[3] += g_m68k.d[1];
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $09E754-$09E75C  (3 instructions, 8 bytes) */
void jt_09E754(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    g_m68k.a[3] += g_m68k.d[2];
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $09E75C-$09E764  (3 instructions, 8 bytes) */
void jt_09E75C(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    g_m68k.a[3] += g_m68k.d[3];
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $09E764-$09E76C  (3 instructions, 8 bytes) */
void jt_09E764(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    g_m68k.a[3] += g_m68k.d[4];
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $09E76C-$09E774  (3 instructions, 8 bytes) */
void jt_09E76C(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    g_m68k.a[3] += g_m68k.d[5];
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $09E774-$09E77C  (3 instructions, 8 bytes) */
void jt_09E774(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    g_m68k.a[3] += g_m68k.d[6];
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $09E77C-$09E784  (3 instructions, 8 bytes) */
void jt_09E77C(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    g_m68k.a[3] += g_m68k.d[7];
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $09E784-$09E78C  (3 instructions, 8 bytes) */
void jt_09E784(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    g_m68k.a[3] += g_m68k.a[0];
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $09E78C-$09E804  (41 instructions, 120 bytes) */
void jt_09E78C(void) {
    M68K_OR8(g_m68k.d[7], 0x6);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    g_m68k.a[3] += _postinc32(3);
    /* TODO $09E79A: dc.w $4300  [43 00] */
    g_m68k.a[3] += bus_read32(g_m68k.a[1] + 0x4300);
    g_m68k.a[3] += bus_read32(g_m68k.a[7] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 2);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    g_m68k.a[3] += bus_read32(g_m68k.a[0]);
    /* TODO $09E7AE: dc.w $4300  [43 00] */
    g_m68k.a[3] += _postinc32(4);
    /* TODO $09E7B2: dc.w $4300  [43 00] */
    g_m68k.a[3] += bus_read32(g_m68k.a[2] + 0x4300);
    g_m68k.a[3] += bus_read32(0x004300);
    M68K_ADD8(g_m68k.d[4], g_m68k.d[5]);
    /* TODO $09E7BE: dc.w $4300  [43 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    g_m68k.a[3] += bus_read32(g_m68k.a[1]);
    /* TODO $09E7C6: dc.w $4300  [43 00] */
    g_m68k.a[3] += _postinc32(5);
    /* TODO $09E7CA: dc.w $4300  [43 00] */
    g_m68k.a[3] += bus_read32(g_m68k.a[3] + 0x4300);
    g_m68k.a[3] += bus_read32(0x4300D806);
    /* TODO $09E7D6: dc.w $4300  [43 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    g_m68k.a[3] += bus_read32(g_m68k.a[2]);
    /* TODO $09E7DE: dc.w $4300  [43 00] */
    g_m68k.a[3] += _postinc32(6);
    /* TODO $09E7E2: dc.w $4300  [43 00] */
    g_m68k.a[3] += bus_read32(g_m68k.a[4] + 0x4300);
    g_m68k.a[3] += bus_read32(0xa2aea);
    M68K_ADD8(g_m68k.d[4], g_m68k.d[7]);
    /* TODO $09E7EE: dc.w $4300  [43 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    g_m68k.a[3] += bus_read32(g_m68k.a[3]);
    /* TODO $09E7F6: dc.w $4300  [43 00] */
    g_m68k.a[3] += _postinc32(7);
    /* TODO $09E7FA: dc.w $4300  [43 00] */
    g_m68k.a[3] += bus_read32(g_m68k.a[5] + 0x4300);
    g_m68k.a[3] += /* UNHANDLED_READ: (a16, d4.w * 2) */ 0;
    /* WARNING: function did not end with RTS */
}

/* $09E838-$09E84C  (8 instructions, 20 bytes) */
void jt_09E838(void) {
    M68K_OR8(g_m68k.d[7], 0x6);
    g_m68k.a[3] += g_m68k.a[2];
    /* TODO $09E83E: dc.w $4300  [43 00] */
    g_m68k.a[3] += bus_read32(g_m68k.a[4]);
    /* TODO $09E842: dc.w $4300  [43 00] */
    g_m68k.a[3] += _predec32(2);
    /* TODO $09E846: dc.w $4300  [43 00] */
    g_m68k.a[3] += bus_read32(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 2);
    /* WARNING: function did not end with RTS */
}

/* $09E8E4-$09E8F8  (6 instructions, 20 bytes) */
void jt_09E8E4(void) {
    M68K_OR8(g_m68k.d[7], 0x6);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_ADD8(g_m68k.d[4], _predec8(1));
    M68K_NEG8(g_m68k.d[0]);
    M68K_ADD8(g_m68k.d[4], bus_read8(g_m68k.a[7] + 0x4400));
    /* WARNING: function did not end with RTS */
}

/* $09E990-$09E994  (1 instructions, 4 bytes) */
void jt_09E990(void) {
    M68K_OR8(g_m68k.d[7], 0x6);
    /* WARNING: function did not end with RTS */
}

/* $09EA3C-$09EAB0  (40 instructions, 116 bytes) */
void jt_09EA3C(void) {
    M68K_OR8(g_m68k.d[7], 0x6);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_ADD16(g_m68k.d[4], _postinc16(5));
    /* TODO $09EA4A: dc.w $4500  [45 00] */
    M68K_ADD16(g_m68k.d[4], bus_read16(g_m68k.a[3] + 0x4500));
    M68K_ADD16(g_m68k.d[4], bus_read16(0x45000000));
    /* TODO $09EA56: dc.w $4500  [45 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_ADD16(g_m68k.d[4], bus_read16(g_m68k.a[2]));
    /* TODO $09EA5E: dc.w $4500  [45 00] */
    M68K_ADD16(g_m68k.d[4], _postinc16(6));
    /* TODO $09EA62: dc.w $4500  [45 00] */
    M68K_ADD16(g_m68k.d[4], bus_read16(g_m68k.a[4] + 0x4500));
    M68K_ADD16(g_m68k.d[4], bus_read16(0xa2f6a));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_ADD16(g_m68k.d[4], bus_read16(g_m68k.a[3]));
    /* TODO $09EA76: dc.w $4500  [45 00] */
    M68K_ADD16(g_m68k.d[4], _postinc16(7));
    /* TODO $09EA7A: dc.w $4500  [45 00] */
    M68K_ADD16(g_m68k.d[4], bus_read16(g_m68k.a[5] + 0x4500));
    M68K_ADD16(g_m68k.d[4], /* UNHANDLED_READ: (a16, d4.w * 4) */ 0);
    M68K_ADD32(g_m68k.d[4], g_m68k.d[7]);
    /* TODO $09EA86: dc.w $4500  [45 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_ADD16(g_m68k.d[4], bus_read16(g_m68k.a[4]));
    /* TODO $09EA8E: dc.w $4500  [45 00] */
    M68K_ADD16(g_m68k.d[4], _predec16(0));
    /* TODO $09EA92: dc.w $4500  [45 00] */
    M68K_ADD16(g_m68k.d[4], bus_read16(g_m68k.a[6] + 0x4500));
    M68K_ADD16(g_m68k.d[4], 0x4500);
    M68K_ADD32(g_m68k.d[4], g_m68k.a[0]);
    /* TODO $09EA9E: dc.w $4500  [45 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_ADD16(g_m68k.d[4], bus_read16(g_m68k.a[5]));
    /* TODO $09EAA6: dc.w $4500  [45 00] */
    M68K_ADD16(g_m68k.d[4], _predec16(1));
    /* TODO $09EAAA: dc.w $4500  [45 00] */
    M68K_ADD16(g_m68k.d[4], bus_read16(g_m68k.a[7] + 0x4500));
    /* WARNING: function did not end with RTS */
}

/* $09EAE8-$09EB94  (70 instructions, 172 bytes) */
void jt_09EAE8(void) {
    M68K_OR8(g_m68k.d[7], 0x6);
    M68K_ADD16(g_m68k.d[4], g_m68k.a[5]);
    /* TODO $09EAEE: dc.w $4500  [45 00] */
    M68K_ADD16(g_m68k.d[4], bus_read16(g_m68k.a[6]));
    /* TODO $09EAF2: dc.w $4503  [45 03] */
    M68K_ADD16(g_m68k.d[4], _predec16(4));
    /* TODO $09EAF6: dc.w $4500  [45 00] */
    M68K_ADD16(g_m68k.d[4], bus_read16(g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 4));
    M68K_ADD32(g_m68k.d[4], g_m68k.d[0]);
    /* TODO $09EAFE: dc.w $4500  [45 00] */
    M68K_ADD32(g_m68k.d[4], g_m68k.a[4]);
    /* TODO $09EB02: dc.w $4500  [45 00] */
    M68K_ADD16(g_m68k.d[4], g_m68k.a[6]);
    /* TODO $09EB06: dc.w $4500  [45 00] */
    M68K_ADD16(g_m68k.d[4], bus_read16(g_m68k.a[7]));
    /* TODO $09EB0A: dc.w $4500  [45 00] */
    M68K_ADD16(g_m68k.d[4], _predec16(5));
    /* TODO $09EB0E: dc.w $4500  [45 00] */
    M68K_ADD16(g_m68k.d[4], bus_read16(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 4));
    M68K_ADD32(g_m68k.d[4], g_m68k.d[1]);
    /* TODO $09EB16: dc.w $4500  [45 00] */
    M68K_ADD32(g_m68k.d[4], g_m68k.a[5]);
    /* TODO $09EB1A: dc.w $4500  [45 00] */
    M68K_ADD16(g_m68k.d[4], g_m68k.a[7]);
    /* TODO $09EB1E: dc.w $4500  [45 00] */
    M68K_ADD16(g_m68k.d[4], _postinc16(0));
    /* TODO $09EB22: dc.w $4500  [45 00] */
    M68K_ADD16(g_m68k.d[4], _predec16(6));
    /* TODO $09EB26: dc.w $4500  [45 00] */
    M68K_ADD16(g_m68k.d[4], bus_read16(g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 4));
    M68K_ADD32(g_m68k.d[4], g_m68k.d[2]);
    /* TODO $09EB2E: dc.w $4500  [45 00] */
    M68K_ADD32(g_m68k.d[4], g_m68k.a[6]);
    /* TODO $09EB32: dc.w $4500  [45 00] */
    M68K_ADD16(g_m68k.d[4], bus_read16(g_m68k.a[0]));
    /* TODO $09EB36: dc.w $4500  [45 00] */
    M68K_ADD16(g_m68k.d[4], _postinc16(1));
    /* TODO $09EB3A: dc.w $4500  [45 00] */
    M68K_ADD16(g_m68k.d[4], _predec16(7));
    /* TODO $09EB3E: dc.w $4500  [45 00] */
    M68K_ADD16(g_m68k.d[4], bus_read16(g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 4));
    M68K_ADD32(g_m68k.d[4], g_m68k.d[3]);
    /* TODO $09EB46: dc.w $4500  [45 00] */
    M68K_MULS(g_m68k.d[5], g_m68k.d[4]);
    /* TODO $09EB4A: dc.w $4500  [45 00] */
    M68K_ADD16(g_m68k.d[4], bus_read16(g_m68k.a[1]));
    /* TODO $09EB4E: dc.w $4500  [45 00] */
    M68K_ADD16(g_m68k.d[4], _postinc16(2));
    /* TODO $09EB52: dc.w $4500  [45 00] */
    M68K_ADD16(g_m68k.d[4], bus_read16(g_m68k.a[0] + 0x4500));
    M68K_ADD16(g_m68k.d[4], bus_read16(g_m68k.a[6] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 4));
    M68K_ADD32(g_m68k.d[4], g_m68k.d[4]);
    /* TODO $09EB5E: dc.w $4500  [45 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_ADD16(g_m68k.d[4], _postinc16(3));
    /* TODO $09EB6A: dc.w $4500  [45 00] */
    M68K_ADD16(g_m68k.d[4], bus_read16(g_m68k.a[1] + 0x4500));
    M68K_ADD16(g_m68k.d[4], bus_read16(g_m68k.a[7] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 4));
    M68K_ADD32(g_m68k.d[4], g_m68k.d[5]);
    /* TODO $09EB76: dc.w $4500  [45 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_ADD16(g_m68k.d[4], _postinc16(4));
    /* TODO $09EB82: dc.w $4500  [45 00] */
    M68K_ADD16(g_m68k.d[4], bus_read16(g_m68k.a[2] + 0x4500));
    M68K_ADD16(g_m68k.d[4], bus_read16(0x004500));
    M68K_ADD32(g_m68k.d[4], g_m68k.d[6]);
    /* TODO $09EB8E: dc.w $4500  [45 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $09EB94-$09EC42  (57 instructions, 174 bytes) */
void jt_09EB94(void) {
    M68K_OR8(g_m68k.d[7], 0x6);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_ADD32(g_m68k.d[4], _postinc32(2));
    M68K_NOT8(g_m68k.d[0]);
    M68K_ADD32(g_m68k.d[4], _predec32(5));
    M68K_NOT8(g_m68k.d[0]);
    M68K_ADD32(g_m68k.d[4], bus_read32(g_m68k.a[7] + 0x4600));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_ADD32(g_m68k.d[4], _postinc32(3));
    M68K_NOT8(g_m68k.d[0]);
    M68K_ADD32(g_m68k.d[4], _predec32(6));
    M68K_NOT8(g_m68k.d[0]);
    M68K_ADD32(g_m68k.d[4], bus_read32(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 8));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_EOR16(g_m68k.d[0], g_m68k.d[6]);
    M68K_NOT8(g_m68k.d[0]);
    M68K_ADD32(g_m68k.d[4], _predec32(7));
    M68K_NOT8(g_m68k.d[0]);
    M68K_ADD32(g_m68k.d[4], bus_read32(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 8));
    M68K_ADD32(g_m68k.d[4], bus_read32(0x46000000));
    M68K_NOT8(g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_ADD32(g_m68k.d[4], bus_read32(g_m68k.a[0] + 0x4600));
    M68K_ADD32(g_m68k.d[4], bus_read32(g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 8));
    M68K_ADD32(g_m68k.d[4], bus_read32(0xa31f6));
    M68K_MULU(g_m68k.d[1], _postinc16(6));
    M68K_NOT8(g_m68k.d[3]);
    M68K_ADD32(g_m68k.d[4], bus_read32(g_m68k.a[2]));
    M68K_NOT8(g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_ADD32(g_m68k.d[4], bus_read32(g_m68k.a[1] + 0x4600));
    M68K_ADD32(g_m68k.d[4], bus_read32(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 8));
    M68K_ADD32(g_m68k.d[4], bus_read32(0x9ec0e + (int16_t)(uint16_t)g_m68k.d[4] * 8));
    M68K_ADD32(g_m68k.d[4], g_m68k.a[7]);
    M68K_NOT8(g_m68k.d[0]);
    M68K_ADD32(g_m68k.d[4], bus_read32(g_m68k.a[3]));
    M68K_NOT8(g_m68k.d[0]);
    M68K_ADD32(g_m68k.d[4], _postinc32(4));
    M68K_NOT8(g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_ADD32(g_m68k.d[4], bus_read32(g_m68k.a[0]));
    M68K_NOT8(g_m68k.d[0]);
    M68K_ADD32(g_m68k.d[4], bus_read32(g_m68k.a[4]));
    M68K_NOT8(g_m68k.d[0]);
    M68K_ADD32(g_m68k.d[4], _postinc32(5));
    M68K_NOT8(g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_ADD32(g_m68k.d[4], bus_read32(g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 8));
    M68K_ADD32(g_m68k.d[4], 0x46000007);
    /* WARNING: function did not end with RTS */
}

/* $09EC40-$09EC58  (10 instructions, 24 bytes) */
void jt_09EC40(void) {
    M68K_OR8(g_m68k.d[7], 0x6);
    M68K_OR8(g_m68k.d[6], 0x91);
    M68K_ADD32(g_m68k.d[4], bus_read32(g_m68k.a[1]));
    M68K_NOT8(g_m68k.d[0]);
    M68K_ADD32(g_m68k.d[4], bus_read32(g_m68k.a[5]));
    M68K_NOT8(g_m68k.d[0]);
    M68K_ADD32(g_m68k.d[4], _postinc32(6));
    M68K_NOT8(g_m68k.d[0]);
    M68K_ADD32(g_m68k.d[4], bus_read32(g_m68k.a[2] + 0x4600));
    M68K_ADD32(g_m68k.d[4], bus_read32(g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 8));
    /* WARNING: function did not end with RTS */
}

/* $09ECEC-$09ED50  (35 instructions, 100 bytes) */
void jt_09ECEC(void) {
    M68K_OR8(g_m68k.d[7], 0x6);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    g_m68k.a[4] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[0]));
    /* TODO $09ECFA: dc.w $4700  [47 00] */
    g_m68k.a[4] += (int16_t)(uint16_t)(_postinc16(5));
    /* TODO $09ECFE: dc.w $4700  [47 00] */
    g_m68k.a[4] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[3] + 0x4700));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    g_m68k.a[4] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[1]));
    /* TODO $09ED12: dc.w $4700  [47 00] */
    g_m68k.a[4] += (int16_t)(uint16_t)(_postinc16(6));
    /* TODO $09ED16: dc.w $4700  [47 00] */
    g_m68k.a[4] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[4] + 0x4700));
    g_m68k.a[4] += (int16_t)(uint16_t)(bus_read16(0x47000000));
    /* TODO $09ED22: dc.w $4700  [47 00] */
    g_m68k.a[4] += (int16_t)(uint16_t)(g_m68k.d[6]);
    /* TODO $09ED26: dc.w $4700  [47 00] */
    g_m68k.a[4] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[2]));
    /* TODO $09ED2A: dc.w $4700  [47 00] */
    g_m68k.a[4] += (int16_t)(uint16_t)(_postinc16(7));
    /* TODO $09ED2E: dc.w $4700  [47 00] */
    g_m68k.a[4] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[5] + 0x4700));
    g_m68k.a[4] += (int16_t)(uint16_t)(bus_read16(0xa3436));
    M68K_OR8(g_m68k.d[0], 0x0);
    g_m68k.a[4] += (int16_t)(uint16_t)(g_m68k.d[7]);
    /* TODO $09ED3E: dc.w $4700  [47 00] */
    g_m68k.a[4] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[3]));
    /* TODO $09ED42: dc.w $4700  [47 00] */
    g_m68k.a[4] += (int16_t)(uint16_t)(_predec16(0));
    /* TODO $09ED46: dc.w $4700  [47 00] */
    g_m68k.a[4] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[6] + 0x4700));
    g_m68k.a[4] += (int16_t)(uint16_t)(/* UNHANDLED_READ: (a16, d4.w * 8) */ 0);
    /* WARNING: function did not end with RTS */
}

/* $09ED98-$09EDB0  (9 instructions, 24 bytes) */
void jt_09ED98(void) {
    M68K_OR8(g_m68k.d[7], 0x6);
    g_m68k.a[4] += (int16_t)(uint16_t)(g_m68k.d[1]);
    /* TODO $09ED9E: dc.w $4700  [47 00] */
    g_m68k.a[4] += (int16_t)(uint16_t)(g_m68k.a[1]);
    /* TODO $09EDA2: dc.w $4700  [47 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    g_m68k.a[4] += (int16_t)(uint16_t)(_predec16(4));
    /* TODO $09EDAA: dc.w $4700  [47 00] */
    g_m68k.a[4] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 8));
    /* WARNING: function did not end with RTS */
}

/* $09EE44-$09EE8C  (26 instructions, 72 bytes) */
void jt_09EE44(void) {
    M68K_OR8(g_m68k.d[7], 0x6);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $09EE52: nbcd.b d0  [48 00] */
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $09EE56: nbcd.b d0  [48 00] */
    { uint32_t _ea = (g_m68k.a[0] + 0 + (int32_t)g_m68k.d[4]); uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $09EE6A: nbcd.b d0  [48 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $09EE6E: nbcd.b d0  [48 00] */
    { uint32_t _ea = (g_m68k.a[1] + 0 + (int32_t)g_m68k.d[4]); uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_MULS(g_m68k.d[7], g_m68k.d[1]);
    /* TODO $09EE76: nbcd.b d0  [48 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_ADDX8(_tmp, _predec8(5)); bus_write8(_ea, _tmp); }
    /* TODO $09EE7E: nbcd.b d0  [48 00] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $09EE82: nbcd.b d0  [48 00] */
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $09EE86: nbcd.b d0  [48 00] */
    { uint32_t _ea = (g_m68k.a[2] + 0 + (int32_t)g_m68k.d[4]); uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $09EEF0-$09EF4C  (37 instructions, 92 bytes) */
void jt_09EEF0(void) {
    M68K_OR8(g_m68k.d[7], 0x6);
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_ADDX8(_tmp, _predec8(1)); bus_write8(_ea, _tmp); }
    /* TODO $09EEF6: nbcd.b d0  [48 00] */
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $09EEFA: nbcd.b d0  [48 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $09EEFE: nbcd.b d0  [48 00] */
    { uint32_t _ea = (g_m68k.a[1] + 0x4800); uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[7] + 0 + (int32_t)g_m68k.d[4]); uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_ADDX16(g_m68k.d[4], g_m68k.d[1]);
    /* TODO $09EF0A: nbcd.b d0  [48 00] */
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_ADDX8(_tmp, _predec8(2)); bus_write8(_ea, _tmp); }
    /* TODO $09EF0E: nbcd.b d0  [48 00] */
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $09EF12: nbcd.b d0  [48 00] */
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $09EF16: nbcd.b d0  [48 00] */
    { uint32_t _ea = (g_m68k.a[2] + 0x4800); uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x004800; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_ADDX16(g_m68k.d[4], g_m68k.d[2]);
    /* TODO $09EF22: nbcd.b d0  [48 00] */
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_ADDX8(_tmp, _predec8(3)); bus_write8(_ea, _tmp); }
    /* TODO $09EF26: nbcd.b d0  [48 00] */
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $09EF2A: nbcd.b d0  [48 00] */
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $09EF2E: nbcd.b d0  [48 00] */
    { uint32_t _ea = (g_m68k.a[3] + 0x4800); uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x4800D943; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $09EF3A: nbcd.b d0  [48 00] */
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_ADDX8(_tmp, _predec8(4)); bus_write8(_ea, _tmp); }
    /* TODO $09EF3E: nbcd.b d0  [48 00] */
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $09EF42: nbcd.b d0  [48 00] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $09EF46: nbcd.b d0  [48 00] */
    { uint32_t _ea = (g_m68k.a[4] + 0x4800); uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $09EF9C-$09EFD0  (23 instructions, 52 bytes) */
void jt_09EF9C(void) {
    M68K_OR8(g_m68k.d[3], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[4]; uint16_t _tmp = bus_read16(_ea); M68K_ADDX16(_tmp, _predec16(1)); bus_write16(_ea, _tmp); }
    /* TODO $09EFA6: dc.w $4900  [49 00] */
    { uint32_t _ea = g_m68k.a[4]; uint16_t _tmp = bus_read16(_ea); M68K_ADDX16(_tmp, _predec16(7)); bus_write16(_ea, _tmp); }
    /* TODO $09EFAA: dc.w $4900  [49 00] */
    { uint32_t _ea = g_m68k.a[4]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[4]); bus_write16(_ea, _tmp); }
    /* TODO $09EFAE: dc.w $4900  [49 00] */
    M68K_ADDX16(g_m68k.d[4], g_m68k.d[5]);
    /* TODO $09EFB2: dc.w $4900  [49 00] */
    { uint32_t _ea = g_m68k.a[4]; uint16_t _tmp = bus_read16(_ea); M68K_ADDX16(_tmp, _predec16(2)); bus_write16(_ea, _tmp); }
    /* TODO $09EFB6: dc.w $4900  [49 00] */
    { uint32_t _ea = g_m68k.a[0]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[4]); bus_write16(_ea, _tmp); }
    /* TODO $09EFBA: dc.w $4900  [49 00] */
    { uint32_t _ea = g_m68k.a[5]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[4]); bus_write16(_ea, _tmp); }
    /* TODO $09EFBE: dc.w $4900  [49 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[4]; uint16_t _tmp = bus_read16(_ea); M68K_ADDX16(_tmp, _predec16(3)); bus_write16(_ea, _tmp); }
    /* TODO $09EFC6: dc.w $4900  [49 00] */
    { uint32_t _ea = g_m68k.a[1]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[4]); bus_write16(_ea, _tmp); }
    /* TODO $09EFCA: dc.w $4900  [49 00] */
    { uint32_t _ea = g_m68k.a[6]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[4]); bus_write16(_ea, _tmp); }
    /* TODO $09EFCE: dc.w $4900  [49 00] */
    /* WARNING: function did not end with RTS */
}

/* $09EFD0-$09F004  (22 instructions, 52 bytes) */
void jt_09EFD0(void) {
    M68K_OR8(g_m68k.d[3], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[3]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[4]); bus_write16(_ea, _tmp); }
    /* TODO $09EFDA: dc.w $4900  [49 00] */
    { uint32_t _ea = g_m68k.a[1]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[4]); bus_write16(_ea, _tmp); }
    /* TODO $09EFDE: dc.w $4900  [49 00] */
    { uint32_t _ea = g_m68k.a[6]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[4]); bus_write16(_ea, _tmp); }
    /* TODO $09EFE2: dc.w $4900  [49 00] */
    { uint32_t _ea = g_m68k.a[7]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[4]); bus_write16(_ea, _tmp); }
    /* TODO $09EFE6: dc.w $4900  [49 00] */
    { uint32_t _ea = g_m68k.a[4]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[4]); bus_write16(_ea, _tmp); }
    /* TODO $09EFEA: dc.w $4900  [49 00] */
    { uint32_t _ea = g_m68k.a[2]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[4]); bus_write16(_ea, _tmp); }
    /* TODO $09EFEE: dc.w $4900  [49 00] */
    { uint32_t _ea = g_m68k.a[7]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[4]); bus_write16(_ea, _tmp); }
    /* TODO $09EFF2: dc.w $4900  [49 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[5]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[4]); bus_write16(_ea, _tmp); }
    /* TODO $09EFFA: dc.w $4900  [49 00] */
    { uint32_t _ea = g_m68k.a[3]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[4]); bus_write16(_ea, _tmp); }
    /* TODO $09EFFE: dc.w $4900  [49 00] */
    { uint32_t _ea = (g_m68k.a[0] + 0x4900); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[4]); bus_write16(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $09F004-$09F038  (16 instructions, 52 bytes) */
void jt_09F004(void) {
    M68K_OR8(g_m68k.d[3], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = (g_m68k.a[2] + 0x4900); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[4]); bus_write16(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[4]; uint16_t _tmp = bus_read16(_ea); M68K_ADDX16(_tmp, _predec16(7)); bus_write16(_ea, _tmp); }
    /* TODO $09F012: dc.w $4900  [49 00] */
    { uint32_t _ea = g_m68k.a[4]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[4]); bus_write16(_ea, _tmp); }
    /* TODO $09F016: dc.w $4900  [49 00] */
    M68K_ADDX16(g_m68k.d[4], g_m68k.d[5]);
    /* TODO $09F01A: dc.w $4900  [49 00] */
    { uint32_t _ea = (g_m68k.a[3] + 0x4900); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[4]); bus_write16(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[7] + 0x4900); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[4]); bus_write16(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[2] + 0 + (int32_t)g_m68k.d[4]); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[4]); bus_write16(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = (g_m68k.a[4] + 0x4900); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[4]); bus_write16(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[0] + 0 + (int32_t)g_m68k.d[4]); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[4]); bus_write16(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[3] + 0 + (int32_t)g_m68k.d[4]); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[4]); bus_write16(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}
