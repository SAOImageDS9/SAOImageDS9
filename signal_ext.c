/*
 * Smithsonian Astrophysical Observatory, Cambridge, MA, USA
 * This code has been modified under the terms listed below and is made
 * available under the same terms.
 */

/*****************************************************************
** Signal Extension for Tcl/Tk
** $Header$
** Author: Michael I. Schwartz, SCCS, mschwart@nyx.net, http://www.nyx.net/~mschwart
** This extension adds signal handling to Tcl/Tk scripts.
** It has only been tested under Unix.
**
** To ensure that signal handling does _not_ happen asynchronously,
** and only occurs in the X loop, the signal handler writes the
** signal number on a pipe, which is handled through the Tcl
** file handling mechanism (like XtAppAddInput in X).
**
**  Copyright (C) 1996 Schwartz Computer Consulting Services
** 
**  Permission to use, copy, modify, distribute, and sell this software and its
**  documentation for any purpose is hereby granted without fee, provided that
**  the above copyright notice appear in all copies and that both that
**  copyright notice and this permission notice appear in supporting
**  documentation, and that the name of SCCS not be used in advertising or
**  publicity pertaining to distribution of the software without specific,
**  written prior permission.  SCCS makes no representations about the
**  suitability of this software for any purpose.  It is provided "as is"
**  without express or implied warranty.
** 
*****************************************************************/
#include <tcl.h>

#include <signal.h> /* for sigaction() and struct sigaction */
#include <string.h> /* For strcmp(), strerror() */
#include <errno.h>  /* for errno */
#include <ctype.h>  /* for isdigit() */
#include <stdlib.h> /* for allocation and freeing */
#include <unistd.h> /* for pipe(), read(), write() */

/* From Tcl core: {{{ */
/*
 * Macros used to cast between pointers and integers (e.g. when storing an int
 * in ClientData), on 64-bit architectures they avoid gcc warning about "cast
 * to/from pointer from/to integer of different size".
 */

#if !defined(INT2PTR) && !defined(PTR2INT)
#   if defined(HAVE_INTPTR_T) || defined(intptr_t)
#	define INT2PTR(p) ((void *)(intptr_t)(p))
#	define PTR2INT(p) ((intptr_t)(p))
#   else
#	define INT2PTR(p) ((void *)(p))
#	define PTR2INT(p) ((long)(p))
#   endif
#endif
#if !defined(UINT2PTR) && !defined(PTR2UINT)
#   if defined(HAVE_UINTPTR_T) || defined(uintptr_t)
#	define UINT2PTR(p) ((void *)(uintptr_t)(p))
#	define PTR2UINT(p) ((uintptr_t)(p))
#   else
#	define UINT2PTR(p) ((void *)(p))
#	define PTR2UINT(p) ((unsigned long)(p))
#   endif
#endif
/* From Tcl core: }}} */

/* Structure for remembering signal procs */
/* Changed to add 3 members for asynchronous signal handling */
static struct
{
  int  is_handled;
  char *signal_proc;
  int  is_async;
  Tcl_AsyncHandler async;
  Tcl_Interp* save_interp; /* Used as a fallback interpreter for async */
} signal_handlers[NSIG];

