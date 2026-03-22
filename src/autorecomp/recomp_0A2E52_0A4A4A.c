/* Auto-generated recompiled code for Neo Drift Out */
/* Source range: $0A2E52 - $0A4A4A */
/* Functions: 50 */

#include <neogeorecomp/neogeorecomp.h>
#include "recomp_funcs.h"

/* $0A2E52-$0A2E56  (1 instructions, 4 bytes) */
void jt_0A2E52(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    /* WARNING: function did not end with RTS */
}

/* $0A2E66-$0A2E72  (5 instructions, 12 bytes) */
void jt_0A2E66(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_CMP16(g_m68k.d[6], _predec16(2));
    /* TODO $0A2E6C: dc.w $4300  [43 00] */
    M68K_CMP32(g_m68k.a[6], (uint32_t)(int32_t)(int16_t)(uint16_t)(g_m68k.d[3]));
    /* TODO $0A2E70: dc.w $4300  [43 00] */
    /* WARNING: function did not end with RTS */
}

/* $0A2E7A-$0A2F06  (47 instructions, 140 bytes) */
void jt_0A2E7A(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    g_m68k.a[0] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[5]));
    /* TODO $0A2EBC: dc.w $4100  [41 00] */
    g_m68k.a[0] += (int16_t)(uint16_t)(_predec16(1));
    /* TODO $0A2EC0: dc.w $4100  [41 00] */
    g_m68k.a[0] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[6] + 0x4100));
    /* TODO $0A2EC6: movep.l d7, $4100(a3)  [0F CB 41 00] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_ADDX8(_tmp, _predec8(3)); bus_write8(_ea, _tmp); }
    /* TODO $0A2ECC: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[2]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0A2ED0: dc.w $4100  [41 00] */
    { uint32_t _ea = (g_m68k.a[1] + 0x4100); uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    { uint32_t _ea = 0x004100; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    M68K_ADDX16(g_m68k.d[0], g_m68k.d[7]);
    /* TODO $0A2EDC: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[6]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[0]); bus_write16(_ea, _tmp); }
    /* TODO $0A2EE0: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[0]); bus_write16(_ea, _tmp); }
    /* TODO $0A2EE4: dc.w $4100  [41 00] */
    { uint32_t _ea = (g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.d[4]); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[0]); bus_write16(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A2EEC: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A2EF0: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A2EF4: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A2EF8: dc.w $4100  [41 00] */
    g_m68k.a[0] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[6]));
    /* TODO $0A2EFC: dc.w $4100  [41 00] */
    /* TODO $0A2EFE: movep.l d7, $4100(a3)  [0F CB 41 00] */
    g_m68k.a[0] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[7] + 0x4100));
    /* WARNING: function did not end with RTS */
}

/* $0A302E-$0A303C  (7 instructions, 14 bytes) */
void jt_0A302E(void) {
    { uint32_t _ea = g_m68k.a[2]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[0]); bus_write32(_ea, _tmp); }
    /* TODO $0A3030: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[0]); bus_write32(_ea, _tmp); }
    /* TODO $0A3034: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A3038: dc.w $4100  [41 00] */
    g_m68k.a[0] += (int16_t)(uint16_t)(_postinc16(2));
    /* WARNING: function did not end with RTS */
}

/* $0A303C-$0A3056  (11 instructions, 26 bytes) */
void jt_0A303C(void) {
    /* TODO $0A303C: dc.w $4100  [41 00] */
    g_m68k.a[0] += (int16_t)(uint16_t)(_predec16(6));
    /* TODO $0A3040: dc.w $4100  [41 00] */
    g_m68k.a[0] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.d[4]));
    M68K_ADDX8(g_m68k.d[0], g_m68k.d[2]);
    /* TODO $0A3048: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[1]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0A304C: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[0]; uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* TODO $0A3050: dc.w $4100  [41 00] */
    { uint32_t _ea = (g_m68k.a[7] + 0x4100); uint8_t _tmp = bus_read8(_ea); M68K_ADD8(_tmp, g_m68k.d[0]); bus_write8(_ea, _tmp); }
    /* WARNING: function did not end with RTS */
}

