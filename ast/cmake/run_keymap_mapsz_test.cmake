# Driver for the keymap_mapsz ctest: re-run the generator and require its output
# to be byte-identical to the committed fixture.
#
# fixtures/oracle/keymap_mapsz.txt records the MapSz card a freshly built KeyMap
# carries for a range of key populations.  MapSz is the size of the hash table
# and the only observable of the table's growth policy, because HashFun and
# DoubleTableSize are both static in keymap.c.  The fixture exists so a port can
# be held to that policy from outside; this test is what keeps the fixture
# honest, by checking it still describes this library.
#
# A byte comparison is right here.  Every value is an integer produced by
# integer arithmetic over ASCII keys, with no floating point anywhere, so unlike
# the transform oracles there is no platform variation to tolerate: a difference
# is a change in the growth policy, in HashFun, or in the dump.
#
# Required cache variables (via -D): GENERATOR, REF_FILE, OUT_FILE

foreach(_req IN ITEMS GENERATOR REF_FILE OUT_FILE)
    if(NOT DEFINED ${_req})
        message(FATAL_ERROR "run_keymap_mapsz_test.cmake: ${_req} not set")
    endif()
endforeach()

execute_process(COMMAND "${GENERATOR}"
                OUTPUT_FILE "${OUT_FILE}"
                RESULT_VARIABLE _rv)
if(NOT _rv EQUAL 0)
    message(FATAL_ERROR "gen_keymap_mapsz exited with code ${_rv}")
endif()

execute_process(COMMAND "${CMAKE_COMMAND}" -E compare_files
                        "${REF_FILE}" "${OUT_FILE}"
                RESULT_VARIABLE _rv)
if(NOT _rv EQUAL 0)
    message(STATUS "keymap_mapsz mismatch; showing unified diff:")
    execute_process(COMMAND diff -u "${REF_FILE}" "${OUT_FILE}")
    message(FATAL_ERROR
        "fixtures/oracle/keymap_mapsz.txt no longer describes this library. "
        "If KeyMap's growth policy or hash function changed deliberately, "
        "install the new output and regenerate any port that reads it; "
        "otherwise this is a defect in that change.")
endif()
