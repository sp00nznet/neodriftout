/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $077CFE - $077E8E */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

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

/* $077D58-$077D5C  (1 instructions, 4 bytes) */
void jt_077D58(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $077D5A-$077D5E  (1 instructions, 4 bytes) */
void jt_077D5A(void) {
    M68K_OR8(g_m68k.d[0], 0x42);
    /* WARNING: function did not end with RTS */
}

/* $077D5C-$077D68  (4 instructions, 12 bytes) */
void jt_077D5C(void) {
    M68K_OR16(g_m68k.d[2], 0xb820);
    M68K_CMP8(g_m68k.d[4], _predec8(0));
    M68K_OR16(g_m68k.d[2], 0xe810);
    M68K_OR8(g_m68k.d[0], 0x42);
    /* WARNING: function did not end with RTS */
}

/* $077D66-$077D6E  (3 instructions, 8 bytes) */
void jt_077D66(void) {
    M68K_OR16(g_m68k.d[2], 0x1800);
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFFFF00u) | ((uint8_t)(g_m68k.d[0])); M68K_TST8((uint8_t)g_m68k.d[4]);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $077D6C-$077D70  (1 instructions, 4 bytes) */
void jt_077D6C(void) {
    M68K_OR8(g_m68k.d[0], 0x42);
    /* WARNING: function did not end with RTS */
}

/* $077D6E-$077D7A  (4 instructions, 12 bytes) */
void jt_077D6E(void) {
    M68K_OR16(g_m68k.d[2], 0x5018);
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, 0x8); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[2], 0x5040);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $077D78-$077D7C  (1 instructions, 4 bytes) */
void jt_077D78(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $077D7A-$077D80  (2 instructions, 6 bytes) */
void jt_077D7A(void) {
    M68K_OR8(g_m68k.d[0], 0xd8);
    M68K_SUB16(g_m68k.d[0], bus_read16(g_m68k.a[0]));
    /* WARNING: function did not end with RTS */
}

/* $077D86-$077D94  (4 instructions, 14 bytes) */
void jt_077D86(void) {
    M68K_OR8(g_m68k.d[0], 0xd6);
    M68K_BTST(bus_read8(g_m68k.a[0]), 0xd7);
    M68K_ADD8(g_m68k.d[0], 0x8);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $077D92-$077D96  (1 instructions, 4 bytes) */
void jt_077D92(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $077D94-$077D98  (1 instructions, 4 bytes) */
void jt_077D94(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $077D96-$077D9A  (1 instructions, 4 bytes) */
void jt_077D96(void) {
    M68K_OR8(g_m68k.d[0], 0x1c);
    /* WARNING: function did not end with RTS */
}

/* $077D98-$077DA8  (5 instructions, 16 bytes) */
void jt_077D98(void) {
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x58); bus_write8(_ea, _tmp); }
    { func_table_call(0x077DF4); return; }
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x68); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x28); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x26);
    /* WARNING: function did not end with RTS */
}

