# Test programs from the ast_tester directory.
#
# These are the existing C test programs, plus Fortran tests that have
# been converted to C.  All tests use CTest and do not require any
# Starlink infrastructure.
include(CheckCSourceRuns)

# Ensure test executables find the locally-built libast before any
# system-installed version (e.g. from a conda environment whose lib
# directory may be injected into RPATH by the compiler toolchain via
# $LDFLAGS, and the --disable-new-dtags flag forces RPATH which is
# searched before LD_LIBRARY_PATH).  Prepending -rpath for the build
# directory puts it first in the RPATH list.
#
# This is an ELF RPATH-precedence workaround and only applies to GNU ld.
if(NOT APPLE)
    set(CMAKE_EXE_LINKER_FLAGS
        "-Wl,-rpath,${CMAKE_BINARY_DIR} ${CMAKE_EXE_LINKER_FLAGS}")
endif()

# Common include directories for all tests
set(TEST_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/.."          # top-level (pal2ast.h etc.)
    "${CMAKE_CURRENT_SOURCE_DIR}/../src"      # internal headers
    "${CMAKE_CURRENT_SOURCE_DIR}/../wcslib"   # wcslib headers
    "${CMAKE_BINARY_DIR}"                     # generated ast.h, ast_err.h, config.h
    "${CMAKE_BINARY_DIR}/src"                 # generated version.h, object.h
    "${CMAKE_CURRENT_SOURCE_DIR}/star_compat" # Starlink compatibility stubs
)

# Common link libraries for all tests.
# The satellite libraries (ast_err, ast_grf_*) are static archives whose
# symbols are referenced by libast at runtime (via -undefined dynamic_lookup
# on macOS).  We must force them into the executable with whole-archive
# linkage, otherwise the linker drops the unreferenced archive members and
# libast crashes on null function pointers at runtime.
set(TEST_LIBS
    ast
    $<LINK_LIBRARY:WHOLE_ARCHIVE,ast_err>
    $<LINK_LIBRARY:WHOLE_ARCHIVE,ast_grf_2.0>
    $<LINK_LIBRARY:WHOLE_ARCHIVE,ast_grf_3.2>
    $<LINK_LIBRARY:WHOLE_ARCHIVE,ast_grf_5.6>
    $<LINK_LIBRARY:WHOLE_ARCHIVE,ast_grf3d>
    m
)

# All committed test data lives below a single fixture root.  Stage every
# fixture at the same relative path below the build-tree ast_tester directory
# so source-tree and CTest runs use the same "fixtures/<relative-path>"
# convention.
set(AST_FIXTURE_SOURCE_ROOT "${CMAKE_CURRENT_SOURCE_DIR}/fixtures")
set(AST_FIXTURE_BINARY_ROOT "${CMAKE_CURRENT_BINARY_DIR}/fixtures")

# The distribution tier, written into a tarball by the dist hook and absent from
# a git checkout.  It is what lets a missing fixture be read as a deliberate
# omission rather than as a typo in a manifest.
set(AST_DIST_TIER "")
if(EXISTS "${AST_FIXTURE_SOURCE_ROOT}/DIST_TIER")
    file(READ "${AST_FIXTURE_SOURCE_ROOT}/DIST_TIER" AST_DIST_TIER)
    string(STRIP "${AST_DIST_TIER}" AST_DIST_TIER)
endif()

# A cut-down distribution without its manifest cannot distinguish a fixture left
# out on purpose from one that went missing, so every omission would look
# deliberate and the packaging check would quietly stop working.  Refuse instead.
if(AST_DIST_TIER STREQUAL "cutdown" AND
   NOT EXISTS "${AST_FIXTURE_SOURCE_ROOT}/DIST_MANIFEST")
    message(FATAL_ERROR
        "fixtures/DIST_TIER says cutdown but fixtures/DIST_MANIFEST is missing; "
        "this distribution is malformed")
endif()

# The default tier's keep-set.  Comments and blank lines are dropped.
set(AST_DIST_MANIFEST_PATTERNS "")
if(EXISTS "${AST_FIXTURE_SOURCE_ROOT}/DIST_MANIFEST")
    file(STRINGS "${AST_FIXTURE_SOURCE_ROOT}/DIST_MANIFEST" _dm_lines)
    foreach(_line IN LISTS _dm_lines)
        string(STRIP "${_line}" _line)
        if(NOT _line STREQUAL "" AND NOT _line MATCHES "^#")
            list(APPEND AST_DIST_MANIFEST_PATTERNS "${_line}")
        endif()
    endforeach()
endif()

# Copy the whole tree in one build-time rule rather than one configure_file()
# per fixture: a configure_file() would make every one of the ~1200 fixtures a
# configure dependency, so regenerating a single .oracle would reconfigure the
# project.  The stamp file keeps the copy off the critical path of an
# unchanged build.  Adding or removing a fixture changes the glob and so does
# reconfigure, which is wanted -- a new fixture normally needs a new test
# registered as well.
file(GLOB_RECURSE _ast_fixture_files CONFIGURE_DEPENDS
     RELATIVE "${AST_FIXTURE_SOURCE_ROOT}"
     "${AST_FIXTURE_SOURCE_ROOT}/*")
set(_ast_fixture_deps)
foreach(_fixture IN LISTS _ast_fixture_files)
    list(APPEND _ast_fixture_deps "${AST_FIXTURE_SOURCE_ROOT}/${_fixture}")
endforeach()

set(_ast_fixture_stamp "${CMAKE_CURRENT_BINARY_DIR}/fixtures.stamp")
add_custom_command(OUTPUT "${_ast_fixture_stamp}"
    COMMAND "${CMAKE_COMMAND}" -E copy_directory
            "${AST_FIXTURE_SOURCE_ROOT}" "${AST_FIXTURE_BINARY_ROOT}"
    COMMAND "${CMAKE_COMMAND}" -E touch "${_ast_fixture_stamp}"
    DEPENDS ${_ast_fixture_deps}
    COMMENT "Staging ast_tester fixtures"
    VERBATIM)
add_custom_target(ast_stage_fixtures ALL DEPENDS "${_ast_fixture_stamp}")

# Fail at configure time, naming the manifest, when a registered fixture path
# does not exist.  The per-test configure_file() calls that used to build
# these paths gave this check as a side effect; without it a typo in a
# cases.txt surfaces only as a harness failure part-way through a ctest run,
# with nothing to say the file was never there.
# TRUE in out_var when "relative_path" matches a DIST_MANIFEST entry.  A pattern
# ending in "/" is a directory prefix; anything else is a glob in which "*" does
# not cross a "/".
function(ast_manifest_covers relative_path out_var)
    foreach(_pat IN LISTS AST_DIST_MANIFEST_PATTERNS)
        if(_pat MATCHES "/$")
            string(LENGTH "${_pat}" _n)
            string(LENGTH "${relative_path}" _rn)
            if(NOT _rn LESS _n)
                string(SUBSTRING "${relative_path}" 0 ${_n} _head)
                if(_head STREQUAL "${_pat}")
                    set(${out_var} TRUE PARENT_SCOPE)
                    return()
                endif()
            endif()
        else()
            string(REPLACE "." "\\." _re "${_pat}")
            string(REPLACE "*" "[^/]*" _re "${_re}")
            if(relative_path MATCHES "^${_re}$")
                set(${out_var} TRUE PARENT_SCOPE)
                return()
            endif()
        endif()
    endforeach()
    set(${out_var} FALSE PARENT_SCOPE)
