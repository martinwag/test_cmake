## ---- Targets -------------------------------------------------------------------
add_library(drivers
    uart.c
)

target_include_directories(drivers PRIVATE .)
target_link_libraries(drivers PRIVATE log)

add_library(uart-logging1 log-via-uart.c)
target_link_libraries(uart-logging1
    PRIVATE driver log)
target_compile_definitions(uart-logging1 PRIVATE USE_UART=1)

add_library(uart-logging2 log-via-uart.c)
target_link_libraries(uart-logging2
    PRIVATE driver log)
target_compile_definitions(uart-logging2 PRIVATE USE_UART=2)

install(DIRECTORY . DESTINATION ${INCLUDE_INSTALL_DIR} FILES_MATCHING PATTERN "*.h")

