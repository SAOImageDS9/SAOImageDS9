/*
 *	Copyright (c) 1999-2003 Smithsonian Astrophysical Observatory
 */

/*
 *
 * stest -- server test for xpa
 *
 */
#include <xpap.h>

#ifndef BUILD_WITH_XT
#if HAVE_XT
#undef HAVE_XT
#endif
#endif

#if HAVE_XT
#include <X11/Intrinsic.h>
#include <X11/StringDefs.h>
#endif

#define MAX_FPS 10

extern char *optarg;
extern int optind;

XPA xpa1, xpa1a, xpa2, xpa3;
int  quiet=0;
int  dowait=0;
int  dofill=0;
int  dosave=1;
int  doone=0;
int  domyfree=0;
int  doatexit=0;
int n=0;
int please_exit=0;
size_t  save_bytes=-1;
char *save_buf=NULL;

char *mode="";
char name[SZ_LINE];
char xclass[SZ_LINE];

#ifdef ANSI_FUNC
void myfree(void *buf)
#else
void myfree(buf)
     void *buf;
#endif
{
  fprintf(stderr, "myfree calling xfree(%p)\n", buf);
  xfree(buf);
}

#ifdef ANSI_FUNC
int 
send_cb (void *client_data, void *call_data, char *paramlist,
	 char **buf, size_t *len)
#else
int send_cb(client_data, call_data, paramlist, buf, len)
     void *client_data;
     void *call_data;
     char *paramlist;
     char **buf;
     size_t *len;
