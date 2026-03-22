/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $017762 - $017A6A */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

/* $017762-$017776  (5 instructions, 20 bytes) */
void jt_017762(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x8)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x18)); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0x3f)); M68K_TST16((uint16_t)g_m68k.d[3]);
    { func_table_call(0x016B04); return; }
    /* WARNING: function did not end with RTS */
}

/* $017776-$017782  (3 instructions, 12 bytes) */
void jt_017776(void) {
    M68K_OR8(g_m68k.d[1], 0x82);
    M68K_OR8(g_m68k.d[1], 0x4c);
    M68K_OR8(g_m68k.d[1], 0x4e);
    /* WARNING: function did not end with RTS */
}

/* $017782-$017792  (4 instructions, 16 bytes) */
void jt_017782(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x8)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x18)); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0x40)); M68K_TST16((uint16_t)g_m68k.d[3]);
    { func_table_call(0x016B3E); return; }
    /* WARNING: function did not end with RTS */
}

/* $017792-$01779E  (3 instructions, 12 bytes) */
void jt_017792(void) {
    M68K_OR8(g_m68k.d[1], 0x9e);
    M68K_OR8(g_m68k.d[1], 0x2a);
    M68K_OR8(g_m68k.d[1], 0x2c);
    /* WARNING: function did not end with RTS */
}

/* $01779E-$0177B2  (5 instructions, 20 bytes) */
void jt_01779E(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x8)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x18)); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x0)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0x41)); M68K_TST16((uint16_t)g_m68k.d[3]);
    { func_table_call(0x016B04); return; }
    /* WARNING: function did not end with RTS */
}

/* $0177B2-$0177BE  (3 instructions, 12 bytes) */
void jt_0177B2(void) {
    M68K_OR8(g_m68k.d[1], 0xbe);
    M68K_OR8(g_m68k.d[1], 0xf0);
    M68K_OR8(g_m68k.d[1], 0xf2);
    /* WARNING: function did not end with RTS */
}

/* $0177BE-$0177C8  (2 instructions, 10 bytes) */
void jt_0177BE(void) {
    { uint16_t _mv = (uint16_t)(0x42); bus_write16(g_m68k.a[1] + 0x10, _mv); M68K_TST16(_mv); }
    { func_table_call(0x016BEA); return; }
    /* WARNING: function did not end with RTS */
}

/* $0177C8-$0177D4  (3 instructions, 12 bytes) */
void jt_0177C8(void) {
    M68K_OR8(g_m68k.d[1], 0xd4);
    M68K_OR8(g_m68k.d[1], 0x2a);
    M68K_OR8(g_m68k.d[1], 0x2c);
    /* WARNING: function did not end with RTS */
}

/* $0177D4-$0177E8  (5 instructions, 20 bytes) */
void jt_0177D4(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x10)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x18)); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x4000)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0x43)); M68K_TST16((uint16_t)g_m68k.d[3]);
    { func_table_call(0x016B04); return; }
    /* WARNING: function did not end with RTS */
}

/* $0177E8-$0177F4  (3 instructions, 12 bytes) */
void jt_0177E8(void) {
    M68K_OR8(g_m68k.d[1], 0xf4);
    M68K_OR8(g_m68k.d[1], 0x2a);
    M68K_OR8(g_m68k.d[1], 0x2c);
    /* WARNING: function did not end with RTS */
}

/* $0177F4-$017808  (5 instructions, 20 bytes) */
void jt_0177F4(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x10)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x18)); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x4000)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0x44)); M68K_TST16((uint16_t)g_m68k.d[3]);
    { func_table_call(0x016B04); return; }
    /* WARNING: function did not end with RTS */
}

/* $017808-$017814  (3 instructions, 12 bytes) */
void jt_017808(void) {
    M68K_OR8(g_m68k.d[1], 0x14);
    M68K_OR8(g_m68k.d[1], 0x2a);
    M68K_OR8(g_m68k.d[1], 0x2c);
    /* WARNING: function did not end with RTS */
}

