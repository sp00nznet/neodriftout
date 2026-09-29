cmake_minimum_required(VERSION 3.21)
project(neodriftout VERSION 0.1.0 LANGUAGES C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

# The neogeorecomp toolkit: the submodule, or a checkout next to this repo.
if(EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/neogeorecomp/CMakeLists.txt)
    set(ng_default ${CMAKE_CURRENT_SOURCE_DIR}/neogeorecomp)
else()
    set(ng_default ${CMAKE_CURRENT_SOURCE_DIR}/../neogeorecomp)
endif()
set(NEOGEORECOMP_DIR ${ng_default} CACHE PATH "neogeorecomp checkout")
add_subdirectory(${NEOGEORECOMP_DIR} neogeorecomp_build)

# Your ROM files (MAME set "neodrift" plus the "neogeo" system ROMs, unzipped).
# Without it the player builds interpreter-only.
set(NEODRIFT_ROM_DIR "" CACHE PATH "Directory with your Neo Drift Out and Neo Geo BIOS ROM files")
# Optional: entry points a previous run found at runtime (--dump-misses).
set(NEODRIFT_ENTRIES "${CMAKE_BINARY_DIR}/entries.txt" CACHE FILEPATH "Extra entry points for the recompiler")


# Stage 1: the generator.
add_executable(neodrift_recomp src/recomp_main.c src/game.c)
target_link_libraries(neodrift_recomp PRIVATE m68krecomp_core)
target_include_directories(neodrift_recomp PRIVATE src)

# Stage 2: the player, with the generated C when ROMs are available.
set(GAME_SOURCES src/main.c)
set(GEN_DIR ${CMAKE_BINARY_DIR}/generated)
set(GEN_FILES 16)
if(NEODRIFT_ROM_DIR)
    set(GEN_SOURCES ${GEN_DIR}/recomp_table.c)
    math(EXPR last "${GEN_FILES} - 1")
    foreach(i RANGE ${last})
        if(i LESS 10)
            list(APPEND GEN_SOURCES ${GEN_DIR}/recomp_0${i}.c)
        else()
            list(APPEND GEN_SOURCES ${GEN_DIR}/recomp_${i}.c)
        endif()
    endforeach()
    # The entry list starts empty; the `profile` target fills it from a
    # scripted play session and the next build regenerates with it.
    if(NOT EXISTS ${NEODRIFT_ENTRIES})
        file(WRITE ${NEODRIFT_ENTRIES} "")
    endif()
    file(MAKE_DIRECTORY ${GEN_DIR})
    add_custom_command(
        OUTPUT ${GEN_SOURCES} ${GEN_DIR}/recomp_common.h
        COMMAND neodrift_recomp --rom-path ${NEODRIFT_ROM_DIR} --out ${GEN_DIR} --files ${GEN_FILES}
                --entries ${NEODRIFT_ENTRIES}
        DEPENDS neodrift_recomp ${NEODRIFT_ENTRIES}
        COMMENT "Recompiling Neo Drift Out from ${NEODRIFT_ROM_DIR}")
    list(APPEND GAME_SOURCES ${GEN_SOURCES})
endif()

add_executable(neodriftout ${GAME_SOURCES} src/game.c)
target_link_libraries(neodriftout PRIVATE neogeorecomp)
target_include_directories(neodriftout PRIVATE src ${GEN_DIR})
if(NEODRIFT_ROM_DIR)
    # Optional: play the soak script and record the entry points that only
    # show up at runtime (computed jumps into unrolled code), then rebuild.
    add_custom_target(profile
        COMMAND neodriftout --headless --rom-path ${NEODRIFT_ROM_DIR} --frames 8000 --dump-misses ${NEODRIFT_ENTRIES}
        COMMAND neodriftout --headless --rom-path ${NEODRIFT_ROM_DIR} --frames 21000
                --input ${CMAKE_CURRENT_SOURCE_DIR}/tests/play_long.txt --dump-misses ${NEODRIFT_ENTRIES}
        DEPENDS neodriftout
        COMMENT "Profiling a scripted session for runtime-only entry points")
    target_compile_definitions(neodriftout PRIVATE NEODRIFT_HAVE_RECOMP)
    if(MSVC)
        # Generated routines are large; /bigobj lifts the section limit.
        set_source_files_properties(${GEN_SOURCES} PROPERTIES COMPILE_OPTIONS "/bigobj")
    endif()
endif()
if(MSVC)
    target_compile_definitions(neodriftout PRIVATE _CRT_SECURE_NO_WARNINGS)
    target_compile_definitions(neodrift_recomp PRIVATE _CRT_SECURE_NO_WARNINGS)
endif()

# Ship the SDL2 DLL (when the window is built) next to the executable.
if(WIN32 AND TARGET SDL2::SDL2)
    add_custom_command(TARGET neodriftout POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_if_different $<TARGET_RUNTIME_DLLS:neodriftout> $<TARGET_FILE_DIR:neodriftout>
        COMMAND_EXPAND_LISTS)
endif()
