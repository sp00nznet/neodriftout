/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $0A6C86 - $0A9862 */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

/* $0A6C86-$0A6C9A  (7 instructions, 20 bytes) */
void jt_0A6C86(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_CMP16(g_m68k.d[6], _predec16(0));
    /* TODO $0A6C8C: dc.w $4300  [43 00] */
    M68K_CMP16(g_m68k.d[6], bus_read16(g_m68k.a[4] + 0x4300));
    M68K_CMP16(g_m68k.d[6], _predec16(1));
    /* TODO $0A6C94: dc.w $4300  [43 00] */
    M68K_CMP16(g_m68k.d[6], bus_read16(g_m68k.a[5] + 0x4300));
    /* WARNING: function did not end with RTS */
}

/* $0A6C9A-$0A6CAE  (7 instructions, 20 bytes) */
void jt_0A6C9A(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_CMP16(g_m68k.d[6], _predec16(2));
    /* TODO $0A6CA0: dc.w $4300  [43 00] */
    M68K_CMP16(g_m68k.d[6], bus_read16(g_m68k.a[6] + 0x4300));
    M68K_CMP16(g_m68k.d[6], _predec16(3));
    /* TODO $0A6CA8: dc.w $4300  [43 00] */
    M68K_CMP16(g_m68k.d[6], bus_read16(g_m68k.a[7] + 0x4300));
    /* WARNING: function did not end with RTS */
}

/* $0A6CAE-$0A6CC2  (7 instructions, 20 bytes) */
void jt_0A6CAE(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_CMP16(g_m68k.d[6], _predec16(4));
    /* TODO $0A6CB4: dc.w $4300  [43 00] */
    M68K_CMP16(g_m68k.d[6], bus_read16(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 2));
    M68K_CMP16(g_m68k.d[6], _predec16(5));
    /* TODO $0A6CBC: dc.w $4300  [43 00] */
    M68K_CMP16(g_m68k.d[6], bus_read16(g_m68k.a[7] + 0x4300));
    /* WARNING: function did not end with RTS */
}

/* $0A6CC2-$0A6CCA  (3 instructions, 8 bytes) */
void jt_0A6CC2(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_MULU(g_m68k.d[0], _predec16(1));
    /* TODO $0A6CC8: dc.w $4300  [43 00] */
    /* WARNING: function did not end with RTS */
}

/* $0A6CD6-$0A6CEA  (7 instructions, 20 bytes) */
void jt_0A6CD6(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_MULU(g_m68k.d[0], _predec16(5));
    /* TODO $0A6CDC: dc.w $4300  [43 00] */
    M68K_MULU(g_m68k.d[0], bus_read16(g_m68k.a[3] + 0x4300));
    M68K_CMP32(g_m68k.d[6], bus_read32(0xaafe4));
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(g_m68k.d[4]));
    /* TODO $0A6CE8: dc.w $4300  [43 00] */
    /* WARNING: function did not end with RTS */
}

/* $0A6CEA-$0A6CFE  (7 instructions, 20 bytes) */
void jt_0A6CEA(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(g_m68k.d[0]));
    /* TODO $0A6CF0: dc.w $4300  [43 00] */
    M68K_MULU(g_m68k.d[0], bus_read16(g_m68k.a[4] + 0x4300));
    M68K_MULU(g_m68k.d[0], _predec16(6));
    /* TODO $0A6CF8: dc.w $4300  [43 00] */
    M68K_MULU(g_m68k.d[0], bus_read16(g_m68k.a[5] + 0x4300));
    /* WARNING: function did not end with RTS */
}

/* $0A6CFE-$0A6D12  (5 instructions, 20 bytes) */
void jt_0A6CFE(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0A6D12-$0A6D26  (5 instructions, 20 bytes) */
void jt_0A6D12(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0A6D26-$0A6D3A  (5 instructions, 20 bytes) */
void jt_0A6D26(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_MULU(g_m68k.d[0], bus_read16(g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 2));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND32(g_m68k.d[0], bus_read32(g_m68k.a[5] + 0x4300));
    /* WARNING: function did not end with RTS */
}

/* $0A6D8E-$0A6D9E  (7 instructions, 16 bytes) */
void jt_0A6D8E(void) {
    M68K_OR8(g_m68k.d[3], 0x1);
    M68K_CMP32(g_m68k.d[6], bus_read32(g_m68k.a[0]));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(bus_read16(g_m68k.a[1])));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(bus_read16(g_m68k.a[2])));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $0A6D9E-$0A6DAE  (7 instructions, 16 bytes) */
void jt_0A6D9E(void) {
    M68K_OR8(g_m68k.d[3], 0x1);
    M68K_CMP32(g_m68k.d[6], bus_read32(g_m68k.a[1]));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(_postinc16(4)));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(_postinc16(5)));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $0A6DAE-$0A6DBE  (7 instructions, 16 bytes) */
void jt_0A6DAE(void) {
    M68K_OR8(g_m68k.d[3], 0x1);
    M68K_CMP32(g_m68k.d[6], bus_read32(g_m68k.a[2]));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(_predec16(4)));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(_postinc16(5)));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $0A6DBE-$0A6DCE  (7 instructions, 16 bytes) */
void jt_0A6DBE(void) {
    M68K_OR8(g_m68k.d[3], 0x1);
    M68K_CMP32(g_m68k.d[6], bus_read32(g_m68k.a[3]));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(bus_read16(g_m68k.a[2])));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(bus_read16(g_m68k.a[5])));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $0A6DCE-$0A6DDE  (7 instructions, 16 bytes) */
void jt_0A6DCE(void) {
    M68K_OR8(g_m68k.d[3], 0x1);
    M68K_CMP32(g_m68k.d[6], bus_read32(g_m68k.a[4]));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(bus_read16(g_m68k.a[2])));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(bus_read16(g_m68k.a[5])));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $0A6DDE-$0A6DEE  (7 instructions, 16 bytes) */
void jt_0A6DDE(void) {
    M68K_OR8(g_m68k.d[3], 0x1);
    M68K_CMP32(g_m68k.d[6], bus_read32(g_m68k.a[0]));
    /* TODO $0A6DE4: dc.w $4300  [43 00] */
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(bus_read16(g_m68k.a[1])));
    /* TODO $0A6DE8: dc.w $4300  [43 00] */
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(bus_read16(g_m68k.a[2])));
    /* TODO $0A6DEC: dc.w $4300  [43 00] */
    /* WARNING: function did not end with RTS */
}

/* $0A6DEE-$0A6DFE  (7 instructions, 16 bytes) */
void jt_0A6DEE(void) {
    M68K_OR8(g_m68k.d[3], 0x1);
    M68K_CMP32(g_m68k.d[6], bus_read32(g_m68k.a[1]));
    /* TODO $0A6DF4: dc.w $4300  [43 00] */
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(_postinc16(4)));
    /* TODO $0A6DF8: dc.w $4300  [43 00] */
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(_postinc16(5)));
    /* TODO $0A6DFC: dc.w $4300  [43 00] */
    /* WARNING: function did not end with RTS */
}

/* $0A6DFE-$0A6E0E  (7 instructions, 16 bytes) */
void jt_0A6DFE(void) {
    M68K_OR8(g_m68k.d[3], 0x1);
    M68K_CMP32(g_m68k.d[6], bus_read32(g_m68k.a[2]));
    /* TODO $0A6E04: dc.w $4300  [43 00] */
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(_predec16(4)));
    /* TODO $0A6E08: dc.w $4300  [43 00] */
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(_postinc16(5)));
    /* TODO $0A6E0C: dc.w $4300  [43 00] */
    /* WARNING: function did not end with RTS */
}

/* $0A6E0E-$0A6E1E  (7 instructions, 16 bytes) */
void jt_0A6E0E(void) {
    M68K_OR8(g_m68k.d[3], 0x1);
    M68K_CMP32(g_m68k.d[6], bus_read32(g_m68k.a[3]));
    /* TODO $0A6E14: dc.w $4300  [43 00] */
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(bus_read16(g_m68k.a[2])));
    /* TODO $0A6E18: dc.w $4300  [43 00] */
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(bus_read16(g_m68k.a[5])));
    /* TODO $0A6E1C: dc.w $4300  [43 00] */
    /* WARNING: function did not end with RTS */
}

