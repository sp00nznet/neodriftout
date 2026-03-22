/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $0FB52A - $0FB6E2 */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

/* $0FB52A-$0FB52E  (1 instructions, 4 bytes) */
void jt_0FB52A(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0FB52C-$0FB530  (1 instructions, 4 bytes) */
void jt_0FB52C(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0FB52E-$0FB532  (1 instructions, 4 bytes) */
void jt_0FB52E(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0FB530-$0FB534  (1 instructions, 4 bytes) */
void jt_0FB530(void) {
    M68K_OR8(g_m68k.d[0], 0x6);
    /* WARNING: function did not end with RTS */
}

/* $0FB532-$0FB53A  (2 instructions, 8 bytes) */
void jt_0FB532(void) {
    M68K_OR8(g_m68k.d[6], 0xf8);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0FB538-$0FB53C  (1 instructions, 4 bytes) */
void jt_0FB538(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0FB53A-$0FB53E  (1 instructions, 4 bytes) */
void jt_0FB53A(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0FB53C-$0FB540  (1 instructions, 4 bytes) */
void jt_0FB53C(void) {
    M68K_OR8(g_m68k.d[0], 0x24);
    /* WARNING: function did not end with RTS */
}

/* $0FB53E-$0FB54E  (4 instructions, 16 bytes) */
void jt_0FB53E(void) {
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xf8); bus_write8(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[4] + 0x36 + (int16_t)(uint16_t)g_m68k.d[0]); uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xa0); bus_write8(_ea, _tmp); }
    /* TODO $0FB548: dc.w $f890  [F8 90] */
    M68K_OR8(g_m68k.d[0], 0x30);
    /* WARNING: function did not end with RTS */
}

/* $0FB54C-$0FB558  (5 instructions, 12 bytes) */
void jt_0FB54C(void) {
    { uint32_t _ea = (g_m68k.a[0] + 0x36 + (int16_t)(uint16_t)g_m68k.d[0]); uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x98); bus_write8(_ea, _tmp); }
    { uint8_t _mv = (uint8_t)(_postinc8(0)); bus_write8(g_m68k.a[4], _mv); M68K_TST8(_mv); }
    { uint32_t _ea = (g_m68k.a[6] + 0 + (int16_t)(uint16_t)g_m68k.d[0]); uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x90); bus_write8(_ea, _tmp); }
    { uint16_t _mv = (uint16_t)(bus_read16(g_m68k.a[0])); bus_write16(g_m68k.a[4], _mv); M68K_TST16(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0FB556-$0FB560  (3 instructions, 10 bytes) */
void jt_0FB556(void) {
    M68K_OR8(g_m68k.d[0], 0xba);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x0000BA))); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(_postinc8(0))); M68K_TST8((uint8_t)g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0FB566-$0FB572  (2 instructions, 12 bytes) */
void jt_0FB566(void) {
    { uint32_t _ea = (g_m68k.a[4] + (-0x28) + (int16_t)(uint16_t)g_m68k.a[4]); uint32_t _tmp = bus_read32(_ea); M68K_OR32(_tmp, 0xf05800b4); bus_write32(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0xf6);
    /* WARNING: function did not end with RTS */
}

/* $0FB596-$0FB59C  (2 instructions, 6 bytes) */
void jt_0FB596(void) {
    M68K_OR8(g_m68k.d[0], 0xfa);
    M68K_AND8(g_m68k.d[0], bus_read8(g_m68k.a[0]));
    /* WARNING: function did not end with RTS */
}

/* $0FB5AC-$0FB5B0  (1 instructions, 4 bytes) */
void jt_0FB5AC(void) {
    M68K_OR8(g_m68k.d[0], 0x5);
    /* WARNING: function did not end with RTS */
}

/* $0FB5AE-$0FB5BA  (4 instructions, 12 bytes) */
void jt_0FB5AE(void) {
    M68K_OR8(g_m68k.d[5], 0x48);
    /* TODO $0FB5B0: dc.w $f048  [F0 48] */
    M68K_OR8(g_m68k.d[1], 0x38);
    M68K_OR8(g_m68k.d[0], 0x2c);
    /* WARNING: function did not end with RTS */
}

/* $0FB5B8-$0FB5C6  (4 instructions, 14 bytes) */
void jt_0FB5B8(void) {
    { uint32_t _ea = (g_m68k.a[4] + 0x2d); uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x0); bus_write8(_ea, _tmp); }
    if (M68K_CC_VC) { func_table_call(0x0FB5E9); return; }
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, 0x4); bus_write8(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[2] + 0x0); uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x50); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0FB5C6-$0FB5CA  (1 instructions, 4 bytes) */
void jt_0FB5C6(void) {
    M68K_OR8(g_m68k.d[0], 0x42);
    /* WARNING: function did not end with RTS */
}

/* $0FB5C8-$0FB5D8  (4 instructions, 16 bytes) */
void jt_0FB5C8(void) {
    M68K_OR16(g_m68k.d[2], 0xa898);
    M68K_OR16(g_m68k.d[2], 0xd0e8);
    M68K_OR16(g_m68k.d[2], 0xc050);
    M68K_OR8(g_m68k.d[0], 0x2a);
    /* WARNING: function did not end with RTS */
}

/* $0FB5D6-$0FB5E2  (5 instructions, 12 bytes) */
void jt_0FB5D6(void) {
    { uint32_t _ea = (g_m68k.a[2] + 0x2c); uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x48); bus_write8(_ea, _tmp); }
    M68K_CMP16(g_m68k.d[0], g_m68k.a[0]);
    { uint32_t _ea = (g_m68k.a[4] + 0x0); uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x60); bus_write8(_ea, _tmp); }
    /* TODO $0FB5DC: dc.w $f860  [F8 60] */
    M68K_OR8(g_m68k.d[0], 0x2c);
    /* WARNING: function did not end with RTS */
}

