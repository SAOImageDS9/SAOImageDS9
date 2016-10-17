/*
 *	Copyright (c) 1999-2003 Smithsonian Astrophysical Observatory
 */

/*
 *
 * timedconn.h -- declarations for connect w/ timeout
 *
 */

#ifndef	__timedconn_h
#define	__timedconn_h

#include <prsetup.h>

_PRbeg

int alrmconnect  _PRx((int sockfd, void *saptr, int salen, int nsec));

int noblkconnect _PRx((int sockfd, void *saptr, int salen, int nsec));

_PRend

#endif
