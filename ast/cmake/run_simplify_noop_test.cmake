# Driver for ctest cases that assert astSimplify leaves a Mapping alone.
# A negative fixture is its own reference, so the simplified dump must match
# the input byte for byte apart from the IsSimp markers astSimplify stamps on
# every Mapping it has passed through.  astEqual alone cannot make this
# assertion: it compares meaning, so a structural rewrite that preserves the
# transformation (a SwitchMap normalised to non-inverted form, a series
# CmpMap re-associated) passes it while the fixture's premise has failed.
# Invoked via `cmake -P`.
#
# Required cache variables (supplied via -D):
#   SIMPLIFY  : absolute path to the simplify executable
#   IN_FILE   : input .map file, which is also the reference
#   OUT_FILE  : output file to produce

foreach(_req IN ITEMS SIMPLIFY IN_FILE OUT_FILE)
    if(NOT DEFINED ${_req})
        message(FATAL_ERROR "run_simplify_noop_test.cmake: ${_req} not set")
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

# Copy each file with the IsSimp lines removed, then compare the copies.
function(strip_issimp src dest)
    file(STRINGS "${src}" _lines)
    set(_kept "")
    foreach(_line IN LISTS _lines)
        if(NOT _line MATCHES "^[ \t]*IsSimp[ \t]*=")
            list(APPEND _kept "${_line}")
        endif()
    endforeach()
    string(REPLACE ";" "\n" _text "${_kept}")
    file(WRITE "${dest}" "${_text}\n")
endfunction()

strip_issimp("${IN_FILE}"  "${OUT_FILE}.ref.stripped")
strip_issimp("${OUT_FILE}" "${OUT_FILE}.out.stripped")

execute_process(
    COMMAND "${CMAKE_COMMAND}" -E compare_files
            "${OUT_FILE}.ref.stripped" "${OUT_FILE}.out.stripped"
    RESULT_VARIABLE _rv
)
if(NOT _rv EQUAL 0)
    message(STATUS "astSimplify changed a fixture that must be left alone; "
                   "showing unified diff (IsSimp lines removed):")
    execute_process(
        COMMAND diff -u "${OUT_FILE}.ref.stripped" "${OUT_FILE}.out.stripped"
    )
    message(FATAL_ERROR
        "simplify rewrote ${IN_FILE}; the fixture asserts it does not")
endif()
