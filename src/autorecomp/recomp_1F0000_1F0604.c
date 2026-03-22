/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $1F0000 - $1F0604 */
/* Functions: 4 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

/* $1F0000-$1F0004  (2 instructions, 4 bytes) */
void jt_1F0000(void) {
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[3], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $1F0020-$1F0026  (3 instructions, 6 bytes) */
void jt_1F0020(void) {
    M68K_OR8(g_m68k.d[3], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* TODO $1F0024: dc.w $f008  [F0 08] */
    /* WARNING: function did not end with RTS */
}

/* $1F00A0-$1F00A4  (2 instructions, 4 bytes) */
void jt_1F00A0(void) {
    M68K_OR8(g_m68k.d[3], bus_read8(g_m68k.a[0]));
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $1F0600-$1F0604  (2 instructions, 4 bytes) */
void jt_1F0600(void) {
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    /* TODO $1F0602: dc.w $8340  [83 40] */
    /* WARNING: function did not end with RTS */
}
