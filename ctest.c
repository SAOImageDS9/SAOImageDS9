/*
 *	Copyright (c) 1999-2003 Smithsonian Astrophysical Observatory
 */

/*
 *
 * ctest -- client test for xpa
 *
 */
#include <xpap.h>

extern char *optarg;
extern int optind;

int  quiet=0;
int  dowait=0;
int  n=0;
int don=0;
int  save_bytes=-1;
int  exitonerror=0;
char *save_buf=NULL;
char *mode="";
char name[SZ_LINE];

#define MAX_FPS 4

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
  int sendbuf=0;

  /* introduce ourselves */
  if( !quiet ){
    fprintf(stdout, "SEND_CB #%d: %s:%s (%s)\n",
	    n++, xpa_class(xpa), xpa_name(xpa), s);
  }

  /* process special paramlist tokens */
  if( paramlist && *paramlist ){
    if( !quiet )
      fprintf(stdout, "\tparamlist: %s\n", paramlist);
    if( !strncmp(paramlist, "buf", 3) ){
      sendbuf=1;
    }
    else if( !strncmp(paramlist, "error", 5) ){
      if( !quiet )
	fprintf(stdout, "\treturning error: %s\n", &paramlist[6]);
      *len = 0;
      *buf = NULL;
      XPAError(xpa, &paramlist[6]);
      return(-1);
    }
    else if( !strcmp(paramlist, "exit") ){
      if( !quiet )
	fprintf(stdout, "Exiting\n");
      exit(0);
    }
    else if( !strcmp(paramlist, "wait") ){
      fprintf(stdout, "Press <CR> to continue ...");
      fgets(tbuf, SZ_LINE, stdin);
    }
  }
  else if( dowait ){
    fprintf(stdout, "Press <CR> to continue ...");
    fgets(tbuf, SZ_LINE, stdin);
  }

  /* return information about this xpa */
  if( !sendbuf ){
    snprintf(tbuf, SZ_LINE,
	  "nclass: %s\nname: %s\nmethod: %s\nsendian: %s\ncendian: %s\n",
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
	fprintf(stdout, "\tcallback writes %d bytes to client\n", save_bytes);
    }
    /* return the buffer and let xpa transmit it */
    else{
      *len = save_bytes;
      *buf = (char *)xmalloc(*len);
      memcpy(*buf, save_buf, *len);
      if( !quiet)
	fprintf(stdout, "\tcallback returns %d bytes to xpa handler\n",
		save_bytes);
    }
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
  char *errs[1];
  int i;
  int ip;
  int got;
  int xwait;

  if( !quiet ){
    fprintf(stdout, "RECEIVE_CB #%d: %s:%s (%s)\n",
	    n++, xpa_class(xpa), xpa_name(xpa), s);
  }
  if( !quiet ){
    fprintf(stdout, "\tbuf: %lu bytes\n", (unsigned long)len);
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
    else if( !strncmp(paramlist, "error", 5) ){
      if( !quiet )
	fprintf(stdout, "Processing error: %s\n", &paramlist[6]);
      XPAError(xpa, &paramlist[6]);
      return(-1);
    }
    else if( !strcmp(paramlist, "exit") ){
      if( !quiet )
	fprintf(stdout, "Exiting\n");
      exit(0);
    }
    else if( !strcmp(paramlist, "wait") ){
      fprintf(stdout, "Press <CR> to continue ...");
      fgets(tbuf, SZ_LINE, stdin);
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
	  if( exitonerror )
	    exit(1);
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
  if( !(xpa->receive_mode & XPA_MODE_FILLBUF) ){
    while( (got=recv(xpa_datafd(xpa), tbuf, SZ_LINE, 0)) >0 ){
      if( xwait >0 ){
	fprintf(stdout, "got %d bytes ... press <CR> to continue ...", got);
	fgets(tbuf, SZ_LINE, stdin);
	xwait--;
      }
      i = save_bytes;
      save_bytes += got;
      if( save_buf == NULL )
	save_buf = (char *)xmalloc(save_bytes);
      else
	save_buf = (char *)xrealloc(save_buf, save_bytes);
      memcpy(&save_buf[i], tbuf, got);
    }
    if( !quiet )
      fprintf(stdout, "callback read %d bytes\n", save_bytes);
  }
  else{
    save_bytes = len;
    save_buf = (char *)xmalloc(len);
    memcpy(save_buf, buf, len);
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
	  if( lens[i] > 0 ){
	    fprintf(stdout, "contents (%lu bytes):\n", (unsigned long)lens[i]);
	    write(fileno(stdout), bufs[i], lens[i]);
	  }
	  if( !quiet )
	    fprintf(stdout, "\n");
	}
	else{
	  write(fileno(stdout), errs[i], strlen(errs[i]));
	  if( exitonerror )
	    exit(1);
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
  fflush(stdout);
  fflush(stderr);
  return(0);
}

#ifdef ANSI_FUNC
int 
main (int argc, char **argv)
#else
int
main(argc, argv)
     int argc;
     char **argv;
#endif
{
  char *plist=NULL;
  char *paramlist=NULL;
  char *xtemplate="*:*";
  char *smode=NULL;
  char tbuf[SZ_LINE];
  char name[SZ_LINE];
  char cmd[SZ_LINE];
  char fxpa[SZ_LINE];
  char *names[MAX_FPS];
  char *bufs[MAX_FPS];
  char *dbufs[MAX_FPS];
  char *errs[MAX_FPS];
  char *buf=NULL;
  int c;
  size_t lens[MAX_FPS];
  size_t dlens[MAX_FPS];
  int i;
  int got;
  int maxbufs;
  int j=0;
  int loop=1;
  int delay=0;
  int get=1;
  int set=0;
  int info=0;
  int access=0;
  int pipe=0;
  int tiny=0;
  int doxpa = 0;
  int xpaopen=0;
  int wait=0;
  XPA xpa=NULL;
  XPA xpa1=NULL;
  int fds[1];

#if HAVE_MINGW32==0
  setvbuf(stdout, NULL, _IONBF, 0);
  setvbuf(stderr, NULL, _IONBF, 0);
#endif

  *cmd = '\0';
  /* process switch arguments */
  while ((c = getopt(argc, argv, "abd:ef:gil:m:nopqstwx:")) != -1){
    switch(c){
    case 'a':
      get = 0;
      set = 0;
      info = 0;
      access = 1;
      break;
    case 'b':
      get = 1;
      set = 1;
      info = 0;
      access = 0;
      break;
    case 'd':
      delay = atoi(optarg);
      break;
    case 'e':
      exitonerror++;
      break;
    case 'f':
      snprintf(cmd, SZ_LINE, "stest %s &\n", optarg);
      snprintf(fxpa, SZ_LINE, "%s1", optarg);
      break;
    case 'g':
      get = 1;
      set = 0;
      info = 0;
      access = 0;
      break;
    case 'i':
      get = 0;
      set = 0;
      info = 1;
      access = 0;
      break;
    case 'l':
      loop = atoi(optarg);
      break;
    case 'm':
      smode = xstrdup(optarg);
      break;
    case 'n':
      don = 1;
      break;
    case 'o':
      xpaopen = 1;
      break;
    case 'p':
      pipe = 1;
      fds[0] = fileno(stdout);
      break;
    case 'q':
      quiet = 1;
      break;
    case 's':
      get = 0;
      set = 1;
      info = 0;
      access = 0;
      break;
    case 't':
      tiny = 1;
      break;
    case 'w':
      wait = 1;
      break;
    case 'x':
      doxpa = 1;
      strcpy(name, optarg);
      break;
    }
  }
  if( optind < argc ){
    xtemplate = argv[optind];
    optind++;
  }

  /* make up the paramlist */
  plist = XPAArgvParamlist(argc, argv, optind);
  if( !don )
    paramlist = plist;
  else
    paramlist = (char *)xcalloc(strlen(plist)+SZ_LINE, sizeof(char));

  /* for setting, make up a number of dbufs that we will send */
  if( set ){
    /* must be less than MAX_FPS */
    maxbufs = 2;

    dbufs[0] = (char *)xmalloc(SZ_LINE);
    strcpy(dbufs[0], "this is a short string");
    dlens[0] = strlen(dbufs[0]);

    if( tiny )
      dlens[1] = 256+1;
    else
      dlens[1] = 256*1000+1;
    dbufs[1] = (char *)xmalloc(dlens[1]);
    for(j=0, buf=dbufs[1]; j<dlens[1]; j++){
      buf[j] = j%256;
    }
  }

  /* background process initialization */
  if( *cmd != '\0' ){
    fprintf(stdout, "starting bkgd process: %s", cmd);
    system(cmd);
    for(i=0, n=0; i<5; i++){
      if( (got=XPAAccess(NULL, fxpa, "g", NULL, names, errs, MAX_FPS)) ){
	for(j=0; j<got; j++){
	  if( names[j] ) xfree(names[j]);
	  if( !errs[j] )
	    n++;
	  else
	    xfree(errs[j]);
	}
	if( n ){
	  fprintf(stdout, "process is started\n");
	  break;
	}
      }
      else{
        XPASleep(1000);
      }
    }
  }

  /* start up an xpa server, if necessary */
  if( doxpa ) {
    snprintf(tbuf, SZ_LINE, "%s from ctest", name);
    if( (xpa1 = XPANew("CLIENT", name, name,
		       send_cb, tbuf, mode, receive_cb, tbuf, mode)) == NULL ){
      fprintf(stderr, "ERROR: could not init client xpa: %s\n", name);
    }
    else{
      fprintf(stdout, "%s using method: %s\n",
	      xpa_name(xpa1), xpa_method(xpa1));
    }
  }

  /* XPAOpen */
  if( xpaopen ){
    if( (xpa = XPAOpen(NULL)) == NULL ){
      fprintf(stderr, "ERROR: could not open any xpa access points: %s\n",
	      xtemplate);
      exit(1);
    }
  }

  /* iterate */
  for(j=0; j<loop; j++){
    if( loop > 1 ){
      if( !quiet ){
	fprintf(stdout, "CLIENT #%d: %s\n", j, xtemplate);
	if( paramlist && *paramlist )
	  fprintf(stdout, "\tparamlist: %s\n", paramlist);
      }
    }
    /* make up paramlist, if necessary */
    if( don )
      snprintf(paramlist, SZ_LINE, "%s %d", plist, j);
    /* XPAGet, XPAGetFd */
    if( get ){
      if( pipe ){
	got = XPAGetFd(xpa, xtemplate, paramlist, smode,
		       fds, names, errs, -MAX_FPS);
      }
      else{
	got = XPAGet(xpa, xtemplate, paramlist, smode, 
		     bufs, lens, names, errs, MAX_FPS);
	for(i=0; i<got; i++){
	  if( !quiet ){
	    if( strcmp(paramlist, "buf") )
	      fprintf(stdout, "\treceived from %s\n", names[i]);
	    if( errs[i] == NULL ){
	      if( lens[i] > 0 ){
		write(fileno(stdout), bufs[i], lens[i]);
	      }
	      if( strcmp(paramlist, "buf") )
		fprintf(stdout, "\n");
	    }
	    else{
	      write(fileno(stdout), errs[i], strlen(errs[i]));
	      if( exitonerror )
		exit(1);
	    }
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
    
    /* XPASet, XPASetFd */
    if( set ){
      if( pipe ){
	if( !quiet )
	  fprintf(stdout, "\tsending data from stdin\n");
	got =XPASetFd(xpa, xtemplate, paramlist, smode, 
		      fileno(stdin), names, errs, MAX_FPS);
      }
      else{
	got = XPASet(xpa, xtemplate, paramlist, smode,
		     dbufs[j%maxbufs], dlens[j%maxbufs],
		     names, errs, MAX_FPS);
      }
      for(i=0; i<got; i++){
	if( !quiet )
	  fprintf(stdout, "\tsent %lu bytes to %s\n",
		  (unsigned long)dlens[j%maxbufs], names[i]);
	if( errs[i] != NULL ){
	  fprintf(stdout, "Error from server %s\n", names[i]);
	  write(fileno(stdout), errs[i], strlen(errs[i]));
	  if( exitonerror )
	    exit(1);
	}
	if( names[i] )
	  xfree(names[i]);
	if( errs[i] )
	  xfree(errs[i]);
      }
    }

    /* XPAInfo */
    if( info ){
      got = XPAInfo(xpa, xtemplate, paramlist, smode, names, errs, MAX_FPS);
      for(i=0; i<got; i++){
	if( !quiet ){
	  fprintf(stdout, "\tinfo from %s\n", names[i]);
	  if( errs[i] != NULL ){
	    write(fileno(stdout), errs[i], strlen(errs[i]));
	    if( exitonerror )
	      exit(1);
	  }
	}
	if( names[i] )
	  xfree(names[i]);
	if( errs[i] )
	  xfree(errs[i]);
      }
    }

    /* XPAAccess */
    if( access ){
      got = XPAAccess(xpa, xtemplate, paramlist, smode, names, errs, MAX_FPS);
      for(i=0; i<got; i++){
	if( !quiet ){
	  fprintf(stdout, "\taccess from %s\n", names[i]);
	  if( errs[i] != NULL ){
	    write(fileno(stdout), errs[i], strlen(errs[i]));
	    if( exitonerror )
	      exit(1);
	  }
	}
	if( names[i] )
	  xfree(names[i]);
	if( errs[i] )
	  xfree(errs[i]);
      }
    }

    /* if we processed no access points, let`s hear about it */
    if( got == 0 ){
      fprintf(stderr, "XPA$ERROR: no xpa access points processed\n");
    }
    else{
	if( !quiet ){
	  if( strcmp(paramlist, "buf") )
	    fprintf(stdout, "CLIENT #%d complete\n", j);
	}
	else{
	  fprintf(stdout, ".");
	  fflush(stdout);
	}
    }

    /* wait for next iteration */
    if( wait ){
      fprintf(stdout, "Press <CR> to continue ...");
      fgets(tbuf, SZ_LINE, stdin);
    }

    /* delay */
    if( delay )
      XPASleep(delay);
  }

  /* XPAOpen/XPAClose */
  if( xpaopen ){
    XPAClose(xpa);
  }

  /* free up space */
  if( set ){
    for(j=0; j<maxbufs; j++){
      if( dbufs[j] )
	xfree(dbufs[j]);
    }
  }
  if(  plist ) xfree(plist);
  if( don )    xfree(paramlist);
  if( smode )  xfree(smode);
  /* make valgrind happy */
  XPACleanup();
  exit(0);
}
