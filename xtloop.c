/*
 *	Copyright (c) 1999-2003 Smithsonian Astrophysical Observatory
 */

#include <xpap.h>

#if HAVE_XT

#include <X11/Intrinsic.h>

/*
 *----------------------------------------------------------------------------
 *
 *
 * 			Private Routines and Data
 *
 *
 *----------------------------------------------------------------------------
 */

/* 
 *
 * record struct for maintining Xt info in Xt select loop
 *
 */
typedef struct xpaxtrec{
  int fd;
  void *client_data;
  XtInputId id;
} *XPAXt, XPAXtRec;

/* its such a pain to maintain this, so make it global! */
static XtAppContext xpa_app=NULL;

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPAXtHandler
 *
 * Purpose:	handle one request for an xpaset or xpaget
 *
 * Return:	none
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
static void 
XPAXtHandler (XtPointer client_data, int *fd, XtInputId *id)
#else
static void XPAXtHandler(client_data, fd, id)
     XtPointer client_data;
     int *fd;
     XtInputId *id;
#endif
{
  XPAXt xptr = (XPAXt)client_data;
  if( (xptr == NULL) || (xptr->client_data == NULL) )
    return;
  XPAHandler((XPA)xptr->client_data, xptr->fd);
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPAXtEnableOneInput
 *
 * Purpose:	Enable 1 XPA entry from the Xt event loop
 *
 * Results:	none
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
static void 
XPAXtEnableOneInput (void *client_data)
#else
static void XPAXtEnableOneInput(client_data)
     void *client_data;
#endif
{
  XPAXt xptr = (XPAXt)client_data;
  if( xptr == NULL )
    return;
  if( xptr->id != (XtInputId)NULL )
    return;
  if( xpa_app == NULL ){
    xptr->id = XtAddInput(xptr->fd,
			  (XtPointer)XtInputReadMask,
			  (XtInputCallbackProc)XPAXtHandler,
			  (XtPointer)xptr);
  }
  else{
    xptr->id = XtAppAddInput(xpa_app, xptr->fd,
			     (XtPointer)XtInputReadMask,
			     (XtInputCallbackProc)XPAXtHandler,
			     (XtPointer)xptr);
  }
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPAXtDisableOneInput
 *
 * Purpose:	Disable 1 XPA entry from the Xt event loop
 *
 * Results:	none
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
static void 
XPAXtDisableOneInput (void *client_data)
#else
static void XPAXtDisableOneInput(client_data)
     void *client_data;
#endif
{
  XPAXt xptr = (XPAXt)client_data;
  if( xptr == NULL )
    return;
  if( xptr->id == (XtInputId)NULL )
    return;
  XtRemoveInput(xptr->id);
  xptr->id = (XtInputId)NULL;
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPAXtAddOneInput
 *
 * Purpose:	Add 1 XPA entry to the Xt event loop
 *
 * Results:	none
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
static void *
XPAXtAddOneInput (void *client_data, int fd)
#else
static void *XPAXtAddOneInput(client_data, fd)
     void *client_data;
     int fd;
#endif
{
  XPAXt xptr;
  if( fd < 0 )
    return(NULL);
  xptr = (XPAXt)xcalloc(1, sizeof(XPAXtRec));
  xptr->fd = fd;
  xptr->client_data = client_data;
  XPAXtEnableOneInput(xptr);
  return(xptr);
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPAXtDelOneInput
 *
 * Purpose:	Delete 1 XPA entry from the Xt event loop (called by XPAFree)
 *
 * Results:	none
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
static void 
XPAXtDelOneInput (void *client_data)
#else
static void XPAXtDelOneInput(client_data)
     void *client_data;
#endif
{
  XPAXt xptr = (XPAXt)client_data;
  if( xptr == NULL)
    return;
  XPAXtDisableOneInput(xptr);
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
 * Routine:	XPAXtAddInput
 *
 * Purpose:	Add XPA entries to the Xt event loop
 *
 * Results:	number of xpa entried added
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
int 
XPAXtAddInput (void *app, XPA xpa)
#else
int XPAXtAddInput(app, xpa)
     void *app;
     XPA xpa;
#endif
{
  XPA cur;
  int got=0;

  /* save the app context */
  if( xpa_app == NULL ){
    xpa_app = (XtAppContext)app;
  }

  /* if a specific xpa was specified, just add it */
  if( xpa != NULL ){
    /* remove old one */
    if( xpa->seldel && xpa->selptr ){
      (xpa->seldel)(xpa->selptr);
    }
    /* add new one */
    xpa->seldel = XPAXtDelOneInput;
    xpa->seladd = XPAXtAddOneInput;
    xpa->selon =  XPAXtEnableOneInput;
    xpa->seloff = XPAXtDisableOneInput;
    xpa->selptr = XPAXtAddOneInput((void *)xpa, xpa->fd);
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
      cur->seldel = XPAXtDelOneInput;
      cur->seladd = XPAXtAddOneInput;
      cur->selon =  XPAXtEnableOneInput;
      cur->seloff = XPAXtDisableOneInput;
      cur->selptr = XPAXtAddOneInput((void *)cur, cur->fd);
      got++;
    }
  }
  return(got);
}

int xpa_xt = 1;

#else

int xpa_xt = 0;

#endif
