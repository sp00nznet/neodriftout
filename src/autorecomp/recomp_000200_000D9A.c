/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $000200 - $000D9A */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

/* $000200-$00020E  (3 instructions, 14 bytes) */
void sub_000200(void) {
    bus_write16(0x100400, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    bus_write16(0x100402, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    return;
}

/* $00020E-$00022C  (5 instructions, 30 bytes) */
void sub_00020E(void) {
    { uint32_t _ea = 0x10FD80; uint8_t _b = 1u << ((0x7) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v & ~ _b); }
    bus_write16(0x100402, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(0x100400, _mv); M68K_TST16(_mv); }
    { uint32_t _ea = 0x10FD80; uint8_t _b = 1u << ((0x7) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    return;
}

/* $00022C-$0002AA  (22 instructions, 126 bytes) */
void vec_irq1_vblank(void) {
    M68K_BTST(bus_read8(0x10FD80), 0x7);
    if (M68K_CC_NE) goto loc_00023E;
    { func_table_call(0xC00438); return; }
loc_00023E:
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[7]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    func_table_call(0x015150);
    { uint16_t _mv = (uint16_t)(0x4); bus_write16(0x3C000C, _mv); M68K_TST16(_mv); }
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); bus_write8(0x300001, _mv); M68K_TST8(_mv); }
    func_table_call(0xC0044A);
    { uint32_t _ea = 0x100402; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x100402))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_CMP16(g_m68k.d[0], bus_read16(0x100400));
    if (M68K_CC_LE) goto loc_0002A4;
    bus_write16(0x100402, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    func_table_call(0x013646);
    func_table_call(0x011F3E);
    func_table_call(0x012188);
    { uint32_t _ea = 0x100404; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0x1); bus_write16(_ea, _tmp); }
    M68K_CMP16(bus_read16(0x100424), 0x0);
    if (M68K_CC_NE) goto loc_0002A4;
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(0x100424, _mv); M68K_TST16(_mv); }
loc_0002A4:
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[7] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return; /* RTE */
}

/* $0002AA-$0002C2  (5 instructions, 24 bytes) */
void vec_irq2_timer(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[7]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[6]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[5]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[4]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[3]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[2]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[1]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    { uint16_t _mv = (uint16_t)(0x2); bus_write16(0x3C000C, _mv); M68K_TST16(_mv); }
    func_table_call(0x0136BA);
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.d[7] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[1] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[2] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[3] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[4] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[5] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[6] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return; /* RTE */
}

/* $0002C2-$0002C8  (1 instructions, 6 bytes) */
void vec_irq3_reset(void) {
    { func_table_call(0x0002AA); return; }
    /* WARNING: function did not end with RTS */
}

/* $000384-$0003A0  (14 instructions, 28 bytes) */
void jt_000384(void) {
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    M68K_SUB32(g_m68k.d[2], g_m68k.a[3]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], _predec32(7));
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0003C0-$0003DE  (13 instructions, 30 bytes) */
void jt_0003C0(void) {
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    M68K_MULS(g_m68k.d[3], bus_read16(g_m68k.a[1] + (-0x3409)));
    /* TODO $0003C8: dc.w $f6d3  [F6 D3] */
    M68K_SUB32(g_m68k.d[5], bus_read32(g_m68k.a[5] + (-0x75) + (int16_t)(uint16_t)g_m68k.a[0]));
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    M68K_SUB32(g_m68k.d[2], g_m68k.a[3]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], _predec32(7));
    /* WARNING: function did not end with RTS */
}

/* $0003DE-$0003EA  (6 instructions, 12 bytes) */
void jt_0003DE(void) {
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    M68K_OR32(g_m68k.d[7], g_m68k.d[2]);
    /* WARNING: function did not end with RTS */
}

