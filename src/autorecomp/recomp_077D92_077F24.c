/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $077D92 - $077F24 */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

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

/* $077E8C-$077E94  (3 instructions, 8 bytes) */
void jt_077E8C(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0xc6);
    bus_write16(g_m68k.a[0], m68k_get_sr());
    /* WARNING: function did not end with RTS */
}

/* $077EB6-$077EBA  (1 instructions, 4 bytes) */
void jt_077EB6(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $077EB8-$077EBC  (1 instructions, 4 bytes) */
void jt_077EB8(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $077EBA-$077EBE  (1 instructions, 4 bytes) */
void jt_077EBA(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $077EBC-$077EC0  (1 instructions, 4 bytes) */
void jt_077EBC(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $077EBE-$077EC2  (1 instructions, 4 bytes) */
void jt_077EBE(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $077EC0-$077EC4  (1 instructions, 4 bytes) */
void jt_077EC0(void) {
    M68K_OR8(g_m68k.d[0], 0xd3);
    /* WARNING: function did not end with RTS */
}

/* $077ED2-$077ED6  (1 instructions, 4 bytes) */
void jt_077ED2(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $077ED4-$077ED8  (1 instructions, 4 bytes) */
void jt_077ED4(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $077ED6-$077EDA  (1 instructions, 4 bytes) */
void jt_077ED6(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $077ED8-$077EE4  (4 instructions, 12 bytes) */
void jt_077ED8(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0xc9);
    M68K_AND8(g_m68k.d[4], bus_read8(g_m68k.a[0] + 0xc7));
    /* TODO $077EE2: dc.w $f070  [F0 70] */
    /* WARNING: function did not end with RTS */
}

/* $077F00-$077F04  (1 instructions, 4 bytes) */
void jt_077F00(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $077F02-$077F0C  (4 instructions, 10 bytes) */
void jt_077F02(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $077F0A-$077F0E  (1 instructions, 4 bytes) */
void jt_077F0A(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $077F0C-$077F10  (1 instructions, 4 bytes) */
void jt_077F0C(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $077F0E-$077F12  (1 instructions, 4 bytes) */
void jt_077F0E(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $077F10-$077F14  (1 instructions, 4 bytes) */
void jt_077F10(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $077F12-$077F16  (1 instructions, 4 bytes) */
void jt_077F12(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $077F14-$077F18  (1 instructions, 4 bytes) */
void jt_077F14(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $077F16-$077F1A  (1 instructions, 4 bytes) */
void jt_077F16(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $077F18-$077F22  (4 instructions, 10 bytes) */
void jt_077F18(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $077F20-$077F24  (1 instructions, 4 bytes) */
void jt_077F20(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}
