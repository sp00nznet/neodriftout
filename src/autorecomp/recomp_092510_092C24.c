/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $092510 - $092C24 */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

/* $092510-$092534  (17 instructions, 36 bytes) */
void jt_092510(void) {
    M68K_OR8(g_m68k.d[2], 0x4);
    g_m68k.a[0] += (int16_t)(uint16_t)(g_m68k.d[3]);
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[2] -= 4; bus_write32(g_m68k.a[2], _mv); M68K_TST32(_mv); }
    g_m68k.a[0] += (int16_t)(uint16_t)(g_m68k.a[2]);
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[2] -= 4; bus_write32(g_m68k.a[2], _mv); M68K_TST32(_mv); }
    g_m68k.a[0] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[5]));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[2] -= 4; bus_write32(g_m68k.a[2], _mv); M68K_TST32(_mv); }
    g_m68k.a[0] += (int16_t)(uint16_t)(_predec16(3));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[2] -= 4; bus_write32(g_m68k.a[2], _mv); M68K_TST32(_mv); }
    g_m68k.a[0] += (int16_t)(uint16_t)(g_m68k.d[4]);
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[2] -= 4; bus_write32(g_m68k.a[2], _mv); M68K_TST32(_mv); }
    g_m68k.a[0] += (int16_t)(uint16_t)(g_m68k.a[3]);
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[2] -= 4; bus_write32(g_m68k.a[2], _mv); M68K_TST32(_mv); }
    g_m68k.a[0] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[6]));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[2] -= 4; bus_write32(g_m68k.a[2], _mv); M68K_TST32(_mv); }
    g_m68k.a[0] += (int16_t)(uint16_t)(_predec16(4));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[2] -= 4; bus_write32(g_m68k.a[2], _mv); M68K_TST32(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $092534-$092558  (16 instructions, 36 bytes) */
void jt_092534(void) {
    M68K_OR8(g_m68k.d[2], 0x4);
    g_m68k.a[0] += (int16_t)(uint16_t)(g_m68k.d[5]);
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[2] -= 4; bus_write32(g_m68k.a[2], _mv); M68K_TST32(_mv); }
    g_m68k.a[0] += (int16_t)(uint16_t)(g_m68k.a[4]);
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[2] -= 4; bus_write32(g_m68k.a[2], _mv); M68K_TST32(_mv); }
    g_m68k.a[0] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[7]));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[2] -= 4; bus_write32(g_m68k.a[2], _mv); M68K_TST32(_mv); }
    g_m68k.a[0] += (int16_t)(uint16_t)(_predec16(5));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[2] -= 4; bus_write32(g_m68k.a[2], _mv); M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    g_m68k.a[0] += (int16_t)(uint16_t)(g_m68k.a[5]);
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[2] -= 4; bus_write32(g_m68k.a[2], _mv); M68K_TST32(_mv); }
    g_m68k.a[0] += (int16_t)(uint16_t)(_postinc16(0));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[2] -= 4; bus_write32(g_m68k.a[2], _mv); M68K_TST32(_mv); }
    g_m68k.a[0] += (int16_t)(uint16_t)(_predec16(6));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[2] -= 4; bus_write32(g_m68k.a[2], _mv); M68K_TST32(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $092558-$09257C  (14 instructions, 36 bytes) */
void jt_092558(void) {
    M68K_OR8(g_m68k.d[2], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    g_m68k.a[0] += (int16_t)(uint16_t)(g_m68k.a[6]);
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[2] -= 4; bus_write32(g_m68k.a[2], _mv); M68K_TST32(_mv); }
    g_m68k.a[0] += (int16_t)(uint16_t)(_postinc16(1));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[2] -= 4; bus_write32(g_m68k.a[2], _mv); M68K_TST32(_mv); }
    g_m68k.a[0] += (int16_t)(uint16_t)(_predec16(7));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[2] -= 4; bus_write32(g_m68k.a[2], _mv); M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    g_m68k.a[0] += (int16_t)(uint16_t)(g_m68k.a[7]);
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[2] -= 4; bus_write32(g_m68k.a[2], _mv); M68K_TST32(_mv); }
    g_m68k.a[0] += (int16_t)(uint16_t)(_postinc16(2));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[2] -= 4; bus_write32(g_m68k.a[2], _mv); M68K_TST32(_mv); }
    g_m68k.a[0] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[0] + 0x2500));
    /* WARNING: function did not end with RTS */
}