/* $0A327A-$0A33FE  (165 instructions, 388 bytes) */
void jt_0A327A(void) {
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A327C: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A3280: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A3284: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[2]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[0]); bus_write32(_ea, _tmp); }
    /* TODO $0A3288: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[3]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[0]); bus_write32(_ea, _tmp); }
    /* TODO $0A328C: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[4]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[0]); bus_write32(_ea, _tmp); }
    /* TODO $0A3290: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[0]); bus_write32(_ea, _tmp); }
    /* TODO $0A3294: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[7]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[0]); bus_write32(_ea, _tmp); }
    /* TODO $0A3298: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A329C: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A32A0: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A32A4: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A32A8: dc.w $4100  [41 00] */
    { uint32_t _ea = (g_m68k.a[7] + 0x4100); uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[0]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[2] + 0 + (int16_t)(uint16_t)g_m68k.d[4]); uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[0]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A32B4: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A32B8: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A32BC: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A32C0: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A32C4: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A32C8: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A32CC: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A32D0: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[6]; uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[0]); bus_write32(_ea, _tmp); }
    /* TODO $0A32D4: dc.w $4100  [41 00] */
    { uint32_t _ea = (g_m68k.a[0] + 0x4100); uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[0]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A32DC: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A32E0: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A32E4: dc.w $4100  [41 00] */
    { uint32_t _ea = (g_m68k.a[5] + 0x4100); uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[0]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[4]); uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[0]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[4]); uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[0]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A32F4: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A32F8: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A32FC: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A3300: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A3304: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A3308: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A330C: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A3310: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A3314: dc.w $4100  [41 00] */
    { uint32_t _ea = (g_m68k.a[1] + 0x4100); uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[0]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[2] + 0x4100); uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[0]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[3] + 0x4100); uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[0]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[4] + 0x4100); uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[0]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[6] + 0x4100); uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[0]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[4]); uint32_t _tmp = bus_read32(_ea); M68K_ADD32(_tmp, g_m68k.d[0]); bus_write32(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A3330: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A3334: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A3338: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A333C: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A3340: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A3344: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A3348: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A334C: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A3350: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A3354: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A3358: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A335C: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A3360: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A3364: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A3368: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A336C: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A3370: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A3374: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A3378: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A337C: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A3380: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A3384: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A3388: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A338C: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A3390: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A3394: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A3398: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A339C: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A33A0: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A33A4: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A33A8: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A33AC: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A33B0: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A33B4: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A33B8: dc.w $4100  [41 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
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

/* $0A33FC-$0A357E  (97 instructions, 386 bytes) */
void jt_0A33FC(void) {
    M68K_NEGX8(g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
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

/* $0A357C-$0A362E  (45 instructions, 178 bytes) */
void jt_0A357C(void) {
    M68K_NEGX8(g_m68k.d[0]);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
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

/* $0A362E-$0A367A  (19 instructions, 76 bytes) */
void jt_0A362E(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
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

/* $0A367A-$0A36FE  (48 instructions, 132 bytes) */
void jt_0A367A(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    g_m68k.a[0] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[5]));
    /* TODO $0A36BC: dc.w $4100  [41 00] */
    g_m68k.a[0] += (int16_t)(uint16_t)(_predec16(1));
    /* TODO $0A36C0: dc.w $4100  [41 00] */
    g_m68k.a[0] += g_m68k.a[0];
    /* TODO $0A36C4: dc.w $4100  [41 00] */
    g_m68k.a[0] += bus_read32(g_m68k.a[7]);
    /* TODO $0A36C8: dc.w $4100  [41 00] */
    g_m68k.a[0] += _predec32(6);
    /* TODO $0A36CC: dc.w $4100  [41 00] */
    g_m68k.a[0] += bus_read32(g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.d[4]);
    M68K_ADD8(g_m68k.d[1], g_m68k.d[4]);
    /* TODO $0A36D4: dc.w $4100  [41 00] */
    M68K_ADD8(g_m68k.d[1], bus_read8(g_m68k.a[3]));
    /* TODO $0A36D8: dc.w $4100  [41 00] */
    M68K_ADD8(g_m68k.d[1], _predec8(2));
    /* TODO $0A36DC: dc.w $4100  [41 00] */
    M68K_ADD8(g_m68k.d[1], bus_read8(g_m68k.a[1] + 0 + (int16_t)(uint16_t)g_m68k.d[4]));
    { uint32_t _ea = g_m68k.a[5]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[0]); bus_write16(_ea, _tmp); }
    /* TODO $0A36E4: dc.w $4100  [41 00] */
    M68K_ADD16(g_m68k.d[1], g_m68k.a[6]);
    /* TODO $0A36E8: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A36EC: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A36F0: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A36F4: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A36F8: dc.w $4100  [41 00] */
    g_m68k.a[0] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[6]));
    /* TODO $0A36FC: dc.w $4100  [41 00] */
    /* WARNING: function did not end with RTS */
}

/* $0A3A7A-$0A3A8E  (9 instructions, 20 bytes) */
void jt_0A3A7A(void) {
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A3A7C: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A3A80: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A3A84: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A3A88: dc.w $4100  [41 00] */
    M68K_ADD16(g_m68k.d[1], 0x4100);
    /* WARNING: function did not end with RTS */
}

/* $0A3E7A-$0A3EDA  (29 instructions, 96 bytes) */
void jt_0A3E7A(void) {
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A3EBC: dc.w $4100  [41 00] */
    M68K_ADD32(g_m68k.d[1], _postinc32(0));
    /* TODO $0A3EC0: dc.w $4100  [41 00] */
    M68K_ADD32(g_m68k.d[1], _predec32(6));
    /* TODO $0A3EC4: dc.w $4100  [41 00] */
    /* TODO $0A3EC6: movep.l d7, $4100(a3)  [0F CB 41 00] */
    /* TODO $0A3ECA: movep.l d7, $4100(a3)  [0F CB 41 00] */
    g_m68k.a[1] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[0]));
    /* TODO $0A3ED0: dc.w $4100  [41 00] */
    g_m68k.a[1] += (int16_t)(uint16_t)(_postinc16(7));
    /* TODO $0A3ED4: dc.w $4100  [41 00] */
    g_m68k.a[1] += (int16_t)(uint16_t)(bus_read16(g_m68k.a[6] + 0x4100));
    /* WARNING: function did not end with RTS */
}

