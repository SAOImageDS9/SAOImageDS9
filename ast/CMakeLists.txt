cmake_minimum_required(VERSION 3.24)

# Keep the canonical version in version.number so CMake and Autotools
# both read the same value.
file(READ "${CMAKE_CURRENT_SOURCE_DIR}/version.number" AST_VERSION)
string(STRIP "${AST_VERSION}" AST_VERSION)

project(ast
    VERSION "${AST_VERSION}"
    LANGUAGES C
    DESCRIPTION "AST - World Coordinate Systems Library"
)

# Fortran is enabled conditionally after option() declarations below,
# because enable_language(Fortran) must come after project().

include(CheckIncludeFile)
include(CheckFunctionExists)
include(CheckTypeSize)
include(CheckCSourceCompiles)
include(GNUInstallDirs)
include(CMakePackageConfigHelpers)

# ============================================================
# Build options
# ============================================================
option(AST_BUILD_FORTRAN "Build with Fortran wrappers" OFF)
option(AST_WITH_PTHREADS "Build with POSIX threads support" ON)
option(AST_WITH_YAML "Build with YAML support" ON)
option(AST_WITH_EXTERNAL_PAL "Use external PAL/ERFA libraries" OFF)
option(AST_WITH_EXTERNAL_CMINPACK "Use external CMINPACK library" OFF)
option(AST_WITH_MEMDEBUG "Enable AST memory leak debugging" OFF)
option(AST_ENABLE_WARNINGS "Enable extra compiler warnings for development builds" OFF)
option(AST_ENABLE_SANITIZERS "Enable address/undefined sanitizers for supported compilers" OFF)
option(AST_ENABLE_COVERAGE "Enable compiler coverage instrumentation for supported compilers" OFF)
option(AST_ENABLE_HUGE_TEST "Build the huge manual stress test converted from testhuge.f" OFF)
option(BUILD_SHARED_LIBS "Build shared libraries" ON)
option(BUILD_TESTING "Build the test program" ON)

# Pick the C standard libast is built against.  The legacy Starlink build
# declared C99; C11 is source-compatible (no removed APIs, no keyword
# collisions).  The number of digits used in AST's serialized output
# (`AST__DBL_DIG`) no longer depends on this choice: under C11 it comes
# from `DBL_DECIMAL_DIG`, and the C99 fallback (`DBL_DIG + 2`) is defined
# to equal it for IEEE-754 binary64, so output is identical (17 digits)
# either way.  Default stays "99" until the project broadly adopts C11.
set(AST_C_STANDARD "99" CACHE STRING "C standard for libast (99 or 11)")
set_property(CACHE AST_C_STANDARD PROPERTY STRINGS "99" "11")

# ============================================================
# Developer build options
# ============================================================
set(AST_WARNING_FLAGS)
set(AST_SANITIZER_COMPILE_FLAGS)
set(AST_SANITIZER_LINK_FLAGS)
set(AST_COVERAGE_COMPILE_FLAGS)
set(AST_COVERAGE_LINK_FLAGS)

if(AST_ENABLE_WARNINGS)
    if(CMAKE_C_COMPILER_ID STREQUAL "GNU")
        list(APPEND AST_WARNING_FLAGS
            -Wall
            -Wextra
            -Wpedantic
            -Wformat=2
            -Wformat-security
            -Wstrict-prototypes
            -Wmissing-prototypes
            -Wstringop-overflow=2
        )
    elseif(CMAKE_C_COMPILER_ID MATCHES "Clang")
        list(APPEND AST_WARNING_FLAGS
            -Wall
            -Wextra
            -Wpedantic
            -Wformat=2
            -Wformat-security
            -Wstrict-prototypes
            -Wmissing-prototypes
        )
    else()
        message(WARNING "AST_ENABLE_WARNINGS is ON, but no warning profile is defined for compiler ${CMAKE_C_COMPILER_ID}")
    endif()
endif()

if(AST_ENABLE_SANITIZERS)
    if(CMAKE_C_COMPILER_ID STREQUAL "GNU" OR CMAKE_C_COMPILER_ID MATCHES "Clang")
        list(APPEND AST_SANITIZER_COMPILE_FLAGS
            -fno-omit-frame-pointer
            -fsanitize=address,undefined
        )
        list(APPEND AST_SANITIZER_LINK_FLAGS
            -fno-omit-frame-pointer
            -fsanitize=address,undefined
        )
    else()
        message(WARNING "AST_ENABLE_SANITIZERS is ON, but sanitizers are not configured for compiler ${CMAKE_C_COMPILER_ID}")
    endif()
endif()

if(AST_ENABLE_COVERAGE AND AST_ENABLE_SANITIZERS)
    message(FATAL_ERROR "AST_ENABLE_COVERAGE and AST_ENABLE_SANITIZERS cannot be enabled together")
endif()

if(AST_ENABLE_COVERAGE)
    if(CMAKE_C_COMPILER_ID STREQUAL "GNU")
        list(APPEND AST_COVERAGE_COMPILE_FLAGS
            -O0
            -g
            --coverage
        )
        list(APPEND AST_COVERAGE_LINK_FLAGS
            --coverage
        )
    elseif(CMAKE_C_COMPILER_ID MATCHES "Clang")
        list(APPEND AST_COVERAGE_COMPILE_FLAGS
            -O0
            -g
            -fprofile-instr-generate
            -fcoverage-mapping
        )
        list(APPEND AST_COVERAGE_LINK_FLAGS
            -fprofile-instr-generate
            -fcoverage-mapping
        )
    else()
        message(WARNING "AST_ENABLE_COVERAGE is ON, but no coverage profile is defined for compiler ${CMAKE_C_COMPILER_ID}")
    endif()
endif()