/* Now for the complicated part: Getting a lookup structure
** to manage a few of the most commonly used signals:
** Don't bother with KILL and STOP--they aren't allowed anyway
*/
static const struct
{
  int signum;
  char *signame;
} signal_name_mapping[] =
{
#ifdef SIGHUP
  { SIGHUP, "SIGHUP" },
#endif
#ifdef SIGINT
  { SIGINT, "SIGINT" },
#endif
#ifdef SIGABRT
  { SIGABRT, "SIGABRT" },
#endif
#ifdef SIGFPE
  { SIGFPE, "SIGFPE" },
#endif
#ifdef SIGILL
  { SIGILL, "SIGILL" },
#endif
#ifdef SIGSEGV
  { SIGSEGV, "SIGSEGV" },
#endif
#ifdef SIGTERM
  { SIGTERM, "SIGTERM" },
#endif
#ifdef SIGUSR1
  { SIGUSR1, "SIGUSR1" },
#endif
#ifdef SIGUSR2
  { SIGUSR2, "SIGUSR2" },
#endif
#ifdef SIGUSR3
  { SIGUSR3, "SIGUSR3" },
#endif
#ifdef SIGBREAK
  { SIGBREAK, "SIGBREAK" },
#endif
#ifdef SIGCHLD
  { SIGCHLD, "SIGCHLD" },
#endif
#ifdef SIGTERM
  { SIGTERM, "SIGTERM"},
#endif
#ifdef SIGURG
  { SIGURG, "SIGURG"},
#endif
#ifdef SIGIO
  { SIGIO, "SIGIO" },
#endif
#ifdef SIGWAITING
  { SIGWAITING, "SIGWAITING" },
#endif
#ifdef SIGPOLL
  { SIGPOLL, "SIGPOLL" },
#endif
#ifdef SIGQUIT
  { SIGQUIT, "SIGQUIT" },
#endif
#ifdef SIGBUS
  { SIGBUS, "SIGBUS" },
#endif
#ifdef SIGSYS
  { SIGSYS, "SIGSYS" },
#endif
#ifdef SIGPIPE
  { SIGPIPE, "SIGPIPE" },
#endif
#ifdef SIGALRM
  { SIGALRM,  "SIGALRM" },
#endif
#ifdef SIGTSTP
  { SIGTSTP, "SIGTSTP" },
#endif
#ifdef SIGCONT
  { SIGCONT, "SIGCONT" },
#endif
#ifdef SIGTTIN
  { SIGTTIN, "SIGTTIN" },
#endif
#ifdef SIGTTOU
  { SIGTTOU, "SIGTTOU" },
#endif
#ifdef SIGWINCH
  { SIGWINCH, "SIGWINCH" },
#endif
};

/* A lookup function for the signal names to numbers and vice versa */
static const char *signo_to_signame(int signo);
static int signame_to_signo(const char *signame);
static int signal_spec(const char *arg);
static const char * signal_name(int i);

/*
** A pair of ints for a pipe between the signal handler and the 
** X main loop
** To support multiple interpreters, these should probably be associated
** with the interpreter, and not with the program as a whole.
*/
static int fds[2];

/* The actual signal handler declarations */
static void handle_sig(int signo);
static void handle_async_signal (int sig);

/* A Tcl_AsyncHandler */
static int handle_async (ClientData clientData, Tcl_Interp *interp, int code);

/* A Tcl_FileProc */
static void HandleSignalPipe (ClientData d, int mask);

/* Tcl_CmdProc declaration(s) */
static int DoSignalHandler (ClientData d, Tcl_Interp *i, 
				int argc, const char *argv[]);
static int AddSignalHandler (ClientData d, Tcl_Interp *i, 
				int argc, char *argv[]);
static int DeleteSignalHandler (ClientData d, Tcl_Interp *i, 
				int argc, char *argv[]);
static int PrintSignalHandler (ClientData d, Tcl_Interp *i, 
				int argc, char *argv[]);

/**
** Goal: add signal handling to Tcl/Tk scripts.
** Do this by using a channel, writing the signal to the channel,
** and having the channel reader interpret the signal number
** and call the appropriate handler.
** Use POSIX signal semantics by using the sigaction structure.
**/
int Signal_ext_Init ( Tcl_Interp *interp )
{
  static int initialized = 0;

  if (Tcl_InitStubs(interp, TCL_PATCH_LEVEL, 0) == NULL)
    return TCL_ERROR;

  if (Tcl_PkgProvide(interp, PACKAGE_NAME, PACKAGE_VERSION) != TCL_OK)
    return TCL_ERROR;

  if (initialized == 0)
  {
    initialized = 1;

    /* Open the pipe */
    pipe(fds);

    /* Create a Tcl-compliant handler for the pipe */
    Tcl_CreateFileHandler(fds[0], TCL_READABLE, HandleSignalPipe, 
                         (ClientData)interp);

    /* Add the signal command */
    Tcl_CreateCommand(interp, "signal", DoSignalHandler,
		      (ClientData)NULL, (Tcl_CmdDeleteProc *)NULL);
  }

  return 0;
}

