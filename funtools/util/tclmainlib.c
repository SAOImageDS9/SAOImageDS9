/*
 *	Copyright (c) 2004 Smithsonian Astrophysical Observatory
 */

#include <tclmainlib.h>

#if HAVE_TCL
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
 *----------------------------------------------------------------------------
 *
 *
 * 			Semi-Public Routines and Data
 *
 *
 *----------------------------------------------------------------------------
 */

#ifdef ANSI_FUNC
int
MainLibInit_Tcl (MainLib ml)
#else
int MainLibInit_Tcl (ml)
     MainLib ml;
#endif
{
  /* sanity check */
  if( !ml ) return 0;

  /* populate struct with Tcl routines */
  ml->tcllookup = MainLibLookup_Tcl;
  ml->tcleval = MainLibEval_Tcl;

  return 1;
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	MainLibLookup_Tcl
 *
 * Purpose:	lookup a Tcl command
 *
 * Tcl call:
 *
 *     NONE
 *
 * Returns:	1 if Tcl command, otherwise 0
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
int
MainLibLookup_Tcl (void *vinterp, char *s)
#else
int MainLibLookup_Tcl (vinterp, s)
     void *vinterp;
     char *s;
#endif
{
  Tcl_Interp *interp = (Tcl_Interp *)vinterp;
  Tcl_CmdInfo info;
  char lbuf[SZ_LINE];
  char tbuf[SZ_LINE];
  int ip=0;
  int got=0;

  /* create interpreter, if necessary */
  if( !vinterp ){
    interp = Tcl_CreateInterp();
  }

  /* get first token  */
  strncpy(lbuf, s, SZ_LINE-1);
  lbuf[SZ_LINE-1] = '\0';
  if( !word(lbuf, tbuf, &ip) )
    return 0;
	  
  /* lookup Tcl command */
  if( Tcl_GetCommandInfo(interp, tbuf, &info) )
    got = 1;
  else
    got = 0;

  /* delete interpreter, if necessary */
  if( !vinterp ){
    Tcl_DeleteInterp(interp);
  }

  /* return the news */
  return got;
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	MainLibEval_Tcl
 *
 * Purpose:	lookup a Tcl command
 *
 * Tcl call:
 *
 *     NONE
 *
 * Returns:	1 if Tcl command, otherwise 0
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
int
MainLibEval_Tcl (void *vinterp, char *s)
#else
int MainLibEval_Tcl (vinterp, s)
     void *vinterp;
     char *s;
#endif
{
  Tcl_Interp *interp = (Tcl_Interp *)vinterp;
  int got=0;

  /* create interpreter, if necessary */
  if( !vinterp ){
    interp = Tcl_CreateInterp();
  }

  /* lookup Tcl command */
  got = Tcl_EvalEx(interp, s, strlen(s), TCL_EVAL_GLOBAL);

  /* delete interpreter, if necessary */
  if( !vinterp ){
    Tcl_DeleteInterp(interp);
  }

  /* return the news */
  return got;
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	MainLibProcess_Tcl
 *
 * Purpose:	execute the mainlibprocess command
 *
 * Tcl call:
 *
 *     set result [mainlib $ml "command"]
 *
 * Returns:	Tcl error code
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
int
MainLibProcess_Tcl(ClientData clientData, Tcl_Interp *interp,
	    int objc, Tcl_Obj *CONST objv[])
#else
int MainLibProcess_Tcl(clientData, interp, objc, objv)
     ClientData clientData;
     Tcl_Interp *interp;
     int objc;
     Tcl_Obj *CONST objv[];
#endif
{
  int len;
  int got;
  int fillbuf=1;
  void *tml;
  char *s=NULL;
  char *t=NULL;
  char *mode=NULL;
  char *name=NULL;
  char *cmd=NULL;
  char *args=NULL;
  char *buf=NULL;
  char tbuf[SZ_LINE];
  Tcl_Obj *resultPtr;
  MainLib ml;

  /* avoid -W unused parameter warning */
  if( 0 ){
    clientData = clientData;
  }

  /* make sure argument count is correct */
  if( (objc != 3) && (objc != 4) ){
    name = Tcl_GetStringFromObj(objv[0], NULL);
    if( !strcmp(name, TCL_MAINLIB_NAME) ){
      Tcl_WrongNumArgs(interp, 1, objv, "ml 'cmd args' [mode]");
    }
    else{
      snprintf(tbuf, SZ_LINE-1, "ml 'args' [mode]");
      Tcl_WrongNumArgs(interp, 1, objv, tbuf);
    }
    return(TCL_ERROR);
  }

  /* this will hold the result */
  resultPtr = Tcl_GetObjResult(interp);

  /* get name */
  name = Tcl_GetStringFromObj(objv[0], NULL);

  /* get mainlib handle */
  s = Tcl_GetStringFromObj(objv[1], NULL);
  if( (sscanf(s, "%p", &tml) != 1) ){
    Tcl_SetStringObj(resultPtr, "MAINLIB$ERROR: invalid mainlib handle", -1);
    return(TCL_ERROR);
  }
  ml = (MainLib)tml;

  /* make sure Tcl routines are in mainlib record */
  MainLibInit_Tcl(ml);
  
  /* if name is the default, then the full command is in argv[1] */
  name = Tcl_GetStringFromObj(objv[0], NULL);
  if( !strcmp(name, TCL_MAINLIB_NAME) ){
    cmd = xstrdup(Tcl_GetStringFromObj(objv[2], NULL));
  }
  /* otherwise, the command name is in argv[0] and arguments are in argv[1] */
  else{
    args = xstrdup(Tcl_GetStringFromObj(objv[2], NULL));
    len = strlen(name) + strlen(args) + 2;
    cmd = malloc(len);
    snprintf(cmd, len, "%s %s", name, args);
  }

  /* check for mode */
  if( objc == 4 ){
    mode = xstrdup(Tcl_GetStringFromObj(objv[3], NULL));
  }

  /* reset error/result condition */
  Tcl_ResetResult(interp);

  /* add tcl=[interp] to mode */
  snprintf(tbuf, SZ_LINE-1, "tcl=%p", (void *)interp);
  if( mode ){
    len = strlen(mode) + strlen(tbuf) + 2;
    mode = xrealloc(mode, len);
    snprintf(mode, len, "%s,%s", mode, tbuf);
  }
  else{
    mode = xstrdup(tbuf);
  }

  /* fillbuf determines meaning of MainLibProcess return value */
  if( (t = xstrdup(mode)) ){
    if( keyword(t, "fillbuf",  tbuf, SZ_LINE) ) fillbuf = istrue(tbuf);
    xfree(t);
  }

  /* call the mainlib process routine */
  got = MainLibProcess(ml, cmd, &buf, mode);

  /* free up space */
  if( args ) xfree(args);
  if( cmd )  xfree(cmd);
  if( mode ) xfree(mode);

  /* return buf as the result */
  if( got >= 0 ){
    if( fillbuf ){
      if( buf ){
	Tcl_SetStringObj(resultPtr, buf, got);
	xfree(buf);
      }
      return(TCL_OK);
    }
#if HAVE_CYGWIN==0
    else{
      Tcl_Channel chan;
      /* create a tcl channel corresponding to the pipe */
      if( !(chan = Tcl_MakeFileChannel((ClientData)got, TCL_READABLE)) ){
	Tcl_SetResult(interp, "can't create Tcl chan for pipe", TCL_STATIC);
	return TCL_ERROR;
      }
      else{
	/* register this channel with tcl */
	Tcl_RegisterChannel(interp, chan);
	/* return name so that it can be used by tcl */
	Tcl_SetResult(interp,(char *)Tcl_GetChannelName(chan), TCL_VOLATILE);
	return(TCL_OK);
      }
    }
#else
    else{
      /* this probably is useless */
      snprintf(tbuf, SZ_LINE-1, "%d", got);
      Tcl_SetStringObj(resultPtr, tbuf, -1);
      return(TCL_OK);
    }
#endif
  }
  else{
    Tcl_SetStringObj(resultPtr, "unable to execute mainlib command", -1);
    return(TCL_ERROR);
  }
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	MainLibProcessCleanup_Tcl
 *
 * Purpose:	execute the mainlibprocesscleanup command
 *
 * Tcl call:
 *
 *     set result [mainlib ml]
 *
 * Returns:	Tcl error code
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
int
MainLibProcessCleanup_Tcl(ClientData clientData, Tcl_Interp *interp,
	    int objc, Tcl_Obj *CONST objv[])
#else
int MainLibProcessCleanup_Tcl(clientData, interp, objc, objv)
     ClientData clientData;
     Tcl_Interp *interp;
     int objc;
     Tcl_Obj *CONST objv[];
#endif
{
  int got;
  char *s=NULL;
  void *tml;
  Tcl_Obj *resultPtr;
  MainLib ml;

  /* avoid -W unused parameter warning */
  if( 0 ){
    clientData = clientData;
  }

  /* make sure argument count is correct */
  if( objc != 2 ){
    Tcl_WrongNumArgs(interp, 1, objv, "ml");
    return(TCL_ERROR);
  }

  /* this will hold the result */
  resultPtr = Tcl_GetObjResult(interp);

  /* get mainlib handle */
  s = Tcl_GetStringFromObj(objv[1], NULL);
  if( (sscanf(s, "%p", &tml) != 1) ){
    Tcl_SetStringObj(resultPtr, "MAINLIB$ERROR: invalid mainlib handle", -1);
    return(TCL_ERROR);
  }
  ml = (MainLib)tml;

  /* reset error/result condition */
  Tcl_ResetResult(interp);

  /* call the mainlib process routine */
  got = MainLibProcessCleanup(ml);

  /* return buf as the result */
  if( got == 1 ){
    return(TCL_OK);
  }
  else{
    Tcl_SetStringObj(resultPtr, "error on mainlibcleanup command", -1);
    return(TCL_ERROR);
  }

}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	MainLibLoad_Tcl
 *
 * Purpose:	load shared object and execute the mainlibinit
 *
 * Tcl call:
 *
 *     set result [mainlibload package sharedlib]
 *
 * Returns:	Tcl error code
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
int
MainLibLoad_Tcl(ClientData clientData, Tcl_Interp *interp,
	    int objc, Tcl_Obj *CONST objv[])
#else
int MainLibLoad_Tcl(clientData, interp, objc, objv)
     ClientData clientData;
     Tcl_Interp *interp;
     int objc;
     Tcl_Obj *CONST objv[];
#endif
{
  char *package=NULL;
  char *shlib=NULL;
  char *ermsg;
  char tbuf[SZ_LINE];
  void *dl=NULL;
  void *ml=NULL;
  Tcl_Obj *resultPtr;

  /* avoid -W unused parameter warning */
  if( 0 ){
    clientData = clientData;
  }

  /* make sure argument count is correct */
  if( objc != 3 ){
    Tcl_WrongNumArgs(interp, 1, objv,  "package sharedlib"); 
    return(TCL_ERROR);
  }

  /* get arguments */
  package = Tcl_GetStringFromObj(objv[1], NULL);
  shlib = Tcl_GetStringFromObj(objv[2], NULL);

  /* this will hold the result */
  resultPtr = Tcl_GetObjResult(interp);

  /* load package and process result */
  switch(MainLibLoad(package, shlib, &ml, &ermsg)){
  case -1:
    snprintf(tbuf, SZ_LINE-1,
	     "MAINLIB$ERROR: could not load shared library %s (%s)",
	     shlib, ermsg);
    Tcl_SetStringObj(resultPtr, tbuf, -1);
    return(TCL_ERROR);
  case -2:
    snprintf(tbuf, SZ_LINE-1,
	     "MAINLIB$ERROR: could not initialize package %s (%s)",
	     package, ermsg);
    Tcl_SetStringObj(resultPtr, tbuf, -1);
    return(TCL_ERROR);
  default:
    snprintf(tbuf, SZ_LINE-1, "%p %p", ml, dl);
    Tcl_SetStringObj(resultPtr, tbuf, -1);
    return(TCL_OK);
    break;
  }
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
 * Routine:	Tclmainlib_Init
 *
 * Purpose:	initialize Tcl mainlib package
 *
 * Returns:	tcl return code
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
int
Tclmainlib_Init (void *vinterp)
#else
int Tclmainlib_Init (vinterp)
     void *vinterp;
#endif
{
  Tcl_Interp *interp = (Tcl_Interp *)vinterp;

  /* add mainlib commands to this interpreter */
  Tcl_CreateObjCommand(interp, TCL_MAINLIB_NAME,
		       MainLibProcess_Tcl, 
		       (ClientData)NULL, (Tcl_CmdDeleteProc *)NULL);

  Tcl_CreateObjCommand(interp, "mainlibcleanup",
		       MainLibProcessCleanup_Tcl,
		       (ClientData)NULL, (Tcl_CmdDeleteProc *)NULL);

  Tcl_CreateObjCommand(interp, "mainlibload",
		       MainLibLoad_Tcl,
		       (ClientData)NULL, (Tcl_CmdDeleteProc *)NULL);

  Tcl_PkgProvide(interp, "tclmainlib", "1.0");
  return(TCL_OK);
}
#endif