/* $077DA6-$077DBA  (6 instructions, 20 bytes) */
void jt_077DA6(void) {
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x60); bus_write8(_ea, _tmp); }
    M68K_SUB16(g_m68k.d[0], _predec16(0));
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x58); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x28); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x18); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $077DB8-$077DBC  (1 instructions, 4 bytes) */
void jt_077DB8(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $077DBA-$077DBE  (1 instructions, 4 bytes) */
void jt_077DBA(void) {
    M68K_OR8(g_m68k.d[0], 0x42);
    /* WARNING: function did not end with RTS */
}

/* $077DBC-$077DC8  (4 instructions, 12 bytes) */
void jt_077DBC(void) {
    M68K_OR16(g_m68k.d[2], 0xe898);
    M68K_ROR32(g_m68k.d[0], 0x4);
    M68K_OR16(g_m68k.d[2], 0xb888);
    M68K_OR8(g_m68k.d[0], 0x42);
    /* WARNING: function did not end with RTS */
}

/* $077DC6-$077DD6  (5 instructions, 16 bytes) */
void jt_077DC6(void) {
    M68K_OR16(g_m68k.d[2], 0x48b8);
    { uint32_t _addr = 0x0018A8; bus_write16(_addr, g_m68k.d[1]); _addr += 2; bus_write16(_addr, g_m68k.d[6]); _addr += 2; }
    M68K_OR16(g_m68k.d[2], 0x18a8);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $077DD4-$077DDA  (2 instructions, 6 bytes) */
void jt_077DD4(void) {
    M68K_OR8(g_m68k.d[0], 0xc0);
    bus_write16(g_m68k.a[0], m68k_get_sr());
    /* WARNING: function did not end with RTS */
}

/* $077DE0-$077DE4  (1 instructions, 4 bytes) */
void jt_077DE0(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $077DE2-$077DE8  (2 instructions, 6 bytes) */
void jt_077DE2(void) {
    M68K_OR8(g_m68k.d[0], 0xc6);
    bus_write16(g_m68k.a[0], m68k_get_sr());
    /* WARNING: function did not end with RTS */
}

/* $077DEE-$077DFA  (3 instructions, 12 bytes) */
void jt_077DEE(void) {
    M68K_OR32(g_m68k.d[6], 0x58e00086);
loc_077DF4:
    M68K_CMP32(g_m68k.a[4], (uint32_t)(int32_t)(int16_t)(uint16_t)(g_m68k.d[0]));
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $077DF8-$077DFC  (1 instructions, 4 bytes) */
void jt_077DF8(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $077DFA-$077DFE  (1 instructions, 4 bytes) */
void jt_077DFA(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $077DFC-$077E00  (1 instructions, 4 bytes) */
void jt_077DFC(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $077DFE-$077E02  (1 instructions, 4 bytes) */
void jt_077DFE(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $077E00-$077E04  (1 instructions, 4 bytes) */
void jt_077E00(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $077E02-$077E06  (1 instructions, 4 bytes) */
void jt_077E02(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $077E04-$077E08  (1 instructions, 4 bytes) */
void jt_077E04(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $077E06-$077E0E  (3 instructions, 8 bytes) */
void jt_077E06(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x86);
    /* WARNING: function did not end with RTS */
}

/* $077E0C-$077E1A  (6 instructions, 14 bytes) */
void jt_077E0C(void) {
    M68K_OR32(g_m68k.d[6], 0xf8500086);
    /* TODO $077E0E: dc.w $f850  [F8 50] */
    M68K_OR32(g_m68k.d[6], 0x38900086);
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[0])); bus_write16(g_m68k.a[4], _mv); M68K_TST16(_mv); }
    M68K_OR32(g_m68k.d[6], 0x98700000);
    M68K_SUB16(g_m68k.d[4], bus_read16(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0]));
    /* WARNING: function did not end with RTS */
}

/* $077E3A-$077E48  (4 instructions, 14 bytes) */
void jt_077E3A(void) {
    M68K_OR8(g_m68k.d[0], 0xca);
    { uint32_t _ea = (g_m68k.a[0] + 0xc9); uint8_t _tmp = bus_read8(_ea); M68K_NEGX8(_tmp); bus_write8(_ea, _tmp); }
    M68K_AND8(g_m68k.d[4], bus_read8(g_m68k.a[0] + 0xc7));
    /* TODO $077E46: dc.w $f070  [F0 70] */
    /* WARNING: function did not end with RTS */
}

/* $077E6A-$077E82  (6 instructions, 24 bytes) */
void jt_077E6A(void) {
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x88); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x90); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x88); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xa0); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xa0); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x20);
    /* WARNING: function did not end with RTS */
}

/* $077E80-$077E88  (3 instructions, 8 bytes) */
void jt_077E80(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x98); bus_write8(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(_postinc16(0)); bus_write16(g_m68k.a[4], _mv); M68K_TST16(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $077E86-$077E8A  (1 instructions, 4 bytes) */
void jt_077E86(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $077E88-$077E8C  (1 instructions, 4 bytes) */
void jt_077E88(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $077E8A-$077E8E  (1 instructions, 4 bytes) */
void jt_077E8A(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}
