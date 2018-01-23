/*
 *	Copyright (c) 1999-2003 Smithsonian Astrophysical Observatory
 */

/*
 *
 * xlaunch.h -- declarations for launching a program
 *
 */

#ifndef	__xlaunch_h
#define	__xlaunch_h

#if HAVE_CONFIG_H
#include <conf.h>
#endif

#include <stdio.h>
#include <errno.h>
#include <signal.h>
#include <fcntl.h>                                                       
#include <sys/time.h>
#include <sys/stat.h>
#if HAVE_STRING_H
#include <string.h>
#endif
#if HAVE_STRINGS_H
#include <strings.h>
#endif
#if HAVE_MALLOC_H
#include <malloc.h>
#endif
#if HAVE_UNISTD_H
#include <unistd.h>
#endif
#if HAVE_POSIX_SPAWN
#include <spawn.h>
#endif
#include <xport.h>
#include <word.h>
#include <xalloc.h>
#include <prsetup.h>

#define LAUNCH_ARGS 1024

#define LAUNCH_SPACE '\001'

/* for fork/exec, one of these is required to specify the technique to be used
   by the parent when determining if the child started successfully */
#if !defined(LAUNCH_USE_PIPE) && !defined(LAUNCH_USE_WAITPID)
#define LAUNCH_USE_PIPE 1
#endif
/* ... but not both */
#if defined(LAUNCH_USE_PIPE) && defined(LAUNCH_USE_WAITPID)
#error "LAUNCH_USE_PIPE and LAUNCH_USE_WAITPID are mutually exclusive"
#endif

#ifndef LAUNCH_WAIT_TRIES
#define LAUNCH_WAIT_TRIES  100
#endif
#ifndef LAUNCH_WAIT_MSEC
#define LAUNCH_WAIT_MSEC  5000
#endif

#if HAVE_MINGW32|HAVE_CYGWIN
#define HAVE_SPAWNVP 1
#endif

#if HAVE_MINGW32
/* for now, ensure that MinGW utilizes spawnvp() */
#define LAUNCH_DEFAULT_WHICH 3
#elif HAVE_POSIX_SPAWN
/* use posix_spawn if possible (required for OS X 10.5) */
#define LAUNCH_DEFAULT_WHICH 2
#else
/* use our home-grown version */
#define LAUNCH_DEFAULT_WHICH 1
#endif

_PRbeg

int Launch _PRx((char *cmdstring, int wait, char **stdfiles, int *pipes));
pid_t LaunchPid _PRx((void));

_PRend

#endif