int Tclsignal_Init ( Tcl_Interp *interp )
{
  return Signal_ext_Init(interp);
}

int Tclsignal_SafeInit ( Tcl_Interp *interp )
{
  return Signal_ext_Init(interp);
}

static void HandleSignalPipe (ClientData d, int mask)
{
  int sig;
  int result;
  char *command;
  Tcl_Interp *i = (Tcl_Interp *)d;

  /* Get the signal that caused the handler to fire */
  if ( (result = read(fds[0], &sig, sizeof(sig))) <= 0 )
  {
    fprintf(stderr, "False alarm in Signal package!\n");
    return;
  }

  if ( sig <= 0 || sig > NSIG )
  {
    fprintf(stderr, "Bad signal %d received by Signal package!\n", sig);
    return;
  }

  /* Look up the name in the process structure for signal sig */
  command = signal_handlers[sig].signal_proc;

  /* If it is valid, Eval it */
  if (command)
  {
    Tcl_Eval(i, command);
  }
}

static char Usage[] = "Usage: signal add signo proc [-async]| "
                      "signal delete signo | "
                      "signal print [signo] | "
		      "signal version";

static int DoSignalHandler (ClientData d, Tcl_Interp *i, 
				int argc, const char *argvv[])
{
  char** argv = (char**)argvv;

  /* argv[0] is "signal" */
  if (argc < 2)
  {
    Tcl_SetResult (i, Usage, TCL_STATIC);
    return TCL_ERROR;
  }
  if ( strcmp(argv[1], "add") == 0 )
    return AddSignalHandler(d,i,argc-1,&argv[1]);
  else if ( strcmp(argv[1], "delete") == 0 )
    return DeleteSignalHandler(d,i,argc-1,&argv[1]);
  else if ( strcmp(argv[1], "print" ) == 0 )
    return PrintSignalHandler(d, i, argc-1, &argv[1]);
  else if ( strcmp(argv[1], "version" ) == 0 )
  {
     Tcl_SetResult (i, PACKAGE_VERSION, TCL_STATIC);
     return TCL_OK;
  }
  else
  {
    Tcl_SetResult (i, Usage, TCL_STATIC);
    return TCL_ERROR;
  }
}

static int AddSignalHandler (ClientData d, Tcl_Interp *i, 
				int argc, char *argv[])
{
  int sig;
  char *procname;
  struct sigaction sa;
  int async = 0;

  if (argc == 4 && strcmp(argv[3], "-async") == 0 )
    async = 1;
  else if (argc != 3 )
  {
    Tcl_SetResult (i, "Usage: signal add signo proc [-async]", TCL_STATIC);
    return TCL_ERROR;
  }
  
  sig = signal_spec(argv[1]);
  procname = argv[2];
  if ( sig <= 0 || sig > NSIG )
  {
    Tcl_AppendResult (i, "Signal ", argv[1], " not understood or out of range\n"
			 "Usage: signal add signo proc", 0);
    return TCL_ERROR;
  }

  /* Free any old process name in the structure */
  if (signal_handlers[sig].signal_proc)
  {
    ckfree(signal_handlers[sig].signal_proc);
    if (signal_handlers[sig].is_async)
    {
      Tcl_AsyncDelete(signal_handlers[sig].async);
      signal_handlers[sig].is_async = 0;
      signal_handlers[sig].save_interp = 0;
    }
  }

  /* Dup the process name into the structure */
  if ((signal_handlers[sig].signal_proc = (char *)ckalloc(strlen(procname)+1)))
    strcpy(signal_handlers[sig].signal_proc, procname);
  else
    signal_handlers[sig].signal_proc = 0;

  /* Set up the signal handler: ignore sa_sigaction since flags will be 0 */
  sa.sa_flags = 0;
  sigemptyset(&sa.sa_mask);

  if (async)
  {
    long bar = sig;
    signal_handlers[sig].async = Tcl_AsyncCreate(handle_async,
						 UINT2PTR(bar));
    sa.sa_handler = handle_async_signal;
    signal_handlers[sig].save_interp = i;
  }
  else /* Normal handler */
  {
    sa.sa_handler = handle_sig;
  }
  
  if ( sigaction (sig, &sa, 0) == -1 )
  {
    Tcl_AppendResult(i, "Error in sigaction: ", strerror(errno), 0);
    return TCL_ERROR;
  }

  /* Remember we're handling it */
  signal_handlers[sig].is_handled = 1;
  signal_handlers[sig].is_async   = async;
  
  return TCL_OK;
}

