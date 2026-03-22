/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $0185C0 - $01891C */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

/* $0185C0-$0185CC  (3 instructions, 12 bytes) */
void jt_0185C0(void) {
    M68K_OR8(g_m68k.d[1], 0xcc);
    M68K_OR8(g_m68k.d[1], 0x50);
    M68K_OR8(g_m68k.d[1], 0x62);
    /* WARNING: function did not end with RTS */
}

/* $0185CC-$0185E6  (6 instructions, 26 bytes) */
void jt_0185CC(void) {
    bus_write16(g_m68k.a[1] + 0x10, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0xb6)); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_CMP16(g_m68k.d[1], 0xb4);
    if (M68K_CC_EQ) goto loc_0185E0;
    { uint32_t _ea = (g_m68k.a[1] + 0x10); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0x1); bus_write16(_ea, _tmp); }
loc_0185E0:
    { func_table_call(0x016E40); return; }
    /* WARNING: function did not end with RTS */
}

/* $0185E6-$0185F2  (3 instructions, 12 bytes) */
void jt_0185E6(void) {
    M68K_OR8(g_m68k.d[1], 0xf2);
    M68K_OR8(g_m68k.d[1], 0x50);
    M68K_OR8(g_m68k.d[1], 0x62);
    /* WARNING: function did not end with RTS */
}

/* $0185F2-$01860C  (6 instructions, 26 bytes) */
void jt_0185F2(void) {
    bus_write16(g_m68k.a[1] + 0x10, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0xb7)); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_CMP16(g_m68k.d[1], 0xb4);
    if (M68K_CC_EQ) goto loc_018606;
    { uint32_t _ea = (g_m68k.a[1] + 0x10); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0x1); bus_write16(_ea, _tmp); }
loc_018606:
    { func_table_call(0x016E40); return; }
    /* WARNING: function did not end with RTS */
}

/* $01860C-$018618  (3 instructions, 12 bytes) */
void jt_01860C(void) {
    M68K_OR8(g_m68k.d[1], 0x18);
    M68K_OR8(g_m68k.d[1], 0x50);
    M68K_OR8(g_m68k.d[1], 0x62);
    /* WARNING: function did not end with RTS */
}

/* $018618-$018632  (6 instructions, 26 bytes) */
void jt_018618(void) {
    bus_write16(g_m68k.a[1] + 0x10, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0xb8)); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_CMP16(g_m68k.d[1], 0xb4);
    if (M68K_CC_EQ) goto loc_01862C;
    { uint32_t _ea = (g_m68k.a[1] + 0x10); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0x1); bus_write16(_ea, _tmp); }
loc_01862C:
    { func_table_call(0x016E40); return; }
    /* WARNING: function did not end with RTS */
}

/* $018632-$01863E  (3 instructions, 12 bytes) */
void jt_018632(void) {
    M68K_OR8(g_m68k.d[1], 0x3e);
    M68K_OR8(g_m68k.d[1], 0x50);
    M68K_OR8(g_m68k.d[1], 0x62);
    /* WARNING: function did not end with RTS */
}

/* $01863E-$018658  (6 instructions, 26 bytes) */
void jt_01863E(void) {
    bus_write16(g_m68k.a[1] + 0x10, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0xb9)); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_CMP16(g_m68k.d[1], 0xb4);
    if (M68K_CC_EQ) goto loc_018652;
    { uint32_t _ea = (g_m68k.a[1] + 0x10); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0x1); bus_write16(_ea, _tmp); }
loc_018652:
    { func_table_call(0x016E40); return; }
    /* WARNING: function did not end with RTS */
}

/* $018658-$018664  (3 instructions, 12 bytes) */
void jt_018658(void) {
    M68K_OR8(g_m68k.d[1], 0x64);
    M68K_OR8(g_m68k.d[1], 0x50);
    M68K_OR8(g_m68k.d[1], 0x62);
    /* WARNING: function did not end with RTS */
}