endfunction()

# Classify a fixture named by a manifest.  Sets out_var TRUE when it is present,
# FALSE when it was deliberately left out of a cut-down distribution, and fails
# the configure otherwise.
#
# The FATAL_ERROR cases matter as much as the skip.  A typo in a cases.txt used
# to surface only as a harness failure part-way through a ctest run, with
# nothing to say the file was never there, and a git checkout -- where typos are
# actually introduced -- keeps exactly that strictness.  A fixture the manifest
# says should have shipped but did not is a packaging defect and is likewise
# fatal, so the relaxation covers only files the manifest agrees are absent on
# purpose.
function(ast_fixture_status manifest relative_path out_var)
    if(EXISTS "${AST_FIXTURE_SOURCE_ROOT}/${relative_path}")
        set(${out_var} TRUE PARENT_SCOPE)
        return()
    endif()
    if(NOT AST_DIST_TIER STREQUAL "cutdown")
        message(FATAL_ERROR
            "${manifest}: no such fixture: fixtures/${relative_path}")
    endif()
    ast_manifest_covers("${relative_path}" _covered)
    if(_covered)
        message(FATAL_ERROR
            "${manifest}: fixtures/${relative_path} matches a DIST_MANIFEST "
            "entry but is missing from this distribution")
    endif()
    set(${out_var} FALSE PARENT_SCOPE)
endfunction()

# Retained for call sites that cannot yet skip.
function(ast_require_fixture manifest relative_path)
    ast_fixture_status("${manifest}" "${relative_path}" _ok)
    if(NOT _ok)
        message(FATAL_ERROR
            "${manifest}: fixtures/${relative_path} is not distributed, and "
            "this call site cannot skip")
    endif()
endfunction()

# Register a test that cannot run because its fixture is not distributed.
#
# DISABLED rather than SKIP_RETURN_CODE: the latter needs the test to run and
# return the code, which a test with no input cannot do without a stub program.
# ctest names a disabled test under "the following tests did not run", so the
# count stays visible instead of the suite silently shrinking.
function(ast_add_skipped_test name)
    add_test(NAME ${name} COMMAND "${CMAKE_COMMAND}" -E true)
    set_tests_properties(${name} PROPERTIES DISABLED TRUE)
    get_property(_n GLOBAL PROPERTY AST_SKIPPED_TEST_COUNT)
    if(NOT _n)
        set(_n 0)
    endif()
    math(EXPR _n "${_n} + 1")
    set_property(GLOBAL PROPERTY AST_SKIPPED_TEST_COUNT ${_n})
endfunction()

# Helper function to add a test executable
function(ast_add_test name)
    cmake_parse_arguments(T "INTERNAL_HEADERS;NO_DEFAULT_GRF_LIBS" "" "SOURCES;EXTRA_LIBS;TEST_ARGS" ${ARGN})
    if(NOT T_SOURCES)
        set(T_SOURCES ${name}.c)
    endif()
    add_executable(${name} ${T_SOURCES})
    target_include_directories(${name} PRIVATE ${TEST_INCLUDES})
    
    if(T_NO_DEFAULT_GRF_LIBS)
        set(TARGET_LIBS ast $<LINK_LIBRARY:WHOLE_ARCHIVE,ast_err> ${T_EXTRA_LIBS} m)
    else()
        set(TARGET_LIBS ${TEST_LIBS} ${T_EXTRA_LIBS})
    endif()
    
    target_link_libraries(${name} PRIVATE ${TARGET_LIBS})
    target_compile_definitions(${name} PRIVATE HAVE_CONFIG_H)
    # A test that reaches the protected Mapping flags through the internal
    # headers must see the same AstObject / AstMapping layout the library was
    # compiled with -- otherwise the flag macros read and write at the wrong
    # offset.
    if(T_INTERNAL_HEADERS AND HAVE_PTHREADS)
        target_compile_definitions(${name} PRIVATE THREAD_SAFE)
    endif()
    ast_apply_dev_options(${name})
    # So that building a single test target also stages the fixtures it reads.
    add_dependencies(${name} ast_stage_fixtures)
    add_test(NAME ${name} COMMAND ${name} ${T_TEST_ARGS}
             WORKING_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}")

    set(test_env "")
    # AST's memory system intentionally caches freed blocks for reuse,
    # so LeakSanitizer reports false positives. Disable leak detection.
    if(AST_ENABLE_SANITIZERS)
        list(APPEND test_env "ASAN_OPTIONS=detect_leaks=0")
    endif()

    # Tests locate their input fixture files relative to $srcdir, so point it
    # at the source directory where those fixtures live.
    list(APPEND test_env "srcdir=${CMAKE_CURRENT_SOURCE_DIR}")

    set_tests_properties(${name} PROPERTIES
        ENVIRONMENT "${test_env}")
endfunction()

# Read a pipe-delimited text file into a list of encoded records.
# Skips blank lines and lines starting with #.
# Each element of <out_var> is a pipe-separated string of stripped fields.
function(ast_read_test_data file out_var nfields)
    file(STRINGS "${file}" _raw_lines)
    set(_result)
    foreach(_line IN LISTS _raw_lines)
        string(STRIP "${_line}" _line)
        if(_line STREQUAL "" OR _line MATCHES "^#")
            continue()
        endif()
        string(REPLACE "|" ";" _fields "${_line}")
        list(LENGTH _fields _nf)
        if(NOT _nf EQUAL ${nfields})
            message(FATAL_ERROR
                "${file}: expected ${nfields} fields, got ${_nf} in: ${_line}")
        endif()
        set(_stripped)
        foreach(_f IN LISTS _fields)
            string(STRIP "${_f}" _f)
            list(APPEND _stripped "${_f}")
        endforeach()
        string(REPLACE ";" "|" _encoded "${_stripped}")
        list(APPEND _result "${_encoded}")
    endforeach()
    set(${out_var} "${_result}" PARENT_SCOPE)
endfunction()

# --- Tests using public API only ---
ast_add_test(testerror)
ast_add_test(testobject)
ast_add_test(testconvert)

# --- Transform output oracle ---
ast_add_test(test_oracle_util SOURCES test_oracle_util.c transform_oracle_util.c)
set_target_properties(test_oracle_util PROPERTIES C_STANDARD 11)
# Append so we keep the ASAN_OPTIONS=detect_leaks=0 that ast_add_test sets
# under sanitizer builds, rather than replacing it.
set_property(TEST test_oracle_util APPEND PROPERTY
    ENVIRONMENT "ORACLE_TEST_ROOT=${AST_FIXTURE_BINARY_ROOT}")

add_executable(gen_transform_oracle gen_transform_oracle.c transform_oracle_util.c)
target_include_directories(gen_transform_oracle PRIVATE ${TEST_INCLUDES})
target_link_libraries(gen_transform_oracle PRIVATE ${TEST_LIBS})
target_compile_definitions(gen_transform_oracle PRIVATE HAVE_CONFIG_H)
set_target_properties(gen_transform_oracle PROPERTIES C_STANDARD 11)
ast_apply_dev_options(gen_transform_oracle)

