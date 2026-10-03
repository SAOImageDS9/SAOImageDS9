# Driver for the roundtrip ctests: read a fixture, dump it straight back, and
# require the output to be byte-identical to the input.
#
# Reading and re-writing a dump is the identity, so any difference is a
# serialisation defect.  This is the only family that can see one: both simplify
# families call astSimplify after reading, and astSimplify re-sets IsSimple on
# every node it visits, hiding a record a loader dropped.
#
# Comment lines before the first "Begin" are dropped from both sides first.
# A fixture may carry a hand-written header saying what it is for -- see
# wcsconv/inputs/degen1.ast -- and that header is documentation for a reader,
# not part of the object.  A dump cannot reproduce it and should not have to,
# so requiring it would either delete useful prose or exclude the fixture.
# Nothing else is normalised: every line from the first Begin onwards, comments
# included, must match byte for byte.
#
# Required cache variables (via -D): ROUNDTRIP, IN_FILE, OUT_FILE

foreach(_req IN ITEMS ROUNDTRIP IN_FILE OUT_FILE)
    if(NOT DEFINED ${_req})
        message(FATAL_ERROR "run_roundtrip_test.cmake: ${_req} not set")
    endif()
endforeach()

execute_process(COMMAND "${ROUNDTRIP}" "${IN_FILE}" "${OUT_FILE}"
                RESULT_VARIABLE _rv)
if(NOT _rv EQUAL 0)
    message(FATAL_ERROR "roundtrip exited with code ${_rv} "
                        "(cmd: ${ROUNDTRIP} ${IN_FILE} ${OUT_FILE})")
endif()

# Drop the leading run of comment lines from a copy of each file.
#
# file(READ) and one regex, deliberately: file(STRINGS) drops blank lines, which
# would make a trailing-blank-line difference invisible -- and two fixtures in
# this corpus had exactly that defect.  Whatever a comparator normalises stops
# being testable, so this normalises the leading comment run and nothing else.
function(strip_leading_comments src dest)
    file(READ "${src}" _content)
    string(REGEX REPLACE "^(#[^\n]*\n)+" "" _content "${_content}")
    file(WRITE "${dest}" "${_content}")
endfunction()

strip_leading_comments("${IN_FILE}"  "${OUT_FILE}.ref.stripped")
strip_leading_comments("${OUT_FILE}" "${OUT_FILE}.out.stripped")

execute_process(COMMAND "${CMAKE_COMMAND}" -E compare_files
                        "${OUT_FILE}.ref.stripped" "${OUT_FILE}.out.stripped"
                RESULT_VARIABLE _rv)
if(NOT _rv EQUAL 0)
    message(STATUS "Round-trip mismatch; showing unified diff:")
    execute_process(COMMAND diff -u "${OUT_FILE}.ref.stripped"
                                    "${OUT_FILE}.out.stripped")
    message(FATAL_ERROR
        "reading ${IN_FILE} and writing it back did not reproduce it")
endif()
