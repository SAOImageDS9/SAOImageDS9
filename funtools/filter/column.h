/*
 *	Copyright (c) 1999-2003 Smithsonian Astrophysical Observatory
 */

/*
 *
 * column.h -- declarations for column processing
 *
 */

#ifndef	__column_h
#define	__column_h

#if HAVE_CONFIG_H
#include "conf.h"
#endif

#ifdef HAVE_STRING_H
#include <string.h>
#endif

#include "prsetup.h"
_PRbeg

void ColumnLoad _PRx((char *ibuf, int size, int n, int convert, void *obuf));

_PRend

#endif