add_executable(check_transform_oracle check_transform_oracle.c transform_oracle_util.c)
target_include_directories(check_transform_oracle PRIVATE ${TEST_INCLUDES})
target_link_libraries(check_transform_oracle PRIVATE ${TEST_LIBS})
target_compile_definitions(check_transform_oracle PRIVATE HAVE_CONFIG_H)
set_target_properties(check_transform_oracle PROPERTIES C_STANDARD 11)
ast_apply_dev_options(check_transform_oracle)

add_test(NAME transform_oracle_selftest
         COMMAND check_transform_oracle --selftest)
set(_oracle_overrides
    "${AST_FIXTURE_BINARY_ROOT}/oracle/transform_oracle_overrides.txt")
# Each oracle is gated on its own file: the default distribution carries the
# header oracle and not the other two.  Gated through ast_fixture_status rather
# than a bare EXISTS so that headers.oracle, which DIST_MANIFEST does ship, is a
# packaging defect when missing rather than a silent skip.
#
# The file name and the test name differ for one of them: the oracle file is
# simplify_fixtures.oracle but the test has always been transform_oracle_simplify.
foreach(_orc simplify_fixtures headers framesets)
    if(_orc STREQUAL "simplify_fixtures")
        set(_tname "simplify")
    else()
        set(_tname "${_orc}")
    endif()
    ast_fixture_status("oracle" "oracle/${_orc}.oracle" _orc_ok)
    if(_orc_ok)
        add_test(NAME transform_oracle_${_tname}
                 COMMAND check_transform_oracle
                         "${AST_FIXTURE_BINARY_ROOT}"
                         "${AST_FIXTURE_BINARY_ROOT}/oracle/${_orc}.oracle"
                         "${_oracle_overrides}")
        if(AST_ENABLE_SANITIZERS)
            set_tests_properties(transform_oracle_${_tname} PROPERTIES
                ENVIRONMENT "ASAN_OPTIONS=detect_leaks=0")
        endif()
    else()
        ast_add_skipped_test(transform_oracle_${_tname})
    endif()
endforeach()

# --- Tests using internal headers (#define astCLASS) ---
ast_add_test(testresimp INTERNAL_HEADERS)
ast_add_test(testissimp INTERNAL_HEADERS)

# --- Tests needing SAE_PAR stub ---
ast_add_test(testaxis)
ast_add_test(testframe)
ast_add_test(testunitnorm)
ast_add_test(testobjectkeymap)

# --- Tests needing data files ---
ast_add_test(testsplinemap_c)

# --- Conditional tests ---
# --- Fortran tests converted to C (Batch 1) ---
ast_add_test(testzoommap_c    SOURCES testzoommap.c)
ast_add_test(testimmutable)
ast_add_test(testnormmap_c    SOURCES testnormmap.c)
ast_add_test(testmapping_c    SOURCES testmapping.c)
ast_add_test(testskyframe_c   SOURCES testskyframe.c)
ast_add_test(testcmpframe_c   SOURCES testcmpframe.c)
ast_add_test(testlutmap_c     SOURCES testlutmap.c)
ast_add_test(testratemap_c    SOURCES testratemap.c)
ast_add_test(testchannel_c    SOURCES testchannel.c)

# --- Fortran tests converted to C (Batch 2) ---
ast_add_test(testrate_c       SOURCES testrate.c)
ast_add_test(testspecframe_c  SOURCES testspecframe.c)
ast_add_test(testflux_c       SOURCES testflux.c)
ast_add_test(testspecflux_c   SOURCES testspecflux.c)
ast_add_test(testcmpmap_c     SOURCES testcmpmap.c)
ast_add_test(testpolymap_c    SOURCES testpolymap.c)
ast_add_test(testchebymap_c   SOURCES testchebymap.c)
ast_add_test(testunitnormmap_c SOURCES testunitnormmap.c)
ast_add_test(testtrangrid_c   SOURCES testtrangrid.c)
ast_add_test(testmoc_c        SOURCES testmoc.c)
ast_add_test(testfitstable_c  SOURCES testfitstable.c)
ast_add_test(testframeset_c   SOURCES testframeset.c)
ast_add_test(testswitchmap_c  SOURCES testswitchmap.c)
ast_add_test(testtime_c       SOURCES testtime.c)
ast_add_test(testkeymap_c     SOURCES testkeymap.c)
ast_add_test(testmocchan_c    SOURCES testmocchan.c)
ast_add_test(testxmlchan_c SOURCES testxmlchan.c)
ast_add_test(testtable_c SOURCES testtable.c)
ast_add_test(teststcschan_c SOURCES teststcschan.c)
ast_add_test(testregions_c SOURCES testregions.c)
ast_add_test(testregionmasking_c SOURCES testregionmasking.c)
ast_add_test(testrebinseq_c SOURCES testrebinseq.c)
ast_add_test(testrebin_c SOURCES testrebin.c)
ast_add_test(testresample)
ast_add_test(teststc_c SOURCES teststc.c)
ast_add_test(testfitschan_c SOURCES testfitschan.c)
ast_add_test(testfitschanerrors_c SOURCES testfitschanerrors.c)

# --- New C-only regression tests (no Fortran original) ---
ast_add_test(testslamap)

# --- wcsconverter: regression-diff harness ported from wcsconverter.f ---
add_executable(wcsconverter wcsconverter.c)
target_include_directories(wcsconverter PRIVATE ${TEST_INCLUDES})
target_link_libraries(wcsconverter PRIVATE ${TEST_LIBS})
target_compile_definitions(wcsconverter PRIVATE HAVE_CONFIG_H)
ast_apply_dev_options(wcsconverter)

# ast_astequal: semantic equivalence check for AST object files.
# Used alongside string diffs for platform-robust verification.
add_executable(ast_astequal ast_astequal.c)
target_include_directories(ast_astequal PRIVATE ${TEST_INCLUDES})
target_link_libraries(ast_astequal PRIVATE ${TEST_LIBS})
target_compile_definitions(ast_astequal PRIVATE HAVE_CONFIG_H)
ast_apply_dev_options(ast_astequal)