/* $018664-$01867E  (6 instructions, 26 bytes) */
void jt_018664(void) {
    bus_write16(g_m68k.a[1] + 0x10, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0xba)); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_CMP16(g_m68k.d[1], 0xb4);
    if (M68K_CC_EQ) goto loc_018678;
    { uint32_t _ea = (g_m68k.a[1] + 0x10); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0x1); bus_write16(_ea, _tmp); }
loc_018678:
    { func_table_call(0x016E40); return; }
    /* WARNING: function did not end with RTS */
}

/* $01867E-$01868A  (3 instructions, 12 bytes) */
void jt_01867E(void) {
    M68K_OR8(g_m68k.d[1], 0x8a);
    M68K_OR8(g_m68k.d[1], 0x50);
    M68K_OR8(g_m68k.d[1], 0x62);
    /* WARNING: function did not end with RTS */
}

/* $01868A-$0186A4  (6 instructions, 26 bytes) */
void jt_01868A(void) {
    bus_write16(g_m68k.a[1] + 0x10, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0xbb)); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_CMP16(g_m68k.d[1], 0xb4);
    if (M68K_CC_EQ) goto loc_01869E;
    { uint32_t _ea = (g_m68k.a[1] + 0x10); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0x1); bus_write16(_ea, _tmp); }
loc_01869E:
    { func_table_call(0x016E40); return; }
    /* WARNING: function did not end with RTS */
}

/* $0186A4-$0186B0  (3 instructions, 12 bytes) */
void jt_0186A4(void) {
    M68K_OR8(g_m68k.d[1], 0xb0);
    M68K_OR8(g_m68k.d[1], 0x50);
    M68K_OR8(g_m68k.d[1], 0x62);
    /* WARNING: function did not end with RTS */
}

/* $0186B0-$0186CA  (6 instructions, 26 bytes) */
void jt_0186B0(void) {
    bus_write16(g_m68k.a[1] + 0x10, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0xbc)); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_CMP16(g_m68k.d[1], 0xb4);
    if (M68K_CC_EQ) goto loc_0186C4;
    { uint32_t _ea = (g_m68k.a[1] + 0x10); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0x1); bus_write16(_ea, _tmp); }
loc_0186C4:
    { func_table_call(0x016E40); return; }
    /* WARNING: function did not end with RTS */
}

/* $0186CA-$0186D6  (3 instructions, 12 bytes) */
void jt_0186CA(void) {
    M68K_OR8(g_m68k.d[1], 0xd6);
    M68K_OR8(g_m68k.d[1], 0x50);
    M68K_OR8(g_m68k.d[1], 0x62);
    /* WARNING: function did not end with RTS */
}

/* $0186D6-$0186F0  (6 instructions, 26 bytes) */
void jt_0186D6(void) {
    bus_write16(g_m68k.a[1] + 0x10, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0xbd)); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_CMP16(g_m68k.d[1], 0xb4);
    if (M68K_CC_EQ) goto loc_0186EA;
    { uint32_t _ea = (g_m68k.a[1] + 0x10); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0x1); bus_write16(_ea, _tmp); }
loc_0186EA:
    { func_table_call(0x016E40); return; }
    /* WARNING: function did not end with RTS */
}

/* $0186F0-$0186FC  (3 instructions, 12 bytes) */
void jt_0186F0(void) {
    M68K_OR8(g_m68k.d[1], 0xfc);
    M68K_OR8(g_m68k.d[1], 0x50);
    M68K_OR8(g_m68k.d[1], 0x62);
    /* WARNING: function did not end with RTS */
}

/* $0186FC-$018716  (6 instructions, 26 bytes) */
void jt_0186FC(void) {
    bus_write16(g_m68k.a[1] + 0x10, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0xbe)); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_CMP16(g_m68k.d[1], 0xb4);
    if (M68K_CC_EQ) goto loc_018710;
    { uint32_t _ea = (g_m68k.a[1] + 0x10); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0x1); bus_write16(_ea, _tmp); }
