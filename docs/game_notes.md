# Neo Drift Out: New Technology — Technical Notes

Game-specific observations, function maps, and quirks discovered during recompilation.

## ROM Analysis

- **P ROM**: `drift_p1.rom` (213-p1.p1), 2 MB (2,097,152 bytes)
- **No bankswitching**: 2 MB fits in two 1 MB windows
- **No protection**: Standard PROGBK1 board
- **Board**: PROGBK1 (PROG) + CHA256B (CHA)
- **P ROM is byteswapped**: Every 2-byte pair is swapped in the file
- **P ROM mapping is reversed**: File offset $100000-$1FFFFF = 68k $000000-$0FFFFF (fixed bank), File offset $000000-$0FFFFF = 68k $200000-$2FFFFF (port zone)

## Vector Table

| Address    | Vector | Target     | Notes |
|------------|--------|------------|-------|
| $000000    | Initial SSP | $0010F300 | Top of system RAM |
| $000004    | Reset PC | $00C00402 | BIOS entry — BIOS handles boot |
| $000064    | IRQ1 (VBlank) | $0000022C | Main game timing interrupt |
| $000068    | IRQ2 (Timer) | $000002AA | Mid-frame VRAM updates |
| $00006C    | IRQ3 (Reset) | $000002C2 | Jumps to timer handler |
| $000080-$BF | TRAP 0-15 | $000002CA | All point to RTE (unused) |

## Neo Geo Game Header ($000100)

```
$000100: "NEO-GEO\0"   Signature
$000108: $0213          NGH code (213)
$00010A: $00200000      Program size (2 MB)
```

## BIOS Dispatch Table ($000122)

| Address | Instruction | Target | Purpose |
|---------|-------------|--------|---------|
| $000122 | `JMP` | $00068C | **USER** — main frame handler, called by BIOS every VBlank |
| $00012A | `JMP` | $000770 | **PLAYER_START** — called when player presses start |
| $000132 | `JMP` | $00095C | **DEMO_END** — called when demo attract mode ends |
| $00013A | `JMP` | $00095E | **COIN_SOUND** — called when coin is inserted |

## Game State Machine

The game state is stored as a byte at **$10FDAE**. The USER routine dispatches to state handlers via a jump table at $0006F6:

| State | Address  | Handler | Description |
|-------|----------|---------|-------------|
| 0 | $000706 | `state_0_init` | Hardware init, load graphics, return to BIOS for eyecatcher |
| 1 | $00073E | `state_1_title` | Title screen — immediately returns to BIOS |
| 2 | $000744 | `state_2_demo` | Demo/attract mode — enters gameplay with no input |
| 3 | $000756 | `state_3_carselect` | Player start — enters gameplay with car selection |

### Gameplay Sub-States ($000B34)

States 2 and 3 both enter the gameplay dispatcher at $000B34, which has a second 20-entry jump table at $000BAA indexed by the word at **$100426**:

| Sub-State | Address  | Likely Purpose |
|-----------|----------|----------------|
| 0  | $000BFA | Initial game setup / transition in |
| 1  | $000CC6 | Waiting / title animation |
| 2  | $000D34 | Stage intro |
| 3  | $000D82 | Pre-race countdown |
| 4  | $000D9A | Racing (main gameplay) |
| 5  | $000DC8 | Mid-race state |
| 6  | $000DF6 | Lap complete / checkpoint |
| 7  | $000E20 | Stage transition |
| 8  | $000E38 | Results display |
| 9  | $000E6E | Post-results |
| 10 | $000E9C | Game over check |
| 11 | $000EC8 | Ranking / high score |
| 12 | $000EE0 | Car select screen (from state 3) |
| 13 | $000EFC | Car select -> race transition |
| 14 | $000F28 | Continue screen |
| 15 | $000F3E | Continue countdown |
| 16 | $000F64 | Continue accepted |
| 17 | $000F7C | Continue declined / game over |
| 18 | $000F98 | Return to title |
| 19 | $000FB0 | Final cleanup |

## Recompiled Functions (54 discovered, 16 recompiled)

### Boot / Vector Handlers
| Address | Size | Name | File | Status |
|---------|------|------|------|--------|
| $00022C | 18 | `vblank_handler` | vectors.c | Done |
| $00023E | 108 | `vblank_game_handler` | vectors.c | Done |
| $0002AA | 24 | `timer_handler` | vectors.c | Done |
| $0002C2 | 6 | `cold_reset` | vectors.c | Done |
| $0002CA | 2 | `trap_handler` | vectors.c | Done |

### Main Loop / Frame Management
| Address | Size | Name | File | Status |
|---------|------|------|------|--------|
| $000200 | 14 | `clear_frame_counters` | main_loop.c | Done |
| $00020E | 30 | `setup_frame_sync` | main_loop.c | Done |
| $00068C | 178 | `user_main` | main_loop.c | Done |
| $0009BC | 18 | `set_frame_delays` | main_loop.c | Done |
| $0009F4 | 8 | `set_input_mode` | main_loop.c | Done |
| $000A04 | 34 | `clear_work_ram` | main_loop.c | Done |
| $000FE8 | 28 | `check_game_active` | main_loop.c | Done |

### State Handlers
| Address | Size | Name | File | Status |
|---------|------|------|------|--------|
| $000706 | 56 | `state_0_init` | states.c | Done |
| $00073E | 6 | `state_1_title` | states.c | Done |
| $000744 | 18 | `state_2_demo` | states.c | Done |
| $000756 | 26 | `state_3_carselect` | states.c | Done |

