/*
 *	Copyright (c) 1999-2003 Smithsonian Astrophysical Observatory
 */

/*
 *
 * strtod.h -- declarations for SAOstrtod()
 *
 */

#ifndef	__strtod_h
#define	__strtod_h

#include "prsetup.h"

extern int SAOdtype;

_PRbeg
double SAOstrtod _PRx((char *s, char **t));
_PRend

#endif