# Helper to register wcsconverter regression tests.
# Each call registers two ctest entries using fixture-root-relative paths:
#   wcsconv_<NAME>          -- byte-level diff of the produced output
#                              against the committed reference.  Catches
#                              unintentional changes to AST's output
#                              format.
#   wcsconv_<NAME>_astequal -- astEqual-based semantic check between the
#                              output and the reference.  Tolerates
#                              platform-specific serialisation and ulp
#                              drift.
# Add fixtures below fixtures/ and list their fixture-root-relative paths in
# fixtures/wcsconv/cases.txt.
#
# Options:
#   SKIP_STRING_COMPARE -- register the astEqual test only; do not
#                          register the byte-level string-diff test.
#                          Use for fixtures whose serialised output is
#                          known to vary at the ulp level between
#                          platforms' math libraries, where a strict
#                          byte-diff is not a reliable regression gate
#                          on any single platform.
function(add_wcsconv_test)
    cmake_parse_arguments(W
        "SKIP_STRING_COMPARE"
        "NAME;INPUT;REFERENCE;ENCODING;ATTRS;TOLERANCE"
        ""
        ${ARGN})
    if(NOT W_NAME OR NOT W_INPUT OR NOT W_REFERENCE OR NOT W_ENCODING)
        message(FATAL_ERROR
            "add_wcsconv_test: NAME, INPUT, REFERENCE, ENCODING all required")
    endif()
    if(NOT DEFINED W_ATTRS)
        set(W_ATTRS "")
    endif()
    ast_fixture_status("wcsconv/cases.txt" "${W_INPUT}" _in_ok)
    ast_fixture_status("wcsconv/cases.txt" "${W_REFERENCE}" _ref_ok)
    if(NOT _in_ok OR NOT _ref_ok)
        if(NOT W_SKIP_STRING_COMPARE)
            ast_add_skipped_test(wcsconv_${W_NAME})
        endif()
        ast_add_skipped_test(wcsconv_${W_NAME}_astequal)
        return()
    endif()
    set(_input "fixtures/${W_INPUT}")
    set(_reference "fixtures/${W_REFERENCE}")

    if(NOT W_SKIP_STRING_COMPARE)
        add_test(NAME wcsconv_${W_NAME}
            COMMAND ${CMAKE_COMMAND}
                -DWCSCONVERTER=$<TARGET_FILE:wcsconverter>
                -DCOMPARE=$<TARGET_FILE:compare_dumps>
                -DTOLERANCE=${W_TOLERANCE}
                -DIN_FILE=${_input}
                -DREF_FILE=${_reference}
                -DOUT_FILE=${W_NAME}.out
                -DENCODING=${W_ENCODING}
                -DATTRS=${W_ATTRS}
                -P "${CMAKE_SOURCE_DIR}/cmake/run_wcsconverter_test.cmake"
            WORKING_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}")
        if(AST_ENABLE_SANITIZERS)
            set_tests_properties(wcsconv_${W_NAME} PROPERTIES
                ENVIRONMENT "ASAN_OPTIONS=detect_leaks=0")
        endif()
    endif()

    add_test(NAME wcsconv_${W_NAME}_astequal
        COMMAND ${CMAKE_COMMAND}
            -DWCSCONVERTER=$<TARGET_FILE:wcsconverter>
            -DAST_ASTEQUAL=$<TARGET_FILE:ast_astequal>
            -DIN_FILE=${_input}
            -DREF_FILE=${_reference}
            -DOUT_FILE=${W_NAME}.astequal.out
            -DENCODING=${W_ENCODING}
            -DATTRS=${W_ATTRS}
            -P "${CMAKE_SOURCE_DIR}/cmake/run_wcsconverter_astequal_test.cmake"
        WORKING_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}")
    if(AST_ENABLE_SANITIZERS)
        set_tests_properties(wcsconv_${W_NAME}_astequal PROPERTIES
            ENVIRONMENT "ASAN_OPTIONS=detect_leaks=0")
    endif()
endfunction()

ast_read_test_data("${AST_FIXTURE_SOURCE_ROOT}/wcsconv/cases.txt"
                   _wcsconv_tests 6)
foreach(_entry IN LISTS _wcsconv_tests)
    string(REPLACE "|" ";" _fields "${_entry}")
    list(GET _fields 0 _name)
    list(GET _fields 1 _input)
    list(GET _fields 2 _reference)
    list(GET _fields 3 _encoding)
    list(GET _fields 4 _attrs)
    list(GET _fields 5 _skip)
    # Three values.  Blank compares the output with numeric tokens equal to
    # within 4 ULP.  "astequal" widens that to AST's own astEQUAL, for a value
    # amplified by cancellation -- OBSALT recovered from OBSGEO-X/Y/Z is the case
    # that needs it.  "yes" runs no string comparison at all, and needs a comment
    # above the row saying what varies.
    set(_skip_flag "")
    set(_tolerance "")
    if(_skip STREQUAL "yes")
        set(_skip_flag "SKIP_STRING_COMPARE")
    elseif(_skip STREQUAL "astequal")
        set(_tolerance "astequal")
    elseif(NOT _skip STREQUAL "")
        message(FATAL_ERROR
            "wcsconv/cases.txt: row ${_name} has skip_string_compare "
            "\"${_skip}\"; expected blank, astequal or yes")
    endif()
    set(_attrs_arg "")
    if(NOT _attrs STREQUAL "")
        set(_attrs_arg "ATTRS" "${_attrs}")
    endif()
    add_wcsconv_test(NAME ${_name}
                     INPUT ${_input}
                     REFERENCE ${_reference}
                     ENCODING ${_encoding}
                     ${_attrs_arg}
                     TOLERANCE ${_tolerance}
                     ${_skip_flag})
endforeach()

# --- simplify: regression-diff harness ported from simplify.f ---
# Reads a Mapping from an AST dump, simplifies it, and diffs the result
# against a committed reference file.  Same pattern as wcsconverter above.
add_executable(simplify simplify.c)
target_include_directories(simplify PRIVATE ${TEST_INCLUDES})
target_link_libraries(simplify PRIVATE ${TEST_LIBS})
target_compile_definitions(simplify PRIVATE HAVE_CONFIG_H)
ast_apply_dev_options(simplify)

add_executable(normalize_fixture normalize_fixture.c)
target_include_directories(normalize_fixture PRIVATE ${TEST_INCLUDES})
target_link_libraries(normalize_fixture PRIVATE ${TEST_LIBS})
target_compile_definitions(normalize_fixture PRIVATE HAVE_CONFIG_H)
ast_apply_dev_options(normalize_fixture)

# --- roundtrip: read a dump and write it straight back ---
#
# The output must be byte-identical to the input.  This is the only family that
# can see an attribute lost on load: both simplify families call astSimplify
# after reading, and astSimplify sets IsSimple on every node it visits, so a
# record a loader dropped is put straight back before anything compares it.
add_executable(roundtrip roundtrip.c)
target_include_directories(roundtrip PRIVATE ${TEST_INCLUDES})
target_link_libraries(roundtrip PRIVATE ${TEST_LIBS})
target_compile_definitions(roundtrip PRIVATE HAVE_CONFIG_H)
ast_apply_dev_options(roundtrip)
add_dependencies(roundtrip ast_stage_fixtures)
add_dependencies(simplify compare_dumps)

function(add_roundtrip_test)
    cmake_parse_arguments(R "" "NAME;FIXTURE" "" ${ARGN})
    if(NOT R_NAME OR NOT R_FIXTURE)
        message(FATAL_ERROR "add_roundtrip_test: NAME and FIXTURE required")
    endif()
    ast_fixture_status("roundtrip" "${R_FIXTURE}" _rt_ok)
    if(NOT _rt_ok)
        ast_add_skipped_test(roundtrip_${R_NAME})
        return()
    endif()
    add_test(NAME roundtrip_${R_NAME}
        COMMAND "${CMAKE_COMMAND}"
                -DROUNDTRIP=$<TARGET_FILE:roundtrip>
                -DIN_FILE=${AST_FIXTURE_BINARY_ROOT}/${R_FIXTURE}
                -DOUT_FILE=${CMAKE_CURRENT_BINARY_DIR}/roundtrip_${R_NAME}.out
                -P "${CMAKE_SOURCE_DIR}/cmake/run_roundtrip_test.cmake"
        WORKING_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}")

# As every other family here does.  Reading a dump leaks inside the library's own
# loaders -- astLoadXphMap by way of astReadClassData is one -- and this family
# reads every fixture in the tree, so without this it is the only one that reports
# those leaks.  Suppressing them keeps the family measuring what it is for; the
# leaks belong to the read path and are the same ones the simplify and wcsconv
# families already run with detection off.
    if(AST_ENABLE_SANITIZERS)
        set_tests_properties(roundtrip_${R_NAME} PROPERTIES
            ENVIRONMENT "ASAN_OPTIONS=detect_leaks=0")
    endif()
