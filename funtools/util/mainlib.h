/*
 *	Copyright (c) 1999-2003 Smithsonian Astrophysical Observatory
 */

/*
 *
 * mainlib.h
 *
 */

#ifndef	__mainlib_h
#define	__mainlib_h

#if HAVE_CONFIG_H
#include "conf.h"
#endif
#ifdef HAVE_STRING_H
#include <string.h>
#endif
#if HAVE_MALLOC_H
#include <malloc.h>
#endif
#if HAVE_STDLIB_H
#include <stdlib.h>
#endif
#if HAVE_DLFCN_H
#include <dlfcn.h>
#endif
#include <stdio.h>
#include <errno.h>
#include <sys/types.h>
#include "prsetup.h"
#include "xalloc.h"
#include "word.h"
#include "find.h"
#include "gio.h"

/* types of mainlibs we recognize */
#define MAINLIB_ERROR 0
#define MAINLIB_ARGV  1
#define MAINLIB_EXTN  2
#define MAINLIB_TCL   3

/* max values */
#define MAINLIB_CMDS 32
#define MAINLIB_ARGS 32

/* defines the types of callback procedure we use */
typedef int (*MainLibProc)(
#ifdef ANSI_FUNC
    int argc,
    char **argv
#endif
);

/* define init call */
typedef void *(*MainLibInitCall)(
#ifdef ANSI_FUNC
  void
#endif
);

/* define proc call */
typedef int (*MainLibProcessCall)(
#ifdef ANSI_FUNC
  void *ml, char *cmd, char **buf, char *mode
#endif
);

/* define Tcl lookup call */
typedef int (*MainLibTclLookup)(
#ifdef ANSI_FUNC
  void *interp, char *s
#endif
);

/* define Tcl eval call */
typedef int (*MainLibTclEval)(
#ifdef ANSI_FUNC
  void *interp, char *s
#endif
);

/*
 *
 *
 * mainlib record structure for a single command
 *
 */
typedef struct mainlibentryrec{
  struct mainlibentryrec *next;
  char *xclass;
  char *name;
  MainLibProc proc;
  int type;
} *MainLibEntry, MainLibEntryRec;

/*
 *
 *
 * mainlib record structure for a group of commands
 *
 */
typedef struct mainlibrec{
  MainLibEntry head;
  void *dl;
  MainLibProcessCall mainlibprocess;
  MainLibTclLookup tcllookup;
  MainLibTclEval tcleval;
  int npid;
  pid_t pids[MAINLIB_CMDS+1];
} *MainLib, MainLibRec;

/* library declarations */
_PRbeg

/* public */
int MainLibLoad _PRx((char *name, char *shlib, void **ml, char **ermsg));
MainLib MainLibNew _PRx((void));
MainLibEntry MainLibAdd _PRx((MainLib ml, char *xclass, char *name, 
			      MainLibProc mainlibproc, int type));
int MainLibProcess _PRx((MainLib ml, char *cmd, char **buf, char *mode));
int MainLibProcessCleanup _PRx((MainLib ml));
int MainLibDel _PRx((MainLib ml, MainLibEntry mle));
int MainLibFree _PRx((MainLib ml));

_PRend

#endif /* __mainlib.h */

