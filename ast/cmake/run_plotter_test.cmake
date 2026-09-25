# Driver script for ctest plotter smoke tests.  Invoked via `cmake -P`
# by add_plotter_test().
#
# Runs testplotter on a FITS header file and checks the exit code.
# No output comparison — this is a smoke test only (verifies astGrid
# does not crash on the given WCS).
#
# Required cache variables (supplied via -D):
#   TESTPLOTTER : absolute path to the testplotter executable
#   HEAD_FILE   : input .head file
#   ATTR        : Plot attributes string (or " " for none)
#   FATTR       : FitsChan attributes string (or " " for none)
#   OUT_FILE    : output file (PDF)
#
# Optional:
#   BOX         : graphics bounds "xlo ylo xhi yhi" (omit for auto)

foreach(_req IN ITEMS TESTPLOTTER HEAD_FILE ATTR FATTR OUT_FILE)
    if(NOT DEFINED ${_req})
        message(FATAL_ERROR "run_plotter_test.cmake: ${_req} not set")
    endif()
endforeach()

set(_cmd "${TESTPLOTTER}" "${HEAD_FILE}" "${ATTR}" "${FATTR}" "${OUT_FILE}")
if(DEFINED BOX AND NOT BOX STREQUAL "")
    separate_arguments(_box UNIX_COMMAND "${BOX}")
    list(APPEND _cmd ${_box})
endif()

execute_process(
    COMMAND ${_cmd}
    RESULT_VARIABLE _rv
)
if(NOT _rv EQUAL 0)
    message(FATAL_ERROR "testplotter exited with code ${_rv} "
                        "(cmd: ${_cmd})")
endif()
