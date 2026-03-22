/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $077E06 - $077FFA */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

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

/* $077F22-$077F2C  (4 instructions, 10 bytes) */
void jt_077F22(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $077F2A-$077F2E  (1 instructions, 4 bytes) */
void jt_077F2A(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $077F2C-$077F30  (1 instructions, 4 bytes) */
void jt_077F2C(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $077F2E-$077F32  (1 instructions, 4 bytes) */
void jt_077F2E(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $077F30-$077F4A  (7 instructions, 26 bytes) */
void jt_077F30(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x8);
    M68K_DIVU(g_m68k.d[0], bus_read16(0x000000));
    M68K_OR8(g_m68k.d[1], 0x58);
    M68K_OR8(g_m68k.d[2], 0x68);
    M68K_OR8(g_m68k.d[4], 0x70);
    M68K_OR8(g_m68k.d[0], 0x1);
    /* WARNING: function did not end with RTS */
}

/* $077F60-$077F64  (1 instructions, 4 bytes) */
void jt_077F60(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $077F62-$077F66  (1 instructions, 4 bytes) */
void jt_077F62(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $077F64-$077F68  (1 instructions, 4 bytes) */
void jt_077F64(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $077F66-$077F6A  (1 instructions, 4 bytes) */
void jt_077F66(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $077F68-$077F94  (12 instructions, 44 bytes) */
void jt_077F68(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x5a);
    { uint32_t _ea = g_m68k.a[2]; uint16_t _tmp = bus_read16(_ea); M68K_OR16(_tmp, 0xa0f0); bus_write16(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[2]; uint16_t _tmp = bus_read16(_ea); M68K_OR16(_tmp, 0xa0); bus_write16(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[2]; uint16_t _tmp = bus_read16(_ea); M68K_OR16(_tmp, 0x38b0); bus_write16(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[2]; uint16_t _tmp = bus_read16(_ea); M68K_OR16(_tmp, 0x70c8); bus_write16(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[6], 0x8);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $077F9E-$077FA4  (2 instructions, 6 bytes) */
void jt_077F9E(void) {
    M68K_OR8(g_m68k.d[0], 0xd8);
    M68K_OR16(g_m68k.d[0], _predec16(0));
    /* WARNING: function did not end with RTS */
}

/* $077FAA-$077FAE  (1 instructions, 4 bytes) */
void jt_077FAA(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $077FAC-$077FD4  (11 instructions, 40 bytes) */
void jt_077FAC(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x5a);
    { uint32_t _ea = g_m68k.a[2]; uint16_t _tmp = bus_read16(_ea); M68K_OR16(_tmp, 0xa010); bus_write16(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[2]; uint16_t _tmp = bus_read16(_ea); M68K_OR16(_tmp, 0x7038); bus_write16(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[2]; uint16_t _tmp = bus_read16(_ea); M68K_OR16(_tmp, 0x60); bus_write16(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[2]; uint16_t _tmp = bus_read16(_ea); M68K_OR16(_tmp, 0x3850); bus_write16(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $077FD4-$077FD8  (1 instructions, 4 bytes) */
void jt_077FD4(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $077FD6-$077FDA  (1 instructions, 4 bytes) */
void jt_077FD6(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $077FD8-$077FDC  (1 instructions, 4 bytes) */
void jt_077FD8(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $077FDA-$077FDE  (1 instructions, 4 bytes) */
void jt_077FDA(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $077FDC-$077FF6  (12 instructions, 26 bytes) */
void jt_077FDC(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $077FF4-$077FF8  (1 instructions, 4 bytes) */
void jt_077FF4(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $077FF6-$077FFA  (1 instructions, 4 bytes) */
void jt_077FF6(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}