/* $0003FC-$00040E  (9 instructions, 18 bytes) */
void jt_0003FC(void) {
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    M68K_OR32(g_m68k.d[0], _predec32(7));
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[2]; uint16_t _tmp = bus_read16(_ea); M68K_NEG16(_tmp); bus_write16(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $00041A-$00041C  (1 instructions, 2 bytes) */
void jt_00041A(void) {
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $000456-$00045C  (3 instructions, 6 bytes) */
void jt_000456(void) {
    { uint16_t _mv = (uint16_t)(_predec16(0)); g_m68k.a[1] -= 2; bus_write16(g_m68k.a[1], _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $000492-$000498  (3 instructions, 6 bytes) */
void jt_000492(void) {
    g_m68k.d[4] = (g_m68k.d[4] & 0xFFFF0000u) | ((uint16_t)(_predec16(0))); M68K_TST16((uint16_t)g_m68k.d[4]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $000642-$000644  (1 instructions, 2 bytes) */
void jt_000642(void) {
    g_m68k.d[0] = _predec32(0); M68K_TST32((uint32_t)g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $00068C-$0006F6  (22 instructions, 106 bytes) */
void vec_bios_user(void) {
    func_table_call(0xa04);
    bus_write32(0x10FDB6, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(0x100424, _mv); M68K_TST16(_mv); }
    bus_write16(0x10041A, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x0009F4);
    func_table_call(0x000200);
    g_m68k.d[0] = (uint32_t)(int32_t)(int8_t)(0x0); M68K_TST32(g_m68k.d[0]);
    func_table_call(0x00020E);
    func_table_call(0x011EEE);
    func_table_call(0x0120E0);
    func_table_call(0x0133FA);
    func_table_call(0x000A26);
    func_table_call(0xC004C8);
    func_table_call(0x000FE8);
    func_table_call(0x9bc);
    g_m68k.d[0] = (uint32_t)(int32_t)(int8_t)(0x0); M68K_TST32(g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(0x10FDAE))); M68K_TST8((uint8_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[0] = bus_read32(0x6f6 + (int16_t)(uint16_t)g_m68k.d[0]);
    { func_table_call(g_m68k.a[0]); return; }
    /* WARNING: function did not end with RTS */
}

/* $000706-$00073E  (9 instructions, 56 bytes) */
void jt_000706(void) {
    { uint32_t _ea = 0x10FD80; uint8_t _b = 1u << ((0x7) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v & ~ _b); }
    { uint8_t _mv = (uint8_t)(0x0); bus_write8(0x10FDAF, _mv); M68K_TST8(_mv); }
    func_table_call(0x9a2);
    func_table_call(0x0010D0);
    func_table_call(0x0011FC);
    func_table_call(0x001112);
    func_table_call(0x001278);
    func_table_call(0x0150FA);
    { func_table_call(0xC00444); return; }
    /* WARNING: function did not end with RTS */
}

/* $00073E-$000744  (1 instructions, 6 bytes) */
void jt_00073E(void) {
    { func_table_call(0xC00444); return; }
    /* WARNING: function did not end with RTS */
}

/* $000744-$000756  (3 instructions, 18 bytes) */
void jt_000744(void) {
    func_table_call(0x966);
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(0x100426, _mv); M68K_TST16(_mv); }
    { func_table_call(0x000B34); return; }
    /* WARNING: function did not end with RTS */
}

/* $000756-$000770  (4 instructions, 26 bytes) */
void jt_000756(void) {
    func_table_call(0x966);
    { uint8_t _mv = (uint8_t)(0x1); bus_write8(0x10FEC5, _mv); M68K_TST8(_mv); }
    { uint16_t _mv = (uint16_t)(0xc); bus_write16(0x100426, _mv); M68K_TST16(_mv); }
    { func_table_call(0x000B34); return; }
    /* WARNING: function did not end with RTS */
}

/* $000834-$00088A  (19 instructions, 86 bytes) */
void jt_000834(void) {
    if (M68K_CC_EQ) goto loc_000850;
    M68K_AND8(g_m68k.d[0], 0x2);
    { uint8_t _mv = (uint8_t)(0x2); bus_write8(0x10FDAF, _mv); M68K_TST8(_mv); }
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(0x1011FC, _mv); M68K_TST16(_mv); }
    goto loc_000874;
loc_000850:
    g_m68k.d[1] = (uint32_t)(int32_t)(int8_t)(0x0); M68K_TST32(g_m68k.d[1]);
    func_table_call(0x946);
    if (M68K_CC_EQ) goto loc_000872;
    M68K_AND8(g_m68k.d[0], 0x1);
    { uint8_t _mv = (uint8_t)(0x2); bus_write8(0x10FDAF, _mv); M68K_TST8(_mv); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(0x1011FC, _mv); M68K_TST16(_mv); }
    goto loc_000874;
loc_000872:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
loc_000874:
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); bus_write8(0x10FDB4, _mv); M68K_TST8(_mv); }
    M68K_TST8(g_m68k.d[0]);
    if (M68K_CC_EQ) goto loc_000888;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x0009F4);
loc_000888:
    return;
}

/* $000946-$00095C  (8 instructions, 22 bytes) */
void sub_000946(void) {
    M68K_BTST(g_m68k.d[0], g_m68k.d[1]);
    if (M68K_CC_EQ) goto loc_000958;
    M68K_TST8(bus_read8(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[1]));
    if (M68K_CC_NE) goto loc_000958;
    { uint8_t _mv = (uint8_t)(0x1); bus_write8(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[1], _mv); M68K_TST8(_mv); }
    goto loc_00095A;
loc_000958:
    M68K_BCLR(g_m68k.d[0], g_m68k.d[1]);
loc_00095A:
    return;
}

/* $000960-$000966  (2 instructions, 6 bytes) */
void jt_000960(void) {
    M68K_OR8(g_m68k.d[1], 0x46);
    return;
}

/* $000966-$0009A2  (10 instructions, 60 bytes) */
void sub_000966(void) {
    { uint32_t _ea = 0x10FD80; uint8_t _b = 1u << ((0x7) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v & ~ _b); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(0x3C0006, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x7); bus_write16(0x3C000C, _mv); M68K_TST16(_mv); }
    m68k_set_sr(0x2000);
    { uint8_t _mv = (uint8_t)(0x1); bus_write8(0x10FDAF, _mv); M68K_TST8(_mv); }
    { uint32_t _ea = 0x10FD80; uint8_t _b = 1u << ((0x7) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x015108);
    func_table_call(0xaa8);
    return;
}

/* $0009A2-$0009BC  (7 instructions, 26 bytes) */
void sub_0009A2(void) {
    g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.a[0]); g_m68k.a[7] -= 4; bus_write32(g_m68k.a[7], g_m68k.d[0]);
    g_m68k.a[0] = 0x100000;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x373)); M68K_TST16((uint16_t)g_m68k.d[0]);
loc_0009B0:
    bus_write8(g_m68k.a[0], 0); g_m68k.a[0] += 1; g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { int16_t _cnt = (int16_t)(uint16_t)g_m68k.d[0]; _cnt--; g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | (uint16_t)_cnt; if (_cnt != -1) { goto loc_0009B0; } }
    g_m68k.d[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4; g_m68k.a[0] = bus_read32(g_m68k.a[7]); g_m68k.a[7] += 4;
    return;
}

/* $0009BC-$0009CE  (3 instructions, 18 bytes) */
void sub_0009BC(void) {
    { uint8_t _mv = (uint8_t)(0x4); bus_write8(0x100416, _mv); M68K_TST8(_mv); }
    { uint8_t _mv = (uint8_t)(0x4); bus_write8(0x100417, _mv); M68K_TST8(_mv); }
    return;
}

/* $0009D6-$0009F4  (9 instructions, 30 bytes) */
void sub_0009D6(void) {
    g_m68k.a[0] = 0x10FDB6;
    bus_write16(g_m68k.a[0], 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP16(g_m68k.d[1], 0x0);
    if (M68K_CC_NE) goto loc_0009EA;
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[1]);
    goto loc_0009EE;
loc_0009EA:
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[1]);
loc_0009EE:
    { uint8_t _mv = (uint8_t)(g_m68k.d[0]); bus_write8(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[1], _mv); M68K_TST8(_mv); }
    return;
}

/* $0009F4-$0009FC  (2 instructions, 8 bytes) */
void sub_0009F4(void) {
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(0x10041C, _mv); M68K_TST16(_mv); }
    return;
}

/* $0009FC-$000A04  (2 instructions, 8 bytes) */
void sub_0009FC(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x10041C))); M68K_TST16((uint16_t)g_m68k.d[0]);
    return;
}