/* $017814-$017828  (5 instructions, 20 bytes) */
void jt_017814(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x10)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x18)); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x4000)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0x45)); M68K_TST16((uint16_t)g_m68k.d[3]);
    { func_table_call(0x016B04); return; }
    /* WARNING: function did not end with RTS */
}

/* $017828-$017834  (3 instructions, 12 bytes) */
void jt_017828(void) {
    M68K_OR8(g_m68k.d[1], 0x34);
    M68K_OR8(g_m68k.d[1], 0x2a);
    M68K_OR8(g_m68k.d[1], 0x2c);
    /* WARNING: function did not end with RTS */
}

/* $017834-$017848  (5 instructions, 20 bytes) */
void jt_017834(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x10)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x18)); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x4000)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0x46)); M68K_TST16((uint16_t)g_m68k.d[3]);
    { func_table_call(0x016B04); return; }
    /* WARNING: function did not end with RTS */
}

/* $017848-$017854  (3 instructions, 12 bytes) */
void jt_017848(void) {
    M68K_OR8(g_m68k.d[1], 0x54);
    M68K_OR8(g_m68k.d[1], 0x2a);
    M68K_OR8(g_m68k.d[1], 0x2c);
    /* WARNING: function did not end with RTS */
}

/* $017854-$017868  (5 instructions, 20 bytes) */
void jt_017854(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x10)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x18)); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x4000)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0x47)); M68K_TST16((uint16_t)g_m68k.d[3]);
    { func_table_call(0x016B04); return; }
    /* WARNING: function did not end with RTS */
}

/* $017868-$017874  (3 instructions, 12 bytes) */
void jt_017868(void) {
    M68K_OR8(g_m68k.d[1], 0x74);
    M68K_OR8(g_m68k.d[1], 0x2a);
    M68K_OR8(g_m68k.d[1], 0x2c);
    /* WARNING: function did not end with RTS */
}

/* $017874-$017888  (5 instructions, 20 bytes) */
void jt_017874(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x10)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x18)); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x4000)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0x48)); M68K_TST16((uint16_t)g_m68k.d[3]);
    { func_table_call(0x016B04); return; }
    /* WARNING: function did not end with RTS */
}

/* $017888-$017894  (3 instructions, 12 bytes) */
void jt_017888(void) {
    M68K_OR8(g_m68k.d[1], 0x94);
    M68K_OR8(g_m68k.d[1], 0x2a);
    M68K_OR8(g_m68k.d[1], 0x2c);
    /* WARNING: function did not end with RTS */
}

/* $017894-$0178A8  (5 instructions, 20 bytes) */
void jt_017894(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x10)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x18)); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x4000)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0x49)); M68K_TST16((uint16_t)g_m68k.d[3]);
    { func_table_call(0x016B04); return; }
    /* WARNING: function did not end with RTS */
}

/* $0178A8-$0178B4  (3 instructions, 12 bytes) */
void jt_0178A8(void) {
    M68K_OR8(g_m68k.d[1], 0xb4);
    M68K_OR8(g_m68k.d[1], 0x2a);
    M68K_OR8(g_m68k.d[1], 0x2c);
    /* WARNING: function did not end with RTS */
}

/* $0178B4-$0178C8  (5 instructions, 20 bytes) */
void jt_0178B4(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x10)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x18)); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x4000)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0x4a)); M68K_TST16((uint16_t)g_m68k.d[3]);
    { func_table_call(0x016B04); return; }
    /* WARNING: function did not end with RTS */
}

/* $0178C8-$0178D4  (3 instructions, 12 bytes) */
void jt_0178C8(void) {
    M68K_OR8(g_m68k.d[1], 0xd4);
    M68K_OR8(g_m68k.d[1], 0x2a);
    M68K_OR8(g_m68k.d[1], 0x2c);
    /* WARNING: function did not end with RTS */
}

/* $0178D4-$0178E8  (5 instructions, 20 bytes) */
void jt_0178D4(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x10)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x18)); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x4000)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0x4b)); M68K_TST16((uint16_t)g_m68k.d[3]);
    { func_table_call(0x016B04); return; }
    /* WARNING: function did not end with RTS */
}

