/*
 *	Copyright (c) 2004 Smithsonian Astrophysical Observatory
 */

/*
 *    mainlib.c -- support for main routines called as library subroutines
 *
 */

#include <mainlib.h>

extern char *optarg;
extern int optind;

/*
 *
 * private routines
 *
 */

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	Pipe2Buf
 *
 * Purpose:	read pipe til EOF and fill buffer with results
 *
 * Results:	number of bytes read (and buffer in passed argument)
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
static int
Pipe2Buf(int fd, char **buf)
#else
static int Pipe2Buf(fd, buf)
     int fd;
     char **buf;
#endif
{
  int got;
  int clen=0;
  int blen=0;

  /* initial buffer size */
  blen = SZ_LINE*10;
  *buf = xmalloc(blen);

  /* read til EOF and fill buffer */
  while( 1 ){
    /* reallocate as needed */
    if( (clen + SZ_LINE) >= blen ){
      blen += SZ_LINE*10;
      *buf = xrealloc(*buf, blen);
    }
    /* read */
    got=read(fd, *buf+clen, SZ_LINE);
    /* got data */
    if( got > 0 ){
      clen += got;
      continue;
    }
    /* EOF */
    else if( got == 0 ){
      /* reallocate to actual size, but null terminate as a courtesy */
      blen = clen+1;
      *buf = xrealloc(*buf, blen);
      *(*buf+clen) = '\0';
      break;
    }
    /* error */
    else{
      xfree(*buf);
      blen = -1;
      break;
    }
  }
  /* return the news */
  return blen;
}

/*
 *---------------------------------------------------------------------------
 *
 * Routine: 	MainLibListAdd
 *
 * Purpose: 	add a member of an mainlib list
 *
 * Results:	1 on success, 0 for failure
 *
 *---------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
static void
MainLibListAdd (MainLib ml, MainLibEntry mle)
#else
static void MainLibListAdd(ml, mle)
     MainLib ml;
     MainLibEntry mle;
#endif
{
  MainLibEntry cur;

  if( ml->head == NULL ){
    ml->head = mle;
  }
  else{
    for(cur=ml->head; cur->next!=NULL; cur=cur->next)
      ;
    cur->next = mle;
  }
}

/*
 *---------------------------------------------------------------------------
 *
 * Routine: 	MainLibListDel
 *
 * Purpose: 	remove a member of an mainlib list
 *
 * Results:	1 on success, 0 for failure
 *
 *---------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
static void
MainLibListDel (MainLib ml, MainLibEntry mle)
#else
static void MainLibListDel(ml, mle)
     MainLib ml;
     MainLibEntry mle;
#endif
{
  MainLibEntry cur;

  /* remove from list of mainlibs */
  if( ml->head ){
    if( ml->head == mle ){
      ml->head = mle->next;
    }
    else{
      for(cur=ml->head; cur!=NULL; cur=cur->next){
	if( cur->next == mle ){
	  cur->next = mle->next;
	  break;
	}
      }
    }
  }
}

/*
 *
 * semi-public routines
 *
 */

