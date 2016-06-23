cmake_minimum_required(VERSION 3.0)


## ----  build product ------------------------------------------------------------
set(product "bsp")

## ----  components ---------------------------------------------------------------
set(log "log")
set(drivers "drivers")
set(terminal "terminal")

## ----  package directories ------------------------------
set(ARCHIVE_INSTALL_DIR lib)
set(INCLUDE_INSTALL_DIR include)

## ---- Subdirectories  -----------------------------------------------------------
add_subdirectory(${log})
add_subdirectory(${drivers})
add_subdirectory(${terminal})

## ---- Targets -------------------------------------------------------------------
add_library(${product} INTERFACE)
target_link_libraries(${product} INTERFACE ${drivers} ${terminal})
install(TARGETS ${product} DESTINATION ${ARCHIVE_INSTALL_DIR})

## better to use export - if possible, it generates a .cmake-file, which can be
## included by cmake with all targets (especially bsp here) - setting libraries and include-dirs
##
## or if you need to combine the .a's use your platforms libtool.

#install(EXPORT ${product} DESTINATION .)





