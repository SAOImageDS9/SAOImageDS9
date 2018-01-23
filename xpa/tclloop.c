/*
 *	Copyright (c) 1999-2003 Smithsonian Astrophysical Observatory
 */

#include <xpap.h>

#if HAVE_TCL

#include <tcl.h>

/* We build XPA on Windows using Cygwin and, for convenience, we sense the
   presence of Windows by the presence of Cygwin. This is important for Tcl
   because Windows does not support Tcl_CreateFileHandler */
#ifndef HAVE_TCLFILEHANDLER
#if HAVE_CYGWIN|HAVE_MINGW32
#define HAVE_TCLFILEHANDLER 0
#else
#define HAVE_TCLFILEHANDLER 1
#endif
#endif

/*
 *----------------------------------------------------------------------------
 *
 *
 * 			Private Routines and Data
 *
 *
 *----------------------------------------------------------------------------
 */

#define TCL_SOCKET TCL_UNIX_FD

/* 
 *
 * record struct for maintining Tcl info in Tcl select loop
 *
 */
typedef struct xpatclrec{
  Tcl_Event header;
  int fd;
  void *client_data;
} *XPATcl, XPATclRec;


#if HAVE_TCLFILEHANDLER
/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPATclHandler
 *
 * Purpose:	handle one request for an xpaset or xpaget
 *
 * Return:	none
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
static void 
XPATclHandler (ClientData client_data, int mask)
#else
static void XPATclHandler(client_data, mask)
     ClientData client_data;
     int mask;
#endif
{
  XPATcl xptr = (XPATcl)client_data;
  if( (xptr == NULL) || (xptr->client_data == NULL) )
    return;
  XPAHandler((XPA)xptr->client_data, xptr->fd);
}

#else

#define TCL_BLOCKTIME_SEC   0
#define TCL_BLOCKTIME_USEC  1000

/*
 *----------------------------------------------------------------------
 *
 * XPAEventProc --
 *
 *	This procedure is called by Tcl_ServiceEvent when an XPA event
 *	reaches the front of the event queue.  This procedure is
 *	responsible for notifying the generic channel code.
 *
 * Results:
 *	Returns 1 if the event was handled, meaning it should be removed
 *	from the queue.  Returns 0 if the event was not handled, meaning
 *	it should stay on the queue.  The only time the event isn't
 *	handled is if the TCL_FILE_EVENTS flag bit isn't set.
 *
 * Side effects:
 *	Whatever the channel callback procedures do.
 *
 *----------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
static int
XPAEventProc(Tcl_Event *evPtr, int flags)
#else
static int
XPAEventProc(evPtr, flags)
    Tcl_Event *evPtr;		/* Event to service. */
    int flags;			/* Flags that indicate what events to
				 * handle, such as TCL_FILE_EVENTS. */
#endif
{
  XPATcl xptr = (XPATcl)evPtr;
  if( xptr && xptr->client_data )
    XPAHandler((XPA)xptr->client_data, xptr->fd);
  return 1;
}

