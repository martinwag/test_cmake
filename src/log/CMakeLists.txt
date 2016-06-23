
## ---- Library name---------------------------------------------------------------
set(lib
    ${log}
)

## ---- Header includes -----------------------------------------------------------
set(headers
    .
)

## ---- Targets -------------------------------------------------------------------
add_library(${lib} INTERFACE)
target_include_directories(log INTERFACE ${headers})

install(DIRECTORY ${headers} DESTINATION ${INCLUDE_INSTALL_DIR} FILES_MATCHING PATTERN "*.h")


