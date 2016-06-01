
## ---- Sources -------------------------------------------------------------------
set(sources
          "uart.c"
)

## ---- Header includes -----------------------------------------------------------
set(headers
          "${CMAKE_CURRENT_SOURCE_DIR}/"
)
set(${drivers}${headers_public} ${headers} PARENT_SCOPE)

## ---- Targets -------------------------------------------------------------------
add_library(${drivers_lib} OBJECT ${sources})
target_include_directories(${drivers_lib} PRIVATE
                    ${headers}
                    #"../terminal/" #hack to get cross dependency solved
                    ${${terminal}${headers_private}}
                    ${${terminal}${headers_public}}
)

# Add to object targets list
set(object_libs ${object_libs} $<TARGET_OBJECTS:${drivers_lib}> PARENT_SCOPE)

install(DIRECTORY ${headers} DESTINATION ${INCLUDE_INSTALL_DIR} FILES_MATCHING PATTERN "*.h")