/* $09257C-$0925A0  (12 instructions, 36 bytes) */
void jt_09257C(void) {
    M68K_OR8(g_m68k.d[2], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    g_m68k.a[0] += (int16_t)(uint16_t)(_postinc16(3));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[2] -= 4; bus_write32(g_m68k.a[2], _mv); M68K_TST32(_mv); }
    g_m68k.a[0] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[1] + 0x2500));
    M68K_OR8(g_m68k.d[0], 0x0);
    g_m68k.a[0] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[0]));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[2] -= 4; bus_write32(g_m68k.a[2], _mv); M68K_TST32(_mv); }
    g_m68k.a[0] += (int16_t)(uint16_t)(_postinc16(4));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[2] -= 4; bus_write32(g_m68k.a[2], _mv); M68K_TST32(_mv); }
    g_m68k.a[0] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[2] + 0x2500));
    /* WARNING: function did not end with RTS */
}

/* $0925A0-$0925C4  (11 instructions, 36 bytes) */
void jt_0925A0(void) {
    M68K_OR8(g_m68k.d[2], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    g_m68k.a[0] += (int16_t)(uint16_t)(_postinc16(5));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[2] -= 4; bus_write32(g_m68k.a[2], _mv); M68K_TST32(_mv); }
    g_m68k.a[0] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[3] + 0x2500));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    g_m68k.a[0] += (int16_t)(uint16_t)(_postinc16(6));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[2] -= 4; bus_write32(g_m68k.a[2], _mv); M68K_TST32(_mv); }
    g_m68k.a[0] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[4] + 0x2500));
    /* WARNING: function did not end with RTS */
}

/* $0925C4-$0925D8  (7 instructions, 20 bytes) */
void jt_0925C4(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_ADD8(g_m68k.d[0], _postinc8(4));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[1] -= 4; bus_write32(g_m68k.a[1], _mv); M68K_TST32(_mv); }
    M68K_ADD8(g_m68k.d[0], bus_read8(g_m68k.a[2] + 0x2300));
    M68K_ADD8(g_m68k.d[0], _postinc8(5));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[1] -= 4; bus_write32(g_m68k.a[1], _mv); M68K_TST32(_mv); }
    M68K_ADD8(g_m68k.d[0], bus_read8(g_m68k.a[3] + 0x2300));
    /* WARNING: function did not end with RTS */
}

/* $0925D8-$0925EC  (7 instructions, 20 bytes) */
void jt_0925D8(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_ADD8(g_m68k.d[0], _postinc8(6));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[1] -= 4; bus_write32(g_m68k.a[1], _mv); M68K_TST32(_mv); }
    M68K_ADD8(g_m68k.d[0], bus_read8(g_m68k.a[4] + 0x2300));
    M68K_ADD8(g_m68k.d[0], _postinc8(7));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[1] -= 4; bus_write32(g_m68k.a[1], _mv); M68K_TST32(_mv); }
    M68K_ADD8(g_m68k.d[0], bus_read8(g_m68k.a[5] + 0x2300));
    /* WARNING: function did not end with RTS */
}

/* $0925EC-$092600  (7 instructions, 20 bytes) */
void jt_0925EC(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_ADD8(g_m68k.d[0], _predec8(0));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[1] -= 4; bus_write32(g_m68k.a[1], _mv); M68K_TST32(_mv); }
    M68K_ADD8(g_m68k.d[0], bus_read8(g_m68k.a[6] + 0x2300));
    M68K_ADD8(g_m68k.d[0], _predec8(1));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[1] -= 4; bus_write32(g_m68k.a[1], _mv); M68K_TST32(_mv); }
    M68K_ADD8(g_m68k.d[0], bus_read8(g_m68k.a[7] + 0x2300));
    /* WARNING: function did not end with RTS */
}

