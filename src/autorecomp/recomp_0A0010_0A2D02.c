/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $0A0010 - $0A2D02 */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

/* $0A0010-$0A0030  (14 instructions, 32 bytes) */
void jt_0A0010(void) {
    M68K_ADD32(g_m68k.d[6], g_m68k.d[0]);
    /* TODO $0A0012: dc.w $4100  [41 00] */
    M68K_ADD32(g_m68k.d[6], bus_read32(g_m68k.a[0]));
    /* TODO $0A0016: dc.w $4100  [41 00] */
    M68K_ADD32(g_m68k.d[6], _predec32(0));
    /* TODO $0A001A: dc.w $4100  [41 00] */
    M68K_ADD32(g_m68k.d[6], bus_read32(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[4]));
    g_m68k.a[6] += (int16_t)(uint16_t)(g_m68k.d[0]);
    /* TODO $0A0022: dc.w $4100  [41 00] */
    g_m68k.a[6] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[0]));
    /* TODO $0A0026: dc.w $4100  [41 00] */
    g_m68k.a[6] += (int16_t)(uint16_t)(_predec16(0));
    /* TODO $0A002A: dc.w $4100  [41 00] */
    g_m68k.a[6] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[4]));
    /* WARNING: function did not end with RTS */
}

/* $0A02C0-$0A0324  (40 instructions, 100 bytes) */
void jt_0A02C0(void) {
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x10); bus_write8(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[4] + 0x4100); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[7] + 0 + (int16_t)(uint16_t)g_m68k.d[4]); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    M68K_ADDX32(g_m68k.d[6], g_m68k.d[5]);
    /* TODO $0A02CE: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[2]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    /* TODO $0A02D2: dc.w $4100  [41 00] */
    M68K_ADD16(g_m68k.d[6], bus_read16(g_m68k.a[7] + 0 + (int16_t)(uint16_t)g_m68k.d[4]));
    M68K_ADD32(g_m68k.d[6], g_m68k.d[7]);
    /* TODO $0A02DA: dc.w $4100  [41 00] */
    M68K_ADD32(g_m68k.d[6], bus_read32(g_m68k.a[7]));
    /* TODO $0A02DE: dc.w $4100  [41 00] */
    M68K_ADD32(g_m68k.d[6], _predec32(7));
    /* TODO $0A02E2: dc.w $4100  [41 00] */
    M68K_ADD32(g_m68k.d[6], bus_read32(g_m68k.a[7] + 0 + (int16_t)(uint16_t)g_m68k.d[4]));
    g_m68k.a[6] += (int16_t)(uint16_t)(g_m68k.d[7]);
    /* TODO $0A02EA: dc.w $4100  [41 00] */
    g_m68k.a[6] += g_m68k.a[4];
    /* TODO $0A02EE: dc.w $4100  [41 00] */
    g_m68k.a[6] += _postinc32(0);
    /* TODO $0A02F2: dc.w $4100  [41 00] */
    g_m68k.a[6] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[7] + 0 + (int16_t)(uint16_t)g_m68k.d[4]));
    M68K_ADDX8(g_m68k.d[6], g_m68k.d[5]);
    /* TODO $0A02FA: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    /* TODO $0A02FE: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    /* TODO $0A0302: dc.w $4100  [41 00] */
    { uint32_t _ea = (g_m68k.a[5] + 0x4100); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    { uint32_t _ea = 0x004100; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    M68K_ADDX32(g_m68k.d[6], g_m68k.d[6]);
    /* TODO $0A030E: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[3]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    /* TODO $0A0312: dc.w $4100  [41 00] */
    M68K_ADD16(g_m68k.d[6], bus_read16(0x004100));
    M68K_ADD32(g_m68k.d[6], g_m68k.a[0]);
    /* TODO $0A031A: dc.w $4100  [41 00] */
    M68K_ADD32(g_m68k.d[6], _postinc32(0));
    /* TODO $0A031E: dc.w $4100  [41 00] */
    { uint32_t _ea = (g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[4]); uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0A0640-$0A067C  (25 instructions, 60 bytes) */
void jt_0A0640(void) {
    g_m68k.a[6] += bus_read32(g_m68k.a[7] + 0 + (int16_t)(uint16_t)g_m68k.d[4]);
    { uint32_t _ea = (g_m68k.a[6] + 0 + (int16_t)(uint16_t)g_m68k.d[4]); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[6]); bus_write16(_ea, _tmp); }
    M68K_ADDX32(g_m68k.d[6], g_m68k.d[3]);
    /* TODO $0A064A: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[0]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    /* TODO $0A064E: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[4]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    /* TODO $0A0652: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[3]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    /* TODO $0A0656: dc.w $4100  [41 00] */
    { uint32_t _ea = (g_m68k.a[2] + 0x4100); uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    M68K_ADD32(g_m68k.d[6], _predec32(5));
    /* TODO $0A065E: dc.w $4100  [41 00] */
    M68K_ADD32(g_m68k.d[6], bus_read32(g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.d[4]));
    g_m68k.a[6] += g_m68k.d[1];
    /* TODO $0A0666: dc.w $4100  [41 00] */
    g_m68k.a[6] += g_m68k.a[2];
    /* TODO $0A066A: dc.w $4100  [41 00] */
    g_m68k.a[6] += bus_read32(g_m68k.a[6]);
    /* TODO $0A066E: dc.w $4100  [41 00] */
    g_m68k.a[6] += _predec32(0);
    /* TODO $0A0672: dc.w $4100  [41 00] */
    g_m68k.a[6] += _predec32(6);
    /* TODO $0A0676: dc.w $4100  [41 00] */
    g_m68k.a[6] += bus_read32(g_m68k.a[5] + 0x4100);
    /* WARNING: function did not end with RTS */
}

/* $0A07C4-$0A0878  (79 instructions, 180 bytes) */
void jt_0A07C4(void) {
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x10); bus_write8(_ea, _tmp); }
    M68K_ADD8(g_m68k.d[7], _predec8(6));
    /* TODO $0A07CA: dc.w $4100  [41 00] */
    M68K_ADD16(g_m68k.d[6], g_m68k.d[7]);
    /* TODO $0A07CE: dc.w $4100  [41 00] */
    M68K_ADD16(g_m68k.d[7], g_m68k.d[0]);
    /* TODO $0A07D2: dc.w $4100  [41 00] */
    M68K_ADD16(g_m68k.d[7], g_m68k.a[5]);
    /* TODO $0A07D6: dc.w $4100  [41 00] */
    M68K_ADD16(g_m68k.d[7], _postinc16(2));
    /* TODO $0A07DA: dc.w $4100  [41 00] */
    M68K_ADD16(g_m68k.d[7], bus_read16(g_m68k.a[0] + 0x4100));
    M68K_ADD16(g_m68k.d[7], bus_read16(g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.d[4]));
    M68K_ADD32(g_m68k.d[7], g_m68k.d[3]);
    /* TODO $0A07E6: dc.w $4100  [41 00] */
    M68K_ADD32(g_m68k.d[7], g_m68k.a[7]);
    /* TODO $0A07EA: dc.w $4100  [41 00] */
    g_m68k.a[6] += (int16_t)(uint16_t)(g_m68k.d[7]);
    /* TODO $0A07EE: dc.w $4100  [41 00] */
    g_m68k.a[6] += g_m68k.a[4];
    /* TODO $0A07F2: dc.w $4100  [41 00] */
    M68K_ADD32(g_m68k.d[7], _postinc32(7));
    /* TODO $0A07F6: dc.w $4100  [41 00] */
    M68K_ADD32(g_m68k.d[7], _predec32(4));
    /* TODO $0A07FA: dc.w $4100  [41 00] */
    M68K_ADD32(g_m68k.d[7], _predec32(7));
    /* TODO $0A07FE: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    /* TODO $0A0802: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    /* TODO $0A0806: dc.w $4100  [41 00] */
    M68K_ADD8(g_m68k.d[7], _predec8(7));
    /* TODO $0A080A: dc.w $4100  [41 00] */
    M68K_ADD8(g_m68k.d[7], bus_read8(g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.d[4]));
    M68K_ADD16(g_m68k.d[7], g_m68k.d[1]);
    /* TODO $0A0812: dc.w $4100  [41 00] */
    M68K_ADD16(g_m68k.d[7], g_m68k.a[6]);
    /* TODO $0A0816: dc.w $4100  [41 00] */
    M68K_ADD16(g_m68k.d[7], _postinc16(3));
    /* TODO $0A081A: dc.w $4100  [41 00] */
    M68K_ADD16(g_m68k.d[7], bus_read16(g_m68k.a[1] + 0x4100));
    M68K_ADD16(g_m68k.d[7], bus_read16(g_m68k.a[6] + 0 + (int16_t)(uint16_t)g_m68k.d[4]));
    M68K_ADD32(g_m68k.d[7], g_m68k.d[4]);
    /* TODO $0A0826: dc.w $4100  [41 00] */
    M68K_ADD32(g_m68k.d[7], bus_read32(g_m68k.a[0]));
    /* TODO $0A082A: dc.w $4100  [41 00] */
    g_m68k.a[6] += g_m68k.d[3];
    /* TODO $0A082E: dc.w $4100  [41 00] */
    g_m68k.a[6] += g_m68k.a[5];
    /* TODO $0A0832: dc.w $4100  [41 00] */
    M68K_ADD32(g_m68k.d[7], _predec32(0));
    /* TODO $0A0836: dc.w $4100  [41 00] */
    M68K_ADD32(g_m68k.d[7], _predec32(5));
    /* TODO $0A083A: dc.w $4100  [41 00] */
    M68K_ADD32(g_m68k.d[7], bus_read32(g_m68k.a[0] + 0x4100));
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    /* TODO $0A0842: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    /* TODO $0A0846: dc.w $4100  [41 00] */
    M68K_ADD8(g_m68k.d[7], bus_read8(g_m68k.a[0] + 0x4100));
    M68K_ADD8(g_m68k.d[7], bus_read8(g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.d[4]));
    M68K_ADD16(g_m68k.d[7], g_m68k.d[2]);
    /* TODO $0A0852: dc.w $4100  [41 00] */
    M68K_ADD16(g_m68k.d[7], g_m68k.a[7]);
    /* TODO $0A0856: dc.w $4100  [41 00] */
    M68K_ADD16(g_m68k.d[7], _postinc16(4));
    /* TODO $0A085A: dc.w $4100  [41 00] */
    M68K_ADD16(g_m68k.d[7], bus_read16(g_m68k.a[2] + 0x4100));
    M68K_ADD16(g_m68k.d[7], bus_read16(g_m68k.a[7] + 0 + (int16_t)(uint16_t)g_m68k.d[4]));
    M68K_ADD32(g_m68k.d[7], g_m68k.d[5]);
    /* TODO $0A0866: dc.w $4100  [41 00] */
    M68K_ADD32(g_m68k.d[7], bus_read32(g_m68k.a[1]));
    /* TODO $0A086A: dc.w $4100  [41 00] */
    g_m68k.a[6] += g_m68k.d[4];
    /* TODO $0A086E: dc.w $4100  [41 00] */
    g_m68k.a[6] += g_m68k.a[6];
    /* TODO $0A0872: dc.w $4100  [41 00] */
    M68K_ADD32(g_m68k.d[7], _predec32(1));
    /* TODO $0A0876: dc.w $4100  [41 00] */
    /* WARNING: function did not end with RTS */
}

/* $0A0A00-$0A0A20  (13 instructions, 32 bytes) */
void jt_0A0A00(void) {
    M68K_ADDX32(g_m68k.d[6], g_m68k.d[0]);
    /* TODO $0A0A02: dc.w $4103  [41 03] */
    M68K_ADD16(g_m68k.d[6], g_m68k.d[2]);
    /* TODO $0A0A06: dc.w $4103  [41 03] */
    M68K_ADD8(g_m68k.d[7], bus_read8(g_m68k.a[5] + 0x4100));
    M68K_ADD8(g_m68k.d[7], bus_read8(0xa4b0e));
    M68K_ADD16(g_m68k.d[7], g_m68k.d[7]);
    /* TODO $0A0A12: dc.w $4100  [41 00] */
    M68K_ADD16(g_m68k.d[7], bus_read16(g_m68k.a[4]));
    /* TODO $0A0A16: dc.w $4100  [41 00] */
    M68K_ADD16(g_m68k.d[7], _predec16(1));
    /* TODO $0A0A1A: dc.w $4100  [41 00] */
    M68K_ADD16(g_m68k.d[7], bus_read16(g_m68k.a[7] + 0x4100));
    /* WARNING: function did not end with RTS */
}

/* $0A0CC8-$0A0D2C  (42 instructions, 100 bytes) */
void jt_0A0CC8(void) {
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x10); bus_write8(_ea, _tmp); }
    g_m68k.a[7] += (int16_t)(uint16_t)(g_m68k.a[3]);
    /* TODO $0A0CCE: dc.w $4100  [41 00] */
    M68K_ADD16(g_m68k.d[6], g_m68k.d[7]);
    /* TODO $0A0CD2: dc.w $4100  [41 00] */
    M68K_ADD16(g_m68k.d[6], bus_read16(g_m68k.a[7]));
    /* TODO $0A0CD6: dc.w $4100  [41 00] */
    M68K_ADD16(g_m68k.d[6], _predec16(7));
    /* TODO $0A0CDA: dc.w $4100  [41 00] */
    M68K_ADD16(g_m68k.d[6], bus_read16(g_m68k.a[7] + 0 + (int16_t)(uint16_t)g_m68k.d[4]));
    M68K_ADD32(g_m68k.d[6], g_m68k.d[7]);
    /* TODO $0A0CE2: dc.w $4100  [41 00] */
    M68K_ADD32(g_m68k.d[6], bus_read32(g_m68k.a[7]));
    /* TODO $0A0CE6: dc.w $4100  [41 00] */
    M68K_ADD32(g_m68k.d[6], _predec32(7));
    /* TODO $0A0CEA: dc.w $4100  [41 00] */
    M68K_ADD32(g_m68k.d[6], bus_read32(g_m68k.a[7] + 0 + (int16_t)(uint16_t)g_m68k.d[4]));
    g_m68k.a[6] += (int16_t)(uint16_t)(g_m68k.d[7]);
    /* TODO $0A0CF2: dc.w $4100  [41 00] */
    g_m68k.a[6] += g_m68k.a[4];
    /* TODO $0A0CF6: dc.w $4100  [41 00] */
    g_m68k.a[6] += _postinc32(0);
    /* TODO $0A0CFA: dc.w $4100  [41 00] */
    g_m68k.a[6] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[7] + 0 + (int16_t)(uint16_t)g_m68k.d[4]));
    M68K_ADDX8(g_m68k.d[6], g_m68k.d[5]);
    /* TODO $0A0D02: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    /* TODO $0A0D06: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    /* TODO $0A0D0A: dc.w $4100  [41 00] */
    g_m68k.a[7] += (int16_t)(uint16_t)(g_m68k.a[4]);
    /* TODO $0A0D0E: dc.w $4100  [41 00] */
    M68K_ADD8(g_m68k.d[7], bus_read8(g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.d[4]));
    M68K_ADD16(g_m68k.d[6], _postinc16(0));
    /* TODO $0A0D16: dc.w $4100  [41 00] */
    M68K_ADD16(g_m68k.d[6], bus_read16(g_m68k.a[0] + 0x4100));
    M68K_ADD16(g_m68k.d[6], bus_read16(0x004100));
    M68K_ADD32(g_m68k.d[6], g_m68k.a[0]);
    /* TODO $0A0D22: dc.w $4100  [41 00] */
    M68K_ADD32(g_m68k.d[6], _postinc32(0));
    /* TODO $0A0D26: dc.w $4100  [41 00] */
    { uint32_t _ea = (g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[4]); uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0A0E00-$0A0E6C  (45 instructions, 108 bytes) */
void jt_0A0E00(void) {
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_ADDX8(_tmp, _predec8(0)); bus_write8(_ea, _tmp); }
    /* TODO $0A0E02: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    /* TODO $0A0E06: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    /* TODO $0A0E0A: dc.w $4100  [41 00] */
    g_m68k.a[7] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[0]));
    /* TODO $0A0E0E: dc.w $4100  [41 00] */
    M68K_ADD16(g_m68k.d[6], g_m68k.a[4]);
    /* TODO $0A0E12: dc.w $4100  [41 00] */
    M68K_ADD16(g_m68k.d[6], _postinc16(4));
    /* TODO $0A0E16: dc.w $4100  [41 00] */
    g_m68k.a[7] += (int16_t)(uint16_t)(_postinc16(3));
    /* TODO $0A0E1A: dc.w $4100  [41 00] */
    g_m68k.a[7] += (int16_t)(uint16_t)(_predec16(5));
    /* TODO $0A0E1E: dc.w $4100  [41 00] */
    g_m68k.a[7] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[6] + 0x4100));
    g_m68k.a[7] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.d[4]));
    M68K_ADD32(g_m68k.d[6], bus_read32(g_m68k.a[4] + 0x4100));
    M68K_ADD32(g_m68k.d[6], 0x4100dccc);
    /* TODO $0A0E32: dc.w $4100  [41 00] */
    g_m68k.a[6] += (int16_t)(uint16_t)(_postinc16(4));
    /* TODO $0A0E36: dc.w $4100  [41 00] */
    g_m68k.a[6] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[4] + 0x4100));
    g_m68k.a[6] += (int16_t)(uint16_t)(0x4100);
    M68K_ADDX8(g_m68k.d[6], g_m68k.d[6]);
    /* TODO $0A0E42: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    /* TODO $0A0E46: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    /* TODO $0A0E4A: dc.w $4100  [41 00] */
    M68K_ADD8(g_m68k.d[7], bus_read8(g_m68k.a[2] + 0x4100));
    M68K_ADD16(g_m68k.d[6], g_m68k.a[5]);
    /* TODO $0A0E52: dc.w $4100  [41 00] */
    M68K_ADD16(g_m68k.d[6], _postinc16(5));
    /* TODO $0A0E56: dc.w $4100  [41 00] */
    g_m68k.a[7] += (int16_t)(uint16_t)(_postinc16(4));
    /* TODO $0A0E5A: dc.w $4100  [41 00] */
    g_m68k.a[7] += (int16_t)(uint16_t)(_predec16(6));
    /* TODO $0A0E5E: dc.w $4100  [41 00] */
    M68K_ADD32(g_m68k.d[6], g_m68k.a[5]);
    /* TODO $0A0E62: dc.w $4100  [41 00] */
    M68K_ADD32(g_m68k.d[6], _postinc32(5));
    /* TODO $0A0E66: dc.w $4100  [41 00] */
    M68K_ADD32(g_m68k.d[6], bus_read32(g_m68k.a[5] + 0x4100));
    /* WARNING: function did not end with RTS */
}