#endif
{
  char *s = (char *)client_data;
  XPA xpa = (XPA)call_data;
  char tbuf[SZ_LINE];
  char xtemplate[SZ_LINE];
  char *names[MAX_FPS];
  char *bufs[MAX_FPS];
  char *errs[MAX_FPS];
  size_t lens[MAX_FPS];
  int sendbuf=0;
  int got;
  int i;
  int ip;

  /* set the free routine */
  if( domyfree ) XPASetFree(xpa, myfree, NULL);

  /* introduce ourselves */
  if( !quiet ){
    fprintf(stdout, "SEND_CB #%d: %s:%s %s (%s)\n",
	    n++, xpa_class(xpa), xpa_name(xpa), xpa_method(xpa), s);
  }

  /* process special paramlist tokens */
  if( paramlist && *paramlist ){
    ip = 0;
    word(paramlist, xtemplate, &ip);
    if( !quiet )
      fprintf(stdout, "\tparamlist: %s\n", paramlist);
    if( !strncmp(paramlist, "buf", 3) ){
      sendbuf=1;
    }
    else if( !strcmp(paramlist, "free") ){
      if( !quiet )
	fprintf(stdout, "Freeing xpa struct\n");
      XPAFree(xpa);
      return(0);
    }
    else if( !strcmp(paramlist, "exit") ){
      if( !quiet )
	fprintf(stdout, "Exiting\n");
      if( doatexit){
	please_exit = 1;
      } else {
	XPAFree(xpa1);
	if( !doone ){
	  XPAFree(xpa1a);
	  XPAFree(xpa2);
	  XPAFree(xpa3);
	}
      }
    }
    else if( !strcmp(paramlist, "Exit") ){
      if( !quiet )
	fprintf(stdout, "Exiting immediately\n");
      exit(0);
    }
    else if( !strncmp(paramlist, "error", 5) ){
      if( !quiet )
	fprintf(stdout, "\treturning error: %s\n", &paramlist[6]);
      *len = 0;
      *buf = NULL;
      if( strlen(paramlist) > 6 )
	XPAError(xpa, &paramlist[6]);
      else
	XPAError(xpa, "intentional error from client");
      return(-1);
    }
    else if( !strcmp(paramlist, "wait") || !strcmp(paramlist, "version") ){
      fprintf(stdout, "Press <CR> to continue ...");
      fgets(tbuf, SZ_LINE, stdin);
    }
    else if( !strcmp(paramlist, "poll") ){
repoll:
      fprintf(stdout, "Press 'q' to quit ...");
      got = XPAPoll (10000, 1);
      fprintf(stdout, " XPAPoll returns %d ...", got);
      fgets(tbuf, SZ_LINE, stdin);
      if( *tbuf != 'q' )
	goto repoll;
    }
    else if( !strncmp(paramlist, "fork ", 5) ){
#if HAVE_MINGW32==0
      if( strlen(paramlist) > 5 ){
	fprintf(stdout, "fork command: %s\n", &paramlist[5]);
	/* child forks a command and exits */
	if(!(fork())){
	  system(&paramlist[5]);
	  /* should call _exit but this tests avoidance of atexit routine */
	  exit(0);
	}
      }
#else
      fprintf(stderr, "ERROR: fork() not available in mingw\n");
      exit(1);
#endif
    }
    else if( !strcmp(xtemplate, "xpaget") ){
      word(paramlist, xtemplate, &ip);
      got = XPAGet(xpa, xtemplate, &(paramlist[ip]), NULL,
		   bufs, lens, names, errs, MAX_FPS);
      if( !quiet )
	fprintf(stdout, "XPAGet (%s) returned %d buffer(s)\n", xtemplate, got);
      for(i=0; i<got; i++){
	if( !quiet )
	  fprintf(stdout, "\t%d: %s\n", i, names[i]);
	if( errs[i] == NULL ){
	  if( !quiet && (lens[i] > 0) ){
	    fprintf(stdout, "contents (%lu bytes):\n", (unsigned long)lens[i]);
	    fwrite(bufs[i], sizeof(char), lens[i], stdout);
	  }
	  if( !quiet )
	    fprintf(stdout, "\n");
	}
	else{
	  write(fileno(stdout), errs[i], strlen(errs[i]));
	}
	if( bufs[i] )
	  xfree(bufs[i]);
	if( names[i] )
	  xfree(names[i]);
	if( errs[i] )
	  xfree(errs[i]);
      }
    }
  }
  else if( dowait ){
    fprintf(stdout, "Press <CR> to continue ...");
    fgets(tbuf, SZ_LINE, stdin);
  }

  /* return information about this xpa */
  if( !sendbuf ){
    snprintf(tbuf, SZ_LINE,
	  "class: %s\nname: %s\nmethod: %s\nsendian: %s\ncendian: %s\n",
	  xpa_class(xpa), xpa_name(xpa), xpa_method(xpa),
	  xpa_sendian(xpa), xpa_cendian(xpa));
  
    if( (xpa->send_mode & XPA_MODE_FILLBUF) ){
      send(xpa_datafd(xpa), tbuf, strlen(tbuf), 0);
      *len = 0;
      *buf = NULL;
      if( !quiet)
	fprintf(stdout, "\tcallback writes %d bytes to client\n",
		(int)strlen(tbuf));
    }
    /* return the buffer and let xpa transmit it */
    else{
      *len = strlen(tbuf);
      *buf = (char *)xmalloc(*len);
      memcpy(*buf, tbuf, *len);
      if( !quiet)
	fprintf(stdout, "\tcallback returns %d bytes to xpa handler\n",
		(int)strlen(tbuf));
    }
  }
  /* return the last buffer we were sent */
  else{
    if( (xpa->send_mode & XPA_MODE_FILLBUF) ){
      send(xpa_datafd(xpa), save_buf, save_bytes, 0);
      *len = 0;
      *buf = NULL;
      if( !quiet)
	fprintf(stdout, "\tcallback writes %lu bytes to client\n", 
		(unsigned long)save_bytes);
    }
    /* return the buffer and let xpa transmit it */
    else{
      *len = save_bytes;
      *buf = (char *)xmalloc(*len);
      memcpy(*buf, save_buf, *len);
      if( !quiet)
	fprintf(stdout, "\tcallback returns %lu bytes to xpa handler\n",
		(unsigned long)save_bytes);
    }
  }
  if( !quiet ){
    fprintf(stdout, "SEND_CB complete\n");
  }
  else{
    fprintf(stdout, ".");
  }
  fflush(stdout);
  fflush(stderr);
  return(0);
}