/* $092600-$092614  (7 instructions, 20 bytes) */
void jt_092600(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_ADD8(g_m68k.d[0], _predec8(2));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[1] -= 4; bus_write32(g_m68k.a[1], _mv); M68K_TST32(_mv); }
    M68K_ADD8(g_m68k.d[0], bus_read8(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[2] * 2));
    M68K_ADD8(g_m68k.d[0], _predec8(3));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[1] -= 4; bus_write32(g_m68k.a[1], _mv); M68K_TST32(_mv); }
    M68K_ADD8(g_m68k.d[0], bus_read8(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[2] * 2));
    /* WARNING: function did not end with RTS */
}

/* $092614-$092628  (7 instructions, 20 bytes) */
void jt_092614(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_ADD8(g_m68k.d[0], _predec8(4));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[1] -= 4; bus_write32(g_m68k.a[1], _mv); M68K_TST32(_mv); }
    M68K_ADD8(g_m68k.d[0], bus_read8(g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.d[2] * 2));
    M68K_ADD8(g_m68k.d[0], _predec8(5));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[1] -= 4; bus_write32(g_m68k.a[1], _mv); M68K_TST32(_mv); }
    M68K_ADD8(g_m68k.d[0], bus_read8(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[2] * 2));
    /* WARNING: function did not end with RTS */
}

/* $092628-$09263C  (7 instructions, 20 bytes) */
void jt_092628(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_ADD8(g_m68k.d[0], _predec8(6));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[1] -= 4; bus_write32(g_m68k.a[1], _mv); M68K_TST32(_mv); }
    M68K_ADD8(g_m68k.d[0], bus_read8(g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.d[2] * 2));
    M68K_ADD8(g_m68k.d[0], _predec8(7));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[1] -= 4; bus_write32(g_m68k.a[1], _mv); M68K_TST32(_mv); }
    M68K_ADD8(g_m68k.d[0], bus_read8(g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.d[2] * 2));
    /* WARNING: function did not end with RTS */
}

/* $09263C-$092650  (5 instructions, 20 bytes) */
void jt_09263C(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_ADD8(g_m68k.d[0], bus_read8(g_m68k.a[0] + 0x2300));
    M68K_ADD8(g_m68k.d[0], bus_read8(g_m68k.a[6] + 0 + (int16_t)(uint16_t)g_m68k.d[2] * 2));
    M68K_ADD8(g_m68k.d[0], bus_read8(g_m68k.a[1] + 0x2300));
    M68K_ADD8(g_m68k.d[0], bus_read8(g_m68k.a[7] + 0 + (int16_t)(uint16_t)g_m68k.d[2] * 2));
    /* WARNING: function did not end with RTS */
}

/* $092650-$092664  (7 instructions, 20 bytes) */
void jt_092650(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_ADD8(g_m68k.d[0], _postinc8(4));
    g_m68k.d[2] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[2]);
    M68K_ADD8(g_m68k.d[0], bus_read8(g_m68k.a[2] + 0x2400));
    M68K_ADD8(g_m68k.d[0], _postinc8(5));
    g_m68k.d[2] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[2]);
    M68K_ADD8(g_m68k.d[0], bus_read8(g_m68k.a[3] + 0x2400));
    /* WARNING: function did not end with RTS */
}

/* $092664-$092678  (7 instructions, 20 bytes) */
void jt_092664(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_ADD8(g_m68k.d[0], _postinc8(6));
    g_m68k.d[2] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[2]);
    M68K_ADD8(g_m68k.d[0], bus_read8(g_m68k.a[4] + 0x2400));
    M68K_ADD8(g_m68k.d[0], _postinc8(7));
    g_m68k.d[2] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[2]);
    M68K_ADD8(g_m68k.d[0], bus_read8(g_m68k.a[5] + 0x2400));
    /* WARNING: function did not end with RTS */
}