function(ast_apply_dev_options target_name)
    if(AST_WARNING_FLAGS)
        target_compile_options(${target_name} PRIVATE ${AST_WARNING_FLAGS})
    endif()
    if(AST_SANITIZER_COMPILE_FLAGS)
        target_compile_options(${target_name} PRIVATE ${AST_SANITIZER_COMPILE_FLAGS})
    endif()
    if(AST_SANITIZER_LINK_FLAGS)
        target_link_options(${target_name} PRIVATE ${AST_SANITIZER_LINK_FLAGS})
    endif()
    if(AST_COVERAGE_COMPILE_FLAGS)
        target_compile_options(${target_name} PRIVATE ${AST_COVERAGE_COMPILE_FLAGS})
    endif()
    if(AST_COVERAGE_LINK_FLAGS)
        target_link_options(${target_name} PRIVATE ${AST_COVERAGE_LINK_FLAGS})
    endif()
endfunction()

# ============================================================
# System checks (replacing autoconf checks)
# ============================================================
check_include_file(stdarg.h HAVE_STDARG_H)
check_include_file(execinfo.h HAVE_EXECINFO_H)

check_function_exists(isnan HAVE_ISNAN)
check_function_exists(isfinite HAVE_ISFINITE)
check_function_exists(strerror_r HAVE_STRERROR_R)
check_function_exists(strtok_r HAVE_STRTOK_R)
check_function_exists(vsnprintf HAVE_VSNPRINTF)
check_function_exists(backtrace HAVE_BACKTRACE)

check_type_size("long double" LONG_DOUBLE)
check_type_size("int64_t" INT64_T)
check_type_size("uint64_t" UINT64_T)
check_type_size("long" SIZEOF_LONG)
check_type_size("long long" SIZEOF_LONG_LONG)

