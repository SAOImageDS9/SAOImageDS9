// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __sigbus_h__
#define __sigbus_h__

#ifdef __WIN32
#define INTERP
#define SETSIGBUS
#define CLEARSIGBUS
#else

// Signal Support
#include <setjmp.h>
#include <signal.h>

static sigjmp_buf crashbuf;
static struct sigaction sigact, osigbus, osigsegv;
static void crashHandler(int dummy) {
  siglongjmp(crashbuf, 1);
}
#define INTERP interp

#ifdef NOSIGBUS
#define SETSIGBUS
#define CLEARSIGBUS
#else
#define SETSIGBUS \
  if (sigsetjmp(crashbuf, 1)) { \
    Tcl_SetVar2(INTERP, "ds9", "msg", "A SIGBUS or SIGSEGV error has been received.", TCL_GLOBAL_ONLY); \
    Tcl_SetVar2(INTERP, "ds9", "msg,level", "error", TCL_GLOBAL_ONLY); \
  } \
  else { \
    sigact.sa_handler = crashHandler; \
    sigemptyset(&sigact.sa_mask); \
    sigact.sa_flags = 0; \
    sigaction(SIGSEGV, &sigact, &osigsegv); \
    sigaction(SIGBUS, &sigact, &osigbus);
  
#define CLEARSIGBUS \
  } \
  sigaction(SIGSEGV, &osigsegv, NULL); \
  sigaction(SIGBUS, &osigbus, NULL);
#endif
#endif

#endif

