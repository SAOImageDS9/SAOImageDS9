/*
 *	Copyright (c) 1999-2003 Smithsonian Astrophysical Observatory
 */

#include <xpap.h>

#if HAVE_TCL

#include <tcl.h>

/*
 *----------------------------------------------------------------------------
 *
 *
 * 			Private Routines and Data
 *
 *
 *----------------------------------------------------------------------------
 */

/* with Tcl 8.4, some function prototypes have added CONST qualifiers,
   which we try to deal with in a backward-compatible way */
#define XCONST84
#if TCL_MAJOR_VERSION >= 8
#if TCL_MINOR_VERSION >= 4
#undef XCONST84
#define XCONST84 CONST
#endif
#endif

#ifdef NULLSTRING
#undef NULLSTRING
#endif
#define NULLSTRING ""

#define TCL_NULLSTR(s) (!s || !*s || !strcmp(s, "{}"))

#define TY_CLIENT 1
#define TY_SERVER 2

#ifndef MAX_XPAS
#define MAX_XPAS 10000
#endif

/*
 *
 * record struct for client_data for XPATcl[Send,Receive,Info] routines
 *
 */
typedef struct xpatclclientdatarec{
  Tcl_Interp *interp;
  char *callback;
  char *client_data;
} *XPATclClientData, XPATclClientDataRec;


/*
 *----------------------------------------------------------------------------
 *
 * Routine:	Tcl_GetXPAFromObj
 *
 * Purpose:	convert string to XPA handle
 *
 * Returns:	Tcl error code
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
static int
Tcl_GetXPAFromObj(Tcl_Interp *interp, Tcl_Obj *obj, int flag, XPA *xpa)
#else
static int Tcl_GetXPAFromObj(interp, obj, flag, xpa)
     Tcl_Interp *interp;
     Tcl_Obj *obj;
     int flag;
     XPA *xpa;
#endif
{
  char *s;
  void *lval;
  Tcl_Obj *resultPtr;

  /* get result pointer */
  resultPtr = Tcl_GetObjResult(interp);

  if( (s = Tcl_GetStringFromObj(obj, NULL)) == NULL ){
    return(TCL_ERROR);
  }
  if( strncmp(s, "xpa_", 4) || (sscanf(&(s[4]), "%p", &lval) != 1) ){
    Tcl_SetStringObj(resultPtr, "XPA$ERROR: invalid xpa handle", -1);
    return(TCL_ERROR);
  }
  *xpa = (XPA)lval;
  /* make sure its a valid xpa */
  switch(flag){
  case TY_CLIENT:
    if( !XPAClientValid(*xpa) ){
      Tcl_SetStringObj(resultPtr, "XPA$ERROR: invalid xpa client handle", -1);
      return(TCL_ERROR);
    }
    break;
  case TY_SERVER:
    if( !XPAValid(*xpa) ){
      Tcl_SetStringObj(resultPtr, "XPA$ERROR: invalid xpa server handle", -1);
      return(TCL_ERROR);
    }
    break;
  }
  return(TCL_OK);
}


/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPATclHandler
 *
 * Purpose:	common handler for access points written in tcl
 * 		execute the tcl receive command with xpa arguments
 *		used instead of Tcl_Eval so we can avoid interpreting either
 *		paramlist or buf
 *
 *
 * Returns:	0 on success, -1 on failure
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
static int 
XPATclHandler (void *client_data, void *call_data, char *paramlist,
	       char *buf, int len, int nargs)
#else
static int XPATclHandler(client_data, call_data, paramlist, buf, len, nargs)
     void *client_data;
     void *call_data;
     char *paramlist;
     char *buf;
     int len;
     int nargs;
