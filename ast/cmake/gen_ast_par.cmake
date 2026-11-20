# gen_ast_par.cmake
#
# Generate AST_PAR from ast_par.source using the astbad utility.
#
# The astbad program computes platform-specific floating point constants
# (AST__BAD, AST__NAN, AST__NANF) and this script substitutes them into
# the ast_par.source template, converting C-style 'E' exponents to
# Fortran-style 'D' exponents.
#
# Usage:
#   cmake -DASTBAD=/path/to/astbad -DINPUT=ast_par.source -DOUTPUT=AST_PAR -P gen_ast_par.cmake

if(NOT DEFINED ASTBAD OR NOT DEFINED INPUT OR NOT DEFINED OUTPUT)
    message(FATAL_ERROR "ASTBAD, INPUT, and OUTPUT must be defined")
endif()

# Run astbad to get each constant value
execute_process(
    COMMAND "${ASTBAD}" AST__BAD
    OUTPUT_VARIABLE AST_BAD_VALUE
    OUTPUT_STRIP_TRAILING_WHITESPACE
    RESULT_VARIABLE rc
)
if(NOT rc EQUAL 0)
    message(FATAL_ERROR "astbad AST__BAD failed")
endif()

execute_process(
    COMMAND "${ASTBAD}" AST__NAN
    OUTPUT_VARIABLE AST_NAN_VALUE
    OUTPUT_STRIP_TRAILING_WHITESPACE
    RESULT_VARIABLE rc
)
if(NOT rc EQUAL 0)
    message(FATAL_ERROR "astbad AST__NAN failed")
endif()

execute_process(
    COMMAND "${ASTBAD}" AST__NANF
    OUTPUT_VARIABLE AST_NANF_VALUE
    OUTPUT_STRIP_TRAILING_WHITESPACE
    RESULT_VARIABLE rc
)
if(NOT rc EQUAL 0)
    message(FATAL_ERROR "astbad AST__NANF failed")
endif()

# Convert E exponent to D for Fortran double precision
string(REPLACE "E" "D" AST_BAD_VALUE "${AST_BAD_VALUE}")
string(REPLACE "E" "D" AST_NAN_VALUE "${AST_NAN_VALUE}")
string(REPLACE "E" "D" AST_NANF_VALUE "${AST_NANF_VALUE}")

# Read the template
file(READ "${INPUT}" contents)

# Perform substitutions
string(REPLACE "<AST__BAD>" "${AST_BAD_VALUE}" contents "${contents}")
string(REPLACE "<AST__NAN>" "${AST_NAN_VALUE}" contents "${contents}")
string(REPLACE "<AST__NANR>" "${AST_NANF_VALUE}" contents "${contents}")

# Write the output
file(WRITE "${OUTPUT}" "${contents}")

message(STATUS "Generated ${OUTPUT} (AST__BAD=${AST_BAD_VALUE})")