/* $0A427A-$0A467A  (328 instructions, 1024 bytes) */
void jt_0A427A(void) {
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A427C: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A4280: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A4284: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[1]); bus_write16(_ea, _tmp); }
    /* TODO $0A4288: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[6]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[1]); bus_write16(_ea, _tmp); }
    /* TODO $0A428C: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[7]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[1]); bus_write16(_ea, _tmp); }
    /* TODO $0A4290: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[0]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[1]); bus_write16(_ea, _tmp); }
    /* TODO $0A4294: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[2]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[1]); bus_write16(_ea, _tmp); }
    /* TODO $0A4298: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[1]); bus_write16(_ea, _tmp); }
    /* TODO $0A429C: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[4]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[1]); bus_write16(_ea, _tmp); }
    /* TODO $0A42A0: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A42A4: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A42A8: dc.w $4100  [41 00] */
    { uint32_t _ea = (g_m68k.a[5] + 0x4100); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[1]); bus_write16(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[7] + 0x4100); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[1]); bus_write16(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A42B4: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A42B8: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A42BC: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A42C0: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A42C4: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A42C8: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A42CC: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A42D0: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[1]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[1]); bus_write16(_ea, _tmp); }
    /* TODO $0A42D4: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[3]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[1]); bus_write16(_ea, _tmp); }
    /* TODO $0A42D8: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[6]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[1]); bus_write16(_ea, _tmp); }
    /* TODO $0A42DC: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A42E0: dc.w $4100  [41 00] */
    { uint32_t _ea = (g_m68k.a[1] + 0x4100); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[1]); bus_write16(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[3] + 0x4100); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[1]); bus_write16(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[6] + 0x4100); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[1]); bus_write16(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A42F0: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A42F4: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A42F8: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A42FC: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A4300: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A4304: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A4308: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A430C: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A4310: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A4314: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[4]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[1]); bus_write16(_ea, _tmp); }
    /* TODO $0A4318: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[7]; uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[1]); bus_write16(_ea, _tmp); }
    /* TODO $0A431C: dc.w $4100  [41 00] */
    { uint32_t _ea = (g_m68k.a[0] + 0x4100); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[1]); bus_write16(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[2] + 0x4100); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[1]); bus_write16(_ea, _tmp); }
    { uint32_t _ea = (g_m68k.a[4] + 0x4100); uint16_t _tmp = bus_read16(_ea); M68K_ADD16(_tmp, g_m68k.d[1]); bus_write16(_ea, _tmp); }
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A432C: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A4330: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A4334: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A4338: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A433C: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A4340: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A4344: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A4348: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A434C: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A4350: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A4354: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A4358: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A435C: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A4360: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A4364: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A4368: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A436C: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A4370: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A4374: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A4378: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A437C: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A4380: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A4384: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A4388: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A438C: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A4390: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A4394: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A4398: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A439C: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A43A0: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A43A4: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A43A8: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A43AC: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A43B0: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A43B4: dc.w $4100  [41 00] */
    { uint32_t _ea = g_m68k.a[5]; uint8_t _b = 1u << ((g_m68k.d[3]) & 7); uint8_t _v = bus_read8(_ea); g_m68k.flag_z = !(_v & _b); bus_write8(_ea, _v | _b); }
    /* TODO $0A43B8: dc.w $4100  [41 00] */
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
    M68K_OR8(g_m68k.d[0], 0x0);
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

