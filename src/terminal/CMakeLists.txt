
## ---- Library name---------------------------------------------------------------
set(lib
    ${terminal}
)

## ---- Sources -------------------------------------------------------------------
set(sources
    terminal.c
)

## ---- Header includes -----------------------------------------------------------
set(headers
#    "${CMAKE_CURRENT_SOURCE_DIR}/" todo geht . ?
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

install(DIRECTORY ${headers} DESTINATION ${INCLUDE_INSTALL_DIR} FILES_MATCHING PATTERN "*.h")