static int DeleteSignalHandler (ClientData d, Tcl_Interp *i, 
				int argc, char *argv[])
{
  int sig;
  struct sigaction sa;

  if (argc != 2)
  {
    Tcl_SetResult (i, "Usage: signal delete signo", TCL_STATIC);
    return TCL_ERROR;
  }
  sig = signal_spec(argv[1]);

  if (sig <= 0 || sig > NSIG )
  {
    Tcl_AppendResult (i, "Signal ", argv[1], " not understood or out of range\n"
			 "Usage: signal delete signo", 0);
    return TCL_ERROR;
  }

  /* Deinstall the signal handler */
  sa.sa_handler = SIG_DFL;
  sa.sa_flags = 0;
  sigemptyset(&sa.sa_mask);
  sigaction (sig, &sa, 0);

  /* Free any old process name in the structure */
  if (signal_handlers[sig].signal_proc)
  {
    ckfree(signal_handlers[sig].signal_proc);
    if (signal_handlers[sig].is_async)
    {
      Tcl_AsyncDelete(signal_handlers[sig].async);
      signal_handlers[sig].is_async = 0;
      signal_handlers[sig].save_interp = 0;
    }
  }

  /* Zero out the process name in the structure */
  signal_handlers[sig].signal_proc = 0;
  
  /* Remember we're not handling it */
  signal_handlers[sig].is_handled = 0;
  return TCL_OK;
}

static int PrintSignalHandler (ClientData d, Tcl_Interp *i, 
				int argc, char *argv[])
{
  int sig;
  char *command;
  if ( argc < 1 )
  {
    Tcl_SetResult (i, "Usage: signal print [signo]", TCL_STATIC);
    return TCL_ERROR;
  }

  if ( argc == 1 ) /* Just print-- print all of them */
  {
    int j;
    int reported = 0; /* To avoid extra newlines */

    for (j=0; j < NSIG; j++)
    {
      const char *cp = signal_handlers[j].signal_proc;

      if (signal_handlers[j].is_handled)
      {
	if (reported == 0)
	  reported = 1;
	else
	  Tcl_AppendResult(i, "\n", 0);
	if (signal_handlers[j].is_async)
          Tcl_AppendResult(i, signal_name(j), " !---> ", cp?cp:" ", 0);
	else
          Tcl_AppendResult(i, signal_name(j), " ----> ", cp?cp:" ", 0);
      }
    }
    return TCL_OK;
  }

  /* Just 1 signal */
  sig = signal_spec(argv[1]);
  
  if ( sig > 0 && sig < NSIG )
  {
    if ( signal_handlers[sig].is_handled == 0 )
      command = "UNHANDLED";
    else if ( (command = signal_handlers[sig].signal_proc ) == 0 || 
	       command[0] == '\0')
      command = " ";
    Tcl_SetResult (i, command, 0);
    return TCL_OK;
  }
  else
  {
    Tcl_AppendResult (i, "Signal ", argv[1], " not understood or out of range\n"
			 "Usage: signal print [signo]", 0);
    return TCL_ERROR;
  }
}

/* The actual signal handler */
static void handle_sig(int signo)
{
  write(fds[1], &signo, sizeof(signo));
}