### VBlank Subsystems (called from VBlank handler)
| Address | Size | Name | File | Status |
|---------|------|------|------|--------|
| $011F3E | 62 | `palette_dma` | — | Not started |
| $012188 | 122 | `sprite_table_upload` | — | Not started |
| $013646 | 116 | `vram_upload_main` | — | Not started |
| $0136BA | 76 | `timer_irq_sub` | — | Not started |
| $015150 | 262 | `slot_switch_handler` | — | Not started |

### Gameplay Core
| Address | Size | Name | File | Status |
|---------|------|------|------|--------|
| $000B34 | 402 | `gameplay_dispatcher` | — | Not started |
| $000BFA-$0FB0 | ~varied | Sub-state handlers (20) | — | Not started |

### Support Routines
| Address | Size | Name | File | Status |
|---------|------|------|------|--------|
| $000A26 | 52 | `sub_0A26` | — | Not started |
| $0010D0 | 66 | `load_initial_tiles` | — | Not started |
| $001112 | 40 | `palette_setup` | — | Not started |
| $0011FC | 124 | `tile_setup` | — | Not started |
| $001278 | 52 | `sprite_setup` | — | Not started |
| $011C68 | 66 | `vram_dma_sub` | — | Not started |
| $011CAA | 514 | `vram_block_copy` | — | Not started |
| $011EEE | 52 | `palette_prep` | — | Not started |
| $0120E0 | 168 | `sprite_prep` | — | Not started |
| $0133FA | 148 | `vram_prep` | — | Not started |

## Work RAM Map

Key game variables discovered through static analysis:

| Address | Size | Description | Referenced by |
|---------|------|-------------|---------------|
| $100370 | word | Slot switch state | slot_switch_handler |
| $100372 | word | Slot switch secondary | slot_switch_handler |
| $100374-$103610 | ~12.7 KB | Game working memory | Cleared every frame by `clear_work_ram` |
| $100400 | word | Frame sync target (skip count) | VBlank handler, setup_frame_sync |
| $100402 | word | Frame sync counter | VBlank handler |
| $100404 | word | Rendered frame counter | VBlank handler |
| $10040A | word | Unknown (checked in gameplay) | gameplay_dispatcher |
| $100416 | byte | Frame delay 1 | set_frame_delays |
| $100417 | byte | Frame delay 2 | set_frame_delays |
| $10041A | word | Unknown flag | user_main |
| $10041C | word | Input mode | set_input_mode |
| $100422 | word | Game running flag | check_game_active, gameplay |
| $100424 | word | Frame ready flag (0=not rendered, 1=rendered) | VBlank handler, user_main |
| $100426 | word | **Gameplay sub-state** (0-19) | state handlers, gameplay_dispatcher |
| $101700 | area | Palette DMA buffer base | palette_dma |
| $101B18 | long | Palette DMA current pointer | palette_dma |
| $102224 | word | Sprite table upload flag | sprite_table_upload |
| $102226 | long | Sprite table buffer A pointer | sprite_table_upload |
| $10222A | long | Sprite table buffer B pointer | sprite_table_upload |
| $102530 | word | VRAM prep state | vram_prep |
| $102532 | word | VRAM double-buffer swap flag | vram_upload_main |
| $1025D2 | long | VRAM buffer A pointer | vram_upload_main |
| $1025D6 | long | VRAM buffer B pointer | vram_upload_main |
| $10FD80 | byte | System flags (bit 7 = game VBlank active) | VBlank handler, user_main |
| $10FD82 | byte | Unknown system flag | gameplay |
| $10FD83 | byte | Unknown system flag | multiple |
| $10FDAE | byte | **Game state** (0-3) | user_main dispatch |
| $10FDAF | byte | Sub-state or init flag | state_0_init |
| $10FDB6 | long | Unknown (cleared each frame) | user_main |
| $10FE80 | word | Game active flag | check_game_active |
| $10FEC5 | byte | Player active (0=demo, 1=player) | state_3_carselect |

## I/O Register Usage

| Address | Register | Usage |
|---------|----------|-------|
| $300001 | REG_DIPSW / Watchdog | Kicked every VBlank |
| $320000 | REG_SOUND | Sound commands to Z80 |
| $3C0002 | REG_VRAMRW | VRAM read/write (main rendering path) |
| $3C000C | REG_IRQACK | VBlank ack (bit 2), Timer ack (bit 1) |
| $400000 | PALRAM | Palette color 0 cleared in palette_dma |

## Architecture Observations

1. **Double-buffered rendering**: The game uses double-buffered VRAM and sprite tables. Pointers at $1025D2/$1025D6 (VRAM) and $102226/$10222A (sprites) are swapped each frame via the `$102532` flag.

2. **Frame sync mechanism**: The VBlank handler increments $100402 each VBlank. When it exceeds $100400 (set by `setup_frame_sync`), it triggers the actual render upload. The USER routine waits for $100424 to become 1 (set by VBlank) before proceeding. This decouples game logic speed from render speed.

3. **State machine is 2-level**: Top level (4 states at $10FDAE) dispatched in USER, bottom level (20 sub-states at $100426) dispatched in the gameplay dispatcher at $000B34. State 0 and 1 don't enter gameplay; states 2 and 3 jump to $000B34.

4. **Interrupt priority**: The timer IRQ handler ($0002AA) masks interrupts during its VRAM update by saving/restoring SR. The VRAM upload routines also mask with `ORI #$700,SR` to prevent VBlank from interrupting mid-transfer.

5. **Clean separation**: Game logic runs in USER (called by BIOS). Rendering uploads happen in VBlank. The $100424 flag synchronizes them.
