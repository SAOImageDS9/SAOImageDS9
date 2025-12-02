/*
 *	Copyright (c) 1999-2003 Smithsonian Astrophysical Observatory
 */

/*
 *
 * zprocess.h - include file for the process handling
 *
 * (NB: not called process.h because of a name conflict with cygwin)
 *
 */

#ifndef	__zprocess_h
#define	__zprocess_h

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
#include <sys/time.h>
#include <signal.h>
#include "xlaunch.h"
#include "find.h"

_PRbeg

int ProcessOpen  _PRx((char *cmd, int *inchan, int *outchan, int *pid));
void *ProcessRead  _PRx((int fd, void *buf, int maxbytes, int *got));
int ProcessWrite _PRx((int fd, void *buf, int nbytes));
int ProcessClose _PRx((int pid, int *exit_status));
int ProcessGetChan _PRx((int pid, int *inchan, int *outchan));

_PRend

#endif /* __zprocess.h */