/*
 *---------------------------------------------------------------------------
 *
 * Routine: 	MainLibLookup
 *
 * Purpose: 	lookup a mainlib procedure
 *
 * Results:	MainLibEntry record on success, NULL on failure
 *
 *---------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
MainLibEntry 
MainLibLookup (MainLib ml, char *xclass, char *name)
#else
MainLibEntry MainLibLookup(ml, xclass, name)
     MainLib ml;
     char *xclass;
     char *name;
#endif
{
  MainLibEntry cur;

  if( !ml || (!xclass && !name) ) return NULL;

  for(cur=ml->head; cur!=NULL; cur=cur->next){
    if( (!xclass || !strcmp(xclass, cur->xclass)) && 
	(!name   || !strcmp(name, cur->name)) ){
      return cur;
    }
  }
  return NULL;
}

/*
 *
 * public routines
 *
 */

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	MainLibNew
 *
 * Purpose:	create mainlib struct
 *
 * Returns: mainlib list handle or NULL
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
MainLib
MainLibNew (void)
#else
MainLib MainLibNew()
#endif
{
  MainLib ml;

  /* allocate struct */
  if( !(ml = (MainLib)xcalloc(1, sizeof(MainLibRec))) )
    return NULL;
  return ml;
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	MainLibAdd
 *
 * Purpose:	add a mainlib name to allow external processes to be called
 *		as subroutines
 *
 * Returns: mainlib handle associated with this name or NULL
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
MainLibEntry 
MainLibAdd (MainLib ml, char *xclass, char *name, MainLibProc proc, int type)
#else
MainLibEntry MainLibAdd(ml, xclass, name, proc, type)
     MainLib ml;
     char *xclass;
     char *name;
     MainLibProc proc;
     int type;
#endif
{
  MainLibEntry mle;

  /* sanity check */
  if( !ml ) return NULL;

  /* allocate struct */
  if( !(mle = (MainLibEntry)xcalloc(1, sizeof(MainLibEntryRec))) ) return NULL;
  /* fill in the blanks */
  mle->xclass = xstrdup(xclass);
  mle->name = xstrdup(name);
  mle->proc = proc;
  mle->type = type;
  /* add to list */
  MainLibListAdd(ml, mle);
  return mle;
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	MainLibProcess
 *
 * Purpose:	call external processes as subroutines
 *
 * Results:	number of bytes in return buffer (buffer in passed argument)
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
int MainLibProcess(MainLib ml, char *cmd, char **buf, char *mode)
#else
int MainLibProcess(ml, cmd, buf, mode)
     MainLib ml;
     char *cmd;
     char **buf;
     char *mode;
#endif
{
  int i, j;
  int got;
  int ncmd=0;
  int ip=0;
  int ifd=-1;
  int ofd=-1;
  int efd=-1;
  int fillbuf=1;
  int debug=0;
  int use_ifd=0;
  int use_ofd=0;
  int use_efd=0;
#if HAVE_TCL
  int use_tcl=0;
#endif
  int nargs[MAINLIB_CMDS+1];
  int pipes[MAINLIB_CMDS+1][2];
  char *c, *s, *t;
  char *undef=NULL;
  char tbuf[SZ_LINE];
  char ibuf[SZ_LINE];
  char ibuf2[SZ_LINE];
  char *args[(MAINLIB_CMDS+1)*MAINLIB_ARGS];
  char *cmds[MAINLIB_CMDS+1];
#if HAVE_TCL
  void *tcl=NULL;
#endif
  MainLibEntry mles[MAINLIB_CMDS+1];
  static int mainlibinit=0;
  static int mainlib_debug=0;
  static char *mainlib_path=NULL;

  /* sanity check */
  if( !ml ){
    gerror(stderr, "invalid  or missing command list for mainlib\n");
    got = -1;
    goto done;
  }

  /* initialization */
  if( !mainlibinit ){
    if( (s = (char *)getenv("MAINLIB_DEBUG")) )
      mainlib_debug = istrue(s);
    mainlib_path = (char *)getenv("PATH");
    mainlibinit = 1;
  }

  /* clear arrays */
  memset(cmds, 0, sizeof(char *)*(MAINLIB_CMDS+1));
  memset(mles, 0, sizeof(MainLibEntry)*(MAINLIB_CMDS+1));
  memset(args, 0, sizeof(char *)*(MAINLIB_CMDS+1)*MAINLIB_ARGS);

  /* separate commands */
  c = xstrdup(cmd);
  for(s=c; (t=strchr(s, '|'))!=NULL; s=t+1){
    if( ncmd >= MAINLIB_CMDS ){
      gerror(stderr, "max cmds exceeded (%d) for mainlib\n", ncmd);
      got = -1;
      goto done;
    }
    *t = '\0';
    cmds[++ncmd] = xstrdup(s);
  }
  /* get last command */
  cmds[++ncmd] = xstrdup(s);
  if( c ) xfree(c);

  /* seed the debug flag (override with switch) */
  debug = mainlib_debug;

  /* check mode string */
  if( (t = xstrdup(mode)) ){
    if( keyword(t, "stdin",  tbuf, SZ_LINE) ) ifd = atoi(tbuf);
    if( keyword(t, "stdout", tbuf, SZ_LINE) ) ofd = atoi(tbuf);
    if( keyword(t, "stderr", tbuf, SZ_LINE) ) efd = atoi(tbuf);
    if( keyword(t, "undef",  tbuf, SZ_LINE) ) undef = xstrdup(tbuf);
    if( keyword(t, "fillbuf",  tbuf, SZ_LINE) ) fillbuf = istrue(tbuf);
    if( keyword(t, "debug",  tbuf, SZ_LINE) ) debug = istrue(tbuf);
#if HAVE_TCL
    if( keyword(t, "tcl", tbuf, SZ_LINE) ){
      sscanf(tbuf, "%p", &tcl);
      use_tcl=1;
    }
#endif
    xfree(t);
  }
  /* make sure unef is defined */
  if( !undef ){
    undef = xstrdup("extn");
  }

  /* pipe for top level */
  pipe(pipes[0]);

  /* package up arguments for each command */
  for(i=1; i<=ncmd; i++){
    if( pipe(pipes[i]) < 0 ){
      gerror(stderr, "can't set up pipes for mainlib\n");
      got = -1;
      goto done;
    }
    ip = 0;
    /* make sure we have a command */
    if( !word(cmds[i], ibuf, &ip) ){
      gerror(stderr, "invalid or missing command for mainlib\n");
      got = -1;
      goto done;
    }
    /* make sure its a valid command */
    nowhite(ibuf, ibuf2);
    if( !(mles[i] = MainLibLookup(ml, NULL, ibuf2)) ){
      if( undef ){
	ip = 0;
	while( word(undef, tbuf, &ip) ){
	  if( !strcasecmp(tbuf, "error") ){
	    break;
	  }
#if HAVE_TCL
	  else if( use_tcl && ml->tcllookup && ml->tcllookup(tcl, ibuf2) ){
	    mles[i] = MainLibAdd(ml, cmds[i], ibuf2, NULL, MAINLIB_TCL);
	    break;
	  }
#endif
	  else if( (s=Find(ibuf2, "x", NULL, mainlib_path)) != NULL ){
	    mles[i] = MainLibAdd(ml, s, ibuf2, NULL, MAINLIB_EXTN);
	    xfree(s);
	    break;
	  }
	}
	if( !mles[i] ){
	  gerror(stderr, "can't locate procedure '%s' for mainlib\n", ibuf);
	  got = -1;
	  goto done;
	}
      }
#ifdef OLD
      switch(mainlibundef){
      case MAINLIB_ERROR:
	gerror(stderr, "can't locate procedure '%s' for mainlib\n", ibuf);
	got = -1;
	goto done;
      case MAINLIB_EXTN:
	if( (s=Find(ibuf2, "x", NULL, mainlib_path)) != NULL ){
	  mles[i] = MainLibAdd(ml, s, ibuf2, NULL, MAINLIB_EXTN);
	  xfree(s);
	}
	else
	  gerror(stderr, "can't locate procedure '%s' for mainlib\n", ibuf);
	break;
      default:
	gerror(stderr, "can't locate procedure '%s' for mainlib\n", ibuf);
	got = -1;
	goto done;
      }
#endif

    }

    /* package up the arguments */
    ip = 0;
    nargs[i] = 0;
    while( word(cmds[i], ibuf, &ip) ){
      nowhite(ibuf, ibuf2);
      if( *ibuf2 ){
	if( nargs[i] >= (MAINLIB_ARGS-1) ){
	  gerror(stderr, "max args exceeded (%d) for mainlib\n", nargs[i]);
	  got = -1;
	  goto done;
	}
	args[i*MAINLIB_ARGS+nargs[i]] = xstrdup(ibuf2);
	nargs[i]++;
	args[i*MAINLIB_ARGS+nargs[i]] = NULL;
      }
    }
  }

  /* execute all commands */
  for(i=1; i<=ncmd; i++){
    /* fork new process */
    if( (ml->pids[i] = fork()) == -1 ){
      gerror(stderr, "can't fork()\n");
      got = -1;
      goto done;
    }
    /* child will call mainlib routine */
    if( ml->pids[i] == 0 ){
      /* reset optind in case its being used by child */
      optind = 1;
      /* stdin for this new process is */
      if( i == 1 ){
	/* first process either reads stdin from specified ifd,
	   or else we leave it alone */
	if( ifd >= 0 ){
	  if( ifd != 0 ){
	    close(0); dup(ifd);
	  }
	  else{
	    use_ifd = 1;
	  }
	}
      }
      /* all other processes read stdin from previous process stdout */
      else{
	close(0); dup(pipes[i][0]);
      }
      /* set up stdout for this new process */
      if( i < ncmd ){
	close(1); dup(pipes[i+1][1]);
      }
      else{
	/* last process either writes stdout or to specified ofd */
	if( ofd >= 0 ){
	  if( ofd != 1 ){
	    close(1); dup(ofd);
	  }
	  else{
	    use_ofd = 1;
	  }
	}
	/* or sends stdout to main process */
	else{
	  close(1); dup(pipes[0][1]);
	}
      }
      /* all processes redirect stderr, if required */
      if( efd >= 0 ){
	if( efd != 2 ){
	  close(2); dup(efd);
	}
	else{
	  use_efd = 1;
	}
      }
      /* close all pipes */
      for(j=0; j<=ncmd; j++){
	close(pipes[j][0]); close(pipes[j][1]);
      }
      /* including user-specified pipes */
      if( (ifd >=0) && !use_ifd ) close(ifd);
      if( (ofd >=0) && !use_ofd ) close(ofd);
      if( (efd >=0) && !use_efd ) close(efd);
      /* call specified subroutine */
      switch(mles[i]->type){
      case MAINLIB_ARGV:
	if( debug ) 
	  fprintf(stderr, "Executing MainLib: %s\n", args[i*MAINLIB_ARGS]);
	mles[i]->proc(nargs[i], &args[i*MAINLIB_ARGS]);
	break;
      case MAINLIB_EXTN:
	if( debug )
	  fprintf(stderr, "Executing external program: %s\n", mles[i]->xclass);
	if( mles[i]->xclass )
	  execvp(mles[i]->xclass, (void *)&args[i*MAINLIB_ARGS]);
	else
	  execvp(mles[i]->name, (void *)&args[i*MAINLIB_ARGS]);
	break;
#if HAVE_TCL
      case MAINLIB_TCL:
	if( debug ) 
	  fprintf(stderr, "Executing Tcl proc: %s\n", mles[i]->xclass);
	if( use_tcl && ml->tcleval){
	  ml->tcleval(tcl, mles[i]->xclass);
	}
	else{
	  gerror(stderr, "Tcl support missing for mainlib\n");
	}
	break;
#endif
      default:
	gerror(stderr, "unknown program type for mainlib\n");
	break;
      }
      _exit(0);
    }
  }

  /* close all pipes except the final input pipe */
  close(pipes[0][1]);
  for(i=1; i<=ncmd; i++){
    close(pipes[i][0]);
    close(pipes[i][1]);
  }

  /* if not filling buffer, just return the pipe (user calls cleanup) */
  if( !fillbuf ){
    got = pipes[0][0];
    ml->npid = ncmd;
    goto done2;
  }

  /* wait for output from last process */
  got = Pipe2Buf(pipes[0][0], buf);

  /* and now close final input pipe */
  close(pipes[0][0]);

done:
  /* done with processing, wait for children to finish */
  MainLibProcessCleanup(ml);

done2:
  /* free up space */
  for(i=1; i<=ncmd; i++){
    for(j=0; j<nargs[i]; j++){
      if( args[i*MAINLIB_ARGS+j] ) xfree(args[i*MAINLIB_ARGS+j]);
    }
    if( cmds[i] ) xfree(cmds[i]);
  }
  if( undef ) xfree(undef);

  /* return: error (-1), number of bytes in buffer, or pipe fd */
  return got;
}

/*
 *---------------------------------------------------------------------------
 *
 * Routine: 	MainLibProcessCleanup
 *
 * Purpose: 	cleanup after mainlib processing
 *
 * Results:	1 on success, 0 for failure
 *
 *---------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
int
MainLibProcessCleanup (MainLib ml)
#else
int MainLibProcessCleanup(ml)
     MainLib ml;
#endif
{
  int i;
  int status;

  for(i=1; i<=ml->npid; i++){
    if( ml->pids[i] ){
#if HAVE_MINGW32==0
      while( waitpid(ml->pids[i], &status, 0) < 0 ){
	if( errno != EINTR ) break;
      }
#endif
      ml->pids[i] = 0;
    }
  }
  return 1;
}

/*
 *---------------------------------------------------------------------------
 *
 * Routine: 	MainLibDel
 *
 * Purpose: 	delete a MainLibEntry record structure
 *
 * Results:	0 on success, -1 for failure
 *
 *---------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
int 
MainLibDel (MainLib ml, MainLibEntry mle)
#else
int MainLibDel(ml, mle)
     MainLib ml;
     MainLibEntry mle;
#endif
{

  /* make sure we have something to do */
  if( !ml || !mle ) return -1;

  /* free up space */
  if( mle->xclass ) xfree(mle->xclass);
  if( mle->name )   xfree(mle->name);

  /* remove from list of mainlibs */
  MainLibListDel(ml, mle);

  /* free up record struct */
  xfree((char *)mle);

  return 0;
}

/*
 *---------------------------------------------------------------------------
 *
 * Routine: 	MainLibFree
 *
 * Purpose: 	free all members of this mainlib list
 *
 * Results:	1 on success, 0 for failure
 *
 *---------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
int
MainLibFree (MainLib ml)
#else
int MainLibFree(ml)
     MainLib ml;
#endif
{
  MainLibEntry mle, tmle;

  /* sanity check */
  if( !ml ) return 0;

  /* free all commands */
  for(mle=ml->head; mle!=NULL; ){
    tmle = mle->next;
    MainLibDel(ml, mle);
    mle = tmle;
  }

#if HAVE_DLFCN_H
  /* release dynamic library */
  if( ml->dl ) dlclose(ml->dl);
#endif

  /* free global struct */
  xfree(ml);
  return 1;
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	MainLibLoad
 *
 * Purpose:	load shared library and execute init function
 *
 * Results:	0=>OK, -1=> no shared obj, -2=>no init function
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
int MainLibLoad(char *name, char *shlib, void **ml, char **ermsg)
#else
int MainLibLoad(name, shlib, ml, ermsg)
     char *name;
     char *shlib;
     void **ml;
     char **ermsg;
#endif
{
#if HAVE_DLFCN_H
  char tbuf[SZ_LINE];
  MainLibInitCall irtn=NULL;
  MainLib tml=NULL;
  void *tdl=NULL;

  /* sanity checks */
  if( !name ){
    if( ermsg ) *ermsg = "no package name specified";
    return -3;
  }
  if( !ml ){
    if( ermsg ) *ermsg = "no return ml struct specified";
    return -3;
  }

  /* get name of init call */
  snprintf(tbuf, SZ_LINE-1, "%sMainLibInit", name);

  /* load shared library */
  if( !(tdl=dlopen(shlib, RTLD_LAZY)) ){
    if( ermsg ) *ermsg = (char *)dlerror();
    return -1;
  }

  /* look up init funtion */
  if( !(irtn=(MainLibInitCall)dlsym(tdl, tbuf)) ){
    if( ermsg ) *ermsg = (char *)dlerror();
    return -2;
  }

  /* execute init function */
  tml = (*irtn)();

  /* store values */
  tml->dl = tdl;

  /* look up and return MainLibProcess funtion, if it exists */
  tml->mainlibprocess=(MainLibProcessCall)dlsym(tml->dl, "MainLibProcess");

  /* store MainLib record */
  *ml = tml;

  /* if we got here, its OK */
  return 0;
#else
  /* avoid -W unused parameter warning */
  if( 0 ){
    name = name;
    shlib = shlib;
    ml = ml;
  }
  /* didn't find dlfcn.h */
  if( ermsg ) *ermsg = "dynamic load supported not found";
  return -1;
#endif
}