/* $0A11CC-$0A1208  (24 instructions, 60 bytes) */
void jt_0A11CC(void) {
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x10); bus_write8(_ea, _tmp); }
    M68K_ADD8(g_m68k.d[7], _predec8(6));
    /* TODO $0A11D2: dc.w $4100  [41 00] */
    M68K_ADD16(g_m68k.d[6], g_m68k.d[7]);
    /* TODO $0A11D6: dc.w $4100  [41 00] */
    M68K_ADD16(g_m68k.d[6], bus_read16(g_m68k.a[7]));
    /* TODO $0A11DA: dc.w $4100  [41 00] */
    M68K_ADD16(g_m68k.d[6], _predec16(7));
    /* TODO $0A11DE: dc.w $4100  [41 00] */
    M68K_ADD16(g_m68k.d[6], bus_read16(g_m68k.a[7] + 0 + (int16_t)(uint16_t)g_m68k.d[4]));
    M68K_ADD32(g_m68k.d[6], g_m68k.d[7]);
    /* TODO $0A11E6: dc.w $4100  [41 00] */
    M68K_ADD32(g_m68k.d[6], bus_read32(g_m68k.a[7]));
    /* TODO $0A11EA: dc.w $4100  [41 00] */
    M68K_ADD32(g_m68k.d[6], _predec32(7));
    /* TODO $0A11EE: dc.w $4100  [41 00] */
    M68K_ADD32(g_m68k.d[6], bus_read32(g_m68k.a[7] + 0 + (int16_t)(uint16_t)g_m68k.d[4]));
    { uint32_t _ea = g_m68k.a[2]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[7]); bus_write16(_ea, _tmp); }
    /* TODO $0A11F6: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[7]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[7]); bus_write16(_ea, _tmp); }
    /* TODO $0A11FA: dc.w $4100  [41 00] */
    { uint32_t _ea = (g_m68k.a[3] + 0x4100); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[7]); bus_write16(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[4]); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[7]); bus_write16(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.d[4]); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[7]); bus_write16(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0A16D0-$0A1734  (42 instructions, 100 bytes) */
void jt_0A16D0(void) {
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x10); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[7]); bus_write32(_ea, _tmp); }
    /* TODO $0A16D6: dc.w $4100  [41 00] */
    M68K_ADD16(g_m68k.d[6], g_m68k.d[7]);
    /* TODO $0A16DA: dc.w $4100  [41 00] */
    M68K_ADD16(g_m68k.d[6], bus_read16(g_m68k.a[7]));
    /* TODO $0A16DE: dc.w $4100  [41 00] */
    M68K_ADD16(g_m68k.d[6], _predec16(7));
    /* TODO $0A16E2: dc.w $4100  [41 00] */
    M68K_ADD16(g_m68k.d[6], bus_read16(g_m68k.a[7] + 0 + (int16_t)(uint16_t)g_m68k.d[4]));
    M68K_ADD32(g_m68k.d[6], g_m68k.d[7]);
    /* TODO $0A16EA: dc.w $4100  [41 00] */
    M68K_ADD32(g_m68k.d[6], bus_read32(g_m68k.a[7]));
    /* TODO $0A16EE: dc.w $4100  [41 00] */
    M68K_ADD32(g_m68k.d[6], _predec32(7));
    /* TODO $0A16F2: dc.w $4100  [41 00] */
    M68K_ADD32(g_m68k.d[6], bus_read32(g_m68k.a[7] + 0 + (int16_t)(uint16_t)g_m68k.d[4]));
    g_m68k.a[6] += (int16_t)(uint16_t)(g_m68k.d[7]);
    /* TODO $0A16FA: dc.w $4100  [41 00] */
    g_m68k.a[6] += g_m68k.a[4];
    /* TODO $0A16FE: dc.w $4100  [41 00] */
    g_m68k.a[6] += _postinc32(0);
    /* TODO $0A1702: dc.w $4100  [41 00] */
    g_m68k.a[6] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[7] + 0 + (int16_t)(uint16_t)g_m68k.d[4]));
    M68K_ADDX8(g_m68k.d[6], g_m68k.d[5]);
    /* TODO $0A170A: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    /* TODO $0A170E: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[6]); bus_write8(_ea, _tmp); }
    /* TODO $0A1712: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[4]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[7]); bus_write32(_ea, _tmp); }
    /* TODO $0A1716: dc.w $4100  [41 00] */
    M68K_ADD8(g_m68k.d[7], bus_read8(g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.d[4]));
    M68K_ADD16(g_m68k.d[6], _postinc16(0));
    /* TODO $0A171E: dc.w $4100  [41 00] */
    M68K_ADD16(g_m68k.d[6], bus_read16(g_m68k.a[0] + 0x4100));
    M68K_ADD16(g_m68k.d[6], bus_read16(0x004100));
    M68K_ADD32(g_m68k.d[6], g_m68k.a[0]);
    /* TODO $0A172A: dc.w $4100  [41 00] */
    M68K_ADD32(g_m68k.d[6], _postinc32(0));
    /* TODO $0A172E: dc.w $4100  [41 00] */
    { uint32_t _ea = (g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[4]); uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[6]); bus_write32(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0A18B0-$0A18B4  (1 instructions, 4 bytes) */
void jt_0A18B0(void) {
    { uint32_t _ea = (g_m68k.a[6] + 0 + (int16_t)(uint16_t)g_m68k.d[4]); uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[7]); bus_write32(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0A1BD4-$0A1C20  (29 instructions, 76 bytes) */
void jt_0A1BD4(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x8); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_ADD8(g_m68k.d[5], g_m68k.d[6]);
    M68K_TST8(g_m68k.d[0]);
    M68K_ADD8(g_m68k.d[5], bus_read8(g_m68k.a[6]));
    M68K_TST8(g_m68k.d[0]);
    M68K_ADD8(g_m68k.d[5], _predec8(6));
    M68K_TST8(g_m68k.d[0]);
    M68K_ADD8(g_m68k.d[5], bus_read8(g_m68k.a[6] + 0 + (int32_t)g_m68k.d[4] * 2));
    M68K_ADD16(g_m68k.d[5], g_m68k.d[6]);
    M68K_TST8(g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[5], bus_read16(g_m68k.a[5]));
    M68K_TST8(g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_ADD8(g_m68k.d[5], g_m68k.d[7]);
    M68K_TST8(g_m68k.d[0]);
    M68K_ADD8(g_m68k.d[5], bus_read8(g_m68k.a[7]));
    M68K_TST8(g_m68k.d[0]);
    M68K_ADD8(g_m68k.d[5], _predec8(7));
    M68K_TST8(g_m68k.d[0]);
    M68K_ADD8(g_m68k.d[5], bus_read8(g_m68k.a[7] + 0 + (int32_t)g_m68k.d[4] * 2));
    M68K_ADD16(g_m68k.d[5], g_m68k.d[7]);
    M68K_TST8(g_m68k.d[0]);
    M68K_ADD16(g_m68k.d[5], bus_read16(g_m68k.a[6]));
    M68K_TST8(g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0A1DD8-$0A1E08  (19 instructions, 48 bytes) */
void jt_0A1DD8(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x8); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_ADD32(g_m68k.d[5], g_m68k.a[2]);
    M68K_NEG8(g_m68k.d[0]);
    M68K_ADD32(g_m68k.d[5], bus_read32(g_m68k.a[4]));
    M68K_NEG8(g_m68k.d[0]);
    M68K_ADD32(g_m68k.d[5], bus_read32(g_m68k.a[4]));
    M68K_NEG8(g_m68k.d[0]);
    M68K_ADD32(g_m68k.d[5], bus_read32(g_m68k.a[4]));
    M68K_NEG8(g_m68k.d[0]);
    M68K_ADD32(g_m68k.d[5], bus_read32(g_m68k.a[4]));
    M68K_NEG8(g_m68k.d[0]);
    M68K_ADD32(g_m68k.d[5], g_m68k.a[2]);
    M68K_NEG8(g_m68k.d[2]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_ADD32(g_m68k.d[5], g_m68k.a[3]);
    M68K_NEG8(g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0A1FDC-$0A2068  (57 instructions, 140 bytes) */
void jt_0A1FDC(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x8); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    g_m68k.a[5] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[4]));
    /* TODO $0A1FEA: dc.w $4700  [47 00] */
    g_m68k.a[5] += (int16_t)(uint16_t)(_postinc16(6));
    /* TODO $0A1FEE: dc.w $4700  [47 00] */
    g_m68k.a[5] += (int16_t)(uint16_t)(_postinc16(6));
    /* TODO $0A1FF2: dc.w $4700  [47 00] */
    g_m68k.a[5] += (int16_t)(uint16_t)(_postinc16(6));
    /* TODO $0A1FF6: dc.w $4700  [47 00] */
    g_m68k.a[5] += (int16_t)(uint16_t)(_postinc16(6));
    /* TODO $0A1FFA: dc.w $4700  [47 00] */
    g_m68k.a[5] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[4]));
    /* TODO $0A1FFE: dc.w $4702  [47 02] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    g_m68k.a[5] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[5]));
    /* TODO $0A200A: dc.w $4700  [47 00] */
    g_m68k.a[5] += (int16_t)(uint16_t)(_postinc16(7));
    /* TODO $0A200E: dc.w $4700  [47 00] */
    g_m68k.a[5] += (int16_t)(uint16_t)(_postinc16(7));
    /* TODO $0A2012: dc.w $4700  [47 00] */
    g_m68k.a[5] += (int16_t)(uint16_t)(_postinc16(7));
    /* TODO $0A2016: dc.w $4700  [47 00] */
    M68K_ADDX8(g_m68k.d[5], g_m68k.d[4]);
    /* TODO $0A201A: dc.w $4700  [47 00] */
    g_m68k.a[5] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[5]));
    /* TODO $0A201E: dc.w $4703  [47 03] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    g_m68k.a[5] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[5]));
    /* TODO $0A202A: dc.w $4700  [47 00] */
    g_m68k.a[5] += (int16_t)(uint16_t)(_predec16(0));
    /* TODO $0A202E: dc.w $4700  [47 00] */
    g_m68k.a[5] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[4] + 0x4700));
    g_m68k.a[5] += (int16_t)(uint16_t)(bus_read16(0x004700));
    M68K_ADDX8(g_m68k.d[5], g_m68k.d[5]);
    /* TODO $0A203A: dc.w $4700  [47 00] */
    g_m68k.a[5] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[5]));
    /* TODO $0A203E: dc.w $4703  [47 03] */
    M68K_OR8(g_m68k.d[0], 0x0);
    g_m68k.a[5] += (int16_t)(uint16_t)(g_m68k.a[4]);
    /* TODO $0A2046: dc.w $4700  [47 00] */
    g_m68k.a[5] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[6]));
    /* TODO $0A204A: dc.w $4700  [47 00] */
    g_m68k.a[5] += (int16_t)(uint16_t)(_predec16(1));
    /* TODO $0A204E: dc.w $4700  [47 00] */
    g_m68k.a[5] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[5] + 0x4700));
    g_m68k.a[5] += (int16_t)(uint16_t)(bus_read16(0x4700DB06));
    /* TODO $0A205A: dc.w $4700  [47 00] */
    g_m68k.a[5] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[5]));
    /* TODO $0A205E: dc.w $4703  [47 03] */
    g_m68k.a[5] += (int16_t)(uint16_t)(g_m68k.a[0]);
    /* TODO $0A2062: dc.w $4700  [47 00] */
    g_m68k.a[5] += (int16_t)(uint16_t)(g_m68k.a[5]);
    /* TODO $0A2066: dc.w $4700  [47 00] */
    /* WARNING: function did not end with RTS */
}