endfunction()

# compare_dumps: a dump comparator that tolerates last-bit variation.  It links
# no AST library -- it is text and arithmetic only -- so a cmake -P driver can
# call it without the library on the path.
add_executable(compare_dumps compare_dumps.c)
target_link_libraries(compare_dumps PRIVATE m)
set_target_properties(compare_dumps PROPERTIES C_STANDARD 11)
ast_apply_dev_options(compare_dumps)

add_executable(compare_dumps_selftest compare_dumps.c)
target_compile_definitions(compare_dumps_selftest PRIVATE SELFTEST)
target_link_libraries(compare_dumps_selftest PRIVATE m)
set_target_properties(compare_dumps_selftest PROPERTIES C_STANDARD 11)
ast_apply_dev_options(compare_dumps_selftest)
# Deliberately without the ASAN_OPTIONS=detect_leaks=0 that every other test here
# carries: this one links no AST library and allocates nothing, so a leak report
# from it would be a real leak in compare_dumps rather than one of the library's.
add_test(NAME compare_dumps_selftest COMMAND compare_dumps_selftest)

add_executable(gen_keymap_mapsz gen_keymap_mapsz.c)
target_include_directories(gen_keymap_mapsz PRIVATE ${TEST_INCLUDES})
target_link_libraries(gen_keymap_mapsz PRIVATE ${TEST_LIBS})
target_compile_definitions(gen_keymap_mapsz PRIVATE HAVE_CONFIG_H)
ast_apply_dev_options(gen_keymap_mapsz)

# Check the committed fixture still describes this library.  Without this the
# generator would be the only target here whose output nothing reads: the
# fixture is written for a port to be held to, and a capture nothing re-checks
# stops being evidence the moment KeyMap's growth policy changes.  Byte-exact,
# because every value is integer arithmetic over ASCII keys.
# Not distributed: this holds the library to a committed capture of KeyMap's
# growth policy, which is a developer concern and cannot be affected by an end
# user's build.
ast_fixture_status("keymap_mapsz" "oracle/keymap_mapsz.txt" _km_ok)
if(_km_ok)
    add_test(NAME keymap_mapsz
        COMMAND "${CMAKE_COMMAND}"
                -DGENERATOR=$<TARGET_FILE:gen_keymap_mapsz>
                -DREF_FILE=${AST_FIXTURE_BINARY_ROOT}/oracle/keymap_mapsz.txt
                -DOUT_FILE=${CMAKE_CURRENT_BINARY_DIR}/keymap_mapsz.out
                -P "${CMAKE_SOURCE_DIR}/cmake/run_keymap_mapsz_test.cmake"
        WORKING_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}")
    if(AST_ENABLE_SANITIZERS)
        set_tests_properties(keymap_mapsz PROPERTIES
            ENVIRONMENT "ASAN_OPTIONS=detect_leaks=0")
    endif()
else()
    ast_add_skipped_test(keymap_mapsz)
endif()
add_dependencies(gen_keymap_mapsz ast_stage_fixtures)

add_executable(gen_frameset_fixtures gen_frameset_fixtures.c)
target_include_directories(gen_frameset_fixtures PRIVATE ${TEST_INCLUDES})
target_link_libraries(gen_frameset_fixtures PRIVATE ${TEST_LIBS})
target_compile_definitions(gen_frameset_fixtures PRIVATE HAVE_CONFIG_H)
set_target_properties(gen_frameset_fixtures PROPERTIES C_STANDARD 11)
ast_apply_dev_options(gen_frameset_fixtures)

add_executable(gen_native_fixtures gen_native_fixtures.c)
target_include_directories(gen_native_fixtures PRIVATE ${TEST_INCLUDES})
target_link_libraries(gen_native_fixtures PRIVATE ${TEST_LIBS})
target_compile_definitions(gen_native_fixtures PRIVATE HAVE_CONFIG_H)
set_target_properties(gen_native_fixtures PROPERTIES C_STANDARD 11)
ast_apply_dev_options(gen_native_fixtures)

add_executable(gen_simplify_fixtures gen_simplify_fixtures.c gen_simplify_flags.c)
target_include_directories(gen_simplify_fixtures PRIVATE ${TEST_INCLUDES})
target_link_libraries(gen_simplify_fixtures PRIVATE ${TEST_LIBS})
target_compile_definitions(gen_simplify_fixtures PRIVATE HAVE_CONFIG_H)
# gen_simplify_flags.c reaches the protected Mapping flags through the internal
# headers, so it must see the same AstObject / AstMapping layout the library was
# compiled with -- otherwise the flag macros write at the wrong offset.
if(HAVE_PTHREADS)
    target_compile_definitions(gen_simplify_fixtures PRIVATE THREAD_SAFE)
endif()
ast_apply_dev_options(gen_simplify_fixtures)

# Helper to register simplify regression tests.
# Each call registers tests using fixture-root-relative input/reference paths:
#   simplify_<NAME>          -- byte-level diff of the produced output
#                               against the committed reference.
#   simplify_<NAME>_astequal -- astEqual-based semantic check between the
#                               output and the reference (uses ast_astequal
#                               with encoding "ast").
#
# A fixture whose REFERENCE is its own INPUT is a negative control: it asserts
# astSimplify leaves the Mapping alone.  Such a fixture gets a third entry:
#   simplify_<NAME>_noop     -- byte-level diff of the output against the
#                               input with the IsSimp markers removed.
# This is registered even under SKIP_STRING_COMPARE, because astEqual compares
# meaning and so passes a structural rewrite that preserves the transformation
# -- exactly the failure a negative control exists to catch.
#
# Options:
#   SKIP_STRING_COMPARE -- register the astEqual test only; do not
#                          register the byte-level string-diff test.
#                          Use for fixtures whose serialised output is
#                          known to vary at the ulp level between
#                          platforms' math libraries.
function(add_simplify_test)
    cmake_parse_arguments(S
        "SKIP_STRING_COMPARE"
        "NAME;INPUT;REFERENCE;TOLERANCE"
        ""
        ${ARGN})
    if(NOT S_NAME OR NOT S_INPUT OR NOT S_REFERENCE)
        message(FATAL_ERROR
            "add_simplify_test: NAME, INPUT, REFERENCE all required")
    endif()
    ast_fixture_status("simplify/cases.txt" "${S_INPUT}" _in_ok)
    ast_fixture_status("simplify/cases.txt" "${S_REFERENCE}" _ref_ok)
    if(NOT _in_ok OR NOT _ref_ok)
        if(NOT S_SKIP_STRING_COMPARE)
            ast_add_skipped_test(simplify_${S_NAME})
        endif()
        if(S_INPUT STREQUAL S_REFERENCE)
            ast_add_skipped_test(simplify_${S_NAME}_noop)
        endif()
        ast_add_skipped_test(simplify_${S_NAME}_astequal)
        return()
    endif()
    set(_input "fixtures/${S_INPUT}")
    set(_reference "fixtures/${S_REFERENCE}")

    if(NOT S_SKIP_STRING_COMPARE)
        add_test(NAME simplify_${S_NAME}
            COMMAND ${CMAKE_COMMAND}
                -DSIMPLIFY=$<TARGET_FILE:simplify>
                -DCOMPARE=$<TARGET_FILE:compare_dumps>
                -DTOLERANCE=${S_TOLERANCE}
                -DIN_FILE=${_input}
                -DREF_FILE=${_reference}
                -DOUT_FILE=${S_NAME}.out
                -P "${CMAKE_SOURCE_DIR}/cmake/run_simplify_test.cmake"
            WORKING_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}")
        if(AST_ENABLE_SANITIZERS)
            set_tests_properties(simplify_${S_NAME} PROPERTIES
                ENVIRONMENT "ASAN_OPTIONS=detect_leaks=0")
        endif()
    endif()

    if(S_INPUT STREQUAL S_REFERENCE)
        add_test(NAME simplify_${S_NAME}_noop
            COMMAND ${CMAKE_COMMAND}
                -DSIMPLIFY=$<TARGET_FILE:simplify>
                -DIN_FILE=${_input}
                -DOUT_FILE=${S_NAME}.noop.out
                -P "${CMAKE_SOURCE_DIR}/cmake/run_simplify_noop_test.cmake"
            WORKING_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}")
        if(AST_ENABLE_SANITIZERS)
            set_tests_properties(simplify_${S_NAME}_noop PROPERTIES
                ENVIRONMENT "ASAN_OPTIONS=detect_leaks=0")
        endif()
    endif()

    add_test(NAME simplify_${S_NAME}_astequal
        COMMAND ${CMAKE_COMMAND}
            -DSIMPLIFY=$<TARGET_FILE:simplify>
            -DAST_ASTEQUAL=$<TARGET_FILE:ast_astequal>
            -DIN_FILE=${_input}
            -DREF_FILE=${_reference}
            -DOUT_FILE=${S_NAME}.astequal.out
            -P "${CMAKE_SOURCE_DIR}/cmake/run_simplify_astequal_test.cmake"
        WORKING_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}")
    if(AST_ENABLE_SANITIZERS)
        set_tests_properties(simplify_${S_NAME}_astequal PROPERTIES
            ENVIRONMENT "ASAN_OPTIONS=detect_leaks=0")
    endif()
