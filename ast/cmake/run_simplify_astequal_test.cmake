# Driver for ctest cases that run simplify and then use ast_astequal
# to verify the produced output is semantically equivalent to the
# committed reference (via astEqual).  Invoked via `cmake -P`.
#
# Required cache variables (supplied via -D):
#   SIMPLIFY      : absolute path to the simplify executable
#   AST_ASTEQUAL  : absolute path to the ast_astequal executable
#   IN_FILE       : input .map file (resolved against CWD)
#   REF_FILE      : reference .simp file to compare against
#   OUT_FILE      : output file to produce

foreach(_req IN ITEMS SIMPLIFY AST_ASTEQUAL IN_FILE REF_FILE OUT_FILE)
    if(NOT DEFINED ${_req})
        message(FATAL_ERROR "run_simplify_astequal_test.cmake: ${_req} not set")
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

execute_process(
    COMMAND "${AST_ASTEQUAL}" "${REF_FILE}" "${OUT_FILE}" "ast"
    RESULT_VARIABLE _rv
)
if(NOT _rv EQUAL 0)
    message(FATAL_ERROR "ast_astequal reported ref != out for "
                        "${OUT_FILE} vs ${REF_FILE} (exit ${_rv})")
endif()
