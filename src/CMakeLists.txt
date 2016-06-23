cmake_minimum_required(VERSION 3.1)

## ----  package directories ------------------------------
set(ARCHIVE_INSTALL_DIR lib)
set(INCLUDE_INSTALL_DIR include)

## ---- Subdirectories  -----------------------------------------------------------
add_subdirectory(log)
add_subdirectory(drivers)
add_subdirectory(terminal)

## ---- Targets -------------------------------------------------------------------
add_library(bsp INTERFACE)
target_link_libraries(bsp INTERFACE drivers terminal)

## select uart to be used
set(UART_TO_USE 1 CACHE STRING "Uart to be used for debug-logging")
target_link_libraries(bsp INTERFACE uart-logging${UART_TO_USE})

## better to use export - if possible, it generates a .cmake-file, which can be
## included by cmake with all targets (especially bsp here) - setting libraries and include-dirs
##
## or if you need to combine the .a's use your platforms libtool.

install(TARGETS bsp DESTINATION ${ARCHIVE_INSTALL_DIR})