/* $000A04-$000A26  (8 instructions, 34 bytes) */
void sub_000A04(void) {
    g_m68k.a[0] = 0x100374;
loc_000A0A:
    M68K_CMP32(g_m68k.a[0], 0x103610);
    if (M68K_CC_LS) goto loc_000A1C;
    goto loc_000A24;
    goto loc_000A22;
loc_000A1C:
    { uint32_t _mv = (uint32_t)(0x0); bus_write32(g_m68k.a[0], _mv); g_m68k.a[0] += 4; M68K_TST32(_mv); }
loc_000A22:
    goto loc_000A0A;
loc_000A24:
    return;
}

/* $000A26-$000A5A  (11 instructions, 52 bytes) */
void sub_000A26(void) {
    func_table_call(0xC004C2);
    g_m68k.a[0] = 0x3C0002;
    { uint16_t _mv = (uint16_t)(0x20); bus_write16(g_m68k.a[0] + 0x2, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x20)); M68K_TST16((uint16_t)g_m68k.d[0]);
    { uint16_t _mv = (uint16_t)(0x7020); bus_write16(g_m68k.a[0] + (-0x2), _mv); M68K_TST16(_mv); }
    func_table_call(0xa5a);
    func_table_call(0xa5a);
    { uint16_t _mv = (uint16_t)(0x703f); bus_write16(g_m68k.a[0] + (-0x2), _mv); M68K_TST16(_mv); }
    func_table_call(0xa5a);
    func_table_call(0xa5a);
    return;
}

