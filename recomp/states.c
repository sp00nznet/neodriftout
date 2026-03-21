/*
 * states.c — Game state handlers.
 *
 * The game state machine is controlled by the byte at $10FDAE:
 *   State 0: Init / Logo — sets up initial hardware state
 *   State 1: Title Screen — immediately returns to BIOS
 *   State 2: Demo Play — enters gameplay loop with no player input
 *   State 3: Car Select — enters gameplay loop with car selection
 *
 * States 2 and 3 both eventually jump to the main gameplay dispatcher
 * at $000B34, which has its own 20-entry sub-state jump table for
 * managing the in-game flow (track intro, racing, results, etc.)
 *
 * Source ROM: drift_p1.rom (213-p1.p1)
 */

#include <neogeorecomp/neogeorecomp.h>

/*
 * State 0: Init / Logo — $000706
 *
 * First-time initialization when the game starts. Sets up hardware
 * state, loads initial graphics, and returns to the BIOS which
 * handles the eyecatcher (SNK logo animation).
 *
 * Original:
 *   bclr.b  #7, $10FD80.l     ; disable game VBlank handling
 *   move.b  #0, $10FDAF.l     ; clear sub-state
 *   jsr     $09A2(pc)          ; hardware setup
 *   jsr     $10D0.l            ; load initial tile data
 *   jsr     $11FC.l            ; additional tile setup
 *   jsr     $1112.l            ; palette setup
 *   jsr     $1278.l            ; sprite setup
 *   jsr     $150FA.l           ; sound system init
 *   jmp     $C00444.l          ; return to BIOS (eyecatcher)
 */
void func_000706(void) {
    /* Disable game VBlank handling */
    uint8_t flags = bus_read8(0x10FD80);
    bus_write8(0x10FD80, flags & ~0x80);

    /* Clear sub-state */
    bus_write8(0x10FDAF, 0);

    /* Hardware and graphics setup */
    func_table_call(0x0009A2);   /* Hardware setup (PC-relative from $716) */
    func_table_call(0x0010D0);   /* Load initial tile data */
    func_table_call(0x0011FC);   /* Additional tile setup */
    func_table_call(0x001112);   /* Palette setup */
    func_table_call(0x001278);   /* Sprite setup */
    func_table_call(0x0150FA);   /* Sound system init */

    /* Return to BIOS for eyecatcher */
    func_table_call(0xC00444);
}

/*
 * State 1: Title Screen — $00073E
 *
 * The title screen state is entirely handled by the BIOS.
 * The game just jumps straight back to the BIOS to display
 * the "INSERT COIN" / "PRESS START" screen.
 *
 * Original:
 *   jmp $C00444.l
 */
void func_00073E(void) {
    func_table_call(0xC00444);
}

/*
 * State 2: Demo Play — $000744
 *
 * Attract mode demo. Sets up for a demo playthrough with no
 * player input, then enters the main gameplay dispatcher.
 *
 * Original:
 *   jsr     $0966(pc)              ; setup routine
 *   move.w  #0, $100426.l          ; set gameplay sub-state to 0
 *   jmp     $0B34.l                ; enter gameplay dispatcher
 */
void func_000744(void) {
    func_table_call(0x000966);       /* Demo setup */
    bus_write16(0x100426, 0);        /* Start from sub-state 0 */
    func_table_call(0x000B34);       /* Enter gameplay dispatcher */
}

/*
 * State 3: Car Select — $000756
 *
 * Player has inserted a coin and pressed start. Sets up for actual
 * gameplay with car selection, then enters the gameplay dispatcher.
 *
 * Original:
 *   jsr     $0966(pc)              ; setup routine
 *   move.b  #1, $10FEC5.l          ; mark as player-active (not demo)
 *   move.w  #$C, $100426.l         ; set gameplay sub-state to 12 (car select)
 *   jmp     $0B34.l                ; enter gameplay dispatcher
 */
void func_000756(void) {
    func_table_call(0x000966);       /* Game setup */
    bus_write8(0x10FEC5, 1);         /* Player is active (not demo mode) */
    bus_write16(0x100426, 0x0C);     /* Sub-state 12 = car select screen */
    func_table_call(0x000B34);       /* Enter gameplay dispatcher */
}
