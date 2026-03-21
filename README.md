# Neo Drift Out: New Technology — Static Recompilation

**A native PC port of Neo Drift Out (1996) via static recompilation of the original Neo Geo 68000 code.**

Neo Drift Out: New Technology is a top-down isometric rally racing game by Visco Corporation — one of the few racing titles in the Neo Geo's fighting-game-dominated library. Players tear through World Rally Championship-inspired stages in licensed Mitsubishi, Subaru, and Toyota rally cars, drifting across tarmac, gravel, mud, and ice. This project recompiles the original 68000 machine code into native x86-64, producing a standalone PC executable.

## The Game

- **Title**: Neo Drift Out: New Technology (ネオ ドリフトアウト ニューテクノロジー)
- **Developer**: Visco Corporation
- **Publisher**: Visco Corporation
- **Platform**: Neo Geo MVS / AES (NGH-213)
- **Year**: 1996
- **Genre**: Top-down isometric rally racing
- **Players**: 1-2 (alternating)

### Stages

| # | Stage | Surface | Conditions |
|---|-------|---------|------------|
| P | Practice | Tarmac | Clear |
| 1 | European Rally | Mixed | Varied |
| 2 | African Rally | Dirt / Sand | Dry |
| 3 | Snow Land | Ice / Packed snow | Winter |
| 4 | Southern Hemisphere | Gravel / Mud | Wet |
| 5 | Scandinavian Rally | Ice / Gravel | Cold |
| 6 | Great Britain | Tarmac / Gravel | Rain |

### Cars

| Car | Speed | Control | Body | Real-world Model |
|-----|-------|---------|------|-----------------|
| Car A | High | Low | Low | Mitsubishi Lancer Evolution |
| Car B | Medium | High | Medium | Subaru Impreza WRX |
| Car C | Low | Medium | High | Toyota Celica GT-Four |

The fourth entry in Visco's Drift Out series, this is the only one built for Neo Geo hardware. The isometric perspective and multi-directional scrolling make it technically interesting — unlike the horizontal scrolling of typical Neo Geo games, the camera follows the car through track curves using sprite rotation and scaling tricks within the Neo Geo's sprite-only rendering pipeline.

## ROM Details

| ROM | Type | Size | Purpose |
|-----|------|------|---------|
| `213-p1.p1` | P ROM | 2 MB | 68000 program code |
| `213-s1.s1` | S ROM | 128 KB | Fix layer text/HUD tiles |
| `213-c1.c1` / `c2` | C ROM pair | 4 MB each | Sprite graphics |
| `213-m1.m1` | M ROM | 128 KB | Z80 audio driver |
| `213-v1.v1` | V ROM | 2 MB | ADPCM audio samples |
| `213-v2.v2` | V ROM | 2 MB | ADPCM audio samples |

**Total: ~12.5 MB** — notably smaller than Metal Slug due to only one C ROM pair (vs two) and smaller V ROMs. No encryption, no protection, no bankswitching. A clean, straightforward ROM layout ideal for recompilation.

### PCB Details
- **PROG board**: PROGBK1 (standard)
- **CHA board**: CHA256B
- **MAME driver**: Standard `neogeo.cpp` — no game-specific handlers
- **First MAME support**: v0.34b5 (October 1998), fully working since

## Why Neo Drift Out?

This is a strategic choice as a recompilation target:

1. **Simpler game logic**: A racing game has fewer entity types and interactions than a run-and-gun. The core loop is physics + rendering + timer, not hundreds of enemy AI state machines.
2. **Smaller ROM**: 12.5 MB total, only 2 MB of code. Fewer functions to recompile.
3. **Only 2 C ROMs**: Half the sprite data of Metal Slug, meaning the video layer gets exercised but isn't overwhelmed.
4. **Great proving ground**: If the Neo Geo runtime can handle Neo Drift Out's isometric scrolling, multi-directional camera, and surface physics, it can handle anything.
5. **Completely uncharted**: No reverse engineering work exists for this game anywhere. We're starting fresh.
6. **Minimal inputs**: Only 2 functional buttons (accelerate + brake) plus the joystick. Input handling is trivial.

## How This Project Works

