# Neo Drift Out: New Technology — Technical Notes

Game-specific observations, function maps, and quirks discovered during recompilation.

## ROM Analysis

- **P ROM**: `213-p1.p1`, 2 MB (2,097,152 bytes), CRC32: `e397d798`
- **No bankswitching**: 2 MB fits in two 1 MB windows
- **No protection**: Standard PROGBK1 board
- **Board**: PROGBK1 (PROG) + CHA256B (CHA)

## What Makes This Game Interesting

Neo Drift Out is technically unusual for the Neo Geo:

1. **Isometric perspective** — The top-down view with pseudo-3D is achieved entirely with 2D sprites. Track curves are rendered by selecting appropriate sprite frames that show the road at different angles.

2. **Multi-directional scrolling** — Most Neo Geo games scroll horizontally. This scrolls in all directions as the camera follows the car.

3. **Physics simulation** — The 68000 handles real-time vehicle physics: momentum, drift angle, surface grip, and collision. This is computationally expensive for a 12 MHz CPU and will produce interesting recompiled code.

4. **Minimal sprite count** — Uses only 2 C ROMs (one pair) vs. Metal Slug's 4. The game uses fewer sprites but updates them more frequently.

5. **Only 2 buttons** — Accelerate and brake. The joystick handles steering. This simplifies input handling significantly.

## Vector Table

| Address | Vector | Notes |
|---------|--------|-------|
| $000000 | Initial SSP | Stack pointer value |
| $000004 | Reset PC | Entry point |
| $000068 | Level 1 (VBlank) | Main timing |
| $00006C | Level 2 (Timer) | May be unused |

## Key RAM Locations

(To be filled in during disassembly)

| Address | Size | Description |
|---------|------|-------------|
| | | |

## Game Structure

### Cars
| ID | Model | Speed | Control | Body |
|----|-------|-------|---------|------|
| 0 | Mitsubishi Lancer Evo | High | Low | Low |
| 1 | Subaru Impreza WRX | Medium | High | Medium |
| 2 | Toyota Celica GT-Four | Low | Medium | High |

### Stages
| # | Name | Surface | Notes |
|---|------|---------|-------|
| P | Practice | Tarmac | Tutorial stage |
| 1 | European Rally | Mixed | |
| 2 | African Rally | Dirt/Sand | |
| 3 | Snow Land | Ice/Snow | Low grip |
| 4 | Southern Hemisphere | Gravel/Mud | |
| 5 | Scandinavian Rally | Ice/Gravel | |
| 6 | Great Britain | Tarmac/Gravel | |

### Expected Game Flow
1. Title screen / attract mode
2. Coin insert / start
3. Car selection screen (3 cars with stat display)
4. Stage sequence: practice + 6 rally stages
5. Each stage: countdown -> race -> results
6. Game over if timer expires before finishing

## Physics Model (Speculation)

Based on the genre and era, the physics likely uses:
- Fixed-point arithmetic (no FPU on the 68000)
- Lookup tables for trigonometry (sin/cos for steering angle)
- Per-surface friction coefficients
- Simple momentum model: velocity += acceleration - friction
- Drift mechanics: separate forward velocity and lateral slip angle

This will be confirmed during disassembly.

## Function Map

(To be filled in as functions are identified)

| Address | Name | Description | Status |
|---------|------|-------------|--------|
| | | | |

## Sound Commands

(To be documented)

| Command | Effect |
|---------|--------|
| | |

## Developer: Visco Corporation

Visco's Neo Geo catalog:
- Andro Dunos (1992) — horizontal shmup
- Goal! Goal! Goal! (1995) — soccer
- Neo Drift Out (1996) — this game
- Breakers (1996) — fighting
- Flip Shot (1998) — air hockey
- Breakers Revenge (1998) — fighting
- Captain Tomaday (1999) — shmup
- Ganryu (1999) — side-scrolling action
- Bang Bead (2000) — competitive ball game

## References

- [MAME Neo Geo driver](https://github.com/mamedev/mame/blob/master/src/mame/neogeo/neogeo.cpp)
- [Neo Geo Dev Wiki](https://wiki.neogeodev.org)
- [Arcade Italia: Neo Drift Out](https://adb.arcadeitalia.net/?mame=neodrift)