/* $0A2068-$0A20D4  (47 instructions, 108 bytes) */
void jt_0A2068(void) {
    g_m68k.a[5] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[7]));
    /* TODO $0A206A: dc.w $4700  [47 00] */
    g_m68k.a[5] += (int16_t)(uint16_t)(_predec16(2));
    /* TODO $0A206E: dc.w $4700  [47 00] */
    g_m68k.a[5] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[6] + 0x4700));
    g_m68k.a[5] += (int16_t)(uint16_t)(bus_read16(0xa6776));
    M68K_ADDX8(g_m68k.d[5], g_m68k.d[7]);
    /* TODO $0A207A: dc.w $4700  [47 00] */
    g_m68k.a[5] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[5]));
    /* TODO $0A207E: dc.w $4703  [47 03] */
    g_m68k.a[5] += (int16_t)(uint16_t)(g_m68k.a[1]);
    /* TODO $0A2082: dc.w $4700  [47 00] */
    g_m68k.a[5] += (int16_t)(uint16_t)(g_m68k.a[6]);
    /* TODO $0A2086: dc.w $4700  [47 00] */
    g_m68k.a[5] += (int16_t)(uint16_t)(_postinc16(0));
    /* TODO $0A208A: dc.w $4700  [47 00] */
    g_m68k.a[5] += (int16_t)(uint16_t)(_predec16(3));
    /* TODO $0A208E: dc.w $4700  [47 00] */
    g_m68k.a[5] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[7] + 0x4700));
    g_m68k.a[5] += (int16_t)(uint16_t)(/* UNHANDLED_READ: (a16, d4.w * 8) */ 0);
    { uint32_t _ea = g_m68k.a[5]; uint8_t _tmp = bus_read8(_ea); M68K_ADDX8(_tmp, _predec8(0)); bus_write8(_ea, _tmp); }
    /* TODO $0A209A: dc.w $4700  [47 00] */
    g_m68k.a[5] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[5]));
    /* TODO $0A209E: dc.w $4703  [47 03] */
    g_m68k.a[5] += (int16_t)(uint16_t)(g_m68k.a[2]);
    /* TODO $0A20A2: dc.w $4700  [47 00] */
    g_m68k.a[5] += (int16_t)(uint16_t)(g_m68k.a[7]);
    /* TODO $0A20A6: dc.w $4700  [47 00] */
    g_m68k.a[5] += (int16_t)(uint16_t)(_postinc16(1));
    /* TODO $0A20AA: dc.w $4700  [47 00] */
    g_m68k.a[5] += (int16_t)(uint16_t)(_predec16(4));
    /* TODO $0A20AE: dc.w $4700  [47 00] */
    g_m68k.a[5] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 8));
    g_m68k.a[5] += (int16_t)(uint16_t)(0x4700);
    { uint32_t _ea = g_m68k.a[5]; uint8_t _tmp = bus_read8(_ea); M68K_ADDX8(_tmp, _predec8(1)); bus_write8(_ea, _tmp); }
    /* TODO $0A20BA: dc.w $4700  [47 00] */
    g_m68k.a[5] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[5]));
    /* TODO $0A20BE: dc.w $4703  [47 03] */
    g_m68k.a[5] += (int16_t)(uint16_t)(g_m68k.a[3]);
    /* TODO $0A20C2: dc.w $4700  [47 00] */
    g_m68k.a[5] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[0]));
    /* TODO $0A20C6: dc.w $4700  [47 00] */
    g_m68k.a[5] += (int16_t)(uint16_t)(_postinc16(2));
    /* TODO $0A20CA: dc.w $4700  [47 00] */
    g_m68k.a[5] += (int16_t)(uint16_t)(_predec16(5));
    /* TODO $0A20CE: dc.w $4700  [47 00] */
    g_m68k.a[5] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 8));
    /* WARNING: function did not end with RTS */
}