# Check for isnan/isfinite declarations in math.h
check_c_source_compiles("
    #include <math.h>
    int main() { int x = isnan(0.0); return x; }
" HAVE_DECL_ISNAN)

check_c_source_compiles("
    #include <math.h>
    int main() { int x = isfinite(0.0); return x; }
" HAVE_DECL_ISFINITE)

# Check for __func__ or __FUNCTION__
check_c_source_compiles("
    int main() { const char* name = __func__; return 0; }
" HAVE___FUNC__)

check_c_source_compiles("
    int main() { const char* name = __FUNCTION__; return 0; }
" HAVE___FUNCTION__)

# Test for the non-ANSI sscanf behaviour
check_c_source_compiles("
    #include <stdio.h>
    #include <stdlib.h>
    int main() {
        char foo[] = \" name 1111.1 \";
        char bar[8];
        float ff;
        int nc = 0;
        sscanf(foo, \" %s %f %n\", bar, &ff, &nc);
        return (nc != 13) ? 0 : 1;
    }
" SSCANF_IS_ANSI)
if(NOT SSCANF_IS_ANSI)
    set(HAVE_NONANSI_SSCANF 1)
endif()

# ============================================================
# Optional Fortran interface
# ============================================================
if(AST_BUILD_FORTRAN)
    # If no Fortran compiler is set, try to find gfortran or a versioned
    # gfortran-NN (e.g. from Homebrew on macOS which does not create an
    # unversioned symlink). Pick the newest version available.
    if(NOT DEFINED CMAKE_Fortran_COMPILER AND NOT DEFINED ENV{FC})
        find_program(_FC_PLAIN gfortran)
        if(_FC_PLAIN)
            set(CMAKE_Fortran_COMPILER "${_FC_PLAIN}")
        else()
            # Search PATH for versioned gfortran-NN (e.g. Homebrew, conda).
            # Try versions from newest to oldest.
            foreach(_ver RANGE 20 8 -1)
                find_program(_FC_VERSIONED gfortran-${_ver})
                if(_FC_VERSIONED)
                    set(CMAKE_Fortran_COMPILER "${_FC_VERSIONED}")
                    message(STATUS "No plain gfortran found; using gfortran-${_ver}")
                    break()
                endif()
                unset(_FC_VERSIONED CACHE)
            endforeach()
        endif()
    endif()

    enable_language(Fortran)

    # Determine the type for trailing Fortran string lengths (TRAIL_TYPE).
    # gfortran 8 and later pass hidden string lengths as size_t rather than
    # int, whatever the word size -- on a 32-bit target size_t is int-sized
    # anyway, so gating this on a 64-bit build (as this used to) only made the
    # answer disagree with the autotools builds for no benefit.
    #
    # Known gap, in both build systems: the Starlink macro additionally uses
    # long for 64-bit Intel and Sun Fortran, and probes anything else non-GNU.
    # Here, as in star_compat/starlink_compat.m4, non-GNU compilers get int.
    if(CMAKE_Fortran_COMPILER_ID STREQUAL "GNU"
       AND CMAKE_Fortran_COMPILER_VERSION VERSION_GREATER_EQUAL 8)
        set(TRAIL_TYPE "size_t")
    else()
        set(TRAIL_TYPE "int")
    endif()

    # Does a Fortran REAL function return its result as a double, the way f2c
    # does, or as a float?  This cannot be read off the compiler's identity: it
    # is a property of the calling convention, and gfortran uses the f2c one
    # only when given -ff2c.  So measure it, the same way the autotools build
    # does (STAR_CNF_F2C_COMPATIBLE in star_compat/starlink_compat.m4): define
    # a C function returning a float, call it from Fortran as a REAL function,
    # and see what arrives.  A float-returning convention hands back the 1.0
    # that was sent; a double-returning one reads the float's bits as a double
    # and gets something else, which the probe detects by the result comparing
    # equal to zero.
    #
    # Passing two sources of different languages to try_run() needs CMake 3.25;
    # below that, keep the old assumption, which is right for every compiler
    # not explicitly asked for the f2c convention.
    set(REAL_FUNCTION_TYPE "float")
    if(CMAKE_Fortran_COMPILER_ID STREQUAL "GNU"
       AND CMAKE_VERSION VERSION_LESS 3.25)
        message(STATUS
            "CMake < 3.25: assuming Fortran REAL functions return float "
            "(configure with -ff2c and CMake 3.25+ to have this measured)")
    elseif(CMAKE_Fortran_COMPILER_ID STREQUAL "GNU"
           AND CMAKE_CROSSCOMPILING
           AND NOT CMAKE_CROSSCOMPILING_EMULATOR)
        message(STATUS
            "Cross compiling without an emulator: assuming Fortran REAL "
            "functions return float")
    elseif(CMAKE_Fortran_COMPILER_ID STREQUAL "GNU")
        set(_f2c_dir "${CMAKE_CURRENT_BINARY_DIR}/CMakeFiles/f2c_probe")
        file(WRITE "${_f2c_dir}/fred.c" "\
float fred_() {
   return 1.0f;
}
")
        file(WRITE "${_f2c_dir}/f2ctest.f" "\
      PROGRAM F2CTEST
      REAL FRED
      REAL R
      R = FRED()
      IF ( R .NE. 0.0 ) THEN
         WRITE(*,*) 'no'
      ELSE
         WRITE(*,*) 'yes'
      ENDIF
      END
")
        try_run(AST_F2C_RUN_RESULT AST_F2C_COMPILE_RESULT
            "${_f2c_dir}/build"
            SOURCES "${_f2c_dir}/f2ctest.f" "${_f2c_dir}/fred.c"
            RUN_OUTPUT_VARIABLE _f2c_output)
        if(NOT AST_F2C_COMPILE_RESULT)
            message(WARNING
                "f2c compatibility probe would not build; assuming Fortran "
                "REAL functions return float")
        elseif(AST_F2C_RUN_RESULT STREQUAL "FAILED_TO_RUN")
            message(WARNING
                "f2c compatibility probe would not run; assuming Fortran "
                "REAL functions return float")
        elseif(_f2c_output MATCHES "yes")
            set(REAL_FUNCTION_TYPE "double")
        endif()
        message(STATUS
            "Fortran REAL functions return ${REAL_FUNCTION_TYPE}")
    endif()

    # Determine the blank common symbol. gfortran 4+ uses __BLNK__,
    # other compilers typically use _BLNK__.
    if(CMAKE_Fortran_COMPILER_ID STREQUAL "GNU")
        set(BLANK_COMMON_SYMBOL "__BLNK__")
    else()
        set(BLANK_COMMON_SYMBOL "_BLNK__")
    endif()

    # Generate f77.h from f77.h.in
    configure_file(
        "${CMAKE_CURRENT_SOURCE_DIR}/src/f77.h.in"
        "${CMAKE_CURRENT_BINARY_DIR}/src/f77.h"
        @ONLY
    )

    # Check for optional Fortran compiler flags needed by the test programs.
    include(CheckFortranCompilerFlag)
    set(AST_FORTRAN_TEST_FLAGS "")
    foreach(flag -fallow-argument-mismatch -fno-range-check -Wno-real-constant-widening)
        string(MAKE_C_IDENTIFIER "HAVE_FC${flag}" varname)
        check_fortran_compiler_flag("${flag}" ${varname})
        if(${varname})
            list(APPEND AST_FORTRAN_TEST_FLAGS "${flag}")
        endif()
    endforeach()

    # The Fortran test programs are linked by the Fortran driver, which does not
    # pull in the sanitizer runtime of its own accord.  libast and the grf
    # modules they link are compiled with -fsanitize, so without the same flag
    # on the Fortran link the __asan_* references in those objects go
    # unresolved and every Fortran test fails to link.  The flags are probed
    # against the Fortran compiler rather than assumed from the C one, because
    # the two need not be from the same vendor -- flang against clang is a
    # supported combination here.
    #
    # Each flag is probed with itself on the link line as well as the compile
    # line, which is how it is used below.  check_fortran_compiler_flag alone
    # only compiles with the flag, so a sanitizer flag always "fails" it: the
    # probe object gets __asan_* references and then links without the runtime
    # that defines them.
    set(AST_FORTRAN_SANITIZER_FLAGS "")
    foreach(flag ${AST_SANITIZER_COMPILE_FLAGS})
        string(MAKE_C_IDENTIFIER "HAVE_FC${flag}" varname)
        set(CMAKE_REQUIRED_LINK_OPTIONS "${flag}")
        check_fortran_compiler_flag("${flag}" ${varname})
        unset(CMAKE_REQUIRED_LINK_OPTIONS)
        if(${varname})
            list(APPEND AST_FORTRAN_SANITIZER_FLAGS "${flag}")
        endif()
    endforeach()
    if(AST_ENABLE_SANITIZERS AND NOT AST_FORTRAN_SANITIZER_FLAGS)
        message(WARNING
            "AST_ENABLE_SANITIZERS is ON but ${CMAKE_Fortran_COMPILER_ID} Fortran "
            "accepts none of the sanitizer flags; the Fortran tests will not link")
    endif()
endif()

# ============================================================
# Optional dependencies
# ============================================================

# pthreads
set(THREADS_PREFER_PTHREAD_FLAG TRUE)
if(AST_WITH_PTHREADS)
    find_package(Threads)
    if(TARGET Threads::Threads)
        set(HAVE_PTHREADS 1)
    else()
        set(HAVE_PTHREADS 0)
        message(STATUS "pthreads not found - building without thread support")
    endif()
else()
    set(HAVE_PTHREADS 0)
endif()

# YAML
if(AST_WITH_YAML)
    find_library(YAML_LIBRARY NAMES yaml)
    find_path(YAML_INCLUDE_DIR yaml.h)
    if(YAML_LIBRARY AND YAML_INCLUDE_DIR)
        set(HAVE_YAML 1)
        message(STATUS "Found libyaml: ${YAML_LIBRARY}")
    else()
        set(HAVE_YAML 0)
        message(STATUS "libyaml not found - building without YAML support")
    endif()
else()
    set(HAVE_YAML 0)
endif()

# External PAL
if(AST_WITH_EXTERNAL_PAL)
    find_library(PAL_LIBRARY NAMES pal)
    if(NOT PAL_LIBRARY)
        message(FATAL_ERROR "External PAL library requested but not found")
    endif()
endif()

# External CMINPACK
if(AST_WITH_EXTERNAL_CMINPACK)
    find_library(CMINPACK_LIBRARY NAMES cminpack)
    if(NOT CMINPACK_LIBRARY)
        message(FATAL_ERROR "External CMINPACK library requested but not found")
    endif()
endif()

# ============================================================
# Generate config.h
# ============================================================
configure_file(
    "${CMAKE_CURRENT_SOURCE_DIR}/cmake/config.h.cmake.in"
    "${CMAKE_CURRENT_BINARY_DIR}/config.h"
)

# ============================================================
# Generate version.h from version.h.in
# ============================================================
set(PACKAGE_VERSION "${PROJECT_VERSION}")
set(PACKAGE_VERSION_MAJOR "${PROJECT_VERSION_MAJOR}")
set(PACKAGE_VERSION_MINOR "${PROJECT_VERSION_MINOR}")
set(PACKAGE_VERSION_RELEASE "${PROJECT_VERSION_PATCH}")
configure_file(
    "${CMAKE_CURRENT_SOURCE_DIR}/cmake/version.h.cmake.in"
    "${CMAKE_CURRENT_BINARY_DIR}/src/version.h"
)

# ============================================================
# Build messgen (host tool) and generate ast_err.h / AST_ERR
# ============================================================
# messgen is built as a native host tool from the vendored source
# (star_compat/messgen.c) and used at build time to generate the C
# error-code header and, when Fortran support is enabled, the Fortran
# include file.
add_executable(messgen star_compat/messgen.c)
# messgen.c is vendored upstream code; suppress the -Wformat-overflow warning
# it triggers.
include(CheckCCompilerFlag)
check_c_compiler_flag(-Wno-format-overflow HAVE_WNO_FORMAT_OVERFLOW)
if(HAVE_WNO_FORMAT_OVERFLOW)
    target_compile_options(messgen PRIVATE -Wno-format-overflow)
endif()

if(AST_BUILD_FORTRAN)
    set(MESSGEN_FLAGS -c -F)
    set(MESSGEN_OUTPUTS
        "${CMAKE_CURRENT_BINARY_DIR}/ast_err.h"
        "${CMAKE_CURRENT_BINARY_DIR}/AST_ERR"
    )
else()
    set(MESSGEN_FLAGS -c)
    set(MESSGEN_OUTPUTS
        "${CMAKE_CURRENT_BINARY_DIR}/ast_err.h"
    )
endif()

add_custom_command(
    OUTPUT ${MESSGEN_OUTPUTS}
    COMMAND messgen ${MESSGEN_FLAGS} "${CMAKE_CURRENT_SOURCE_DIR}/ast_err.msg"
    WORKING_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}"
    DEPENDS messgen "${CMAKE_CURRENT_SOURCE_DIR}/ast_err.msg"
    COMMENT "Generating ast_err.h from ast_err.msg"
)

# ============================================================
# Configure object.h (substitute @THREADS@)
# ============================================================
if(HAVE_PTHREADS)
    set(THREADS "1")
else()
    set(THREADS "0")
endif()
configure_file(
    "${CMAKE_CURRENT_SOURCE_DIR}/src/object.h.in"
    "${CMAKE_CURRENT_BINARY_DIR}/src/object.h"
    @ONLY
)

# ============================================================
# Generate ast.h via the makeh Perl script
# ============================================================
find_program(PERL perl REQUIRED)

# List of header files that contribute to ast.h, in order
set(AST_H_FILES
    src/xml.h
    wcslib/wcstrig.h
    wcslib/proj.h
    src/memory.h
    src/error.h
    src/globals.h
    src/unit.h
    ast_err.h
    src/version.h
    src/object.h
    src/keymap.h
    src/table.h
    src/fitstable.h
    src/pointset.h
    src/axis.h
    src/skyaxis.h
    src/mapping.h
    src/cmpmap.h
    src/dssmap.h
    src/grismmap.h
    src/intramap.h
    src/splinemap.h
    src/lutmap.h
    src/mathmap.h
    src/matrixmap.h
    src/pcdmap.h
    src/permmap.h
    src/polymap.h
    src/chebymap.h
    src/ratemap.h
    src/normmap.h
    src/shiftmap.h
    src/slamap.h
    src/specmap.h
    src/sphmap.h
    src/timemap.h
    src/selectormap.h
    src/switchmap.h
    src/tranmap.h
    src/unitmap.h
    src/unitnormmap.h
    src/wcsmap.h
    src/winmap.h
    src/xphmap.h
    src/zoommap.h
    src/frame.h
    src/cmpframe.h
    src/specfluxframe.h
    src/fluxframe.h
    src/frameset.h
    src/plot.h
    src/plot3d.h
    src/skyframe.h
    src/specframe.h
    src/dsbspecframe.h
    src/region.h
    src/box.h
    src/circle.h
    src/cmpregion.h
    src/ellipse.h
    src/interval.h
    src/moc.h
    src/nullregion.h
    src/pointlist.h
    src/polygon.h
    src/prism.h
    src/stc.h
    src/stcresourceprofile.h
    src/stcsearchlocation.h
    src/stccatalogentrylocation.h
    src/stcobsdatalocation.h
    src/timeframe.h
    src/channel.h
    src/yamlchan.h
    src/fitschan.h
    src/mocchan.h
    src/stcschan.h
    src/xmlchan.h
)

# Build the list of dependencies for ast.h generation
set(MAKEH_DEPS
    "${CMAKE_CURRENT_SOURCE_DIR}/makeh"
    "${CMAKE_CURRENT_SOURCE_DIR}/cmake/gen_ast_h.sh"
    "${CMAKE_CURRENT_BINARY_DIR}/config.h"
    "${CMAKE_CURRENT_BINARY_DIR}/ast_err.h"
    "${CMAKE_CURRENT_BINARY_DIR}/src/version.h"
    "${CMAKE_CURRENT_BINARY_DIR}/src/object.h"
)
foreach(hfile IN LISTS AST_H_FILES)
    if(NOT "${hfile}" STREQUAL "ast_err.h"
       AND NOT "${hfile}" STREQUAL "src/version.h"
       AND NOT "${hfile}" STREQUAL "src/object.h")
        list(APPEND MAKEH_DEPS "${CMAKE_CURRENT_SOURCE_DIR}/${hfile}")
    endif()
endforeach()

add_custom_command(
    OUTPUT "${CMAKE_CURRENT_BINARY_DIR}/ast.h"
    COMMAND "${CMAKE_CURRENT_SOURCE_DIR}/cmake/gen_ast_h.sh"
        "${CMAKE_CURRENT_SOURCE_DIR}"
        "${CMAKE_CURRENT_BINARY_DIR}"
        "${PERL}"
        "${CMAKE_C_COMPILER}"
        "${CMAKE_CURRENT_BINARY_DIR}/ast.h"
        ${AST_H_FILES}
    DEPENDS ${MAKEH_DEPS}
    COMMENT "Generating ast.h"
)
if(AST_BUILD_FORTRAN)
    add_custom_target(ast_codegen
        DEPENDS
            "${CMAKE_CURRENT_BINARY_DIR}/ast.h"
            "${CMAKE_CURRENT_BINARY_DIR}/ast_err.h"
            "${CMAKE_CURRENT_BINARY_DIR}/AST_ERR"
    )
else()
    add_custom_target(ast_codegen
        DEPENDS
            "${CMAKE_CURRENT_BINARY_DIR}/ast.h"
            "${CMAKE_CURRENT_BINARY_DIR}/ast_err.h"
    )
endif()

# ============================================================
# Fortran support: astbad utility and AST_PAR generation
# ============================================================
if(AST_BUILD_FORTRAN)
    # Build the astbad utility (generates Fortran constants at build time)
    add_executable(astbad src/astbad.c)
    target_include_directories(astbad PRIVATE
        "${CMAKE_CURRENT_SOURCE_DIR}/src"
        "${CMAKE_CURRENT_BINARY_DIR}"
        "${CMAKE_CURRENT_BINARY_DIR}/src"
    )
    target_compile_definitions(astbad PRIVATE HAVE_CONFIG_H)
    ast_apply_dev_options(astbad)

    # Generate AST_PAR from ast_par.source using astbad
    add_custom_command(
        OUTPUT "${CMAKE_CURRENT_BINARY_DIR}/AST_PAR"
        COMMAND ${CMAKE_COMMAND}
            -DASTBAD=$<TARGET_FILE:astbad>
            -DINPUT="${CMAKE_CURRENT_SOURCE_DIR}/ast_par.source"
            -DOUTPUT="${CMAKE_CURRENT_BINARY_DIR}/AST_PAR"
            -P "${CMAKE_CURRENT_SOURCE_DIR}/cmake/gen_ast_par.cmake"
        DEPENDS astbad "${CMAKE_CURRENT_SOURCE_DIR}/ast_par.source"
                "${CMAKE_CURRENT_SOURCE_DIR}/cmake/gen_ast_par.cmake"
        COMMENT "Generating AST_PAR Fortran include file"
    )
    add_custom_target(ast_par DEPENDS "${CMAKE_CURRENT_BINARY_DIR}/AST_PAR")
endif()

# ============================================================
# Internal PAL/ERFA library (via palwrap.c which #includes all sources)
# ============================================================
if(NOT AST_WITH_EXTERNAL_PAL)
    add_library(ast_pal OBJECT palwrap.c)
    target_include_directories(ast_pal PRIVATE
        "${CMAKE_CURRENT_SOURCE_DIR}"
        "${CMAKE_CURRENT_BINARY_DIR}"
    )
    target_compile_definitions(ast_pal PRIVATE HAVE_CONFIG_H)
    set_target_properties(ast_pal PROPERTIES POSITION_INDEPENDENT_CODE ON)
    ast_apply_dev_options(ast_pal)
endif()

# ============================================================
# Internal CMINPACK library
# ============================================================
if(NOT AST_WITH_EXTERNAL_CMINPACK)
    set(CMINPACK_SOURCES
        cminpack/lmder1.c
        cminpack/lmder.c
        cminpack/dpmpar.c
        cminpack/enorm.c
        cminpack/qrfac.c
        cminpack/lmpar.c
        cminpack/qrsolv.c
    )
    add_library(ast_cminpack OBJECT ${CMINPACK_SOURCES})
    target_include_directories(ast_cminpack PRIVATE
        "${CMAKE_CURRENT_SOURCE_DIR}/cminpack"
    )
    set_target_properties(ast_cminpack PROPERTIES POSITION_INDEPENDENT_CODE ON)
    ast_apply_dev_options(ast_cminpack)
endif()

# ============================================================
# Main AST library sources
# ============================================================
set(AST_SOURCES
    src/yamlchan.c
    src/axis.c
    src/box.c
    src/channel.c
    src/chebymap.c
    src/circle.c
    src/cmpframe.c
    src/cmpmap.c
    src/cmpregion.c
    src/dsbspecframe.c
    src/dssmap.c
    src/ellipse.c
    src/error.c
    src/fitschan.c
    src/fitstable.c
    src/fluxframe.c
    src/frame.c
    src/frameset.c
    src/globals.c
    src/grismmap.c
    src/interval.c
    src/intramap.c
    src/keymap.c
    src/loader.c
    src/lutmap.c
    src/mapping.c
    src/mathmap.c
    src/matrixmap.c
    src/memory.c
    src/moc.c
    src/mocchan.c
    src/normmap.c
    src/nullregion.c
    src/object.c
    src/pcdmap.c
    src/permmap.c
    src/plot.c
    src/plot3d.c
    src/pointlist.c
    src/pointset.c
    src/polygon.c
    src/polymap.c
    src/prism.c
    src/ratemap.c
    src/region.c
    src/selectormap.c
    src/shiftmap.c
    src/skyaxis.c
    src/skyframe.c
    src/slamap.c
    src/specfluxframe.c
    src/specframe.c
    src/specmap.c
    src/sphmap.c
    src/splinemap.c
    src/stc.c
    src/stccatalogentrylocation.c
    src/stcobsdatalocation.c
    src/stcresourceprofile.c
    src/stcschan.c
    src/stcsearchlocation.c
    src/switchmap.c
    src/table.c
    src/timeframe.c
    src/timemap.c
    src/tranmap.c
    src/unit.c
    src/unitmap.c
    src/unitnormmap.c
    src/wcsmap.c
    src/winmap.c
    src/xml.c
    src/xmlchan.c
    src/xphmap.c
    src/zoommap.c
    # WCSLIB sources (compiled directly into libast)
    wcslib/proj.c
    wcslib/tpn.c
    wcslib/wcstrig.c
)

# Fortran wrapper sources (C files that provide F77 interface)
if(AST_BUILD_FORTRAN)
    set(AST_FORTRAN_SOURCES
        src/c2f77.c
        src/fbox.c
        src/fchannel.c
        src/fchebymap.c
        src/fcircle.c
        src/fcmpframe.c
        src/fcmpmap.c
        src/fcmpregion.c
        src/fdsbspecframe.c
        src/fdssmap.c
        src/fellipse.c
        src/ferror.c
        src/ffitschan.c
        src/ffitstable.c
        src/ffluxframe.c
        src/fframe.c
        src/fframeset.c
        src/fgrismmap.c
        src/finterval.c
        src/fintramap.c
        src/fkeymap.c
        src/flutmap.c
        src/fmapping.c
        src/fmathmap.c
        src/fmatrixmap.c
        src/fmoc.c
        src/fmocchan.c
        src/fnormmap.c
        src/fnullregion.c
        src/fobject.c
        src/fpcdmap.c
        src/fpermmap.c
        src/fplot.c
        src/fplot3d.c
        src/fpointlist.c
        src/fpolygon.c
        src/fpolymap.c
        src/fprism.c
        src/fratemap.c
        src/fregion.c
        src/fselectormap.c
        src/fshiftmap.c
        src/fskyframe.c
        src/fslamap.c
        src/fspecfluxframe.c
        src/fspecframe.c
        src/fspecmap.c
        src/fsphmap.c
        src/fsplinemap.c
        src/fstc.c
        src/fstccatalogentrylocation.c
        src/fstcobsdatalocation.c
        src/fstcresourceprofile.c
        src/fstcschan.c
        src/fstcsearchlocation.c
        src/fswitchmap.c
        src/ftable.c
        src/ftimeframe.c
        src/ftimemap.c
        src/ftranmap.c
        src/funitmap.c
        src/funitnormmap.c
        src/fwcsmap.c
        src/fwinmap.c
        src/fxmlchan.c
        src/fzoommap.c
        src/fyamlchan.c
    )
    list(APPEND AST_SOURCES ${AST_FORTRAN_SOURCES})
endif()

add_library(ast ${AST_SOURCES})
add_dependencies(ast ast_codegen)
if(AST_BUILD_FORTRAN)
    add_dependencies(ast ast_par)
endif()

# Pull in OBJECT libraries
set(AST_OBJECTS "")
if(NOT AST_WITH_EXTERNAL_PAL)
    list(APPEND AST_OBJECTS $<TARGET_OBJECTS:ast_pal>)
endif()
if(NOT AST_WITH_EXTERNAL_CMINPACK)
    list(APPEND AST_OBJECTS $<TARGET_OBJECTS:ast_cminpack>)
endif()
target_sources(ast PRIVATE ${AST_OBJECTS})

target_include_directories(ast
    PRIVATE
        "${CMAKE_CURRENT_SOURCE_DIR}"
        "${CMAKE_CURRENT_SOURCE_DIR}/src"
        "${CMAKE_CURRENT_SOURCE_DIR}/wcslib"
        "${CMAKE_CURRENT_BINARY_DIR}"
        "${CMAKE_CURRENT_BINARY_DIR}/src"
    PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}>
        $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>
)

target_compile_definitions(ast PRIVATE HAVE_CONFIG_H)
if(HAVE_PTHREADS)
    target_compile_definitions(ast PRIVATE THREAD_SAFE)
endif()
if(HAVE_YAML)
    target_compile_definitions(ast PRIVATE YAML)
endif()
if(AST_WITH_MEMDEBUG)
    target_compile_definitions(ast PRIVATE MEM_DEBUG)
endif()

set_target_properties(ast PROPERTIES
    VERSION "${PROJECT_VERSION}"
    SOVERSION "${PROJECT_VERSION_MAJOR}"
    POSITION_INDEPENDENT_CODE ON
    C_STANDARD ${AST_C_STANDARD}
)
ast_apply_dev_options(ast)

# libast references symbols (astGFlush, astPutErr_, etc.) that are provided
# by the satellite libraries (ast_err, ast_grf_*). These are intentionally
# unresolved in libast and resolved at final link time. Allow this.
if(BUILD_SHARED_LIBS)
    if(APPLE)
        target_link_options(ast PRIVATE "-undefined" "dynamic_lookup")
    endif()
endif()

# Link dependencies
target_link_libraries(ast PRIVATE m)
if(HAVE_PTHREADS)
    target_link_libraries(ast PRIVATE Threads::Threads)
endif()
if(HAVE_YAML)
    target_link_libraries(ast PRIVATE ${YAML_LIBRARY})
    target_include_directories(ast PRIVATE ${YAML_INCLUDE_DIR})
endif()
if(AST_WITH_EXTERNAL_PAL)
    target_link_libraries(ast PRIVATE ${PAL_LIBRARY})
endif()
if(AST_WITH_EXTERNAL_CMINPACK)
    target_link_libraries(ast PRIVATE ${CMINPACK_LIBRARY})
endif()

# ============================================================
# Satellite libraries: these reference symbols from libast and are
# designed to be linked alongside it. Build as static libraries
# with PIC so they can be linked into shared executables.
# ============================================================
set(SATELLITE_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/src"
    "${CMAKE_CURRENT_SOURCE_DIR}"
    "${CMAKE_CURRENT_BINARY_DIR}"
    "${CMAKE_CURRENT_BINARY_DIR}/src"
)

# Null error reporting library (default)
add_library(ast_err STATIC src/err_null.c)
target_include_directories(ast_err PRIVATE ${SATELLITE_INCLUDES})
target_compile_definitions(ast_err PRIVATE HAVE_CONFIG_H)
set_target_properties(ast_err PROPERTIES POSITION_INDEPENDENT_CODE ON)
add_dependencies(ast_err ast_codegen)
ast_apply_dev_options(ast_err)

# ============================================================
# PLplot graphics library
# ============================================================
find_package(PkgConfig QUIET)
if(PKG_CONFIG_FOUND)
    pkg_check_modules(PLPLOT QUIET plplot)
endif()

if(PLPLOT_FOUND)
    message(STATUS "Found PLplot: ${PLPLOT_LIBRARIES}")
else()
    message(STATUS "PLplot not found - building without PLplot support")
endif()

if(PLPLOT_FOUND)
    add_library(ast_grf_plplot STATIC src/grf_plplot.c)
    target_include_directories(ast_grf_plplot PRIVATE ${SATELLITE_INCLUDES} ${PLPLOT_INCLUDE_DIRS})
    target_compile_definitions(ast_grf_plplot PRIVATE HAVE_CONFIG_H)
    set_target_properties(ast_grf_plplot PROPERTIES POSITION_INDEPENDENT_CODE ON)
    add_dependencies(ast_grf_plplot ast_codegen)
    ast_apply_dev_options(ast_grf_plplot)

    # plstrl() computes string width in mm but is a private PLplot symbol.
    # The header (plplotP.h) may be installed even when the symbol is not
    # exported from the shared library, so check that we can actually link
    # against it.
    include(CheckSymbolExists)
    set(CMAKE_REQUIRED_INCLUDES ${PLPLOT_INCLUDE_DIRS})
    set(CMAKE_REQUIRED_LIBRARIES ${PLPLOT_LIBRARIES})
    list(JOIN PLPLOT_LIBRARY_DIRS ";" _plplot_libdirs)
    if(_plplot_libdirs)
        set(CMAKE_REQUIRED_LINK_DIRECTORIES ${_plplot_libdirs})
    endif()
    check_symbol_exists(plstrl "plplotP.h" HAVE_PLSTRL)
    unset(CMAKE_REQUIRED_INCLUDES)
    unset(CMAKE_REQUIRED_LIBRARIES)
    unset(CMAKE_REQUIRED_LINK_DIRECTORIES)
    if(HAVE_PLSTRL)
        target_compile_definitions(ast_grf_plplot PRIVATE HAVE_PLSTRL)
    endif()

    add_library(ast_grf3d_plplot STATIC src/grf3d_plplot.c)
    target_include_directories(ast_grf3d_plplot PRIVATE ${SATELLITE_INCLUDES} ${PLPLOT_INCLUDE_DIRS})
    target_compile_definitions(ast_grf3d_plplot PRIVATE HAVE_CONFIG_H)
    set_target_properties(ast_grf3d_plplot PROPERTIES POSITION_INDEPENDENT_CODE ON)
    add_dependencies(ast_grf3d_plplot ast_codegen)
    ast_apply_dev_options(ast_grf3d_plplot)
    if(HAVE_PLSTRL)
        target_compile_definitions(ast_grf3d_plplot PRIVATE HAVE_PLSTRL)
    endif()
endif()

# ============================================================
# Null graphics libraries
# ============================================================
add_library(ast_grf_2.0 STATIC src/grf_2.0.c)
target_include_directories(ast_grf_2.0 PRIVATE ${SATELLITE_INCLUDES})
set_target_properties(ast_grf_2.0 PROPERTIES POSITION_INDEPENDENT_CODE ON)
add_dependencies(ast_grf_2.0 ast_codegen)
ast_apply_dev_options(ast_grf_2.0)

add_library(ast_grf_3.2 STATIC src/grf_3.2.c)
target_include_directories(ast_grf_3.2 PRIVATE ${SATELLITE_INCLUDES})
set_target_properties(ast_grf_3.2 PROPERTIES POSITION_INDEPENDENT_CODE ON)
add_dependencies(ast_grf_3.2 ast_codegen)
ast_apply_dev_options(ast_grf_3.2)

add_library(ast_grf_5.6 STATIC src/grf_5.6.c)
target_include_directories(ast_grf_5.6 PRIVATE ${SATELLITE_INCLUDES})
set_target_properties(ast_grf_5.6 PROPERTIES POSITION_INDEPENDENT_CODE ON)
add_dependencies(ast_grf_5.6 ast_codegen)
ast_apply_dev_options(ast_grf_5.6)

add_library(ast_grf3d STATIC src/grf3d.c)
target_include_directories(ast_grf3d PRIVATE ${SATELLITE_INCLUDES})
set_target_properties(ast_grf3d PROPERTIES POSITION_INDEPENDENT_CODE ON)
add_dependencies(ast_grf3d ast_codegen)
ast_apply_dev_options(ast_grf3d)

# Logging/virtual graphics library (no external dependencies)
add_library(ast_grf_log STATIC src/grf_log.c)
target_include_directories(ast_grf_log PRIVATE ${SATELLITE_INCLUDES})
target_compile_definitions(ast_grf_log PRIVATE HAVE_CONFIG_H)
set_target_properties(ast_grf_log PROPERTIES POSITION_INDEPENDENT_CODE ON)
add_dependencies(ast_grf_log ast_codegen)
ast_apply_dev_options(ast_grf_log)

# ============================================================
# Test program
# ============================================================
if(BUILD_TESTING)
    enable_testing()
    add_executable(ast_test ast_test.c)
    target_link_libraries(ast_test PRIVATE
        ast
        ast_grf_2.0
        ast_grf_3.2
        ast_grf_5.6
        ast_grf3d
        ast_err
        m
    )
    target_include_directories(ast_test PRIVATE "${CMAKE_CURRENT_BINARY_DIR}")
    ast_apply_dev_options(ast_test)
    add_test(NAME ast_test COMMAND ast_test)
    add_subdirectory(ast_tester)

    if(AST_ENABLE_COVERAGE)
        if(CMAKE_C_COMPILER_ID STREQUAL "GNU")
            find_program(LCOV_EXECUTABLE lcov)
            find_program(GENHTML_EXECUTABLE genhtml)
            if(LCOV_EXECUTABLE)
                set(AST_COVERAGE_DIR "${CMAKE_CURRENT_BINARY_DIR}/coverage")
                set(AST_COVERAGE_FULL_INFO "${AST_COVERAGE_DIR}/coverage.full.info")
                set(AST_COVERAGE_INFO "${AST_COVERAGE_DIR}/lcov.info")
                add_custom_target(coverage-report
                    COMMAND ${CMAKE_COMMAND} -E make_directory "${AST_COVERAGE_DIR}"
                    COMMAND ${LCOV_EXECUTABLE} --directory "${CMAKE_BINARY_DIR}" --zerocounters
                    COMMAND ${CMAKE_CTEST_COMMAND} --test-dir "${CMAKE_BINARY_DIR}" --output-on-failure
                    COMMAND ${LCOV_EXECUTABLE}
                        --capture
                        --directory "${CMAKE_BINARY_DIR}"
                        --output-file "${AST_COVERAGE_FULL_INFO}"
                        --ignore-errors negative
                        --rc branch_coverage=1
                    COMMAND ${LCOV_EXECUTABLE}
                        --extract "${AST_COVERAGE_FULL_INFO}"
                            "${CMAKE_SOURCE_DIR}/src/*"
                            "${CMAKE_SOURCE_DIR}/ast_tester/*"
                        --output-file "${AST_COVERAGE_INFO}"
                        --ignore-errors unused,negative
                        --rc branch_coverage=1
                    WORKING_DIRECTORY "${CMAKE_BINARY_DIR}"
                    COMMENT "Running tests and generating LCOV report in ${AST_COVERAGE_DIR}"
                    USES_TERMINAL
                )
                if(GENHTML_EXECUTABLE)
                    add_custom_target(coverage-html
                        COMMAND ${CMAKE_COMMAND} -E make_directory "${AST_COVERAGE_DIR}/html"
                        COMMAND ${GENHTML_EXECUTABLE}
                            --branch-coverage
                            --legend
                            --output-directory "${AST_COVERAGE_DIR}/html"
                            "${AST_COVERAGE_INFO}"
                        WORKING_DIRECTORY "${CMAKE_BINARY_DIR}"
                        COMMENT "Generating HTML coverage report in ${AST_COVERAGE_DIR}/html"
                        USES_TERMINAL
                    )
                    add_dependencies(coverage-html coverage-report)
                else()
                    message(STATUS "AST_ENABLE_COVERAGE is ON but genhtml was not found; coverage-html target will not be available")
                endif()
            else()
                message(STATUS "AST_ENABLE_COVERAGE is ON but lcov was not found; coverage-report target will not be available")
            endif()
        elseif(CMAKE_C_COMPILER_ID MATCHES "Clang")
            message(STATUS "AST_ENABLE_COVERAGE is ON for Clang; instrumentation is enabled, but the coverage-report target is currently only generated for GNU + lcov")
        endif()
    endif()
endif()

# ============================================================
# Installation
# ============================================================
install(TARGETS ast ast_err ast_grf_2.0 ast_grf_3.2 ast_grf_5.6 ast_grf3d ast_grf_log
    EXPORT astTargets
    LIBRARY DESTINATION "${CMAKE_INSTALL_LIBDIR}"
    ARCHIVE DESTINATION "${CMAKE_INSTALL_LIBDIR}"
    RUNTIME DESTINATION "${CMAKE_INSTALL_BINDIR}"
)

if(PLPLOT_FOUND)
    install(TARGETS ast_grf_plplot ast_grf3d_plplot
        EXPORT astTargets
        LIBRARY DESTINATION "${CMAKE_INSTALL_LIBDIR}"
        ARCHIVE DESTINATION "${CMAKE_INSTALL_LIBDIR}"
        RUNTIME DESTINATION "${CMAKE_INSTALL_BINDIR}"
    )
endif()

set(AST_INSTALL_HEADERS
    "${CMAKE_CURRENT_BINARY_DIR}/ast.h"
    "${CMAKE_CURRENT_BINARY_DIR}/ast_err.h"
    src/grf.h
    src/grf3d.h
    src/pl3d.h
)
if(AST_BUILD_FORTRAN)
    list(APPEND AST_INSTALL_HEADERS
        "${CMAKE_CURRENT_BINARY_DIR}/AST_PAR"
        GRF_PAR
    )
endif()
install(FILES ${AST_INSTALL_HEADERS}
    DESTINATION "${CMAKE_INSTALL_INCLUDEDIR}"
)

# ============================================================
# pkg-config
# ============================================================
configure_file(
    "${CMAKE_CURRENT_SOURCE_DIR}/cmake/ast.pc.in"
    "${CMAKE_CURRENT_BINARY_DIR}/ast.pc"
    @ONLY
)
install(FILES "${CMAKE_CURRENT_BINARY_DIR}/ast.pc"
    DESTINATION "${CMAKE_INSTALL_LIBDIR}/pkgconfig"
)

# ============================================================
# CMake package config
# ============================================================
install(EXPORT astTargets
    FILE astTargets.cmake
    NAMESPACE AST::
    DESTINATION "${CMAKE_INSTALL_LIBDIR}/cmake/ast"
)

configure_package_config_file(
    "${CMAKE_CURRENT_SOURCE_DIR}/cmake/astConfig.cmake.in"
    "${CMAKE_CURRENT_BINARY_DIR}/astConfig.cmake"
    INSTALL_DESTINATION "${CMAKE_INSTALL_LIBDIR}/cmake/ast"
)

write_basic_package_version_file(
    "${CMAKE_CURRENT_BINARY_DIR}/astConfigVersion.cmake"
    VERSION "${PROJECT_VERSION}"
    COMPATIBILITY SameMajorVersion
)

install(FILES
    "${CMAKE_CURRENT_BINARY_DIR}/astConfig.cmake"
    "${CMAKE_CURRENT_BINARY_DIR}/astConfigVersion.cmake"
    DESTINATION "${CMAKE_INSTALL_LIBDIR}/cmake/ast"
)