#endif
{
  XPA xpa = (XPA)call_data;
  XPATclClientData xptr = (XPATclClientData)client_data;
  Tcl_CmdInfo info;		/* Info about command procedures */
  Tcl_Obj *objv[10];		/* Object vector for arguments */
  Tcl_Obj *resultPtr;		/* The result object */
  int result;			/* TCL_OK or TCL_ERROR */
  int object;
  char tbuf[SZ_LINE];
  XCONST84 char *argv[10];
  char *s=NULL;
  char *t=NULL;
  char *cmd;

  /* make sure we have a callback */
  if( !xptr || !xptr->callback ){
    XPAError(xpa, "Invalid tcl command for xpa callback");
    return(-1);
  }
  /* set command name */
  cmd = xptr->callback;

  /* Map from the command name to a C procedure */
  if( !Tcl_GetCommandInfo(xptr->interp, cmd, &info) ){
    XPAError(xpa, "Unknown tcl command for xpa callback");
    return(-1);
  }

  /* string-ize some values */
  snprintf(tbuf, SZ_LINE, "xpa_%p", xpa);
  s = xstrdup(tbuf);
  if( nargs > 4 ){
    snprintf(tbuf, SZ_LINE, "%d", len);
    t = xstrdup(tbuf);
  }

  /* package up argument values */
  object = info.isNativeObjectProc;
  if (object) {
    /* The object interface is preferred for this command */
    objv[0] = Tcl_NewStringObj(cmd, strlen(cmd));
    objv[1] = Tcl_NewStringObj(s, strlen(s));
    if( (xptr->client_data == NULL) || (*xptr->client_data == '\0') )
      objv[2] = Tcl_NewStringObj(NULLSTRING, strlen(NULLSTRING));
    else
      objv[2] = Tcl_NewStringObj(xptr->client_data, strlen(xptr->client_data));
    if( (paramlist == NULL) || (*paramlist == '\0') )
      objv[3] = Tcl_NewStringObj(NULLSTRING, strlen(NULLSTRING));
    else
      objv[3] = Tcl_NewStringObj(paramlist, strlen(paramlist));
    if( nargs > 4 ){
      if( (buf == NULL) || (*buf == '\0') || (len == 0) )
	objv[4] = Tcl_NewStringObj(NULLSTRING, strlen(NULLSTRING));
      else
	objv[4] = Tcl_NewStringObj(buf, len);
      objv[5] = Tcl_NewStringObj(t, strlen(t));
    }
  } else {
    argv[0] = cmd;
    argv[1] = s;
    argv[2] = xptr->client_data;
    argv[3] = paramlist;
    if( nargs > 4 ){
      argv[4] = buf;
      argv[5] = t;
    }
  }

  /* reset before we make C call */
  Tcl_ResetResult(xptr->interp);

  /*
   * Invoke the C procedure.
   */
  if (object) {
    result = (*info.objProc)(info.objClientData, xptr->interp, nargs, objv);
    /* Get the string value from the result object */
    resultPtr = Tcl_GetObjResult(xptr->interp);
    Tcl_SetResult(xptr->interp, Tcl_GetStringFromObj(resultPtr, NULL),
		  TCL_VOLATILE);
  } else {
    result = (*info.proc)(info.clientData, xptr->interp, nargs, argv);
  }

  /* clean up */
  if( s ) xfree(s);
  if( t ) xfree(t);

  /* translate Tcl status into XPA status */
  if( result == TCL_OK ){
    return(0);
  }
  else{
    s = (char *)Tcl_GetStringResult(xptr->interp);
    if( !strncmp(s, "XPA$ERROR: ", 11) )
      s += 11;
    XPAError(xpa, s);
    return(-1);
  }
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPATclReceive
 *
 * Purpose:	receive handler for access points written in tcl
 * 		execute the tcl receive command with xpa arguments
 *		used instead of Tcl_Eval so we can avoid interpreting either
 *		paramlist or buf
 *
 *
 * Returns:	0 on success, -1 on failure
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
static int 
XPATclReceive (void *client_data, void *call_data, char *paramlist,
	       char *buf, size_t len)
#else
static int XPATclReceive(client_data, call_data, paramlist, buf, len)
     void *client_data;
     void *call_data;
     char *paramlist;
     char *buf;
     size_t len;
#endif
{
  return(XPATclHandler(client_data, call_data, paramlist, buf, len, 6));
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPATclSend
 *
 * Purpose:	send handler for access points written in tcl
 *
 * Returns:	0 on success, -1 on failure
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
static int 
XPATclSend (void *client_data, void *call_data, char *paramlist,
	    char **buf, size_t *len)
#else
static int XPATclSend(client_data, call_data, paramlist, buf, len)
     void *client_data;
     void *call_data;
     char *paramlist;
     char **buf;
     size_t *len;
#endif
{
  return(XPATclHandler(client_data, call_data, paramlist, NULL, 0, 4));
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPATclInfo
 *
 * Purpose:	info handler for access points written in tcl
 *
 * Returns:	0 on success, -1 on failure
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
static int 
XPATclInfo (void *client_data, void *call_data, char *paramlist)
#else
static int XPATclInfo(client_data, call_data, paramlist)
     void *client_data;
     void *call_data;
     char *paramlist;
#endif
{
  return(XPATclHandler(client_data, call_data, paramlist, NULL, 0, 4));
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPANew_Tcl
 *
 * Purpose:	Tcl binding to XPANew procedure
 *
 * Tcl call:
 *
 *     xpanew class name help sproc sdata smode rproc rdata rmode
 *
 * use the empty string to specify NULL arguments
 *
 * Returns:	Tcl error code
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
static int
XPANew_Tcl(ClientData clientData, Tcl_Interp *interp,
	   int objc, Tcl_Obj *CONST objv[])
#else
static int XPANew_Tcl(clientData, interp, objc, objv)
     ClientData clientData;
     Tcl_Interp *interp;
     int objc;
     Tcl_Obj *CONST objv[];
#endif
{
  char *xclass;
  char *name;
  char *help;
  char *send_cb;
  char *sdata;
  char *smode;
  char *rec_cb;
  char *rdata;
  char *rmode;
  char tbuf[SZ_LINE];
  XPA xpa;
  SendCb sproc;
  ReceiveCb rproc;
  XPATclClientData sptr;
  XPATclClientData rptr;
  Tcl_Obj *resultPtr;

  /* make sure argument count is correct */
  if( objc != 10 ){
    Tcl_WrongNumArgs(interp, 1, objv, 
     "class name help sproc sdata smode rproc rdata rmode");
    return(TCL_ERROR);
  }

  /* get arguments as strings */
  xclass = Tcl_GetStringFromObj(objv[1], NULL);
  name = Tcl_GetStringFromObj(objv[2], NULL);
  help = Tcl_GetStringFromObj(objv[3], NULL);
  send_cb = Tcl_GetStringFromObj(objv[4], NULL);
  sdata = Tcl_GetStringFromObj(objv[5], NULL);
  smode = Tcl_GetStringFromObj(objv[6], NULL);
  rec_cb = Tcl_GetStringFromObj(objv[7], NULL);
  rdata = Tcl_GetStringFromObj(objv[8], NULL);
  rmode = Tcl_GetStringFromObj(objv[9], NULL);

  /* this will hold the result */
  resultPtr = Tcl_GetObjResult(interp);

  /* set up callback procedures */
  if( ((send_cb == NULL) || (*send_cb == '\0') ) ){
    sproc = NULL;
    sptr = NULL;
  }
  else{
    sproc = XPATclSend;
    sptr = (XPATclClientData)xcalloc(1, sizeof(XPATclClientDataRec));
    sptr->interp = interp;
    sptr->callback = xstrdup(send_cb);
    sptr->client_data = xstrdup(sdata);
  }
  if( ((rec_cb == NULL) || (*rec_cb == '\0') ) ){
    rproc = NULL;
    rptr = NULL;
  }
  else{
    rproc = XPATclReceive;
    rptr = (XPATclClientData)xcalloc(1, sizeof(XPATclClientDataRec));
    rptr->interp = interp;
    rptr->callback = xstrdup(rec_cb);
    rptr->client_data = xstrdup(rdata);
  }

  /* make sure we have either a send or receive callback */
  if( !sproc && !rproc ){
    Tcl_SetStringObj(resultPtr, 
       "XPA$ERROR: xpanew requires send_cb or rec_cb (or both)", -1);
    return(TCL_ERROR);
  }

  /* set up the tcl handler for the xpa access point */
  xpa = XPANew(xclass, name, help, sproc, sptr, smode, rproc, rptr, rmode);
  if( xpa == NULL ){
    Tcl_SetStringObj(resultPtr,
		     "XPA$ERROR: could not create XPA access point", -1);
    return(TCL_ERROR);
  }
  else{
    /* add this xpa to the Tcl event loop */
    XPATclAddInput(xpa);
    /* return xpa address to tcl in a string */
    snprintf(tbuf, SZ_LINE, "xpa_%p", xpa);
    Tcl_SetStringObj(resultPtr, tbuf, -1);
    return(TCL_OK);
  }
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPAFree_Tcl
 *
 * Purpose:	Tcl binding to XPAFree procedure
 *
 * Tcl call:
 *
 *     xpafree xpa
 *
 * Returns:	Tcl error code
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
static int
XPAFree_Tcl(ClientData clientData, Tcl_Interp *interp,
	   int objc, Tcl_Obj *CONST objv[])
#else
static int XPAFree_Tcl(clientData, interp, objc, objv)
     ClientData clientData;
     Tcl_Interp *interp;
     int objc;
     Tcl_Obj *CONST objv[];
#endif
{
  XPA xpa;
  XPATclClientData ptr;

  /* make sure argument count is correct */
  if( objc != 2 ){
    Tcl_WrongNumArgs(interp, 1, objv, "xpa");
    return(TCL_ERROR);
  }

  /* get xpa, which is always arg 1 */
  if( Tcl_GetXPAFromObj(interp, objv[1], TY_SERVER, &xpa) != TCL_OK){
    return(TCL_ERROR);
  }

  /* reset error/result condition */
  Tcl_ResetResult(interp);

  /* free the associated tcl record, stored in the client data */
  if( xpa->send_data ){
    ptr = (XPATclClientData)xpa->send_data;
    if( ptr->callback )    xfree( ptr->callback);
    if( ptr->client_data ) xfree( ptr->client_data);
    xfree(xpa->send_data);
  }
  if( xpa->receive_data ){
    ptr = (XPATclClientData)xpa->receive_data;
    if( ptr->callback )    xfree( ptr->callback);
    if( ptr->client_data ) xfree( ptr->client_data);
    xfree(xpa->receive_data);
  }
  if( xpa->info_data ){ 
    ptr = (XPATclClientData)xpa->info_data;
    if( ptr->callback )    xfree( ptr->callback);
    if( ptr->client_data ) xfree( ptr->client_data);
    xfree(xpa->info_data);
  }

  /* call the XPAFree routine */
  XPAFree(xpa);
  return(TCL_OK);
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPAInfoNew_Tcl
 *
 * Purpose:	Tcl binding to XPAInfoNew procedure
 *
 * Tcl call:
 *
 *     xpanew class name help iproc idata imode
 *
 * use the empty string to specify NULL arguments
 *
 * Returns:	Tcl error code
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
static int
XPAInfoNew_Tcl(ClientData clientData, Tcl_Interp *interp,
	   int objc, Tcl_Obj *CONST objv[])
#else
static int XPAInfoNew_Tcl(clientData, interp, objc, objv)
     ClientData clientData;
     Tcl_Interp *interp;
     int objc;
     Tcl_Obj *CONST objv[];
#endif
{
  char *xclass;
  char *name;
  char *info_cb;
  char *idata;
  char *imode;
  char tbuf[SZ_LINE];
  XPA xpa;
  InfoCb iproc;
  XPATclClientData iptr;
  Tcl_Obj *resultPtr;

  /* make sure argument count is correct */
  if( objc != 6 ){
    Tcl_WrongNumArgs(interp, 1, objv, 
     "class name iproc idata imode");
    return(TCL_ERROR);
  }

  /* get arguments as strings */
  xclass = Tcl_GetStringFromObj(objv[1], NULL);
  name = Tcl_GetStringFromObj(objv[2], NULL);
  info_cb = Tcl_GetStringFromObj(objv[3], NULL);
  idata = Tcl_GetStringFromObj(objv[4], NULL);
  imode = Tcl_GetStringFromObj(objv[5], NULL);

  /* this will hold the result */
  resultPtr = Tcl_GetObjResult(interp);

  /* set up callback procedures */
  if( info_cb == NULL ){
    Tcl_SetStringObj(resultPtr, 
       "XPA$ERROR: xpainfonew requires info_cb", -1);
    return(TCL_ERROR);
  }
  else{
    iproc = XPATclInfo;
    iptr = (XPATclClientData)xcalloc(1, sizeof(XPATclClientDataRec));
    iptr->interp = interp;
    iptr->callback = xstrdup(info_cb);
    iptr->client_data = xstrdup(idata);
  }

  /* set up the tcl handler for the xpa access point */
  xpa = XPAInfoNew(xclass, name, iproc, iptr, imode);
  if( xpa == NULL ){
    Tcl_SetStringObj(resultPtr,
		     "XPA$ERROR: could not create XPA info access point", -1);
    return(TCL_ERROR);
  }
  else{
    /* add this xpa to the Tcl event loop */
    XPATclAddInput(xpa);
    /* return xpa address to tcl in a string */
    snprintf(tbuf, SZ_LINE, "xpa_%p", xpa);
    Tcl_SetStringObj(resultPtr, tbuf, -1);
    return(TCL_OK);
  }
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPACmdNew_Tcl
 *
 * Purpose:	Tcl binding to XPACmdNew procedure
 *
 * Tcl call:
 *
 *     xpacmdnew class name
 *
 * Returns:	Tcl error code
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
static int
XPACmdNew_Tcl(ClientData clientData, Tcl_Interp *interp,
	   int objc, Tcl_Obj *CONST objv[])
#else
static int XPACmdNew_Tcl(clientData, interp, objc, objv)
     ClientData clientData;
     Tcl_Interp *interp;
     int objc;
     Tcl_Obj *CONST objv[];
#endif
{
  char *xclass;
  char *name;
  char tbuf[SZ_LINE];
  XPA xpa;
  Tcl_Obj *resultPtr;

  /* make sure argument count is correct */
  if( objc != 3 ){
    Tcl_WrongNumArgs(interp, 1, objv, "class name");
    return(TCL_ERROR);
  }

  /* get arguments as strings */
  xclass = Tcl_GetStringFromObj(objv[1], NULL);
  name = Tcl_GetStringFromObj(objv[2], NULL);

  /* this will hold the result */
  resultPtr = Tcl_GetObjResult(interp);

  /* set up the tcl handler for the xpa access point */
  if( (xpa = XPACmdNew(xclass, name)) == NULL ){
    Tcl_SetStringObj(resultPtr, 
       "XPA$ERROR: could not create XPA command access point", -1);
    return(TCL_ERROR);
  }
  else{
    /* add this xpa to the Tcl event loop */
    XPATclAddInput(xpa);
    /* return xpa address to tcl in a string */
    snprintf(tbuf, SZ_LINE, "xpa_%p", xpa);
    Tcl_SetStringObj(resultPtr, tbuf, -1);
    return(TCL_OK);
  }
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPACmdAdd_Tcl
 *
 * Purpose:	Tcl binding to XPACmdAdd procedure
 *
 * Tcl call:
 *
 *     xpacmdadd xpa name help sproc sdata smode rproc rdata rmode
 *
 * use the empty string to specify NULL arguments
 *
 * Returns:	Tcl error code
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
static int
XPACmdAdd_Tcl(ClientData clientData, Tcl_Interp *interp,
	   int objc, Tcl_Obj *CONST objv[])
#else
static int XPACmdAdd_Tcl(clientData, interp, objc, objv)
     ClientData clientData;
     Tcl_Interp *interp;
     int objc;
     Tcl_Obj *CONST objv[];
#endif
{
  char *name;
  char *help;
  char *send_cb;
  char *sdata;
  char *smode;
  char *rec_cb;
  char *rdata;
  char *rmode;
  char tbuf[SZ_LINE];
  XPA xpa;
  XPACmd xpacmd;
  SendCb sproc;
  ReceiveCb rproc;
  XPATclClientData sptr;
  XPATclClientData rptr;
  Tcl_Obj *resultPtr;

  /* make sure argument count is correct */
  if( objc != 10 ){
    Tcl_WrongNumArgs(interp, 1, objv, 
     "class name help sproc sdata smode rproc rdata rmode");
    return(TCL_ERROR);
  }

  /* get xpa, which is always arg 1 */
  if( Tcl_GetXPAFromObj(interp, objv[1],  TY_SERVER, &xpa) != TCL_OK){
    return(TCL_ERROR);
  }

  name = Tcl_GetStringFromObj(objv[2], NULL);
  help = Tcl_GetStringFromObj(objv[3], NULL);
  send_cb = Tcl_GetStringFromObj(objv[4], NULL);
  sdata = Tcl_GetStringFromObj(objv[5], NULL);
  smode = Tcl_GetStringFromObj(objv[6], NULL);
  rec_cb = Tcl_GetStringFromObj(objv[7], NULL);
  rdata = Tcl_GetStringFromObj(objv[8], NULL);
  rmode = Tcl_GetStringFromObj(objv[9], NULL);

  /* this will hold the result */
  resultPtr = Tcl_GetObjResult(interp);

  /* set up callback procedures */
  if( ((send_cb == NULL) || (*send_cb == '\0') ) ){
    sproc = NULL;
    sptr = NULL;
  }
  else{
    sproc = XPATclSend;
    sptr = (XPATclClientData)xcalloc(1, sizeof(XPATclClientDataRec));
    sptr->interp = interp;
    sptr->callback = xstrdup(send_cb);
    sptr->client_data = xstrdup(sdata);
  }
  if( ((rec_cb == NULL) || (*rec_cb == '\0') ) ){
    rproc = NULL;
    rptr = NULL;
  }
  else{
    rproc = XPATclReceive;
    rptr = (XPATclClientData)xcalloc(1, sizeof(XPATclClientDataRec));
    rptr->interp = interp;
    rptr->callback = xstrdup(rec_cb);
    rptr->client_data = xstrdup(rdata);
  }

  /* make sure we have either a send or receive callback */
  if( !sproc && !rproc ){
    Tcl_SetStringObj(resultPtr, 
       "XPA$ERROR: xpacmdadd requires send_cb or rec_cb (or both)", -1);
    return(TCL_ERROR);
  }

  /* set up the tcl handler for the xpa access point */
  xpacmd = XPACmdAdd(xpa, name, help, sproc, sptr, smode, rproc, rptr, rmode);
  if( xpacmd == NULL ){
    Tcl_SetStringObj(resultPtr, "XPA$ERROR: could not create XPA command", -1);
    return(TCL_ERROR);
  }
  else{
    /* return xpa address to tcl in a string */
    snprintf(tbuf, SZ_LINE, "xpacmd_%p", xpacmd);
    Tcl_SetStringObj(resultPtr, tbuf, -1);
    return(TCL_OK);
  }
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPACmdDel_Tcl
 *
 * Purpose:	Tcl binding to XPACmdDel procedure
 *
 * Tcl call:
 *
 *     xpacmddel xpa cmd
 *
 * Returns:	Tcl error code
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
static int
XPACmdDel_Tcl(ClientData clientData, Tcl_Interp *interp,
	   int objc, Tcl_Obj *CONST objv[])
#else
static int XPACmdDel_Tcl(clientData, interp, objc, objv)
     ClientData clientData;
     Tcl_Interp *interp;
     int objc;
     Tcl_Obj *CONST objv[];
#endif
{
  void *lval;
  char *s;
  XPA xpa;
  XPACmd cmd;
  Tcl_Obj *resultPtr;

  /* make sure argument count is correct */
  if( objc != 3 ){
    Tcl_WrongNumArgs(interp, 1, objv, "xpa cmd");
    return(TCL_ERROR);
  }

  /* get result pointer */
  resultPtr = Tcl_GetObjResult(interp);

  /* get xpa, which is always arg 1 */
  if( Tcl_GetXPAFromObj(interp, objv[1], TY_SERVER, &xpa) != TCL_OK){
    return(TCL_ERROR);
  }

  /* get xpacmd, which is always arg 2 */
  if( (s = Tcl_GetStringFromObj(objv[2], NULL)) == NULL ){
    return(TCL_ERROR);
  }
  if( strncmp(s, "xpacmd_", 7) || (sscanf(&(s[7]), "%p", &lval) != 1) ){
    Tcl_SetStringObj(resultPtr, "XPA$ERROR: invalid xpacmd handle", -1);
    return(TCL_ERROR);
  }
  cmd = (XPACmd)lval;

  /* reset error/result condition */
  Tcl_ResetResult(interp);

  /* call the XPACmdDel routine */
  if( XPACmdDel(xpa, cmd) == 0 ){
    /* free the associated tcl record, stored in the client data */
    if( cmd->send_data )    xfree(cmd->send_data);
    if( cmd->receive_data ) xfree(cmd->receive_data);
    return(TCL_OK);
  }
  else{
    resultPtr = Tcl_GetObjResult(interp);
    Tcl_SetStringObj(resultPtr, "XPA$ERROR: could not delete xpa cmd", -1);
    return(TCL_ERROR);
  }
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPARec_Tcl
 *
 * Purpose:	Tcl binding to retrieve info from the xpa struct
 *
 * Tcl call:
 *
 *     set val [xparec xpa <option>]
 *
 *     where option can be one of the following:
 *
 *			name
 *			class
 *			method
 *			cmdfd
 *			datafd
#ifndef HAVE_CYGWIN
 *			cmdchan
 *			datachan
#endif
 *			sendian
 *			cendian
 *			version
 *		
 *
 * Returns:	Tcl error code
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
static int
XPARec_Tcl(ClientData clientData, Tcl_Interp *interp,
	   int objc, Tcl_Obj *CONST objv[])
#else
static int XPARec_Tcl(clientData, interp, objc, objv)
     ClientData clientData;
     Tcl_Interp *interp;
     int objc;
     Tcl_Obj *CONST objv[];
#endif
{
#ifndef HAVE_CYGWIN
  Tcl_Channel chan;
#endif
  static XCONST84 char *subCmds[] = {
    "cendian",
    "class",
#ifndef HAVE_CYGWIN
    "cmdchan",
#endif
    "cmdfd",
#ifndef HAVE_CYGWIN
    "datachan",
#endif
    "datafd",
    "method",
    "name",
    "sendian",
    "version",
    (char *) NULL};
  enum ISubCmdIdx {
    ICendianIdx,
    IClassIdx,
#ifndef HAVE_CYGWIN
    ICmdChanIdx,
#endif
    ICmdFdIdx,
#ifndef HAVE_CYGWIN
    IDataChanIdx,
#endif
    IDataFdIdx,
    IMethodIdx,
    INameIdx,
    ISendianIdx,
    IVersionIdx
  } index;
  XPA xpa;
  int result;
  char tbuf[SZ_LINE];

  /* we always have 3 args: xparec $xpa [option] */
  if (objc != 3) {
    Tcl_WrongNumArgs(interp, 1, objv, "xpa option");
    return TCL_ERROR;
  }

  /* get sub-command index */
  if( (result = Tcl_GetIndexFromObj(interp, objv[2], subCmds, "option", 0,
				    (int *)&index)) != TCL_OK ){
    return result;
  }

  /* get xpa, which is always arg 1 */
  if( (result=Tcl_GetXPAFromObj(interp, objv[1], TY_SERVER, &xpa)) != TCL_OK){
    /* valid xpa is required, except for version */
    if( index != IVersionIdx )
      return(TCL_ERROR);
  }

  /* process sub-command */
  switch (index) {
  case ICendianIdx:
    Tcl_SetResult(interp, (char *)xpa_cendian(xpa), TCL_VOLATILE);
    result = TCL_OK;
    break;
  case IClassIdx:
    Tcl_SetResult(interp, xpa_class(xpa), TCL_VOLATILE);
    result = TCL_OK;
    break;
#ifndef HAVE_CYGWIN
  case ICmdChanIdx:
    snprintf(tbuf, SZ_LINE, "sock%d", xpa_cmdfd(xpa));
    /* make sure we have a valid OS socket fd */
    if( xpa_cmdfd(xpa) < 0 ){
      Tcl_SetResult(interp, "none", TCL_STATIC);
      result = TCL_OK;
    }
    /* see if this socket already is defined as a tcl variable */
    else if( Tcl_GetChannel(interp, tbuf, NULL) != NULL ){
      Tcl_SetResult(interp, tbuf, TCL_VOLATILE);
      result = TCL_OK;
    }
    /* create new tcl variable for this socket */
    else{
      /* create a tcl channel corresponding to the xpa socket */
      if( !(chan = Tcl_MakeTcpClientChannel((ClientData)(uintptr_t)xpa_cmdfd(xpa))) ){
	Tcl_SetResult(interp, "XPA$ERROR: could not map XPA cmdfd to tcl",
		      TCL_STATIC);
	result = TCL_ERROR;
      }
      else{
	/* hold a reference to this channel outside tcl */
	Tcl_RegisterChannel(NULL, chan);
	/* register this channel with tcl */
	Tcl_RegisterChannel(interp, chan);
	/* make this Tcl channel unbuffered, so user does not have to flush */
	Tcl_SetChannelOption(interp, chan, "-buffering", "none");
	/* return name so that it can be used by tcl */
	Tcl_SetResult(interp, (char *)Tcl_GetChannelName(chan), TCL_VOLATILE);
	result = TCL_OK;
      }
    }
    break;
#endif
  case ICmdFdIdx:
    if( xpa_cmdfd(xpa) < 0 )
      strcpy(tbuf, "none");
    else
      snprintf(tbuf, SZ_LINE, "%d", xpa_cmdfd(xpa));
    Tcl_SetResult(interp, tbuf, TCL_VOLATILE);
    result = TCL_OK;
    break;
#ifndef HAVE_CYGWIN
  case IDataChanIdx:
    snprintf(tbuf, SZ_LINE, "sock%d", xpa_datafd(xpa));
    /* make sure we have a valid OS socket fd */
    if( xpa_datafd(xpa) < 0 ){
      Tcl_SetResult(interp, "none", TCL_STATIC);
      result = TCL_OK;
    }
    /* see if this socket already is defined as a tcl variable */
    else if( Tcl_GetChannel(interp, tbuf, NULL) != NULL ){
      Tcl_SetResult(interp, tbuf, TCL_VOLATILE);
      result = TCL_OK;
    }
    /* create new tcl variable for this socket */
    else{
      if( !(chan = Tcl_MakeTcpClientChannel((ClientData)(uintptr_t)xpa_datafd(xpa))) ){
	Tcl_SetResult(interp, "XPA$ERROR: could not map XPA datafd to tcl",
		      TCL_STATIC);
	result = TCL_ERROR;
      }
      else{
	/* hold a reference to this channel outside tcl */
	Tcl_RegisterChannel(NULL, chan);
	/* register this channel with tcl */
	Tcl_RegisterChannel(interp, chan);
	/* make this Tcl channel unbuffered, so user does not have to flush */
	Tcl_SetChannelOption(interp, chan, "-buffering", "none");
	/* return name so that it can be used by tcl */
	Tcl_SetResult(interp, (char *)Tcl_GetChannelName(chan), TCL_VOLATILE);
	result = TCL_OK;
      }
    }
    break;
#endif
  case IDataFdIdx:
    if( xpa_datafd(xpa) < 0 )
      strcpy(tbuf, "none");
    else
      snprintf(tbuf, SZ_LINE, "%d", xpa_datafd(xpa));
    Tcl_SetResult(interp, tbuf, TCL_VOLATILE);
    result = TCL_OK;
    break;
  case IMethodIdx:
    Tcl_SetResult(interp, xpa_method(xpa), TCL_VOLATILE);
    result = TCL_OK;
    break;
  case INameIdx:
    Tcl_SetResult(interp, xpa_name(xpa), TCL_VOLATILE);
    result = TCL_OK;
    break;
  case ISendianIdx:
    Tcl_SetResult(interp, xpa_sendian(xpa), TCL_VOLATILE);
    result = TCL_OK;
    break;
  case IVersionIdx:
    snprintf(tbuf, SZ_LINE, "%s", XPA_VERSION);
    Tcl_SetResult(interp, tbuf, TCL_VOLATILE);
    result = TCL_OK;
    break;
  }
  return result;
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPASetBuf_Tcl
 *
 * Purpose:	Tcl binding to XPASetBuf procedure
 *
 * Tcl call:
 *
 *     xpasetbuf xpa buf len
 *
 * Returns:	Tcl error code
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
static int
XPASetBuf_Tcl(ClientData clientData, Tcl_Interp *interp,
	   int objc, Tcl_Obj *CONST objv[])
#else
static int XPASetBuf_Tcl(clientData, interp, objc, objv)
     ClientData clientData;
     Tcl_Interp *interp;
     int objc;
     Tcl_Obj *CONST objv[];
#endif
{
  int error;
  int len;
  char *buf;
  XPA xpa;

  /* make sure argument count is correct */
  if( objc < 3 ){
    Tcl_WrongNumArgs(interp, 1, objv, "xpa buf len");
    return(TCL_ERROR);
  }

  /* get xpa, which is always arg 1 */
  if( Tcl_GetXPAFromObj(interp, objv[1], TY_SERVER, &xpa) != TCL_OK){
    return(TCL_ERROR);
  }

  /* get buf */
  buf = Tcl_GetStringFromObj(objv[2], &len);
  /* get len if specified */
  if( objc >= 4 ){
    if( (error = Tcl_GetIntFromObj(interp, objv[3], &len)) != TCL_OK )
      return(error);
  }
  /* copy buffer to the xpa struct */
  XPASetBuf(xpa, buf, len, 1);
  /* return status */
  return(TCL_OK);
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPAOpen_Tcl
 *
 * Purpose:	Tcl binding to XPAOpen procedure
 *
 * Tcl call:
 *
 *     xpaopen mode
 *
 * mode currently is NULL
 *
 * Returns:	Tcl error code
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
static int
XPAOpen_Tcl(ClientData clientData, Tcl_Interp *interp,
	   int objc, Tcl_Obj *CONST objv[])
#else
static int XPAOpen_Tcl(clientData, interp, objc, objv)
     ClientData clientData;
     Tcl_Interp *interp;
     int objc;
     Tcl_Obj *CONST objv[];
#endif
{
  char *mode;
  char tbuf[SZ_LINE];
  XPA xpa;
  Tcl_Obj *resultPtr;

  /* make sure argument count is correct */
  if( objc != 2 ){
    Tcl_WrongNumArgs(interp, 1, objv, "mode");
    return(TCL_ERROR);
  }

  /* get arguments as strings */
  mode = Tcl_GetStringFromObj(objv[1], NULL);

  /* this will hold the result */
  resultPtr = Tcl_GetObjResult(interp);

  /* set up the tcl handler for the xpa access point */
  xpa = XPAOpen(mode);
  if( xpa == NULL ){
    Tcl_SetStringObj(resultPtr,
		     "XPA$ERROR: could not open XPA", -1);
    return(TCL_ERROR);
  }
  else{
    /* return xpa address to tcl in a string */
    snprintf(tbuf, SZ_LINE, "xpa_%p", xpa);
    Tcl_SetStringObj(resultPtr, tbuf, -1);
    return(TCL_OK);
  }
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPAClose_Tcl
 *
 * Purpose:	Tcl binding to XPAClose procedure
 *
 * Tcl call:
 *
 *     xpaclose xpa
 *
 * Returns:	Tcl error code
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
static int
XPAClose_Tcl(ClientData clientData, Tcl_Interp *interp,
	   int objc, Tcl_Obj *CONST objv[])
#else
static int XPAClose_Tcl(clientData, interp, objc, objv)
     ClientData clientData;
     Tcl_Interp *interp;
     int objc;
     Tcl_Obj *CONST objv[];
#endif
{
  XPA xpa;

  /* make sure argument count is correct */
  if( objc != 2 ){
    Tcl_WrongNumArgs(interp, 1, objv, "xpa");
    return(TCL_ERROR);
  }

  /* get xpa, which is always arg 1 */
  if( Tcl_GetXPAFromObj(interp, objv[1], TY_CLIENT, &xpa) != TCL_OK){
    return(TCL_ERROR);
  }

  /* reset error/result condition */
  Tcl_ResetResult(interp);

  /* call the XPAClose routine */
  XPAClose(xpa);
  return(TCL_OK);
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPAGet_Tcl
 *
 * Purpose:	Tcl binding to XPAGet procedure
 *
 * Tcl call:
 *
 *     set got [xpaget xpa template paramlist mode bufs lens names errs n]
 *
 * Returns:	Tcl error code
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
static int
XPAGet_Tcl(ClientData clientData, Tcl_Interp *interp,
	   int objc, Tcl_Obj *CONST objv[])
#else
static int XPAGet_Tcl(clientData, interp, objc, objv)
     ClientData clientData;
     Tcl_Interp *interp;
     int objc;
     Tcl_Obj *CONST objv[];
#endif
{
  XPA xpa;
  int got;
  int n;
  int i;
  size_t *clens=NULL;
  char *xpastr;
  char *tmpl;
  char *paramlist;
  char *mode;
  /* char *bufs; */
  /* char *lens; */
  char *names;
  char *errs;
  char **cbufs=NULL;
  char **cnames=NULL;
  char **cerrs=NULL;
  Tcl_Obj *resultPtr;
  Tcl_Obj *nullPtr;
  Tcl_Obj *bufsPtr;
  Tcl_Obj *lensPtr;
  Tcl_Obj *namesPtr;
  Tcl_Obj *errsPtr;
  Tcl_Obj **bufsObjv;
  Tcl_Obj **lensObjv;
  Tcl_Obj **namesObjv=NULL;
  Tcl_Obj **errsObjv=NULL;

  /* make sure argument count is correct */
  if( objc != 10 ){
    Tcl_WrongNumArgs(interp, 1, objv,
		     "xpa template paramlist mode bufs lens names errs n");
    return(TCL_ERROR);
  }

  /* get result pointer */
  resultPtr = Tcl_GetObjResult(interp);

  /* get xpa struct pointer, which might be NULL */
  xpastr = Tcl_GetStringFromObj(objv[1], NULL);
  if( TCL_NULLSTR(xpastr) )
    xpa = NULL;
  else{
    /* get xpa, which is always arg 1 */
    if( Tcl_GetXPAFromObj(interp, objv[1], TY_CLIENT, &xpa) != TCL_OK){
      Tcl_SetStringObj(resultPtr, "XPA$ERROR: invalid xpa client handle", -1);
      return(TCL_ERROR);
    }
  }

  /* get other args */
  tmpl = Tcl_GetStringFromObj(objv[2], NULL);
  paramlist = Tcl_GetStringFromObj(objv[3], NULL);
  mode = Tcl_GetStringFromObj(objv[4], NULL);
  /* bufs = Tcl_GetStringFromObj(objv[5], NULL); */
  /* lens = Tcl_GetStringFromObj(objv[6], NULL); */
  names = Tcl_GetStringFromObj(objv[7], NULL);
  errs = Tcl_GetStringFromObj(objv[8], NULL);
  if( (Tcl_GetIntFromObj(interp, objv[9], &n) != TCL_OK) || (n < 1) ){
    n = 1;
  }

  /* allocate return buffers */
  cbufs  = (char **)xcalloc(n, sizeof(char *));
  bufsObjv = (Tcl_Obj **)xcalloc(n, sizeof(Tcl_Obj *));
  clens  =   (size_t *)xcalloc(n, sizeof(size_t));
  lensObjv = (Tcl_Obj **)xcalloc(n, sizeof(Tcl_Obj *));
  if( !TCL_NULLSTR(names) ){
    cnames = (char **)xcalloc(n, sizeof(char *));
    namesObjv = (Tcl_Obj **)xcalloc(n, sizeof(Tcl_Obj *));
  }
  if( !TCL_NULLSTR(errs) ){
    cerrs  = (char **)xcalloc(n, sizeof(char *));
    errsObjv = (Tcl_Obj **)xcalloc(n, sizeof(Tcl_Obj *));
  }

  /* reset before we make C call */
  Tcl_ResetResult(interp);

  /* make the XPA C call */
  got = XPAGet(xpa, tmpl, paramlist, mode, cbufs, clens, cnames, cerrs, n);

  /* if we got anything, fill in the blanks */
  if( got > 0 ){
    /* generate a Tcl object for each return argument */
    for(i=0; i<got; i++){
      bufsObjv[i] = Tcl_NewObj();
      Tcl_SetStringObj(bufsObjv[i], cbufs[i], clens[i]);
      
      lensObjv[i] = Tcl_NewObj();
      Tcl_SetIntObj(lensObjv[i], clens[i]);
      
      if( cnames ){
	namesObjv[i] = Tcl_NewObj();
	Tcl_SetStringObj(namesObjv[i], cnames[i],
			 cnames[i] ? strlen(cnames[i]) : 0);
      }
      
      if( cerrs ){
	errsObjv[i] = Tcl_NewObj();
	Tcl_SetStringObj(errsObjv[i], cerrs[i], 
			 cerrs[i] ? strlen(cerrs[i]) : 0);
      }
    }
    /* make lists from the return arguments and set the return variables */
    bufsPtr = Tcl_NewObj();
    Tcl_SetListObj(bufsPtr, got, bufsObjv);
    Tcl_ObjSetVar2(interp, objv[5], NULL, bufsPtr, TCL_PARSE_PART1);
    
    lensPtr = Tcl_NewObj();
    Tcl_SetListObj(lensPtr, got, lensObjv);
    Tcl_ObjSetVar2(interp, objv[6], NULL, lensPtr, TCL_PARSE_PART1);
    
    if( cnames ){
      namesPtr = Tcl_NewObj();
      Tcl_SetListObj(namesPtr, got, namesObjv);
      Tcl_ObjSetVar2(interp, objv[7], NULL, namesPtr, TCL_PARSE_PART1);
    }
    
    if( cerrs ){
      errsPtr = Tcl_NewObj();
      Tcl_SetListObj(errsPtr, got, errsObjv);
      Tcl_ObjSetVar2(interp, objv[8], NULL, errsPtr, TCL_PARSE_PART1);
    }
  }
  else{
    nullPtr = Tcl_NewObj();
    Tcl_SetStringObj(nullPtr, "", -1);
    Tcl_ObjSetVar2(interp, objv[5], NULL, nullPtr, TCL_PARSE_PART1);
    Tcl_ObjSetVar2(interp, objv[6], NULL, nullPtr, TCL_PARSE_PART1);
    if( cnames )
      Tcl_ObjSetVar2(interp, objv[7], NULL, nullPtr, TCL_PARSE_PART1);
    if( cerrs )
      Tcl_ObjSetVar2(interp, objv[8], NULL, nullPtr, TCL_PARSE_PART1);
  }

  /* free up space */
  for(i=0; i<got; i++){
    if( cbufs[i]  ) xfree((char *)cbufs[i]);
    if( cnames[i] ) xfree((char *)cnames[i]);
    if( cerrs[i]  ) xfree((char *)cerrs[i]);
  }
  if( cbufs  )    xfree((char *)cbufs);
  if( clens  )    xfree((char *)clens);
  if( cnames )    xfree((char *)cnames);
  if( cerrs  )    xfree((char *)cerrs);
  if( bufsObjv )  xfree((char *)bufsObjv);
  if( lensObjv )  xfree((char *)lensObjv);
  if( namesObjv ) xfree((char *)namesObjv);
  if( errsObjv  ) xfree((char *)errsObjv);

  /* return the number of accesses as the tcl function result */
  resultPtr = Tcl_GetObjResult(interp);
  Tcl_SetIntObj(resultPtr, got);

  /* return status */
  return(TCL_OK);
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPAGetFd_Tcl
 *
 * Purpose:	Tcl binding to XPAGetFd procedure
 *
 * Tcl call:
 *
 *     set got [xpaget xpa template paramlist mode chans names errs n]
 *
 * Returns:	Tcl error code
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
static int
XPAGetFd_Tcl(ClientData clientData, Tcl_Interp *interp,
	   int objc, Tcl_Obj *CONST objv[])
#else
static int XPAGetFd_Tcl(clientData, interp, objc, objv)
     ClientData clientData;
     Tcl_Interp *interp;
     int objc;
     Tcl_Obj *CONST objv[];
#endif
{
  XPA xpa;
  int got;
  int n;
  int i;
  int flag;
  int *cfds;
  char *xpastr;
  char *tmpl;
  char *paramlist;
  char *mode;
  char *names;
  char *errs;
  char **cnames=NULL;
  char **cerrs=NULL;
  Tcl_Obj *resultPtr;
  Tcl_Obj *nullPtr;
  Tcl_Obj *fdPtr;
  Tcl_Obj *namesPtr;
  Tcl_Obj *errsPtr;
  Tcl_Obj **namesObjv=NULL;
  Tcl_Obj **errsObjv=NULL;
  Tcl_Channel chan;

  /* make sure argument count is correct */
  if( objc != 9 ){
    Tcl_WrongNumArgs(interp, 1, objv,
		     "xpa template paramlist mode chans names errs n");
    return(TCL_ERROR);
  }

  /* get result pointer */
  resultPtr = Tcl_GetObjResult(interp);

  /* get xpa struct pointer, which might be NULL */
  xpastr = Tcl_GetStringFromObj(objv[1], NULL);
  if( TCL_NULLSTR(xpastr) )
    xpa = NULL;
  else{
    /* get xpa, which is always arg 1 */
    if( Tcl_GetXPAFromObj(interp, objv[1], TY_CLIENT, &xpa) != TCL_OK ){
      Tcl_SetStringObj(resultPtr, "XPA$ERROR: invalid xpa client handle", -1);
      return(TCL_ERROR);
    }
  }

  /* get other args */
  tmpl = Tcl_GetStringFromObj(objv[2], NULL);
  paramlist = Tcl_GetStringFromObj(objv[3], NULL);
  mode = Tcl_GetStringFromObj(objv[4], NULL);
  names = Tcl_GetStringFromObj(objv[6], NULL);
  errs = Tcl_GetStringFromObj(objv[7], NULL);
  if( (Tcl_GetIntFromObj(interp, objv[8], &n) != TCL_OK) || (n < 1) ){
    n = 1;
  }

  /* get file descriptors */
  if( n < 0 ){
    cfds  = (int *)xcalloc(1, sizeof(int));
    if( Tcl_ListObjIndex(interp, objv[5], 0, &fdPtr) != TCL_OK ){
      Tcl_SetStringObj(resultPtr, 
	       "XPA$ERROR: invalid channel list passed to xpagetfd", -1);
      return(TCL_ERROR);
    }
    else{
      chan = Tcl_GetChannel(interp, Tcl_GetStringFromObj(fdPtr, NULL),
			    &flag);
      if( chan == NULL ){
	Tcl_SetStringObj(resultPtr, 
		 "XPA$ERROR: invalid channel passed to xpagetfd", -1);
	return(TCL_ERROR);
      }
      if( !(flag&TCL_WRITABLE) ){
	Tcl_SetStringObj(resultPtr, 
		 "XPA$ERROR: non-writable channel passed to xpagetfd", -1);
	return(TCL_ERROR);
      }
      Tcl_GetChannelHandle(chan, TCL_WRITABLE, (ClientData *)&(cfds[0]));
    }
  }
  else{
    cfds  = (int *)xcalloc(n, sizeof(int));
    for(i=0; i<n; i++){
      if( Tcl_ListObjIndex(interp, objv[5], i, &fdPtr) != TCL_OK ){
	Tcl_SetStringObj(resultPtr, 
		 "XPA$ERROR: invalid channel list passed to xpagetfd", -1);
	return(TCL_ERROR);
      }
      else{
	chan = Tcl_GetChannel(interp, Tcl_GetStringFromObj(fdPtr, NULL),
			      &flag);
	if( chan == NULL ){
	  Tcl_SetStringObj(resultPtr, 
		 "XPA$ERROR: invalid channel passed to xpagetfd", -1);
	  return(TCL_ERROR);
	}
	if( !(flag&TCL_WRITABLE) ){
	  Tcl_SetStringObj(resultPtr, 
		 "XPA$ERROR: non-writable channel passed to xpagetfd", -1);
	  return(TCL_ERROR);
	}
	Tcl_GetChannelHandle(chan, TCL_WRITABLE, (ClientData *)&(cfds[i]));
      }
    }
  }

  /* allocate return buffers */
  if( !TCL_NULLSTR(names) ){
    cnames = (char **)xcalloc(n, sizeof(char *));
    namesObjv = (Tcl_Obj **)xcalloc(n, sizeof(Tcl_Obj *));
  }
  if( !TCL_NULLSTR(errs) ){
    cerrs  = (char **)xcalloc(n, sizeof(char *));
    errsObjv = (Tcl_Obj **)xcalloc(n, sizeof(Tcl_Obj *));
  }

  /* reset before we make C call */
  Tcl_ResetResult(interp);

  /* make the XPA C call */
  got = XPAGetFd(xpa, tmpl, paramlist, mode, cfds, cnames, cerrs, n);

  /* if we got anything, fill in the blanks */
  if( got > 0 ){
    /* generate a Tcl object for each return argument */
    for(i=0; i<got; i++){
      if( cnames ){
	namesObjv[i] = Tcl_NewObj();
	Tcl_SetStringObj(namesObjv[i], cnames[i],
			 cnames[i] ? strlen(cnames[i]) : 0);
      }

      if( cerrs ){
	errsObjv[i] = Tcl_NewObj();
	Tcl_SetStringObj(errsObjv[i], cerrs[i], 
			 cerrs[i] ? strlen(cerrs[i]) : 0);
      }
    }
    /* make lists from the return arguments and set the return variables */
    if( cnames ){
      namesPtr = Tcl_NewObj();
      Tcl_SetListObj(namesPtr, got, namesObjv);
      Tcl_ObjSetVar2(interp, objv[6], NULL, namesPtr, TCL_PARSE_PART1);
    }
    if( cerrs ){
      errsPtr = Tcl_NewObj();
      Tcl_SetListObj(errsPtr, got, errsObjv);
      Tcl_ObjSetVar2(interp, objv[7], NULL, errsPtr, TCL_PARSE_PART1);
    }
  }
  else{
    nullPtr = Tcl_NewObj();
    Tcl_SetStringObj(nullPtr, "", -1);
    if( cnames )
      Tcl_ObjSetVar2(interp, objv[6], NULL, nullPtr, TCL_PARSE_PART1);
    if( cerrs )
      Tcl_ObjSetVar2(interp, objv[7], NULL, nullPtr, TCL_PARSE_PART1);
  }

  /* free up space */
  for(i=0; i<got; i++){
    if( cnames[i] ) xfree((char *)cnames[i]);
    if( cerrs[i]  ) xfree((char *)cerrs[i]);
  }
  if( cfds   )    xfree((char *)cfds);
  if( cnames )    xfree((char *)cnames);
  if( cerrs  )    xfree((char *)cerrs);
  if( namesObjv ) xfree((char *)namesObjv);
  if( errsObjv  ) xfree((char *)errsObjv);

  /* return the number of accesses as the tcl function result */
  Tcl_SetIntObj(resultPtr, got);

  /* return status */
  return(TCL_OK);
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPASet_Tcl
 *
 * Purpose:	Tcl binding to XPASet procedure
 *
 * Tcl call:
 *
 *     set got [xpaset xpa template paramlist mode buf len names errs n]
 *
 * Returns:	Tcl error code
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
static int
XPASet_Tcl(ClientData clientData, Tcl_Interp *interp,
	   int objc, Tcl_Obj *CONST objv[])
#else
static int XPASet_Tcl(clientData, interp, objc, objv)
     ClientData clientData;
     Tcl_Interp *interp;
     int objc;
     Tcl_Obj *CONST objv[];
#endif
{
  XPA xpa;
  int got;
  int n;
  int i;
  int blen;
  int len;
  char *xpastr;
  char *tmpl;
  char *paramlist;
  char *mode;
  char *buf;
  char *names;
  char *errs;
  char **cnames=NULL;
  char **cerrs=NULL;
  Tcl_Obj *resultPtr;
  Tcl_Obj *nullPtr;
  Tcl_Obj *namesPtr;
  Tcl_Obj *errsPtr;
  Tcl_Obj **namesObjv=NULL;
  Tcl_Obj **errsObjv=NULL;

  /* make sure argument count is correct */
  if( objc != 10 ){
    Tcl_WrongNumArgs(interp, 1, objv,
		     "xpa template paramlist mode buf len names errs n");
    return(TCL_ERROR);
  }

  /* get result pointer */
  resultPtr = Tcl_GetObjResult(interp);

  /* get xpa struct pointer, which might be NULL */
  xpastr = Tcl_GetStringFromObj(objv[1], NULL);
  if( TCL_NULLSTR(xpastr) )
    xpa = NULL;
  else{
    /* get xpa, which is always arg 1 */
    if( Tcl_GetXPAFromObj(interp, objv[1], TY_CLIENT, &xpa) != TCL_OK ){
      Tcl_SetStringObj(resultPtr, "XPA$ERROR: invalid xpa client handle", -1);
      return(TCL_ERROR);
    }
  }

  /* get other args */
  tmpl = Tcl_GetStringFromObj(objv[2], NULL);
  paramlist = Tcl_GetStringFromObj(objv[3], NULL);
  mode = Tcl_GetStringFromObj(objv[4], NULL);
  buf = Tcl_GetStringFromObj(objv[5], &blen);
  if( (Tcl_GetIntFromObj(interp, objv[6], &len) != TCL_OK) || (len < 0) ){
    len = blen;
  }
  names = Tcl_GetStringFromObj(objv[7], NULL);
  errs = Tcl_GetStringFromObj(objv[8], NULL);
  if( (Tcl_GetIntFromObj(interp, objv[9], &n) != TCL_OK) || (n < 1) ){
    n = 1;
  }

  /* allocate return buffers */
  if( !TCL_NULLSTR(names) ){
    cnames = (char **)xcalloc(n, sizeof(char *));
    namesObjv = (Tcl_Obj **)xcalloc(n, sizeof(Tcl_Obj *));
  }
  if( !TCL_NULLSTR(errs) ){
    cerrs  = (char **)xcalloc(n, sizeof(char *));
    errsObjv = (Tcl_Obj **)xcalloc(n, sizeof(Tcl_Obj *));
  }

  /* reset before we make C call */
  Tcl_ResetResult(interp);

  /* make the XPA C call */
  got = XPASet(xpa, tmpl, paramlist, mode, buf, len, cnames, cerrs, n);

  /* if we got anything, fill in the blanks */
  if( got > 0 ){
    /* generate a Tcl object for each return argument */
    for(i=0; i<got; i++){
      if( cnames ){
	namesObjv[i] = Tcl_NewObj();
	Tcl_SetStringObj(namesObjv[i], cnames[i],
			 cnames[i] ? strlen(cnames[i]) : 0);
      }
      if( cerrs ){
	errsObjv[i] = Tcl_NewObj();
	Tcl_SetStringObj(errsObjv[i], cerrs[i], 
			 cerrs[i] ? strlen(cerrs[i]) : 0);
      }
    }
    /* make lists from the return arguments and set the return variables */
    if( cnames ){
      namesPtr = Tcl_NewObj();
      Tcl_SetListObj(namesPtr, got, namesObjv);
      Tcl_ObjSetVar2(interp, objv[7], NULL, namesPtr, TCL_PARSE_PART1);
    }
    if( cerrs ){
      errsPtr = Tcl_NewObj();
      Tcl_SetListObj(errsPtr, got, errsObjv);
      Tcl_ObjSetVar2(interp, objv[8], NULL, errsPtr, TCL_PARSE_PART1);
    }
  }
  else{
    nullPtr = Tcl_NewObj();
    Tcl_SetStringObj(nullPtr, "", -1);
    if( cnames )
      Tcl_ObjSetVar2(interp, objv[7], NULL, nullPtr, TCL_PARSE_PART1);
    if( cerrs )
      Tcl_ObjSetVar2(interp, objv[8], NULL, nullPtr, TCL_PARSE_PART1);
  }

  /* free up space */
  for(i=0; i<got; i++){
    if( cnames[i] ) xfree((char *)cnames[i]);
    if( cerrs[i]  ) xfree((char *)cerrs[i]);
  }
  if( cnames )    xfree((char *)cnames);
  if( cerrs  )    xfree((char *)cerrs);
  if( namesObjv ) xfree((char *)namesObjv);
  if( errsObjv  ) xfree((char *)errsObjv);

  /* return the number of accesses as the tcl function result */
  Tcl_SetIntObj(resultPtr, got);

  /* return status */
  return(TCL_OK);
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPASetFd_Tcl
 *
 * Purpose:	Tcl binding to XPASetFd procedure
 *
 * Tcl call:
 *
 *     set got [xpasetfd xpa template paramlist mode chan names errs n]
 *
 * Returns:	Tcl error code
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
static int
XPASetFd_Tcl(ClientData clientData, Tcl_Interp *interp,
	   int objc, Tcl_Obj *CONST objv[])
#else
static int XPASetFd_Tcl(clientData, interp, objc, objv)
     ClientData clientData;
     Tcl_Interp *interp;
     int objc;
     Tcl_Obj *CONST objv[];
#endif
{
  XPA xpa;
  int got;
  int n;
  int i;
  int flag;
  int fd;
  char *xpastr;
  char *tmpl;
  char *paramlist;
  char *mode;
  char *names;
  char *errs;
  char **cnames=NULL;
  char **cerrs=NULL;
  Tcl_Obj *resultPtr;
  Tcl_Obj *nullPtr;
  Tcl_Obj *namesPtr;
  Tcl_Obj *errsPtr;
  Tcl_Obj **namesObjv=NULL;
  Tcl_Obj **errsObjv=NULL;
  Tcl_Channel chan;

  /* make sure argument count is correct */
  if( objc != 9 ){
    Tcl_WrongNumArgs(interp, 1, objv,
		     "xpa template paramlist mode chan names errs n");
    return(TCL_ERROR);
  }

  /* get result pointer */
  resultPtr = Tcl_GetObjResult(interp);

  /* get xpa struct pointer, which might be NULL */
  xpastr = Tcl_GetStringFromObj(objv[1], NULL);
  if( TCL_NULLSTR(xpastr) )
    xpa = NULL;
  else{
    /* get xpa, which is always arg 1 */
    if( Tcl_GetXPAFromObj(interp, objv[1], TY_CLIENT, &xpa) != TCL_OK){
      Tcl_SetStringObj(resultPtr, "XPA$ERROR: invalid xpa client handle", -1);
      return(TCL_ERROR);
    }
  }

  /* get other args */
  tmpl = Tcl_GetStringFromObj(objv[2], NULL);
  paramlist = Tcl_GetStringFromObj(objv[3], NULL);
  mode = Tcl_GetStringFromObj(objv[4], NULL);
  names = Tcl_GetStringFromObj(objv[6], NULL);
  errs = Tcl_GetStringFromObj(objv[7], NULL);
  if( (Tcl_GetIntFromObj(interp, objv[8], &n) != TCL_OK) || (n < 1) ){
    n = 1;
  }

  /* allocate return buffers */
  if( !TCL_NULLSTR(names) ){
    cnames = (char **)xcalloc(n, sizeof(char *));
    namesObjv = (Tcl_Obj **)xcalloc(n, sizeof(Tcl_Obj *));
  }
  if( !TCL_NULLSTR(errs) ){
    cerrs  = (char **)xcalloc(n, sizeof(char *));
    errsObjv = (Tcl_Obj **)xcalloc(n, sizeof(Tcl_Obj *));
  }

  /* get file descriptor */
  chan = Tcl_GetChannel(interp, Tcl_GetStringFromObj(objv[5], NULL), &flag);
  if( chan == NULL ){
    Tcl_SetStringObj(resultPtr, 
       "XPA$ERROR: invalid channel passed to xpasetfd", -1);
    return(TCL_ERROR);
  }
  if( !(flag&TCL_READABLE) ){
    Tcl_SetStringObj(resultPtr, 
       "XPA$ERROR: non-readable channel passed to xpasetfd", -1);
    return(TCL_ERROR);
  }
  Tcl_GetChannelHandle(chan, TCL_READABLE, (ClientData *)&fd);

  /* reset before we make C call */
  Tcl_ResetResult(interp);

  /* make the XPA C call */
  got = XPASetFd(xpa, tmpl, paramlist, mode, fd, cnames, cerrs, n);

  /* if we got anything, fill in the blanks */
  if( got > 0 ){
    /* generate a Tcl object for each return argument */
    for(i=0; i<got; i++){
      if( cnames ){
	namesObjv[i] = Tcl_NewObj();
	Tcl_SetStringObj(namesObjv[i], cnames[i],
			 cnames[i] ? strlen(cnames[i]) : 0);
      }
      if( cerrs ){
	errsObjv[i] = Tcl_NewObj();
	Tcl_SetStringObj(errsObjv[i], cerrs[i], 
			 cerrs[i] ? strlen(cerrs[i]) : 0);
      }
    }
    /* make lists from the return arguments and set the return variables */
    if( cnames ){
      namesPtr = Tcl_NewObj();
      Tcl_SetListObj(namesPtr, got, namesObjv);
      Tcl_ObjSetVar2(interp, objv[6], NULL, namesPtr, TCL_PARSE_PART1);
    }
    if( cerrs ){
      errsPtr = Tcl_NewObj();
      Tcl_SetListObj(errsPtr, got, errsObjv);
      Tcl_ObjSetVar2(interp, objv[7], NULL, errsPtr, TCL_PARSE_PART1);
    }
  }
  else{
    nullPtr = Tcl_NewObj();
    Tcl_SetStringObj(nullPtr, "", -1);
    if( cnames )
      Tcl_ObjSetVar2(interp, objv[6], NULL, nullPtr, TCL_PARSE_PART1);
    if( cerrs )
      Tcl_ObjSetVar2(interp, objv[7], NULL, nullPtr, TCL_PARSE_PART1);
  }

  /* free up space */
  for(i=0; i<got; i++){
    if( cnames[i] ) xfree((char *)cnames[i]);
    if( cerrs[i]  ) xfree((char *)cerrs[i]);
  }
  if( cnames )    xfree((char *)cnames);
  if( cerrs  )    xfree((char *)cerrs);
  if( namesObjv ) xfree((char *)namesObjv);
  if( errsObjv  ) xfree((char *)errsObjv);

  /* return the number of accesses as the tcl function result */
  Tcl_SetIntObj(resultPtr, got);

  /* return status */
  return(TCL_OK);
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPAInfo_Tcl
 *
 * Purpose:	Tcl binding to XPAInfo procedure
 *
 * Tcl call:
 *
 *     set got [xpainfo xpa template paramlist mode names errs n]
 *
 * Returns:	Tcl error code
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
static int
XPAInfo_Tcl(ClientData clientData, Tcl_Interp *interp,
	   int objc, Tcl_Obj *CONST objv[])
#else
static int XPAInfo_Tcl(clientData, interp, objc, objv)
     ClientData clientData;
     Tcl_Interp *interp;
     int objc;
     Tcl_Obj *CONST objv[];
#endif
{
  XPA xpa;
  int got;
  int n;
  int i;
  char *xpastr;
  char *tmpl;
  char *paramlist;
  char *mode;
  char *names;
  char *errs;
  char **cnames=NULL;
  char **cerrs=NULL;
  Tcl_Obj *resultPtr;
  Tcl_Obj *nullPtr;
  Tcl_Obj *namesPtr;
  Tcl_Obj *errsPtr;
  Tcl_Obj **namesObjv=NULL;
  Tcl_Obj **errsObjv=NULL;

  /* make sure argument count is correct */
  if( objc != 8 ){
    Tcl_WrongNumArgs(interp, 1, objv,
		     "xpa template paramlist mode names errs n");
    return(TCL_ERROR);
  }

  /* get result pointer */
  resultPtr = Tcl_GetObjResult(interp);

  /* get xpa struct pointer, which might be NULL */
  xpastr = Tcl_GetStringFromObj(objv[1], NULL);
  if( TCL_NULLSTR(xpastr) )
    xpa = NULL;
  else{
    /* get xpa, which is always arg 1 */
    if( Tcl_GetXPAFromObj(interp, objv[1], TY_CLIENT, &xpa) != TCL_OK){
      Tcl_SetStringObj(resultPtr, "XPA$ERROR: invalid xpa client handle", -1);
      return(TCL_ERROR);
    }
  }

  /* get other args */
  tmpl = Tcl_GetStringFromObj(objv[2], NULL);
  paramlist = Tcl_GetStringFromObj(objv[3], NULL);
  mode = Tcl_GetStringFromObj(objv[4], NULL);
  names = Tcl_GetStringFromObj(objv[5], NULL);
  errs = Tcl_GetStringFromObj(objv[6], NULL);
  if( (Tcl_GetIntFromObj(interp, objv[7], &n) != TCL_OK) || (n < 1) ){
    n = 1;
  }

  /* allocate return buffers */
  if( !TCL_NULLSTR(names) ){
    cnames = (char **)xcalloc(n, sizeof(char *));
    namesObjv = (Tcl_Obj **)xcalloc(n, sizeof(Tcl_Obj *));
  }
  if( !TCL_NULLSTR(errs) ){
    cerrs  = (char **)xcalloc(n, sizeof(char *));
    errsObjv = (Tcl_Obj **)xcalloc(n, sizeof(Tcl_Obj *));
  }

  /* reset before we make C call */
  Tcl_ResetResult(interp);

  /* make the XPA C call */
  got = XPAInfo(xpa, tmpl, paramlist, mode, cnames, cerrs, n);

  /* if we got anything, fill in the blanks */
  if( got > 0 ){
    /* generate a Tcl object for each return argument */
    for(i=0; i<got; i++){
      if( cnames ){
	namesObjv[i] = Tcl_NewObj();
	Tcl_SetStringObj(namesObjv[i], cnames[i],
			 cnames[i] ? strlen(cnames[i]) : 0);
      }
      if( cerrs ){
	errsObjv[i] = Tcl_NewObj();
	Tcl_SetStringObj(errsObjv[i], cerrs[i], 
			 cerrs[i] ? strlen(cerrs[i]) : 0);
      }
    }
    /* make lists from the return arguments and set the return variables */
    if( cnames ){
      namesPtr = Tcl_NewObj();
      Tcl_SetListObj(namesPtr, got, namesObjv);
      Tcl_ObjSetVar2(interp, objv[5], NULL, namesPtr, TCL_PARSE_PART1);
    }

    if( cerrs ){
      errsPtr = Tcl_NewObj();
      Tcl_SetListObj(errsPtr, got, errsObjv);
      Tcl_ObjSetVar2(interp, objv[6], NULL, errsPtr, TCL_PARSE_PART1);
    }
  }
  else{
    nullPtr = Tcl_NewObj();
    Tcl_SetStringObj(nullPtr, "", -1);
    if( cnames )
      Tcl_ObjSetVar2(interp, objv[5], NULL, nullPtr, TCL_PARSE_PART1);
    if( cerrs )
      Tcl_ObjSetVar2(interp, objv[6], NULL, nullPtr, TCL_PARSE_PART1);
  }

  /* free up space */
  for(i=0; i<got; i++){
    if( cnames[i] ) xfree((char *)cnames[i]);
    if( cerrs[i]  ) xfree((char *)cerrs[i]);
  }
  if( cnames )    xfree((char *)cnames);
  if( cerrs  )    xfree((char *)cerrs);
  if( namesObjv ) xfree((char *)namesObjv);
  if( errsObjv  ) xfree((char *)errsObjv);

  /* return the number of accesses as the tcl function result */
  Tcl_SetIntObj(resultPtr, got);

  /* return status */
  return(TCL_OK);
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPAAccess_Tcl
 *
 * Purpose:	Tcl binding to XPAAccess procedure
 *
 * Tcl call:
 *
 *     set got [xpaaccess xpa template paramlist mode names errs n]
 *
 * Returns:	Tcl error code
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
static int
XPAAccess_Tcl(ClientData clientData, Tcl_Interp *interp,
	   int objc, Tcl_Obj *CONST objv[])
#else
static int XPAAccess_Tcl(clientData, interp, objc, objv)
     ClientData clientData;
     Tcl_Interp *interp;
     int objc;
     Tcl_Obj *CONST objv[];
#endif
{
  XPA xpa;
  int got;
  int n;
  int i;
  char *xpastr;
  char *tmpl;
  char *paramlist;
  char *mode;
  char *names;
  char *errs;
  char **cnames=NULL;
  char **cerrs=NULL;
  Tcl_Obj *resultPtr;
  Tcl_Obj *nullPtr;
  Tcl_Obj *namesPtr;
  Tcl_Obj *errsPtr;
  Tcl_Obj **namesObjv=NULL;
  Tcl_Obj **errsObjv=NULL;

  /* make sure argument count is correct */
  if( objc != 8 ){
    Tcl_WrongNumArgs(interp, 1, objv,
		     "xpa template paramlist mode names errs n");
    return(TCL_ERROR);
  }

  /* get result pointer */
  resultPtr = Tcl_GetObjResult(interp);

  /* get xpa struct pointer, which might be NULL */
  xpastr = Tcl_GetStringFromObj(objv[1], NULL);
  if( TCL_NULLSTR(xpastr) )
    xpa = NULL;
  else{
    /* get xpa, which is always arg 1 */
    if( Tcl_GetXPAFromObj(interp, objv[1], TY_CLIENT, &xpa) != TCL_OK){
      Tcl_SetStringObj(resultPtr, "XPA$ERROR: invalid xpa client handle", -1);
      return(TCL_ERROR);
    }
  }

  /* get other args */
  tmpl = Tcl_GetStringFromObj(objv[2], NULL);
  paramlist = Tcl_GetStringFromObj(objv[3], NULL);
  mode = Tcl_GetStringFromObj(objv[4], NULL);
  names = Tcl_GetStringFromObj(objv[5], NULL);
  errs = Tcl_GetStringFromObj(objv[6], NULL);
  if( (Tcl_GetIntFromObj(interp, objv[7], &n) != TCL_OK) || (n < 1) ){
    n = 1;
  }

  if( !TCL_NULLSTR(names) ){
    cnames = (char **)xcalloc(n, sizeof(char *));
    namesObjv = (Tcl_Obj **)xcalloc(n, sizeof(Tcl_Obj *));
  }
  if( !TCL_NULLSTR(errs) ){
    cerrs  = (char **)xcalloc(n, sizeof(char *));
    errsObjv = (Tcl_Obj **)xcalloc(n, sizeof(Tcl_Obj *));
  }

  /* reset before we make C call */
  Tcl_ResetResult(interp);

  /* make the XPA C call */
  got = XPAAccess(xpa, tmpl, paramlist, mode, cnames, cerrs, n);

  /* if we got anything, fill in the blanks */
  if( got > 0 ){
    /* generate a Tcl object for each return argument */
    for(i=0; i<got; i++){
      if( cnames ){
	namesObjv[i] = Tcl_NewObj();
	Tcl_SetStringObj(namesObjv[i], cnames[i],
			 cnames[i] ? strlen(cnames[i]) : 0);
      }
      if( cerrs ){
	errsObjv[i] = Tcl_NewObj();
	Tcl_SetStringObj(errsObjv[i], cerrs[i], 
			 cerrs[i] ? strlen(cerrs[i]) : 0);
      }
    }
    /* make lists from the return arguments and set the return variables */
    if( cnames ){
      namesPtr = Tcl_NewObj();
      Tcl_SetListObj(namesPtr, got, namesObjv);
      Tcl_ObjSetVar2(interp, objv[5], NULL, namesPtr, TCL_PARSE_PART1);
    }
    if( cerrs ){
      errsPtr = Tcl_NewObj();
      Tcl_SetListObj(errsPtr, got, errsObjv);
      Tcl_ObjSetVar2(interp, objv[6], NULL, errsPtr, TCL_PARSE_PART1);
    }
  }
  else{
    nullPtr = Tcl_NewObj();
    Tcl_SetStringObj(nullPtr, "", -1);
    if( cnames )
      Tcl_ObjSetVar2(interp, objv[5], NULL, nullPtr, TCL_PARSE_PART1);
    if( cerrs )
      Tcl_ObjSetVar2(interp, objv[6], NULL, nullPtr, TCL_PARSE_PART1);
  }

  /* free up space */
  for(i=0; i<got; i++){
    if( cnames[i] ) xfree((char *)cnames[i]);
    if( cerrs[i]  ) xfree((char *)cerrs[i]);
  }
  if( cnames )    xfree((char *)cnames);
  if( cerrs  )    xfree((char *)cerrs);
  if( namesObjv ) xfree((char *)namesObjv);
  if( errsObjv  ) xfree((char *)errsObjv);

  /* return the number of accesses as the tcl function result */
  Tcl_SetIntObj(resultPtr, got);

  /* return status */
  return(TCL_OK);
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPANSLookup_Tcl
 *
 * Purpose:	Tcl binding to XPANSLookup procedure
 *
 * Tcl call:
 *
 *     set got [xpanslookup template type]
 *
 * Returns:	Tcl error code
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
static int
XPANSLookup_Tcl(ClientData clientData, Tcl_Interp *interp,
	   int objc, Tcl_Obj *CONST objv[])
#else
static int XPANSLookup_Tcl(clientData, interp, objc, objv)
     ClientData clientData;
     Tcl_Interp *interp;
     int objc;
     Tcl_Obj *CONST objv[];
#endif
{
  XPA xpa;
  int i;
  int got;
  char *xpastr;
  char *tmpl;
  char *ttype;
  char **xclasses;
  char **names;
  char **methods;
  char **infos;
  Tcl_Obj *resultPtr;
  Tcl_Obj *nullPtr;
  Tcl_Obj *classesPtr;
  Tcl_Obj *namesPtr;
  Tcl_Obj *methodsPtr;
  Tcl_Obj *infosPtr;
  Tcl_Obj **classesObjv;
  Tcl_Obj **namesObjv;
  Tcl_Obj **methodsObjv;
  Tcl_Obj **infosObjv;

  /* make sure argument count is correct */
  if( objc != 7 ){
    Tcl_WrongNumArgs(interp, 1, objv,
		     "template type classes names methods infos");
    return(TCL_ERROR);
  }

  /* get result pointer */
  resultPtr = Tcl_GetObjResult(interp);

  /* get other args */
  tmpl = Tcl_GetStringFromObj(objv[1], NULL);
  ttype = Tcl_GetStringFromObj(objv[2], NULL);

  /* reset before we make C call */
  Tcl_ResetResult(interp);

  /* get xpa struct pointer, which might be NULL */
  xpastr = Tcl_GetStringFromObj(objv[1], NULL);
  if( TCL_NULLSTR(xpastr) )
    xpa = NULL;
  else{
    /* get xpa, which is always arg 1 */
    if( Tcl_GetXPAFromObj(interp, objv[1], TY_CLIENT, &xpa) != TCL_OK){
      Tcl_SetStringObj(resultPtr, "XPA$ERROR: invalid xpa client handle", -1);
      return(TCL_ERROR);
    }
  }

  /* make the XPA C call */
  got = XPANSLookup(xpa, tmpl, ttype, &xclasses, &names, &methods, &infos);

  /* if we got anything, fill in the blanks */
  if( got > 0 ){
    /* allocate just enough pointers */
    classesObjv = (Tcl_Obj **)xcalloc(got, sizeof(Tcl_Obj *));
    namesObjv = (Tcl_Obj **)xcalloc(got, sizeof(Tcl_Obj *));
    methodsObjv = (Tcl_Obj **)xcalloc(got, sizeof(Tcl_Obj *));
    infosObjv = (Tcl_Obj **)xcalloc(got, sizeof(Tcl_Obj *));

    /* generate a Tcl object for each return argument */
    for(i=0; i<got; i++){
      classesObjv[i] = Tcl_NewObj();
      Tcl_SetStringObj(classesObjv[i], xclasses[i], strlen(xclasses[i]));
      namesObjv[i] = Tcl_NewObj();
      Tcl_SetStringObj(namesObjv[i], names[i], strlen(names[i]));
      methodsObjv[i] = Tcl_NewObj();
      Tcl_SetStringObj(methodsObjv[i], methods[i], strlen(methods[i]));
      infosObjv[i] = Tcl_NewObj();
      Tcl_SetStringObj(infosObjv[i], infos[i], strlen(infos[i]));
    }
    /* make lists from the return arguments and set the return variables */
    classesPtr = Tcl_NewObj();
    Tcl_SetListObj(classesPtr, got, classesObjv);
    Tcl_ObjSetVar2(interp, objv[3], NULL, classesPtr, TCL_PARSE_PART1);

    namesPtr = Tcl_NewObj();
    Tcl_SetListObj(namesPtr, got, namesObjv);
    Tcl_ObjSetVar2(interp, objv[4], NULL, namesPtr, TCL_PARSE_PART1);
    
    methodsPtr = Tcl_NewObj();
    Tcl_SetListObj(methodsPtr, got, methodsObjv);
    Tcl_ObjSetVar2(interp, objv[5], NULL, methodsPtr, TCL_PARSE_PART1);
    
    infosPtr = Tcl_NewObj();
    Tcl_SetListObj(infosPtr, got, infosObjv);
    Tcl_ObjSetVar2(interp, objv[5], NULL, infosPtr, TCL_PARSE_PART1);
    
    /* free up the space */
    for(i=0; i<got; i++){
      /* done with these strings */
      xfree(xclasses[i]);
      xfree(names[i]);
      xfree(methods[i]);
      xfree(infos[i]);
    }
    /* free up arrays alloc'ed by name server */
    if( got > 0 ){
      xfree(xclasses);
      xfree(names);
      xfree(methods);
      xfree(infos);
      xfree(classesObjv);
      xfree(namesObjv);
      xfree(methodsObjv);
      xfree(infosObjv);
    }
  }
  else{
    nullPtr = Tcl_NewObj();
    Tcl_SetStringObj(nullPtr, "", -1);
    Tcl_ObjSetVar2(interp, objv[3], NULL, nullPtr, TCL_PARSE_PART1);
    Tcl_ObjSetVar2(interp, objv[4], NULL, nullPtr, TCL_PARSE_PART1);
    Tcl_ObjSetVar2(interp, objv[5], NULL, nullPtr, TCL_PARSE_PART1);
    Tcl_ObjSetVar2(interp, objv[6], NULL, nullPtr, TCL_PARSE_PART1);
  }

  /* return the number of accesses as the tcl function result */
  Tcl_SetIntObj(resultPtr, got);

  /* return status */
  return(TCL_OK);
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPANSKeepAlive_Tcl
 *
 * Purpose:	Tcl binding to XPANSKeepAlive procedure
 *
 * Tcl call:
 *
 *     xpafree xpa
 *
 * Returns:	Tcl error code
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
static int
XPANSKeepAlive_Tcl(ClientData clientData, Tcl_Interp *interp,
		   int objc, Tcl_Obj *CONST objv[])
#else
static int XPANSKeepAlive_Tcl(clientData, interp, objc, objv)
     ClientData clientData;
     Tcl_Interp *interp;
     int objc;
     Tcl_Obj *CONST objv[];
#endif
{
  XPA xpa;
  int type=0;
  char *s=NULL;

  /* make sure argument count is correct */
  if( objc < 2 ){
    Tcl_WrongNumArgs(interp, 1, objv, "xpa [type]");
    return(TCL_ERROR);
  }

  /* get xpa, which is always arg 1 */
  if( Tcl_GetXPAFromObj(interp, objv[1], TY_SERVER, &xpa) != TCL_OK){
    return(TCL_ERROR);
  }

  /* optional type, usually not specified for default */
  if( (objc >= 3) && (s = Tcl_GetStringFromObj(objv[2], NULL)) != NULL )
    type = atoi(s);

  /* reset error/result condition */
  Tcl_ResetResult(interp);

  /* call the XPANSKeepAlive routine */
  XPANSKeepAlive(xpa, type);

  return(TCL_OK);
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPARemote_Tcl
 *
 * Purpose:	Tcl binding to XPARemote procedure
 *
 * Tcl call:
 *
 *     xpaRemote xpa host acl
 *
 * use the empty string to specify NULL arguments
 *
 * Returns:	Tcl error code
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
static int
XPARemote_Tcl(ClientData clientData, Tcl_Interp *interp,
	   int objc, Tcl_Obj *CONST objv[])
#else
static int XPARemote_Tcl(clientData, interp, objc, objv)
     ClientData clientData;
     Tcl_Interp *interp;
     int objc;
     Tcl_Obj *CONST objv[];
#endif
{
  int got;
  char *host;
  char *acl="+";
  char *s;
  char *mode=NULL;
  char tbuf[SZ_LINE];
  XPA xpa;
  Tcl_Obj *resultPtr;

  /* make sure argument count is correct */
  if( (objc < 3) || (objc > 5) ){
    Tcl_WrongNumArgs(interp, 1, objv, "xpa host [acl] [-proxy]");
    return(TCL_ERROR);
  }

  /* get result pointer */
  resultPtr = Tcl_GetObjResult(interp);

  /* get xpa, which is always arg 1 */
  if( Tcl_GetXPAFromObj(interp, objv[1],  TY_SERVER, &xpa) != TCL_OK){
    return(TCL_ERROR);
  }

  /* make sure we are using inet sockets */
  if( XPAMtype() != XPA_INET ){
    snprintf(tbuf, SZ_LINE, "remote requires that XPA_METHOD be 'inet'\n");
    Tcl_SetStringObj(resultPtr, tbuf, -1);
    return(TCL_ERROR);
  }

  /* get required host  */
  host = Tcl_GetStringFromObj(objv[2], NULL);

  /* get optional acl */
  if( objc >= 4 ){
    s = Tcl_GetStringFromObj(objv[3], NULL);
    if( !strcmp(s, "-proxy") ){
      mode="proxy=true";
    }
    else{
      acl = s;
    }
  }

  /* get optional -proxy switch */
  if( objc == 5 ){
    s = Tcl_GetStringFromObj(objv[4], NULL);
    if( !strcmp(s, "-proxy") ){
      mode="proxy=true";
    }
    else if( mode ){
      acl = s;
    }
    else{
      snprintf(tbuf, SZ_LINE,
	      "XPA$ERROR: invalid arg (%s): xpa -remote host [acl] [-proxy]\n",
	      s);
      Tcl_SetStringObj(resultPtr, tbuf, -1);
      return(TCL_ERROR);
    }
  }

  /* reset error/result condition */
  Tcl_ResetResult(interp);

  /* set up the tcl handler for the xpa access point */
  got = XPARemote(xpa, host, acl, mode);
  if( got >= 0 ){
    return(TCL_OK);
  }
  else{
    snprintf(tbuf, SZ_LINE,
	     "XPA$ERROR: remote xpans %s failed to process %s\n",
	     host, xpa->name);
    Tcl_SetStringObj(resultPtr, tbuf, -1);
    return(TCL_ERROR);
  }
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPAError_Tcl
 *
 * Purpose:	Tcl binding to XPAError procedure
 *
 * Tcl call:
 *
 *     xpaerror xpa errmess
 *
 * Returns:	Tcl error code
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
static int
XPAError_Tcl(ClientData clientData, Tcl_Interp *interp,
	   int objc, Tcl_Obj *CONST objv[])
#else
static int XPAError_Tcl(clientData, interp, objc, objv)
     ClientData clientData;
     Tcl_Interp *interp;
     int objc;
     Tcl_Obj *CONST objv[];
#endif
{
  char *message;
  XPA xpa;

  /* make sure argument count is correct */
  if( objc != 3 ){
    Tcl_WrongNumArgs(interp, 1, objv, "xpa message");
    return(TCL_ERROR);
  }

  /* get xpa, which is always arg 1 */
  if( Tcl_GetXPAFromObj(interp, objv[1], TY_SERVER, &xpa) != TCL_OK){
    return(TCL_ERROR);
  }

  /* get message string */
  message = Tcl_GetStringFromObj(objv[2], NULL);

  /* reset error/result condition */
  Tcl_ResetResult(interp);

  /* call the XPAError routine */
  XPAError(xpa, message);

  /* no error message (too lazy) */
  return(TCL_OK);
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPAMessage_Tcl
 *
 * Purpose:	Tcl binding to XPAMessage procedure
 *
 * Tcl call:
 *
 *     xpamessage xpa errmess
 *
 * Returns:	Tcl error code
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
static int
XPAMessage_Tcl(ClientData clientData, Tcl_Interp *interp,
	   int objc, Tcl_Obj *CONST objv[])
#else
static int XPAMessage_Tcl(clientData, interp, objc, objv)
     ClientData clientData;
     Tcl_Interp *interp;
     int objc;
     Tcl_Obj *CONST objv[];
#endif
{
  char *message;
  XPA xpa;

  /* make sure argument count is correct */
  if( objc != 3 ){
    Tcl_WrongNumArgs(interp, 1, objv, "xpa message");
    return(TCL_ERROR);
  }

  /* get xpa, which is always arg 1 */
  if( Tcl_GetXPAFromObj(interp, objv[1], TY_SERVER, &xpa) != TCL_OK){
    return(TCL_ERROR);
  }

  /* get message string */
  message = Tcl_GetStringFromObj(objv[2], NULL);

  /* reset error/result condition */
  Tcl_ResetResult(interp);

  /* call the XPAMessage routine */
  XPAMessage(xpa, message);

  /* no error message (too lazy) */
  return(TCL_OK);
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
 * Routine:	Xpa_Init
 *
 * Purpose:	initialize Tcl xpa package
 *
 * Returns:	tcl return code
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
int
Tclxpa_Init (void *vinterp)
#else
int Tclxpa_Init (vinterp)
     void *vinterp;
#endif
{
  Tcl_Interp *interp = (Tcl_Interp *)vinterp;

  if(
#ifdef USE_TCL_STUBS
     Tcl_InitStubs(interp, "8.4", 0)
#else
     Tcl_PkgRequire(interp, "Tcl", "8.4", 0)
#endif
     == NULL) {
    return TCL_ERROR;
  }

  /* add xpa commands to this interpreter */
  Tcl_CreateObjCommand(interp, "xpanew", XPANew_Tcl,
		       (ClientData)NULL, (Tcl_CmdDeleteProc *)NULL);

  Tcl_CreateObjCommand(interp, "xpafree", XPAFree_Tcl,
		       (ClientData)NULL, (Tcl_CmdDeleteProc *)NULL);

  Tcl_CreateObjCommand(interp, "xpainfonew", XPAInfoNew_Tcl,
		       (ClientData)NULL, (Tcl_CmdDeleteProc *)NULL);

  Tcl_CreateObjCommand(interp, "xpacmdnew", XPACmdNew_Tcl,
		       (ClientData)NULL, (Tcl_CmdDeleteProc *)NULL);

  Tcl_CreateObjCommand(interp, "xpacmddel", XPACmdDel_Tcl,
		       (ClientData)NULL, (Tcl_CmdDeleteProc *)NULL);

  Tcl_CreateObjCommand(interp, "xpacmdadd", XPACmdAdd_Tcl,
		       (ClientData)NULL, (Tcl_CmdDeleteProc *)NULL);

  Tcl_CreateObjCommand(interp, "xparec", XPARec_Tcl,
		       (ClientData)NULL, (Tcl_CmdDeleteProc *)NULL);

  Tcl_CreateObjCommand(interp, "xpasetbuf", XPASetBuf_Tcl,
		       (ClientData)NULL, (Tcl_CmdDeleteProc *)NULL);

  Tcl_CreateObjCommand(interp, "xpaopen", XPAOpen_Tcl,
		       (ClientData)NULL, (Tcl_CmdDeleteProc *)NULL);

  Tcl_CreateObjCommand(interp, "xpaclose", XPAClose_Tcl,
		       (ClientData)NULL, (Tcl_CmdDeleteProc *)NULL);

  Tcl_CreateObjCommand(interp, "xpaget", XPAGet_Tcl,
		       (ClientData)NULL, (Tcl_CmdDeleteProc *)NULL);

  Tcl_CreateObjCommand(interp, "xpagetfd", XPAGetFd_Tcl,
		       (ClientData)NULL, (Tcl_CmdDeleteProc *)NULL);

  Tcl_CreateObjCommand(interp, "xpaset", XPASet_Tcl,
		       (ClientData)NULL, (Tcl_CmdDeleteProc *)NULL);

  Tcl_CreateObjCommand(interp, "xpasetfd", XPASetFd_Tcl,
		       (ClientData)NULL, (Tcl_CmdDeleteProc *)NULL);

  Tcl_CreateObjCommand(interp, "xpainfo", XPAInfo_Tcl,
		       (ClientData)NULL, (Tcl_CmdDeleteProc *)NULL);

  Tcl_CreateObjCommand(interp, "xpaaccess", XPAAccess_Tcl,
		       (ClientData)NULL, (Tcl_CmdDeleteProc *)NULL);

  Tcl_CreateObjCommand(interp, "xpanslookup", XPANSLookup_Tcl,
		       (ClientData)NULL, (Tcl_CmdDeleteProc *)NULL);

  Tcl_CreateObjCommand(interp, "xpanskeepalive", XPANSKeepAlive_Tcl,
		       (ClientData)NULL, (Tcl_CmdDeleteProc *)NULL);

  Tcl_CreateObjCommand(interp, "xparemote", XPARemote_Tcl,
		       (ClientData)NULL, (Tcl_CmdDeleteProc *)NULL);

  Tcl_CreateObjCommand(interp, "xpaerror", XPAError_Tcl,
		       (ClientData)NULL, (Tcl_CmdDeleteProc *)NULL);

  Tcl_CreateObjCommand(interp, "xpamessage", XPAMessage_Tcl,
		       (ClientData)NULL, (Tcl_CmdDeleteProc *)NULL);

  Tcl_PkgProvide(interp, "tclxpa", "2.1");
  return(TCL_OK);
}

/* required for tclkit 8.6 */
int Tclxpa_Unload() { return TCL_ERROR; }
int Tclxpa_SafeUnload() { return TCL_ERROR; }
int Tclxpa_SafeInit() { return TCL_ERROR; }


int xpa_tclbinding = 1;

#else

int xpa_tclbinding = 0;

#endif