/* $0A21E0-$0A22F0  (105 instructions, 272 bytes) */
void jt_0A21E0(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x8); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    /* TODO $0A21EE: dc.w $4500  [45 00] */
    { uint32_t _ea = (g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 4); uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    M68K_ADDX16(g_m68k.d[5], g_m68k.d[2]);
    /* TODO $0A21F6: dc.w $4500  [45 00] */
    { uint32_t _ea = g_m68k.a[2]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[5]); bus_write16(_ea, _tmp); }
    /* TODO $0A21FA: dc.w $4500  [45 00] */
    { uint32_t _ea = g_m68k.a[2]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[5]); bus_write16(_ea, _tmp); }
    /* TODO $0A21FE: dc.w $4500  [45 00] */
    { uint32_t _ea = (g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 4); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[5]); bus_write16(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    /* TODO $0A220E: dc.w $4500  [45 00] */
    { uint32_t _ea = (g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 4); uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    M68K_ADDX16(g_m68k.d[5], g_m68k.d[3]);
    /* TODO $0A2216: dc.w $4500  [45 00] */
    { uint32_t _ea = g_m68k.a[3]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[5]); bus_write16(_ea, _tmp); }
    /* TODO $0A221A: dc.w $4500  [45 00] */
    { uint32_t _ea = g_m68k.a[3]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[5]); bus_write16(_ea, _tmp); }
    /* TODO $0A221E: dc.w $4500  [45 00] */
    { uint32_t _ea = (g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 4); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[5]); bus_write16(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    /* TODO $0A222E: dc.w $4500  [45 00] */
    { uint32_t _ea = (g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 4); uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    M68K_ADDX16(g_m68k.d[5], g_m68k.d[4]);
    /* TODO $0A2236: dc.w $4500  [45 00] */
    { uint32_t _ea = g_m68k.a[4]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[5]); bus_write16(_ea, _tmp); }
    /* TODO $0A223A: dc.w $4500  [45 00] */
    { uint32_t _ea = g_m68k.a[4]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[5]); bus_write16(_ea, _tmp); }
    /* TODO $0A223E: dc.w $4500  [45 00] */
    { uint32_t _ea = (g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 4); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[5]); bus_write16(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    /* TODO $0A224A: dc.w $4500  [45 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    /* TODO $0A224E: dc.w $4500  [45 00] */
    { uint32_t _ea = (g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 4); uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    M68K_ADDX16(g_m68k.d[5], g_m68k.d[5]);
    /* TODO $0A2256: dc.w $4500  [45 00] */
    { uint32_t _ea = g_m68k.a[5]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[5]); bus_write16(_ea, _tmp); }
    /* TODO $0A225A: dc.w $4500  [45 00] */
    { uint32_t _ea = g_m68k.a[5]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[5]); bus_write16(_ea, _tmp); }
    /* TODO $0A225E: dc.w $4500  [45 00] */
    { uint32_t _ea = (g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 4); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[5]); bus_write16(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    /* TODO $0A2266: dc.w $4500  [45 00] */
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    /* TODO $0A226A: dc.w $4500  [45 00] */
    { uint32_t _ea = g_m68k.a[6]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    /* TODO $0A226E: dc.w $4500  [45 00] */
    { uint32_t _ea = (g_m68k.a[6] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 4); uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    M68K_ADDX16(g_m68k.d[5], g_m68k.d[6]);
    /* TODO $0A2276: dc.w $4500  [45 00] */
    { uint32_t _ea = g_m68k.a[6]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[5]); bus_write16(_ea, _tmp); }
    /* TODO $0A227A: dc.w $4500  [45 00] */
    { uint32_t _ea = g_m68k.a[6]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[5]); bus_write16(_ea, _tmp); }
    /* TODO $0A227E: dc.w $4500  [45 00] */
    { uint32_t _ea = (g_m68k.a[6] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 4); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[5]); bus_write16(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    /* TODO $0A2286: dc.w $4500  [45 00] */
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    /* TODO $0A228A: dc.w $4500  [45 00] */
    { uint32_t _ea = g_m68k.a[7]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    /* TODO $0A228E: dc.w $4500  [45 00] */
    { uint32_t _ea = (g_m68k.a[7] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 4); uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    M68K_ADDX16(g_m68k.d[5], g_m68k.d[7]);
    /* TODO $0A2296: dc.w $4500  [45 00] */
    { uint32_t _ea = g_m68k.a[7]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[5]); bus_write16(_ea, _tmp); }
    /* TODO $0A229A: dc.w $4500  [45 00] */
    { uint32_t _ea = g_m68k.a[7]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[5]); bus_write16(_ea, _tmp); }
    /* TODO $0A229E: dc.w $4500  [45 00] */
    { uint32_t _ea = (g_m68k.a[7] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 4); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[5]); bus_write16(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    /* TODO $0A22A6: dc.w $4500  [45 00] */
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    /* TODO $0A22AA: dc.w $4500  [45 00] */
    { uint32_t _ea = (g_m68k.a[0] + 0x4500); uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x004500; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[5]; uint16_t _tmp = bus_read16(_ea); M68K_ADDX16(_tmp, _predec16(0)); bus_write16(_ea, _tmp); }
    /* TODO $0A22B6: dc.w $4500  [45 00] */
    { uint32_t _ea = g_m68k.a[0]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[5]); bus_write16(_ea, _tmp); }
    /* TODO $0A22BA: dc.w $4500  [45 00] */
    { uint32_t _ea = (g_m68k.a[0] + 0x4500); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[5]); bus_write16(_ea, _tmp); }
    { uint32_t _ea = 0x004500; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[5]); bus_write16(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[3]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    /* TODO $0A22C6: dc.w $4500  [45 00] */
    { uint32_t _ea = g_m68k.a[4]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    /* TODO $0A22CA: dc.w $4500  [45 00] */
    { uint32_t _ea = (g_m68k.a[1] + 0x4500); uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x4500DB49; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    /* TODO $0A22D6: dc.w $4500  [45 00] */
    { uint32_t _ea = g_m68k.a[1]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[5]); bus_write16(_ea, _tmp); }
    /* TODO $0A22DA: dc.w $4500  [45 00] */
    { uint32_t _ea = (g_m68k.a[1] + 0x4500); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[5]); bus_write16(_ea, _tmp); }
    { uint32_t _ea = 0x4500DB14; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[5]); bus_write16(_ea, _tmp); }
    /* TODO $0A22E6: dc.w $4500  [45 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    /* TODO $0A22EA: dc.w $4500  [45 00] */
    { uint32_t _ea = (g_m68k.a[2] + 0x4500); uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[5]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0A23E4-$0A2470  (58 instructions, 140 bytes) */
void jt_0A23E4(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x8); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[5]; uint32_t _tmp = bus_read32(_ea); M68K_ADDX32(_tmp, _predec32(0)); bus_write32(_ea, _tmp); }
    M68K_NOT8(g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[5]; uint32_t _tmp = bus_read32(_ea); M68K_ADDX32(_tmp, _predec32(3)); bus_write32(_ea, _tmp); }
    M68K_NOT8(g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[5]; uint32_t _tmp = bus_read32(_ea); M68K_ADDX32(_tmp, _predec32(3)); bus_write32(_ea, _tmp); }
    M68K_NOT8(g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[3]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    M68K_NOT8(g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[3]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    M68K_NOT8(g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 8); uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[5]; uint32_t _tmp = bus_read32(_ea); M68K_ADDX32(_tmp, _predec32(1)); bus_write32(_ea, _tmp); }
    M68K_NOT8(g_m68k.d[0]);
    M68K_ADD32(g_m68k.d[5], bus_read32(g_m68k.a[5]));
    M68K_NOT8(g_m68k.d[0]);
    M68K_ADD32(g_m68k.d[5], _predec32(1));
    M68K_NOT8(g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[4]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    M68K_NOT8(g_m68k.d[0]);
    g_m68k.a[5] += (int16_t)(uint16_t)(_postinc16(7));
    M68K_NOT8(g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 8); uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[5]; uint32_t _tmp = bus_read32(_ea); M68K_ADDX32(_tmp, _predec32(1)); bus_write32(_ea, _tmp); }
    M68K_NOT8(g_m68k.d[0]);
    M68K_ADD32(g_m68k.d[5], bus_read32(g_m68k.a[6]));
    M68K_NOT8(g_m68k.d[0]);
    M68K_ADD32(g_m68k.d[5], _predec32(2));
    M68K_NOT8(g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[5]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    M68K_NOT8(g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[4]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    M68K_NOT8(g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 8); uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_ADDX32(g_m68k.d[5], g_m68k.d[4]);
    M68K_NOT8(g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[5]; uint32_t _tmp = bus_read32(_ea); M68K_ADDX32(_tmp, _predec32(2)); bus_write32(_ea, _tmp); }
    M68K_NOT8(g_m68k.d[0]);
    M68K_ADD32(g_m68k.d[5], bus_read32(g_m68k.a[7]));
    M68K_NOT8(g_m68k.d[0]);
    M68K_ADD32(g_m68k.d[5], _predec32(3));
    M68K_NOT8(g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[6]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    M68K_NOT8(g_m68k.d[0]);
    { uint32_t _ea = g_m68k.a[5]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    M68K_NOT8(g_m68k.d[0]);
    { uint32_t _ea = (g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 8); uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[5]); bus_write32(_ea, _tmp); }
    M68K_ADDX32(g_m68k.d[5], g_m68k.d[0]);
    M68K_NOT8(g_m68k.d[0]);
    M68K_ADDX32(g_m68k.d[5], g_m68k.d[5]);
    M68K_NOT8(g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0A25E8-$0A2618  (19 instructions, 48 bytes) */
void jt_0A25E8(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x8); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    g_m68k.a[5] += g_m68k.a[0];
    /* TODO $0A25F6: nbcd.b d0  [48 00] */
    g_m68k.a[5] += bus_read32(g_m68k.a[1]);
    /* TODO $0A25FA: nbcd.b d0  [48 00] */
    g_m68k.a[5] += bus_read32(g_m68k.a[4]);
    /* TODO $0A25FE: nbcd.b d0  [48 00] */
    g_m68k.a[5] += bus_read32(g_m68k.a[1]);
    /* TODO $0A2602: nbcd.b d0  [48 00] */
    g_m68k.a[5] += bus_read32(g_m68k.a[1]);
    /* TODO $0A2606: nbcd.b d0  [48 00] */
    g_m68k.a[5] += g_m68k.a[0];
    /* TODO $0A260A: nbcd.b d2  [48 02] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    g_m68k.a[5] += g_m68k.a[1];
    /* TODO $0A2616: nbcd.b d0  [48 00] */
    /* WARNING: function did not end with RTS */
}

/* $0A27EC-$0A2820  (18 instructions, 52 bytes) */
void jt_0A27EC(void) {
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_OR8(_tmp, 0x8); bus_write8(_ea, _tmp); }
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    g_m68k.a[5] += bus_read32(g_m68k.a[6] + 0 + (int32_t)g_m68k.d[4]);
    M68K_ADD8(g_m68k.d[6], g_m68k.d[0]);
    /* TODO $0A27FE: dc.w $4900  [49 00] */
    M68K_ADD8(g_m68k.d[6], g_m68k.d[0]);
    /* TODO $0A2802: dc.w $4900  [49 00] */
    M68K_ADD8(g_m68k.d[6], g_m68k.d[0]);
    /* TODO $0A2806: dc.w $4900  [49 00] */
    M68K_ADD8(g_m68k.d[6], g_m68k.d[0]);
    /* TODO $0A280A: dc.w $4900  [49 00] */
    g_m68k.a[5] += /* UNHANDLED_READ: ([a6, d4.l]) */ 0;
    /* TODO $0A2812: dc.w $4900  [49 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    g_m68k.a[5] += bus_read32(g_m68k.a[7] + 0 + (int32_t)g_m68k.d[4]);
    M68K_ADD8(g_m68k.d[6], g_m68k.d[1]);
    /* TODO $0A281E: dc.w $4900  [49 00] */
    /* WARNING: function did not end with RTS */
}

/* $0A2868-$0A28F8  (41 instructions, 144 bytes) */
void jt_0A2868(void) {
    M68K_ADD8(g_m68k.d[6], bus_read8(g_m68k.a[4] + 0x4900));
    g_m68k.a[5] += /* UNHANDLED_READ: ([a7, d4.l], $dbe94900) */ 0;
    g_m68k.a[5] += bus_read32(g_m68k.a[7] + 0x4900);
    g_m68k.a[5] += bus_read32(0x4900DC04);
    /* TODO $0A287E: dc.w $4900  [49 00] */
    M68K_ADD8(g_m68k.d[6], bus_read8(g_m68k.a[2]));
    /* TODO $0A2882: dc.w $4900  [49 00] */
    M68K_ADD8(g_m68k.d[6], _predec8(0));
    /* TODO $0A2886: dc.w $4900  [49 00] */
    M68K_ADD8(g_m68k.d[6], bus_read8(g_m68k.a[5] + 0x4900));
    g_m68k.a[5] += /* UNHANDLED_READ: ([a7, d4.l], $dbea4900) */ 0;
    g_m68k.a[5] += bus_read32(g_m68k.a[0] + 0 + (int32_t)g_m68k.d[4]);
    g_m68k.a[5] += bus_read32(0xa719a);
    M68K_ADD8(g_m68k.d[6], g_m68k.d[5]);
    /* TODO $0A289E: dc.w $4900  [49 00] */
    M68K_ADD8(g_m68k.d[6], bus_read8(g_m68k.a[3]));
    /* TODO $0A28A2: dc.w $4900  [49 00] */
    M68K_ADD8(g_m68k.d[6], _predec8(1));
    /* TODO $0A28A6: dc.w $4900  [49 00] */
    M68K_ADD8(g_m68k.d[6], bus_read8(g_m68k.a[6] + 0x4900));
    g_m68k.a[5] += /* UNHANDLED_READ: ([a7, d4.l], $dbeb4900) */ 0;
    g_m68k.a[5] += bus_read32(g_m68k.a[1] + 0 + (int32_t)g_m68k.d[4]);
    g_m68k.a[5] += /* UNHANDLED_READ: (a16, d4.l) */ 0;
    M68K_ADD8(g_m68k.d[6], g_m68k.d[6]);
    /* TODO $0A28BE: dc.w $4900  [49 00] */
    M68K_ADD8(g_m68k.d[6], bus_read8(g_m68k.a[4]));
    /* TODO $0A28C2: dc.w $4900  [49 00] */
    M68K_ADD8(g_m68k.d[6], _predec8(2));
    /* TODO $0A28C6: dc.w $4900  [49 00] */
    M68K_ADD8(g_m68k.d[6], bus_read8(g_m68k.a[7] + 0x4900));
    g_m68k.a[5] += /* UNHANDLED_READ: ([a7, d4.l], $dbec4900) */ 0;
    g_m68k.a[5] += bus_read32(g_m68k.a[2] + 0 + (int32_t)g_m68k.d[4]);
    g_m68k.a[5] += 0x4900dc07;
    /* TODO $0A28DE: dc.w $4900  [49 00] */
    M68K_ADD8(g_m68k.d[6], bus_read8(g_m68k.a[5]));
    /* TODO $0A28E2: dc.w $4900  [49 00] */
    M68K_ADD8(g_m68k.d[6], _predec8(3));
    /* TODO $0A28E6: dc.w $4900  [49 00] */
    M68K_ADD8(g_m68k.d[6], bus_read8(g_m68k.a[0] + 0 + (int32_t)g_m68k.d[4]));
    g_m68k.a[5] += /* UNHANDLED_READ: ([a7, d4.l], $dbed4900) */ 0;
    g_m68k.a[5] += bus_read32(g_m68k.a[3] + 0 + (int32_t)g_m68k.d[4]);
    /* WARNING: function did not end with RTS */
}

/* $0A2A1C-$0A2A2C  (7 instructions, 16 bytes) */
void jt_0A2A1C(void) {
    M68K_OR8(g_m68k.d[3], 0x1);
    M68K_ADD16(g_m68k.d[5], _predec16(3));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_ADD16(g_m68k.d[5], _predec16(4));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_ADD16(g_m68k.d[5], _predec16(5));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $0A2A2C-$0A2A3C  (4 instructions, 16 bytes) */
void jt_0A2A2C(void) {
    M68K_OR8(g_m68k.d[3], 0x1);
    M68K_ADD16(g_m68k.d[5], bus_read16(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 2));
    M68K_ADD16(g_m68k.d[5], bus_read16(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 2));
    M68K_ADD16(g_m68k.d[5], bus_read16(g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 2));
    /* WARNING: function did not end with RTS */
}

/* $0A2A3C-$0A2A44  (2 instructions, 8 bytes) */
void jt_0A2A3C(void) {
    M68K_OR8(g_m68k.d[3], 0x1);
    M68K_ADD16(g_m68k.d[5], bus_read16(g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 2));
    /* WARNING: function did not end with RTS */
}

/* $0A2A4C-$0A2A54  (2 instructions, 8 bytes) */
void jt_0A2A4C(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_ADD16(g_m68k.d[5], bus_read16(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 2));
    /* WARNING: function did not end with RTS */
}

/* $0A2A54-$0A2A5C  (3 instructions, 8 bytes) */
void jt_0A2A54(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_ADD16(g_m68k.d[5], _predec16(3));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $0A2A5C-$0A2A64  (2 instructions, 8 bytes) */
void jt_0A2A5C(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_ADD16(g_m68k.d[5], bus_read16(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 2));
    /* WARNING: function did not end with RTS */
}

/* $0A2A64-$0A2A6C  (2 instructions, 8 bytes) */
void jt_0A2A64(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_ADD16(g_m68k.d[5], bus_read16(g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 2));
    /* WARNING: function did not end with RTS */
}

/* $0A2A6C-$0A2A74  (2 instructions, 8 bytes) */
void jt_0A2A6C(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_ADD16(g_m68k.d[5], bus_read16(g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 2));
    /* WARNING: function did not end with RTS */
}

/* $0A2A74-$0A2A7C  (2 instructions, 8 bytes) */
void jt_0A2A74(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_ADD16(g_m68k.d[5], bus_read16(g_m68k.a[6] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 2));
    /* WARNING: function did not end with RTS */
}

/* $0A2A7C-$0A2A84  (2 instructions, 8 bytes) */
void jt_0A2A7C(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_ADD16(g_m68k.d[5], bus_read16(g_m68k.a[7] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 2));
    /* WARNING: function did not end with RTS */
}

/* $0A2A84-$0A2A8C  (2 instructions, 8 bytes) */
void jt_0A2A84(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_ADD16(g_m68k.d[5], bus_read16(0x004200));
    /* WARNING: function did not end with RTS */
}

/* $0A2A8C-$0A2A96  (2 instructions, 10 bytes) */
void jt_0A2A8C(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_ADD16(g_m68k.d[5], bus_read16(0x42000001));
    /* WARNING: function did not end with RTS */
}

/* $0A2A94-$0A2A9C  (4 instructions, 8 bytes) */
void jt_0A2A94(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_OR8(g_m68k.d[1], 0x7a);
    M68K_ADD16(g_m68k.d[5], bus_read16(0xa6c9a));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $0A2A9C-$0A2AA4  (2 instructions, 8 bytes) */
void jt_0A2A9C(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_ADD16(g_m68k.d[5], bus_read16(0xa2aa2 + (int16_t)(uint16_t)g_m68k.d[4] * 2));
    /* WARNING: function did not end with RTS */
}

/* $0A2AA4-$0A2AAC  (2 instructions, 8 bytes) */
void jt_0A2AA4(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_ADD16(g_m68k.d[5], 0x4200);
    /* WARNING: function did not end with RTS */
}

/* $0A2AAC-$0A2AB4  (2 instructions, 8 bytes) */
void jt_0A2AAC(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0A2B8A-$0A2BB6  (21 instructions, 44 bytes) */
void jt_0A2B8A(void) {
    M68K_OR8(g_m68k.d[5], 0x2);
    M68K_CMP16(g_m68k.d[6], g_m68k.d[6]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP16(g_m68k.d[6], bus_read16(g_m68k.a[0]));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP16(g_m68k.d[6], g_m68k.d[7]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP16(g_m68k.d[6], bus_read16(g_m68k.a[1]));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP16(g_m68k.d[6], g_m68k.a[0]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP16(g_m68k.d[6], bus_read16(g_m68k.a[2]));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP16(g_m68k.d[6], g_m68k.a[1]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP16(g_m68k.d[6], bus_read16(g_m68k.a[3]));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP16(g_m68k.d[6], g_m68k.a[2]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP16(g_m68k.d[6], bus_read16(g_m68k.a[4]));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $0A2BB6-$0A2BE2  (21 instructions, 44 bytes) */
void jt_0A2BB6(void) {
    M68K_OR8(g_m68k.d[5], 0x2);
    M68K_CMP16(g_m68k.d[6], g_m68k.a[3]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP16(g_m68k.d[6], bus_read16(g_m68k.a[5]));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP16(g_m68k.d[6], g_m68k.a[4]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP16(g_m68k.d[6], bus_read16(g_m68k.a[6]));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP16(g_m68k.d[6], g_m68k.a[5]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP16(g_m68k.d[6], bus_read16(g_m68k.a[7]));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP16(g_m68k.d[6], g_m68k.a[6]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP16(g_m68k.d[6], _postinc16(0));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP16(g_m68k.d[6], g_m68k.a[7]);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP16(g_m68k.d[6], _postinc16(1));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $0A2C26-$0A2C3A  (9 instructions, 20 bytes) */
void jt_0A2C26(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_CMP16(g_m68k.d[6], _postinc16(2));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP16(g_m68k.d[6], _predec16(6));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP16(g_m68k.d[6], _postinc16(3));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP16(g_m68k.d[6], _predec16(7));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $0A2C3A-$0A2C4E  (7 instructions, 20 bytes) */
void jt_0A2C3A(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_CMP16(g_m68k.d[6], _postinc16(4));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP16(g_m68k.d[6], bus_read16(g_m68k.a[0] + 0x4200));
    M68K_CMP16(g_m68k.d[6], _postinc16(5));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP16(g_m68k.d[6], bus_read16(g_m68k.a[1] + 0x4200));
    /* WARNING: function did not end with RTS */
}

/* $0A2C4E-$0A2C62  (7 instructions, 20 bytes) */
void jt_0A2C4E(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_CMP16(g_m68k.d[6], _postinc16(6));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP16(g_m68k.d[6], bus_read16(g_m68k.a[2] + 0x4200));
    M68K_CMP16(g_m68k.d[6], _postinc16(7));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP16(g_m68k.d[6], bus_read16(g_m68k.a[3] + 0x4200));
    /* WARNING: function did not end with RTS */
}

/* $0A2C62-$0A2C76  (7 instructions, 20 bytes) */
void jt_0A2C62(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_CMP16(g_m68k.d[6], _predec16(0));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP16(g_m68k.d[6], bus_read16(g_m68k.a[4] + 0x4200));
    M68K_CMP16(g_m68k.d[6], _predec16(1));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP16(g_m68k.d[6], bus_read16(g_m68k.a[5] + 0x4200));
    /* WARNING: function did not end with RTS */
}

/* $0A2C76-$0A2C8A  (7 instructions, 20 bytes) */
void jt_0A2C76(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_CMP16(g_m68k.d[6], _predec16(2));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP16(g_m68k.d[6], bus_read16(g_m68k.a[6] + 0x4200));
    M68K_CMP16(g_m68k.d[6], _predec16(3));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP16(g_m68k.d[6], bus_read16(g_m68k.a[7] + 0x4200));
    /* WARNING: function did not end with RTS */
}

/* $0A2C8A-$0A2C9E  (7 instructions, 20 bytes) */
void jt_0A2C8A(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_CMP16(g_m68k.d[6], _predec16(4));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP16(g_m68k.d[6], bus_read16(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 2));
    M68K_CMP16(g_m68k.d[6], _predec16(5));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_CMP16(g_m68k.d[6], bus_read16(g_m68k.a[7] + 0x4200));
    /* WARNING: function did not end with RTS */
}

/* $0A2CCA-$0A2CD2  (3 instructions, 8 bytes) */
void jt_0A2CCA(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_CMP32(g_m68k.d[6], g_m68k.a[7]);
    /* TODO $0A2CD0: dc.w $4300  [43 00] */
    /* WARNING: function did not end with RTS */
}

/* $0A2CD2-$0A2CDA  (3 instructions, 8 bytes) */
void jt_0A2CD2(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_CMP32(g_m68k.d[6], bus_read32(g_m68k.a[0]));
    /* TODO $0A2CD8: dc.w $4300  [43 00] */
    /* WARNING: function did not end with RTS */
}

/* $0A2CDA-$0A2CE2  (3 instructions, 8 bytes) */
void jt_0A2CDA(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_CMP32(g_m68k.d[6], bus_read32(g_m68k.a[1]));
    /* TODO $0A2CE0: dc.w $4300  [43 00] */
    /* WARNING: function did not end with RTS */
}

/* $0A2CE2-$0A2CEA  (3 instructions, 8 bytes) */
void jt_0A2CE2(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_CMP32(g_m68k.d[6], bus_read32(g_m68k.a[2]));
    /* TODO $0A2CE8: dc.w $4300  [43 00] */
    /* WARNING: function did not end with RTS */
}

/* $0A2CEA-$0A2CF2  (3 instructions, 8 bytes) */
void jt_0A2CEA(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_CMP32(g_m68k.d[6], bus_read32(g_m68k.a[3]));
    /* TODO $0A2CF0: dc.w $4300  [43 00] */
    /* WARNING: function did not end with RTS */
}

/* $0A2CF2-$0A2CFA  (3 instructions, 8 bytes) */
void jt_0A2CF2(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_CMP32(g_m68k.d[6], bus_read32(g_m68k.a[4]));
    /* TODO $0A2CF8: dc.w $4300  [43 00] */
    /* WARNING: function did not end with RTS */
}

/* $0A2CFA-$0A2D02  (3 instructions, 8 bytes) */
void jt_0A2CFA(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_CMP32(g_m68k.d[6], bus_read32(g_m68k.a[5]));
    /* TODO $0A2D00: dc.w $4300  [43 00] */
    /* WARNING: function did not end with RTS */
}
