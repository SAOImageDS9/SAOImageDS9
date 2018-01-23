/*
 *	Copyright (c) 1999-2003 Smithsonian Astrophysical Observatory
 */

#include <xpap.h>

/*
 *----------------------------------------------------------------------------
 *
 *
 * 			Private Routines and Data
 *
 *
 *----------------------------------------------------------------------------
 */

/* this is the head of the global list of client xpas */
static XPA xpaclienthead=NULL;

static char errbuf[SZ_LINE];		/* holds current error message */
static int id=0;			/* id of current command */

#define DATA_CONNECT 1
#define DATA_ACCEPT  2
#define DATA_DATA    4

/* use of a double fork() call is used to prevent zombies which happen
   if fork is a child of xpans started by an XPA server (i.e., for some
   reason, the SIGCHLD signal does not get sent to xpans parent)
   See Stevens, Advanced Programming in te Unix Environment, p. 202 */
#define USE_DOUBLE_FORK 1
#ifndef USE_DOUBLE_FORK
#ifdef ANSI_FUNC
void sig_chld(int signo)
#else
#endif
{
  int stat;

  while(waitpid(-1, &stat, WNOHANG) > 0){
    ;
  }
  return;
}                                                                              
#endif

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	rdl
 *
 * Purpose:	read characters up a new-line
 *
 * Returns:	number of characters read
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
static int 
rdl (int fd, char *buf, size_t len)
#else
static int rdl(fd, buf, len)
     int fd;
     char *buf;
     int len;