/* $092678-$09268C  (7 instructions, 20 bytes) */
void jt_092678(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_ADD8(g_m68k.d[0], _predec8(0));
    g_m68k.d[2] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[2]);
    M68K_ADD8(g_m68k.d[0], bus_read8(g_m68k.a[6] + 0x2400));
    M68K_ADD8(g_m68k.d[0], _predec8(1));
    g_m68k.d[2] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[2]);
    M68K_ADD8(g_m68k.d[0], bus_read8(g_m68k.a[7] + 0x2400));
    /* WARNING: function did not end with RTS */
}

/* $09268C-$0926A0  (7 instructions, 20 bytes) */
void jt_09268C(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_ADD8(g_m68k.d[0], _predec8(2));
    g_m68k.d[2] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[2]);
    M68K_ADD8(g_m68k.d[0], bus_read8(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[2] * 4));
    M68K_ADD8(g_m68k.d[0], _predec8(3));
    g_m68k.d[2] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[2]);
    M68K_ADD8(g_m68k.d[0], bus_read8(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[2] * 4));
    /* WARNING: function did not end with RTS */
}

/* $0926A0-$0926B4  (7 instructions, 20 bytes) */
void jt_0926A0(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_ADD8(g_m68k.d[0], _predec8(4));
    g_m68k.d[2] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[2]);
    M68K_ADD8(g_m68k.d[0], bus_read8(g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.d[2] * 4));
    M68K_ADD8(g_m68k.d[0], _predec8(5));
    g_m68k.d[2] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[2]);
    M68K_ADD8(g_m68k.d[0], bus_read8(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[2] * 4));
    /* WARNING: function did not end with RTS */
}

/* $0926B4-$0926C8  (7 instructions, 20 bytes) */
void jt_0926B4(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_ADD8(g_m68k.d[0], _predec8(6));
    g_m68k.d[2] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[2]);
    M68K_ADD8(g_m68k.d[0], bus_read8(g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.d[2] * 4));
    M68K_ADD8(g_m68k.d[0], _predec8(7));
    g_m68k.d[2] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[2]);
    M68K_ADD8(g_m68k.d[0], bus_read8(g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.d[2] * 4));
    /* WARNING: function did not end with RTS */
}

/* $0926C8-$0926DC  (5 instructions, 20 bytes) */
void jt_0926C8(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_ADD8(g_m68k.d[0], bus_read8(g_m68k.a[0] + 0x2400));
    M68K_ADD8(g_m68k.d[0], bus_read8(g_m68k.a[6] + 0 + (int16_t)(uint16_t)g_m68k.d[2] * 4));
    M68K_ADD8(g_m68k.d[0], bus_read8(g_m68k.a[1] + 0x2400));
    M68K_ADD8(g_m68k.d[0], bus_read8(g_m68k.a[7] + 0 + (int16_t)(uint16_t)g_m68k.d[2] * 4));
    /* WARNING: function did not end with RTS */
}

/* $0926DC-$092710  (17 instructions, 52 bytes) */
void jt_0926DC(void) {
    M68K_OR8(g_m68k.d[3], 0x4);
    M68K_OR8(g_m68k.d[0], 0x0);
    g_m68k.a[0] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[7] + 0 + (int16_t)(uint16_t)g_m68k.d[2] * 8));
    M68K_ADDX8(g_m68k.d[0], g_m68k.d[3]);
    g_m68k.d[3] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[3]);
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_ADDX8(_tmp, _predec8(7)); bus_write8(_ea, _tmp); }
    g_m68k.d[3] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[3]);
    M68K_OR8(g_m68k.d[0], 0x0);
    g_m68k.a[0] += (int16_t)(uint16_t)(bus_read16(0x002600));
    M68K_ADDX8(g_m68k.d[0], g_m68k.d[4]);
    g_m68k.d[3] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[3]);
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    g_m68k.d[3] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[3]);
    g_m68k.a[0] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[5] + 0x2600));
    g_m68k.a[0] += (int16_t)(uint16_t)(bus_read16(0x2600D105));
    g_m68k.d[3] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[3]);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $092710-$092744  (18 instructions, 52 bytes) */