/* $0A47A6-$0A47AE  (2 instructions, 8 bytes) */
void jt_0A47A6(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_OR8(g_m68k.d[0], 0x0);
    /* WARNING: function did not end with RTS */
}

/* $0A47AE-$0A47B6  (2 instructions, 8 bytes) */
void jt_0A47AE(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_ADD16(g_m68k.d[5], bus_read16(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 2));
    /* WARNING: function did not end with RTS */
}

/* $0A47B6-$0A47BE  (3 instructions, 8 bytes) */
void jt_0A47B6(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_ADD16(g_m68k.d[5], _predec16(3));
    /* TODO $0A47BC: dc.w $4300  [43 00] */
    /* WARNING: function did not end with RTS */
}

/* $0A47BE-$0A47C6  (2 instructions, 8 bytes) */
void jt_0A47BE(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_ADD16(g_m68k.d[5], bus_read16(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 2));
    /* WARNING: function did not end with RTS */
}

/* $0A47C6-$0A47CE  (2 instructions, 8 bytes) */
void jt_0A47C6(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_ADD16(g_m68k.d[5], bus_read16(g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 2));
    /* WARNING: function did not end with RTS */
}

/* $0A47CE-$0A47D6  (2 instructions, 8 bytes) */
void jt_0A47CE(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_ADD16(g_m68k.d[5], bus_read16(g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 2));
    /* WARNING: function did not end with RTS */
}

/* $0A47D6-$0A47DE  (2 instructions, 8 bytes) */
void jt_0A47D6(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_ADD16(g_m68k.d[5], bus_read16(g_m68k.a[6] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 2));
    /* WARNING: function did not end with RTS */
}

/* $0A47DE-$0A47E6  (2 instructions, 8 bytes) */
void jt_0A47DE(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_ADD16(g_m68k.d[5], bus_read16(g_m68k.a[7] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 2));
    /* WARNING: function did not end with RTS */
}

/* $0A47E6-$0A47EE  (2 instructions, 8 bytes) */
void jt_0A47E6(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_ADD16(g_m68k.d[5], bus_read16(0x004300));
    /* WARNING: function did not end with RTS */
}

/* $0A47EE-$0A47F8  (2 instructions, 10 bytes) */
void jt_0A47EE(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_ADD16(g_m68k.d[5], bus_read16(0x43000001));
    /* WARNING: function did not end with RTS */
}

/* $0A47F6-$0A47FE  (4 instructions, 8 bytes) */
void jt_0A47F6(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_OR8(g_m68k.d[1], 0x7a);
    M68K_ADD16(g_m68k.d[5], bus_read16(0xa8afc));
    /* TODO $0A47FC: dc.w $4300  [43 00] */
    /* WARNING: function did not end with RTS */
}

/* $0A47FE-$0A4806  (2 instructions, 8 bytes) */
void jt_0A47FE(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_ADD16(g_m68k.d[5], /* UNHANDLED_READ: (a16, d4.w * 2) */ 0);
    /* WARNING: function did not end with RTS */
}

