# Changelog

Format: [Keep a Changelog](https://keepachangelog.com/en/1.1.0/); versions follow SemVer.

## [Unreleased]

## [0.2.0] - 2026-10-20

### Added
- **Gamepads**: the toolkit is pinned at neogeorecomp v0.2.0 (af96b2b), which reads up to two SDL2 gamepads as players 1 and 2 (neogeorecomp #6).
- **Sound**: the toolkit is pinned at neogeorecomp #3 (YM2610 synthesis through ymfm). The window plays it, `--wav FILE` writes it, `--mute` silences it. The build now enables C++ for ymfm, and `setup.sh` checks for g++.
- CI: builds the interpreter-only player on Ubuntu, Windows and macOS on every push and PR.
- **Installer** (recomp-launcher): `launcher/launcher.json` and the `installer` workflow build Neo-Drift-Out-Installer for Windows, Linux and macOS on every push; a `v*` tag attaches them to the release.
- `setup.sh` runs on macOS (Homebrew), and both setup scripts print `[n/N]` steps for the installer's progress bar. On Windows, installing Git or CMake no longer stops setup for a rerun.

### Changed
- Ported to the generic neogeorecomp runtime (neogeorecomp #1). The game boots through the real MVS BIOS and races on recompiled 68000 code; the repo holds only the ROM layout and test scripts.

### Added
- `neodrift_recomp` generator (`NEODRIFT_ROM_DIR`), `profile` target, `tests/coin_start.txt` and `tests/play_long.txt`.
- `Setup.cmd` / `setup.sh` quick start, neogeorecomp as a submodule, `toolkit.ref`.
- README with Getting Started and screenshots; `docs/game-notes.md`.

### Removed
- The hand-lifted routines, the generated `src/autorecomp`, the old Python generator, and the per-game runtime overrides (forced palettes, forced shrink, BIOS state pokes).
- ROM files, generated code and build output from the repository history (rewritten 2026-09-29).

## [0.1.0]
- Title screen and first track graphics on the old title-specific runtime.