endfunction()

ast_read_test_data("${AST_FIXTURE_SOURCE_ROOT}/simplify/cases.txt"
                   _simplify_tests 4)
foreach(_entry IN LISTS _simplify_tests)
    string(REPLACE "|" ";" _fields "${_entry}")
    list(GET _fields 0 _name)
    list(GET _fields 1 _input)
    list(GET _fields 2 _reference)
    list(GET _fields 3 _skip)
    # The fourth column takes three values.  Blank compares the dump with
    # numeric tokens to 4 ULP.  "astequal" widens that to AST's own astEQUAL,
    # for a value amplified by cancellation.  "yes" runs no string comparison at
    # all, which is right for a negative fixture: its reference is the
    # unsimplified input, and astSimplify always stamps IsSimp on its result, so
    # the two can never match by string.  Those are gated by the _noop test
    # instead, which strips IsSimp before comparing.
    set(_skip_flag "")
    set(_tolerance "")
    if(_skip STREQUAL "yes")
        set(_skip_flag "SKIP_STRING_COMPARE")
    elseif(_skip STREQUAL "astequal")
        set(_tolerance "astequal")
    elseif(NOT _skip STREQUAL "")
        message(FATAL_ERROR
            "simplify/cases.txt: row ${_name} has skip_string_compare "
            "\"${_skip}\"; expected blank, astequal or yes")
    endif()
    add_simplify_test(NAME ${_name}
                      INPUT ${_input}
                      REFERENCE ${_reference}
                      TOLERANCE ${_tolerance}
                      ${_skip_flag})

# Round-trip both halves of the pair.  Reading a dump and writing it back is
# the identity whatever the fixture is, so this needs no reference of its own
# and no skip flag: a fixture that cannot round-trip is a serialisation defect.
    add_roundtrip_test(NAME ${_name}_map      FIXTURE ${_input})
    if(NOT _reference STREQUAL _input)
        add_roundtrip_test(NAME ${_name}_simp FIXTURE ${_reference})
    endif()
endforeach()

# Round-trip every other native-encoded fixture in the tree.  These are inputs
# to individual programs rather than manifest cases, so they are discovered by
# glob: a new one is picked up on the next reconfigure.
#
# wcsconv/ is deliberately excluded.  Its references are FITS-encoded, so
# reading one back needs a FitsChan and the encoding it was written with, which
# is what the wcsconv harness already does.
file(GLOB_RECURSE _ast_native_fixtures CONFIGURE_DEPENDS
     RELATIVE "${AST_FIXTURE_SOURCE_ROOT}"
     "${AST_FIXTURE_SOURCE_ROOT}/programs/*.ast"
     "${AST_FIXTURE_SOURCE_ROOT}/serialisation/*.ast"
     "${AST_FIXTURE_SOURCE_ROOT}/wcsconv/framesets/*.ast")
foreach(_fixture IN LISTS _ast_native_fixtures)
    string(REGEX REPLACE "[/.]" "_" _rt_name "${_fixture}")
    add_roundtrip_test(NAME ${_rt_name} FIXTURE ${_fixture})
endforeach()

if(AST_ENABLE_HUGE_TEST)
    ast_add_test(testhuge_c SOURCES testhuge.c)
endif()

# --- Conditional tests ---
if(HAVE_YAML)
    ast_add_test(testyamlchan)
endif()

if(HAVE_PTHREADS)
    ast_add_test(testthreads EXTRA_LIBS Threads::Threads)
endif()

# --- Grid smoke tests (no PLplot dependency) ---
# Uses the logging GRF module (grf_log.c) to exercise astGrid on each
# .head file without requiring any external graphics library.
ast_add_test(testgrid
    NO_DEFAULT_GRF_LIBS
    EXTRA_LIBS $<LINK_LIBRARY:WHOLE_ARCHIVE,ast_grf_log>
               $<LINK_LIBRARY:WHOLE_ARCHIVE,ast_grf3d>
    TEST_ARGS "fixtures/wcsconv/inputs/lsst.fits-wcs" " " " "
)
target_include_directories(testgrid PRIVATE "${CMAKE_SOURCE_DIR}/src")

function(add_grid_test)
    cmake_parse_arguments(P "SKIP_TEXT_COMPARE"
        "NAME;HEAD;ATTR;FATTR;BOX;REFERENCE"
        ""
        ${ARGN})
    if(NOT P_NAME OR NOT P_HEAD)
        message(FATAL_ERROR
            "add_grid_test: NAME, HEAD required")
    endif()
    if(NOT DEFINED P_ATTR)
        set(P_ATTR " ")
    endif()
    if(NOT DEFINED P_FATTR)
        set(P_FATTR " ")
    endif()
    ast_require_fixture("plot/cases.txt" "${P_HEAD}")
    set(_head "fixtures/${P_HEAD}")

    set(_box_arg "")
    if(DEFINED P_BOX)
        set(_box_arg "${P_BOX}")
    endif()

    set(_ref_arg "")
    if(P_REFERENCE AND NOT P_SKIP_TEXT_COMPARE)
        ast_require_fixture("plot/cases.txt" "${P_REFERENCE}")
        set(_ref_arg "-DREF_FILE=fixtures/${P_REFERENCE}")
    endif()

    add_test(NAME grid_${P_NAME}
        COMMAND ${CMAKE_COMMAND}
            -DTESTGRID=$<TARGET_FILE:testgrid>
            -DHEAD_FILE=${_head}
            "-DATTR=${P_ATTR}"
            "-DFATTR=${P_FATTR}"
            -DOUT_FILE=grid_${P_NAME}.svg
            "${_ref_arg}"
            "-DBOX=${_box_arg}"
            -P "${CMAKE_SOURCE_DIR}/cmake/run_grid_test.cmake"
        WORKING_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}")
    if(AST_ENABLE_SANITIZERS)
        set_tests_properties(grid_${P_NAME} PROPERTIES
            ENVIRONMENT "ASAN_OPTIONS=detect_leaks=0")
    endif()
