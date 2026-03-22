/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $077BA6 - $077D5A */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

/* $077BA6-$077BB6  (5 instructions, 16 bytes) */
void jt_077BA6(void) {
    M68K_OR8(g_m68k.d[0], 0x4e);
    M68K_AND16(g_m68k.d[0], bus_read16(0x00004E));
    M68K_LSR8(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0xb);
    M68K_AND32(g_m68k.d[4], _postinc32(0));
    /* WARNING: function did not end with RTS */
}

/* $077BCE-$077BD6  (2 instructions, 8 bytes) */
void jt_077BCE(void) {
    M68K_OR16(g_m68k.d[2], 0x2820);
    M68K_OR16(g_m68k.d[2], 0x3858);
    /* WARNING: function did not end with RTS */
}

/* $077BDC-$077BE0  (1 instructions, 4 bytes) */
void jt_077BDC(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $077BDE-$077BE4  (2 instructions, 6 bytes) */
void jt_077BDE(void) {
    M68K_OR8(g_m68k.d[0], 0xd6);
    g_m68k.a[4] = _predec32(0);
    /* WARNING: function did not end with RTS */
}

/* $077BEA-$077BEE  (1 instructions, 4 bytes) */
void jt_077BEA(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $077BEC-$077BF0  (1 instructions, 4 bytes) */
void jt_077BEC(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $077BEE-$077BF2  (1 instructions, 4 bytes) */
void jt_077BEE(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $077BF0-$077BF6  (2 instructions, 6 bytes) */
void jt_077BF0(void) {
    M68K_OR8(g_m68k.d[0], 0xd8);
    M68K_SUB16(g_m68k.d[0], bus_read16(g_m68k.a[0]));
    /* WARNING: function did not end with RTS */
}

/* $077BFC-$077C00  (1 instructions, 4 bytes) */
void jt_077BFC(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $077BFE-$077C02  (1 instructions, 4 bytes) */
void jt_077BFE(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $077C00-$077C04  (1 instructions, 4 bytes) */
void jt_077C00(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $077C02-$077C06  (1 instructions, 4 bytes) */
void jt_077C02(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $077C04-$077C08  (1 instructions, 4 bytes) */
void jt_077C04(void) {
    M68K_OR8(g_m68k.d[0], 0x24);
    /* WARNING: function did not end with RTS */
}

/* $077C06-$077C1A  (6 instructions, 20 bytes) */
void jt_077C06(void) {
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x60); bus_write8(_ea, _tmp); }
    M68K_SUB16(g_m68k.d[4], _predec16(0));
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x68); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x68); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x20); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x1);
    /* WARNING: function did not end with RTS */
}

/* $077C18-$077C28  (4 instructions, 16 bytes) */
void jt_077C18(void) {
    M68K_OR8(g_m68k.d[1], 0x58);
    M68K_OR8(g_m68k.d[2], 0x38);
    M68K_OR8(g_m68k.d[3], 0x68);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $077C26-$077C2A  (1 instructions, 4 bytes) */
void jt_077C26(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $077C28-$077C2C  (1 instructions, 4 bytes) */
void jt_077C28(void) {
    M68K_OR8(g_m68k.d[0], 0x1e);
    /* WARNING: function did not end with RTS */
}

/* $077C2A-$077C36  (4 instructions, 12 bytes) */
void jt_077C2A(void) {
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x98); bus_write8(_ea, _tmp); }
    M68K_AND32(g_m68k.d[4], _postinc32(0));
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xc8); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $077C34-$077C38  (1 instructions, 4 bytes) */
void jt_077C34(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $077C36-$077C3A  (1 instructions, 4 bytes) */
void jt_077C36(void) {
    M68K_OR8(g_m68k.d[0], 0x1e);
    /* WARNING: function did not end with RTS */
}

/* $077C38-$077C44  (4 instructions, 12 bytes) */
void jt_077C38(void) {
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x98); bus_write8(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(_postinc8(0)); bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xd0); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $077C42-$077C46  (1 instructions, 4 bytes) */
void jt_077C42(void) {
    M68K_OR8(g_m68k.d[0], 0xa5);
    /* WARNING: function did not end with RTS */
}

/* $077C44-$077C50  (5 instructions, 12 bytes) */
void jt_077C44(void) {
    { uint32_t _ea = g_m68k.a[5]; uint32_t _tmp = bus_read32(_ea); M68K_OR32(_tmp, 0xb00000a8); bus_write32(_ea, _tmp); }
    M68K_CMP8(g_m68k.d[0], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[0] + 0xa6); uint32_t _tmp = bus_read32(_ea); M68K_OR32(_tmp, 0x88580000); bus_write32(_ea, _tmp); }
    M68K_OR16(g_m68k.d[4], _postinc16(0));
    M68K_OR8(g_m68k.d[0], 0xa6);
    /* WARNING: function did not end with RTS */
}

/* $077C4E-$077C5E  (6 instructions, 16 bytes) */
void jt_077C4E(void) {
    { uint32_t _ea = g_m68k.a[6]; uint32_t _tmp = bus_read32(_ea); M68K_OR32(_tmp, 0x100000a7); bus_write32(_ea, _tmp); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[7]; uint32_t _tmp = bus_read32(_ea); M68K_OR32(_tmp, 0x600000a9); bus_write32(_ea, _tmp); }
    { func_table_call(0x077CFF); return; }
    g_m68k.d[4] = (uint32_t)(int32_t)(int8_t)(0x58); M68K_TST32(g_m68k.d[4]);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $077C5C-$077C62  (2 instructions, 6 bytes) */
void jt_077C5C(void) {
    M68K_OR8(g_m68k.d[0], 0xd8);
    M68K_SUB16(g_m68k.d[0], bus_read16(g_m68k.a[0]));
    /* WARNING: function did not end with RTS */
}

/* $077C68-$077C6C  (1 instructions, 4 bytes) */
void jt_077C68(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $077C6A-$077C76  (3 instructions, 12 bytes) */
void jt_077C6A(void) {
    M68K_OR8(g_m68k.d[0], 0xd8);
    M68K_ADD16(g_m68k.d[0], bus_read16(g_m68k.a[0]));
    { uint32_t _ea = (g_m68k.a[2] + 0x30 + (int16_t)(uint16_t)g_m68k.d[0]); uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x10); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $077C88-$077C8E  (1 instructions, 6 bytes) */
void jt_077C88(void) {
    { uint32_t _ea = (g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0]); uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x90); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $077C8E-$077C9C  (3 instructions, 14 bytes) */
void jt_077C8E(void) {
    { uint32_t _ea = (g_m68k.a[0] + 0x32 + (int16_t)(uint16_t)g_m68k.d[0]); uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x8); bus_write8(_ea, _tmp); }
    if (M68K_CC_VC) { func_table_call(0x077CCE); return; }
    { uint32_t _ea = 0x000000; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x68); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $077C9C-$077CA0  (1 instructions, 4 bytes) */
void jt_077C9C(void) {
    M68K_OR16(g_m68k.d[2], 0xe0c0);
    /* WARNING: function did not end with RTS */
}

/* $077CA6-$077CC2  (8 instructions, 28 bytes) */
void jt_077CA6(void) {
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xf0); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0xcc);
    M68K_ADD8(g_m68k.d[4], bus_read8(g_m68k.a[0] + (-0x2b) + (int16_t)(uint16_t)g_m68k.d[0]));
    M68K_ADD32(g_m68k.d[0], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xe8); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0xd5);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[0], _mv); M68K_TST16(_mv); }
    M68K_OR8(g_m68k.d[0], 0x24);
    /* WARNING: function did not end with RTS */
}