#ifdef ANSI_FUNC
int 
receive_cb (void *client_data, void *call_data, char *paramlist,
	    char *buf, size_t len)
#else
int receive_cb(client_data, call_data, paramlist, buf, len)
     void *client_data;
     void *call_data;
     char *paramlist;
     char *buf;
     size_t len;
#endif
{
  XPA xpa = (XPA)call_data;
  char *s = (char *)client_data;
  char tbuf[SZ_LINE];
  char cbuf[SZ_LINE];
  char *errs[1];
  int i;
  int ip;
  int got;
  int xwait;

  /* set the free routine */
  if( domyfree ) XPASetFree(xpa, myfree, NULL);

  if( !quiet ){
    fprintf(stdout, "RECEIVE_CB #%d: %s:%s %s (%s)\n",
	    n++, xpa_class(xpa), xpa_name(xpa), xpa_method(xpa), s);
  }
  /* process param list */
  if( paramlist && *paramlist ){
    if( !quiet )
      fprintf(stdout, "\tparamlist: %s\n", paramlist);
    if( !strcmp(paramlist, "free") ){
      if( !quiet )
	fprintf(stdout, "Freeing xpa struct\n");
      XPAFree(xpa);
      return(0);
    }
    else if( !strcmp(paramlist, "exit") ){
      if( !quiet )
	fprintf(stdout, "Exiting\n");
      if( doatexit){
	please_exit = 1;
      } else {
	XPAFree(xpa1);
	if( !doone ){
	  XPAFree(xpa1a);
	  XPAFree(xpa2);
	  XPAFree(xpa3);
	}
      }
    }
    else if( !strcmp(paramlist, "Exit") ){
      if( !quiet )
	fprintf(stdout, "Exiting immediately\n");
      exit(0);
    }
    else if( !strncmp(paramlist, "error", 5) ){
      if( !quiet )
	fprintf(stdout, "Processing error: %s\n", &paramlist[6]);
      if( strlen(paramlist) > 6 )
	XPAError(xpa, &paramlist[6]);
      else
	XPAError(xpa, "intentional error from client");
      return(-1);
    }
    else if( !strcmp(paramlist, "wait") ){
      fprintf(stdout, "Press <CR> to continue ...");
      fgets(tbuf, SZ_LINE, stdin);
    }
    else if( !strcmp(paramlist, "poll") ){
repoll:
      fprintf(stdout, "Press 'q' to quit ...");
      got = XPAPoll (10000, 1);
      fprintf(stdout, " ... XPAPoll returns %d ...", got);
      fgets(tbuf, SZ_LINE, stdin);
      if( *tbuf != 'q' )
	goto repoll;
    }
    else if( !strncmp(paramlist, "fork ", 5) ){
#if HAVE_MINGW32==0
      if( strlen(paramlist) > 5 ){
	fprintf(stdout, "fork command: %s\n", &paramlist[5]);
	/* child forks a command and exits */
	if(!(fork())){
	  system(&paramlist[5]);
	  /* should call _exit but this tests avoidance of atexit routine */
	  exit(0);
	}
      }
#else
      fprintf(stderr, "ERROR: fork() not available in mingw\n");
      exit(1);
#endif
    }
    else if( !strncmp(paramlist, "xpaset", 6) ){
      ip = 0;
      word(paramlist, tbuf, &ip);
      if( word(paramlist, tbuf, &ip) ){
	if( !quiet )
	  fprintf(stdout, "calling XPASet(%s, \"%s\")\n",
		  tbuf, &(paramlist[ip]));
	got = XPASet(NULL, tbuf, &(paramlist[ip]), mode,
		     paramlist, strlen(paramlist), NULL, errs, 1);
	if( got == 0 ){
	  if( !quiet )
	    fprintf(stdout, "no XPA access points matched template %s\n",
		    tbuf);
	}
	else if( errs[0] != NULL ){
	  if( !quiet )
	    fprintf(stdout, "Error on xpaset to %s: %s\n", tbuf, errs[0]);
	  xfree(errs[0]);
	}
	else{
	  if( !quiet )
	    fprintf(stdout, "XPASet to %s successful\n", tbuf);
	}
      }
      return(0);
    }
  }
  else if( dowait ){
    fprintf(stdout, "Press <CR> to continue ...");
    fgets(tbuf, SZ_LINE, stdin);
  }

  /* reset save buffer */
  if( save_buf != NULL ){
    xfree(save_buf);
    save_buf = NULL;
  }
  save_bytes = 0;
  xwait = dowait;
  if( !(xpa->receive_mode & XPA_MODE_FILLBUF) && dofill ){
    while( (got=recv(xpa_datafd(xpa), tbuf, SZ_LINE, 0)) >0 ){
      if( xwait >0 ){
	fprintf(stdout, "got %d bytes ... press <CR> to continue ...", got);
	fgets(cbuf, SZ_LINE, stdin);
	xwait--;
      }
      i = save_bytes;
      save_bytes += got;
      if( dosave ){
	if( save_buf == NULL )
	  save_buf = (char *)xmalloc(save_bytes);
	else
	  save_buf = (char *)xrealloc(save_buf, save_bytes);
	memcpy(&save_buf[i], tbuf, got);
      }
    }
    if( !quiet )
      fprintf(stdout, "\tcallback read %lu bytes\n", 
	      (unsigned long)save_bytes);
  }
  else{
    if( !quiet ){
      fprintf(stdout, "\tenter callback with buf: %lu bytes\n", 
	      (unsigned long)len);
    }
    save_bytes = len;
    save_buf = (char *)xmalloc(len);
    memcpy(save_buf, buf, len);
  }
  if( !quiet ){
    fprintf(stdout, "RECEIVE_CB complete\n");
  }
  else{
    fprintf(stdout, ".");
  }
  fflush(stdout);
  fflush(stderr);
  return(0);
}