loc_018710:
    { func_table_call(0x016E40); return; }
    /* WARNING: function did not end with RTS */
}

/* $018716-$018722  (3 instructions, 12 bytes) */
void jt_018716(void) {
    M68K_OR8(g_m68k.d[1], 0x22);
    M68K_OR8(g_m68k.d[1], 0x50);
    M68K_OR8(g_m68k.d[1], 0x62);
    /* WARNING: function did not end with RTS */
}

/* $018722-$01873C  (6 instructions, 26 bytes) */
void jt_018722(void) {
    bus_write16(g_m68k.a[1] + 0x10, 0); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0xbf)); M68K_TST16((uint16_t)g_m68k.d[1]);
    M68K_CMP16(g_m68k.d[1], 0xb4);
    if (M68K_CC_EQ) goto loc_018736;
    { uint32_t _ea = (g_m68k.a[1] + 0x10); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, 0x1); bus_write16(_ea, _tmp); }
loc_018736:
    { func_table_call(0x016E40); return; }
    /* WARNING: function did not end with RTS */
}

/* $01873C-$018748  (3 instructions, 12 bytes) */
void jt_01873C(void) {
    M68K_OR8(g_m68k.d[1], 0x48);
    M68K_OR8(g_m68k.d[1], 0x2a);
    M68K_OR8(g_m68k.d[1], 0x2c);
    /* WARNING: function did not end with RTS */
}

/* $018748-$01875C  (5 instructions, 20 bytes) */
void jt_018748(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x10)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x50)); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x4000)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0xc0)); M68K_TST16((uint16_t)g_m68k.d[3]);
    { func_table_call(0x016B04); return; }
    /* WARNING: function did not end with RTS */
}

/* $01875C-$018768  (3 instructions, 12 bytes) */
void jt_01875C(void) {
    M68K_OR8(g_m68k.d[1], 0x68);
    M68K_OR8(g_m68k.d[1], 0x2a);
    M68K_OR8(g_m68k.d[1], 0x2c);
    /* WARNING: function did not end with RTS */
}

/* $018768-$01877C  (5 instructions, 20 bytes) */
void jt_018768(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x10)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x50)); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x4000)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0xc1)); M68K_TST16((uint16_t)g_m68k.d[3]);
    { func_table_call(0x016B04); return; }
    /* WARNING: function did not end with RTS */
}

/* $01877C-$018788  (3 instructions, 12 bytes) */
void jt_01877C(void) {
    M68K_OR8(g_m68k.d[1], 0x88);
    M68K_OR8(g_m68k.d[1], 0x2a);
    M68K_OR8(g_m68k.d[1], 0x2c);
    /* WARNING: function did not end with RTS */
}

/* $018788-$01879C  (5 instructions, 20 bytes) */
void jt_018788(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x30)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x50)); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x4000)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0xc2)); M68K_TST16((uint16_t)g_m68k.d[3]);
    { func_table_call(0x016B04); return; }
    /* WARNING: function did not end with RTS */
}

/* $01879C-$0187A8  (3 instructions, 12 bytes) */
void jt_01879C(void) {
    M68K_OR8(g_m68k.d[1], 0xa8);
    M68K_OR8(g_m68k.d[1], 0x2a);
    M68K_OR8(g_m68k.d[1], 0x2c);
    /* WARNING: function did not end with RTS */
}

/* $0187A8-$0187BC  (5 instructions, 20 bytes) */
void jt_0187A8(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x18)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x38)); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x4000)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0xc3)); M68K_TST16((uint16_t)g_m68k.d[3]);
    { func_table_call(0x016B04); return; }
    /* WARNING: function did not end with RTS */
}

