/*
 *	Copyright (c) 1999-2003 Smithsonian Astrophysical Observatory
 */

/*
 *
 * tcp.h - include file for tcp support in xpa
 *
 */

#ifndef	__tcp_h
#define	__tcp_h

#include <prsetup.h>

_PRbeg

int gethost _PRx((char *host, int len));
unsigned int gethostip _PRx((char *host));
char *getiphost _PRx((unsigned int ip));

_PRend

#endif