/* $000A5A-$000A8C  (25 instructions, 50 bytes) */
void sub_000A5A(void) {
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[0], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[0], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[0], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[0], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[0], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[0], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[0], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[0], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[0], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[0], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[0], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[0], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[0], _mv); M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $000A8C-$000AA8  (14 instructions, 28 bytes) */
void jt_000A8C(void) {
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[0], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[0], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[0], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[0], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[0], _mv); M68K_TST16(_mv); }
    /* nop */
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(g_m68k.a[0], _mv); M68K_TST16(_mv); }
    /* nop */
    return;
}

/* $000AA8-$000B34  (26 instructions, 140 bytes) */
void sub_000AA8(void) {
    g_m68k.d[0] = (uint32_t)(int32_t)(int8_t)(0x0); M68K_TST32(g_m68k.d[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(0x10FD8A))); M68K_TST8((uint8_t)g_m68k.d[0]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(0x100406, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(0x10FD8B))); M68K_TST8((uint8_t)g_m68k.d[0]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(0x100408, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(0x10FD8C))); M68K_TST8((uint8_t)g_m68k.d[0]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(0x10040A, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(0x10FD8D))); M68K_TST8((uint8_t)g_m68k.d[0]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(0x10040C, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(0x10FD8E))); M68K_TST8((uint8_t)g_m68k.d[0]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(0x10040E, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(0x10FD8F))); M68K_TST8((uint8_t)g_m68k.d[0]);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(0x100410, _mv); M68K_TST16(_mv); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x100406))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_LSL16(g_m68k.d[0], 0x1);
    { uint16_t _mv = (uint16_t)(g_m68k.d[0]); bus_write16(0x1011F8, _mv); M68K_TST16(_mv); }
    M68K_TST8(bus_read8(0x10FD82));
    if (M68K_CC_NE) goto loc_000B14;
    { uint32_t _mv = (uint32_t)(0x100416); bus_write32(0x100412, _mv); M68K_TST32(_mv); }
    goto loc_000B32;
loc_000B14:
    M68K_TST16(bus_read16(0x10FE80));
    if (M68K_CC_NE) goto loc_000B28;
    { uint32_t _mv = (uint32_t)(0xd00034); bus_write32(0x100412, _mv); M68K_TST32(_mv); }
    goto loc_000B32;
loc_000B28:
    { uint32_t _mv = (uint32_t)(0x10fe00); bus_write32(0x100412, _mv); M68K_TST32(_mv); }
loc_000B32:
    return;
}

/* $000B34-$000BBA  (28 instructions, 134 bytes) */
void sub_000B34(void) {
    func_table_call(0x010F96);
    func_table_call(0x014BA8);
    func_table_call(0x001004);
    func_table_call(0xfc8);
    func_table_call(0x0014E8);
    func_table_call(0x0013B4);
    func_table_call(0x00148A);
    func_table_call(0x001340);
    func_table_call(0x0013E6);
    func_table_call(0x0014A6);
loc_000B6E:
    M68K_CMP16(bus_read16(0x100424), 0x0);
    if (M68K_CC_NE) goto loc_000B80;
    func_table_call(0x10b8);
    goto loc_000B6E;
loc_000B80:
    func_table_call(0x1076);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x100426))); M68K_TST16((uint16_t)g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.a[0] = bus_read32(0xbaa + (int16_t)(uint16_t)g_m68k.d[0]);
    func_table_call(g_m68k.a[0]);
    func_table_call(0x0013E6);
    func_table_call(0x0014A6);
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(0x100424, _mv); M68K_TST16(_mv); }
    goto loc_000B6E;
    M68K_OR8(g_m68k.d[0], 0xfa);
    M68K_OR8(g_m68k.d[0], 0xc6);
    M68K_OR8(g_m68k.d[0], 0x34);
    M68K_OR8(g_m68k.d[0], 0x82);
    /* WARNING: function did not end with RTS */
}

