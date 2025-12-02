/*
 *	Copyright (c) 1999-2003 Smithsonian Astrophysical Observatory
 */

/*
 *
 * winprocess.h - include file for the process handling
 *
 *
 */

#ifndef	__winprocess_h
#define	__winprocess_h

#if HAVE_CONFIG_H
#include "conf.h"
#endif
#include <stdio.h>
#ifdef HAVE_UNISTD_H
#include <unistd.h>
#endif
#ifdef HAVE_MALLOC_H
#include <malloc.h>
#endif
#ifdef HAVE_STDLIB_H
#include <stdlib.h>
#endif
#include "prsetup.h"

#if defined(HAVE_CYGWIN) || defined(WIN32)

_PRbeg

int WinProcessOpen _PRx((char *cmd, void **ichan, void **ochan, void **pid));
void *WinProcessRead _PRx((void *fd, void *buf, int maxbytes, int *got));
int WinProcessWrite _PRx((void *fd, void *buf, int nbytes));
int WinProcessClose _PRx((void *pid, int *exit_status));
int WinProcessGetChan _PRx((void *pid, void **ichan, void **ochan));

_PRend

#endif

#endif /* __winprocess.h */