/* $0FB5E0-$0FB5F6  (6 instructions, 22 bytes) */
void jt_0FB5E0(void) {
    { uint32_t _ea = (g_m68k.a[4] + 0x2a); uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x58); bus_write8(_ea, _tmp); }
    g_m68k.a[4] = (uint32_t)(int32_t)(int16_t)(uint16_t)(_predec16(0));
    { uint32_t _ea = (g_m68k.a[0] + 0x26); uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x50); bus_write8(_ea, _tmp); }
    if (M68K_CC_VC) { func_table_call(0x0FB600); return; }
    M68K_OR8(g_m68k.d[0], 0x4e);
    M68K_ADD16(g_m68k.d[0], 0x4);
    /* WARNING: function did not end with RTS */
}

/* $0FB600-$0FB604  (1 instructions, 4 bytes) */
void jt_0FB600(void) {
    M68K_OR8(g_m68k.d[0], 0x6);
    /* WARNING: function did not end with RTS */
}

/* $0FB602-$0FB606  (2 instructions, 4 bytes) */
void jt_0FB602(void) {
    M68K_OR8(g_m68k.d[6], 0xa8);
    M68K_LSR32(g_m68k.d[0], g_m68k.d[4]);
    /* WARNING: function did not end with RTS */
}

/* $0FB60C-$0FB610  (1 instructions, 4 bytes) */
void jt_0FB60C(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0FB60E-$0FB612  (1 instructions, 4 bytes) */
void jt_0FB60E(void) {
    M68K_OR8(g_m68k.d[0], 0x26);
    /* WARNING: function did not end with RTS */
}

/* $0FB610-$0FB618  (4 instructions, 8 bytes) */
void jt_0FB610(void) {
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xb8); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x000022; uint32_t _tmp = bus_read32(_ea); M68K_NEGX32(_tmp); bus_write32(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xe0); bus_write8(_ea, _tmp); }
    /* TODO $0FB616: dc.w $f8e0  [F8 E0] */
    /* WARNING: function did not end with RTS */
}

/* $0FB61E-$0FB622  (1 instructions, 4 bytes) */
void jt_0FB61E(void) {
    M68K_OR8(g_m68k.d[0], 0xb0);
    /* WARNING: function did not end with RTS */
}