/* $000BB8-$000BF6  (16 instructions, 62 bytes) */
void jt_000BB8(void) {
    M68K_BCLR(g_m68k.d[2], g_m68k.d[6]);
    M68K_OR8(g_m68k.d[0], 0x9a);
    M68K_OR8(g_m68k.d[0], 0xc8);
    M68K_OR8(g_m68k.d[0], 0xf6);
    M68K_OR8(g_m68k.d[0], 0x20);
    M68K_OR8(g_m68k.d[0], 0x38);
    M68K_OR8(g_m68k.d[0], 0x6e);
    M68K_OR8(g_m68k.d[0], 0x9c);
    M68K_OR8(g_m68k.d[0], 0xc8);
    M68K_OR8(g_m68k.d[0], 0xe0);
    M68K_OR8(g_m68k.d[0], 0xfc);
    M68K_OR8(g_m68k.d[0], 0x28);
    M68K_OR8(g_m68k.d[0], 0x3e);
    M68K_OR8(g_m68k.d[0], 0x64);
    M68K_OR8(g_m68k.d[0], 0x7c);
    M68K_OR8(g_m68k.d[0], 0x98);
    /* WARNING: function did not end with RTS */
}

/* $000BF4-$000BFA  (2 instructions, 6 bytes) */
void jt_000BF4(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _b = 1u << ((g_m68k.d[7]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v & ~ _b); }
    M68K_OR8(g_m68k.d[0], 0xb0);
    /* WARNING: function did not end with RTS */
}

/* $000BFA-$000C50  (19 instructions, 86 bytes) */
void jt_000BFA(void) {
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(0x101210, _mv); M68K_TST16(_mv); }
    M68K_TST8(bus_read8(0x10FD82));
    if (M68K_CC_EQ) { func_table_call(0x000C52); return; }
    M68K_CMP16(bus_read16(0x100422), 0x1);
    if (M68K_CC_NE) goto loc_000C1C;
    M68K_TST8(bus_read8(0x10FE1C));
    goto loc_000C22;
loc_000C1C:
    M68K_TST8(bus_read8(0xD00046));
loc_000C22:
    if (M68K_CC_EQ) goto loc_000C30;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x4)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x015256);
    { func_table_call(0x000C50); return; }
loc_000C30:
    M68K_CMP16(bus_read16(0x10040A), 0x0);
    if (M68K_CC_NE) goto loc_000C46;
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x4)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x015256);
    { func_table_call(0x000C50); return; }
loc_000C46:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x7)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x015256);
    /* WARNING: function did not end with RTS */
}

/* $000C4E-$000C56  (3 instructions, 8 bytes) */
void jt_000C4E(void) {
    { uint32_t _ea = g_m68k.a[6]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0x1); bus_write16(_ea, _tmp); }
loc_000C50:
    { func_table_call(0x000C5C); return; }
loc_000C52:
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x7)); M68K_TST16((uint16_t)g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $000C54-$000C5C  (3 instructions, 8 bytes) */
void jt_000C54(void) {
    M68K_OR8(g_m68k.d[7], 0xb9);
    func_table_call(0x015256);
    M68K_OR8(g_m68k.d[1], 0x56);
    /* WARNING: function did not end with RTS */
}

/* $000C5C-$000CAA  (16 instructions, 78 bytes) */
void sub_000C5C(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x21)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x015256);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x00D704);
    func_table_call(0x0015B6);
    func_table_call(0x0014F6);
    func_table_call(0x002336);
    M68K_CMP16(g_m68k.d[0], 0x0);
    if (M68K_CC_NE) { func_table_call(0x000CC4); return; }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x10b0);
    M68K_CMP16(bus_read16(0x10041A), 0x0);
    if (M68K_CC_EQ) { func_table_call(0x000CBC); return; }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1011FC))); M68K_TST16((uint16_t)g_m68k.d[1]);
    func_table_call(0x0009D6);
    /* WARNING: function did not end with RTS */
}