#ifdef ANSI_FUNC
int 
info_cb (void *client_data, void *call_data, char *paramlist)
#else
int info_cb(client_data, call_data, paramlist)
     void *client_data;
     void *call_data;
     char *paramlist;
#endif
{
  XPA xpa = (XPA)call_data;
  char *s = (char *)client_data;
  char xtemplate[SZ_LINE];
  char *names[MAX_FPS];
  char *bufs[MAX_FPS];
  char *errs[MAX_FPS];
  size_t lens[MAX_FPS];
  int i;
  int ip;
  int got;

  if( !quiet ){
    fprintf(stdout, "INFO_CB #%d: %s:%s (%s)\n",
	    n++, xpa_class(xpa), xpa_name(xpa), s);
  }

  if( paramlist && *paramlist ){
    if( !quiet )
      fprintf(stdout, "\tparamlist: %s\n", paramlist);
    ip = 0;
    word(paramlist, xtemplate, &ip);
    if( !strcmp(xtemplate, "xpaget") ){
      word(paramlist, xtemplate, &ip);
      got = XPAGet(xpa, xtemplate, &(paramlist[ip]), NULL,
		   bufs, lens, names, errs, MAX_FPS);
      if( !quiet )
	fprintf(stdout, "XPAGet (%s) returned %d buffer(s)\n", xtemplate, got);
      for(i=0; i<got; i++){
	if( !quiet )
	  fprintf(stdout, "\t%d: %s\n", i, names[i]);
	if( errs[i] == NULL ){
	  if( !quiet && (lens[i] > 0) ){
	    fprintf(stdout, "contents (%lu bytes):\n", 
		    (unsigned long)lens[i]);
	    fwrite(bufs[i], sizeof(char), lens[i], stdout);
	  }
	  if( !quiet )
	    fprintf(stdout, "\n");
	}
	else{
	  write(fileno(stdout), errs[i], strlen(errs[i]));
	}
	if( bufs[i] )
	  xfree(bufs[i]);
	if( names[i] )
	  xfree(names[i]);
	if( errs[i] )
	  xfree(errs[i]);
      }
    }
  }
  if( !quiet ){
    fprintf(stdout, "INFO_CB complete\n");
  }
  else{
    fprintf(stdout, ".");
  }
  fflush(stdout);
  fflush(stderr);
  return(0);
}

