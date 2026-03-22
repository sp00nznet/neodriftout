/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $098B20 - $099EB8 */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

/* $098B20-$098B34  (9 instructions, 20 bytes) */
void jt_098B20(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_ADDX8(g_m68k.d[3], g_m68k.d[3]);
    M68K_ADD8(g_m68k.d[1], 0x8);
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_ADDX8(_tmp, _predec8(1)); bus_write8(_ea, _tmp); }
    M68K_ADD8(g_m68k.d[1], 0x8);
    M68K_ADDX8(g_m68k.d[3], g_m68k.d[2]);
    M68K_ADD8(g_m68k.d[1], 0x8);
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_ADDX8(_tmp, _predec8(0)); bus_write8(_ea, _tmp); }
    M68K_ADD8(g_m68k.d[1], 0x8);
    /* WARNING: function did not end with RTS */
}

/* $098B34-$098B40  (5 instructions, 12 bytes) */
void jt_098B34(void) {
    M68K_OR8(g_m68k.d[2], 0x1);
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_ADDX8(_tmp, _predec8(7)); bus_write8(_ea, _tmp); }
    M68K_ADD8(g_m68k.d[1], 0x8);
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_ADDX8(_tmp, _predec8(6)); bus_write8(_ea, _tmp); }
    M68K_ADD8(g_m68k.d[1], 0x8);
    /* WARNING: function did not end with RTS */
}

/* $098B40-$098B44  (1 instructions, 4 bytes) */
void jt_098B40(void) {
    M68K_OR8(g_m68k.d[2], 0xa);
    /* WARNING: function did not end with RTS */
}

/* $098B94-$098B9A  (2 instructions, 6 bytes) */
void jt_098B94(void) {
    M68K_OR8(g_m68k.d[2], 0xa);
    M68K_EOR16(g_m68k.d[0], g_m68k.d[5]);
    /* WARNING: function did not end with RTS */
}

/* $098BE8-$098BEE  (2 instructions, 6 bytes) */
void jt_098BE8(void) {
    M68K_OR8(g_m68k.d[6], 0xa);
    M68K_EOR16(g_m68k.d[1], g_m68k.d[5]);
    /* WARNING: function did not end with RTS */
}

/* $098CDC-$098CE2  (2 instructions, 6 bytes) */
void jt_098CDC(void) {
    M68K_OR8(g_m68k.d[3], 0x7);
    M68K_EOR16(g_m68k.d[2], g_m68k.d[5]);
    /* WARNING: function did not end with RTS */
}

/* $098D34-$098D38  (1 instructions, 4 bytes) */
void jt_098D34(void) {
    M68K_OR8(g_m68k.d[2], 0x1);
    /* WARNING: function did not end with RTS */
}

/* $098D40-$098D44  (1 instructions, 4 bytes) */
void jt_098D40(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    /* WARNING: function did not end with RTS */
}

/* $098D54-$098D58  (1 instructions, 4 bytes) */
void jt_098D54(void) {
    M68K_OR8(g_m68k.d[2], 0xa);
    /* WARNING: function did not end with RTS */
}

/* $098DA8-$098DAE  (2 instructions, 6 bytes) */
void jt_098DA8(void) {
    M68K_OR8(g_m68k.d[2], 0xa);
    M68K_EOR16(g_m68k.d[0], g_m68k.d[5]);
    /* WARNING: function did not end with RTS */
}

/* $098DFC-$098E02  (2 instructions, 6 bytes) */
void jt_098DFC(void) {
    M68K_OR8(g_m68k.d[6], 0xa);
    M68K_EOR16(g_m68k.d[1], g_m68k.d[5]);
    /* WARNING: function did not end with RTS */
}

/* $098EF0-$098EF4  (1 instructions, 4 bytes) */
void jt_098EF0(void) {
    M68K_OR8(g_m68k.d[3], 0x7);
    /* WARNING: function did not end with RTS */
}

