# Driver script for ctest cases that run wcsconverter and diff its output
# against a reference file.  Invoked via `cmake -P` by add_wcsconv_test().
#
# Required cache variables (supplied via -D):
#   WCSCONVERTER : absolute path to the wcsconverter executable
#   IN_FILE      : input file (resolved against CWD, i.e. the test working directory)
#   REF_FILE     : reference file to diff against
#   OUT_FILE     : output file to produce (deleted first by wcsconverter)
#   ENCODING     : encoding name, e.g. fits-wcs, native, ast, dss, ...
#   COMPARE      : absolute path to the compare_dumps executable
#   ATTRS        : attribute string, or "" for none
# Optional:
#   TOLERANCE    : "astequal" to widen the numeric tolerance from 4 ULP to AST's
#                  own astEQUAL, for a value amplified by cancellation.

foreach(_req IN ITEMS WCSCONVERTER COMPARE IN_FILE REF_FILE OUT_FILE ENCODING)
    if(NOT DEFINED ${_req})
        message(FATAL_ERROR "run_wcsconverter_test.cmake: ${_req} not set")
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

# compare_dumps rather than a byte comparison.  These references are captured on
# one platform and replayed on others, where trig and matrix values differ in the
# last digit or two; a byte comparison forces such a case to opt out of string
# comparison altogether, and then nothing checks the rest of its keywords either.
set(_tol "")
if(DEFINED TOLERANCE AND TOLERANCE STREQUAL "astequal")
    set(_tol "--astequal")
endif()
execute_process(
    COMMAND "${COMPARE}" ${_tol} "${REF_FILE}" "${OUT_FILE}"
    RESULT_VARIABLE _rv
)
if(NOT _rv EQUAL 0)
    message(STATUS "Output mismatch; showing unified diff:")
    execute_process(
        COMMAND diff -u "${REF_FILE}" "${OUT_FILE}"
    )
    message(FATAL_ERROR
        "wcsconverter output ${OUT_FILE} differs from reference ${REF_FILE}")
endif()
