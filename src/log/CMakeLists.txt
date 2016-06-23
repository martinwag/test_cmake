add_library(log INTERFACE)
target_include_directories(log INTERFACE .)

install(DIRECTORY . DESTINATION ${INCLUDE_INSTALL_DIR} FILES_MATCHING PATTERN "*.h")
