## ---- Sources -------------------------------------------------------------------
set(sources
)

## ---- Targets -------------------------------------------------------------------
add_library(terminal
    terminal.c
)
target_include_directories(terminal PRIVATE .)
target_link_libraries(terminal PRIVATE log)

install(DIRECTORY . DESTINATION ${INCLUDE_INSTALL_DIR} FILES_MATCHING PATTERN "*.h")
