# Driver script for ctest cases that run the simplify tool and diff its
# output against a reference file.  Invoked via `cmake -P` by
# add_simplify_test().
#
# Required cache variables (supplied via -D):
#   SIMPLIFY  : absolute path to the simplify executable
#   IN_FILE   : input .map file (resolved against CWD)
#   REF_FILE  : reference .simp file to diff against
#   COMPARE   : absolute path to the compare_dumps executable
#   OUT_FILE  : output file to produce
# Optional:
#   TOLERANCE : "astequal" to widen the numeric tolerance from 4 ULP to AST's
#               own astEQUAL, for a value amplified by cancellation.

foreach(_req IN ITEMS SIMPLIFY COMPARE IN_FILE REF_FILE OUT_FILE)
    if(NOT DEFINED ${_req})
        message(FATAL_ERROR "run_simplify_test.cmake: ${_req} not set")
    endif()
endforeach()

execute_process(
    COMMAND "${SIMPLIFY}" "${IN_FILE}" "${OUT_FILE}"
    RESULT_VARIABLE _rv
)
if(NOT _rv EQUAL 0)
    message(FATAL_ERROR "simplify exited with code ${_rv} "
                        "(cmd: ${SIMPLIFY} ${IN_FILE} ${OUT_FILE})")
endif()

# compare_dumps rather than a byte comparison: a dump whose trig values differ in
# the last bits between platforms would otherwise have to opt out of string
# comparison altogether, and then nothing checks the rest of its several hundred
# lines either.
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
        "simplify output ${OUT_FILE} differs from reference ${REF_FILE}")
endif()