#ifdef ANSI_FUNC
int 
main (int argc, char **argv)
#else
main(argc, argv)
     int argc;
     char **argv;
#endif
{
#if HAVE_XT
  Widget top;
  XtAppContext appcontext;
#endif
  char *proxy=NULL;
  char tbuf[SZ_LINE];
  char tbuf2[SZ_LINE];
  char cmd[SZ_LINE];
  int c;
  int got=0;
  int x=0;
  int delay=0;

#if HAVE_MINGW32==0
  setvbuf(stdout, NULL, _IONBF, 0);
  setvbuf(stderr, NULL, _IONBF, 0);
#endif

  *cmd = '\0';
  /* process switch arguments */
  while ((c = getopt(argc, argv, "1ad:f:mqrRp:suwxX")) != -1){
    switch(c){
    case '1':
      doone = 1;
      break;
    case 'a':
      mode = "ack=false";
      break;
    case 'd':
      delay = atoi(optarg);
      break;
    case 'f':
      snprintf(cmd, SZ_LINE, "%s %s &\n", argv[0], optarg);
      break;
    case 'm':
      domyfree = 1;
      break;
    case 'q':
      quiet = 1;
      break;
    case 'p':
      proxy = optarg;
      break;
    case 'r':
      mode = "fillbuf=false";
      break;
    case 'R':
      mode = "fillbuf=false";
      dofill = 1;
      dosave = 0;
      break;
    case 's':
      x = 0;
      break;
    case 'u':
      mode = "buf=false";
      break;
    case 'w':
      dowait++;
      break;
    case 'x':
      doatexit=1;
      break;
    case 'X':
      x = 1;
      break;
    }
  }

  if( optind >= argc ){
    strcpy(name, "xpa");
  }
  else{
    strcpy(name, argv[optind]);
  }
  strcpy(xclass, name);
  cluc(xclass);

  if( doatexit ){
#if HAVE_ATEXIT
    XPAAtExit();
#else
    fprintf(stderr, "ERROR: atexit not available\n");
    exit(1);
#endif
  }

  if( x ){
#if HAVE_XT
    top = XtAppInitialize(&appcontext, "Server", NULL, 0,
			  &argc, argv, NULL, NULL, 0);
    XtVaSetValues(top, XtNwidth, (XtArgVal)10, XtNheight, (XtArgVal)10,
		  XtNmappedWhenManaged, (XtArgVal)False, NULL);
#else
    fprintf(stderr, "Xt is not available ...\n");
    got = 1;
    goto done;
#endif
  }

  strcpy(tbuf, name);
  snprintf(tbuf2, SZ_LINE, "help for %s", tbuf);
  xpa1 = XPANew(xclass, tbuf, tbuf2,
		send_cb, (void *)"send1", mode, 
		receive_cb, (void *)"receive1", mode);
  if( xpa1 == NULL ){
    fprintf(stderr, "ERROR: could not init xpa1\n");
  }
  else{
    fprintf(stdout, "%s using method: %s\n", xpa_name(xpa1), xpa_method(xpa1));
  }

  if( !doone ){
    snprintf(tbuf, SZ_LINE, "%s1", name);
    snprintf(tbuf2, SZ_LINE, "help for %s", tbuf);
    xpa1a = XPANew(xclass, tbuf, tbuf2,
		   send_cb, (void *)"send1a", mode, 
		   receive_cb, (void *)"receive1a", mode);
    if( xpa1a == NULL ){
      fprintf(stderr, "ERROR: could not init xpa1a\n");
    }
    else{
      fprintf(stdout, "%s using method: %s\n", 
	      xpa_name(xpa1a), xpa_method(xpa1a));
    }
    
    snprintf(tbuf, SZ_LINE, "c_%s", name);
    xpa2 = XPACmdNew(xclass, tbuf);
    if( xpa2 == NULL ){
      fprintf(stderr, "ERROR: could not init xpa2\n");
    }
    else{
      XPACmdAdd(xpa2, "cmd2", "and help for cmd2",
		send_cb, (void *)"cmd2", mode, 
		receive_cb, (void *)"cmd2", mode);
      XPACmdAdd(xpa2, "cmd1 xx yy", "help for cmd1 xx yy",
		send_cb, (void *)"cmd1 xx yy", mode, 
		receive_cb, (void *)"cmd1 xx yy", mode);
      XPACmdAdd(xpa2, "cmd1 xx", "help for cmd1 xx",
		send_cb, (void *)"cmd1 xx", mode, 
		receive_cb, (void *)"cmd1 xx", mode);
      XPACmdAdd(xpa2, "cmd1", NULL,
		send_cb, (void *)"cmd1", mode, 
		receive_cb, (void *)"cmd1", mode);
      fprintf(stdout, "%s using method: %s\n", 
	      xpa_name(xpa2), xpa_method(xpa2));
    }
    
    snprintf(tbuf, SZ_LINE, "i_%s", name);
    xpa3 = XPAInfoNew(xclass, tbuf, info_cb, (void *)"info1", mode);
    if( xpa3 == NULL ){
      fprintf(stderr, "ERROR: could not init xpa3\n");
    }
    else{
      fprintf(stdout, "%s using method: %s\n", xpa_name(xpa3), xpa_method(xpa3));
    }
  }
    
  if( *cmd != '\0' ){
    fprintf(stdout, "starting bkgd process: %s", cmd);
    system(cmd);
  }

  /* delay if necessary */
  if( delay ){
    fprintf(stdout, "starting delay of %d seconds ...", delay);
    XPASleep(delay*1000);
    fprintf(stdout, " done\n");
  }
  fflush(stdout);
  fflush(stderr);

  /* connect to proxy, if necessary */
  if( proxy ){
    if( XPARemote(xpa1, proxy, "+", "proxy=true") < 0 ){
      fprintf(stderr, "ERROR: could not connect to proxy: %s\n", proxy);
    }
  }

  if( x ){
#if HAVE_XT
    fprintf(stdout, "\nEntering Xt loop ...\n");
    XPAXtAddInput(appcontext, NULL);
    XtRealizeWidget(top);
    XtAppMainLoop(appcontext);
#else
    fprintf(stderr, "Xt is not available ...\n");
    got = 1;
    goto done;
#endif
  }
  else{
    fprintf(stdout, "\nEntering select loop ...\n");
    if( !doatexit ){
      XPAMainLoop();
    } else {
      while( !please_exit )
	if( !XPAPoll(-1, 100) ) please_exit=1;
    }
    goto done;
  }

done:
  if( !doatexit ){
    XPAFree(xpa1);
    if( !doone ){
      XPAFree(xpa1a);
      XPAFree(xpa2);
      XPAFree(xpa3);
    }
  }

  /* make valgrind happy */
  XPACleanup();
  if( save_buf ) xfree(save_buf);
  exit(got);
}
