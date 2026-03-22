cmake_minimum_required(VERSION 3.20)
project(neodriftout VERSION 0.1.0 LANGUAGES C)

set(CMAKE_C_STANDARD 17)
set(CMAKE_C_STANDARD_REQUIRED ON)

# neogeorecomp runtime (as a subdirectory or pre-built)
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/../neogeorecomp neogeorecomp_build)

# Game sources
# Collect auto-generated recompiled sources (6,475 functions across 130 files)
file(GLOB AUTORECOMP_SOURCES "src/autorecomp/recomp_*.c")

# Hand-written overrides for functions the auto-generator splits incorrectly
set(HANDWRITTEN_SOURCES
    recomp/init.c
    recomp/overrides.c
)

set(GAME_SOURCES
    src/main.c
    ${AUTORECOMP_SOURCES}
    ${HANDWRITTEN_SOURCES}
)

add_executable(neodriftout ${GAME_SOURCES})

target_link_libraries(neodriftout PRIVATE neogeorecomp)

target_include_directories(neodriftout PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/src
)

# Copy SDL2 DLL on Windows (only if SDL2::SDL2 imported target exists)
if(WIN32 AND TARGET SDL2::SDL2)
    add_custom_command(TARGET neodriftout POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_if_different
            $<TARGET_FILE:SDL2::SDL2>
            $<TARGET_FILE_DIR:neodriftout>
    )
endif()
