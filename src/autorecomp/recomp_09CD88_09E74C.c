/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $09CD88 - $09E74C */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

/* $09CD88-$09CD8C  (1 instructions, 4 bytes) */
void jt_09CD88(void) {
    M68K_OR8(g_m68k.d[4], 0xa);
    /* WARNING: function did not end with RTS */
}

/* $09CE2C-$09CE38  (3 instructions, 12 bytes) */
void jt_09CE2C(void) {
    M68K_OR8(g_m68k.d[6], 0xa);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $09CF20-$09CF50  (14 instructions, 48 bytes) */
void jt_09CF20(void) {
    M68K_OR8(g_m68k.d[4], 0xa);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP8(g_m68k.d[7], _postinc8(4));
    M68K_SUBX8(g_m68k.d[1], g_m68k.d[0]);
    M68K_CMP8(g_m68k.d[7], _predec8(2));
    M68K_SUBX8(g_m68k.d[1], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $09CFC4-$09CFCC  (3 instructions, 8 bytes) */
void jt_09CFC4(void) {
    M68K_OR8(g_m68k.d[5], 0xa);
    M68K_CMP8(g_m68k.d[7], bus_read8(g_m68k.a[0]));
    M68K_SUBX8(g_m68k.d[1], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $09D090-$09D0F4  (36 instructions, 100 bytes) */
void jt_09D090(void) {
    M68K_OR8(g_m68k.d[3], 0x8);
    M68K_EOR32(g_m68k.d[2], g_m68k.d[7]);
    /* TODO $09D096: sbcd.b d0, d7  [8F 00] */
    M68K_EOR32(g_m68k.d[5], g_m68k.d[7]);
    /* TODO $09D09A: sbcd.b d0, d7  [8F 00] */
    M68K_EOR32(g_m68k.d[0], g_m68k.d[7]);
    /* TODO $09D09E: sbcd.b d0, d7  [8F 00] */
    M68K_EOR32(g_m68k.d[0], g_m68k.d[7]);
    /* TODO $09D0A2: sbcd.b d0, d7  [8F 00] */
    M68K_EOR32(g_m68k.d[0], g_m68k.d[7]);
    /* TODO $09D0A6: sbcd.b d0, d7  [8F 00] */
    M68K_EOR32(g_m68k.d[0], g_m68k.d[7]);
    /* TODO $09D0AA: sbcd.b d0, d7  [8F 00] */
    M68K_EOR32(g_m68k.d[1], g_m68k.d[7]);
    /* TODO $09D0AE: sbcd.b d0, d7  [8F 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_EOR32(g_m68k.d[3], g_m68k.d[7]);
    /* TODO $09D0B6: sbcd.b d0, d7  [8F 00] */
    M68K_EOR32(g_m68k.d[6], g_m68k.d[7]);
    /* TODO $09D0BA: sbcd.b d0, d7  [8F 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_EOR32(g_m68k.d[4], g_m68k.d[7]);
    /* TODO $09D0D6: sbcd.b d0, d7  [8F 00] */
    M68K_EOR32(g_m68k.d[7], g_m68k.d[7]);
    /* TODO $09D0DA: sbcd.b d0, d7  [8F 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $09D0F4-$09D118  (12 instructions, 36 bytes) */
void jt_09D0F4(void) {
    M68K_OR8(g_m68k.d[4], 0x2);
    { uint32_t _ea = g_m68k.a[5]; uint32_t _tmp = bus_read32(_ea); M68K_OR32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    M68K_OR8(g_m68k.d[7], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[6] + (-0x7200)); uint32_t _tmp = bus_read32(_ea); M68K_OR32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[6]; uint32_t _tmp = bus_read32(_ea); M68K_OR32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    M68K_OR8(g_m68k.d[7], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[7] + (-0x7200)); uint32_t _tmp = bus_read32(_ea); M68K_OR32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[7]; uint32_t _tmp = bus_read32(_ea); M68K_OR32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    M68K_OR8(g_m68k.d[7], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[0] + 0 + (int32_t)g_m68k.a[0] * 8); uint32_t _tmp = bus_read32(_ea); M68K_OR32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[0] + (-0x7200)); uint32_t _tmp = bus_read32(_ea); M68K_OR32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[1] + 0 + (int32_t)g_m68k.a[0] * 8); uint32_t _tmp = bus_read32(_ea); M68K_OR32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $09D118-$09D13C  (16 instructions, 36 bytes) */
void jt_09D118(void) {
    M68K_OR8(g_m68k.d[4], 0x2);
    /* TODO $09D11C: cmpm.l (a0)+, (a7)+  [BF 88] */
    M68K_OR8(g_m68k.d[7], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[4]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[7]); bus_write32(_ea, _tmp); }
    M68K_OR8(g_m68k.d[7], g_m68k.d[0]);
    /* TODO $09D124: cmpm.l (a1)+, (a7)+  [BF 89] */
    M68K_OR8(g_m68k.d[7], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[5]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[7]); bus_write32(_ea, _tmp); }
    M68K_OR8(g_m68k.d[7], g_m68k.d[0]);
    /* TODO $09D12C: cmpm.l (a2)+, (a7)+  [BF 8A] */
    M68K_OR8(g_m68k.d[7], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[7]); bus_write32(_ea, _tmp); }
    M68K_OR8(g_m68k.d[7], g_m68k.d[0]);
    /* TODO $09D134: cmpm.l (a3)+, (a7)+  [BF 8B] */
    M68K_OR8(g_m68k.d[7], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[1] + 0 + (int32_t)g_m68k.a[0] * 8); uint32_t _tmp = bus_read32(_ea); M68K_OR32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $09D13C-$09D160  (16 instructions, 36 bytes) */
void jt_09D13C(void) {
    M68K_OR8(g_m68k.d[4], 0x2);
    /* TODO $09D140: cmpm.l (a4)+, (a7)+  [BF 8C] */
    M68K_OR8(g_m68k.d[7], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[7]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[7]); bus_write32(_ea, _tmp); }
    M68K_OR8(g_m68k.d[7], g_m68k.d[0]);
    /* TODO $09D148: cmpm.l (a5)+, (a7)+  [BF 8D] */
    M68K_OR8(g_m68k.d[7], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[0]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[7]); bus_write32(_ea, _tmp); }
    M68K_OR8(g_m68k.d[7], g_m68k.d[0]);
    /* TODO $09D150: cmpm.l (a6)+, (a7)+  [BF 8E] */
    M68K_OR8(g_m68k.d[7], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[1]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[7]); bus_write32(_ea, _tmp); }
    M68K_OR8(g_m68k.d[7], g_m68k.d[0]);
    /* TODO $09D158: cmpm.l (a7)+, (a7)+  [BF 8F] */
    M68K_OR8(g_m68k.d[7], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[1] + 0 + (int32_t)g_m68k.a[0] * 8); uint32_t _tmp = bus_read32(_ea); M68K_OR32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $09D160-$09D184  (16 instructions, 36 bytes) */
void jt_09D160(void) {
    M68K_OR8(g_m68k.d[4], 0x2);
    { uint32_t _ea = g_m68k.a[0]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[7]); bus_write32(_ea, _tmp); }
    M68K_OR8(g_m68k.d[7], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[7]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[7]); bus_write32(_ea, _tmp); }
    M68K_OR8(g_m68k.d[7], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[1]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[7]); bus_write32(_ea, _tmp); }
    M68K_OR8(g_m68k.d[7], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[2]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[7]); bus_write32(_ea, _tmp); }
    M68K_OR8(g_m68k.d[7], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[2]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[7]); bus_write32(_ea, _tmp); }
    M68K_OR8(g_m68k.d[7], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[3]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[7]); bus_write32(_ea, _tmp); }
    M68K_OR8(g_m68k.d[7], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[3]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[7]); bus_write32(_ea, _tmp); }
    M68K_OR8(g_m68k.d[7], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[1] + 0 + (int32_t)g_m68k.a[0] * 8); uint32_t _tmp = bus_read32(_ea); M68K_OR32(_tmp, g_m68k.d[1]); bus_write32(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $09D184-$09D188  (1 instructions, 4 bytes) */
void jt_09D184(void) {
    M68K_OR8(g_m68k.d[6], 0x9);
    /* WARNING: function did not end with RTS */
}

/* $09D260-$09D2B8  (28 instructions, 88 bytes) */
void jt_09D260(void) {
    M68K_OR8(g_m68k.d[6], 0x8);
    { uint32_t _ea = g_m68k.a[4]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[7]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[6], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[7]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[6], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[2]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[7]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[6], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[1] + (-0x6400)); uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[7]); bus_write32(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[7]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[7]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[6], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[3]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[7]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[6], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[2] + (-0x6400)); uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[7]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[1] + 0 + (int32_t)g_m68k.a[1] * 4); uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[7]); bus_write32(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[4]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[7]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[6], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[3] + (-0x6400)); uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[7]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[2] + 0 + (int32_t)g_m68k.a[1] * 4); uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[7]); bus_write32(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $09D324-$09D340  (13 instructions, 28 bytes) */
void jt_09D324(void) {
    M68K_OR8(g_m68k.d[1], 0x6);
    M68K_CMP32(g_m68k.d[6], g_m68k.d[1]);
    M68K_SUB8(g_m68k.d[6], g_m68k.d[0]);
    M68K_CMP32(g_m68k.d[6], g_m68k.d[6]);
    M68K_SUB8(g_m68k.d[6], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[5]; uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[7]); bus_write32(_ea, _tmp); }
    M68K_SUB8(g_m68k.d[6], g_m68k.d[0]);
    M68K_CMP32(g_m68k.d[6], g_m68k.d[1]);
    M68K_SUB8(g_m68k.d[6], g_m68k.d[0]);
    M68K_CMP32(g_m68k.d[6], g_m68k.d[1]);
    M68K_SUB8(g_m68k.d[6], g_m68k.d[0]);
    M68K_CMP32(g_m68k.d[6], _predec32(6));
    M68K_SUB8(g_m68k.d[6], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $09D340-$09D34C  (3 instructions, 12 bytes) */
void jt_09D340(void) {
    M68K_OR8(g_m68k.d[1], 0x2);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $09D34C-$09D350  (1 instructions, 4 bytes) */
void jt_09D34C(void) {
    M68K_OR8(g_m68k.d[6], 0x9);
    /* WARNING: function did not end with RTS */
}

/* $09D428-$09D4C0  (54 instructions, 152 bytes) */
void jt_09D428(void) {
    M68K_OR8(g_m68k.d[6], 0x8);
    M68K_CMP32(g_m68k.a[7], g_m68k.d[6]);
    M68K_SUB8(g_m68k.d[6], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[7], g_m68k.a[1]);
    M68K_SUB8(g_m68k.d[6], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[7], g_m68k.a[7]);
    M68K_SUB8(g_m68k.d[6], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[7], bus_read32(g_m68k.a[7]));
    M68K_SUB8(g_m68k.d[6], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP32(g_m68k.a[7], g_m68k.a[2]);
    M68K_SUB8(g_m68k.d[6], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[7], bus_read32(g_m68k.a[0]));
    M68K_SUB8(g_m68k.d[6], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[7], _postinc32(0));
    M68K_SUB8(g_m68k.d[6], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[7], _predec32(0));
    M68K_SUB8(g_m68k.d[6], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP32(g_m68k.a[7], bus_read32(g_m68k.a[1]));
    M68K_SUB8(g_m68k.d[6], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[7], _postinc32(1));
    M68K_SUB8(g_m68k.d[6], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[7], _predec32(1));
    M68K_SUB8(g_m68k.d[6], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[7], _predec32(6));
    M68K_SUB8(g_m68k.d[6], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP32(g_m68k.a[7], _postinc32(2));
    M68K_SUB8(g_m68k.d[6], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[7], _predec32(2));
    M68K_SUB8(g_m68k.d[6], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[7], _predec32(7));
    M68K_SUB8(g_m68k.d[6], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[7], g_m68k.d[0]);
    M68K_SUB8(g_m68k.d[6], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = (g_m68k.a[4] + 0 + (int32_t)g_m68k.a[1] * 4); uint32_t _tmp = bus_read32(_ea); M68K_EOR32(_tmp, g_m68k.d[7]); bus_write32(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $09D4EC-$09D590  (59 instructions, 164 bytes) */
void jt_09D4EC(void) {
    M68K_OR8(g_m68k.d[4], 0xa);
    M68K_CMP32(g_m68k.a[7], g_m68k.d[7]);
    M68K_SUBX8(g_m68k.d[5], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[7], g_m68k.a[3]);
    M68K_SUBX8(g_m68k.d[5], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[7], bus_read32(g_m68k.a[2]));
    M68K_SUBX8(g_m68k.d[5], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP32(g_m68k.a[7], g_m68k.a[0]);
    M68K_SUBX8(g_m68k.d[5], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[7], g_m68k.a[4]);
    M68K_SUBX8(g_m68k.d[5], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[7], bus_read32(g_m68k.a[3]));
    M68K_SUBX8(g_m68k.d[5], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[7], _postinc32(3));
    M68K_SUBX8(g_m68k.d[5], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP32(g_m68k.a[7], g_m68k.a[5]);
    M68K_SUBX8(g_m68k.d[5], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[7], bus_read32(g_m68k.a[4]));
    M68K_SUBX8(g_m68k.d[5], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[7], _postinc32(4));
    M68K_SUBX8(g_m68k.d[5], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP32(g_m68k.a[7], g_m68k.a[6]);
    M68K_SUBX8(g_m68k.d[5], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[7], bus_read32(g_m68k.a[5]));
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
    M68K_CMP32(g_m68k.a[7], _postinc32(5));
    M68K_SUBX8(g_m68k.d[5], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[7], bus_read32(g_m68k.a[6] + (-0x6500)));
    /* WARNING: function did not end with RTS */
}

/* $09D590-$09D5C4  (17 instructions, 52 bytes) */
void jt_09D590(void) {
    M68K_OR8(g_m68k.d[2], 0x6);
    M68K_CMP32(g_m68k.a[7], bus_read32(g_m68k.a[7] + (-0x6500)));
    M68K_CMP32(g_m68k.a[7], bus_read32(0x009B00));
    M68K_AND8(g_m68k.d[0], g_m68k.d[6]);
    M68K_SUBX8(g_m68k.d[5], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP32(g_m68k.a[7], bus_read32(0x9B00C007));
    M68K_SUBX8(g_m68k.d[5], g_m68k.d[0]);
    M68K_AND8(g_m68k.d[0], bus_read8(g_m68k.a[5]));
    M68K_SUBX8(g_m68k.d[5], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[7], _postinc32(5));
    M68K_SUBX8(g_m68k.d[5], g_m68k.d[0]);
    M68K_CMP32(g_m68k.a[7], _postinc32(5));
    M68K_SUBX8(g_m68k.d[5], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $09D5C4-$09D5E8  (10 instructions, 36 bytes) */
void jt_09D5C4(void) {
    M68K_OR8(g_m68k.d[2], 0x6);
    M68K_CMP32(g_m68k.a[6], bus_read32(0x9B01BFFA));
    M68K_SUBX8(g_m68k.d[5], g_m68k.d[0]);
    M68K_CMP8(g_m68k.d[7], g_m68k.d[1]);
    M68K_SUBX8(g_m68k.d[5], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP32(g_m68k.a[6], bus_read32(0x9B00BFFB));
    M68K_SUBX8(g_m68k.d[5], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $09D5F8-$09D624  (15 instructions, 44 bytes) */
void jt_09D5F8(void) {
    M68K_OR8(g_m68k.d[2], 0x5);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
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

/* $09D624-$09D650  (15 instructions, 44 bytes) */
void jt_09D624(void) {
    M68K_OR8(g_m68k.d[2], 0x5);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
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

/* $09D650-$09D680  (14 instructions, 48 bytes) */
void jt_09D650(void) {
    M68K_OR8(g_m68k.d[6], 0xa);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP32(g_m68k.a[7], 0x9a00c009);
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    M68K_AND8(g_m68k.d[0], bus_read8(g_m68k.a[7]));
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    M68K_AND8(g_m68k.d[0], _predec8(4));
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    M68K_AND8(g_m68k.d[0], bus_read8(g_m68k.a[7] + (-0x6600)));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_CMP32(g_m68k.a[7], bus_read32(g_m68k.a[0] + 0 + (int32_t)g_m68k.a[1] * 2));
    /* WARNING: function did not end with RTS */
}

/* $09D744-$09D750  (4 instructions, 12 bytes) */
void jt_09D744(void) {
    M68K_OR8(g_m68k.d[6], 0xa);
    M68K_CMP32(g_m68k.a[7], bus_read32(g_m68k.a[5] + 0 + (int32_t)g_m68k.a[1] * 2));
    M68K_AND8(g_m68k.d[0], g_m68k.d[2]);
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $09D838-$09D8B8  (45 instructions, 128 bytes) */
void jt_09D838(void) {
    M68K_OR8(g_m68k.d[4], 0x8);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND16(g_m68k.d[0], bus_read16(g_m68k.a[0] + (-0x6600)));
    M68K_AND16(g_m68k.d[0], bus_read16(g_m68k.a[6] + 0 + (int32_t)g_m68k.a[1] * 2));
    M68K_AND32(g_m68k.d[0], g_m68k.d[5]);
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    M68K_AND32(g_m68k.d[0], bus_read32(g_m68k.a[4]));
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    M68K_AND32(g_m68k.d[0], _predec32(1));
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    M68K_AND32(g_m68k.d[0], bus_read32(g_m68k.a[6] + (-0x6600)));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_AND16(g_m68k.d[0], _postinc16(5));
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    M68K_AND16(g_m68k.d[0], bus_read16(g_m68k.a[1] + (-0x6600)));
    M68K_AND16(g_m68k.d[0], bus_read16(g_m68k.a[7] + 0 + (int32_t)g_m68k.a[1] * 2));
    M68K_AND32(g_m68k.d[0], g_m68k.d[6]);
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    M68K_AND32(g_m68k.d[0], bus_read32(g_m68k.a[5]));
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    M68K_AND32(g_m68k.d[0], _predec32(2));
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    M68K_AND32(g_m68k.d[0], bus_read32(g_m68k.a[7] + (-0x6600)));
    M68K_AND32(g_m68k.d[0], bus_read32(0x9d87a + (int32_t)g_m68k.a[1] * 2));
    M68K_AND16(g_m68k.d[0], _postinc16(6));
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    M68K_AND16(g_m68k.d[0], bus_read16(g_m68k.a[2] + (-0x6600)));
    M68K_AND16(g_m68k.d[0], bus_read16(0x009A00));
    M68K_AND32(g_m68k.d[0], g_m68k.d[7]);
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    M68K_AND32(g_m68k.d[0], bus_read32(g_m68k.a[6]));
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    M68K_AND32(g_m68k.d[0], _predec32(3));
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    M68K_AND32(g_m68k.d[0], bus_read32(g_m68k.a[0] + 0 + (int32_t)g_m68k.a[1] * 2));
    M68K_AND32(g_m68k.d[0], 0x9a00c05f);
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    M68K_AND16(g_m68k.d[0], bus_read16(g_m68k.a[3] + (-0x6600)));
    M68K_AND16(g_m68k.d[0], bus_read16(0x9A00C088));
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    M68K_AND32(g_m68k.d[0], bus_read32(g_m68k.a[7]));
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[3], bus_read8(g_m68k.a[1]));
    M68K_SUB8(g_m68k.d[5], g_m68k.d[0]);
    M68K_AND32(g_m68k.d[0], bus_read32(g_m68k.a[1] + 0 + (int32_t)g_m68k.a[1] * 2));
    /* WARNING: function did not end with RTS */
}

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
