/*
 *	Copyright (c) 1999-2003 Smithsonian Astrophysical Observatory
 */

/*
 *
 * tl.h -- declarations for tl parsing
 *
 */

#ifndef	__tl_h
#define	__tl_h

#include "prsetup.h"

_PRbeg

double tlp2i _PRx((double dp, double tlmin, double binsiz, int type));
int    itlp2i  _PRx((double dp, double tlmin, double binsiz, int type));
double tli2p _PRx((double di, double tlmin, double binsiz, int type));
double tldim _PRx((double tlmin, double tlmax, double binsiz, int type));

_PRend

#endif
