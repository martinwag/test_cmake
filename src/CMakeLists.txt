
## ----  components ---------------------------------------------------------------
set(drivers "drivers")
set(terminal "terminal")

set(drivers_lib ${drivers})
set(terminal_lib ${terminal})

set(headers_private "_headers_private") # internal headers, not used at the moment
set(headers_public "_headers_public")   # headers to package

## ----  package directories ------------------------------
set(ARCHIVE_INSTALL_DIR lib)
set(INCLUDE_INSTALL_DIR include)

## ---- Subdirectories  -----------------------------------------------------------
add_subdirectory(${drivers})
add_subdirectory(${terminal})

## ---- Targets -------------------------------------------------------------------
add_library(bsp ${object_libs})
install(TARGETS bsp DESTINATION ${ARCHIVE_INSTALL_DIR})