/* $0178E8-$0178F4  (3 instructions, 12 bytes) */
void jt_0178E8(void) {
    M68K_OR8(g_m68k.d[1], 0xf4);
    M68K_OR8(g_m68k.d[1], 0x2a);
    M68K_OR8(g_m68k.d[1], 0x2c);
    /* WARNING: function did not end with RTS */
}

/* $0178F4-$017908  (5 instructions, 20 bytes) */
void jt_0178F4(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x10)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x18)); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x4000)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0x4c)); M68K_TST16((uint16_t)g_m68k.d[3]);
    { func_table_call(0x016B04); return; }
    /* WARNING: function did not end with RTS */
}

/* $017908-$017914  (3 instructions, 12 bytes) */
void jt_017908(void) {
    M68K_OR8(g_m68k.d[1], 0x14);
    M68K_OR8(g_m68k.d[1], 0x2a);
    M68K_OR8(g_m68k.d[1], 0x2c);
    /* WARNING: function did not end with RTS */
}

/* $017914-$017928  (5 instructions, 20 bytes) */
void jt_017914(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x10)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x18)); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x4000)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0x4d)); M68K_TST16((uint16_t)g_m68k.d[3]);
    { func_table_call(0x016B04); return; }
    /* WARNING: function did not end with RTS */
}

/* $017928-$017934  (3 instructions, 12 bytes) */
void jt_017928(void) {
    M68K_OR8(g_m68k.d[1], 0x34);
    M68K_OR8(g_m68k.d[1], 0xf0);
    M68K_OR8(g_m68k.d[1], 0xf2);
    /* WARNING: function did not end with RTS */
}

/* $017934-$01793E  (2 instructions, 10 bytes) */
void jt_017934(void) {
    { uint16_t _mv = (uint16_t)(0x4e); bus_write16(g_m68k.a[1] + 0x10, _mv); M68K_TST16(_mv); }
    { func_table_call(0x016BEA); return; }
    /* WARNING: function did not end with RTS */
}

/* $01793E-$01794A  (3 instructions, 12 bytes) */
void jt_01793E(void) {
    M68K_OR8(g_m68k.d[1], 0x4a);
    M68K_OR8(g_m68k.d[1], 0x2a);
    M68K_OR8(g_m68k.d[1], 0x2c);
    /* WARNING: function did not end with RTS */
}

/* $01794A-$01795E  (5 instructions, 20 bytes) */
void jt_01794A(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x10)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x18)); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x4000)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0x4f)); M68K_TST16((uint16_t)g_m68k.d[3]);
    { func_table_call(0x016B04); return; }
    /* WARNING: function did not end with RTS */
}

/* $01795E-$01796A  (3 instructions, 12 bytes) */
void jt_01795E(void) {
    M68K_OR8(g_m68k.d[1], 0x6a);
    M68K_OR8(g_m68k.d[1], 0x2a);
    M68K_OR8(g_m68k.d[1], 0x2c);
    /* WARNING: function did not end with RTS */
}

/* $01796A-$01797E  (5 instructions, 20 bytes) */
void jt_01796A(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x10)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x18)); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x4000)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0x50)); M68K_TST16((uint16_t)g_m68k.d[3]);
    { func_table_call(0x016B04); return; }
    /* WARNING: function did not end with RTS */
}

/* $01797E-$01798A  (3 instructions, 12 bytes) */
void jt_01797E(void) {
    M68K_OR8(g_m68k.d[1], 0x8a);
    M68K_OR8(g_m68k.d[1], 0x2a);
    M68K_OR8(g_m68k.d[1], 0x2c);
    /* WARNING: function did not end with RTS */
}

/* $01798A-$01799E  (5 instructions, 20 bytes) */
void jt_01798A(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x10)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x18)); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x4000)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0x51)); M68K_TST16((uint16_t)g_m68k.d[3]);
    { func_table_call(0x016B04); return; }
    /* WARNING: function did not end with RTS */
}

/* $01799E-$0179AA  (3 instructions, 12 bytes) */
void jt_01799E(void) {
    M68K_OR8(g_m68k.d[1], 0xaa);
    M68K_OR8(g_m68k.d[1], 0x2a);
    M68K_OR8(g_m68k.d[1], 0x2c);
    /* WARNING: function did not end with RTS */
}