/* $098F48-$098F4C  (1 instructions, 4 bytes) */
void jt_098F48(void) {
    M68K_OR8(g_m68k.d[2], 0x1);
    /* WARNING: function did not end with RTS */
}

/* $098F54-$098F58  (1 instructions, 4 bytes) */
void jt_098F54(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    /* WARNING: function did not end with RTS */
}

/* $098F68-$098F6E  (2 instructions, 6 bytes) */
void jt_098F68(void) {
    M68K_OR8(g_m68k.d[5], 0xa);
    { uint32_t _ea = g_m68k.a[4]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $099034-$09903A  (2 instructions, 6 bytes) */
void jt_099034(void) {
    M68K_OR8(g_m68k.d[3], 0xa);
    { uint32_t _ea = g_m68k.a[6]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0990B0-$0990B6  (2 instructions, 6 bytes) */
void jt_0990B0(void) {
    M68K_OR8(g_m68k.d[1], 0x6);
    { uint32_t _ea = g_m68k.a[1]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0990CC-$0990D2  (2 instructions, 6 bytes) */
void jt_0990CC(void) {
    M68K_OR8(g_m68k.d[1], 0x6);
    { uint32_t _ea = g_m68k.a[1]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0990E8-$0990EE  (2 instructions, 6 bytes) */
void jt_0990E8(void) {
    M68K_OR8(g_m68k.d[1], 0x6);
    { uint32_t _ea = g_m68k.a[1]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $099104-$09910A  (2 instructions, 6 bytes) */
void jt_099104(void) {
    M68K_OR8(g_m68k.d[1], 0x6);
    { uint32_t _ea = g_m68k.a[2]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $099120-$099126  (2 instructions, 6 bytes) */
void jt_099120(void) {
    M68K_OR8(g_m68k.d[2], 0x9);
    { uint32_t _ea = g_m68k.a[3]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $09916C-$099172  (2 instructions, 6 bytes) */
void jt_09916C(void) {
    M68K_OR8(g_m68k.d[6], 0x7);
    M68K_CMP32(g_m68k.a[5], g_m68k.d[6]);
    /* WARNING: function did not end with RTS */
}

/* $099218-$099222  (3 instructions, 10 bytes) */
void jt_099218(void) {
    M68K_OR8(g_m68k.d[6], 0x9);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP32(g_m68k.a[5], bus_read32(g_m68k.a[3]));
    /* WARNING: function did not end with RTS */
}

/* $0992F4-$099306  (5 instructions, 18 bytes) */
void jt_0992F4(void) {
    M68K_OR8(g_m68k.d[6], 0xa);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP8(g_m68k.d[6], _predec8(3));
    /* WARNING: function did not end with RTS */
}

/* $0993E8-$0993FA  (5 instructions, 18 bytes) */
void jt_0993E8(void) {
    M68K_OR8(g_m68k.d[5], 0xa);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP8(g_m68k.d[6], _predec8(3));
    /* WARNING: function did not end with RTS */
}

/* $099400-$09941A  (7 instructions, 26 bytes) */
void jt_099400(void) {
    M68K_CMP8(g_m68k.d[6], bus_read8(g_m68k.a[4] + 0 + (int32_t)g_m68k.a[2]));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP8(g_m68k.d[6], _postinc8(0));
    /* WARNING: function did not end with RTS */
}

/* $0994B4-$0994BA  (2 instructions, 6 bytes) */
void jt_0994B4(void) {
    M68K_OR8(g_m68k.d[4], 0xa);
    M68K_CMP8(g_m68k.d[6], bus_read8(g_m68k.a[6]));
    /* WARNING: function did not end with RTS */
}

/* $099558-$09956A  (5 instructions, 18 bytes) */
void jt_099558(void) {
    M68K_OR8(g_m68k.d[4], 0xa);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP8(g_m68k.d[6], _predec8(3));
    /* WARNING: function did not end with RTS */
}

/* $0995FC-$099602  (2 instructions, 6 bytes) */
void jt_0995FC(void) {
    M68K_OR8(g_m68k.d[5], 0xa);
    M68K_CMP8(g_m68k.d[6], _postinc8(3));
    /* WARNING: function did not end with RTS */
}

/* $0996C8-$0996CE  (2 instructions, 6 bytes) */
void jt_0996C8(void) {
    M68K_OR8(g_m68k.d[6], 0x9);
    M68K_CMP16(g_m68k.d[6], _postinc16(3));
    /* WARNING: function did not end with RTS */
}

/* $0997A4-$0997AA  (2 instructions, 6 bytes) */
void jt_0997A4(void) {
    M68K_OR8(g_m68k.d[6], 0xa);
    M68K_CMP16(g_m68k.d[6], _postinc16(3));
    /* WARNING: function did not end with RTS */
}

/* $099818-$09982E  (6 instructions, 22 bytes) */
void jt_099818(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP16(g_m68k.d[6], _postinc16(7));
    /* WARNING: function did not end with RTS */
}

/* $099898-$09989E  (2 instructions, 6 bytes) */
void jt_099898(void) {
    M68K_OR8(g_m68k.d[4], 0xa);
    M68K_CMP16(g_m68k.d[6], _postinc16(4));
    /* WARNING: function did not end with RTS */
}

/* $09993C-$09994E  (5 instructions, 18 bytes) */
void jt_09993C(void) {
    M68K_OR8(g_m68k.d[2], 0xa);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP16(g_m68k.d[6], _postinc16(7));
    /* WARNING: function did not end with RTS */
}

/* $099990-$099996  (2 instructions, 6 bytes) */
void jt_099990(void) {
    M68K_OR8(g_m68k.d[4], 0xa);
    M68K_CMP16(g_m68k.d[6], _postinc16(4));
    /* WARNING: function did not end with RTS */
}

/* $099A34-$099A3A  (2 instructions, 6 bytes) */
void jt_099A34(void) {
    M68K_OR8(g_m68k.d[4], 0x4);
    M68K_CMP16(g_m68k.d[6], _postinc16(5));
    /* WARNING: function did not end with RTS */
}

/* $099A78-$099A7E  (2 instructions, 6 bytes) */
void jt_099A78(void) {
    M68K_OR8(g_m68k.d[1], 0x2);
    M68K_CMP16(g_m68k.d[6], _predec16(1));
    /* WARNING: function did not end with RTS */
}

/* $099A84-$099A8A  (2 instructions, 6 bytes) */
void jt_099A84(void) {
    M68K_OR8(g_m68k.d[4], 0x8);
    M68K_CMP16(g_m68k.d[6], _predec16(7));
    /* WARNING: function did not end with RTS */
}

/* $099B08-$099B6E  (26 instructions, 102 bytes) */
void jt_099B08(void) {
    M68K_OR8(g_m68k.d[4], 0x8);
    M68K_CMP16(g_m68k.d[6], bus_read16(g_m68k.a[2] + (-0x59ff)));
    M68K_CMP16(g_m68k.d[6], bus_read16(g_m68k.a[1] + 0x1 + (int16_t)(uint16_t)g_m68k.a[2]));
    M68K_CMP16(g_m68k.d[6], bus_read16(g_m68k.a[7] + 0x1 + (int16_t)(uint16_t)g_m68k.a[2]));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP16(g_m68k.d[6], bus_read16(g_m68k.a[1] + (-0x59ff)));
    M68K_CMP16(g_m68k.d[6], bus_read16(g_m68k.a[0] + 0x1 + (int16_t)(uint16_t)g_m68k.a[2]));
    M68K_CMP16(g_m68k.d[6], bus_read16(g_m68k.a[6] + 0x1 + (int16_t)(uint16_t)g_m68k.a[2]));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP16(g_m68k.d[6], bus_read16(g_m68k.a[0] + (-0x59ff)));
    M68K_CMP16(g_m68k.d[6], bus_read16(g_m68k.a[7] + (-0x59ff)));
    M68K_CMP16(g_m68k.d[6], bus_read16(g_m68k.a[5] + 0x1 + (int16_t)(uint16_t)g_m68k.a[2]));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP16(g_m68k.d[6], _predec16(7));
    /* WARNING: function did not end with RTS */
}

/* $099B8C-$099BAC  (8 instructions, 32 bytes) */
void jt_099B8C(void) {
    M68K_OR8(g_m68k.d[3], 0x8);
    M68K_CMP16(g_m68k.d[6], bus_read16(g_m68k.a[3] + (-0x5a00)));
    M68K_CMP16(g_m68k.d[6], bus_read16(g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.a[2] * 8));
    M68K_CMP16(g_m68k.d[6], bus_read16(0x00A600));
    M68K_CMP16(g_m68k.d[6], bus_read16(0x99b9e + (int16_t)(uint16_t)g_m68k.a[2] * 8));
    M68K_CMP16(g_m68k.d[6], bus_read16(0x99ba2 + (int16_t)(uint16_t)g_m68k.a[2] * 8));
    M68K_CMP16(g_m68k.d[6], bus_read16(0x99ba6 + (int16_t)(uint16_t)g_m68k.a[2] * 8));
    M68K_CMP16(g_m68k.d[6], bus_read16(0x99baa + (int16_t)(uint16_t)g_m68k.a[2] * 8));
    /* WARNING: function did not end with RTS */
}

/* $099BF0-$099C22  (12 instructions, 50 bytes) */
void jt_099BF0(void) {
    M68K_OR8(g_m68k.d[3], 0x8);
    M68K_CMP16(g_m68k.d[6], bus_read16(g_m68k.a[5] + (-0x59ff)));
    M68K_CMP16(g_m68k.d[6], bus_read16(g_m68k.a[4] + 0x1 + (int16_t)(uint16_t)g_m68k.a[2]));
    M68K_CMP16(g_m68k.d[6], bus_read16(0x941ff));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP16(g_m68k.d[6], bus_read16(g_m68k.a[4] + (-0x59ff)));
    M68K_CMP16(g_m68k.d[6], bus_read16(g_m68k.a[3] + 0x1 + (int16_t)(uint16_t)g_m68k.a[2]));
    M68K_CMP16(g_m68k.d[6], bus_read16(0xA601BC7C));
    /* WARNING: function did not end with RTS */
}

/* $099C54-$099C58  (1 instructions, 4 bytes) */
void jt_099C54(void) {
    M68K_OR8(g_m68k.d[6], 0x9);
    /* WARNING: function did not end with RTS */
}

/* $099D30-$099DF4  (70 instructions, 196 bytes) */
void jt_099D30(void) {
    M68K_OR8(g_m68k.d[6], 0x8);
    M68K_CMP32(g_m68k.d[6], g_m68k.d[0]);
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    M68K_CMP32(g_m68k.d[6], g_m68k.d[4]);
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    M68K_CMP32(g_m68k.d[6], g_m68k.a[1]);
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    M68K_CMP32(g_m68k.d[6], bus_read32(g_m68k.a[0]));
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP32(g_m68k.d[6], g_m68k.d[5]);
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    M68K_CMP32(g_m68k.d[6], g_m68k.a[2]);
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    M68K_CMP32(g_m68k.d[6], bus_read32(g_m68k.a[1]));
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    M68K_CMP32(g_m68k.d[6], _postinc32(1));
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP32(g_m68k.d[6], g_m68k.a[3]);
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    M68K_CMP32(g_m68k.d[6], bus_read32(g_m68k.a[2]));
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    M68K_CMP32(g_m68k.d[6], _postinc32(2));
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    M68K_CMP32(g_m68k.d[6], _predec32(3));
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP32(g_m68k.d[6], bus_read32(g_m68k.a[3]));
    M68K_SUBX8(g_m68k.d[5], g_m68k.d[0]);
    M68K_CMP32(g_m68k.d[6], _postinc32(3));
    M68K_SUBX8(g_m68k.d[5], g_m68k.d[0]);
    M68K_CMP32(g_m68k.d[6], _predec32(4));
    M68K_SUBX8(g_m68k.d[5], g_m68k.d[0]);
    M68K_CMP32(g_m68k.d[6], bus_read32(g_m68k.a[2] + (-0x6500)));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP32(g_m68k.d[6], _postinc32(4));
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    M68K_CMP32(g_m68k.d[6], _predec32(5));
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    M68K_CMP32(g_m68k.d[6], bus_read32(g_m68k.a[3] + (-0x6600)));
    M68K_CMP32(g_m68k.d[6], bus_read32(g_m68k.a[6] + (-0x6600)));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP32(g_m68k.d[6], _postinc32(5));
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    M68K_CMP32(g_m68k.d[6], g_m68k.d[1]);
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    M68K_CMP32(g_m68k.d[6], g_m68k.d[1]);
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    M68K_CMP32(g_m68k.d[6], g_m68k.d[1]);
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $099DF4-$099E10  (13 instructions, 28 bytes) */
void jt_099DF4(void) {
    M68K_OR8(g_m68k.d[1], 0x6);
    M68K_CMP32(g_m68k.d[6], g_m68k.d[1]);
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    M68K_CMP32(g_m68k.d[6], g_m68k.d[6]);
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    M68K_CMP32(g_m68k.d[6], g_m68k.a[4]);
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    M68K_CMP32(g_m68k.d[6], g_m68k.d[1]);
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    M68K_CMP32(g_m68k.d[6], g_m68k.d[1]);
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    M68K_CMP32(g_m68k.d[6], _predec32(6));
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $099E10-$099E34  (9 instructions, 36 bytes) */
void jt_099E10(void) {
    M68K_OR8(g_m68k.d[1], 0x8);
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

/* $099E34-$099E50  (10 instructions, 28 bytes) */
void jt_099E34(void) {
    M68K_OR8(g_m68k.d[1], 0x6);
    { uint32_t _ea = g_m68k.a[1]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[2]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[6] + (-0x6600)); uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = 0x9A00BB9A; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[3]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $099E50-$099E6C  (10 instructions, 28 bytes) */
void jt_099E50(void) {
    M68K_OR8(g_m68k.d[1], 0x6);
    { uint32_t _ea = g_m68k.a[1]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    M68K_SUBX8(g_m68k.d[5], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[2]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    M68K_SUBX8(g_m68k.d[5], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[6] + (-0x6500)); uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = 0x9B00BB9A; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    M68K_SUBX8(g_m68k.d[5], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[3]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    M68K_SUBX8(g_m68k.d[5], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $099E6C-$099E88  (10 instructions, 28 bytes) */
void jt_099E6C(void) {
    M68K_OR8(g_m68k.d[1], 0x6);
    { uint32_t _ea = g_m68k.a[1]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[6], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[2]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[6], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[6] + (-0x6400)); uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = 0x9C00BB9A; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[6], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[3]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[6], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $099E88-$099EA4  (10 instructions, 28 bytes) */
void jt_099E88(void) {
    M68K_OR8(g_m68k.d[1], 0x6);
    { uint32_t _ea = g_m68k.a[1]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    M68K_SUBX8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[2]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    M68K_SUBX8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[6] + (-0x6700)); uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = 0x9900BB9A; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    M68K_SUBX8(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[3]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    M68K_SUBX8(g_m68k.d[4], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $099EA4-$099EB8  (9 instructions, 20 bytes) */
void jt_099EA4(void) {
    M68K_OR8(g_m68k.d[1], 0x6);
    { uint32_t _ea = g_m68k.a[2]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    M68K_SUBX8(g_m68k.d[5], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[3]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    M68K_SUBX8(g_m68k.d[5], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[2]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    M68K_SUBX8(g_m68k.d[5], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[3]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    M68K_SUBX8(g_m68k.d[5], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}
