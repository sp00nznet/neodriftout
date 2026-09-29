# Changelog

Format: [Keep a Changelog](https://keepachangelog.com/en/1.1.0/); versions follow SemVer.

## [Unreleased]

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
