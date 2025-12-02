/*
 *	Copyright (c) 1999-2003 Smithsonian Astrophysical Observatory
 */

/*
 *
 * mkrtemp.h -- declarations for mkrtemp, a fancy version of mkstemp
 *
 */

#ifndef	__mkrtemp_h
#define	__mkrtemp_h

#if HAVE_CONFIG_H
#include "conf.h"
#endif

#include <sys/types.h>
#include <sys/stat.h>
#include <sys/time.h>
#include <fcntl.h>
#include <errno.h>
#include <stdio.h>
#include <ctype.h>
#ifdef HAVE_STRING_H
#include <string.h>
#endif
#ifdef HAVE_UNISTD_H
#include <unistd.h>
#endif
#ifdef HAVE_STDLIB_H
#include <stdlib.h>
#endif
#include "prsetup.h"
#include "word.h"
#include "xalloc.h"

#ifdef __APPLE__
#define lrand48  random
#define srand48 srandom
#endif

#if HAVE_MINGW32
#define lrand48  rand
#define srand48 srand
#define lstat stat
#endif

_PRbeg

int mkrtemp _PRx((char *prefix, char *suffix, char *path, int len,
		 int doopen));

_PRend

#endif