void jt_092710(void) {
    M68K_OR8(g_m68k.d[3], 0x4);
    g_m68k.a[0] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[6] + 0x2600));
    g_m68k.a[0] += (int16_t)(uint16_t)(bus_read16(0x94d1a));
    M68K_ADDX8(g_m68k.d[0], g_m68k.d[6]);
    g_m68k.d[3] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[3]);
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    g_m68k.d[3] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[3]);
    g_m68k.a[0] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[7] + 0x2600));
    g_m68k.a[0] += (int16_t)(uint16_t)(bus_read16(0x9272a + (int16_t)(uint16_t)g_m68k.d[2] * 8));
    M68K_ADDX8(g_m68k.d[0], g_m68k.d[7]);
    g_m68k.d[3] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[3]);
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    g_m68k.d[3] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[3]);
    g_m68k.a[0] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[2] * 8));
    g_m68k.a[0] += (int16_t)(uint16_t)(0x2600);
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_ADDX8(_tmp, _predec8(0)); bus_write8(_ea, _tmp); }
    g_m68k.d[3] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[3]);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $092744-$09274C  (2 instructions, 8 bytes) */
void jt_092744(void) {
    M68K_OR8(g_m68k.d[3], 0x4);
    g_m68k.a[0] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[2] * 8));
    /* WARNING: function did not end with RTS */
}

/* $092778-$0927AC  (21 instructions, 52 bytes) */
void jt_092778(void) {
    M68K_OR8(g_m68k.d[3], 0x4);
    g_m68k.a[0] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.d[2] * 8));
    M68K_ADDX8(g_m68k.d[0], g_m68k.d[0]);
    g_m68k.d[3] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[3]);
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_ADDX8(_tmp, _predec8(4)); bus_write8(_ea, _tmp); }
    g_m68k.d[3] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[3]);
    { uint32_t _ea = g_m68k.a[5]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    g_m68k.d[3] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[3]);
    g_m68k.a[0] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.d[2] * 8));
    M68K_ADDX8(g_m68k.d[0], g_m68k.d[1]);
    g_m68k.d[3] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[3]);
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_ADDX8(_tmp, _predec8(5)); bus_write8(_ea, _tmp); }
    g_m68k.d[3] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[3]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    g_m68k.d[3] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[3]);
    g_m68k.a[0] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[6] + 0 + (int16_t)(uint16_t)g_m68k.d[2] * 8));
    M68K_ADDX8(g_m68k.d[0], g_m68k.d[2]);
    g_m68k.d[3] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[3]);
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_ADDX8(_tmp, _predec8(6)); bus_write8(_ea, _tmp); }
    g_m68k.d[3] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[3]);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0927AC-$0927E0  (20 instructions, 52 bytes) */
void jt_0927AC(void) {
    M68K_OR8(g_m68k.d[3], 0x4);
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    g_m68k.d[3] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[3]);
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    g_m68k.d[3] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[3]);
    { uint32_t _ea = (g_m68k.a[0] + 0x2600); uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[6] + 0x2600); uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    g_m68k.d[3] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[3]);
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    g_m68k.d[3] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[3]);
    M68K_MULU(g_m68k.d[1], _postinc16(6));
    g_m68k.d[3] = g_m68k.d[2]; M68K_TST32((uint32_t)g_m68k.d[3]);
    { uint32_t _ea = (g_m68k.a[7] + 0x2600); uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    g_m68k.d[3] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[3]);
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    g_m68k.d[3] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[3]);
    { uint32_t _ea = (g_m68k.a[1] + 0x2600); uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0927E0-$092814  (20 instructions, 52 bytes) */
void jt_0927E0(void) {
    M68K_OR8(g_m68k.d[3], 0x4);
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    g_m68k.d[3] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[3]);
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    g_m68k.d[3] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[3]);
    { uint32_t _ea = (g_m68k.a[2] + 0x2600); uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[2] * 8); uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    g_m68k.d[3] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[3]);
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    g_m68k.d[3] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[3]);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = (g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[2] * 8); uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    g_m68k.d[3] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[3]);
    { uint32_t _ea = g_m68k.a[5]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    g_m68k.d[3] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[3]);
    { uint32_t _ea = (g_m68k.a[3] + 0x2600); uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_MULS(g_m68k.d[5], g_m68k.d[4]);
    g_m68k.d[3] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[3]);
    /* WARNING: function did not end with RTS */
}

