## ---- Library name---------------------------------------------------------------
set(lib
    ${drivers}
)

## ---- Sources -------------------------------------------------------------------
set(sources
    uart.c
    log-via-uart.c
)

## ---- Header includes -----------------------------------------------------------
set(headers
    .
)

## ---- Link Dependencies ---------------------------------------------------------
set(link_dependencies
    ${log}
)

## ---- Targets -------------------------------------------------------------------
add_library(${lib} ${sources})
target_include_directories(${lib} PRIVATE ${headers})
target_link_libraries(${lib} PRIVATE ${link_dependencies})
install(TARGETS ${lib} DESTINATION ${ARCHIVE_INSTALL_DIR})

install(DIRECTORY ${headers} DESTINATION ${INCLUDE_INSTALL_DIR} FILES_MATCHING PATTERN "*.h")
