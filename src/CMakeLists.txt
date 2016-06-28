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

# Workaround for the lack of post_install steps. stackoverflow.com/questions/9998679
# we HAVE to include a subdir to have install(SCRIPT...) evaluated last. We also have
# to use a SCRIPT instead of CODE because SCRIPT is evaluated at cpack time.

# Make sure this is the LAST directory added.
add_subdirectory(../buildsupport/postinstall postinstall_bin)
# Add any variables you need during post install.
install (CODE "set(ARCHIVE_INSTALL_DIR \"${ARCHIVE_INSTALL_DIR}\")")
install (CODE "set(PRODUCT \"lib${product}\")")
install (CODE "set(CMAKE_AR \"${CMAKE_AR}\")")