This repository contains the game-specific recompiled code for Neo Drift Out. It depends on [neogeorecomp](https://github.com/sp00nznet/neogeorecomp), which provides the Neo Geo hardware runtime.

```
┌──────────────────────────┐
│  neodriftout (this repo)  │
│  ┌────────────────────┐  │
│  │  recomp/*.c        │  │  ← recompiled 68k functions
│  │  src/main.c        │  │  ← entry point, function registration
│  └────────┬───────────┘  │
│           │ links        │
│  ┌────────▼───────────┐  │
│  │   neogeorecomp     │  │  ← Neo Geo hardware runtime
│  │   (git submodule)  │  │
│  └────────────────────┘  │
└──────────────────────────┘
```

### Project Structure

```
neodriftout/
├── src/
│   └── main.c              — entry point, ROM loading, function table setup
├── recomp/
│   └── (recompiled 68k function files will live here)
├── docs/
│   └── game_notes.md       — technical analysis, function map, game-specific quirks
├── CMakeLists.txt
└── README.md
```

## Building

### Prerequisites

- **CMake** 3.20+
- **C17 compiler** (MSVC 2022, Clang 14+, or GCC 12+)
- **SDL2** development libraries
- **A legally obtained Neo Drift Out ROM dump** (you must own the game)

### Build Steps

```bash
git clone --recursive https://github.com/sp00nznet/neodriftout.git
cd neodriftout
cmake -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build
```

### Running

```bash
./build/neodriftout --rom-path /path/to/your/roms/
```

The ROM path should contain the Neo Drift Out ROM files (`213-p1.p1`, etc.) plus the Neo Geo BIOS files.

## Recompilation Progress

| Phase | Description | Status |
|-------|-------------|--------|
| ROM analysis | Disassemble P ROM, map function boundaries | Not started |
| Vector table | Identify reset, VBlank, timer interrupt handlers | Not started |
| BIOS interface | Map BIOS call conventions and system vectors | Not started |
| Core game loop | Recompile main loop, VBlank handler, state machine | Not started |
| Input handling | Steering, accelerate, brake, start/coin | Not started |
| Car physics | Acceleration, braking, drift mechanics, surface friction | Not started |
| Track rendering | Isometric tilemap, scrolling, camera follow | Not started |
| HUD | Timer, position, lap counter, speedometer | Not started |
| Car select | Vehicle selection screen, stat display | Not started |
| Stage progression | Stage loading, transitions, results screen | Not started |
| AI opponents | CPU car behavior and pathfinding | Not started |
| Audio commands | Engine sounds, skid effects, music cues | Not started |
| Attract mode | Title screen, demo play, rankings | Not started |
| Full playthrough | All 7 stages completable | Not started |

## Technical Notes

### What Makes This Interesting for Recomp

Neo Drift Out exercises the Neo Geo hardware differently than the typical fighting/action game:

- **Multi-directional scrolling**: Most Neo Geo games scroll horizontally. This game scrolls in all directions as the camera follows the car through corners, requiring more complex VRAM updates.
- **Pseudo-3D perspective**: The isometric viewpoint is achieved entirely with 2D sprites — there's no mode-7 or rotation hardware. The perspective is baked into the sprite art and selected via animation frames.
- **Physics simulation**: The 68000 handles real-time vehicle physics including momentum, drift angle, surface grip coefficients, and collision with track boundaries. This is atypical for Neo Geo games and will produce interesting recompiled code.
- **Fewer sprites, more updates**: Racing games tend to use fewer sprites than action games but update their positions more frequently. This may reveal different performance characteristics in the runtime.

### Visco Corporation

Visco was a smaller third-party Neo Geo developer, less well-known than SNK, Nazca, or ADK. Their Neo Geo catalog includes:
- **Andro Dunos** (1992) — horizontal shoot-em-up
- **Neo Drift Out** (1996) — this game
- **Bang Bead** (2000) — competitive ball game
- **Goal! Goal! Goal!** (1995) — soccer
- **Breakers / Breakers Revenge** (1996/1998) — fighting games
- **Captain Tomaday** (1999) — quirky shoot-em-up
- **Ganryu** (1999) — side-scrolling action
- **Flip Shot** (1998) — air hockey

They are an underappreciated part of Neo Geo history, and this project helps preserve one of their most distinctive titles.

## Legal Notice

This project contains no copyrighted game code or data. You must provide your own legally obtained ROM dump from a Neo Drift Out MVS cartridge that you own. The recompiled source code in this repository represents a transformative reimplementation of the game's logic.

## Related Projects

- [neogeorecomp](https://github.com/sp00nznet/neogeorecomp) — the Neo Geo hardware runtime this project depends on
- [Metal Slug recomp](https://github.com/sp00nznet/metalslug) — our other Neo Geo recomp target
- [genrecomp](https://github.com/sp00nznet/genrecomp) — Sega Genesis 68000 recompiler (sister project, same CPU)
- [ngdevkit](https://github.com/dciabrin/ngdevkit) — open-source Neo Geo development toolkit
- [N64Recomp](https://github.com/N64Recomp/N64Recomp) — the pioneering static recompiler for N64 games

## Community

- [Neo Geo Forever](https://neogeoforever.com) — forums and Discord
- [Neo-Geo.com Forums](https://www.neo-geo.com/forums/)
- [Neo Geo Dev Wiki](https://wiki.neogeodev.org)
- [Arcade-Projects](https://www.arcade-projects.com)

## License

MIT — see [LICENSE](LICENSE) for details.
