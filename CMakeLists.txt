cmake_minimum_required(VERSION 3.20)
project(neodriftout VERSION 0.1.0 LANGUAGES C)

set(CMAKE_C_STANDARD 17)
set(CMAKE_C_STANDARD_REQUIRED ON)

# neogeorecomp runtime (as a subdirectory or pre-built)
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/../neogeorecomp neogeorecomp_build)

# Game sources
set(GAME_SOURCES
    src/main.c
    recomp/vectors.c
    recomp/main_loop.c
    recomp/states.c
    recomp/vram_dma.c
    recomp/subsystems.c
    recomp/init.c
    recomp/helpers.c
    recomp/gameplay.c
    # More recompiled function files as disassembly progresses:
    # recomp/gameplay.c       — main gameplay dispatcher ($000B34) and sub-states
    # recomp/car_physics.c    — vehicle physics, drift mechanics
    # recomp/track_render.c   — isometric track rendering, scrolling
    # recomp/hud.c            — HUD, timer, speedometer
    # recomp/car_select.c     — car selection screen
    # recomp/vram_dma.c       — VRAM/palette/sprite upload routines
    # recomp/audio_cmds.c     — Z80 sound command interface
    # recomp/subsystems.c     — palette prep, sprite prep, misc
)

add_executable(neodriftout ${GAME_SOURCES})

target_link_libraries(neodriftout PRIVATE neogeorecomp)

target_include_directories(neodriftout PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/src
)

# Copy SDL2 DLL on Windows
if(WIN32)
    add_custom_command(TARGET neodriftout POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_if_different
            $<TARGET_FILE:SDL2::SDL2>
            $<TARGET_FILE_DIR:neodriftout>
    )
endif()
