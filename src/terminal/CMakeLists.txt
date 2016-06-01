
## ---- Sources -------------------------------------------------------------------
set(sources
        "log.c"
)

## ---- Header includes -----------------------------------------------------------
set(headers
          "${CMAKE_CURRENT_SOURCE_DIR}/"
)
set(${terminal}${headers_public} ${headers} PARENT_SCOPE)

## ---- Targets -------------------------------------------------------------------
add_library(${terminal_lib} OBJECT ${sources})
target_include_directories(${terminal_lib} PRIVATE
                    ${headers}
                    ${${drivers}${headers_private}}
                    ${${drivers}${headers_public}}
)

# Add to object targets list
set(object_libs ${object_libs} $<TARGET_OBJECTS:${terminal_lib}> PARENT_SCOPE)

install(DIRECTORY ${headers} DESTINATION ${INCLUDE_INSTALL_DIR} FILES_MATCHING PATTERN "*.h")