/*
 *----------------------------------------------------------------------
 *
 * XPASetupProc --
 *
 *	This procedure is invoked before Tcl_DoOneEvent blocks waiting
 *	for an event.
 *
 * Results:
 *	None.
 *
 * Side effects:
 *	Adjusts the block time if needed.
 *
 *----------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
static void
XPASetupProc(ClientData data, int flags)
#else
static void
XPASetupProc(data, flags)
     ClientData data;
    int flags;
#endif
{
  Tcl_Time blockTime = { TCL_BLOCKTIME_SEC, TCL_BLOCKTIME_USEC };

  Tcl_SetMaxBlockTime(&blockTime);
  return;
}

/*
 *----------------------------------------------------------------------
 *
 * XPACheckProc --
 *
 *	This procedure is called by Tcl_DoOneEvent to check the XPA
 *	event source for events. 
 *
 * Results:
 *	None.
 *
 * Side effects:
 *	May queue an event.
 *
 *----------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
static void
XPACheckProc(ClientData data, int flags)
#else
static void
XPACheckProc(data, flags)
     ClientData data;
     int flags;
#endif
{
  XPATcl xptr = (XPATcl)data;
  XPATcl evPtr;
  fd_set readfds;
  struct timeval tv;
  int got;

again:
  FD_ZERO(&readfds);
  if( XPAActiveFd(xptr->fd) ){
    FD_SET(xptr->fd, &readfds);
    tv.tv_sec = 0;
    tv.tv_usec = 0;
    got = xselect(xptr->fd+1, &readfds, NULL, NULL, &tv);
    if( got < 0 ){
      if( errno == EINTR )
	goto again;
      perror("xpa select event");
      Tcl_DeleteEventSource(XPASetupProc, XPACheckProc, xptr);
    }
    else if( got ){
      evPtr = (XPATcl)Tcl_Alloc(sizeof(XPATclRec));
      memcpy(evPtr, xptr, sizeof(XPATclRec));
      evPtr->header.proc = XPAEventProc;
      Tcl_QueueEvent((Tcl_Event *) evPtr, TCL_QUEUE_TAIL);
    }
  }
}
#endif

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPATclEnableOneInput
 *
 * Purpose:	Enable 1 XPA entry from the Tcl event loop
 *
 * Results:	none
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
static void 
XPATclEnableOneInput (void *client_data)
#else
static void XPATclEnableOneInput(client_data)
     void *client_data;
#endif
{
  XPATcl xptr = (XPATcl)client_data;
  if( xptr == NULL )
    return;
#if HAVE_TCLFILEHANDLER
  Tcl_CreateFileHandler(xptr->fd, TCL_READABLE, XPATclHandler, xptr);
#else
  Tcl_CreateEventSource(XPASetupProc, XPACheckProc, xptr);
#endif
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPATclDisableOneInput
 *
 * Purpose:	Disable 1 XPA entry from the Tcl event loop
 *
 * Results:	none
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
static void 
XPATclDisableOneInput (void *client_data)
#else
static void XPATclDisableOneInput(client_data)
     void *client_data;
#endif
{
  XPATcl xptr = (XPATcl)client_data;
  if( xptr == NULL )
    return;
#if HAVE_TCLFILEHANDLER
  Tcl_CreateFileHandler(xptr->fd, 0, XPATclHandler, xptr->client_data);
#else
  Tcl_DeleteEventSource(XPASetupProc, XPACheckProc, xptr);
#endif
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPATclAddOneInput
 *
 * Purpose:	Add 1 XPA entry to the Tcl event loop
 *
 * Results:	none
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
static void *
XPATclAddOneInput (void *client_data, int fd)
#else
static void *XPATclAddOneInput(client_data, fd)
     void *client_data;
     int fd;
#endif
{
  XPATcl xptr;
  if( fd < 0 )
    return(NULL);
  xptr = (XPATcl)xcalloc(1, sizeof(XPATclRec));
  xptr->fd = fd;
  xptr->client_data = (XPA)client_data;
  XPATclEnableOneInput(xptr);
  return(xptr);
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPATclDelOneInput
 *
 * Purpose:	Delete 1 XPA entry from the Tcl event loop (called by XPAFree)
 *
 * Results:	none
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
static void 
XPATclDelOneInput (void *client_data)
#else
static void XPATclDelOneInput(client_data)
     void *client_data;
#endif
{
  XPATcl xptr = (XPATcl)client_data;
  if( xptr == NULL )
    return;
  XPATclDisableOneInput(xptr);
  xfree(xptr);
}

/*
 *----------------------------------------------------------------------------
 *
 *
 * 			Public Routines and Data
 *
 *
 *----------------------------------------------------------------------------
 */

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPATclAddInput
 *
 * Purpose:	Add XPA entries to the Tcl event loop
 *
 * Results:	number of xpa entried added
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
int 
XPATclAddInput (XPA xpa)
#else
int XPATclAddInput(xpa)
     XPA xpa;
#endif
{
  XPA cur;
  int got=0;

  /* if a specific xpa was specified, just add it */
  if( xpa != NULL ){
    /* remove old one */
    if( xpa->seldel && xpa->selptr ){
      (xpa->seldel)(xpa->selptr);
    }
    /* add new one */
    xpa->seladd = XPATclAddOneInput;
    xpa->seldel = XPATclDelOneInput;
#if HAVE_TCLFILEHANDLER
    xpa->selon =  XPATclEnableOneInput;
    xpa->seloff = XPATclDisableOneInput;
#endif
    xpa->selptr = XPATclAddOneInput((void *)xpa, xpa->fd);
    got = 1;
  }
  /* otherwise set up all xpa's */
  else{
    for(cur=(XPA)XPAListHead(); cur!=NULL; cur=cur->next){
      /* remove old one */
      if( cur->seldel && cur->selptr ){
	(cur->seldel)(cur->selptr);
      }
      /* add new one */
      cur->seladd = XPATclAddOneInput;
      cur->seldel = XPATclDelOneInput;
#if HAVE_TCLFILEHANDLER
      cur->selon =  XPATclEnableOneInput;
      cur->seloff = XPATclDisableOneInput;
#endif
      cur->selptr = XPATclAddOneInput((void *)cur, cur->fd);
      got++;
    }
  }
  return(got);
}

int xpa_tcl = 1;

#else

int xpa_tcl = 0;

#endif
