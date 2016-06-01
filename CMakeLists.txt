## ----  CMake --------------------------------------------------------------------
project(bsp_stm32f303)
cmake_minimum_required(VERSION 2.8.8)

## ---- Build types----------------------------------------------------------------
## Check that a build type was choosen by user
if(CMAKE_BUILD_TYPE STREQUAL "")
  string(ASCII 27 Esc)
  set(yellow      "${Esc}[33m")
  set(color_reset "${Esc}[m")

  set(CMAKE_BUILD_TYPE  release)
  message(STATUS "${yellow}Build type not set. Default is \"${CMAKE_BUILD_TYPE}\"${color_reset}")
endif(CMAKE_BUILD_TYPE STREQUAL "")

## Build type config (this is only here for being able to modify build type in cache)
set(BUILD_TYPE ${CMAKE_BUILD_TYPE} CACHE STRING "Build type. May be Release|Debug|Test")
set(CMAKE_BUILD_TYPE "${BUILD_TYPE}" CACHE INTERNAL "Build type" FORCE)
message(STATUS "Build type: ${CMAKE_BUILD_TYPE}")
message(STATUS "System: ${CMAKE_SYSTEM_PROCESSOR}")

# Debug
set(CMAKE_C_FLAGS_DEBUG "-O0 -g -DDEBUG_ON")

# Release
set(CMAKE_C_FLAGS_RELEASE "-Os")

## ---- Clean ---------------------------------------------------------------------
add_custom_target(Mr-Proper
    COMMAND rm -r ${CMAKE_BINARY_DIR}/*
)

## ---- make package -----------------------------------------------------------
set(CPACK_GENERATOR "TBZ2")
include(CPack)

## ---- Subdirectories  -----------------------------------------------------------
add_subdirectory(src)