/* $000CA8-$000CC6  (6 instructions, 30 bytes) */
void jt_000CA8(void) {
    { uint32_t _ea = g_m68k.a[6]; uint8_t _b = 1u << ((g_m68k.d[4]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(0x101210, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0x2); bus_write16(0x100426, _mv); M68K_TST16(_mv); }
    goto loc_000CC4;
loc_000CBC:
    { uint16_t _mv = (uint16_t)(0x1); bus_write16(0x100426, _mv); M68K_TST16(_mv); }
loc_000CC4:
    return;
}

/* $000CC6-$000CE6  (7 instructions, 32 bytes) */
void jt_000CC6(void) {
    func_table_call(0x0014F6);
    func_table_call(0x002416);
    M68K_CMP16(g_m68k.d[0], 0x0);
    if (M68K_CC_NE) { func_table_call(0x000D32); return; }
    M68K_CMP16(bus_read16(0x10041A), 0x0);
    if (M68K_CC_EQ) { func_table_call(0x000D24); return; }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x1)); M68K_TST16((uint16_t)g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $000CE4-$000D08  (8 instructions, 36 bytes) */
void sub_000CE4(void) {
    M68K_OR8(g_m68k.d[1], 0x39);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(bus_read16(0x1011FC))); M68K_TST16((uint16_t)g_m68k.d[1]);
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0xfc); bus_write8(_ea, _tmp); }
    func_table_call(0x0009D6);
    func_table_call(0x001340);
    M68K_TST8(bus_read8(0x10FD82));
    if (M68K_CC_EQ) { func_table_call(0x000D12); return; }
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(0x101210, _mv); M68K_TST16(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $000D02-$000D08  (2 instructions, 6 bytes) */
void jt_000D02(void) {
    M68K_OR8(g_m68k.d[0], 0x10);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFFFF00u) | ((uint8_t)(bus_read8(g_m68k.a[0]))); M68K_TST8((uint8_t)g_m68k.d[1]);
    /* WARNING: function did not end with RTS */
}

/* $000D08-$000D12  (2 instructions, 10 bytes) */
void jt_000D08(void) {
    { uint16_t _mv = (uint16_t)(0x2); bus_write16(0x100426, _mv); M68K_TST16(_mv); }
    { func_table_call(0x000D22); return; }
    /* WARNING: function did not end with RTS */
}

/* $000D12-$000D24  (3 instructions, 18 bytes) */
void sub_000D12(void) {
    { uint16_t _mv = (uint16_t)(0x0); bus_write16(0x101210, _mv); M68K_TST16(_mv); }
    { uint16_t _mv = (uint16_t)(0xe); bus_write16(0x100426, _mv); M68K_TST16(_mv); }
loc_000D22:
    { func_table_call(0x000D32); return; }
    /* WARNING: function did not end with RTS */
}

/* $000D24-$000D32  (2 instructions, 14 bytes) */
void sub_000D24(void) {
    { uint32_t _ea = 0x10FD80; uint8_t _b = 1u << ((0x7) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v & ~ _b); }
    { func_table_call(0xC00444); return; }
    /* WARNING: function did not end with RTS */
}

/* $000D32-$000D34  (1 instructions, 2 bytes) */
void sub_000D32(void) {
    return;
}

/* $000D34-$000D5C  (8 instructions, 40 bytes) */
void jt_000D34(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x4)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x015256);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x7)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x015256);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x22)); M68K_TST16((uint16_t)g_m68k.d[0]);
    func_table_call(0x015256);
    M68K_CMP16(bus_read16(0x100410), 0x0);
    if (M68K_CC_NE) { func_table_call(0x000D66); return; }
    /* WARNING: function did not end with RTS */
}

/* $000D5C-$000D82  (8 instructions, 38 bytes) */
void jt_000D5C(void) {
    { uint16_t _mv = (uint16_t)(0x4); bus_write16(0x100426, _mv); M68K_TST16(_mv); }
    goto loc_000D80;
loc_000D66:
    func_table_call(0x0169A8);
    func_table_call(0x00620C);
    M68K_CMP16(g_m68k.d[0], 0x0);
    if (M68K_CC_NE) goto loc_000D80;
    { uint16_t _mv = (uint16_t)(0x3); bus_write16(0x100426, _mv); M68K_TST16(_mv); }
loc_000D80:
    return;
}

/* $000D82-$000D9A  (5 instructions, 24 bytes) */
void jt_000D82(void) {
    func_table_call(0x00641A);
    M68K_CMP16(g_m68k.d[0], 0x0);
    if (M68K_CC_NE) goto loc_000D98;
    { uint16_t _mv = (uint16_t)(0x4); bus_write16(0x100426, _mv); M68K_TST16(_mv); }
loc_000D98:
    return;
}
