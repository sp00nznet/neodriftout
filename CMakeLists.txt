cmake_minimum_required(VERSION 3.20)
project(neodriftout VERSION 0.1.0 LANGUAGES C)

set(CMAKE_C_STANDARD 17)
set(CMAKE_C_STANDARD_REQUIRED ON)

# neogeorecomp runtime (as a subdirectory or pre-built)
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/../neogeorecomp neogeorecomp_build)

# Game sources
set(GAME_SOURCES
    src/main.c
    # Recompiled function files will be added here as they are created:
    # recomp/vectors.c
    # recomp/main_loop.c
    # recomp/car_physics.c
    # recomp/track_render.c
    # recomp/hud.c
    # recomp/car_select.c
    # recomp/stage_mgr.c
    # recomp/ai.c
    # recomp/attract.c
    # recomp/audio_cmds.c
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