/* $0187BC-$0187C8  (3 instructions, 12 bytes) */
void jt_0187BC(void) {
    M68K_OR8(g_m68k.d[1], 0xc8);
    M68K_OR8(g_m68k.d[1], 0x2a);
    M68K_OR8(g_m68k.d[1], 0x2c);
    /* WARNING: function did not end with RTS */
}

/* $0187C8-$0187DC  (5 instructions, 20 bytes) */
void jt_0187C8(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x10)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x8)); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x4000)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0xc4)); M68K_TST16((uint16_t)g_m68k.d[3]);
    { func_table_call(0x016B04); return; }
    /* WARNING: function did not end with RTS */
}

/* $0187DC-$0187E8  (3 instructions, 12 bytes) */
void jt_0187DC(void) {
    M68K_OR8(g_m68k.d[1], 0xe8);
    M68K_OR8(g_m68k.d[1], 0x2a);
    M68K_OR8(g_m68k.d[1], 0x2c);
    /* WARNING: function did not end with RTS */
}

/* $0187E8-$0187FC  (5 instructions, 20 bytes) */
void jt_0187E8(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x10)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x10)); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x4000)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0xc5)); M68K_TST16((uint16_t)g_m68k.d[3]);
    { func_table_call(0x016B04); return; }
    /* WARNING: function did not end with RTS */
}

/* $0187FC-$018808  (3 instructions, 12 bytes) */
void jt_0187FC(void) {
    M68K_OR8(g_m68k.d[1], 0x8);
    M68K_OR8(g_m68k.d[1], 0x2a);
    M68K_OR8(g_m68k.d[1], 0x2c);
    /* WARNING: function did not end with RTS */
}

/* $018808-$01881C  (5 instructions, 20 bytes) */
void jt_018808(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x10)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x50)); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x4000)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0xc6)); M68K_TST16((uint16_t)g_m68k.d[3]);
    { func_table_call(0x016B04); return; }
    /* WARNING: function did not end with RTS */
}

/* $01881C-$018828  (3 instructions, 12 bytes) */
void jt_01881C(void) {
    M68K_OR8(g_m68k.d[1], 0x28);
    M68K_OR8(g_m68k.d[1], 0x2a);
    M68K_OR8(g_m68k.d[1], 0x2c);
    /* WARNING: function did not end with RTS */
}

/* $018828-$01883C  (5 instructions, 20 bytes) */
void jt_018828(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x10)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x50)); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x4000)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0xc7)); M68K_TST16((uint16_t)g_m68k.d[3]);
    { func_table_call(0x016B04); return; }
    /* WARNING: function did not end with RTS */
}

/* $01883C-$018848  (3 instructions, 12 bytes) */
void jt_01883C(void) {
    M68K_OR8(g_m68k.d[1], 0x48);
    M68K_OR8(g_m68k.d[1], 0x2a);
    M68K_OR8(g_m68k.d[1], 0x2c);
    /* WARNING: function did not end with RTS */
}

/* $018848-$01885C  (5 instructions, 20 bytes) */
void jt_018848(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x30)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x50)); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x4000)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0xc8)); M68K_TST16((uint16_t)g_m68k.d[3]);
    { func_table_call(0x016B04); return; }
    /* WARNING: function did not end with RTS */
}

/* $01885C-$018868  (3 instructions, 12 bytes) */
void jt_01885C(void) {
    M68K_OR8(g_m68k.d[1], 0x68);
    M68K_OR8(g_m68k.d[1], 0x2a);
    M68K_OR8(g_m68k.d[1], 0x2c);
    /* WARNING: function did not end with RTS */
}

/* $018868-$01887C  (5 instructions, 20 bytes) */
void jt_018868(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x18)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x38)); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x4000)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0xc9)); M68K_TST16((uint16_t)g_m68k.d[3]);
    { func_table_call(0x016B04); return; }
    /* WARNING: function did not end with RTS */
}