/* $092814-$092848  (18 instructions, 52 bytes) */
void jt_092814(void) {
    M68K_OR8(g_m68k.d[3], 0x4);
    { uint32_t _ea = g_m68k.a[5]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    g_m68k.d[3] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[3]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    g_m68k.d[3] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[3]);
    { uint32_t _ea = (g_m68k.a[4] + 0x2600); uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.d[2] * 8); uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    g_m68k.d[3] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[3]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = (g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[2] * 8); uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    g_m68k.d[3] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[3]);
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    g_m68k.d[3] = g_m68k.d[0]; M68K_TST32((uint32_t)g_m68k.d[3]);
    { uint32_t _ea = (g_m68k.a[5] + 0x2600); uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.d[2] * 8); uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $092848-$092850  (2 instructions, 8 bytes) */
void jt_092848(void) {
    M68K_OR8(g_m68k.d[4], 0x3);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $09287C-$0928B0  (20 instructions, 52 bytes) */
void jt_09287C(void) {
    M68K_OR8(g_m68k.d[4], 0x3);
    M68K_AND16(g_m68k.d[5], /* UNHANDLED_READ: ([a4, d2.w * 8]) */ 0);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[2]);
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_ADD16(g_m68k.d[0], bus_read16(g_m68k.a[1]));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[3]);
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_ADD16(g_m68k.d[0], bus_read16(g_m68k.a[2]));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_ADD8(g_m68k.d[0], bus_read8(0x002700));
    M68K_ADD16(g_m68k.d[0], g_m68k.d[4]);
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_ADD16(g_m68k.d[0], bus_read16(g_m68k.a[3]));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_ADD8(g_m68k.d[0], bus_read8(0x2700D045));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_ADD16(g_m68k.d[0], bus_read16(g_m68k.a[4]));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0928B0-$0928E4  (21 instructions, 52 bytes) */
void jt_0928B0(void) {
    M68K_OR8(g_m68k.d[4], 0x3);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_ADD16(g_m68k.d[0], g_m68k.d[6]);
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_ADD16(g_m68k.d[0], bus_read16(g_m68k.a[5]));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_ADD8(g_m68k.d[0], bus_read8(0x94fc2));
    M68K_ADD16(g_m68k.d[0], g_m68k.d[7]);
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_ADD16(g_m68k.d[0], bus_read16(g_m68k.a[6]));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_ADD8(g_m68k.d[0], /* UNHANDLED_READ: (a16, d2.w * 8) */ 0);
    M68K_ADD16(g_m68k.d[0], g_m68k.a[0]);
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_ADD16(g_m68k.d[0], bus_read16(g_m68k.a[7]));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_ADD16(g_m68k.d[0], g_m68k.a[1]);
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_ADD16(g_m68k.d[0], _postinc16(0));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $0928E4-$0928F4  (6 instructions, 16 bytes) */
void jt_0928E4(void) {
    M68K_OR8(g_m68k.d[4], 0x3);
    M68K_ADD8(g_m68k.d[0], 0x0);
    M68K_ADD16(g_m68k.d[0], g_m68k.a[2]);
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_ADD16(g_m68k.d[0], _postinc16(1));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $092918-$09294C  (22 instructions, 52 bytes) */
void jt_092918(void) {
    M68K_OR8(g_m68k.d[4], 0x3);
    M68K_ADD16(g_m68k.d[0], _postinc16(4));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_ADD16(g_m68k.d[0], _predec16(2));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_ADD16(g_m68k.d[0], _predec16(7));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_ADD16(g_m68k.d[0], _postinc16(5));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_ADD16(g_m68k.d[0], _predec16(3));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_ADD16(g_m68k.d[0], bus_read16(g_m68k.a[0] + 0x2700));
    M68K_ADD16(g_m68k.d[0], _postinc16(6));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_ADD16(g_m68k.d[0], _predec16(4));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_ADD16(g_m68k.d[0], bus_read16(g_m68k.a[1] + 0x2700));
    M68K_ADD16(g_m68k.d[0], _postinc16(7));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_ADD16(g_m68k.d[0], _predec16(5));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_ADD16(g_m68k.d[0], bus_read16(g_m68k.a[2] + 0x2700));
    /* WARNING: function did not end with RTS */
}

/* $09294C-$092980  (17 instructions, 52 bytes) */
void jt_09294C(void) {
    M68K_OR8(g_m68k.d[4], 0x3);
    M68K_ADD16(g_m68k.d[0], _predec16(0));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_MULS(g_m68k.d[6], bus_read16(g_m68k.a[6]));
    { uint32_t _mv = (uint32_t)(g_m68k.d[2]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_ADD16(g_m68k.d[0], bus_read16(g_m68k.a[3] + 0x2700));
    M68K_ADD16(g_m68k.d[0], _predec16(1));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_ADD16(g_m68k.d[0], _predec16(6));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_ADD16(g_m68k.d[0], bus_read16(g_m68k.a[4] + 0x2700));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $092980-$0929B4  (13 instructions, 52 bytes) */
void jt_092980(void) {
    M68K_OR8(g_m68k.d[4], 0x3);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
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

/* $0929B4-$0929E8  (13 instructions, 52 bytes) */
void jt_0929B4(void) {
    M68K_OR8(g_m68k.d[4], 0x3);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
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

/* $0929E8-$092A1C  (13 instructions, 52 bytes) */
void jt_0929E8(void) {
    M68K_OR8(g_m68k.d[4], 0x3);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
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

/* $092A1C-$092A50  (13 instructions, 52 bytes) */
void jt_092A1C(void) {
    M68K_OR8(g_m68k.d[4], 0x3);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
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

/* $092A50-$092A84  (13 instructions, 52 bytes) */
void jt_092A50(void) {
    M68K_OR8(g_m68k.d[4], 0x3);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
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

/* $092A84-$092AB8  (13 instructions, 52 bytes) */
void jt_092A84(void) {
    M68K_OR8(g_m68k.d[4], 0x3);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
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

/* $092AB8-$092AEC  (13 instructions, 52 bytes) */
void jt_092AB8(void) {
    M68K_OR8(g_m68k.d[4], 0x3);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
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

/* $092AEC-$092B20  (13 instructions, 52 bytes) */
void jt_092AEC(void) {
    M68K_OR8(g_m68k.d[4], 0x3);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
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

/* $092B20-$092B34  (5 instructions, 20 bytes) */
void jt_092B20(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_ADD16(g_m68k.d[0], bus_read16(g_m68k.a[5] + 0x2700));
    M68K_ADD16(g_m68k.d[0], bus_read16(0x9522a));
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_ADD16(g_m68k.d[0], /* UNHANDLED_READ: (a16, d2.w * 8) */ 0);
    /* WARNING: function did not end with RTS */
}

/* $092B34-$092B44  (4 instructions, 16 bytes) */
void jt_092B34(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_ADD16(g_m68k.d[0], bus_read16(g_m68k.a[6] + 0x2700));
    M68K_ADD16(g_m68k.d[0], 0x2700);
    M68K_ADD16(g_m68k.d[0], bus_read16(g_m68k.a[7] + 0x2700));
    /* WARNING: function did not end with RTS */
}

/* $092B48-$092B50  (2 instructions, 8 bytes) */
void jt_092B48(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_ADD16(g_m68k.d[0], bus_read16(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[2] * 8));
    /* WARNING: function did not end with RTS */
}

/* $092B5C-$092B70  (7 instructions, 20 bytes) */
void jt_092B5C(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_ADD16(g_m68k.d[0], bus_read16(g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.d[2] * 8));
    M68K_ADD32(g_m68k.d[0], g_m68k.d[0]);
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_ADD16(g_m68k.d[0], bus_read16(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[2] * 8));
    M68K_ADD32(g_m68k.d[0], g_m68k.d[1]);
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $092B70-$092B84  (7 instructions, 20 bytes) */
void jt_092B70(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_ADD16(g_m68k.d[0], bus_read16(g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.d[2] * 8));
    M68K_ADD32(g_m68k.d[0], g_m68k.d[2]);
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_ADD16(g_m68k.d[0], bus_read16(g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.d[2] * 8));
    M68K_ADD32(g_m68k.d[0], g_m68k.d[3]);
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $092B84-$092B98  (7 instructions, 20 bytes) */
void jt_092B84(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_ADD16(g_m68k.d[0], bus_read16(g_m68k.a[6] + 0 + (int16_t)(uint16_t)g_m68k.d[2] * 8));
    M68K_ADD32(g_m68k.d[0], g_m68k.d[4]);
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_ADD16(g_m68k.d[0], bus_read16(g_m68k.a[7] + 0 + (int16_t)(uint16_t)g_m68k.d[2] * 8));
    M68K_ADD32(g_m68k.d[0], g_m68k.d[5]);
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $092B98-$092BAC  (6 instructions, 20 bytes) */
void jt_092B98(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_ADD16(g_m68k.d[0], bus_read16(0x002700));
    M68K_ADD32(g_m68k.d[0], g_m68k.d[6]);
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_ADD16(g_m68k.d[0], bus_read16(0x2700D087));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $092BAC-$092BD4  (17 instructions, 40 bytes) */
void jt_092BAC(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    M68K_ADD32(g_m68k.d[0], g_m68k.a[6]);
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_ADD32(g_m68k.d[0], _postinc32(5));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_ADD32(g_m68k.d[0], bus_read32(g_m68k.a[3] + 0x2700));
    M68K_ADD32(g_m68k.d[0], g_m68k.a[7]);
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_ADD32(g_m68k.d[0], _postinc32(6));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_ADD32(g_m68k.d[0], bus_read32(g_m68k.a[4] + 0x2700));
    M68K_ADD32(g_m68k.d[0], bus_read32(g_m68k.a[0]));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_ADD32(g_m68k.d[0], _postinc32(7));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_AND16(g_m68k.d[2], _postinc16(3));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    /* WARNING: function did not end with RTS */
}

/* $092BD4-$092BFC  (16 instructions, 40 bytes) */
void jt_092BD4(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    M68K_ADD32(g_m68k.d[0], bus_read32(g_m68k.a[1]));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_ADD32(g_m68k.d[0], _predec32(0));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_ADD32(g_m68k.d[0], bus_read32(g_m68k.a[5] + 0x2700));
    M68K_ADD32(g_m68k.d[0], bus_read32(g_m68k.a[2]));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_ADD32(g_m68k.d[0], _predec32(1));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_ADD32(g_m68k.d[0], bus_read32(g_m68k.a[6] + 0x2700));
    M68K_ADD32(g_m68k.d[0], bus_read32(g_m68k.a[3]));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_ADD32(g_m68k.d[0], _predec32(2));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_ADD32(g_m68k.d[0], bus_read32(g_m68k.a[7] + 0x2700));
    /* WARNING: function did not end with RTS */
}

/* $092BFC-$092C24  (16 instructions, 40 bytes) */
void jt_092BFC(void) {
    M68K_OR8(g_m68k.d[3], 0x3);
    M68K_ADD32(g_m68k.d[0], bus_read32(g_m68k.a[4]));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_ADD32(g_m68k.d[0], _predec32(3));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_ADD32(g_m68k.d[0], bus_read32(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[2] * 8));
    M68K_ADD32(g_m68k.d[0], bus_read32(g_m68k.a[5]));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_ADD32(g_m68k.d[0], _predec32(4));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_ADD32(g_m68k.d[0], bus_read32(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[2] * 8));
    M68K_ADD32(g_m68k.d[0], bus_read32(g_m68k.a[6]));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_ADD32(g_m68k.d[0], _predec32(5));
    { uint32_t _mv = (uint32_t)(g_m68k.d[0]); g_m68k.a[3] -= 4; bus_write32(g_m68k.a[3], _mv); M68K_TST32(_mv); }
    M68K_ADD32(g_m68k.d[0], bus_read32(g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.d[2] * 8));
    /* WARNING: function did not end with RTS */
}