/* An async proc handler */
static int handle_async (ClientData clientData, Tcl_Interp *i, int code)
{
  /* There is a fundamental difficulty in that usually there seems to 
     be no interpreter available when this function is called.
     This means that scripts will generally not be invoked if they depend
     on the interp variable passed in.
     The choices are 
     (a) to allow only a few things to happen in an async handler,
         e.g., exit or raise an error
     (b) use the interpreter that was active when the handler was created
         to invoke the scripts
     Neither seems particularly appealing.
     I chose (b).
     I'm sure I will receive appropriate comments indicating why a different
     choice would be better. Perhaps the next release will have it righter...
  */
  int sig = PTR2UINT(clientData);
  int tcode;
  Tcl_DString result;
  char * errorcode = 0;
  char * errorinfo = 0;
  Tcl_Interp *interp = i;

  if ( sig <= 0 || sig > NSIG ) /* Oh, oh! Don't even try! */
  {
    fprintf(stderr, "Bad async signal %d received by Signal package!\n", sig);
    return code;
  }

  if (interp == 0 )
    interp = signal_handlers[sig].save_interp;

  Tcl_DStringInit(&result);
  
  if (interp)
  {
    /* Save result, errorInfo and errorCode for the given interpreter */
    Tcl_DStringGetResult(interp,&result);
    errorcode = strdup(Tcl_GetVar(interp, "errorCode", TCL_GLOBAL_ONLY));
    errorinfo = strdup(Tcl_GetVar(interp, "errorInfo", TCL_GLOBAL_ONLY));
  }

  if (interp && signal_handlers[sig].signal_proc)
  {
    if ((tcode = Tcl_Eval(interp, signal_handlers[sig].signal_proc)) 
        != TCL_OK )
    {
      /* A means is provided to allow the called routine to raise
      ** an error or otherwise interrupt the interpretation of commands.
      ** If you use the -async this way, BE AWARE of the warnings in the
      ** Tcl_AsyncCreate man page; you may have unexpected results.
      */
      code = tcode; /* Reset the code and don't reset the results! */
      free(errorcode);
      free(errorinfo);
    }
    else if (interp)
    {
      Tcl_DStringResult(interp,&result);
      Tcl_SetVar(interp, "errorCode", errorcode, TCL_GLOBAL_ONLY);
      Tcl_SetVar(interp, "errorInfo", errorinfo, TCL_GLOBAL_ONLY);
      free(errorcode);
      free(errorinfo);
    }
  }
  else if (interp)
  {
    Tcl_DStringResult(interp,&result);
    Tcl_SetVar(interp, "errorCode", errorcode, TCL_GLOBAL_ONLY);
    Tcl_SetVar(interp, "errorInfo", errorinfo, TCL_GLOBAL_ONLY);
    free(errorcode);
    free(errorinfo);
  }
    
  return code;
}

static void handle_async_signal (int sig)
{
  if (signal_handlers[sig].is_handled &&
      signal_handlers[sig].signal_proc &&
      signal_handlers[sig].is_async ) 
    Tcl_AsyncMark(signal_handlers[sig].async);
}

/* Some utility functions */
static const char *signo_to_signame(int signo)
{
  int i;
  if (signo <= 0 || signo > NSIG )
    return 0;
    
  for (i=0; i < sizeof(signal_name_mapping) / sizeof(signal_name_mapping[0]); 
	i++)
  {
    if ( signal_name_mapping[i].signum == signo )
      return signal_name_mapping[i].signame;
  }
  return 0;
}

static int signame_to_signo(const char *signame)
{
  int i;
  if (signame == 0)
    return -1;
  for (i=0; i < sizeof(signal_name_mapping) / sizeof(signal_name_mapping[0]); 
	i++)
  {
    /* Note: strcasecmp is a commonly implemented non-standard function */
    if ( strcasecmp(signal_name_mapping[i].signame, signame) == 0 )
      return signal_name_mapping[i].signum;
  }
  return 0;
}

static int signal_spec(const char *arg)
{
  if ( arg == 0)
    return -1;
  if (isdigit(arg[0]) )
    return atoi(arg);
  else
    return signame_to_signo(arg);
}

static const char *signal_name(int i)
{
  static char tmp_sig_name[10]; /* 7 + 2 + 1 */
  const char *cp = signo_to_signame(i);
  if (cp)
    return cp;
  if ( i < 0 || i > NSIG )
    return "Illegal";
  sprintf(tmp_sig_name, "Signal %d", i);
  return tmp_sig_name;
}

