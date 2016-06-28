
execute_process(COMMAND sh -c "${CMAKE_AR} -rcT ${PRODUCT}.a *.a"
                WORKING_DIRECTORY ${CMAKE_INSTALL_PREFIX}/${ARCHIVE_INSTALL_DIR}
                OUTPUT_QUIET)