#endif
{
  int i=0;
  int got;

  /* start out clean */
  *buf = '\0';

  /* make sure we have a valid channel */
  if( fd < 0 )
    return(-1);

  /* grab characters up to a new-line or max len */
  while( i < (len-1) ){
    got = read(fd, &(buf[i]), 1);
    if( got < 1 )
      break;
    else if( buf[i++] == '\n' )
      break;
  }
  buf[i] = '\0';
  return(i);
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPAProxyAccept
 *
 * Purpose:	accept a connection from an XPA proxy server
 *
 * Return:	fd of accepted connection or -1
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
static
int XPAProxyAccept(XPA xpa, char *method, char *xclass, char *name, int ifd, 
		   unsigned int *rip, unsigned short *rport, char *rname)
#else
static
int XPAProxyAccept(xpa, method, xclass, name, ifd, rip, rport, rname)
     XPA xpa;
     char *method;
     char *xclass;
     char *name;
     int ifd;
     unsigned int *rip;
     unsigned short *rport;
     char *rname;
#endif
{
  int sock;
  int got;
  int oum;
  int ofd;
  int niter;
  int swidth=FD_SETSIZE;
  int keep_alive=1;
  int reuse_addr=1;
  unsigned int ip;
  unsigned short port;
  char tbuf[SZ_LINE];
  char amethod[SZ_LINE];
  char *tptr;
  socklen_t slen;
  struct sockaddr_in sock_in;
#if HAVE_SYS_UN_H
  struct sockaddr_un sock_un;
#endif
  struct timeval tv;
  struct timeval *tvp;
  fd_set readfds;

  /* initialize results */
  if( rip )   *rip = 0;
  if( rport ) *rport = 0;
  if( rname ) *rname = '\0';

  switch(XPAMethod(method)){
  case XPA_INET:
    if( !XPAParseIpPort(method, &ip, &port) ){
      goto error;
    }
    /* open a socket for data connections */
    if( (sock = xsocket(AF_INET, SOCK_STREAM, 0)) < 0 ){
      PERROR(("xpaaccept socket"));
      goto error;
    }
    setsockopt(sock, SOL_SOCKET, SO_KEEPALIVE,
	       (char *)&keep_alive, sizeof(keep_alive));
    setsockopt(sock, SOL_SOCKET, SO_REUSEADDR,
	       (char *)&reuse_addr, sizeof(reuse_addr));
    memset((char *)&sock_in, 0, sizeof(sock_in));
    sock_in.sin_family = AF_INET;
    sock_in.sin_addr.s_addr = htonl(INADDR_ANY);
    sock_in.sin_port = htons(port);
    /* bind to the ip:port */
    if( xbind(sock, (struct sockaddr *)&sock_in, sizeof(sock_in)) < 0 ){
      PERROR(("xpaaccept bind"));
      xclose(sock);
      goto error;
    }
    snprintf(amethod, SZ_LINE, "%x:%d", ip, port);
    break;
#if HAVE_SYS_UN_H
  case XPA_UNIX:
    ip = 0;
    port = 0;
    /* get filename part, composed of class and name and unique id */
    snprintf(tbuf, SZ_LINE, "%s_%s.%d", xclass, name, (int)time(NULL));
    /* change "/" to "_" for filename */
    for(tptr = tbuf; *tptr != '\0'; tptr++){
      if( *tptr == '/' ) *tptr = '_';
    }
    /* create full pathname */
    snprintf(amethod, SZ_LINE, "%s/%s", XPATmpdir(), tbuf);
    /* delete old copy */
    unlink (amethod);
    /* open a socket and fill in socket information */
    if( (sock = xsocket(AF_UNIX, SOCK_STREAM, 0)) < 0 ){
      goto error;
    }
    setsockopt(sock, SOL_SOCKET, SO_KEEPALIVE,
	       (char *)&keep_alive, sizeof(keep_alive));
    memset((char *)&sock_un, 0, sizeof(sock_un));
    sock_un.sun_family = AF_UNIX;
    strcpy(sock_un.sun_path, amethod);
    /* unset umask so that everyone can read and write */
    oum = umask(0);
    /* bind to the file */
    got = xbind(sock, (struct sockaddr *)&sock_un, sizeof(sock_un));
    /* reset umask to previous */
    umask(oum);
    /* now check for bind error */
    if( got < 0 ){
      xclose(sock);
      goto error;
    }
    break;
#endif
  default:
    goto error;
  }
  
  /* send port to client so they can connect */
  /* first listen for the connection */
  if( listen(sock, XPA_MAXLISTEN) < 0 ){
    PERROR(("xpaaccept listen"));
    xclose(sock);
    goto error;
  }
  
  /* and tell the client that we are listening */
  snprintf(tbuf, SZ_LINE, "xpaaccept %s (%s:%s %s)\n", 
	   amethod, xclass, name, method);
  FPRINTF((stderr, "%sXPAProxyAccept: sending command to %d:\n%s",
	   _sp, ifd, tbuf));
  if( XPAPuts(NULL, ifd, tbuf, XPAShortTimeout()) <= 0 ){
    PERROR(("client xpaaccept write"));
    xclose(sock);
    goto error;
  }

  /* we will iterate on xselect */
  if( XPAShortTimeout() > 0 )
    niter = XPAShortTimeout()*100;
  else
    niter = XPA_SHORT_TIMEOUT*100;
again:
  /* this has to be able to time out */
  tv.tv_sec = 0;
  tv.tv_usec = 10000;
  tvp = &tv;
  /* wait for this socket and XPA sockets */
  FD_ZERO(&readfds);
  FD_SET(sock, &readfds);
  XPAAddSelect(NULL, &readfds);
  /* wait for the connection */
  got = xselect(swidth, &readfds, NULL, NULL, tvp);
  /* process results of select */
  if( got > 0 ){
    if( !FD_ISSET(sock, &readfds)){
      XPAProcessSelect(&readfds, 0);
      goto again;
    }
    switch(XPAMethod(method)){
    case XPA_INET:
      while( 1 ){
	slen = sizeof(struct sockaddr_in);
	if((ofd=xaccept(sock, (struct sockaddr *)&sock_in, &slen)) >= 0){
	  break;
	}
	else{
	  if( xerrno == EINTR )
	    continue;
	  else{
	    PERROR(("xpaaccept acccept"));
	    xclose(sock);
	    goto error;
	  }
	}
      }
      break;
#if HAVE_SYS_UN_H
    case XPA_UNIX:
      while( 1 ){
	slen = sizeof(struct sockaddr_un);
	if((ofd=xaccept(sock, (struct sockaddr *)&sock_un, &slen)) >= 0){
	  break;
	}
	else{
	  if( xerrno == EINTR )
	    continue;
	  else{
	    PERROR(("xpaaccept acccept"));
	    xclose(sock);
	    goto error;
	  }
	}
      }
      break;
#endif
    default:
      xclose(sock);
      goto error;
    }
  }
  /* timeout? */
  else if( got == 0 ){
    if( --niter > 0 ){
      goto again;
    }
    else{
      xclose(sock);
      FPRINTF((stderr, "%sXPAProxyAccept: select timed out\n", _sp));
      goto error;
    }
  }
  /* error */
  else{
    if( xerrno == EINTR ){
      PERROR(("xpaaccept select"));
      goto again;
    }
    else{
      xclose(sock);
      goto error;
    }
  }
  /* done with listening */
  xclose(sock);

  /* fill in return information */
  if( rip )   *rip = ip;
  if( rport ) *rport = port;
  if( rname ){
    strncpy(rname, amethod, SZ_LINE-1);
    rname[SZ_LINE-1] = '\0';
  }
  return(ofd);

error:
  return(-1);
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPAClientNewInput
 *
 * Purpose:	allocate a new input struct for reading data from stdin
 *
 * Return:	input struct, or NULL on error
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
static XPAInput
XPAClientNewInput(XPA xpa)
#else
static XPAInput XPAClientNewInput(xpa)
    XPA xpa;
#endif
{
  XPAInput xnew, inp;

  /* allocate a new record */
  if( (xnew=(XPAInput)xcalloc(1, sizeof(XPAInputRec))) == NULL ){
    return(NULL);
  }
  /* allocate the data buffer */
  xnew->buf = (char *)xmalloc(XPA_BIOSIZE);
  /* this buffer starts (and currently ends) at the current byte count */
  xnew->start = xpa->inpbytes;
  xnew->end = xpa->inpbytes;
  xnew->bytes = 0;

  /* add this input to end of list of input's */
  if( xpa->inphead == NULL ){
    xpa->inphead = xnew;
  }
  else{
    for(inp=xpa->inphead; inp->next!=NULL; inp=inp->next)
      ;
    inp->next = xnew;
  }

  /* return the record struct */
  return(xnew);
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPAClientFreeInput
 *
 * Purpose:	free a input buffer once its been sent to all targets
 *
 * Return:	0 on success, -1 on failure
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
static void
XPAClientFreeInput (XPA xpa, XPAInput inp)
#else
static void XPAClientFreeInput(xpa, inp)
     XPA xpa;
     XPAInput inp;
#endif
{
  XPAInput cur;

  if( !xpa || !inp )
    return;

  if( inp == xpa->inphead ){
    xpa->inphead = inp->next;
  }
  else{
    for(cur=xpa->inphead; cur!=NULL; cur=cur->next){
      if( cur->next == inp ){
	cur->next = inp->next;
	break;
      }
    }
  }

  /* free current record */
  if( inp != NULL ){ 
    if( inp->buf != NULL )
      xfree(inp->buf );
    xfree(inp);
  }
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPAClientFreeAllInputs
 *
 * Purpose:	free remaining input buffers
 *
 * Return:	0 on success, -1 on failure
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
static void
XPAClientFreeAllInputs (XPA xpa)
#else
static void XPAClientFreeAllInputs(xpa)
     XPA xpa;
#endif
{
  XPAInput cur, tmp;

  if( !xpa )
    return;

  for(cur=xpa->inphead; cur!=NULL; ){
    tmp = cur->next;
    XPAClientFreeInput(xpa, cur);
    cur = tmp;
  }
  xpa->inpbytes = 0;
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPAClientProcessInput
 *
 * Purpose:	read input from stdin and store in an input struct
 *
 * Return:	bytes read
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
static int
XPAClientProcessInput(XPA xpa)
#else
static int XPAClientProcessInput(xpa)
    XPA xpa;
#endif
{
  static XPAInput cur=NULL;
  int get, got;

  /* set up next buffer, if necessary */
  for(cur=xpa->inphead; cur!=NULL; cur=cur->next){
    if( cur->bytes < XPA_BIOSIZE )
      break;
  }
  if( cur == NULL ){
    cur = XPAClientNewInput(xpa);
  }

  /* read data from stdin */
  get = MIN(XPA_IOSIZE, XPA_BIOSIZE - cur->bytes);
  if( isatty(xpa->ifd) ){
    got = rdl(xpa->ifd, &(cur->buf[cur->bytes]), get);
  }
  else{
    got = read(xpa->ifd, &(cur->buf[cur->bytes]), get);
  }
  switch(got){
  case -1:
    if( XPAVerbosity() ){
      PERROR(("XPA client read"));
    }
    return(0);
  case 0:
    xpa->ifd = -1;
    FPRINTF((stderr, "%sXPAClientProcessInput: signalling EOF\n", _sp));
    break;
  default:
    break;
  }
  cur->bytes += got;
  cur->end += got;
  xpa->inpbytes +=  got;
#ifdef FIXEDBYCYGWIN
#if HAVE_CYGWIN
  /* on non-NT Windows machines, Cygwin select() does not work once a pipe
     gets EOF. It should show the fd ready for reading (and read 0 bytes),
     but does not, so we have to hack a manual check */
  /* GetVersion is a Windows call */
  if( GetVersion() >= 0x80000000L ){
    if( got < get ){
      xpa->ifd = -1;
    }
  }
#endif
#endif

  /* verify to stdout, if necessary */
  if( xpa->client_mode & XPA_CLIENT_VERIFY ){
    fwrite(&(cur->buf[cur->bytes-got]), sizeof(char), got, stdout);
  }

  /* return the number of bytes just read */
  return(got);
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPAClientFree
 *
 * Purpose:	free a client record and remove from list
 *
 * Returns:	none
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
static void 
XPAClientFree (XPA xpa, XPAClient client)
#else
static void XPAClientFree(xpa, client)
     XPA xpa;
     XPAClient client;
#endif
{
  XPAClient cur;

  /* remove from list of xpa's */
  if( xpa->clienthead ){
    if( xpa->clienthead == client ){
      xpa->clienthead = client->next;
    }
    else{
      for(cur=xpa->clienthead; cur!=NULL; cur=cur->next){
	if( cur->next == client ){
	  cur->next = client->next;
	  break;
	}
      }
    }
  }

  if( client->cmdfd >= 0 ){
#if HAVE_CYGWIN
    shutdown(client->cmdfd, SHUT_RDWR);
#endif
    xclose(client->cmdfd);
  }
  if( client->datafd >= 0 ){
#if HAVE_CYGWIN
    shutdown(client->datafd, SHUT_RDWR);
#endif
    xclose(client->datafd);
  }
  if( client->dataname ){
    unlink(client->dataname);
    xfree(client->dataname);
  }
  if( client->method )
    xfree(client->method);
  if( client->info )
    xfree(client->info);
  if( client->xtemplate )
    xfree(client->xtemplate);
  if( client->xclass )
    xfree(client->xclass);
  if( client->name )
    xfree(client->name);
  if( client->id )
    xfree(client->id);
  /* xpaget's fd mode has an alloc'ed bufptr and lenptr */
  if( (client->type == 'g') && (client->mode & XPA_CLIENT_FD) ){
    if( client->bufptr && *(client->bufptr) )
      xfree(*(client->bufptr));
    if( client->bufptr )
      xfree(client->bufptr);
    if( client->lenptr )
      xfree(client->lenptr);
  }
  xfree(client);
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPAClientDataSent
 *
 * Purpose:	data is sent, so close data channel and change status to
 *		signal that we are waiting for the server
 *
 * Returns:	none
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
static void
XPAClientDataSent (XPA xpa, XPAClient client)
#else
static void XPAClientDataSent(xpa, client)
     XPA xpa;
     XPAClient client;
#endif
{
  FPRINTF((stderr, "%sXPAClientDataSent: for cmd %d data %d\n", _sp,
	   client->cmdfd, client->datafd));
  /* close the data channel, which should trigger a result from the server */
  if( client->datafd >= 0 ){
#if HAVE_CYGWIN
    shutdown(client->datafd, SHUT_RDWR);
#endif
    xclose(client->datafd);
    client->datafd = -1;
  }
  /* we are now waiting for the server to complete the calllback */
  client->status = XPA_CLIENT_WAITING;
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPAClientEnd
 *
 * Purpose:	finish up with this client
 *
 * Returns:	error message or null
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
static char *
XPAClientEnd (XPA xpa, XPAClient client)
#else
static char *XPAClientEnd(xpa, client)
     XPA xpa;
     XPAClient client;
#endif
{
  char *error=NULL;
  char *eptr;

  FPRINTF((stderr, "%sXPAClientEnd: for cmd %d data %d\n", _sp,
	   client->cmdfd, client->datafd));
  /* always read the status line -- if we are not ack'ing, we'll get an
     OK from the server before the calllback and we can exit quickly */
  /* don't do this if client is xpainfo and we're not ack'ing */
  if( !((client->type == 'i') && !(client->mode & XPA_CLIENT_ACK)) ){
retry:
    if( XPAGets(NULL, client->cmdfd, errbuf, SZ_LINE, XPALongTimeout()) >0 ){
      FPRINTF((stderr, "%sXPAClientEnd: read %s\n", _sp, errbuf));
      eptr = errbuf;
      /* this should never happen */
      if( *eptr == '?' ){
	snprintf(errbuf, SZ_LINE, 
		 "XPA$WARNING: protocol mismatch - missing id\n%s", eptr);
	error = NULL;
      }
      else{
	/* make sure we are dealing with a proper message */
	if( strncmp(eptr, client->id, strlen(client->id)) ){
	  if( XPAVerbosity() > 1 ){
	    fprintf(stderr,
		    "XPA$WARNING: ignoring out of sync server message:\n");
	    fprintf(stderr, "%s", errbuf);
	  }
	  goto retry;
	}
	/* go past id */
	eptr += strlen(client->id);
	while( isspace((int)*eptr) ) eptr++;
	if( !strncmp(eptr, "XPA$OK", 6) ){
	  error = NULL;
	}
	else{
	  error = eptr;
	}
      }
    }
    else{
      if( XPAVerbosity() > 1 ){
	fprintf(stderr,
		"XPA$WARNING: no reply from server callback (assuming OK)\n");
      }
      error = NULL;
    }
  }
  else
    error = NULL;

  /* store the error return */
  if( client->errptr )
    *(client->errptr) = xstrdup(error);

  /* remove this client if we are not meant to persist */
  if( !xpa->persist ){
    XPAClientFree(xpa, client);
  }
  /* otherwise mark as inactive */
  else{
    client->status = XPA_CLIENT_IDLE;
    client->bytes = 0;
  }

  /* return error status */
  return(error);
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPAClientNew
 *
 * Purpose:	allocate a new xpa client
 *
 * Returns:	xpa client struct
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
static XPAClient 
XPAClientNew (XPA xpa, char *mode, char *xtemplate, int type,
	      char *xclass, char *name, char *method, char *info)
#else
static XPAClient XPAClientNew(xpa, mode, xtemplate, type,
			      xclass, name, method, info)
     XPA xpa;
     char *mode;
     char *xtemplate;
     int type;
     char *xclass;
     char *name;
     char *method;
     char *info;
#endif
{
  XPAClient xnew, client;
  struct sockaddr_in sock_in;
#if HAVE_SYS_UN_H
  struct sockaddr_un sock_un;
#endif
  char xmode[SZ_LINE];
  char tbuf[SZ_LINE];
  char amethod[SZ_LINE];
  char *s=NULL;
  unsigned short port;
  unsigned int ip=0;
  int fd;
  int pfd;
  int tries=0;
  int nsproxy=0;
  int keep_alive=1;

  FPRINTF((stderr, "%sXPAClientNew: entering with %s %s %s %s\n", _sp,
	   xclass, name, method, info));

  /* no errors as yet */
  *errbuf = '\0';

  /* look for reuse of xpans fd (used in conjunction with the xpans proxy) */
  *xmode = '\0';
  if( mode ){
    strncpy(xmode, mode, SZ_LINE-1);
    xmode[SZ_LINE-1] = '\0';
  }
  if( keyword(xmode, "nsproxy", tbuf, SZ_LINE) ){
    nsproxy = 1;
    pfd = strtol(tbuf, &s, 0);
    fd = XPAProxyAccept(xpa, XPANSMethod(NULL,2),
			xclass, name, pfd, &ip, &port, amethod);
    /* make sure we got a valid int fd */
    if( fd < 0 ){
      snprintf(errbuf, SZ_LINE,
	       "XPA$ERROR: no response from server on proxyaccept (%s:%s%s)\n",
	       xclass, name, XPATimestamp());
      FPRINTF((stderr, "%sXPAClientNew: %s", _sp, errbuf));
      PERROR(("XPAClientNew"));
      return(NULL);
    }
  }
  /* normal usage: connect to server */
  else{
    switch(XPAMethod(method)){
    case XPA_INET:
again1:
      if( !XPAParseIpPort(method, &ip, &port) )
	return(NULL);
      /* use $localhost over $host (we do not trust host to be correct) */
      if( (ip == gethostip("$host")) && (tries == 0) )
	ip = gethostip("$localhost");
      /* connect to the server before we go further */
      if( (fd = xsocket(AF_INET, SOCK_STREAM, 0)) < 0 ){
	return(NULL);
      }
      setsockopt(fd, SOL_SOCKET, SO_KEEPALIVE,
		 (char *)&keep_alive, sizeof(keep_alive));
      memset((char *)&sock_in, 0, sizeof(sock_in));
      sock_in.sin_family = AF_INET;
      sock_in.sin_addr.s_addr = htonl(ip);
      sock_in.sin_port = htons(port);
      /* make the connection with the server */
      if( connect(fd, (struct sockaddr *)&sock_in, sizeof(sock_in)) <0 ){
	xclose(fd);
	/* if localhost doesn't work, make one try with the host ip */
	/* we also try again just in case there was an odd error such
	   as "permission denied", which we have seen once or twice */
	if( tries < 2 ){
	  tries++;
	  goto again1;
	}
	/* give up */
	else{
	  snprintf(errbuf, SZ_LINE,
		   "XPA$ERROR: no response from server on connect (%s:%s%s)\n",
		   xclass, name, XPATimestamp());
	  PERROR(("XPAClientNew"));
	  return(NULL);
	}
      }
      /* make sure we close on exec */
      xfcntl(fd, F_SETFD, FD_CLOEXEC);
      FPRINTF((stderr, "%sXPAClientNew: inet connect returns fd %d\n", 
	       _sp, fd));
      break;
#if HAVE_SYS_UN_H
    case XPA_UNIX:
again2:
      /* open a socket and fill in socket information */
      if( (fd = xsocket(AF_UNIX, SOCK_STREAM, 0)) < 0 ){
	return(NULL);
      }
      setsockopt(fd, SOL_SOCKET, SO_KEEPALIVE,
		 (char *)&keep_alive, sizeof(keep_alive));
      memset((char *)&sock_un, 0, sizeof(sock_un));
      sock_un.sun_family = AF_UNIX;
      strcpy(sock_un.sun_path, method);
      /* make the connection with the server */
      if( connect(fd, (struct sockaddr *)&sock_un, sizeof(sock_un)) <0 ){
	xclose(fd);
	/* Unix sockets get ECONNREFUSED when the listen queue is full,
	   so we try a few times to give the server a chance to recover */
	if( (xerrno == ECONNREFUSED) && (tries < XPA_RETRIES) ){
	  tries++;
	  XPASleep(10);
	  goto again2;
	}
	/* give up */
	else{
	  snprintf(errbuf, SZ_LINE,
		   "XPA$ERROR: no response from server on connect (%s:%s%s)\n",
		   xclass, name, XPATimestamp());
	  PERROR(("XPAClientNew"));
	  return(NULL);
	}
      }
      /* make sure we close on exec */
      xfcntl(fd, F_SETFD, FD_CLOEXEC);
      FPRINTF((stderr, "%sXPAClientNew: unix connect returns fd %d\n",
	       _sp, fd));
      break;
#endif
    default:
      return(NULL);
    }
    strncpy(amethod, method, SZ_LINE-1);
    amethod[SZ_LINE-1] = '\0';
  }

  /* allocate new send record */
  if( (xnew=(XPAClient)xcalloc(1, sizeof(XPAClientRec))) == NULL ){
    xclose(fd);
    return(NULL);
  }

  /* fill in the blanks */
  xnew->xtemplate = xstrdup(xtemplate);
  xnew->type = type;
  xnew->cmdfd = fd;
  xnew->datafd = -1;
  xnew->xclass = xstrdup(xclass);
  xnew->name = xstrdup(name);
  xnew->method = xstrdup(amethod);
  xnew->info = xstrdup(info);
  xnew->ip = ip;
  xnew->nsproxy = nsproxy;
  xnew->status = XPA_CLIENT_ACTIVE;

  /* now that we have a valid client, add to list */
  if( xpa->clienthead == NULL ){
    xpa->clienthead = xnew;
  }
  else{
    for(client=xpa->clienthead; client->next!=NULL; client=client->next)
      ;
    client->next = xnew;
  }
  FPRINTF((stderr, "%sXPAClientNew: new fd %d\n", _sp, xnew->cmdfd));
  /* return the good news */
  return(xnew);
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPAClientAddSelect
 *
 * Purpose:	add one or more xpa client sockets to the select flags
 *
 * Return:	number of clients that were added to the select flags
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
int 
XPAClientAddSelect (XPA xpa, fd_set *readfdsptr, fd_set *writefdsptr)
#else
int XPAClientAddSelect(xpa, readfdsptr, writefdsptr)
     XPA xpa;
     fd_set *readfdsptr;
     fd_set *writefdsptr;
#endif
{
  XPAClient client;
  int got=0;
  int loop=0;

  /* better have some place to set the flags */
  if( readfdsptr == NULL )
    return(0);

  /* if no xpa is specified, do them all */
  if( xpa == NULL ){
    if( xpaclienthead == NULL ) return(0);
    xpa = xpaclienthead;
    loop = 1;
  }

loop:
  /* set select flags for all clients */
  for(client=xpa->clienthead; client!=NULL; client=client->next){
    /* if this client is processing */
    if( (client->status == XPA_CLIENT_PROCESSING) && (client->datafd >= 0) ){
      if( client->type == 'g' ){
	FPRINTF((stderr, "%sXPAClientAddSelect(get): adding fd %d\n", _sp,
		 client->datafd));
	FD_SET(client->datafd, readfdsptr);
	got++;
      }
      else if( client->type == 's' ){
	FPRINTF((stderr, "%sXPAClientAddSelect(set): adding fd %d\n", _sp,
		 client->datafd));
	FD_SET(client->datafd, writefdsptr);
	got++;
      }
    }
    /* if this client is waiting */
    else if( (client->status == XPA_CLIENT_WAITING) && (client->cmdfd >= 0) ){
      FPRINTF((stderr, "%sXPAClientAddSelect(waiting): adding fd %d\n", _sp,
	       client->cmdfd));
      FD_SET(client->cmdfd, readfdsptr);
      got++;
    }
  }
  /* loop if necessary */
  if( loop && (xpa=xpa->next) ) goto loop;
  /* return the news */
  return(got);
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPAClientGet
 *
 * Purpose:	process an xpaget request for a given client
 *
 * Return:	0 on success, -1 on failure
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
static int 
XPAClientGet (XPA xpa, XPAClient client)
#else
static int XPAClientGet(xpa, client)
     XPA xpa;
     XPAClient client;
#endif
{
  int status;
  char tbuf[SZ_LINE];

  /* allocate the first buffer, if necessary */
  if( *(client->bufptr) == NULL ){
    client->bufsize = XPA_IOSIZE;
    *(client->bufptr) = (char *)xmalloc(client->bufsize);
    *(client->lenptr) = 0;
  }
  if( (*(client->lenptr) + XPA_IOSIZE) > client->bufsize ){
    client->bufsize += (XPA_IOSIZE*10);
    *(client->bufptr) = (char *)xrealloc(*(client->bufptr), client->bufsize);
  }

  /* now retrieve the data from the server */
  status = recv(client->datafd, *(client->bufptr) + *(client->lenptr),
		XPA_IOSIZE, 0);
  /* status < 0 means error */
  switch(status){
  /* error */
  case -1:
    /* socket would block */
    if((xerrno == EINPROGRESS) || (xerrno == EWOULDBLOCK)){
      return(0);
    }
    /* clean up after error */
    if( *(client->bufptr) ){
      xfree(*(client->bufptr));
      *(client->bufptr) = NULL;
      client->bufsize = 0;
    }
    *(client->lenptr) = 0;
    XPAClientDataSent(xpa, client);
#ifdef OLD
    (void)XPAClientEnd(xpa, client);
    /* we need to flag some sort of error, if nothing came across */
    if( *(client->errptr) == NULL ){
      *(client->errptr) = xstrdup(
			  "XPA$ERROR: incomplete transmission from server\n");
    }
#endif
    break;
  /* eof */
  case 0:
    /* if we have multiple clients, we now need to write this one */
    if( client->mode & XPA_CLIENT_FD ){
      if( xpa->nclient > 1 ){
	snprintf(tbuf, SZ_LINE, "XPA$BEGIN %s:%s %s\n",
		 client->xclass, client->name, client->method);
	write(client->fd, tbuf, strlen(tbuf));
      }
      write(client->fd, *(client->bufptr), *(client->lenptr));
      if( xpa->nclient > 1 ){
	snprintf(tbuf, SZ_LINE, "XPA$END   %s:%s %s\n",
		 client->xclass, client->name, client->method);
	write(client->fd, tbuf, strlen(tbuf));
      }
      /* we can free buf, since its not being passed back */
      if( *(client->bufptr) ){
	xfree(*(client->bufptr));
	*(client->bufptr) = NULL;
	client->bufsize = 0;
      }
    }
    else{
      /* set final buffer size and put a convenience null at the end */
      if( *(client->bufptr) ){
	client->bufsize = *(client->lenptr)+1;
	*(client->bufptr) = (char *)xrealloc(*(client->bufptr),client->bufsize);
	*(*(client->bufptr)+*(client->lenptr)) = '\0';
      }
    }
    /* for all clients, we need to clean up */
    XPAClientDataSent(xpa, client);
#ifdef OLD
    (void)XPAClientEnd(xpa, client);
#endif
    break;
  /* status > 0: bytes read */
  default:
    *(client->lenptr) += status;
    /* for single client fd mode, we write immediately -- this deals with
       the important case of one client with a large amount of data */
    if( (client->mode & XPA_CLIENT_FD) && (xpa->nclient == 1) ){
      write(client->fd, *(client->bufptr), *(client->lenptr));
      /* reset buf for next read */
      if( *(client->bufptr) ) xfree(*(client->bufptr));
      *(client->bufptr) = NULL;
      *(client->lenptr) = 0;
    }
    break;
  }
  return(status);
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPAClientSet
 *
 * Purpose:	process an xpaset request for a given client
 *
 * Return:	0 on success, -1 on failure
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
static int 
XPAClientSet (XPA xpa, XPAClient client)
#else
static int XPAClientSet(xpa, client)
     XPA xpa;
     XPAClient client;
#endif
{
  int status;
  int left;
  int got;
  int len;
  XPAInput inp;

  if( client->mode & XPA_CLIENT_BUF ){
    while( 1 ){
      len = MIN(XPA_IOSIZE, client->len - client->bytes);
      /* see if we have written it all */
      if( len == 0 ){
	status = 1;
	goto done;
      }
      /* write the next chunk */
      FPRINTF((stderr,
	       "%sXPAClientSet: fd %d sending %lu bytes (%lu - %lu)\n", _sp,
	       client->datafd, (unsigned long)len, 
	       (unsigned long)client->len, (unsigned long)client->bytes));
      got=send(client->datafd, &(client->buf[client->bytes]), len, 0);
      if( got >= 0 ){
	client->bytes += got;
	if( XPALevelGet() >0 )
	  return(got);
      }
      else{
	PERROR(("XPAClientSet"));
	/* check for error */
	if( (xerrno != EWOULDBLOCK) && (xerrno != EAGAIN) ){
	  status = -1;
	  goto done;
	}
	/* write would block, so we return and wait the server */
	else{
	  return(0);
	}
      }
    }
  }
  /* reading from stdin and writing to servers */
  else{
    /* find the input buf that contains the data we need */
    for(inp=xpa->inphead; inp!=NULL; inp=inp->next){
      if( (client->bytes >= inp->start) && (client->bytes < inp->end) ){
	break;
      }
    }
    /* if we can't find a buffer ... */
    if( !inp ){
      /*  ... and we have all the input, we are done */
      if( xpa->ifd < 0 ){
	FPRINTF((stderr, "%sXPAClientSet: all data read\n", _sp));
	status = 1;
	goto done;
      }
      /* ... but there is more input to come, return */
      else{
	return(0);
      }
    }
    /* optimization: don't write a buffer until its full (or until eof) */
    if( (xpa->ifd >=0) && (inp->bytes < XPA_BIOSIZE) ){
      return(0);
    }

    /* write bytes until we would block or until end of this buffer, etc */
    while( 1 ){
      len = MIN(XPA_IOSIZE, inp->end - client->bytes);
      FPRINTF((stderr, "%sXPAClientSet: has %lu=min(%d,(%lu-%lu)) [%d]\n",
	       _sp, (unsigned long)len, XPA_IOSIZE, 
	       (unsigned long)inp->end, (unsigned long)client->bytes, 
	       client->status));
      /* if we are done with this buffer, just return */
      if( (client->status == XPA_CLIENT_PROCESSING) && (len <=0) ){
	/* see if everyone else is done with this buffer as well,
	   in which case we can free it */
	left = 0;
	for(client=xpa->clienthead; client!=NULL; client=client->next){
	  if( (client->type != 's') || !(client->mode & XPA_CLIENT_FD) )
	    continue;
	  /* in order to be totally written out, the following must be true:
	   * 1. send->bytes must be past the end of this buffer
	   *  and
	   * 2. this buffer must be filled or else we hit eof
	   */
	  FPRINTF((stderr,
		   "%sXPAClientSet: %lu>=%lu && ((%lu>=%d) or %d<0)) .. ",
		   _sp, client->bytes, (unsigned long)inp->end, 
		   (unsigned long)inp->bytes, XPA_BIOSIZE, 
		   xpa->ifd));
	  if( (client->bytes >= inp->end) &&
	      ((inp->bytes >= XPA_BIOSIZE) || (xpa->ifd < 0)) ){
	    /* buffer complete written */
	    FPRINTF((stderr, "%sEOF (%lu)\n", 
		     _sp, (unsigned long)xpa->inpbytes));
	    ;
	  }
	  else{
	    FPRINTF((stderr, "%s\n", _sp));
	    /* buffer not complete written */
	    left++;
	    break;
	  }
	}
	/* if nothing is left, we can free this input struct */
	if( !left ){
	  XPAClientFreeInput(xpa, inp);
	}
	return(0);
      }
      /* write to the server */
      FPRINTF((stderr,
	       "%sXPAClientSet: fd %d sending %lu bytes (%lu):\n", _sp,
	       client->datafd, 
	       (unsigned long)len, (unsigned long)client->bytes));
      got = send(client->datafd, &(inp->buf[client->bytes-inp->start]),len,0);
      /* check for success */
      if( got >= 0 ){
	/* update the number of bytes we wrote */
	client->bytes += got;
	FPRINTF((stderr, "%sXPAClientSet: sent %lu bytes (total is %lu)\n",
		_sp, (unsigned long)got, (unsigned long)client->bytes));
	/* go back for more */
	if( XPALevelGet() >0 )
	  return(got);
	else
	  continue;
      }
      /* check for error */
      else{
	PERROR(("XPAClientSet"));
	/* anything but a "would block" error is bad */
	if( (xerrno != EWOULDBLOCK) && (xerrno != EAGAIN) ){
	  status = -1;
	  goto done;
	}
	/* write would block, so we return and wait the server */
	else{
	  FPRINTF((stderr, "%sXPAClientSet: waiting for more data\n", _sp));
	  return(0);
	}
      }
    }
  }

done:
  XPAClientDataSent(xpa, client);
#ifdef OLD
  (void)XPAClientEnd(xpa, client);
#endif
  return(status);
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPAClientProcessSelect
 *
 * Purpose:	process xpas that have pending reads or writes
 *
 * Return:	number of xpas processed
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
int 
XPAClientProcessSelect (XPA xpa,
			fd_set *readfdsptr, fd_set *writefdsptr, int maxreq)
#else
int XPAClientProcessSelect(xpa, readfdsptr, writefdsptr, maxreq)
     XPA xpa;
     fd_set *readfdsptr;
     fd_set *writefdsptr;
     int maxreq;
#endif
{
  int got=0;
  int loop=0;
  XPAClient client;

  /* <= 0 means do all of them */
  if( maxreq < 0 ){
    maxreq = 0;
  }

  /* if no xpa is specified, do them all */
  if( xpa == NULL ){
    if( xpaclienthead == NULL ) return(0);
    xpa = xpaclienthead;
    loop = 1;
  }

loop:
  /* first process any new input before we write output */
  if( xfd_isset_stdin(xpa->ifd, readfdsptr) ){
    xfd_clr_stdin(xpa->ifd, readfdsptr);
    XPAClientProcessInput(xpa);
  }
  /* look at all clients */
again:
  for(client=xpa->clienthead; client!=NULL; client=client->next){
    /* if we are processing */
    if( (client->status == XPA_CLIENT_PROCESSING) && (client->datafd>=0) ){
      /* then handle new requests */
      if((client->type == 'g') && FD_ISSET(client->datafd, readfdsptr)){
	FD_CLR(client->datafd, readfdsptr);
	XPAClientGet(xpa, client);
	got++;
	if( maxreq && (got >= maxreq) ) return(got);
	goto again;
      }
      else if((client->type == 's') && FD_ISSET(client->datafd, writefdsptr)){
	FD_CLR(client->datafd, writefdsptr);
	/* if the return is > 0, we completed the send */
	if( XPAClientSet(xpa, client) > 0 )
	  got++;
	if( maxreq && (got >= maxreq) ) return(got);
	goto again;
      }
    }
    /* if this client is waiting */
    else if( (client->status == XPA_CLIENT_WAITING) && (client->cmdfd >= 0) ){
      if( FD_ISSET(client->cmdfd, readfdsptr)){
	FD_CLR(client->cmdfd, readfdsptr);
	XPAClientEnd(xpa, client);
	got++;
	if( maxreq && (got >= maxreq) ) return(got);
	goto again;
      }
    }
  }
  /* loop if necessary */
  if( loop && (xpa=xpa->next) ) goto loop;
  /* return the news */
  return(got);
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPAClientLoop
 *
 * Purpose:	non-X programs event loop for handling XPA client events
 *
 * Returns:	none
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
static int
XPAClientLoop (XPA xpa, int mode)
#else
static int XPAClientLoop(xpa, mode)
     XPA xpa;
     int mode;
#endif
{
  int got=0;
  int sgot;
  int doxpa=1;
  int ltimeout;
  char *s=NULL;
  fd_set readfds;
  fd_set writefds;
  static int width=0;
  struct timeval tv;
  struct timeval *tvp;

  /* set width once */
  if( width == 0 ){
    width = FD_SETSIZE;
  }
  /* allow environment to turn off xpa server processing in client loop */
  if( (s=getenv("XPA_CLIENT_DOXPA")) && isfalse(s) ){
    doxpa = 0;
  }
  ltimeout = XPALongTimeout();
  FD_ZERO(&readfds);
  FD_ZERO(&writefds);
  while( XPAClientAddSelect(xpa, &readfds, &writefds) ){
    /* add other XPA's and process them as we process the client */
    if( (mode & XPA_CLIENT_SEL_XPA) && doxpa ){
      FPRINTF((stderr, "%sXPAClientLoop: will handle server reqs ...\n", _sp));
      XPAAddSelect(NULL, &readfds);
    }
    /* hopefully, a server will respond in a finite amount of time */
    if( ltimeout > 0 ){
      tv.tv_sec = ltimeout;
      tv.tv_usec = 0;
      tvp = &tv;
    }
    /* wait forever, if necessary */
    else{
      tvp = NULL;
    }
    /* add stdin to select, if there is one */
    if( xpa->ifd >= 0 ){
      xfd_set_stdin(xpa->ifd, &readfds);
#if HAVE_MINGW32
      /* BUT: for windows, we can't add stdin to select and therefore we 
	 must set a short timeout and look manually */
      tv.tv_sec = 0;
      tv.tv_usec = 10000;
      /* this is the number of window iterations we will perform */
      if( ltimeout > 0 )
	ltimeout *= 100;
      tvp = &tv;
#endif
    }
    /* wait for a server to respond */
    FPRINTF((stderr, "%sXPAClientLoop: waiting on select() ...\n", _sp));
    sgot = xselect(width, &readfds, &writefds, NULL, tvp);
    FPRINTF((stderr, "%sXPAClientLoop: select returns: %d\n", _sp, sgot));
    /* error -- what should we do? */
    if( sgot < 0 ){
      if( xerrno == EINTR ){
	FD_ZERO(&readfds);
	FD_ZERO(&writefds);
	continue;
      }
      if( XPAVerbosity() ){
	perror("XPAClientLoop() select");
      }
      exit(1);
    }
    /* timed out -- no one responded */
    else if( sgot == 0 ){
#if HAVE_MINGW32
      if( xpa->ifd >= 0 ){
	if( ltimeout > 0 ){
	  if( --ltimeout <= 0 )
	    break;
	}
      }
      else{
	break;
      }
#else
      break;
#endif
    }
    else{
      got += XPAClientProcessSelect(xpa, &readfds, &writefds, 0);
      if( (mode & XPA_CLIENT_SEL_XPA) && doxpa ){
	got += XPAProcessSelect(&readfds, 0);
      }
    }
    FD_ZERO(&readfds);
    FD_ZERO(&writefds);
  }
  return(got);
}

#if HAVE_MINGW32==0
/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPAClientLoopFork
 *
 * Purpose:	non-X programs forked event loop for handling XPA client events
 *
 * Returns:	number of clients "processed"
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
static int
XPAClientLoopFork (XPA xpa, int mode)
#else
static int XPAClientLoopFork(xpa, mode)
     XPA xpa;
     int mode;
#endif
{
  XPAClient client, tclient;
  pid_t pid;
  int got;
  int fd[2];
  char active=1;
#ifndef USE_DOUBLE_FORK
  struct sigaction act;
  /* set up the signal handler to reap children (to avoid zombies) */
  act.sa_handler = sig_chld;
  sigemptyset(&act.sa_mask);
  act.sa_flags = 0;
#ifdef SA_RESTART
  act.sa_flags |= SA_RESTART;
#endif
#ifdef SA_NOCLDWAIT
  act.sa_flags |= SA_NOCLDWAIT;
#endif
  sigaction(SIGCHLD, &act, NULL);
#endif

  if( pipe(fd) < 0 ){
    got = 0;
  }
  else if( (pid = fork()) < 0 ){
    close(fd[0]);
    close(fd[1]);
    got=0;
  }
  else if( pid == 0 ){	/* child */
    /* child write to parent that he is active */
    close(fd[0]);
    write(fd[1], &active, 1);
    close(fd[1]);
#ifdef USE_DOUBLE_FORK
    /* second fork prevents zombies:
       when child/parent exits, second child is inherited 
       by init and thus is not a child of original parent */
    if( (pid = fork()) >= 0 ){
      /* child/parent exits */
      if( pid > 0 )
	exit(0);
      /* new child goes on under init ... */
    }
#endif
    /* enter the main loop and process */
    XPAIOCallsXPA(0);
    XPAClientLoop(xpa, mode);
    exit(0);
  } else {		/* parent */
    /* parent waits for child to wake up */
    close(fd[1]);
    read(fd[0], &active, 1);
    close(fd[0]);
#ifdef USE_DOUBLE_FORK
    /* for double fork, also wait for intermediate process to exit */
    waitpid(pid, NULL, 0);
#endif
    /* fake end of clients */
    for(got=0, client=xpa->clienthead; client!=NULL; ){
      got++;
      tclient = client->next;
      if( (client->status == XPA_CLIENT_PROCESSING) && (client->datafd >=0) ){
#if HAVE_CYGWIN
	/* In Cygwin, we call shutdown (as well as close) to avoid Windows 
	   problems.  The parent can't do this since the child is using the
	   sockets, so we just close the sockets explicitly here */
	xclose(client->datafd);
	client->datafd = -1;
	if( !xpa->persist ){
	  xclose(client->cmdfd);
	  client->cmdfd = -1;
	}
#endif
	client->errptr = NULL;
	/* remove this client if we are not meant to persist */
	if( !xpa->persist ){
	  XPAClientFree(xpa, client);
	}
	/* otherwise mark as inactive */
	else{
	  client->status = XPA_CLIENT_IDLE;
	  client->bytes = 0;
	}
      }
      client = tclient;
    }
  }
  return(got);
}
#endif

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPAClientConnect
 *
 * Purpose:	go to name service and get new names, merge with old,
 *		and connect to servers
 *
 * Returns:	number of connections
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
static int 
XPAClientConnect (XPA xpa, char *mode, char *xtemplate, int type)
#else
static int XPAClientConnect(xpa, mode, xtemplate, type)
     XPA xpa;
     char *mode;
     char *xtemplate;
     int type;
#endif
{
  int i;
  int n;
  int got;
  int lp=0;
  int total=0;
  char **xclasses;
  char **names;
  char **methods;
  char **infos;
  char xtype[2];
  char xmode[SZ_LINE];
  char tbuf[SZ_LINE];
  char lbuf[SZ_LINE];
  XPAClient client;

  /* do some initialization */
  XPAInitEnv();

  /* make sure we have a target */
  if( !xtemplate || !*xtemplate )
    return(0);

  /* make a string out of the type for the lookup */
  xtype[0] = type;
  xtype[1] = '\0';

  /* reset the number of clients we are processing */
  xpa->nclient = 0;

  /* look for specific proxy info */
  *xmode = '\0';
  if( mode ){
    strncpy(xmode, mode, SZ_LINE-1);
    xmode[SZ_LINE-1] = '\0';
  }
  if( keyword(xmode, "ns", lbuf, SZ_LINE) ){
    FPRINTF((stderr, "%sXPAClientConnect: using ns info: %s\n", _sp, lbuf));
    newdtable("(),");
    xclasses   = (char **)xmalloc(sizeof(char *));
    names      = (char **)xmalloc(sizeof(char *));
    methods    = (char **)xmalloc(sizeof(char *));
    infos      = (char **)xmalloc(sizeof(char *));
    if( word(lbuf, tbuf, &lp) )
      xclasses[0] = xstrdup(tbuf);
    if( word(lbuf, tbuf, &lp) )
      names[0]   = xstrdup(tbuf);
    if( word(lbuf, tbuf, &lp) )
      methods[0] = xstrdup(tbuf);
    infos[0] = xstrdup(XPA_DEF_CLIENT_INFO);
    n = 1;
    freedtable();
  }
  /* else ask xpans for access points matching the template */
  else{
    n = XPANSLookup(xpa, 
		    xtemplate, xtype, &xclasses, &names, &methods, &infos);
  }
  /* mark existing clients who do not match this template */
  for(got=0, client=xpa->clienthead; client !=NULL; client=client->next){
    for(i=0; i<n; i++){
      if( (client->type  == type)			&&
	  (!strcmp(client->xclass, xclasses[i]))	&&
	  (!strcmp(client->name,   names[i]))		&&
	  (!strcmp(client->method, methods[i]))		&&
	  (!strcmp(client->info,   infos[i]))		){
	got++;
      }
    }
    /* don't unmark if its a different type -- someone else might be active */
    if( !got && (client->type == type) ){
      client->status = XPA_CLIENT_IDLE;
    }
  }
  /* add new clients for this type */
  for(i=0; i<n; i++){
    for(got=0, client=xpa->clienthead; client !=NULL; client=client->next){
      if( (client->type  == type)			&&
	  (!strcmp(client->xclass, xclasses[i]))	&&
	  (!strcmp(client->name,   names[i]))		&&
	  (!strcmp(client->method, methods[i]))		&&
	  (!strcmp(client->info,   infos[i]))		){
	/* might have to change the template */
	if( strcmp(client->xtemplate, xtemplate) ){
	  xfree(client->xtemplate);
	  client->xtemplate = xstrdup(xtemplate);
	}
	client->status = XPA_CLIENT_ACTIVE;
	got++;
	total++;
	FPRINTF((stderr, "%sXPAClientConnect: existing match: %s %s %s\n",
		_sp, xclasses[i], names[i], methods[i]));
	break;
      }
    }
    if( !got ){
      FPRINTF((stderr, "%sXPAClientConnect: calls XPAClientNew for %s:%s %s\n",
	       _sp, xclasses[i], names[i], methods[i]));
      if( XPAClientNew(xpa, mode, xtemplate, type,
		       xclasses[i], names[i], methods[i], infos[i]) )
	total++;
    }
    /* done with these strings */
    xfree(xclasses[i]);
    xfree(names[i]);
    xfree(methods[i]);
    xfree(infos[i]);
  }
  /* free up arrays alloc'ed by names server */
  if( n > 0 ){
    xfree(xclasses);
    xfree(names);
    xfree(methods);
    xfree(infos);
  }
  return(total);
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPAClientStart
 *
 * Purpose:	send init string to server and perform other authentication
 *		tasks
 *
 * Returns:	0 if success, -1 otherwise
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
static int 
XPAClientStart (XPA xpa, XPAClient client, char *paramlist, char *mode)
#else
static int XPAClientStart(xpa, client, paramlist, mode)
     XPA xpa;
     XPAClient client;
     char *paramlist;
     char *mode;
#endif
{
  int fd=0;
  int lp=0;
  int flags;
  int tries=0;
  int dmode=0;
  int keep_alive=1;
  unsigned int ip=0;
  unsigned short port;
  char tbuf[SZ_LINE];
  char tbuf2[SZ_LINE];
  char lbuf[SZ_LINE];
  char *cmd=NULL;
  char *method=NULL;
  struct sockaddr_in sock_in;
#if HAVE_SYS_UN_H
  struct sockaddr_un sock_un;
#endif

  switch(client->type){
  case 'a':
    cmd = "xpaaccess";
    break;
  case 'g':
    cmd = "xpaget";
    break;
  case 'i':
    cmd = "xpainfo";
    break;
  case 's':
    cmd = "xpaset";
    break;
  }

  /* get mode flags */
  XPAMode(mode, &(client->mode), "ack", XPA_CLIENT_ACK, 1);
  if( client->type == 's' )
    XPAMode(mode, &(xpa->client_mode), "verify", XPA_CLIENT_VERIFY, 0);
  /* package up and send the initialization message */
  strcpy(lbuf, cmd);
  /* set and save the id value */
  snprintf(tbuf, SZ_LINE, "%c%d", client->type, id++);
  if( client->id ) xfree(client->id);
  client->id = xstrdup(tbuf);
  /* if we are using the xpans proxy, we will want to call
     accept() (server calls connect()) for the data channel */
  if( client->nsproxy )
    strcat(lbuf, " -a");
  /* set the value of the client big-endian-ness */
  snprintf(tbuf, SZ_LINE, " -e %s", XPAEndian() ? "big" : "little");
  strcat(lbuf, tbuf);
  snprintf(tbuf, SZ_LINE, " -i %s", client->id);
  strcat(lbuf, tbuf);
  if( !(client->mode & XPA_CLIENT_ACK) )
    strcat(lbuf, " -n");
  if( strcmp(client->info, XPA_DEF_CLIENT_INFO) ){
    snprintf(tbuf, SZ_LINE, " -p %s", client->info);
    strcat(lbuf, tbuf);
  }
  snprintf(tbuf, SZ_LINE, " %s:%s", client->xclass, client->name);
  strcat(lbuf, tbuf);
  if( paramlist && *paramlist ){
    strcat(lbuf, " ");
    strncat(lbuf, paramlist, MAX(0,(int)(SZ_LINE-(int)strlen(lbuf)-2)));
  }
  strcat(lbuf, "\n");
  FPRINTF((stderr, "%sXPAClientStart: fd %d sends:\n%s",
	   _sp, client->cmdfd, lbuf));
  if( XPAPuts(NULL, client->cmdfd, lbuf, XPAShortTimeout()) <= 0 ){
    goto error;
  }

  /* if xpainfo and no ack'ing, we are basically done */
  if( (client->type == 'i') && !(client->mode & XPA_CLIENT_ACK) ){
    goto done;
  }

  /* authentication */
retry:
  lp = 0;
  if( XPAGets(NULL, client->cmdfd, lbuf, SZ_LINE, XPAShortTimeout()) >0 ){
    FPRINTF((stderr, "%sXPAClientStart: fd %d received cmd:\n%s", _sp,
	     client->cmdfd, lbuf));
    /* this should never happen */
    if( !word(lbuf, tbuf, &lp) || (*tbuf == '?') ){
      snprintf(errbuf, SZ_LINE,
	       "XPA$WARNING: Protocol mismatch: id\n%s", lbuf);
      goto error;
    }
    /* make sure we are dealing with a proper message */
    if( strcmp(tbuf, client->id) ){
      FPRINTF((stderr, "%sXPA$WARNING: ignoring out of sync message:\n", _sp));
      FPRINTF((stderr, "%s", lbuf));
      if( XPAVerbosity() > 1 ){
	fprintf(stderr, "XPA$WARNING: ignoring out of sync server message:\n");
	fprintf(stderr, "%s", lbuf);
      }
      goto retry;
    }

    /* this should never happen */
    if( !word(lbuf, tbuf, &lp) ){
      snprintf(errbuf, SZ_LINE, "XPA$WARNING: missing BUF request\n%s", lbuf);
      goto error;
    }
    if( !strcmp(tbuf, "XPA$NODATA") || !strcmp(tbuf, "XPA$NOBUF") ){
      xpa->nclient += 1;
      goto started;
    }
    /* support 2.2 (DATA) and 2.0,2.1 (BUF) */
    else if( !strcmp(tbuf, "XPA$DATA") || !strcmp(tbuf, "XPA$BUF") ){
      if( !strcmp(tbuf, "XPA$DATA") ){
	dmode |= DATA_DATA;
	if( !word(lbuf, tbuf, &lp) ){
	  snprintf(errbuf, SZ_LINE,
		   "XPA$WARNING: missing DATA request type\n%s", lbuf);
	  goto error;
	}
	if( !strcmp(tbuf, "connect") ){
	  method = client->method;
	  dmode |= DATA_CONNECT;
	}
	else if( !strcmp(tbuf, "accept") ){
	  method = client->method;
	  dmode |= DATA_ACCEPT;
	}
	else{
	  snprintf(errbuf, SZ_LINE,
		  "XPA$WARNING: invalid data connection request: %s (%s:%s)\n",
		  tbuf, client->xclass, client->name);
	  goto error;
	}
      }
      else if( !strcmp(tbuf, "XPA$BUF") ){
	if( !word(lbuf, tbuf, &lp) ){
	  snprintf(errbuf, SZ_LINE,
		   "XPA$ERROR: missing data buffer method (%s:%s%s)\n",
		   client->xclass, client->name, XPATimestamp());
	  goto error;
	}
	method = tbuf;
	dmode |= DATA_CONNECT;
      }
      /* handle connect-type requests */
      if( dmode & DATA_CONNECT ){
	switch(XPAMethod(method)){
	case XPA_INET:
	  XPAParseIpPort(method, &ip, &port);
	  /* connect to the server before we go further */
	  if( (fd = xsocket(AF_INET, SOCK_STREAM, 0)) < 0 ){
	    snprintf(errbuf, SZ_LINE,
		     "XPA$ERROR: bad socket for data chan (%s:%s%s)\n",
		     client->xclass, client->name, XPATimestamp());
	    if( XPAVerbosity() ){
	      perror("XPA client socket");
	    }
	    goto error;
	  }
	  setsockopt(fd, SOL_SOCKET, SO_KEEPALIVE,
		     (char *)&keep_alive, sizeof(keep_alive));
	  memset((char *)&sock_in, 0, sizeof(sock_in));
	  sock_in.sin_family = AF_INET;
	  /* connect using the same ip we used for the command channel
	     (i.e., could be localhost) */
	  sock_in.sin_addr.s_addr = htonl(client->ip);
	  sock_in.sin_port = htons(port);
	  FPRINTF((stderr,
		   "%sXPAClientStart: attempting dchan connect: %s\n",
		   _sp, method));
	  if( connect(fd, (struct sockaddr *)&sock_in, sizeof(sock_in)) < 0 ){
	    PERROR(("dchan connect"));
	    snprintf(errbuf, SZ_LINE,
		   "XPA$ERROR: can't connect to data chan (%s:%s%s)\n",
		   client->xclass, client->name, XPATimestamp());
	    if( XPAVerbosity() ){
	      perror("XPA client connect");
	    }
	    xclose(fd);
	    goto error;
	  }
	  break;
#if HAVE_SYS_UN_H
	case XPA_UNIX:
again:
	  /* open a socket and fill in socket information */
	  if( (fd = xsocket(AF_UNIX, SOCK_STREAM, 0)) < 0 ){
	    snprintf(errbuf, SZ_LINE,
		     "XPA$ERROR: bad socket for data chan (%s:%s%s)\n",
		     client->xclass, client->name, XPATimestamp());
	    if( XPAVerbosity() ){
	      perror("XPA client socket");
	    }
	    goto error;
	  }
	  setsockopt(fd, SOL_SOCKET, SO_KEEPALIVE,
		     (char *)&keep_alive, sizeof(keep_alive));
	  memset((char *)&sock_un, 0, sizeof(sock_un));
	  sock_un.sun_family = AF_UNIX;
	  strcpy(sock_un.sun_path, method);
	  FPRINTF((stderr,
		   "%sXPAClientStart: attempting dchan connect: %s\n",
		   _sp, method));
	  if( connect(fd, (struct sockaddr *)&sock_un, sizeof(sock_un)) < 0 ){
	    PERROR(("dchan connect"));
	    xclose(fd);
	    if( (xerrno == ECONNREFUSED) && (tries < XPA_RETRIES) ){
	      tries++;
	      xclose(fd);
	      XPASleep(10);
	      goto again;
	    }
	    /* give up */
	    else{
	      snprintf(errbuf, SZ_LINE,
		  "XPA$ERROR: can't connect to data chan (%s:%s%s)\n",
		  client->xclass, client->name, XPATimestamp());
	      if( XPAVerbosity() ){
		perror("XPA client connect");
	      }
	      goto error;
	    }
	  }
	  break;
#endif
	default:
	  snprintf(errbuf, SZ_LINE,
		   "XPA$ERROR: unknown connection method (%s:%s%s)\n",
		   client->xclass, client->name, XPATimestamp());
	  goto error;
	}
      }
      /* handle "doaccept" requests */
      else if( dmode & DATA_ACCEPT ){
	fd = XPAProxyAccept(xpa, XPANSMethod(NULL,2),
			    client->xclass, client->name, client->cmdfd,
			    NULL, NULL, tbuf2);
	if( fd < 0 ){
	  snprintf(errbuf, SZ_LINE,
		   "XPA$ERROR: can't connect to proxy server (%s:%s%s)\n",
		   client->xclass, client->name, XPATimestamp());
	  goto error;
	}
	else if( *tbuf2 ){
	  client->dataname = xstrdup(tbuf2);
	}
      }

      /* common code for either type of data connect request */
      client->datafd = fd;
      /* make sure we close on exec */
      xfcntl(client->datafd, F_SETFD, FD_CLOEXEC);
      /* for senders, set to no block mode */
      if( client->type == 's' ){
	/* save state and set in non-blocking mode */
	xfcntl_nonblock(client->datafd, flags);
      }
      xpa->nclient += 1;
      goto started;
    }
    /* handle error message */
    else if( !strcmp(tbuf, "XPA$ERROR") ){
      snprintf(errbuf, SZ_LINE, "%s", &lbuf[lp]);
      goto error;
    }
    /* everything else is an error */
    else{
      snprintf(errbuf, SZ_LINE, "%s", &lbuf[lp]);
      goto error;
    }
  }
  else{
    snprintf(errbuf, SZ_LINE,
	   "XPA$ERROR: no response from server during handshake (%s:%s%s)\n",
	   client->xclass, client->name, XPATimestamp());
    goto error;
  }

error:
  FPRINTF((stderr, "Error in XPAClientStart: %s", errbuf));
  XPAClientFree(xpa, client);
  return(-1);

started:
  /* it is necessary to add this this extra hack/ack between the
     authentication ack and the error return (both from the server)
     to avoid getting Nagle buffered. if we already did an accept,
     however, we already sent a message and need not repeat it */
  if( !(dmode & DATA_ACCEPT) ){
    FPRINTF((stderr, "%sXPAClientStart: %d sending nagle\n",
	     _sp, client->cmdfd));
    XPAPuts(NULL, client->cmdfd, "xpanagle\n", XPAShortTimeout());
  }

  /* write a "data request" to the server on the data channel, supplying
     the arguments to allow the server to find the associated command */
  if( dmode & DATA_DATA ){
    if( !word(lbuf, tbuf, &lp) )
      strcpy(tbuf, "?");
    if( !word(lbuf, tbuf2, &lp) )
      strcpy(tbuf2, "?");
    snprintf(lbuf, SZ_LINE, "xpadata -f %s %s\n", tbuf, tbuf2);
    FPRINTF((stderr,
	     "%sXPAClientStart: sending data channel %d request: %s", _sp,
	     client->datafd, lbuf));
    if( XPAPuts(NULL, client->datafd, lbuf, XPAShortTimeout()) <0 ){
      snprintf(errbuf, SZ_LINE,
	       "XPA$ERROR: unable to issue data request: %s (%s:%s%s)\n", 
	       lbuf, client->xclass, client->name, XPATimestamp());
      FPRINTF((stderr, "%sXPAClientStart: error returned is %s", _sp, errbuf));
      goto error;
    }
  }

done:
  /* mark as active and started */
  client->status = XPA_CLIENT_PROCESSING;
  return(0);
}

/*
 *----------------------------------------------------------------------------
 *
 *
 *			Public Routines
 *
 *
 *----------------------------------------------------------------------------
 */

/*
 *---------------------------------------------------------------------------
 *
 * Routine: 	XPAClientValid
 *
 * Purpose: 	see if the xpa client struct is valid
 *
 * Results:	1 on success, 0 for failure
 *
 *---------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
int 
XPAClientValid (XPA xpa)
#else
int XPAClientValid(xpa)
     XPA xpa;
#endif
{
  return(_XPAValid(xpaclienthead, xpa, "c"));
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPAOpen
 *
 * Purpose:	open a persistent XPA client connection
 *
 * Returns:	XPA struct on success
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
XPA 
XPAOpen (char *mode)
#else
XPA XPAOpen(mode)
     char *mode;
#endif
{
  XPA xpa;

  /* allocate xpa struct */
  if( (xpa = (XPA)xcalloc(1, sizeof(XPARec))) == NULL )
    return(NULL);
  /* add version */
  xpa->version = xstrdup(XPA_VERSION);
  /* mark this as a client struct */
  xpa->type = xstrdup("c");
  /* mark as persistent so we don't destroy at the end of the transfer */
  xpa->persist = 1;

  /* add this xpa to end of list of client xpas */
  XPAListAdd(&xpaclienthead, xpa);

  return(xpa);
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPAClose
 *
 * Purpose:	close a persistent XPA client connection
 *
 * Returns:	none
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
void 
XPAClose (XPA xpa)
#else
void XPAClose(xpa)
     XPA xpa;
#endif
{
  XPAClient client, tclient;
  NS ns, tns;

  /* ignore struct if its not a client struct */
  if( !XPAClientValid(xpa) )
      return;

  /* remove from list of client xpas */
  XPAListDel(&xpaclienthead, xpa);

  /* free each remaining client */
  for(client=xpa->clienthead; client!=NULL; ){
    tclient = client->next;
    XPAClientFree(xpa, client);
    client = tclient;
  }

  /* close down the name server and all of the remotes for this xpa */
  for(ns=xpa->nshead; ns!=NULL; ){
    tns = ns->next;
    XPANSClose(xpa, ns);
    ns = tns;
  }

  /* free string space */
  if( xpa->version )
    xfree(xpa->version);
  if( xpa->type )
    xfree(xpa->type);
  if( xpa )
    xfree(xpa);
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPAGet
 *
 * Purpose:	get XPA values
 *
 * Returns:	0 for success, -1 for failure
 *		len bytes of data returned in buf
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
int 
XPAGet (XPA xpa, char *xtemplate, char *paramlist, char *mode,
	char **bufs, size_t *lens, char **names, char **messages, int n)
#else
int XPAGet(xpa, xtemplate, paramlist, mode, bufs, lens, names, messages, n)
     XPA  xpa; 
     char *xtemplate;
     char *paramlist;
     char *mode;
     char **bufs;
     size_t *lens;
     char **names;
     char **messages;
     int n;
#endif
{
  int i;
  int oldmode=0;
  int xmode=0;
  int type='g';
  int idef=1;
  int got=0;
  char tbuf[SZ_LINE];
  XPAClient client, tclient;

  FPRINTF((stderr, "%sXPAGet: starting\n", _sp));
  /* if not persistent, we need a temp xpa struct;
     (also ignore passed struct if its not a client struct) */
  if( (xpa == NULL) || strcmp(xpa->type, "c")  ){
    if( (xpa = XPAOpen(NULL)) == NULL )
      return(-1);
    /* mark this as not persistent */
    xpa->persist = 0;
  }
  /* save xpa mode -- this call might override */
  else{
    /* make sure we have a valid client handle */
    if( !XPAClientValid(xpa) ){
      if( XPAVerbosity() ){
	fprintf(stderr, "XPA$ERROR: invalid xpa client handle\n");
      }
      return(-1);
    }
    oldmode = xpa->client_mode;
  }

  /* these arrays are required */
  if( (bufs == NULL) || (lens == NULL) ){
    got = -1;
    goto done;
  }

  /* flag that we don't read from stdin */
  xpa->ifd = -1;

  /* zero out the return buffers */
  memset((char *)bufs,  0, ABS(n)*sizeof(char *));
  memset((char *)lens,  0, ABS(n)*sizeof(size_t));
  if( names != NULL )
    memset((char *)names, 0, ABS(n)*sizeof(char *));
  if( messages != NULL )
    memset((char *)messages, 0, ABS(n)*sizeof(char *));

  /* connect to clients and grab data */
  if( XPAClientConnect(xpa, mode, xtemplate, type) >0 ){
    /* retrieve data from n active clients */
    for(client=xpa->clienthead; client!=NULL; ){
      tclient = client->next;
      if( (client->type == type) && (client->status != XPA_CLIENT_IDLE) &&
	  (got<ABS(n)) ){
	if( names != NULL ){
	  snprintf(tbuf, SZ_LINE, "%s:%s %s",
		   client->xclass, client->name, client->method);
	  names[got] = xstrdup(tbuf);
	}
	if( XPAClientStart(xpa, client, paramlist, mode) >=0 ){
	  /* we fill buffers */
	  client->mode |= XPA_CLIENT_BUF;
	  client->bufptr = &(bufs[got]);
	  client->lenptr = &(lens[got]);
	  if( names != NULL )
	    client->nameptr = &(names[got]);
	  if( messages != NULL )
	    client->errptr = &(messages[got]);
	}
	else{
	  if( messages != NULL )
	    messages[got] = xstrdup(errbuf);
	}
	got++;
      }
      client = tclient;
    }
    /* if we have active clients */
    if( got ){
#if HAVE_MINGW32==0
      /* check for loop modes */
      XPAMode(mode, &xmode, "dofork", XPA_CLIENT_SEL_FORK, 0);
      /* dofork implies don't do xpa */
      if( xmode & XPA_CLIENT_SEL_FORK )
	idef = 0;
      XPAMode(mode, &xmode, "doxpa",  XPA_CLIENT_SEL_XPA, idef);
      if( xmode & XPA_CLIENT_SEL_FORK ){
	XPAClientLoopFork(xpa, xmode);
      }
      else{
	/* enter the main loop and process */
	XPAClientLoop(xpa, xmode);
      }
#else
      XPAMode(mode, &xmode, "doxpa",  XPA_CLIENT_SEL_XPA, idef);
      XPAClientLoop(xpa, xmode);
#endif
    }
  }

done:
  /* look for clients who timed out */
  for(i=0, client=xpa->clienthead; client!=NULL; client=client->next){
    if( (client->type == type) && (client->status != XPA_CLIENT_IDLE) &&
	(i<ABS(n)) ){
      i++;
      if( (client->status == XPA_CLIENT_PROCESSING) && ( messages != NULL) ){
	snprintf(errbuf, SZ_LINE,
		 "XPA$ERROR: no response from server callback (%s:%s%s)\n",
		 client->xclass, client->name, XPATimestamp());
	messages[i] = xstrdup(errbuf);
      }
    }
  }
  /* remove this xpa if we are not meant to persist */
  if( xpa && !xpa->persist )
    XPAClose(xpa);
  /* restore xpa mode -- this call might override */
  else
    xpa->client_mode = oldmode;

  /* return number of clients processes (including errors) */
  return(got);
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPAGetFd
 *
 * Purpose:	get XPA values
 *
 * Returns:	0 for success, -1 for failure
 *		len bytes of data returned in buf
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
int 
XPAGetFd (XPA xpa, char *xtemplate, char *paramlist, char *mode,
	      int *fds, char **names, char **messages, int n)
#else
int XPAGetFd(xpa, xtemplate, paramlist, mode, fds, names, messages, n)
     XPA  xpa;
     char *xtemplate;
     char *paramlist;
     int  *fds;
     char *mode;
     char **names;
     char **messages;
     int n;
#endif
{
  int i;
  int oldmode=0;
  int xmode=0;
  int got=0;
  int type='g';
  int idef=1;
  char tbuf[SZ_LINE];
  XPAClient client, tclient;

  FPRINTF((stderr, "%sXPAGetFd: starting\n", _sp));
  /* if not persistent, we need a temp xpa struct;
     (also ignore passed struct if its not a client struct) */
  if( (xpa == NULL) || strcmp(xpa->type, "c")  ){
    if( (xpa = XPAOpen(NULL)) == NULL )
      return(-1);
    /* mark this as not persistent */
    xpa->persist = 0;
  }
  /* save xpa mode -- this call might override */
  else{
    /* make sure we have a valid client handle */
    if( !XPAClientValid(xpa) ){
      if( XPAVerbosity() ){
	fprintf(stderr, "XPA$ERROR: invalid xpa client handle\n");
      }
      return(-1);
    }
    oldmode = xpa->client_mode;
  }

  /* flag that we don't read from stdin */
  xpa->ifd = -1;

  /* zero out the return buffers */
  if( names != NULL )
    memset((char *)names, 0, ABS(n)*sizeof(char *));
  if( messages != NULL )
    memset((char *)messages, 0, ABS(n)*sizeof(char *));

  /* connect to clients and grab data */
  if( XPAClientConnect(xpa, mode, xtemplate, type) > 0 ){
    /* retrieve data from n active clients */
    for(client=xpa->clienthead; client!=NULL; ){
      tclient = client->next;
      if( (client->type == type) && (client->status != XPA_CLIENT_IDLE) &&
	  (got<ABS(n)) ){
	if( names != NULL ){
	  snprintf(tbuf, SZ_LINE, "%s:%s %s",
		   client->xclass, client->name, client->method);
	  names[got] = xstrdup(tbuf);
	}
	if( XPAClientStart(xpa, client, paramlist, mode) >= 0 ){
	  /* we write to an fd */
	  client->mode |= XPA_CLIENT_FD;
	  /* negative value => one channel for all clients */
	  if( n < 0 )
	    client->fd = fds[0];
	  else
	    client->fd = fds[got];
	  client->bufptr = (char **)xcalloc(1, sizeof(char *));
	  client->lenptr = (size_t *)xcalloc(1, sizeof(size_t));
	  if( names != NULL )
	    client->nameptr = &(names[got]);
	  if( messages != NULL )
	    client->errptr = &(messages[got]);
	}
	else{
	  if( messages != NULL )
	    messages[got] = xstrdup(errbuf);
	}
	got++;
      }
      client = tclient;
    }
    /* if we have active clients */
    if( got ){
#if HAVE_MINGW32==0
      /* check for loop modes */
      XPAMode(mode, &xmode, "dofork", XPA_CLIENT_SEL_FORK, 0);
      /* dofork implies don't do xpa */
      if( xmode & XPA_CLIENT_SEL_FORK )
	idef = 0;
      XPAMode(mode, &xmode, "doxpa",  XPA_CLIENT_SEL_XPA, idef);
      if( xmode & XPA_CLIENT_SEL_FORK ){
	XPAClientLoopFork(xpa, xmode);
      }
      else{
	/* enter the main loop and process */
	XPAClientLoop(xpa, xmode);
      }
#else
      XPAMode(mode, &xmode, "doxpa",  XPA_CLIENT_SEL_XPA, idef);
      XPAClientLoop(xpa, xmode);
#endif
    }
  }
  /* look for clients who timed out */
  for(i=0, client=xpa->clienthead; client!=NULL; client=client->next){
    if( (client->type == type) && (client->status != XPA_CLIENT_IDLE) &&
	(i<ABS(n)) ){
      i++;
      if( (client->status == XPA_CLIENT_PROCESSING) && ( messages != NULL) ){
	snprintf(errbuf, SZ_LINE,
		 "XPA$ERROR: no response from server callback (%s:%s%s)\n",
		 client->xclass, client->name, XPATimestamp());
	messages[i] = xstrdup(errbuf);
      }
    }
  }
  /* remove this xpa if we are not meant to persist */
  if( xpa && !xpa->persist )
    XPAClose(xpa);
  /* restore xpa mode -- this call might override */
  else
    xpa->client_mode = oldmode;

  /* return number of clients processes (including errors) */
  return(got);
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPASet
 *
 * Purpose:	set XPA values
 *
 * Returns:	0 for success, -1 for failure
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
int 
XPASet (XPA xpa, char *xtemplate, char *paramlist, char *mode,
	char *buf, size_t len, char **names, char **messages, int n)
#else
int XPASet(xpa, xtemplate, paramlist, mode, buf, len, names, messages, n)
     XPA  xpa;
     char *xtemplate;
     char *paramlist;
     char *mode;
     char *buf;
     size_t len;
     char **names;
     char **messages;
     int n;
#endif
{
  int i;
  int oldmode=0;
  int xmode=0;
  int got=0;
  int type='s';
  int idef=1;
  char tbuf[SZ_LINE];
  XPAClient client, tclient;

  FPRINTF((stderr, "%sXPASet: starting\n", _sp));
  /* if not persistent, we need a temp xpa struct;
     (also ignore passed struct if its not a client struct) */
  if( (xpa == NULL) || strcmp(xpa->type, "c")  ){
    if( (xpa = XPAOpen(NULL)) == NULL )
      return(-1);
    /* mark this as not persistent */
    xpa->persist = 0;
  }
  /* save xpa mode -- this call might override */
  else{
    /* make sure we have a valid client handle */
    if( !XPAClientValid(xpa) ){
      if( XPAVerbosity() ){
	fprintf(stderr, "XPA$ERROR: invalid xpa client handle\n");
      }
      return(-1);
    }
    oldmode = xpa->client_mode;
  }

  /* flag that we don't read from stdin */
  xpa->ifd = -1;

  /* zero out the return buffers */
  if( names != NULL )
    memset((char *)names, 0, ABS(n)*sizeof(char *));
  if( messages != NULL )
    memset((char *)messages, 0, ABS(n)*sizeof(char *));

  /* connect to clients and grab data */
  if( XPAClientConnect(xpa, mode, xtemplate, type) >0 ){
    /* retrieve data from n active clients */
    for(client=xpa->clienthead; client!=NULL; ){
      tclient = client->next;
      if( (client->type == type) && (client->status != XPA_CLIENT_IDLE) &&
	  (got<ABS(n)) ){
	if( names != NULL ){
	  snprintf(tbuf, SZ_LINE, "%s:%s %s",
		   client->xclass, client->name, client->method);
	  names[got] = xstrdup(tbuf);
	}
	if( XPAClientStart(xpa, client, paramlist, mode) >= 0 ){
	  /* we fill buffers */
	  client->mode |= XPA_CLIENT_BUF;
	  client->buf = buf;
	  client->len = len;
	  if( names != NULL )
	    client->nameptr = &(names[got]);
	  if( messages != NULL )
	    client->errptr = &(messages[got]);
	}
	else{
	  if( messages != NULL )
	    messages[got] = xstrdup(errbuf);
	}
	got++;
      }
      client = tclient;
    }
    /* if we have active clients */
    if( got ){
#if HAVE_MINGW32==0
      /* check for loop modes */
      XPAMode(mode, &xmode, "dofork", XPA_CLIENT_SEL_FORK, 0);
      /* dofork implies don't do xpa */
      if( xmode & XPA_CLIENT_SEL_FORK )
	idef = 0;
      XPAMode(mode, &xmode, "doxpa",  XPA_CLIENT_SEL_XPA, idef);
      if( xmode & XPA_CLIENT_SEL_FORK ){
	XPAClientLoopFork(xpa, xmode);
      }
      else{
	/* enter the main loop and process */
	XPAClientLoop(xpa, xmode);
      }
#else
      XPAMode(mode, &xmode, "doxpa",  XPA_CLIENT_SEL_XPA, idef);
      XPAClientLoop(xpa, xmode);
#endif
    }
  }
  /* look for clients who timed out */
  for(i=0, client=xpa->clienthead; client!=NULL; client=client->next){
    if( (client->type == type) && (client->status != XPA_CLIENT_IDLE) &&
	(i<ABS(n)) ){
      i++;
      if( (client->status == XPA_CLIENT_PROCESSING) && ( messages != NULL) ){
	snprintf(errbuf, SZ_LINE,
		 "XPA$ERROR: no response from server callback (%s:%s%s)\n",
		 client->xclass, client->name, XPATimestamp());
	messages[i] = xstrdup(errbuf);
      }
    }
  }
  /* remove this xpa if we are not meant to persist */
  if( xpa && !xpa->persist )
    XPAClose(xpa);
  /* restore xpa mode -- this call might override */
  else
    xpa->client_mode = oldmode;

  /* return number of clients processes (including errors) */
  return(got);
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPASetFd
 *
 * Purpose:	set XPA values
 *
 * Returns:	0 for success, -1 for failure
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
int 
XPASetFd (XPA xpa, char *xtemplate, char *paramlist, char *mode,
	      int fd, char **names, char **messages, int n)
#else
int XPASetFd(xpa, xtemplate, paramlist, mode, fd, names, messages, n)
     XPA  xpa;
     char *xtemplate;
     char *paramlist;
     char *mode;
     int fd;
     char **names;
     char **messages;
     int n;
#endif
{
  int i;
  int oldmode=0;
  int xmode=0;
  int got=0;
  int got2=0;
  int type='s';
  int idef=1;
  int flags;
  char *s;
  char tbuf[SZ_LINE];
  XPAClient client, tclient;

  FPRINTF((stderr, "%sXPASetFd: starting\n", _sp));
  /* if not persistent, we need a temp xpa struct;
     (also ignore passed struct if its not a client struct) */
  if( (xpa == NULL) || strcmp(xpa->type, "c")  ){
    if( (xpa = XPAOpen(NULL)) == NULL )
      return(-1);
    /* mark this as not persistent */
    xpa->persist = 0;
  }
  /* save xpa mode -- this call might override */
  else{
    /* make sure we have a valid client handle */
    if( !XPAClientValid(xpa) ){
      if( XPAVerbosity() ){
	fprintf(stderr, "XPA$ERROR: invalid xpa client handle\n");
      }
      return(-1);
    }
    oldmode = xpa->client_mode;
  }

  /* Set non-blocking mode for the input fd, if its not a tty */
  xpa->ifd = fd;
  if( isatty(xpa->ifd) == 0 ){
    /* save state and set in non-blocking mode */
    xfcntl_nonblock(xpa->ifd, flags);
  }
  /* zero out the return buffers */
  if( names != NULL )
    memset((char *)names, 0, ABS(n)*sizeof(char *));
  if( messages != NULL )
    memset((char *)messages, 0, ABS(n)*sizeof(char *));

  /* connect to clients and grab data */
  if( XPAClientConnect(xpa, mode, xtemplate, type) >0 ){
    /* open clients all at once */
    for(client=xpa->clienthead; client!=NULL; ){
      tclient = client->next;
      if( (client->type == type) && (client->status != XPA_CLIENT_IDLE) &&
	  (got<ABS(n)) ){
	if( names != NULL ){
	  snprintf(tbuf, SZ_LINE, "%s:%s %s",
		   client->xclass, client->name, client->method);
	  names[got] = xstrdup(tbuf);
	}
	if( XPAClientStart(xpa, client, paramlist, mode) >= 0 ){
	  /* we fill buffers */
	  client->mode |= XPA_CLIENT_FD;
	  if( names != NULL )
	    client->nameptr = &(names[got]);
	  if( messages != NULL )
	    client->errptr = &(messages[got]);
	}
	else{
	  if( messages != NULL )
	    messages[got] = xstrdup(errbuf);
	}
	got++;
      }
      client = tclient;
    }
    /* if we have active clients */
    if( got ){
      /* if fd is null, user did not want to send data, just the paramlist */
      if( fd < 0 ){
	for(client=xpa->clienthead; client!=NULL; ){
	  tclient = client->next;
	  if( (client->type == type) && (client->status != XPA_CLIENT_IDLE) &&
	      (got<ABS(n)) ){
	    XPAClientDataSent(xpa, client);
	    s = XPAClientEnd(xpa, client);
	    if( (messages != NULL) && (messages[got2] == NULL) )
	      messages[got2] = xstrdup(s);
	    got2++;
	  }
	  client = tclient;
	}
      }
      else{
#if HAVE_MINGW32==0
	/* check for loop modes */
	XPAMode(mode, &xmode, "dofork", XPA_CLIENT_SEL_FORK, 0);
	/* dofork implies don't do xpa */
	if( xmode & XPA_CLIENT_SEL_FORK )
	  idef = 0;
	XPAMode(mode, &xmode, "doxpa",  XPA_CLIENT_SEL_XPA, idef);
	if( xmode & XPA_CLIENT_SEL_FORK ){
	  XPAClientLoopFork(xpa, xmode);
	}
	else{
	  /* enter the main loop and process */
	  XPAClientLoop(xpa, xmode);
	}
#else
	XPAMode(mode, &xmode, "doxpa",  XPA_CLIENT_SEL_XPA, idef);
	XPAClientLoop(xpa, xmode);
#endif
      }
    }
  }
  /* look for clients who timed out */
  for(i=0, client=xpa->clienthead; client!=NULL; client=client->next){
    if( (client->type == type) && (client->status != XPA_CLIENT_IDLE) &&
	  (i<ABS(n)) ){
      i++;
      if( (client->status == XPA_CLIENT_PROCESSING) && ( messages != NULL) ){
	snprintf(errbuf, SZ_LINE,
		 "XPA$ERROR: no response from server callback (%s:%s%s)\n",
		 client->xclass, client->name, XPATimestamp());
	messages[i] = xstrdup(errbuf);
      }
    }
  }
  /* reset flags, if necessary */
  if( xpa->ifd >=0 && (isatty(xpa->ifd) ==0) ){
    xfcntl(xpa->ifd, F_SETFL, flags);
  }
  /* free all input structs */
  XPAClientFreeAllInputs(xpa);
  /* remove this xpa if we are not meant to persist */
  if( xpa && !xpa->persist )
    XPAClose(xpa);
  /* restore xpa mode -- this call might override */
  else
    xpa->client_mode = oldmode;

  /* return number of clients processes (including errors) */
  return(got);
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPAInfo
 *
 * Purpose:	send XPA info
 *
 * Returns:	0 for success, -1 for failure
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
int 
XPAInfo (XPA xpa, char *xtemplate, char *paramlist, char *mode,
	 char **names, char **messages, int n)
#else
int XPAInfo(xpa, xtemplate, paramlist, mode, names, messages, n)
     XPA  xpa;
     char *xtemplate;
     char *paramlist;
     char *mode;
     char **names;
     char **messages;
     int n;
#endif
{
  int i;
  int oldmode=0;
  int got=0;
  char type='i';
  char *s;
  char tbuf[SZ_LINE];
  XPAClient client, tclient;

  /* if not persistent, we need a temp xpa struct;
     (also ignore passed struct if its not a client struct) */
  if( (xpa == NULL) || strcmp(xpa->type, "c")  ){
    if( (xpa = XPAOpen(NULL)) == NULL )
      return(-1);
    /* mark this as not persistent */
    xpa->persist = 0;
  }
  /* save xpa mode -- this call might override */
  else{
    /* make sure we have a valid client handle */
    if( !XPAClientValid(xpa) ){
      if( XPAVerbosity() ){
	fprintf(stderr, "XPA$ERROR: invalid xpa client handle\n");
      }
      return(-1);
    }
    oldmode = xpa->client_mode;
  }

  /* flag that we don't read from stdin */
  xpa->ifd = -1;

  /* zero out the return buffers */
  if( names != NULL )
    memset((char *)names, 0, ABS(n)*sizeof(char *));
  if( messages != NULL )
    memset((char *)messages, 0, ABS(n)*sizeof(char *));

  /* connect to clients and grab data */
  if( XPAClientConnect(xpa, mode, xtemplate, type) >0 ){
    /* retrieve data from n active clients */
    for(client=xpa->clienthead; client!=NULL; ){
      tclient = client->next;
      if( (client->type == type) && (client->status != XPA_CLIENT_IDLE) &&
	  (got<ABS(n)) ){
	if( names != NULL ){
	  snprintf(tbuf, SZ_LINE, "%s:%s %s",
		   client->xclass, client->name, client->method);
	  names[got] = xstrdup(tbuf);
	}
	if( XPAClientStart(xpa, client, paramlist, mode) >= 0 ){
	  XPAClientDataSent(xpa, client);
	  s = XPAClientEnd(xpa, client);
	  if( (messages != NULL) && (messages[got] == NULL) )
	    messages[got] = xstrdup(s);
	}
	else{
	  if( (messages != NULL) && (messages[got] == NULL) )
	    messages[got] = xstrdup(errbuf);
	}
	got++;
      }
      client = tclient;
    }
  }
  /* look for clients who timed out */
  for(i=0, client=xpa->clienthead; client!=NULL; client=client->next){
    if( (client->type == type) && (client->status != XPA_CLIENT_IDLE) &&
	(i<ABS(n)) ){
      i++;
      if( (client->status == XPA_CLIENT_PROCESSING) && ( messages != NULL) ){
	snprintf(errbuf, SZ_LINE,
		 "XPA$ERROR: no response from server callback (%s:%s%s)\n",
		 client->xclass, client->name, XPATimestamp());
	messages[i] = xstrdup(errbuf);
      }
    }
  }
  /* remove this xpa if we are not meant to persist */
  if( xpa && !xpa->persist )
    XPAClose(xpa);
  /* restore xpa mode -- this call might override */
  else
    xpa->client_mode = oldmode;

  /* return number of clients processes (including errors) */
  return(got);
}

/*
 *----------------------------------------------------------------------------
 *
 * Routine:	XPAAccess
 *
 * Purpose:	determine if XPA access point is available
 *
 * Returns:	0 for success, -1 for failure
 *
 *----------------------------------------------------------------------------
 */
#ifdef ANSI_FUNC
int 
XPAAccess (XPA xpa, char *xtemplate, char *paramlist, char *mode,
	   char **names, char **messages, int n)
#else
int XPAAccess(xpa, xtemplate, paramlist, mode, names, messages, n)
     XPA  xpa; 
     char *xtemplate;
     char *paramlist;
     char *mode;
     char **names;
     char **messages;
     int n;
#endif
{
  int i;
  int oldmode=0;
  int xmode=0;
  int got=0;
  int type='a';
  char *s;
  char *ind1, *ind2;
  char tbuf[SZ_LINE];
  XPAClient client, tclient;

  /* if not persistent, we need a temp xpa struct;
     (also ignore passed struct if its not a client struct) */
  if( (xpa == NULL) || strcmp(xpa->type, "c")  ){
    if( (xpa = XPAOpen(NULL)) == NULL )
      return(-1);
    /* mark this as not persistent */
    xpa->persist = 0;
  }
  /* save xpa mode -- this call might override */
  else{
    /* make sure we have a valid client handle */
    if( !XPAClientValid(xpa) ){
      if( XPAVerbosity() ){
	fprintf(stderr, "XPA$ERROR: invalid xpa client handle\n");
      }
      return(-1);
    }
    oldmode = xpa->client_mode;
  }

  /* flag that we don't read from stdin */
  xpa->ifd = -1;

  /* zero out the return buffers */
  if( names != NULL )
    memset((char *)names, 0, ABS(n)*sizeof(char *));
  if( messages != NULL )
    memset((char *)messages, 0, ABS(n)*sizeof(char *));

  /* connect to clients and grab data */
  if( XPAClientConnect(xpa, mode, xtemplate, type) >0 ){
    /* retrieve data from n active clients */
    for(client=xpa->clienthead; client!=NULL; ){
      tclient = client->next;
      if( (client->type == type) && (client->status != XPA_CLIENT_IDLE) &&
	  (got<ABS(n)) ){
	if( names != NULL ){
	  snprintf(tbuf, SZ_LINE, "%s:%s %s",
		   client->xclass, client->name, client->method);
	  names[got] = xstrdup(tbuf);
	}
	if( XPAClientStart(xpa, client, paramlist, mode) >=0 ){
	  XPAClientDataSent(xpa, client);
	  s = XPAClientEnd(xpa, client);
	  if( (messages != NULL) && (messages[got] == NULL) )
	    messages[got] = xstrdup(s);
	}
	else{
	  if( (messages != NULL) && (messages[got] == NULL) )
	    messages[got] = xstrdup(errbuf);
	}
	/* might have to fix the name if was an explicit mach:port */
	if( names && names[got] && *errbuf &&
	    !strncmp(names[got], "?:?", 3) &&
	    (ind1=strrchr(errbuf, '(')) && (ind2=strrchr(errbuf, ')')) ){
	  ind1++;
	  strncpy(tbuf, ind1, ind2-ind1);
	  tbuf[ind2-ind1] = '\0';
	  xfree(names[got]);
	  names[got] = xstrdup(tbuf);
	}
	got++;
      }
      client = tclient;
    }
    /* if we have active clients */
    if( got ){
      /* check for loop modes */
      XPAMode(mode, &xmode, "doxpa",  XPA_CLIENT_SEL_XPA, 1);
      /* enter the main loop and process */
      XPAClientLoop(xpa, xmode);
    }
  }
  /* look for clients who timed out */
  for(i=0, client=xpa->clienthead; client!=NULL; client=client->next){
    if( (client->type == type) && (client->status != XPA_CLIENT_IDLE) &&
	(i<ABS(n)) ){
      i++;
      if( (client->status == XPA_CLIENT_PROCESSING) && ( messages != NULL) ){
	snprintf(errbuf, SZ_LINE,
		 "XPA$ERROR: no response from server callback (%s:%s%s)\n",
		 client->xclass, client->name, XPATimestamp());
	messages[i] = xstrdup(errbuf);
      }
    }
  }
  /* remove this xpa if we are not meant to persist */
  if( xpa && !xpa->persist )
    XPAClose(xpa);
  /* restore xpa mode -- this call might override */
  else
    xpa->client_mode = oldmode;

  /* return number of clients processes (including errors) */
  return(got);
}