/* $077CC0-$077CD2  (5 instructions, 18 bytes) */
void jt_077CC0(void) {
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x20); bus_write8(_ea, _tmp); }
    /* TODO $077CC2: dc.w $f820  [F8 20] */
    M68K_OR8(g_m68k.d[0], 0x4e);
    { uint32_t _ea = 0x0028E0; uint16_t _tmp = bus_read16(_ea); M68K_OR16(_tmp, 0x42); bus_write16(_ea, _tmp); }
loc_077CCE:
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $077CD0-$077CD4  (1 instructions, 4 bytes) */
void jt_077CD0(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $077CD2-$077CD6  (1 instructions, 4 bytes) */
void jt_077CD2(void) {
    M68K_OR8(g_m68k.d[0], 0x1c);
    /* WARNING: function did not end with RTS */
}

/* $077CD4-$077CEC  (8 instructions, 24 bytes) */
void jt_077CD4(void) {
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x70); bus_write8(_ea, _tmp); }
    g_m68k.a[0] = (uint32_t)(int32_t)(int16_t)(uint16_t)(bus_read16(g_m68k.a[0] + 0x1e + (int16_t)(uint16_t)g_m68k.d[0]));
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x60); bus_write8(_ea, _tmp); }
    g_m68k.d[0] = (uint32_t)(int32_t)(int8_t)(0x60); M68K_TST32(g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x58); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x80); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x68); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x22);
    /* WARNING: function did not end with RTS */
}