/* $0179AA-$0179BE  (5 instructions, 20 bytes) */
void jt_0179AA(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x10)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x18)); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x4000)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0x52)); M68K_TST16((uint16_t)g_m68k.d[3]);
    { func_table_call(0x016B04); return; }
    /* WARNING: function did not end with RTS */
}

/* $0179BE-$0179CA  (3 instructions, 12 bytes) */
void jt_0179BE(void) {
    M68K_OR8(g_m68k.d[1], 0xca);
    M68K_OR8(g_m68k.d[1], 0x2a);
    M68K_OR8(g_m68k.d[1], 0x2c);
    /* WARNING: function did not end with RTS */
}

/* $0179CA-$0179DE  (5 instructions, 20 bytes) */
void jt_0179CA(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x10)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x18)); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x4000)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0x53)); M68K_TST16((uint16_t)g_m68k.d[3]);
    { func_table_call(0x016B04); return; }
    /* WARNING: function did not end with RTS */
}

/* $0179DE-$0179EA  (3 instructions, 12 bytes) */
void jt_0179DE(void) {
    M68K_OR8(g_m68k.d[1], 0xea);
    M68K_OR8(g_m68k.d[1], 0x2a);
    M68K_OR8(g_m68k.d[1], 0x2c);
    /* WARNING: function did not end with RTS */
}

/* $0179EA-$0179FE  (5 instructions, 20 bytes) */
void jt_0179EA(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x10)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x18)); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x4000)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0x54)); M68K_TST16((uint16_t)g_m68k.d[3]);
    { func_table_call(0x016B04); return; }
    /* WARNING: function did not end with RTS */
}

/* $0179FE-$017A0A  (3 instructions, 12 bytes) */
void jt_0179FE(void) {
    M68K_OR8(g_m68k.d[1], 0xa);
    M68K_OR8(g_m68k.d[1], 0x2a);
    M68K_OR8(g_m68k.d[1], 0x2c);
    /* WARNING: function did not end with RTS */
}

/* $017A0A-$017A1E  (5 instructions, 20 bytes) */
void jt_017A0A(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x10)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x18)); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x4000)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0x55)); M68K_TST16((uint16_t)g_m68k.d[3]);
    { func_table_call(0x016B04); return; }
    /* WARNING: function did not end with RTS */
}

/* $017A1E-$017A2A  (3 instructions, 12 bytes) */
void jt_017A1E(void) {
    M68K_OR8(g_m68k.d[1], 0x2a);
    M68K_OR8(g_m68k.d[1], 0x2a);
    M68K_OR8(g_m68k.d[1], 0x2c);
    /* WARNING: function did not end with RTS */
}

/* $017A2A-$017A3E  (5 instructions, 20 bytes) */
void jt_017A2A(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x10)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x18)); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x4000)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0x56)); M68K_TST16((uint16_t)g_m68k.d[3]);
    { func_table_call(0x016B04); return; }
    /* WARNING: function did not end with RTS */
}

/* $017A3E-$017A4A  (3 instructions, 12 bytes) */
void jt_017A3E(void) {
    M68K_OR8(g_m68k.d[1], 0x4a);
    M68K_OR8(g_m68k.d[1], 0x2a);
    M68K_OR8(g_m68k.d[1], 0x2c);
    /* WARNING: function did not end with RTS */
}

/* $017A4A-$017A5E  (5 instructions, 20 bytes) */
void jt_017A4A(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x10)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x18)); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x4000)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0x57)); M68K_TST16((uint16_t)g_m68k.d[3]);
    { func_table_call(0x016B04); return; }
    /* WARNING: function did not end with RTS */
}

/* $017A5E-$017A6A  (3 instructions, 12 bytes) */
void jt_017A5E(void) {
    M68K_OR8(g_m68k.d[1], 0x6a);
    M68K_OR8(g_m68k.d[1], 0x2a);
    M68K_OR8(g_m68k.d[1], 0x2c);
    /* WARNING: function did not end with RTS */
}
