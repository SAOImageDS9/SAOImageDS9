/*
 * num_standalone.c - Minimal standalone implementation of Starlink NUM
 * (Numeric Utility) functions needed by AST Fortran tests.
 *
 * NUM provides type conversion functions declared EXTERNAL in NUM_DEC.
 * These are trivial casts: NUM_DTOD (double->double identity),
 * NUM_ITOD (integer->double), NUM_RTOD (real->double).
 */

#include "f77.h"

F77_DOUBLE_FUNCTION(num_dtod)( DOUBLE(x) ) { return *x; }
F77_DOUBLE_FUNCTION(num_itod)( INTEGER(x) ) { return (double)*x; }
F77_DOUBLE_FUNCTION(num_rtod)( REAL(x) ) { return (double)*x; }