/* $0A4806-$0A480E  (2 instructions, 8 bytes) */
void jt_0A4806(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_ADD16(g_m68k.d[5], 0x4300);
    /* WARNING: function did not end with RTS */
}

/* $0A480E-$0A4816  (2 instructions, 8 bytes) */
void jt_0A480E(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_ADD16(g_m68k.d[5], bus_read16(g_m68k.a[3] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 2));
    /* WARNING: function did not end with RTS */
}

/* $0A4816-$0A481E  (3 instructions, 8 bytes) */
void jt_0A4816(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_ADD16(g_m68k.d[5], _predec16(3));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $0A481E-$0A4826  (2 instructions, 8 bytes) */
void jt_0A481E(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_ADD16(g_m68k.d[5], bus_read16(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 2));
    /* WARNING: function did not end with RTS */
}

/* $0A4826-$0A482E  (2 instructions, 8 bytes) */
void jt_0A4826(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_ADD16(g_m68k.d[5], bus_read16(g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 2));
    /* WARNING: function did not end with RTS */
}

/* $0A482E-$0A4836  (2 instructions, 8 bytes) */
void jt_0A482E(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_ADD16(g_m68k.d[5], bus_read16(g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 2));
    /* WARNING: function did not end with RTS */
}

/* $0A4836-$0A483E  (2 instructions, 8 bytes) */
void jt_0A4836(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_ADD16(g_m68k.d[5], bus_read16(g_m68k.a[6] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 2));
    /* WARNING: function did not end with RTS */
}

/* $0A483E-$0A4846  (2 instructions, 8 bytes) */
void jt_0A483E(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_ADD16(g_m68k.d[5], bus_read16(g_m68k.a[7] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 2));
    /* WARNING: function did not end with RTS */
}

/* $0A4846-$0A484E  (2 instructions, 8 bytes) */
void jt_0A4846(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_ADD16(g_m68k.d[5], bus_read16(0x004200));
    /* WARNING: function did not end with RTS */
}

/* $0A484E-$0A4858  (2 instructions, 10 bytes) */
void jt_0A484E(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_ADD16(g_m68k.d[5], bus_read16(0x42000001));
    /* WARNING: function did not end with RTS */
}

/* $0A4856-$0A485E  (4 instructions, 8 bytes) */
void jt_0A4856(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_OR8(g_m68k.d[1], 0x7a);
    M68K_ADD16(g_m68k.d[5], bus_read16(0xa8a5c));
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $0A485E-$0A4866  (2 instructions, 8 bytes) */
void jt_0A485E(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_ADD16(g_m68k.d[5], bus_read16(0xa4864 + (int16_t)(uint16_t)g_m68k.d[4] * 2));
    /* WARNING: function did not end with RTS */
}

/* $0A4866-$0A486E  (2 instructions, 8 bytes) */
void jt_0A4866(void) {
    M68K_OR8(g_m68k.d[1], 0x1);
    M68K_ADD16(g_m68k.d[5], 0x4200);
    /* WARNING: function did not end with RTS */
}

/* $0A486E-$0A488A  (13 instructions, 28 bytes) */
void jt_0A486E(void) {
    M68K_OR8(g_m68k.d[6], 0x1);
    { uint32_t _ea = g_m68k.a[5]; uint16_t _tmp = bus_read16(_ea); M68K_ROR16(_tmp, 1); bus_write16(_ea, _tmp); }
    /* TODO $0A4874: dc.w $4300  [43 00] */
    { uint32_t _ea = g_m68k.a[6]; uint16_t _tmp = bus_read16(_ea); M68K_ROR16(_tmp, 1); bus_write16(_ea, _tmp); }
    /* TODO $0A4878: dc.w $4300  [43 00] */
    { uint32_t _ea = g_m68k.a[7]; uint16_t _tmp = bus_read16(_ea); M68K_ROR16(_tmp, 1); bus_write16(_ea, _tmp); }
    /* TODO $0A487C: dc.w $4300  [43 00] */
    { uint32_t _ea = g_m68k.a[0]; uint16_t _tmp = bus_read16(_ea); M68K_ROR16(_tmp, 1); bus_write16(_ea, _tmp); }
    /* TODO $0A4880: dc.w $4300  [43 00] */
    { uint32_t _ea = g_m68k.a[1]; uint16_t _tmp = bus_read16(_ea); M68K_ROR16(_tmp, 1); bus_write16(_ea, _tmp); }
    /* TODO $0A4884: dc.w $4300  [43 00] */
    { uint32_t _ea = g_m68k.a[2]; uint16_t _tmp = bus_read16(_ea); M68K_ROR16(_tmp, 1); bus_write16(_ea, _tmp); }
    /* TODO $0A4888: dc.w $4300  [43 00] */
    /* WARNING: function did not end with RTS */
}

/* $0A488A-$0A48A6  (13 instructions, 28 bytes) */
void jt_0A488A(void) {
    M68K_OR8(g_m68k.d[6], 0x1);
    M68K_ADD16(g_m68k.d[5], _predec16(4));
    /* TODO $0A4890: dc.w $4300  [43 00] */
    { uint32_t _ea = g_m68k.a[1]; uint16_t _tmp = bus_read16(_ea); M68K_ROR16(_tmp, 1); bus_write16(_ea, _tmp); }
    /* TODO $0A4894: dc.w $4300  [43 00] */
    { uint32_t _ea = g_m68k.a[2]; uint16_t _tmp = bus_read16(_ea); M68K_ROR16(_tmp, 1); bus_write16(_ea, _tmp); }
    /* TODO $0A4898: dc.w $4300  [43 00] */
    { uint32_t _ea = g_m68k.a[3]; uint16_t _tmp = bus_read16(_ea); M68K_ROR16(_tmp, 1); bus_write16(_ea, _tmp); }
    /* TODO $0A489C: dc.w $4300  [43 00] */
    { uint32_t _ea = g_m68k.a[4]; uint16_t _tmp = bus_read16(_ea); M68K_ROR16(_tmp, 1); bus_write16(_ea, _tmp); }
    /* TODO $0A48A0: dc.w $4300  [43 00] */
    M68K_ADD16(g_m68k.d[5], _predec16(3));
    /* TODO $0A48A4: dc.w $4300  [43 00] */
    /* WARNING: function did not end with RTS */
}

/* $0A48A6-$0A48C2  (12 instructions, 28 bytes) */
void jt_0A48A6(void) {
    M68K_OR8(g_m68k.d[6], 0x1);
    M68K_ADD16(g_m68k.d[5], _predec16(4));
    /* TODO $0A48AC: dc.w $4300  [43 00] */
    { uint32_t _ea = g_m68k.a[1]; uint16_t _tmp = bus_read16(_ea); M68K_ROR16(_tmp, 1); bus_write16(_ea, _tmp); }
    /* TODO $0A48B0: dc.w $4300  [43 00] */
    { uint32_t _ea = g_m68k.a[2]; uint16_t _tmp = bus_read16(_ea); M68K_ROR16(_tmp, 1); bus_write16(_ea, _tmp); }
    /* TODO $0A48B4: dc.w $4300  [43 00] */
    { uint32_t _ea = g_m68k.a[3]; uint16_t _tmp = bus_read16(_ea); M68K_ROR16(_tmp, 1); bus_write16(_ea, _tmp); }
    /* TODO $0A48B8: dc.w $4300  [43 00] */
    { uint32_t _ea = g_m68k.a[4]; uint16_t _tmp = bus_read16(_ea); M68K_ROR16(_tmp, 1); bus_write16(_ea, _tmp); }
    /* TODO $0A48BC: dc.w $4300  [43 00] */
    M68K_ADD16(g_m68k.d[5], bus_read16(g_m68k.a[0] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 2));
    /* WARNING: function did not end with RTS */
}

/* $0A48C2-$0A48DE  (12 instructions, 28 bytes) */
void jt_0A48C2(void) {
    M68K_OR8(g_m68k.d[6], 0x1);
    M68K_ADD16(g_m68k.d[5], _predec16(4));
    /* TODO $0A48C8: dc.w $4300  [43 00] */
    { uint32_t _ea = g_m68k.a[1]; uint16_t _tmp = bus_read16(_ea); M68K_ROR16(_tmp, 1); bus_write16(_ea, _tmp); }
    /* TODO $0A48CC: dc.w $4300  [43 00] */
    { uint32_t _ea = g_m68k.a[2]; uint16_t _tmp = bus_read16(_ea); M68K_ROR16(_tmp, 1); bus_write16(_ea, _tmp); }
    /* TODO $0A48D0: dc.w $4300  [43 00] */
    { uint32_t _ea = g_m68k.a[3]; uint16_t _tmp = bus_read16(_ea); M68K_ROR16(_tmp, 1); bus_write16(_ea, _tmp); }
    /* TODO $0A48D4: dc.w $4300  [43 00] */
    { uint32_t _ea = g_m68k.a[4]; uint16_t _tmp = bus_read16(_ea); M68K_ROR16(_tmp, 1); bus_write16(_ea, _tmp); }
    /* TODO $0A48D8: dc.w $4300  [43 00] */
    M68K_ADD16(g_m68k.d[5], bus_read16(g_m68k.a[4] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 2));
    /* WARNING: function did not end with RTS */
}

/* $0A48DE-$0A48FA  (12 instructions, 28 bytes) */
void jt_0A48DE(void) {
    M68K_OR8(g_m68k.d[6], 0x1);
    M68K_ADD16(g_m68k.d[5], _predec16(4));
    /* TODO $0A48E4: dc.w $4300  [43 00] */
    { uint32_t _ea = g_m68k.a[1]; uint16_t _tmp = bus_read16(_ea); M68K_ROR16(_tmp, 1); bus_write16(_ea, _tmp); }
    /* TODO $0A48E8: dc.w $4300  [43 00] */
    { uint32_t _ea = g_m68k.a[2]; uint16_t _tmp = bus_read16(_ea); M68K_ROR16(_tmp, 1); bus_write16(_ea, _tmp); }
    /* TODO $0A48EC: dc.w $4300  [43 00] */
    { uint32_t _ea = g_m68k.a[3]; uint16_t _tmp = bus_read16(_ea); M68K_ROR16(_tmp, 1); bus_write16(_ea, _tmp); }
    /* TODO $0A48F0: dc.w $4300  [43 00] */
    { uint32_t _ea = g_m68k.a[4]; uint16_t _tmp = bus_read16(_ea); M68K_ROR16(_tmp, 1); bus_write16(_ea, _tmp); }
    /* TODO $0A48F4: dc.w $4300  [43 00] */
    M68K_ADD16(g_m68k.d[5], bus_read16(g_m68k.a[5] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 2));
    /* WARNING: function did not end with RTS */
}

/* $0A48FA-$0A4916  (12 instructions, 28 bytes) */
void jt_0A48FA(void) {
    M68K_OR8(g_m68k.d[6], 0x1);
    M68K_ADD16(g_m68k.d[5], _predec16(4));
    /* TODO $0A4900: dc.w $4300  [43 00] */
    { uint32_t _ea = g_m68k.a[1]; uint16_t _tmp = bus_read16(_ea); M68K_ROR16(_tmp, 1); bus_write16(_ea, _tmp); }
    /* TODO $0A4904: dc.w $4300  [43 00] */
    { uint32_t _ea = g_m68k.a[2]; uint16_t _tmp = bus_read16(_ea); M68K_ROR16(_tmp, 1); bus_write16(_ea, _tmp); }
    /* TODO $0A4908: dc.w $4300  [43 00] */
    { uint32_t _ea = g_m68k.a[3]; uint16_t _tmp = bus_read16(_ea); M68K_ROR16(_tmp, 1); bus_write16(_ea, _tmp); }
    /* TODO $0A490C: dc.w $4300  [43 00] */
    { uint32_t _ea = g_m68k.a[4]; uint16_t _tmp = bus_read16(_ea); M68K_ROR16(_tmp, 1); bus_write16(_ea, _tmp); }
    /* TODO $0A4910: dc.w $4300  [43 00] */
    M68K_ADD16(g_m68k.d[5], bus_read16(g_m68k.a[6] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 2));
    /* WARNING: function did not end with RTS */
}

/* $0A4916-$0A4932  (12 instructions, 28 bytes) */
void jt_0A4916(void) {
    M68K_OR8(g_m68k.d[6], 0x1);
    M68K_ADD16(g_m68k.d[5], _predec16(4));
    /* TODO $0A491C: dc.w $4300  [43 00] */
    { uint32_t _ea = g_m68k.a[1]; uint16_t _tmp = bus_read16(_ea); M68K_ROR16(_tmp, 1); bus_write16(_ea, _tmp); }
    /* TODO $0A4920: dc.w $4300  [43 00] */
    { uint32_t _ea = g_m68k.a[2]; uint16_t _tmp = bus_read16(_ea); M68K_ROR16(_tmp, 1); bus_write16(_ea, _tmp); }
    /* TODO $0A4924: dc.w $4300  [43 00] */
    { uint32_t _ea = g_m68k.a[3]; uint16_t _tmp = bus_read16(_ea); M68K_ROR16(_tmp, 1); bus_write16(_ea, _tmp); }
    /* TODO $0A4928: dc.w $4300  [43 00] */
    { uint32_t _ea = g_m68k.a[4]; uint16_t _tmp = bus_read16(_ea); M68K_ROR16(_tmp, 1); bus_write16(_ea, _tmp); }
    /* TODO $0A492C: dc.w $4300  [43 00] */
    M68K_ADD16(g_m68k.d[5], bus_read16(g_m68k.a[7] + 0 + (int16_t)(uint16_t)g_m68k.d[4] * 2));
    /* WARNING: function did not end with RTS */
}

/* $0A4932-$0A4952  (15 instructions, 32 bytes) */
void jt_0A4932(void) {
    M68K_OR8(g_m68k.d[7], 0x1);
    { uint32_t _ea = g_m68k.a[3]; uint16_t _tmp = bus_read16(_ea); M68K_ROR16(_tmp, 1); bus_write16(_ea, _tmp); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint32_t _ea = g_m68k.a[4]; uint16_t _tmp = bus_read16(_ea); M68K_ROR16(_tmp, 1); bus_write16(_ea, _tmp); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint32_t _ea = g_m68k.a[5]; uint16_t _tmp = bus_read16(_ea); M68K_ROR16(_tmp, 1); bus_write16(_ea, _tmp); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint32_t _ea = g_m68k.a[6]; uint16_t _tmp = bus_read16(_ea); M68K_ROR16(_tmp, 1); bus_write16(_ea, _tmp); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint32_t _ea = g_m68k.a[7]; uint16_t _tmp = bus_read16(_ea); M68K_ROR16(_tmp, 1); bus_write16(_ea, _tmp); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint32_t _ea = g_m68k.a[0]; uint16_t _tmp = bus_read16(_ea); M68K_ROR16(_tmp, 1); bus_write16(_ea, _tmp); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    { uint32_t _ea = g_m68k.a[1]; uint16_t _tmp = bus_read16(_ea); M68K_ROR16(_tmp, 1); bus_write16(_ea, _tmp); }
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $0A4A0A-$0A4A1A  (7 instructions, 16 bytes) */
void jt_0A4A0A(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    M68K_LSL8(g_m68k.d[4], 0x1);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    M68K_LSL8(g_m68k.d[6], 0x1);
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* TODO $0A4A16: roxr.l d1, d6  [E2 B6] */
    g_m68k.d[0] = (g_m68k.d[0] & 0xFFFFFF00u) | ((uint8_t)(0)); g_m68k.flag_n = false; g_m68k.flag_z = true; g_m68k.flag_v = false; g_m68k.flag_c = false;
    /* WARNING: function did not end with RTS */
}

/* $0A4A1E-$0A4A22  (1 instructions, 4 bytes) */
void jt_0A4A1E(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    /* WARNING: function did not end with RTS */
}

/* $0A4A32-$0A4A3E  (5 instructions, 12 bytes) */
void jt_0A4A32(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    /* TODO $0A4A36: roxr.l d1, d5  [E2 B5] */
    M68K_NEG8(g_m68k.d[0]);
    M68K_LSL8(g_m68k.d[7], 0x1);
    M68K_NEG8(g_m68k.d[0]);
    /* WARNING: function did not end with RTS */
}

/* $0A4A46-$0A4A4A  (1 instructions, 4 bytes) */
void jt_0A4A46(void) {
    M68K_OR8(g_m68k.d[2], 0x2);
    /* WARNING: function did not end with RTS */
}