/* $0A6E1E-$0A6E2E  (7 instructions, 16 bytes) */
void jt_0A6E1E(void) {
    M68K_OR8(g_m68k.d[3], 0x1);
    M68K_CMP32(g_m68k.d[6], bus_read32(g_m68k.a[4]));
    /* TODO $0A6E24: dc.w $4300  [43 00] */
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(bus_read16(g_m68k.a[2])));
    /* TODO $0A6E28: dc.w $4300  [43 00] */
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(bus_read16(g_m68k.a[5])));
    /* TODO $0A6E2C: dc.w $4300  [43 00] */
    /* WARNING: function did not end with RTS */
}

/* $0A6E4E-$0A6E7A  (14 instructions, 44 bytes) */
void jt_0A6E4E(void) {
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x10); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    g_m68k.a[5] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[1] + 0x4700));
    g_m68k.a[5] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[7] + 0 + (int32_t)g_m68k.d[4]));
    M68K_ADDX8(g_m68k.d[5], g_m68k.d[5]);
    /* TODO $0A6E6C: nbcd.b d0  [48 00] */
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    M68K_NOT8(g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    M68K_NOT8(g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[7] + 0x4700); uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0A7160-$0A7176  (9 instructions, 22 bytes) */
void jt_0A7160(void) {
    M68K_NOT8(g_m68k.d[0]);
    g_m68k.a[5] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 8));
    M68K_ADDX8(g_m68k.d[5], g_m68k.d[2]);
    /* TODO $0A7168: dc.w $4700  [47 00] */
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    /* TODO $0A716C: dc.w $4700  [47 00] */
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    M68K_NOT8(g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[4] + 0x4600); uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0A7352-$0A7366  (8 instructions, 20 bytes) */
void jt_0A7352(void) {
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x10); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[1]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    M68K_TST8(g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[2]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    M68K_TST8(g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    M68K_TST8(g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[0] + 0 + (int32_t)g_m68k.d[4] * 2); uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0A7856-$0A799A  (128 instructions, 324 bytes) */
void jt_0A7856(void) {
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x6); bus_write8(_ea, _tmp); }
    M68K_ADD16(g_m68k.d[6], _postinc16(2));
    /* TODO $0A785C: dc.w $4700  [47 00] */
    M68K_ADD16(g_m68k.d[6], _predec16(0));
    /* TODO $0A7860: dc.w $4700  [47 00] */
    M68K_ADD16(g_m68k.d[6], bus_read16(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 8));
    M68K_ADD32(g_m68k.d[6], g_m68k.d[0]);
    /* TODO $0A7868: dc.w $4100  [41 00] */
    M68K_ADD32(g_m68k.d[6], bus_read32(g_m68k.a[0]));
    /* TODO $0A786C: dc.w $4100  [41 00] */
    M68K_ADD32(g_m68k.d[6], _predec32(0));
    /* TODO $0A7870: dc.w $4100  [41 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_ADD16(g_m68k.d[6], _predec16(1));
    /* TODO $0A7878: dc.w $4700  [47 00] */
    M68K_ADD16(g_m68k.d[6], bus_read16(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 8));
    M68K_ADD32(g_m68k.d[6], g_m68k.d[1]);
    M68K_NOT8(g_m68k.d[0]);
    M68K_ADD32(g_m68k.d[6], bus_read32(g_m68k.a[1]));
    M68K_NOT8(g_m68k.d[0]);
    M68K_ADD32(g_m68k.d[6], _predec32(1));
    M68K_NOT8(g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_ADD16(g_m68k.d[6], _predec16(2));
    /* TODO $0A7890: dc.w $4700  [47 00] */
    M68K_ADD16(g_m68k.d[6], bus_read16(g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 8));
    M68K_ADD32(g_m68k.d[6], g_m68k.d[2]);
    M68K_NOT8(g_m68k.d[0]);
    M68K_ADD32(g_m68k.d[6], bus_read32(g_m68k.a[2]));
    M68K_NOT8(g_m68k.d[0]);
    M68K_ADD32(g_m68k.d[6], _predec32(2));
    M68K_NOT8(g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_ADD16(g_m68k.d[6], _predec16(3));
    /* TODO $0A78A8: dc.w $4700  [47 00] */
    M68K_ADD16(g_m68k.d[6], bus_read16(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 8));
    M68K_ADD32(g_m68k.d[6], g_m68k.d[3]);
    /* TODO $0A78B0: dc.w $4100  [41 00] */
    M68K_ADD32(g_m68k.d[6], bus_read32(g_m68k.a[3]));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_ADD32(g_m68k.d[6], _predec32(3));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_ADD16(g_m68k.d[6], _predec16(4));
    /* TODO $0A78C0: dc.w $4700  [47 00] */
    M68K_ADD16(g_m68k.d[6], bus_read16(g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.d[4]));
    M68K_ADD32(g_m68k.d[6], g_m68k.d[4]);
    /* TODO $0A78C8: dc.w $4100  [41 00] */
    M68K_ADD32(g_m68k.d[6], bus_read32(g_m68k.a[4]));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_ADD32(g_m68k.d[6], _predec32(4));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_ADD16(g_m68k.d[6], _predec16(5));
    M68K_NOT8(g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[6], bus_read16(g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.d[4]));
    M68K_ADD32(g_m68k.d[6], g_m68k.d[5]);
    /* TODO $0A78E0: dc.w $4100  [41 00] */
    M68K_ADD32(g_m68k.d[6], bus_read32(g_m68k.a[5]));
    /* TODO $0A78E4: dc.w $4100  [41 00] */
    M68K_ADD32(g_m68k.d[6], _predec32(5));
    /* TODO $0A78E8: dc.w $4100  [41 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_ADD16(g_m68k.d[6], _predec16(6));
    M68K_NOT8(g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[6], bus_read16(g_m68k.a[6] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 8));
    M68K_ADD32(g_m68k.d[6], g_m68k.d[6]);
    M68K_NOT8(g_m68k.d[0]);
    M68K_ADD32(g_m68k.d[6], bus_read32(g_m68k.a[6]));
    M68K_NOT8(g_m68k.d[0]);
    M68K_ADD32(g_m68k.d[6], _predec32(6));
    M68K_NOT8(g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[6], _postinc16(3));
    M68K_NOT8(g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[6], _predec16(7));
    M68K_NOT8(g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[6], bus_read16(g_m68k.a[7] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 2));
    M68K_ADD32(g_m68k.d[6], g_m68k.d[7]);
    /* TODO $0A7910: dc.w $4300  [43 00] */
    M68K_ADD32(g_m68k.d[6], bus_read32(g_m68k.a[7]));
    /* TODO $0A7914: dc.w $4300  [43 00] */
    M68K_ADD32(g_m68k.d[6], _predec32(7));
    /* TODO $0A7918: dc.w $4500  [45 00] */
    M68K_ADD16(g_m68k.d[6], _postinc16(4));
    M68K_NOT8(g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[6], bus_read16(g_m68k.a[0] + 0x4600));
    M68K_ADD16(g_m68k.d[6], bus_read16(0x004300));
    M68K_ADD32(g_m68k.d[6], g_m68k.a[0]);
    /* TODO $0A7928: dc.w $4300  [43 00] */
    M68K_ADD32(g_m68k.d[6], _postinc32(0));
    /* TODO $0A792C: dc.w $4500  [45 00] */
    M68K_ADD32(g_m68k.d[6], bus_read32(g_m68k.a[0] + 0x4500));
    M68K_ADD16(g_m68k.d[6], _postinc16(5));
    M68K_NOT8(g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[6], bus_read16(g_m68k.a[1] + 0x4600));
    M68K_ADD16(g_m68k.d[6], bus_read16(0x4500DC89));
    /* TODO $0A7940: dc.w $4500  [45 00] */
    M68K_ADD32(g_m68k.d[6], _postinc32(1));
    /* TODO $0A7944: dc.w $4500  [45 00] */
    M68K_ADD32(g_m68k.d[6], bus_read32(g_m68k.a[1] + 0x4500));
    M68K_ADD16(g_m68k.d[6], _postinc16(6));
    /* TODO $0A794C: dc.w $4700  [47 00] */
    M68K_ADD16(g_m68k.d[6], bus_read16(g_m68k.a[2] + 0x4700));
    M68K_ADD16(g_m68k.d[6], bus_read16(0xac054));
    M68K_ADD32(g_m68k.d[6], g_m68k.a[2]);
    /* TODO $0A7958: dc.w $4700  [47 00] */
    M68K_ADD32(g_m68k.d[6], _postinc32(2));
    /* TODO $0A795C: dc.w $4500  [45 00] */
    M68K_ADD32(g_m68k.d[6], bus_read32(g_m68k.a[2] + 0x4500));
    M68K_ADD16(g_m68k.d[6], _postinc16(7));
    /* TODO $0A7964: dc.w $4700  [47 00] */
    M68K_ADD16(g_m68k.d[6], bus_read16(g_m68k.a[3] + 0x4700));
    M68K_ADD16(g_m68k.d[6], /* UNHANDLED_READ: (a16, d4.w * 8) */ 0);
    M68K_ADD32(g_m68k.d[6], g_m68k.a[3]);
    /* TODO $0A7970: dc.w $4700  [47 00] */
    M68K_ADD32(g_m68k.d[6], _postinc32(3));
    /* TODO $0A7974: dc.w $4500  [45 00] */
    M68K_ADD32(g_m68k.d[6], bus_read32(g_m68k.a[3] + 0x4500));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_ADD16(g_m68k.d[6], bus_read16(g_m68k.a[4] + 0x4600));
    M68K_ADD16(g_m68k.d[6], 0x4600);
    M68K_ADD32(g_m68k.d[6], g_m68k.a[4]);
    M68K_NOT8(g_m68k.d[0]);
    M68K_ADD32(g_m68k.d[6], _postinc32(4));
    /* TODO $0A798C: dc.w $4500  [45 00] */
    M68K_ADD32(g_m68k.d[6], bus_read32(g_m68k.a[4] + 0x4500));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_ADD16(g_m68k.d[6], bus_read16(g_m68k.a[5] + 0x4700));
    /* WARNING: function did not end with RTS */
}

/* $0A7A3A-$0A7A6A  (18 instructions, 48 bytes) */
void jt_0A7A3A(void) {
    M68K_OR8(g_m68k.d[4], 0x4);
    M68K_ADD8(g_m68k.d[6], bus_read8(g_m68k.a[7]));
    /* TODO $0A7A40: dc.w $4d00  [4D 00] */
    M68K_ADD8(g_m68k.d[6], _predec8(3));
    /* TODO $0A7A44: dc.w $4d00  [4D 00] */
    M68K_ADD8(g_m68k.d[6], bus_read8(g_m68k.a[7] + 0x4d00));
    M68K_ADD8(g_m68k.d[6], /* UNHANDLED_READ: (a16, d4.l * 4) */ 0);
    M68K_ADD8(g_m68k.d[6], _postinc8(0));
    /* TODO $0A7A50: dc.w $4d00  [4D 00] */
    M68K_ADD8(g_m68k.d[6], _predec8(4));
    /* TODO $0A7A54: dc.w $4d00  [4D 00] */
    M68K_ADD8(g_m68k.d[6], bus_read8(g_m68k.a[0] + 0 + (int32_t)g_m68k.d[4] * 4));
    M68K_ADD8(g_m68k.d[6], 0x0);
    M68K_ADD8(g_m68k.d[6], _postinc8(1));
    /* TODO $0A7A60: dc.w $4d00  [4D 00] */
    M68K_ADD8(g_m68k.d[6], _predec8(5));
    /* TODO $0A7A64: dc.w $4d00  [4D 00] */
    M68K_ADD8(g_m68k.d[6], bus_read8(g_m68k.a[1] + 0 + (int32_t)g_m68k.d[4] * 4));
    /* WARNING: function did not end with RTS */
}

/* $0A7A7E-$0A7A84  (2 instructions, 6 bytes) */
void jt_0A7A7E(void) {
    M68K_OR8(g_m68k.d[4], 0x4);
    M68K_ADD8(g_m68k.d[6], _postinc8(3));
    /* WARNING: function did not end with RTS */
}

/* $0A7AC2-$0A7B06  (24 instructions, 68 bytes) */
void jt_0A7AC2(void) {
    M68K_OR8(g_m68k.d[4], 0x4);
    M68K_ADD8(g_m68k.d[6], _postinc8(7));
    /* TODO $0A7AC8: dc.w $4f00  [4F 00] */
    M68K_ADD8(g_m68k.d[6], bus_read8(g_m68k.a[3] + 0x4f00));
    M68K_ADD8(g_m68k.d[6], bus_read8(g_m68k.a[7] + 0 + (int32_t)g_m68k.d[4] * 8));
    M68K_ADD16(g_m68k.d[6], g_m68k.d[3]);
    /* TODO $0A7AD4: dc.w $4f00  [4F 00] */
    M68K_ADD8(g_m68k.d[6], _predec8(0));
    /* TODO $0A7AD8: dc.w $4f00  [4F 00] */
    M68K_ADD8(g_m68k.d[6], bus_read8(g_m68k.a[4] + 0x4f00));
    M68K_ADD8(g_m68k.d[6], bus_read8(0x004F00));
    M68K_ADD16(g_m68k.d[6], g_m68k.d[4]);
    /* TODO $0A7AE4: dc.w $4f00  [4F 00] */
    M68K_ADD8(g_m68k.d[6], _predec8(1));
    /* TODO $0A7AE8: dc.w $4f00  [4F 00] */
    M68K_ADD8(g_m68k.d[6], bus_read8(g_m68k.a[5] + 0x4f00));
    M68K_ADD8(g_m68k.d[6], bus_read8(0x4F00DC45));
    /* TODO $0A7AF4: dc.w $4f00  [4F 00] */
    M68K_ADD8(g_m68k.d[6], _predec8(2));
    /* TODO $0A7AF8: dc.w $4f00  [4F 00] */
    M68K_ADD8(g_m68k.d[6], bus_read8(g_m68k.a[6] + 0x4f00));
    M68K_ADD8(g_m68k.d[6], bus_read8(0xaca00));
    M68K_ADD16(g_m68k.d[6], g_m68k.d[6]);
    /* TODO $0A7B04: dc.w $4f00  [4F 00] */
    /* WARNING: function did not end with RTS */
}

/* $0A7B06-$0A7B4A  (31 instructions, 68 bytes) */
void jt_0A7B06(void) {
    M68K_OR8(g_m68k.d[4], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_ADD16(g_m68k.d[6], g_m68k.a[1]);
    M68K_ADD8(g_m68k.d[0], 0x8);
    M68K_ADD16(g_m68k.d[6], bus_read16(g_m68k.a[1]));
    M68K_ADD8(g_m68k.d[0], 0x8);
    M68K_ADD16(g_m68k.d[6], bus_read16(g_m68k.a[6]));
    M68K_ADD8(g_m68k.d[0], 0x8);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_ADD16(g_m68k.d[6], g_m68k.a[2]);
    M68K_ADD8(g_m68k.d[0], 0x8);
    M68K_ADD16(g_m68k.d[6], bus_read16(g_m68k.a[2]));
    M68K_ADD8(g_m68k.d[0], 0x8);
    M68K_ADD16(g_m68k.d[6], bus_read16(g_m68k.a[7]));
    M68K_ADD8(g_m68k.d[0], 0x8);
    M68K_ADD16(g_m68k.d[6], g_m68k.d[7]);
    M68K_ADD8(g_m68k.d[0], 0x8);
    M68K_ADD16(g_m68k.d[6], g_m68k.a[3]);
    M68K_ADD8(g_m68k.d[0], 0x8);
    M68K_ADD16(g_m68k.d[6], bus_read16(g_m68k.a[3]));
    M68K_ADD8(g_m68k.d[0], 0x8);
    M68K_ADD16(g_m68k.d[6], _postinc16(0));
    M68K_ADD8(g_m68k.d[0], 0x8);
    M68K_ADD16(g_m68k.d[6], g_m68k.a[0]);
    M68K_ADD8(g_m68k.d[0], 0x8);
    M68K_ADD16(g_m68k.d[6], g_m68k.a[4]);
    M68K_ADD8(g_m68k.d[0], 0x8);
    M68K_ADD16(g_m68k.d[6], bus_read16(g_m68k.a[4]));
    M68K_ADD8(g_m68k.d[0], 0x8);
    M68K_ADD16(g_m68k.d[6], _postinc16(1));
    M68K_ADD8(g_m68k.d[0], 0x8);
    /* WARNING: function did not end with RTS */
}

/* $0A7B4A-$0A7B8E  (28 instructions, 68 bytes) */
void jt_0A7B4A(void) {
    M68K_OR8(g_m68k.d[4], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_ADD16(g_m68k.d[6], g_m68k.a[5]);
    M68K_ADD8(g_m68k.d[0], 0x8);
    M68K_ADD32(g_m68k.d[0], bus_read32(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[5]));
    M68K_ADD16(g_m68k.d[6], bus_read16(g_m68k.a[6]));
    M68K_ADD8(g_m68k.d[0], 0x8);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_ADD16(g_m68k.d[6], g_m68k.a[6]);
    M68K_ADD8(g_m68k.d[0], 0x8);
    M68K_ADD16(g_m68k.d[6], bus_read16(g_m68k.a[5]));
    M68K_ADD8(g_m68k.d[0], 0x8);
    M68K_ADD16(g_m68k.d[6], bus_read16(g_m68k.a[7]));
    M68K_ADD8(g_m68k.d[0], 0x8);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_ADD16(g_m68k.d[6], g_m68k.a[7]);
    M68K_ADD8(g_m68k.d[0], 0x8);
    M68K_ADD16(g_m68k.d[6], bus_read16(g_m68k.a[3]));
    M68K_ADD8(g_m68k.d[0], 0x8);
    M68K_ADD16(g_m68k.d[6], _postinc16(0));
    M68K_ADD8(g_m68k.d[0], 0x8);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_ADD16(g_m68k.d[6], bus_read16(g_m68k.a[0]));
    M68K_ADD8(g_m68k.d[0], 0x8);
    M68K_ADD16(g_m68k.d[6], bus_read16(g_m68k.a[4]));
    M68K_ADD8(g_m68k.d[0], 0x8);
    M68K_ADD16(g_m68k.d[6], _postinc16(1));
    M68K_ADD8(g_m68k.d[0], 0x8);
    /* WARNING: function did not end with RTS */
}

/* $0A7BC4-$0A7BD6  (5 instructions, 18 bytes) */
void jt_0A7BC4(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x6); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_ASR32(g_m68k.d[5], g_m68k.d[7]);
    /* WARNING: function did not end with RTS */
}

/* $0A7D48-$0A7ECC  (167 instructions, 388 bytes) */
void jt_0A7D48(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x6); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $0A7D54: roxl.w #$6, d2  [ED 52] */
    /* TODO $0A7D56: dc.w $4f00  [4F 00] */
    M68K_LSL16(g_m68k.d[2], g_m68k.d[6]);
    /* TODO $0A7D5A: dc.w $4f00  [4F 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $0A7D64: roxl.b d6, d5  [ED 35] */
    /* TODO $0A7D66: dc.w $4f00  [4F 00] */
    M68K_LSL16(g_m68k.d[4], 0x6);
    /* TODO $0A7D6A: dc.w $4f00  [4F 00] */
    /* TODO $0A7D6C: roxl.w #$6, d3  [ED 53] */
    /* TODO $0A7D6E: dc.w $4f00  [4F 00] */
    M68K_LSL16(g_m68k.d[3], g_m68k.d[6]);
    /* TODO $0A7D72: dc.w $4f00  [4F 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $0A7D7C: roxl.b d6, d6  [ED 36] */
    /* TODO $0A7D7E: dc.w $4f00  [4F 00] */
    M68K_LSL16(g_m68k.d[5], 0x6);
    /* TODO $0A7D82: dc.w $4f00  [4F 00] */
    /* TODO $0A7D84: roxl.w #$6, d4  [ED 54] */
    /* TODO $0A7D86: dc.w $4f00  [4F 00] */
    M68K_LSL16(g_m68k.d[4], g_m68k.d[6]);
    /* TODO $0A7D8A: dc.w $4f00  [4F 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $0A7D94: roxl.b d6, d7  [ED 37] */
    /* TODO $0A7D96: dc.w $4f00  [4F 00] */
    M68K_LSL16(g_m68k.d[6], 0x6);
    /* TODO $0A7D9A: dc.w $4f00  [4F 00] */
    /* TODO $0A7D9C: roxl.w #$6, d5  [ED 55] */
    /* TODO $0A7D9E: dc.w $4f00  [4F 00] */
    M68K_LSL16(g_m68k.d[5], g_m68k.d[6]);
    /* TODO $0A7DA2: dc.w $4f00  [4F 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_ROL8(g_m68k.d[0], g_m68k.d[6]);
    /* TODO $0A7DAE: dc.w $4f00  [4F 00] */
    M68K_LSL16(g_m68k.d[7], 0x6);
    /* TODO $0A7DB2: dc.w $4f00  [4F 00] */
    /* TODO $0A7DB4: roxl.w #$6, d6  [ED 56] */
    /* TODO $0A7DB6: dc.w $4f00  [4F 00] */
    M68K_LSL16(g_m68k.d[6], g_m68k.d[6]);
    /* TODO $0A7DBA: dc.w $4f00  [4F 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_ROL8(g_m68k.d[1], g_m68k.d[6]);
    /* TODO $0A7DC6: dc.w $4f00  [4F 00] */
    M68K_LSL16(g_m68k.d[0], 0x6);
    /* TODO $0A7DCA: dc.w $4f00  [4F 00] */
    /* TODO $0A7DCC: roxl.w #$6, d7  [ED 57] */
    /* TODO $0A7DCE: dc.w $4f00  [4F 00] */
    M68K_LSL16(g_m68k.d[7], g_m68k.d[6]);
    /* TODO $0A7DD2: dc.w $4f00  [4F 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_ROL8(g_m68k.d[2], g_m68k.d[6]);
    /* TODO $0A7DDE: dc.w $4f00  [4F 00] */
    M68K_LSL16(g_m68k.d[1], 0x6);
    /* TODO $0A7DE2: dc.w $4f00  [4F 00] */
    M68K_ROL16(g_m68k.d[0], 0x6);
    /* TODO $0A7DE6: dc.w $4f00  [4F 00] */
    M68K_LSL16(g_m68k.d[0], g_m68k.d[6]);
    /* TODO $0A7DEA: dc.w $4f00  [4F 00] */
    /* TODO $0A7DEC: roxl.w d6, d2  [ED 72] */
    /* TODO $0A7DEE: dc.w $4f00  [4F 00] */
    /* TODO $0A7DF0: roxl.w d6, d6  [ED 76] */
    /* TODO $0A7DF2: dc.w $4f00  [4F 00] */
    M68K_ROL8(g_m68k.d[3], g_m68k.d[6]);
    /* TODO $0A7DF6: dc.w $4f00  [4F 00] */
    M68K_LSL16(g_m68k.d[2], 0x6);
    /* TODO $0A7DFA: dc.w $4f00  [4F 00] */
    M68K_ROL16(g_m68k.d[1], 0x6);
    /* TODO $0A7DFE: dc.w $4f00  [4F 00] */
    M68K_LSL16(g_m68k.d[1], g_m68k.d[6]);
    /* TODO $0A7E02: dc.w $4f00  [4F 00] */
    /* TODO $0A7E04: roxl.w d6, d3  [ED 73] */
    /* TODO $0A7E06: dc.w $4f00  [4F 00] */
    /* TODO $0A7E08: roxl.w d6, d7  [ED 77] */
    /* TODO $0A7E0A: dc.w $4f00  [4F 00] */
    M68K_ROL8(g_m68k.d[4], g_m68k.d[6]);
    /* TODO $0A7E0E: dc.w $4f00  [4F 00] */
    M68K_LSL16(g_m68k.d[3], 0x6);
    /* TODO $0A7E12: dc.w $4f00  [4F 00] */
    M68K_ROL16(g_m68k.d[2], 0x6);
    /* TODO $0A7E16: dc.w $4f00  [4F 00] */
    M68K_LSL16(g_m68k.d[2], g_m68k.d[6]);
    /* TODO $0A7E1A: dc.w $4f00  [4F 00] */
    /* TODO $0A7E1C: roxl.w d6, d3  [ED 73] */
    /* TODO $0A7E1E: dc.w $4f00  [4F 00] */
    M68K_ROL16(g_m68k.d[0], g_m68k.d[6]);
    /* TODO $0A7E22: dc.w $4f00  [4F 00] */
    M68K_ROL8(g_m68k.d[5], g_m68k.d[6]);
    /* TODO $0A7E26: dc.w $4f00  [4F 00] */
    M68K_LSL16(g_m68k.d[4], 0x6);
    /* TODO $0A7E2A: dc.w $4f00  [4F 00] */
    M68K_ROL16(g_m68k.d[3], 0x6);
    /* TODO $0A7E2E: dc.w $4f00  [4F 00] */
    M68K_LSL16(g_m68k.d[3], g_m68k.d[6]);
    /* TODO $0A7E32: dc.w $4f00  [4F 00] */
    /* TODO $0A7E34: roxl.w d6, d4  [ED 74] */
    /* TODO $0A7E36: dc.w $4f00  [4F 00] */
    M68K_ROL16(g_m68k.d[1], g_m68k.d[6]);
    /* TODO $0A7E3A: dc.w $4f00  [4F 00] */
    M68K_ROL8(g_m68k.d[6], g_m68k.d[6]);
    /* TODO $0A7E3E: dc.w $4f00  [4F 00] */
    M68K_LSL16(g_m68k.d[5], 0x6);
    /* TODO $0A7E42: dc.w $4f00  [4F 00] */
    M68K_ROL16(g_m68k.d[4], 0x6);
    /* TODO $0A7E46: dc.w $4f00  [4F 00] */
    M68K_LSL16(g_m68k.d[4], g_m68k.d[6]);
    /* TODO $0A7E4A: dc.w $4f00  [4F 00] */
    /* TODO $0A7E4C: roxl.w d6, d5  [ED 75] */
    /* TODO $0A7E4E: dc.w $4f00  [4F 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_ROL8(g_m68k.d[7], g_m68k.d[6]);
    /* TODO $0A7E56: dc.w $4f00  [4F 00] */
    M68K_LSL16(g_m68k.d[6], 0x6);
    /* TODO $0A7E5A: dc.w $4f00  [4F 00] */
    M68K_ROL16(g_m68k.d[5], 0x6);
    /* TODO $0A7E5E: dc.w $4f00  [4F 00] */
    M68K_LSL16(g_m68k.d[5], g_m68k.d[6]);
    /* TODO $0A7E62: dc.w $4f00  [4F 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_LSL16(g_m68k.d[0], 0x6);
    /* TODO $0A7E6E: dc.w $4f00  [4F 00] */
    M68K_LSL16(g_m68k.d[7], 0x6);
    /* TODO $0A7E72: dc.w $4f00  [4F 00] */
    M68K_ROL16(g_m68k.d[6], 0x6);
    /* TODO $0A7E76: dc.w $4f00  [4F 00] */
    M68K_LSL16(g_m68k.d[6], g_m68k.d[6]);
    /* TODO $0A7E7A: dc.w $4f00  [4F 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_LSL16(g_m68k.d[1], 0x6);
    /* TODO $0A7E86: dc.w $4f00  [4F 00] */
    /* TODO $0A7E88: roxl.w #$6, d0  [ED 50] */
    /* TODO $0A7E8A: dc.w $4f00  [4F 00] */
    M68K_ROL16(g_m68k.d[7], 0x6);
    /* TODO $0A7E8E: dc.w $4f00  [4F 00] */
    M68K_LSL16(g_m68k.d[7], g_m68k.d[6]);
    /* TODO $0A7E92: dc.w $4f00  [4F 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_LSL16(g_m68k.d[2], 0x6);
    /* TODO $0A7E9E: dc.w $4f00  [4F 00] */
    /* TODO $0A7EA0: roxl.w #$6, d1  [ED 51] */
    /* TODO $0A7EA2: dc.w $4f00  [4F 00] */
    M68K_LSL16(g_m68k.d[0], g_m68k.d[6]);
    /* TODO $0A7EA6: dc.w $4f00  [4F 00] */
    /* TODO $0A7EA8: roxl.w d6, d0  [ED 70] */
    /* TODO $0A7EAA: dc.w $4f00  [4F 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_LSL16(g_m68k.d[3], 0x6);
    /* TODO $0A7EB6: dc.w $4f00  [4F 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_LSL16(g_m68k.d[1], g_m68k.d[6]);
    /* TODO $0A7EBE: dc.w $4f00  [4F 00] */
    /* TODO $0A7EC0: roxl.w d6, d1  [ED 71] */
    /* TODO $0A7EC2: dc.w $4f00  [4F 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0A7ECC-$0A7ED0  (1 instructions, 4 bytes) */
void jt_0A7ECC(void) {
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x9); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0A821C-$0A8222  (2 instructions, 6 bytes) */
void jt_0A821C(void) {
    M68K_OR8(g_m68k.d[6], 0x2);
    M68K_ASR32(g_m68k.d[0], g_m68k.d[6]);
    /* WARNING: function did not end with RTS */
}

/* $0A8250-$0A8490  (183 instructions, 576 bytes) */
void jt_0A8250(void) {
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x10); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_LSL32(g_m68k.d[3], 0x6);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_LSL32(g_m68k.d[6], 0x6);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
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
    M68K_ROL16(g_m68k.d[2], g_m68k.d[6]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_ROL16(g_m68k.d[4], g_m68k.d[6]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_ROL16(g_m68k.d[7], g_m68k.d[6]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_LSL32(g_m68k.d[1], 0x6);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_LSL32(g_m68k.d[4], 0x6);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_LSL32(g_m68k.d[7], 0x6);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $0A82B8: roxl.l #$6, d4  [ED 94] */
    /* TODO $0A82BA: dc.w $4700  [47 00] */
    M68K_LSL32(g_m68k.d[3], g_m68k.d[6]);
    /* TODO $0A82BE: dc.w $4700  [47 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_ROL16(g_m68k.d[3], g_m68k.d[6]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_ROL16(g_m68k.d[5], g_m68k.d[6]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_LSL32(g_m68k.d[0], 0x6);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_LSL32(g_m68k.d[2], 0x6);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_LSL32(g_m68k.d[5], 0x6);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_LSL32(g_m68k.d[0], 0x6);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $0A82F8: roxl.l #$6, d5  [ED 95] */
    /* TODO $0A82FA: dc.w $4700  [47 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_ROL16(g_m68k.d[6], g_m68k.d[6]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_LSL32(g_m68k.d[1], 0x6);
    /* TODO $0A8336: dc.w $4700  [47 00] */
    /* TODO $0A8338: roxl.l #$6, d6  [ED 96] */
    /* TODO $0A833A: dc.w $4700  [47 00] */
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
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $0A8378: roxl.l #$6, d7  [ED 97] */
    /* TODO $0A837A: dc.w $4700  [47 00] */
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
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_ROL32(g_m68k.d[0], 0x6);
    /* TODO $0A83BA: dc.w $4700  [47 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $0A83C4: roxl.l d6, d5  [ED B5] */
    /* TODO $0A83C6: dc.w $4700  [47 00] */
    M68K_ROL32(g_m68k.d[3], g_m68k.d[6]);
    /* TODO $0A83CA: dc.w $4700  [47 00] */
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
    M68K_LSL32(g_m68k.d[2], 0x6);
    /* TODO $0A83F6: dc.w $4700  [47 00] */
    M68K_ROL32(g_m68k.d[1], 0x6);
    /* TODO $0A83FA: dc.w $4700  [47 00] */
    M68K_LSL32(g_m68k.d[4], g_m68k.d[6]);
    /* TODO $0A83FE: dc.w $4700  [47 00] */
    M68K_LSL32(g_m68k.d[6], g_m68k.d[6]);
    /* TODO $0A8402: dc.w $4700  [47 00] */
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
    M68K_LSL32(g_m68k.d[3], 0x6);
    /* TODO $0A8436: dc.w $4700  [47 00] */
    M68K_ROL32(g_m68k.d[2], 0x6);
    /* TODO $0A843A: dc.w $4700  [47 00] */
    M68K_LSL32(g_m68k.d[5], g_m68k.d[6]);
    /* TODO $0A843E: dc.w $4700  [47 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_ROL32(g_m68k.d[4], g_m68k.d[6]);
    /* TODO $0A844A: dc.w $4700  [47 00] */
    /* TODO $0A844C: dc.w $edc4  [ED C4] */
    /* TODO $0A844E: dc.w $4700  [47 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_LSL32(g_m68k.d[4], 0x6);
    /* TODO $0A8476: dc.w $4700  [47 00] */
    M68K_ROL32(g_m68k.d[3], 0x6);
    /* TODO $0A847A: dc.w $4700  [47 00] */
    M68K_LSL32(g_m68k.d[6], g_m68k.d[6]);
    /* TODO $0A847E: dc.w $4700  [47 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    /* TODO $0A8484: roxl.l d6, d6  [ED B6] */
    /* TODO $0A8486: dc.w $4700  [47 00] */
    M68K_ROL32(g_m68k.d[5], g_m68k.d[6]);
    /* TODO $0A848A: dc.w $4700  [47 00] */
    /* TODO $0A848C: dc.w $edc5  [ED C5] */
    /* TODO $0A848E: dc.w $4700  [47 00] */
    /* WARNING: function did not end with RTS */
}

/* $0A8754-$0A87B8  (28 instructions, 100 bytes) */
void jt_0A8754(void) {
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
    M68K_ROR32(g_m68k.d[7], 0x5);
    /* TODO $0A87AE: dc.w $4100  [41 00] */
    M68K_LSR32(g_m68k.d[4], g_m68k.d[5]);
    /* TODO $0A87B2: dc.w $4100  [41 00] */
    M68K_ROR32(g_m68k.d[3], g_m68k.d[5]);
    /* TODO $0A87B6: dc.w $4100  [41 00] */
    /* WARNING: function did not end with RTS */
}

/* $0A8B54-$0A8F54  (306 instructions, 1024 bytes) */
void jt_0A8B54(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_LSL8(g_m68k.d[6], g_m68k.d[5]);
    /* TODO $0A8B6E: dc.w $4100  [41 00] */
    M68K_LSL8(g_m68k.d[3], g_m68k.d[5]);
    /* TODO $0A8B72: dc.w $4100  [41 00] */
    /* TODO $0A8B74: roxl.b d5, d0  [EB 30] */
    /* TODO $0A8B76: dc.w $4100  [41 00] */
    /* TODO $0A8B78: roxl.b d5, d5  [EB 35] */
    /* TODO $0A8B7A: dc.w $4100  [41 00] */
    M68K_ROL8(g_m68k.d[2], g_m68k.d[5]);
    /* TODO $0A8B7E: dc.w $4100  [41 00] */
    M68K_ROL8(g_m68k.d[7], g_m68k.d[5]);
    /* TODO $0A8B82: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[4], 0x5);
    /* TODO $0A8B86: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[1], 0x5);
    /* TODO $0A8B8A: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[6], 0x5);
    /* TODO $0A8B8E: dc.w $4100  [41 00] */
    /* TODO $0A8B90: roxl.w #$5, d3  [EB 53] */
    /* TODO $0A8B92: dc.w $4100  [41 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_LSL8(g_m68k.d[7], g_m68k.d[5]);
    /* TODO $0A8BAE: dc.w $4100  [41 00] */
    M68K_LSL8(g_m68k.d[4], g_m68k.d[5]);
    /* TODO $0A8BB2: dc.w $4100  [41 00] */
    /* TODO $0A8BB4: roxl.b d5, d1  [EB 31] */
    /* TODO $0A8BB6: dc.w $4100  [41 00] */
    /* TODO $0A8BB8: roxl.b d5, d6  [EB 36] */
    /* TODO $0A8BBA: dc.w $4100  [41 00] */
    M68K_ROL8(g_m68k.d[3], g_m68k.d[5]);
    /* TODO $0A8BBE: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[0], 0x5);
    /* TODO $0A8BC2: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[5], 0x5);
    /* TODO $0A8BC6: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[2], 0x5);
    /* TODO $0A8BCA: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[7], 0x5);
    /* TODO $0A8BCE: dc.w $4100  [41 00] */
    /* TODO $0A8BD0: roxl.w #$5, d4  [EB 54] */
    /* TODO $0A8BD2: dc.w $4100  [41 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_LSL8(g_m68k.d[0], g_m68k.d[5]);
    /* TODO $0A8BEE: dc.w $4100  [41 00] */
    M68K_LSL8(g_m68k.d[5], g_m68k.d[5]);
    /* TODO $0A8BF2: dc.w $4100  [41 00] */
    /* TODO $0A8BF4: roxl.b d5, d2  [EB 32] */
    /* TODO $0A8BF6: dc.w $4100  [41 00] */
    /* TODO $0A8BF8: roxl.b d5, d7  [EB 37] */
    /* TODO $0A8BFA: dc.w $4100  [41 00] */
    M68K_ROL8(g_m68k.d[4], g_m68k.d[5]);
    /* TODO $0A8BFE: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[1], 0x5);
    /* TODO $0A8C02: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[6], 0x5);
    /* TODO $0A8C06: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[3], 0x5);
    /* TODO $0A8C0A: dc.w $4100  [41 00] */
    /* TODO $0A8C0C: roxl.w #$5, d0  [EB 50] */
    /* TODO $0A8C0E: dc.w $4100  [41 00] */
    /* TODO $0A8C10: roxl.w #$5, d5  [EB 55] */
    /* TODO $0A8C12: dc.w $4100  [41 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_LSL8(g_m68k.d[1], g_m68k.d[5]);
    /* TODO $0A8C2E: dc.w $4100  [41 00] */
    M68K_LSL8(g_m68k.d[6], g_m68k.d[5]);
    /* TODO $0A8C32: dc.w $4100  [41 00] */
    /* TODO $0A8C34: roxl.b d5, d3  [EB 33] */
    /* TODO $0A8C36: dc.w $4100  [41 00] */
    M68K_ROL8(g_m68k.d[0], g_m68k.d[5]);
    /* TODO $0A8C3A: dc.w $4100  [41 00] */
    M68K_ROL8(g_m68k.d[5], g_m68k.d[5]);
    /* TODO $0A8C3E: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[2], 0x5);
    /* TODO $0A8C42: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[7], 0x5);
    /* TODO $0A8C46: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[4], 0x5);
    /* TODO $0A8C4A: dc.w $4100  [41 00] */
    /* TODO $0A8C4C: roxl.w #$5, d1  [EB 51] */
    /* TODO $0A8C4E: dc.w $4100  [41 00] */
    /* TODO $0A8C50: roxl.w #$5, d6  [EB 56] */
    /* TODO $0A8C52: dc.w $4100  [41 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_LSL8(g_m68k.d[2], g_m68k.d[5]);
    /* TODO $0A8C6E: dc.w $4100  [41 00] */
    M68K_LSL8(g_m68k.d[7], g_m68k.d[5]);
    /* TODO $0A8C72: dc.w $4100  [41 00] */
    /* TODO $0A8C74: roxl.b d5, d4  [EB 34] */
    /* TODO $0A8C76: dc.w $4100  [41 00] */
    M68K_ROL8(g_m68k.d[1], g_m68k.d[5]);
    /* TODO $0A8C7A: dc.w $4100  [41 00] */
    M68K_ROL8(g_m68k.d[6], g_m68k.d[5]);
    /* TODO $0A8C7E: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[3], 0x5);
    /* TODO $0A8C82: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[0], 0x5);
    /* TODO $0A8C86: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[5], 0x5);
    /* TODO $0A8C8A: dc.w $4100  [41 00] */
    /* TODO $0A8C8C: roxl.w #$5, d2  [EB 52] */
    /* TODO $0A8C8E: dc.w $4100  [41 00] */
    /* TODO $0A8C90: roxl.w #$5, d7  [EB 57] */
    /* TODO $0A8C92: dc.w $4100  [41 00] */
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

/* $0A8F54-$0A8FBC  (36 instructions, 104 bytes) */
void jt_0A8F54(void) {
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
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_ROL16(g_m68k.d[0], 0x5);
    /* TODO $0A8F96: dc.w $4100  [41 00] */
    M68K_LSL16(g_m68k.d[5], g_m68k.d[5]);
    /* TODO $0A8F9A: dc.w $4100  [41 00] */
    /* TODO $0A8F9C: roxl.w d5, d4  [EB 74] */
    /* TODO $0A8F9E: dc.w $4100  [41 00] */
    M68K_LSL32(g_m68k.d[3], 0x5);
    /* TODO $0A8FA2: dc.w $4100  [41 00] */
    /* TODO $0A8FA4: roxl.l #$5, d2  [EB 92] */
    /* TODO $0A8FA6: dc.w $4100  [41 00] */
    M68K_LSL32(g_m68k.d[1], g_m68k.d[5]);
    /* TODO $0A8FAA: dc.w $4100  [41 00] */
    M68K_LSL32(g_m68k.d[4], g_m68k.d[5]);
    M68K_NOT8(g_m68k.d[0]);
    M68K_LSL32(g_m68k.d[5], g_m68k.d[5]);
    M68K_NOT8(g_m68k.d[0]);
    /* TODO $0A8FB4: roxl.l d5, d1  [EB B1] */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* TODO $0A8FB8: dc.w $ebc0  [EB C0] */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $0A9354-$0A9400  (86 instructions, 172 bytes) */
void jt_0A9354(void) {
    M68K_LSR8(g_m68k.d[0], g_m68k.d[6]);
    /* TODO $0A9356: dc.w $4100  [41 00] */
    M68K_LSR8(g_m68k.d[5], g_m68k.d[6]);
    /* TODO $0A935A: dc.w $4100  [41 00] */
    /* TODO $0A935C: roxr.l #$6, d2  [EC 32] */
    /* TODO $0A935E: dc.w $4100  [41 00] */
    /* TODO $0A9360: roxr.l #$6, d7  [EC 37] */
    /* TODO $0A9362: dc.w $4100  [41 00] */
    M68K_ROR8(g_m68k.d[3], g_m68k.d[6]);
    /* TODO $0A9366: dc.w $4100  [41 00] */
    M68K_ROR8(g_m68k.d[7], g_m68k.d[6]);
    /* TODO $0A936A: dc.w $4100  [41 00] */
    M68K_LSL32(g_m68k.d[4], g_m68k.d[5]);
    M68K_NOT8(g_m68k.d[0]);
    M68K_LSL32(g_m68k.d[5], g_m68k.d[5]);
    M68K_NOT8(g_m68k.d[0]);
    M68K_ASR16(g_m68k.d[4], 0x6);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_LSR16(g_m68k.d[1], 0x6);
    /* TODO $0A937A: dc.w $4500  [45 00] */
    M68K_LSR16(g_m68k.d[6], 0x6);
    /* TODO $0A937E: dc.w $4500  [45 00] */
    /* TODO $0A9380: roxr.w #$6, d3  [EC 53] */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_ROR16(g_m68k.d[0], 0x6);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_ROR16(g_m68k.d[5], 0x6);
    M68K_NEG8(g_m68k.d[0]);
    M68K_ASR16(g_m68k.d[2], g_m68k.d[6]);
    M68K_NEG8(g_m68k.d[0]);
    M68K_ASR16(g_m68k.d[7], g_m68k.d[6]);
    M68K_NEG8(g_m68k.d[0]);
    M68K_LSR8(g_m68k.d[1], g_m68k.d[6]);
    /* TODO $0A9396: dc.w $4100  [41 00] */
    M68K_LSR8(g_m68k.d[6], g_m68k.d[6]);
    /* TODO $0A939A: dc.w $4100  [41 00] */
    /* TODO $0A939C: roxr.l #$6, d3  [EC 33] */
    /* TODO $0A939E: dc.w $4100  [41 00] */
    M68K_ROR8(g_m68k.d[0], g_m68k.d[6]);
    /* TODO $0A93A2: dc.w $4100  [41 00] */
    M68K_ROR8(g_m68k.d[4], g_m68k.d[6]);
    /* TODO $0A93A6: dc.w $4100  [41 00] */
    M68K_LSL32(g_m68k.d[3], g_m68k.d[5]);
    /* TODO $0A93AA: dc.w $4100  [41 00] */
    M68K_LSL32(g_m68k.d[4], g_m68k.d[5]);
    M68K_NOT8(g_m68k.d[0]);
    M68K_LSL32(g_m68k.d[5], g_m68k.d[5]);
    M68K_NOT8(g_m68k.d[0]);
    M68K_ASR16(g_m68k.d[5], 0x6);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_LSR16(g_m68k.d[2], 0x6);
    /* TODO $0A93BA: dc.w $4500  [45 00] */
    M68K_LSR16(g_m68k.d[7], 0x6);
    /* TODO $0A93BE: dc.w $4500  [45 00] */
    /* TODO $0A93C0: roxr.w #$6, d4  [EC 54] */
    M68K_NEG8(g_m68k.d[0]);
    M68K_ROR16(g_m68k.d[1], 0x6);
    M68K_NEG8(g_m68k.d[0]);
    M68K_ROR16(g_m68k.d[6], 0x6);
    M68K_NEG8(g_m68k.d[0]);
    M68K_ASR16(g_m68k.d[3], g_m68k.d[6]);
    M68K_NEG8(g_m68k.d[0]);
    M68K_LSR16(g_m68k.d[0], g_m68k.d[6]);
    M68K_NEG8(g_m68k.d[0]);
    M68K_LSR8(g_m68k.d[2], g_m68k.d[6]);
    /* TODO $0A93D6: dc.w $4100  [41 00] */
    M68K_LSR8(g_m68k.d[7], g_m68k.d[6]);
    /* TODO $0A93DA: dc.w $4100  [41 00] */
    /* TODO $0A93DC: roxr.l #$6, d4  [EC 34] */
    /* TODO $0A93DE: dc.w $4100  [41 00] */
    M68K_ROR8(g_m68k.d[1], g_m68k.d[6]);
    /* TODO $0A93E2: dc.w $4100  [41 00] */
    M68K_ROR8(g_m68k.d[5], g_m68k.d[6]);
    /* TODO $0A93E6: dc.w $4100  [41 00] */
    M68K_LSL32(g_m68k.d[3], g_m68k.d[5]);
    /* TODO $0A93EA: dc.w $4100  [41 00] */
    M68K_LSL32(g_m68k.d[4], g_m68k.d[5]);
    M68K_NOT8(g_m68k.d[0]);
    M68K_LSL32(g_m68k.d[5], g_m68k.d[5]);
    M68K_NOT8(g_m68k.d[0]);
    M68K_ASR16(g_m68k.d[6], 0x6);
    /* TODO $0A93F6: dc.w $4500  [45 00] */
    M68K_LSR16(g_m68k.d[3], 0x6);
    /* TODO $0A93FA: dc.w $4500  [45 00] */
    /* TODO $0A93FC: roxr.w #$6, d0  [EC 50] */
    /* TODO $0A93FE: dc.w $4500  [45 00] */
    /* WARNING: function did not end with RTS */
}

/* $0A9400-$0A9754  (250 instructions, 852 bytes) */
void jt_0A9400(void) {
    /* TODO $0A9400: roxr.w #$6, d5  [EC 55] */
    M68K_NEG8(g_m68k.d[0]);
    M68K_ROR16(g_m68k.d[2], 0x6);
    M68K_NEG8(g_m68k.d[0]);
    M68K_ROR16(g_m68k.d[7], 0x6);
    M68K_NEG8(g_m68k.d[0]);
    M68K_ASR16(g_m68k.d[4], g_m68k.d[6]);
    M68K_NEG8(g_m68k.d[0]);
    M68K_LSR16(g_m68k.d[1], g_m68k.d[6]);
    M68K_NEG8(g_m68k.d[0]);
    M68K_LSR8(g_m68k.d[3], g_m68k.d[6]);
    /* TODO $0A9416: dc.w $4100  [41 00] */
    /* TODO $0A9418: roxr.l #$6, d0  [EC 30] */
    /* TODO $0A941A: dc.w $4100  [41 00] */
    /* TODO $0A941C: roxr.l #$6, d5  [EC 35] */
    /* TODO $0A941E: dc.w $4100  [41 00] */
    M68K_ROR8(g_m68k.d[2], g_m68k.d[6]);
    /* TODO $0A9422: dc.w $4100  [41 00] */
    M68K_ROR8(g_m68k.d[6], g_m68k.d[6]);
    /* TODO $0A9426: dc.w $4100  [41 00] */
    M68K_LSL32(g_m68k.d[3], g_m68k.d[5]);
    /* TODO $0A942A: dc.w $4100  [41 00] */
    M68K_ASR16(g_m68k.d[0], 0x6);
    M68K_NOT8(g_m68k.d[0]);
    M68K_ASR16(g_m68k.d[2], 0x6);
    M68K_NOT8(g_m68k.d[0]);
    M68K_ASR16(g_m68k.d[7], 0x6);
    /* TODO $0A9436: dc.w $4500  [45 00] */
    M68K_LSR16(g_m68k.d[4], 0x6);
    /* TODO $0A943A: dc.w $4500  [45 00] */
    /* TODO $0A943C: roxr.w #$6, d1  [EC 51] */
    /* TODO $0A943E: dc.w $4500  [45 00] */
    /* TODO $0A9440: roxr.w #$6, d6  [EC 56] */
    M68K_NEG8(g_m68k.d[0]);
    M68K_ROR16(g_m68k.d[3], 0x6);
    M68K_NEG8(g_m68k.d[0]);
    M68K_ASR16(g_m68k.d[0], g_m68k.d[6]);
    M68K_NEG8(g_m68k.d[0]);
    M68K_ASR16(g_m68k.d[5], g_m68k.d[6]);
    M68K_NEG8(g_m68k.d[0]);
    M68K_LSR16(g_m68k.d[2], g_m68k.d[6]);
    M68K_NEG8(g_m68k.d[0]);
    M68K_LSR8(g_m68k.d[4], g_m68k.d[6]);
    /* TODO $0A9456: dc.w $4100  [41 00] */
    /* TODO $0A9458: roxr.l #$6, d1  [EC 31] */
    /* TODO $0A945A: dc.w $4100  [41 00] */
    /* TODO $0A945C: roxr.l #$6, d6  [EC 36] */
    /* TODO $0A945E: dc.w $4100  [41 00] */
    M68K_LSL32(g_m68k.d[3], g_m68k.d[5]);
    /* TODO $0A9462: dc.w $4100  [41 00] */
    M68K_LSL32(g_m68k.d[3], g_m68k.d[5]);
    /* TODO $0A9466: dc.w $4100  [41 00] */
    M68K_LSL32(g_m68k.d[3], g_m68k.d[5]);
    /* TODO $0A946A: dc.w $4100  [41 00] */
    M68K_ASR16(g_m68k.d[1], 0x6);
    M68K_NOT8(g_m68k.d[0]);
    M68K_ASR16(g_m68k.d[3], 0x6);
    M68K_NOT8(g_m68k.d[0]);
    M68K_LSR16(g_m68k.d[0], 0x6);
    /* TODO $0A9476: dc.w $4500  [45 00] */
    M68K_LSR16(g_m68k.d[5], 0x6);
    /* TODO $0A947A: dc.w $4500  [45 00] */
    /* TODO $0A947C: roxr.w #$6, d2  [EC 52] */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* TODO $0A9480: roxr.w #$6, d7  [EC 57] */
    M68K_NEG8(g_m68k.d[0]);
    M68K_ROR16(g_m68k.d[4], 0x6);
    M68K_NEG8(g_m68k.d[0]);
    M68K_ASR16(g_m68k.d[1], g_m68k.d[6]);
    M68K_NEG8(g_m68k.d[0]);
    M68K_ASR16(g_m68k.d[6], g_m68k.d[6]);
    M68K_NEG8(g_m68k.d[0]);
    M68K_LSR16(g_m68k.d[3], g_m68k.d[6]);
    M68K_NEG8(g_m68k.d[0]);
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

/* $0A9802-$0A980A  (2 instructions, 8 bytes) */
void jt_0A9802(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_ADD16(g_m68k.d[5], bus_read16(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 2));
    /* WARNING: function did not end with RTS */
}

/* $0A980A-$0A9812  (3 instructions, 8 bytes) */
void jt_0A980A(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_ADD16(g_m68k.d[5], _predec16(3));
    /* TODO $0A9810: dc.w $4300  [43 00] */
    /* WARNING: function did not end with RTS */
}

/* $0A9812-$0A981A  (2 instructions, 8 bytes) */
void jt_0A9812(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_ADD16(g_m68k.d[5], bus_read16(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 2));
    /* WARNING: function did not end with RTS */
}

/* $0A981A-$0A9822  (2 instructions, 8 bytes) */
void jt_0A981A(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_ADD16(g_m68k.d[5], bus_read16(g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 2));
    /* WARNING: function did not end with RTS */
}

/* $0A9822-$0A982A  (2 instructions, 8 bytes) */
void jt_0A9822(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_ADD16(g_m68k.d[5], bus_read16(g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 2));
    /* WARNING: function did not end with RTS */
}

/* $0A982A-$0A9832  (2 instructions, 8 bytes) */
void jt_0A982A(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_ADD16(g_m68k.d[5], bus_read16(g_m68k.a[6] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 2));
    /* WARNING: function did not end with RTS */
}

/* $0A9832-$0A983A  (2 instructions, 8 bytes) */
void jt_0A9832(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_ADD16(g_m68k.d[5], bus_read16(g_m68k.a[7] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 2));
    /* WARNING: function did not end with RTS */
}

/* $0A983A-$0A9842  (2 instructions, 8 bytes) */
void jt_0A983A(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_ADD16(g_m68k.d[5], bus_read16(0x004300));
    /* WARNING: function did not end with RTS */
}

/* $0A9842-$0A984C  (2 instructions, 10 bytes) */
void jt_0A9842(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_ADD16(g_m68k.d[5], bus_read16(0x43000001));
    /* WARNING: function did not end with RTS */
}

/* $0A984A-$0A9852  (4 instructions, 8 bytes) */
void jt_0A984A(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_OR8(g_m68k.d[1], 0x7a);
    M68K_ADD16(g_m68k.d[5], bus_read16(0xadb50));
    /* TODO $0A9850: dc.w $4300  [43 00] */
    /* WARNING: function did not end with RTS */
}

/* $0A9852-$0A985A  (2 instructions, 8 bytes) */
void jt_0A9852(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_ADD16(g_m68k.d[5], /* UNHANDLED_READ: (a16, d4.w * 2) */ 0);
    /* WARNING: function did not end with RTS */
}

/* $0A985A-$0A9862  (2 instructions, 8 bytes) */
void jt_0A985A(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_ADD16(g_m68k.d[5], 0x4300);
    /* WARNING: function did not end with RTS */
}