/* $077CEA-$077CFE  (6 instructions, 20 bytes) */
void jt_077CEA(void) {
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x60); bus_write8(_ea, _tmp); }
    g_m68k.a[4] = _predec32(0);
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x68); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x68); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x78); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $077CFC-$077D00  (1 instructions, 4 bytes) */
void jt_077CFC(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $077CFE-$077D02  (1 instructions, 4 bytes) */
void jt_077CFE(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $077D00-$077D04  (1 instructions, 4 bytes) */
void jt_077D00(void) {
    M68K_OR8(g_m68k.d[0], 0x42);
    /* WARNING: function did not end with RTS */
}

/* $077D02-$077D0A  (3 instructions, 8 bytes) */
void jt_077D02(void) {
    M68K_OR16(g_m68k.d[2], 0x48f0);
    { uint32_t _addr = /* UNHANDLED_ADDR: #$0 */ 0; }
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $077D08-$077D0C  (1 instructions, 4 bytes) */
void jt_077D08(void) {
    M68K_OR8(g_m68k.d[0], 0x42);
    /* WARNING: function did not end with RTS */
}

/* $077D0A-$077D16  (5 instructions, 12 bytes) */
void jt_077D0A(void) {
    M68K_OR16(g_m68k.d[2], 0x50c8);
    /* TODO $077D0C: dbt d0, $77d50  [50 C8 00 42] */
    M68K_OR16(g_m68k.d[2], 0x50f0);
    bus_write8((g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0]), M68K_CC_T ? 0xFF : 0x00);
    M68K_OR8(g_m68k.d[0], 0x42);
    /* WARNING: function did not end with RTS */
}

/* $077D14-$077D18  (2 instructions, 4 bytes) */
void jt_077D14(void) {
    M68K_OR16(g_m68k.d[2], 0xe018);
    M68K_ROR8(g_m68k.d[0], 0x8);
    /* WARNING: function did not end with RTS */
}

/* $077D1E-$077D26  (2 instructions, 8 bytes) */
void jt_077D1E(void) {
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x8); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x20);
    /* WARNING: function did not end with RTS */
}

/* $077D24-$077D34  (5 instructions, 16 bytes) */
void jt_077D24(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x10); bus_write8(_ea, _tmp); }
    g_m68k.d[0] = bus_read32(g_m68k.a[0]); M68K_TST32((uint32_t)g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x18); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x28); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $077D32-$077D36  (1 instructions, 4 bytes) */
void jt_077D32(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $077D34-$077D42  (4 instructions, 14 bytes) */
void jt_077D34(void) {
    M68K_OR8(g_m68k.d[0], 0x4e);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(_predec16(0))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_OR16(g_m68k.d[2], 0x1060);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $077D40-$077D44  (1 instructions, 4 bytes) */
void jt_077D40(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $077D42-$077D54  (5 instructions, 18 bytes) */
void jt_077D42(void) {
    M68K_OR8(g_m68k.d[0], 0xd5);
    M68K_ADD16(g_m68k.d[0], bus_read16(g_m68k.a[0] + 0x2a + (int16_t)(uint16_t)g_m68k.d[0]));
    { uint32_t _mv = (uint32_t)(bus_read32(g_m68k.a[0] + 0x26 + (int16_t)(uint16_t)g_m68k.d[0])); bus_write32(g_m68k.a[0], _mv); g_m68k.a[0] += 4; M68K_TST32(_mv); }
    { uint16_t _mv = (uint16_t)(bus_read16(0x000000)); bus_write16(g_m68k.a[0], _mv); g_m68k.a[0] += 2; M68K_TST16(_mv); }
loc_077D50:
    M68K_OR8(g_m68k.d[0], 0x20);
    /* WARNING: function did not end with RTS */
}

/* $077D52-$077D5A  (3 instructions, 8 bytes) */
void jt_077D52(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xf8); bus_write8(_ea, _tmp); }
    /* TODO $077D54: bftst $0.w{0:32}  [E8 F8 00 00 00 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}