endfunction()

ast_read_test_data("${AST_FIXTURE_SOURCE_ROOT}/plot/cases.txt" _grid_tests 7)
foreach(_entry IN LISTS _grid_tests)
    string(REPLACE "|" ";" _fields "${_entry}")
    list(GET _fields 0 _name)
    list(GET _fields 1 _head)
    list(GET _fields 2 _attr)
    list(GET _fields 3 _fattr)
    list(GET _fields 4 _box)
    list(GET _fields 5 _reference)
    list(GET _fields 6 _skip)
    set(_args "NAME" "${_name}" "HEAD" "${_head}")
    if(NOT _attr STREQUAL "")
        list(APPEND _args "ATTR" "${_attr}")
    endif()
    if(NOT _fattr STREQUAL "")
        list(APPEND _args "FATTR" "${_fattr}")
    endif()
    if(NOT _box STREQUAL "")
        list(APPEND _args "BOX" "${_box}")
    endif()
    if(NOT _reference STREQUAL "")
        list(APPEND _args "REFERENCE" "${_reference}")
    endif()
    if(_skip STREQUAL "yes")
        list(APPEND _args "SKIP_TEXT_COMPARE")
    endif()
    add_grid_test(${_args})
endforeach()

if(PLPLOT_FOUND)
    # --- Determine if pdfcairo is available ---
    # If not, plplot falls back on the "pdf" device which uses libHaru, which
    # fails with some of the pdf tests; if the pdfcairo device is not availble
    # then we just mark these tests as expected failures.

    set(CMAKE_REQUIRED_INCLUDES ${PLPLOT_INCLUDE_DIRS})
    set(CMAKE_REQUIRED_LIBRARIES ${PLPLOT_LIBRARIES})
    set(CMAKE_REQUIRED_LINK_DIRECTORIES ${PLPLOT_LIBRARY_DIRS})
    check_c_source_runs("
    #include <string.h>
    #include <plplot.h>

    int main(void) {
        const char *menustr[32];
        const char *devnames[32];
        const char **pmenustr = menustr;
        const char **pdevnames = devnames;
        int idx;
        int pl_ndev = 32;
        plgDevs(&pmenustr, &pdevnames, &pl_ndev);
        for (idx = 0; idx < pl_ndev; idx++) {
            if (devnames[idx] && strcmp(devnames[idx], \"pdfcairo\") == 0)
                return 0;
        }
        return 1;
    }
    " HAVE_PLPLOT_PDFCAIRO)
    unset(CMAKE_REQUIRED_INCLUDES)
    unset(CMAKE_REQUIRED_LIBRARIES)
    unset(CMAKE_REQUIRED_LINK_DIRECTORIES)

    # Plotter tests that are known to fail without pdfcairo
    set(PLOTTER_XFAIL_NO_PDFCAIRO
        car4
        car6
        specflux
        timeplot
    )

    ast_add_test(testplotter
        SOURCES testplotter.c plplotutil.c
        NO_DEFAULT_GRF_LIBS
        EXTRA_LIBS $<LINK_LIBRARY:WHOLE_ARCHIVE,ast_grf_plplot> $<LINK_LIBRARY:WHOLE_ARCHIVE,ast_grf3d_plplot> ${PLPLOT_LIBRARIES}
        TEST_ARGS "${CMAKE_CURRENT_SOURCE_DIR}/fixtures/wcsconv/inputs/lsst.fits-wcs" " " " " "testplotter.ps"
    )
    target_include_directories(testplotter PRIVATE ${PLPLOT_INCLUDE_DIRS})
    target_link_directories(testplotter PRIVATE ${PLPLOT_LIBRARY_DIRS})

    ast_add_test(testplot3d_c
        SOURCES testplot3d.c plplotutil.c
        NO_DEFAULT_GRF_LIBS
        SOURCES testplot3d.c
        EXTRA_LIBS $<LINK_LIBRARY:WHOLE_ARCHIVE,ast_grf_plplot> $<LINK_LIBRARY:WHOLE_ARCHIVE,ast_grf3d_plplot> ${PLPLOT_LIBRARIES}
        TEST_ARGS "testplot3d.pdf"
    )
    target_include_directories(testplot3d_c PRIVATE ${PLPLOT_INCLUDE_DIRS})
    target_link_directories(testplot3d_c PRIVATE ${PLPLOT_LIBRARY_DIRS})

    # --- Plotter smoke tests ---
    # Run testplotter using the inline settings in fixtures/plot/cases.txt.
    # Pure smoke test: verifies astGrid does not crash on the given WCS.
    function(add_plotter_test)
        cmake_parse_arguments(P ""
            "NAME;HEAD;ATTR;FATTR;BOX"
            ""
            ${ARGN})
        if(NOT P_NAME OR NOT P_HEAD)
            message(FATAL_ERROR
                "add_plotter_test: NAME, HEAD required")
        endif()
        if(NOT DEFINED P_ATTR)
            set(P_ATTR " ")
        endif()
        if(NOT DEFINED P_FATTR)
            set(P_FATTR " ")
        endif()
        ast_require_fixture("plot/cases.txt" "${P_HEAD}")
        set(_head "fixtures/${P_HEAD}")

        set(_box_arg "")
        if(DEFINED P_BOX)
            set(_box_arg "${P_BOX}")
        endif()

        add_test(NAME plotter_${P_NAME}
            COMMAND ${CMAKE_COMMAND}
                -DTESTPLOTTER=$<TARGET_FILE:testplotter>
                -DHEAD_FILE=${_head}
                "-DATTR=${P_ATTR}"
                "-DFATTR=${P_FATTR}"
                -DOUT_FILE=plotter_${P_NAME}.pdf
                "-DBOX=${_box_arg}"
                -P "${CMAKE_SOURCE_DIR}/cmake/run_plotter_test.cmake"
            WORKING_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}")

        if(AST_ENABLE_SANITIZERS)
            set_tests_properties(plotter_${P_NAME} PROPERTIES
                ENVIRONMENT "ASAN_OPTIONS=detect_leaks=0")
        endif()

        # Mark test as expected failure if it's one known not to work
        # without pdfcairo
        if(NOT HAVE_PLPLOT_PDFCAIRO)
            list(FIND PLOTTER_XFAIL_NO_PDFCAIRO "${P_NAME}" _idx)
            if(NOT _idx EQUAL -1)
                set_tests_properties(plotter_${P_NAME} PROPERTIES
                    WILL_FAIL TRUE)
            endif()
        endif()
    endfunction()

    ast_read_test_data("${AST_FIXTURE_SOURCE_ROOT}/plot/cases.txt"
                       _plotter_tests 7)
    foreach(_entry IN LISTS _plotter_tests)
        string(REPLACE "|" ";" _fields "${_entry}")
        list(GET _fields 0 _name)
        list(GET _fields 1 _head)
        list(GET _fields 2 _attr)
        list(GET _fields 3 _fattr)
        list(GET _fields 4 _box)
        set(_args "NAME" "${_name}" "HEAD" "${_head}")
        if(NOT _attr STREQUAL "")
            list(APPEND _args "ATTR" "${_attr}")
        endif()
        if(NOT _fattr STREQUAL "")
            list(APPEND _args "FATTR" "${_fattr}")
        endif()
        if(NOT _box STREQUAL "")
            list(APPEND _args "BOX" "${_box}")
        endif()
        add_plotter_test(${_args})
    endforeach()
endif()


# ============================================================
# Fortran tests (AST_BUILD_FORTRAN=ON only)
# ============================================================
# These run the original Fortran test programs against the Fortran binding,
# complementing the C equivalents above.  Each test is suffixed _f to
# distinguish it from the C version in ctest output.
if(AST_BUILD_FORTRAN)

    # Minimal C implementations of the Starlink APIs called by the Fortran
    # tests (EMS error handling, PSX memory, CNF C/Fortran interface, etc.).
    add_library(ast_star_compat STATIC
        star_compat/err_standalone.c
        star_compat/psx_standalone.c
        star_compat/chr_standalone.c
        star_compat/cnf_standalone.c
        star_compat/num_standalone.c
    )
    target_include_directories(ast_star_compat PRIVATE
        "${CMAKE_CURRENT_SOURCE_DIR}/star_compat"
        "${CMAKE_BINARY_DIR}"       # config.h, ast_err.h
        "${CMAKE_BINARY_DIR}/src"   # f77.h (generated from f77.h.in)
    )
    target_compile_definitions(ast_star_compat PRIVATE HAVE_CONFIG_H)
    # Instrumented like every other C target here: these stubs stand in for
    # Starlink's memory and string routines, which is exactly the code a
    # sanitizer build wants watched.
    if(AST_SANITIZER_COMPILE_FLAGS)
        target_compile_options(ast_star_compat PRIVATE ${AST_SANITIZER_COMPILE_FLAGS})
    endif()

    # Helper: add a Fortran test program and register it with ctest.
    # Test names get a _f suffix to distinguish from C equivalents.
    # The Fortran INCLUDE search path covers:
    #   - star_compat/  : SAE_PAR, SAI_ERR, CNF_PAR, ERR_PAR, etc.
    #   - CMAKE_BINARY_DIR : generated AST_PAR and AST_ERR
    function(ast_add_fortran_test name)
        cmake_parse_arguments(FT "NO_DEFAULT_GRF_LIBS" "" "EXTRA_LIBS;TEST_ARGS" ${ARGN})
        add_executable(${name}_f ${name}.f)
        if(AST_FORTRAN_TEST_FLAGS)
            target_compile_options(${name}_f PRIVATE
                $<$<COMPILE_LANGUAGE:Fortran>:${AST_FORTRAN_TEST_FLAGS}>
            )
        endif()
        target_include_directories(${name}_f PRIVATE
            "${CMAKE_CURRENT_SOURCE_DIR}/star_compat"
            "${CMAKE_BINARY_DIR}"   # AST_PAR, AST_ERR
        )
        if(FT_NO_DEFAULT_GRF_LIBS)
            set(_grf_libs
                $<LINK_LIBRARY:WHOLE_ARCHIVE,ast_err>
                ${FT_EXTRA_LIBS}
            )
        else()
            set(_grf_libs
                $<LINK_LIBRARY:WHOLE_ARCHIVE,ast_err>
                $<LINK_LIBRARY:WHOLE_ARCHIVE,ast_grf_2.0>
                $<LINK_LIBRARY:WHOLE_ARCHIVE,ast_grf_3.2>
                $<LINK_LIBRARY:WHOLE_ARCHIVE,ast_grf_5.6>
                $<LINK_LIBRARY:WHOLE_ARCHIVE,ast_grf3d>
                ${FT_EXTRA_LIBS}
            )
        endif()
        if(AST_FORTRAN_SANITIZER_FLAGS)
            target_compile_options(${name}_f PRIVATE
                $<$<COMPILE_LANGUAGE:Fortran>:${AST_FORTRAN_SANITIZER_FLAGS}>
            )
            # The link is the part that matters: libast and the grf modules
            # carry __asan_* references that only the sanitizer runtime
            # resolves, and the Fortran driver does not add it by itself.
            target_link_options(${name}_f PRIVATE ${AST_FORTRAN_SANITIZER_FLAGS})
        endif()
        target_link_libraries(${name}_f PRIVATE
            ast
            ${_grf_libs}
            ast_star_compat
            m
        )
        add_test(NAME ${name}_f COMMAND ${name}_f ${FT_TEST_ARGS}
                 WORKING_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}")

        set(test_env "")
        if(AST_ENABLE_SANITIZERS)
            list(APPEND test_env "ASAN_OPTIONS=detect_leaks=0")
        endif()

        # Tests locate their input fixture files relative to $srcdir, so point
        # it at the source directory where those fixtures live.
        list(APPEND test_env "srcdir=${CMAKE_CURRENT_SOURCE_DIR}")

        set_tests_properties(${name}_f PROPERTIES
            ENVIRONMENT "${test_env}")
        endfunction()

    # Custom target that ensures AST_PAR and AST_ERR exist before any
    # Fortran test is compiled (they are Fortran INCLUDE files).
    # ast_par and ast_codegen are defined in the top-level CMakeLists.txt.
    add_custom_target(ast_fortran_includes)
    add_dependencies(ast_fortran_includes ast_par ast_codegen)

    # All 33 unconditional Fortran test programs
    set(_fortran_tests
        testzoommap
        testnormmap
        testmapping
        testskyframe
        testcmpframe
        testlutmap
        testratemap
        testchannel
        testrate
        testspecframe
        testflux
        testspecflux
        testcmpmap
        testpolymap
        testchebymap
        testunitnormmap
        testtrangrid
        testmoc
        testfitstable
        testframeset
        testswitchmap
        testtime
        testkeymap
        testmocchan
        testxmlchan
        testtable
        teststcschan
        testregions
        testrebinseq
        testrebin
        teststc
        testfitschan
        testsplinemap
    )
    foreach(_f_test IN LISTS _fortran_tests)
        ast_add_fortran_test(${_f_test})
        add_dependencies(${_f_test}_f ast_fortran_includes)
    endforeach()

    if(AST_ENABLE_HUGE_TEST)
        ast_add_fortran_test(testhuge)
        add_dependencies(testhuge_f ast_fortran_includes)
    endif()
endif() # AST_BUILD_FORTRAN

# Say once, at configure time, that this is a cut-down distribution and how much
# of the suite it cannot run.  Without this the only clue would be a smaller test
# count, which is exactly the question someone running the tests from a tarball
# needs answered.
get_property(_ast_skipped GLOBAL PROPERTY AST_SKIPPED_TEST_COUNT)
if(_ast_skipped)
    message(STATUS
        "AST test fixtures: cut-down distribution (fixtures/DIST_TIER)")
    message(STATUS
        "  ${_ast_skipped} tests disabled: fixtures not distributed")
    message(STATUS
        "  use `make fulldist` from a git checkout for the full corpus")
endif()