/* $0FB620-$0FB630  (5 instructions, 16 bytes) */
void jt_0FB620(void) {
    { uint32_t _ea = (g_m68k.a[0] + 0x60 + (int16_t)(uint16_t)g_m68k.a[4]); uint32_t _tmp = bus_read32(_ea); M68K_OR32(_tmp, 0x604000aa); bus_write32(_ea, _tmp); }
    { func_table_call(0x0FB664); return; }
    { uint32_t _ea = (g_m68k.a[2] + 0x60b8); uint32_t _tmp = bus_read32(_ea); M68K_OR32(_tmp, 0xc06000b1); bus_write32(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[1] + (-0x4e) + (int16_t)(uint16_t)g_m68k.d[0]); uint32_t _tmp = bus_read32(_ea); M68K_OR32(_tmp, 0x60b80000); bus_write32(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0xb2);
    /* WARNING: function did not end with RTS */
}

/* $0FB62E-$0FB642  (3 instructions, 20 bytes) */
void jt_0FB62E(void) {
    { uint32_t _ea = (g_m68k.a[2] + 0x60 + (int16_t)(uint16_t)g_m68k.d[6]); uint32_t _tmp = bus_read32(_ea); M68K_OR32(_tmp, 0xa04000ac); bus_write32(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[3] + (-0x5f48)); uint32_t _tmp = bus_read32(_ea); M68K_OR32(_tmp, 0x206000b3); bus_write32(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0FB640-$0FB644  (1 instructions, 4 bytes) */
void jt_0FB640(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0FB642-$0FB646  (1 instructions, 4 bytes) */
void jt_0FB642(void) {
    M68K_OR8(g_m68k.d[0], 0xf6);
    /* WARNING: function did not end with RTS */
}

/* $0FB656-$0FB65A  (1 instructions, 4 bytes) */
void jt_0FB656(void) {
    M68K_OR8(g_m68k.d[0], 0x42);
    /* WARNING: function did not end with RTS */
}

/* $0FB658-$0FB666  (5 instructions, 14 bytes) */
void jt_0FB658(void) {
    M68K_OR16(g_m68k.d[2], 0xf808);
    /* TODO $0FB65A: dc.w $f808  [F8 08] */
    M68K_OR8(g_m68k.d[0], 0xf6);
    g_m68k.a[0] = (uint32_t)(int32_t)(int16_t)(uint16_t)(bus_read16(g_m68k.a[0]));
loc_0FB664:
    M68K_OR16(g_m68k.d[0], bus_read16(g_m68k.a[0]));
    /* WARNING: function did not end with RTS */
}

/* $0FB670-$0FB674  (1 instructions, 4 bytes) */
void jt_0FB670(void) {
    M68K_OR8(g_m68k.d[0], 0x4e);
    /* WARNING: function did not end with RTS */
}

/* $0FB678-$0FB684  (3 instructions, 12 bytes) */
void jt_0FB678(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xa0); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xf0); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0FB682-$0FB686  (1 instructions, 4 bytes) */
void jt_0FB682(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0FB684-$0FB688  (1 instructions, 4 bytes) */
void jt_0FB684(void) {
    M68K_OR8(g_m68k.d[0], 0x2e);
    /* WARNING: function did not end with RTS */
}

/* $0FB686-$0FB692  (4 instructions, 12 bytes) */
void jt_0FB686(void) {
    { uint32_t _ea = (g_m68k.a[6] + 0x2c); uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xf0); bus_write8(_ea, _tmp); }
    /* TODO $0FB688: bftst -$20(a0, a5.w){0:4}  [E8 F0 00 2C D0 E0] */
    g_m68k.a[0] += (int16_t)(uint16_t)(_predec16(0));
    M68K_OR8(g_m68k.d[0], 0x2a);
    /* WARNING: function did not end with RTS */
}

/* $0FB690-$0FB698  (2 instructions, 8 bytes) */
void jt_0FB690(void) {
    { uint32_t _ea = (g_m68k.a[2] + 0x0); uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xf8); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x000028; uint8_t _b = 1u << ((0x0) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* WARNING: function did not end with RTS */
}

/* $0FB696-$0FB6A2  (5 instructions, 12 bytes) */
void jt_0FB696(void) {
    { uint32_t _ea = (g_m68k.a[0] + 0x2c); uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x18); bus_write8(_ea, _tmp); }
    /* TODO $0FB698: nbcd.b (a0)+  [48 18] */
    { uint32_t _ea = (g_m68k.a[4] + 0x0); uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x78); bus_write8(_ea, _tmp); }
    g_m68k.d[0] = (uint32_t)(int32_t)(int8_t)(0x78); M68K_TST32(g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0FB6A0-$0FB6A4  (1 instructions, 4 bytes) */
void jt_0FB6A0(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0FB6A2-$0FB6A6  (1 instructions, 4 bytes) */
void jt_0FB6A2(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0FB6A4-$0FB6A8  (1 instructions, 4 bytes) */
void jt_0FB6A4(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0FB6A6-$0FB6AA  (1 instructions, 4 bytes) */
void jt_0FB6A6(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0FB6A8-$0FB6AC  (1 instructions, 4 bytes) */
void jt_0FB6A8(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0FB6AA-$0FB6AE  (1 instructions, 4 bytes) */
void jt_0FB6AA(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0FB6AC-$0FB6B2  (2 instructions, 6 bytes) */
void jt_0FB6AC(void) {
    M68K_OR8(g_m68k.d[0], 0x4e);
    M68K_OR32(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0FB6C0-$0FB6CA  (3 instructions, 10 bytes) */
void jt_0FB6C0(void) {
    M68K_OR8(g_m68k.d[0], 0x4e);
    M68K_OR16(g_m68k.d[0], bus_read16(g_m68k.a[0] + 0x4e));
    M68K_OR32(g_m68k.d[0], bus_read32(g_m68k.a[0]));
    /* WARNING: function did not end with RTS */
}

/* $0FB6D4-$0FB6D8  (1 instructions, 4 bytes) */
void jt_0FB6D4(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0FB6D6-$0FB6DA  (1 instructions, 4 bytes) */
void jt_0FB6D6(void) {
    M68K_OR8(g_m68k.d[0], 0x2a);
    /* WARNING: function did not end with RTS */
}

/* $0FB6D8-$0FB6E2  (4 instructions, 10 bytes) */
void jt_0FB6D8(void) {
    { uint32_t _ea = (g_m68k.a[2] + 0x2c); uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x18); bus_write8(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[0], _postinc8(0));
    { uint32_t _ea = (g_m68k.a[4] + 0x0); uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x30); bus_write8(_ea, _tmp); }
    M68K_AND8(g_m68k.d[0], bus_read8(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[0]));
    /* WARNING: function did not end with RTS */
}