/* $01887C-$018888  (3 instructions, 12 bytes) */
void jt_01887C(void) {
    M68K_OR8(g_m68k.d[1], 0x88);
    M68K_OR8(g_m68k.d[1], 0x2a);
    M68K_OR8(g_m68k.d[1], 0x2c);
    /* WARNING: function did not end with RTS */
}

/* $018888-$01889C  (5 instructions, 20 bytes) */
void jt_018888(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x10)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x8)); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x4000)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0xca)); M68K_TST16((uint16_t)g_m68k.d[3]);
    { func_table_call(0x016B04); return; }
    /* WARNING: function did not end with RTS */
}

/* $01889C-$0188A8  (3 instructions, 12 bytes) */
void jt_01889C(void) {
    M68K_OR8(g_m68k.d[1], 0xa8);
    M68K_OR8(g_m68k.d[1], 0x2a);
    M68K_OR8(g_m68k.d[1], 0x2c);
    /* WARNING: function did not end with RTS */
}

/* $0188A8-$0188BC  (5 instructions, 20 bytes) */
void jt_0188A8(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x10)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x10)); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x4000)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0xcb)); M68K_TST16((uint16_t)g_m68k.d[3]);
    { func_table_call(0x016B04); return; }
    /* WARNING: function did not end with RTS */
}

/* $0188BC-$0188C8  (3 instructions, 12 bytes) */
void jt_0188BC(void) {
    M68K_OR8(g_m68k.d[1], 0xc8);
    M68K_OR8(g_m68k.d[1], 0x2a);
    M68K_OR8(g_m68k.d[1], 0x2c);
    /* WARNING: function did not end with RTS */
}

/* $0188C8-$0188DC  (5 instructions, 20 bytes) */
void jt_0188C8(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x28)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x50)); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x4000)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0xcc)); M68K_TST16((uint16_t)g_m68k.d[3]);
    { func_table_call(0x016B04); return; }
    /* WARNING: function did not end with RTS */
}

/* $0188DC-$0188E8  (3 instructions, 12 bytes) */
void jt_0188DC(void) {
    M68K_OR8(g_m68k.d[1], 0xe8);
    M68K_OR8(g_m68k.d[1], 0x2a);
    M68K_OR8(g_m68k.d[1], 0x2c);
    /* WARNING: function did not end with RTS */
}

/* $0188E8-$0188FC  (5 instructions, 20 bytes) */
void jt_0188E8(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x18)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x50)); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x4000)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0xcd)); M68K_TST16((uint16_t)g_m68k.d[3]);
    { func_table_call(0x016B04); return; }
    /* WARNING: function did not end with RTS */
}

/* $0188FC-$018908  (3 instructions, 12 bytes) */
void jt_0188FC(void) {
    M68K_OR8(g_m68k.d[1], 0x8);
    M68K_OR8(g_m68k.d[1], 0x2a);
    M68K_OR8(g_m68k.d[1], 0x2c);
    /* WARNING: function did not end with RTS */
}

/* $018908-$01891C  (5 instructions, 20 bytes) */
void jt_018908(void) {
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFF0000u) | ((uint16_t)(0x8)); M68K_TST16((uint16_t)g_m68k.d[0]);
    g_m68k.d[2] = (g_m68k.d[2] & 0xFFFF0000u) | ((uint16_t)(0x30)); M68K_TST16((uint16_t)g_m68k.d[2]);
    g_m68k.d[1] = (g_m68k.d[1] & 0xFFFF0000u) | ((uint16_t)(0x4000)); M68K_TST16((uint16_t)g_m68k.d[1]);
    g_m68k.d[3] = (g_m68k.d[3] & 0xFFFF0000u) | ((uint16_t)(0xce)); M68K_TST16((uint16_t)g_m68k.d[3]);
    { func_table_call(0x016B04); return; }
    /* WARNING: function did not end with RTS */
}
