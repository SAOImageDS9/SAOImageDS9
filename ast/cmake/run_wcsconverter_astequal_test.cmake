# Driver for ctest cases that run wcsconverter and then use ast_astequal
# to verify the produced output is semantically equivalent to the
# committed reference (via astEqual).  Invoked via `cmake -P`.
#
# Required cache variables (supplied via -D):
#   WCSCONVERTER  : absolute path to the wcsconverter executable
#   AST_ASTEQUAL  : absolute path to the ast_astequal executable
#   IN_FILE       : input file (resolved against CWD)
#   REF_FILE      : reference file to astEqual against
#   OUT_FILE      : output file to produce
#   ENCODING      : encoding name, e.g. fits-wcs, native, ast, dss, ...
#   ATTRS         : attribute string, or "" for none

foreach(_req IN ITEMS WCSCONVERTER AST_ASTEQUAL IN_FILE REF_FILE OUT_FILE ENCODING)
    if(NOT DEFINED ${_req})
        message(FATAL_ERROR "run_wcsconverter_astequal_test.cmake: ${_req} not set")
    endif()
endforeach()

if(NOT DEFINED ATTRS)
    set(ATTRS "")
endif()

set(_cmd "${WCSCONVERTER}" "${IN_FILE}" "${ENCODING}" "${OUT_FILE}")
if(NOT ATTRS STREQUAL "")
    list(APPEND _cmd "${ATTRS}")
endif()

execute_process(
    COMMAND ${_cmd}
    RESULT_VARIABLE _rv
)
if(NOT _rv EQUAL 0)
    message(FATAL_ERROR "wcsconverter exited with code ${_rv} "
                        "(cmd: ${_cmd})")
endif()

set(_compare_cmd "${AST_ASTEQUAL}" "${REF_FILE}" "${OUT_FILE}" "${ENCODING}")
if(NOT ATTRS STREQUAL "")
    list(APPEND _compare_cmd "${ATTRS}")
endif()

execute_process(
    COMMAND ${_compare_cmd}
    RESULT_VARIABLE _rv
)
if(NOT _rv EQUAL 0)
    message(FATAL_ERROR "ast_astequal reported ref != out for "
                        "${OUT_FILE} vs ${REF_FILE} (exit ${_rv})")
endif()
