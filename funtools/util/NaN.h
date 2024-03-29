/*
 *	Copyright (c) 1999-2003 Smithsonian Astrophysical Observatory
 */

/*
 *
 * NaN.h -- include file to deal with IEEE NaN values
 *
 * Idea taken from fitsio2.h in the cfitsio package by William Pence (HEASARC),
 * to whom grateful acknowledgement is made.
 *
 * These functions tests whether the float value is a reserved IEEE
 * value such as a Not-a-Number (NaN), or underflow, overflow, or
 * infinity.   The functions returns 1 if the value is a NaN, overflow
 * or infinity; otherwise it returns 0.
 *
 * isnanf tests floats, isnand tests doubles.
 *
 */
#ifndef	__nan_h
#define	__nan_h

#include "prsetup.h"

#define _BIG_ENDIAN 0

#if _BIG_ENDIAN

#define FNANOFF 0
#define DNANOFF 0

#else

#define FNANOFF 1
#define DNANOFF 3

#endif

#define FNANMASK   0x7F80 /* mask bits 1 - 8; all set on NaNs */
                                     /* all 0 on underflow  or 0. */
 
#define DNANMASK   0x7FF0 /* mask bits 1 - 11; all set on NaNs */
                                     /* all 0 on underflow  or 0. */
 
#ifndef isnanf
typedef union {
  float f; 
  short x[2];
} uffu;

#define isnanf(X) ((((uffu*)&X)->x[FNANOFF] & FNANMASK) == FNANMASK)
#endif

#ifndef isnand
typedef union {
  double d;
  short x[4];
} uddu;

#define isnand(X) ((((uddu*)&X)->x[DNANOFF] & DNANMASK) == DNANMASK)
#endif
 
_PRbeg

float  getnanf _PRx((void));
double getnand _PRx((void));

_PRend

#endif
