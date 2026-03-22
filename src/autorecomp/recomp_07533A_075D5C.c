/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $07533A - $075D5C */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

/* $07533A-$07533C  (1 instructions, 2 bytes) */
void jt_07533A(void) {
    /* TODO $07533A: dc.w $8340  [83 40] */
    /* WARNING: function did not end with RTS */
}

/* $075354-$075366  (9 instructions, 18 bytes) */
void jt_075354(void) {
    M68K_SUB8(g_m68k.d[0], _postinc8(0));
    /* TODO $075356: dc.w $8540  [85 40] */
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[4], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[4], _postinc8(2));
    /* TODO $07535E: dc.w $8b40  [8B 40] */
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[7], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[1], _postinc8(2));
    /* WARNING: function did not end with RTS */
}

/* $075378-$07539A  (17 instructions, 34 bytes) */
void jt_075378(void) {
    M68K_SUB8(g_m68k.d[0], _postinc8(0));
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $07538A: dc.w $8140  [81 40] */
    M68K_OR8(g_m68k.d[3], _postinc8(2));
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[2], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $075396: dc.w $8740  [87 40] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0753BC-$0753C4  (3 instructions, 8 bytes) */
void jt_0753BC(void) {
    /* TODO $0753BC: dc.w $f018  [F0 18] */
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_AND8(g_m68k.d[0], bus_read8(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.a[0]));
    /* WARNING: function did not end with RTS */
}

/* $0753C4-$0753CC  (3 instructions, 8 bytes) */
void jt_0753C4(void) {
    /* TODO $0753C4: dc.w $f018  [F0 18] */
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_AND8(g_m68k.d[0], bus_read8(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.a[0]));
    /* WARNING: function did not end with RTS */
}

/* $0753DC-$075404  (17 instructions, 40 bytes) */
void jt_0753DC(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[3], bus_read8(g_m68k.a[6]));
    /* TODO $0753EC: dc.w $8140  [81 40] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[2], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_AND16(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[0] + 0x40 + (int32_t)g_m68k.a[0]); uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[2], /* UNHANDLED_READ: (a0, invalid.w) */ 0);
    { uint32_t _ea = (g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.a[0]); uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $075404-$075408  (2 instructions, 4 bytes) */
void jt_075404(void) {
    M68K_SUB8(g_m68k.d[0], _postinc8(0));
    M68K_OR8(g_m68k.d[4], bus_read8(g_m68k.a[6]));
    /* WARNING: function did not end with RTS */
}

/* $07542E-$075430  (1 instructions, 2 bytes) */
void jt_07542E(void) {
    M68K_SUB8(g_m68k.d[0], _postinc8(0));
    /* WARNING: function did not end with RTS */
}

/* $07544E-$07547E  (24 instructions, 48 bytes) */
void jt_07544E(void) {
    M68K_SUB8(g_m68k.d[0], _postinc8(0));
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $07545C: dc.w $8140  [81 40] */
    M68K_OR8(g_m68k.d[3], _postinc8(2));
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[2], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $075468: dc.w $8740  [87 40] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_CMP16(g_m68k.d[0], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $075470: dc.w $8f40  [8F 40] */
    M68K_OR8(g_m68k.d[2], _predec8(0));
    M68K_OR16(g_m68k.d[6], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* TODO $075478: dc.w $8940  [89 40] */
    M68K_CMP8(g_m68k.d[0], _predec8(0));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $07548E-$075496  (4 instructions, 8 bytes) */
void jt_07548E(void) {
    /* TODO $07548E: dc.w $f018  [F0 18] */
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_AND8(g_m68k.d[0], _predec8(0));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $075496-$07549E  (4 instructions, 8 bytes) */
void jt_075496(void) {
    /* TODO $075496: dc.w $f018  [F0 18] */
    M68K_ADD16(g_m68k.d[0], g_m68k.d[0]);
    M68K_AND8(g_m68k.d[0], _predec8(0));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0754AE-$0754DA  (22 instructions, 44 bytes) */
void jt_0754AE(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[3], bus_read8(g_m68k.a[6]));
    /* TODO $0754C2: dc.w $8140  [81 40] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[2], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_CMP16(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[6], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[2], _predec8(0));
    /* TODO $0754D4: dc.w $8940  [89 40] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0754DA-$0754F8  (15 instructions, 30 bytes) */
void jt_0754DA(void) {
    M68K_SUB8(g_m68k.d[0], _postinc8(0));
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    /* TODO $0754DE: dc.w $8540  [85 40] */
    M68K_OR8(g_m68k.d[4], bus_read8(g_m68k.a[6]));
    M68K_OR16(g_m68k.d[4], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    /* TODO $0754E6: dc.w $8b40  [8B 40] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[6]));
    M68K_CMP16(g_m68k.d[3], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[4], _predec8(0));
    /* TODO $0754EE: dc.w $8540  [85 40] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    M68K_ASR8(g_m68k.d[0], g_m68k.d[7]);
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $075508-$075520  (12 instructions, 24 bytes) */
void jt_075508(void) {
    M68K_SUB8(g_m68k.d[0], _postinc8(0));
    /* TODO $07550A: dc.w $f040  [F0 40] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $07550E: dc.w $8f40  [8F 40] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $075512: dc.w $8f40  [8F 40] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $075516: dc.w $8f40  [8F 40] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $07551A: dc.w $8f40  [8F 40] */
    M68K_AND8(g_m68k.d[0], _predec8(0));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $075520-$075538  (12 instructions, 24 bytes) */
void jt_075520(void) {
    M68K_SUB8(g_m68k.d[0], _postinc8(0));
    M68K_ASR16(g_m68k.d[0], 0x2);
    M68K_OR8(g_m68k.d[6], _predec8(0));
    /* TODO $075526: dc.w $8340  [83 40] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    /* TODO $07552A: dc.w $8340  [83 40] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    /* TODO $07552E: dc.w $8340  [83 40] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    /* TODO $075532: dc.w $8340  [83 40] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $075538-$07553C  (2 instructions, 4 bytes) */
void jt_075538(void) {
    /* TODO $075538: roxr.b #$8, d0  [E0 10] */
    /* TODO $07553A: dc.w $ff12  [FF 12] */
    /* WARNING: function did not end with RTS */
}

/* $075540-$0755A2  (33 instructions, 98 bytes) */
void jt_075540(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = 0x008710; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = 0x008710; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = 0x008710; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = 0x008710; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = 0x008710; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = 0x008612; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    /* TODO $075566: dc.w $8740  [87 40] */
    { uint32_t _ea = 0x008612; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    /* TODO $07556C: dc.w $8740  [87 40] */
    { uint32_t _ea = 0x008612; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    /* TODO $075572: dc.w $8740  [87 40] */
    { uint32_t _ea = 0x008512; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    /* TODO $075578: dc.w $8740  [87 40] */
    M68K_OR8(g_m68k.d[2], bus_read8(0x008512));
    /* TODO $07557E: dc.w $8740  [87 40] */
    M68K_OR8(g_m68k.d[2], bus_read8(0x008512));
    /* TODO $075584: dc.w $8740  [87 40] */
    M68K_OR8(g_m68k.d[2], bus_read8(0x008412));
    /* TODO $07558A: dc.w $8740  [87 40] */
    { uint32_t _ea = 0x008412; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    /* TODO $075590: dc.w $8740  [87 40] */
    { uint32_t _ea = 0x008412; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    /* TODO $075596: dc.w $8740  [87 40] */
    { uint32_t _ea = 0x008312; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    /* TODO $07559C: dc.w $8740  [87 40] */
    M68K_OR8(g_m68k.d[3], bus_read8(0x008000));
    /* WARNING: function did not end with RTS */
}

/* $0755A2-$0755AC  (5 instructions, 10 bytes) */
void jt_0755A2(void) {
    /* TODO $0755A2: dc.w $ff12  [FF 12] */
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0755A6: dc.w $ff10  [FF 10] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0755AC-$07560E  (33 instructions, 98 bytes) */
void jt_0755AC(void) {
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    /* TODO $0755AE: dc.w $8740  [87 40] */
    M68K_OR8(g_m68k.d[3], bus_read8(0x008312));
    /* TODO $0755B4: dc.w $8740  [87 40] */
    M68K_OR8(g_m68k.d[3], bus_read8(0x008212));
    /* TODO $0755BA: dc.w $8740  [87 40] */
    { uint32_t _ea = 0x008212; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* TODO $0755C0: dc.w $8740  [87 40] */
    { uint32_t _ea = 0x008212; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* TODO $0755C6: dc.w $8740  [87 40] */
    { uint32_t _ea = 0x008112; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* TODO $0755CC: dc.w $8740  [87 40] */
    M68K_OR8(g_m68k.d[4], bus_read8(0x008112));
    /* TODO $0755D2: dc.w $8740  [87 40] */
    M68K_OR8(g_m68k.d[4], bus_read8(0x008112));
    /* TODO $0755D8: dc.w $8740  [87 40] */
    M68K_OR8(g_m68k.d[4], bus_read8(0x008110));
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = 0x008110; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = 0x008110; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = 0x008110; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = 0x008110; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = 0x008110; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = 0x008110; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = 0x008110; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    { uint32_t _ea = 0x008000; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $07560E-$075670  (33 instructions, 98 bytes) */
void jt_07560E(void) {
    { uint32_t _ea = 0x008640; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    /* TODO $075612: sbcd.b d0, d3  [87 00] */
    { uint32_t _ea = 0x008640; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    /* TODO $075618: sbcd.b d0, d3  [87 00] */
    { uint32_t _ea = 0x008640; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    /* TODO $07561E: sbcd.b d0, d3  [87 00] */
    { uint32_t _ea = 0x008640; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    /* TODO $075624: sbcd.b d0, d3  [87 00] */
    { uint32_t _ea = 0x008640; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    /* TODO $07562A: sbcd.b d0, d3  [87 00] */
    { uint32_t _ea = 0x008640; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    /* TODO $075630: sbcd.b d0, d3  [87 00] */
    { uint32_t _ea = 0x008740; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[3], _postinc8(6));
    { uint32_t _ea = 0x008740; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[3], _postinc8(6));
    { uint32_t _ea = 0x008740; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[3], _postinc8(6));
    M68K_OR8(g_m68k.d[2], bus_read8(0x008740));
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[2], bus_read8(0x008740));
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[2], bus_read8(0x008740));
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008740; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[2], _postinc8(6));
    { uint32_t _ea = 0x008740; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[2], _postinc8(6));
    { uint32_t _ea = 0x008740; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[2], _postinc8(6));
    M68K_OR8(g_m68k.d[3], bus_read8(0x008740));
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $075670-$075672  (1 instructions, 2 bytes) */
void jt_075670(void) {
    M68K_ASR8(g_m68k.d[0], 0x8);
    /* WARNING: function did not end with RTS */
}

/* $075678-$0756DA  (33 instructions, 98 bytes) */
void jt_075678(void) {
    M68K_OR8(g_m68k.d[3], bus_read8(0x008740));
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[3], bus_read8(0x008740));
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008740; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[1], _postinc8(6));
    { uint32_t _ea = 0x008740; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[1], _postinc8(6));
    { uint32_t _ea = 0x008740; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[1], _postinc8(6));
    M68K_OR8(g_m68k.d[4], bus_read8(0x008740));
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[4], bus_read8(0x008740));
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[4], bus_read8(0x008740));
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x008640; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $0756AC: sbcd.b d0, d0  [81 00] */
    { uint32_t _ea = 0x008640; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $0756B2: sbcd.b d0, d0  [81 00] */
    { uint32_t _ea = 0x008640; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $0756B8: sbcd.b d0, d0  [81 00] */
    { uint32_t _ea = 0x008640; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $0756BE: sbcd.b d0, d0  [81 00] */
    { uint32_t _ea = 0x008640; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $0756C4: sbcd.b d0, d0  [81 00] */
    { uint32_t _ea = 0x008640; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $0756CA: sbcd.b d0, d0  [81 00] */
    { uint32_t _ea = 0x008640; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $0756D0: sbcd.b d0, d0  [81 00] */
    { uint32_t _ea = 0x008640; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    /* TODO $0756D6: sbcd.b d0, d0  [81 00] */
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0756E4-$075704  (10 instructions, 32 bytes) */
void jt_0756E4(void) {
    /* TODO $0756E4: dc.w $8f40  [8F 40] */
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_SUB16(g_m68k.d[0], g_m68k.d[0]);
    { uint32_t _ea = /* UNHANDLED_ADDR: (a2, invalid.w) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[3], bus_read8(g_m68k.a[2] + 0x40 + (int32_t)g_m68k.a[0]));
    { uint32_t _ea = /* UNHANDLED_ADDR: (a2, invalid.w) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[6], bus_read8(g_m68k.a[2] + 0x40 + (int16_t)(uint16_t)g_m68k.a[0]));
    { uint32_t _ea = /* UNHANDLED_ADDR: (a2, invalid.w) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    /* TODO $0756FE: dc.w $ff32  [FF 32] */
    { uint32_t _ea = (g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.a[0]); uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $075704-$075734  (18 instructions, 48 bytes) */
void jt_075704(void) {
    M68K_SUB8(g_m68k.d[0], _postinc8(2));
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[7], _postinc8(2));
    /* TODO $07570A: dc.w $8540  [85 40] */
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[4], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[4], _postinc8(2));
    /* TODO $075712: dc.w $8b40  [8B 40] */
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[7], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[1], _postinc8(2));
    M68K_SUB16(g_m68k.d[0], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[2] + 0x40 + (int32_t)g_m68k.a[0]));
    { uint32_t _ea = /* UNHANDLED_ADDR: (a2, invalid.w) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[4], bus_read8(g_m68k.a[2] + 0x40 + (int32_t)g_m68k.a[0]));
    { uint32_t _ea = /* UNHANDLED_ADDR: (a2, invalid.w) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[7], bus_read8(g_m68k.a[2] + 0x40 + (int16_t)(uint16_t)g_m68k.a[0]));
    M68K_AND8(g_m68k.d[0], bus_read8(g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.a[0]));
    /* WARNING: function did not end with RTS */
}

/* $075792-$0757BC  (17 instructions, 42 bytes) */
void jt_075792(void) {
    M68K_ROR8(g_m68k.d[2], 0x8);
    /* TODO $075794: dc.w $8140  [81 40] */
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[2], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[6], _postinc8(2));
    /* TODO $07579C: dc.w $8740  [87 40] */
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[5], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[3], _postinc8(2));
    /* TODO $0757A4: dc.w $8d40  [8D 40] */
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[1]); bus_write8(_ea, _tmp); }
    M68K_SUB16(g_m68k.d[0], g_m68k.d[0]);
    { uint32_t _ea = /* UNHANDLED_ADDR: (a2, invalid.w) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[2], bus_read8(g_m68k.a[2] + 0x40 + (int32_t)g_m68k.a[0]));
    M68K_OR8(g_m68k.d[2], bus_read8(g_m68k.a[2] + 0x40 + (int32_t)g_m68k.a[0]));
    M68K_OR8(g_m68k.d[2], bus_read8(g_m68k.a[2] + 0x40 + (int32_t)g_m68k.a[0]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0757D2-$0757FE  (12 instructions, 44 bytes) */
void jt_0757D2(void) {
    M68K_OR8(g_m68k.d[2], bus_read8(g_m68k.a[2] + 0x40 + (int32_t)g_m68k.a[0]));
    M68K_OR8(g_m68k.d[2], bus_read8(g_m68k.a[2] + 0x40 + (int32_t)g_m68k.a[0]));
    M68K_OR8(g_m68k.d[2], bus_read8(g_m68k.a[2] + 0x40 + (int32_t)g_m68k.a[0]));
    M68K_OR8(g_m68k.d[2], bus_read8(g_m68k.a[2] + 0x40 + (int32_t)g_m68k.a[0]));
    { uint32_t _ea = /* UNHANDLED_ADDR: (a2, invalid.w) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = /* UNHANDLED_ADDR: (a2, invalid.w) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = /* UNHANDLED_ADDR: (a2, invalid.w) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[6], bus_read8(g_m68k.a[2] + 0x40 + (int16_t)(uint16_t)g_m68k.a[0]));
    { uint32_t _ea = /* UNHANDLED_ADDR: (a2, invalid.w) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    /* TODO $0757F6: roxr.l #$1, d2  [E2 32] */
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[7], bus_read8(g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.a[0]));
    /* WARNING: function did not end with RTS */
}

/* $0757FE-$075816  (8 instructions, 24 bytes) */
void jt_0757FE(void) {
    /* TODO $0757FE: dc.w $8f40  [8F 40] */
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_EOR16(g_m68k.d[0], g_m68k.d[4]);
    { uint32_t _ea = /* UNHANDLED_ADDR: (a2, invalid.w) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = /* UNHANDLED_ADDR: (a2, invalid.w) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[6], /* UNHANDLED_READ: (a2, invalid.w) */ 0);
    /* TODO $075810: dc.w $ff32  [FF 32] */
    { uint32_t _ea = (g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.a[0]); uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $075872-$075884  (9 instructions, 18 bytes) */
void jt_075872(void) {
    /* TODO $075872: dc.w $8d40  [8D 40] */
    /* TODO $075874: sbcd.b d6, d1  [83 06] */
    M68K_OR16(g_m68k.d[5], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[3], g_m68k.d[6]);
    /* TODO $07587A: dc.w $8740  [87 40] */
    /* TODO $07587C: sbcd.b d6, d4  [89 06] */
    M68K_OR16(g_m68k.d[2], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[6], g_m68k.d[6]);
    /* TODO $075882: dc.w $8140  [81 40] */
    /* WARNING: function did not end with RTS */
}

/* $0758C2-$0758C4  (1 instructions, 2 bytes) */
void jt_0758C2(void) {
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0758EA-$0758EC  (1 instructions, 2 bytes) */
void jt_0758EA(void) {
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[4]));
    /* WARNING: function did not end with RTS */
}

/* $07592E-$075936  (4 instructions, 8 bytes) */
void jt_07592E(void) {
    /* TODO $07592E: dc.w $ff10  [FF 10] */
    /* TODO $075930: dc.w $ff10  [FF 10] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[0]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $075936-$07593A  (2 instructions, 4 bytes) */
void jt_075936(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $075A64-$075A82  (11 instructions, 30 bytes) */
void jt_075A64(void) {
    { uint32_t _ea = /* UNHANDLED_ADDR: (a0, invalid.w) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[6], bus_read8(g_m68k.a[0] + 0x40 + (int16_t)(uint16_t)g_m68k.a[0]));
    { uint32_t _ea = /* UNHANDLED_ADDR: (a0, invalid.w) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[3], /* UNHANDLED_READ: (a0, invalid.w) */ 0);
    /* TODO $075A74: sbcd.b d6, d0  [81 06] */
    M68K_OR16(g_m68k.d[6], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[2], g_m68k.d[6]);
    /* TODO $075A7A: dc.w $8940  [89 40] */
    /* TODO $075A7C: sbcd.b d6, d3  [87 06] */
    M68K_OR16(g_m68k.d[3], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[5], g_m68k.d[6]);
    /* WARNING: function did not end with RTS */
}

/* $075A88-$075A92  (3 instructions, 10 bytes) */
void jt_075A88(void) {
    { uint32_t _ea = /* UNHANDLED_ADDR: (a0, invalid.w) */ 0; uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[1], /* UNHANDLED_READ: (a0, invalid.w) */ 0);
    /* TODO $075A90: sbcd.b d6, d1  [83 06] */
    /* WARNING: function did not end with RTS */
}

/* $075AF2-$075AF4  (1 instructions, 2 bytes) */
void jt_075AF2(void) {
    M68K_OR8(g_m68k.d[4], g_m68k.d[6]);
    /* WARNING: function did not end with RTS */
}

/* $075B34-$075B3C  (3 instructions, 8 bytes) */
void jt_075B34(void) {
    M68K_CMP8(g_m68k.d[0], bus_read8(g_m68k.a[0] + 0x40 + (int16_t)(uint16_t)g_m68k.a[6]));
    /* TODO $075B38: dc.w $f008  [F0 08] */
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $075B3C-$075B44  (3 instructions, 8 bytes) */
void jt_075B3C(void) {
    M68K_CMP8(g_m68k.d[0], bus_read8(g_m68k.a[0] + 0x40 + (int16_t)(uint16_t)g_m68k.a[6]));
    /* TODO $075B40: dc.w $f008  [F0 08] */
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $075B54-$075B80  (12 instructions, 44 bytes) */
void jt_075B54(void) {
    M68K_CMP8(g_m68k.d[0], /* UNHANDLED_READ: (a0, invalid.w) */ 0);
    { uint32_t _ea = (g_m68k.a[0] + 0x40 + (int32_t)g_m68k.a[0]); uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[2], /* UNHANDLED_READ: (a0, invalid.w) */ 0);
    { uint32_t _ea = (g_m68k.a[0] + 0x40 + (int16_t)(uint16_t)g_m68k.a[3]); uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $075B64: sbcd -(a0), -(a4), #$8740  [89 08 87 40] */
    /* TODO $075B68: sbcd -(a0), -(a4), #$830a  [89 08 83 0A] */
    M68K_OR16(g_m68k.d[2], g_m68k.d[0]);
    /* TODO $075B6E: sbcd -(a0), -(a4), #$860a  [89 08 86 0A] */
    /* TODO $075B72: dc.w $8140  [81 40] */
    /* TODO $075B74: sbcd -(a0), -(a4), #$870a  [89 08 87 0A] */
    /* TODO $075B78: sbcd -(a0), -(a4), #$870a  [89 08 87 0A] */
    /* TODO $075B7C: sbcd -(a0), -(a4), #$870a  [89 08 87 0A] */
    /* WARNING: function did not end with RTS */
}

/* $075B84-$075B94  (5 instructions, 16 bytes) */
void jt_075B84(void) {
    /* TODO $075B84: roxr.l #$8, d0  [E0 30] */
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[7], /* UNHANDLED_READ: (a0, invalid.w) */ 0);
    { uint32_t _ea = (g_m68k.a[0] + 0x40 + (int32_t)g_m68k.a[0]); uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[4], bus_read8(g_m68k.a[0] + 0x40 + (int16_t)(uint16_t)g_m68k.a[3]));
    /* WARNING: function did not end with RTS */
}

/* $075BB4-$075BCA  (11 instructions, 22 bytes) */
void jt_075BB4(void) {
    M68K_ASR8(g_m68k.d[0], g_m68k.d[7]);
    M68K_OR16(g_m68k.d[1], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    /* TODO $075BBA: dc.w $8540  [85 40] */
    M68K_OR8(g_m68k.d[4], _predec8(0));
    M68K_AND16(g_m68k.d[3], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[1], g_m68k.d[6]);
    /* TODO $075BC2: dc.w $8b40  [8B 40] */
    /* TODO $075BC4: sbcd.b d6, d2  [85 06] */
    M68K_OR16(g_m68k.d[4], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[4], g_m68k.d[6]);
    /* WARNING: function did not end with RTS */
}

/* $075BCE-$075BF6  (15 instructions, 40 bytes) */
void jt_075BCE(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_EOR8(_tmp, g_m68k.d[3]); bus_write8(_ea, _tmp); }
    /* TODO $075BD0: dc.w $8940  [89 40] */
    M68K_OR8(g_m68k.d[2], _predec8(0));
    M68K_OR16(g_m68k.d[6], g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_AND16(g_m68k.d[3], g_m68k.d[0]);
    /* TODO $075BDA: sbcd -(a0), -(a4), #$8440  [89 08 84 40] */
    /* TODO $075BDE: sbcd.b d6, d1  [83 06] */
    /* TODO $075BE0: sbcd -(a0), -(a4), #$8140  [89 08 81 40] */
    M68K_OR8(g_m68k.d[3], g_m68k.d[6]);
    /* TODO $075BE6: sbcd -(a0), -(a4), #$8706  [89 08 87 06] */
    /* TODO $075BEA: sbcd -(a0), -(a4), #$8706  [89 08 87 06] */
    /* TODO $075BEE: sbcd -(a0), -(a4), #$8706  [89 08 87 06] */
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_SUBX8(_tmp, _predec8(0)); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $075C06-$075C0E  (4 instructions, 8 bytes) */
void jt_075C06(void) {
    M68K_CMP8(g_m68k.d[0], _predec8(0));
    M68K_ASR16(g_m68k.d[0], 0x8);
    /* TODO $075C0A: dc.w $f008  [F0 08] */
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $075C0E-$075C16  (4 instructions, 8 bytes) */
void jt_075C0E(void) {
    M68K_CMP8(g_m68k.d[0], _predec8(0));
    M68K_ASR16(g_m68k.d[0], 0x8);
    /* TODO $075C12: dc.w $f008  [F0 08] */
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $075C26-$075C32  (6 instructions, 12 bytes) */
void jt_075C26(void) {
    M68K_CMP8(g_m68k.d[0], _predec8(0));
    /* TODO $075C28: dc.w $8b40  [8B 40] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[2]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[7], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[1], _predec8(0));
    M68K_AND16(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $075C54-$075C66  (9 instructions, 18 bytes) */
void jt_075C54(void) {
    M68K_ADD8(g_m68k.d[0], _predec8(0));
    /* TODO $075C56: dc.w $8140  [81 40] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[7]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[2], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[6], _predec8(0));
    /* TODO $075C5E: dc.w $8740  [87 40] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, g_m68k.d[4]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[5], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[3], _predec8(0));
    /* WARNING: function did not end with RTS */
}

/* $075D02-$075D08  (3 instructions, 6 bytes) */
void jt_075D02(void) {
    /* TODO $075D02: dc.w $ff20  [FF 20] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_ASR16(g_m68k.d[0], 0x8);
    /* WARNING: function did not end with RTS */
}

/* $075D0C-$075D1A  (7 instructions, 14 bytes) */
void jt_075D0C(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_AND8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_OR16(g_m68k.d[7], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[1], _predec8(0));
    M68K_OR16(g_m68k.d[7], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[1], _predec8(0));
    M68K_OR16(g_m68k.d[7], g_m68k.d[0]);
    M68K_OR8(g_m68k.d[1], _predec8(0));
    /* WARNING: function did not end with RTS */
}

/* $075D30-$075D36  (2 instructions, 6 bytes) */
void jt_075D30(void) {
    /* TODO $075D30: dc.w $ff30  [FF 30] */
    { uint32_t _ea = (g_m68k.a[0] + 0x40 + (int16_t)(uint16_t)g_m68k.a[6]); uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $075D3A-$075D40  (2 instructions, 6 bytes) */
void jt_075D3A(void) {
    /* TODO $075D3A: dc.w $ff30  [FF 30] */
    { uint32_t _ea = (g_m68k.a[0] + 0x40 + (int16_t)(uint16_t)g_m68k.a[6]); uint8_t _tmp = bus_read8(_ea); M68K_SUB8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $075D54-$075D5C  (4 instructions, 8 bytes) */
void jt_075D54(void) {
    /* TODO $075D54: dc.w $ff14  [FF 14] */
    /* TODO $075D56: dc.w $ff14  [FF 14] */
    M68K_OR8(g_m68k.d[1], bus_read8(g_m68k.a[4]));
    M68K_OR8(g_m68k.d[0], g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}
